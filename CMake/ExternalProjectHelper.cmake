
####################
# WARNING WARNING
#
# HIGHLY IN PROGRESS
####################

INCLUDE(OpenSGVersion)

MACRO(OSG_INIT)

  SET(BUILD_SHARED_LIBS "Set to OFF to build static libraries" ON)

  MESSAGE(STATUS "ARGS: ${ARGC} | ${ARGV} ")

  SET(_OSG_COMPONENTS ${ARGV})

  SET(OSG_PLATFORM_64 0)
  SET(OSG_PLATFORM_32 0)
  SET(OSG_LIBDIR_SUFFIX "")

  IF(CMAKE_SIZEOF_VOID_P EQUAL 8)
    SET(OSG_PLATFORM_64 1)
    SET(OSG_LIBDIR_SUFFIX "64")
    SET(OSG_LIBDIR_BASE_SUFFIX "64")
  ELSE()
    SET(OSG_PLATFORM_32 1)
  ENDIF()

  #############
  #### OpenSG

  FIND_PACKAGE(OpenSG REQUIRED COMPONENTS ${_OSG_COMPONENTS})

  IF(OpenSG_DIR)
    IF(NOT OSG_COMPILER_DEFAULTS)
      INCLUDE(SetupCompiler)
      SET(OSG_COMPILER_DEFAULTS 1 CACHE INTERNAL "Defaults written" FORCE ) #INTERNAL
    ENDIF(NOT OSG_COMPILER_DEFAULTS)

    INCLUDE(UpdateCompiler)

    INCLUDE(BuildFunctions)
    INCLUDE(ConfigurePackages)

    INCLUDE_DIRECTORIES(${OpenSG_INCLUDE_DIRS})

    LIST(FIND _OSG_COMPONENTS OSGFileIO _OSG_USE_FILEIO)
    LIST(FIND _OSG_COMPONENTS OSGImageFileIO _OSG_USE_IMAGEFILEIO)
    LIST(FIND _OSG_COMPONENTS OSGContribComputeBase _OSG_USE_CONTRIBCOMPUTE)

  ENDIF(OpenSG_DIR)

  #############
  #### Support
  #############

  IF(UNIX)
    FIND_LIBRARY(OSG_THREAD_LIB NAMES pthread)
    FIND_LIBRARY(OSG_DL_LIB     NAMES dl)

    OSG_ADD_OPT(OSG_THREAD_LIB)
    OSG_ADD_OPT(OSG_DL_LIB)
  ENDIF(UNIX)

  #############
  #### OpenGL
  #############

  FIND_PACKAGE(OpenGL REQUIRED)
  FIND_PACKAGE(GLU REQUIRED)

  OSG_ADD_OPT(OPENGL_gl_LIBRARY)
  OSG_ADD_OPT(OPENGL_glu_LIBRARY)

  #############
  #### GLUT
  #############

  IF(NOT APPLE)
    OSG_CONFIGURE_GLUT()

    IF(GLUT_FOUND)
      OSG_SET(OSG_WITH_GLUT 1)
      OSG_SET(OSG_GLUT_INC_DIR ${GLUT_INCLUDE_DIR})
      OSG_SET(OSG_GLUT_LIBS ${GLUT_LIBRARIES})
    ELSE(GLUT_FOUND)
      OSG_SET(OSG_WITH_GLUT 0)
      OSG_SET(OSG_GLUT_INC_DIR "")
      OSG_SET(OSG_GLUT_LIBS "")
    ENDIF(GLUT_FOUND)
        
  ENDIF(NOT APPLE)

  #############
  #### Python
  #############

  FIND_PACKAGE(PythonInterp)

  ##########
  #### boost
  ##########

  OSG_CONFIGURE_BOOST()
  OSG_CONFIGURE_ZLIB()

  MESSAGE(STATUS "Need fileio deps :${_OSG_USE_FILEIO}")
  MESSAGE(STATUS "Need imgfileio deps :${_OSG_USE_IMAGEFILEIO}")

  IF(_OSG_USE_IMAGEFILEIO)
    OSG_CONFIGURE_TIFF()
    OSG_CONFIGURE_PNG()
    OSG_CONFIGURE_JPEG()
    OSG_CONFIGURE_OPENEXR()
  ENDIF(_OSG_USE_IMAGEFILEIO)

  IF(_OSG_USE_FILEIO)
    OSG_CONFIGURE_COLLADA()

    IF(COLLADA_FOUND)

      IF(CMAKE_BUILD_TYPE STREQUAL "Debug" OR 
         CMAKE_BUILD_TYPE STREQUAL "DebugOpt")

        OSG_SET(OSG_COLLADA_LIBS ${COLLADA_LIBRARY_DEBUG})

      ELSE()

        OSG_SET(OSG_COLLADA_LIBS ${COLLADA_LIBRARY_RELEASE})

      ENDIF()

      IF(WIN32)
        SET(OSG_COLLADA_LIBS ${OSG_COLLADA_TARGETS})
      ENDIF(WIN32)

    ELSE(COLLADA_FOUND)

        SET(OSG_COLLADA_LIBS "")

    ENDIF(COLLADA_FOUND)
  ENDIF(_OSG_USE_FILEIO)

  IF(_OSG_USE_CONTRIBCOMPUTE)
    FIND_PACKAGE(CUDA QUIET REQUIRED)

    INCLUDE(ConfigurePackages.OSGContribComputeBase)

    IF(NOT OSG_BUILD_DEPENDEND)
      OSG_CONFIGURE_NVSDKCOMMON()
      OSG_CONFIGURE_NVOCLUTILS()
      OSG_CONFIGURE_CUDACOMMON()
      OSG_CONFIGURE_CUDAUTIL()
      OSG_CONFIGURE_CUDPP()
      OSG_CONFIGURE_CUDAPARTSDK()
    ENDIF(NOT OSG_BUILD_DEPENDEND)

    MESSAGE(STATUS "NV Status: NV:${OSG_NVSDKCOMMON_FOUND}")
    MESSAGE(STATUS "Cuda Status: CC:${OSG_CUDACOMMON_FOUND} CU:${OSG_CUDAUTIL_FOUND} CP:${OSG_CUDPP_FOUND}")
    MESSAGE(STATUS "OCL Status : NV:${OSG_NVOCLUTILS_FOUND}")
  ENDIF(_OSG_USE_CONTRIBCOMPUTE)

  CHECK_BUILD_DIR()

  SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
  SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
  SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

IF(WIN32)
  OSG_OPTION(OSG_USE_SEPARATE_LIBDIRS "" ON)
ENDIF(WIN32)

ENDMACRO(OSG_INIT)

MACRO(OSG_COLLECT_LIBS)

# when adding passes, make sure to add a corresponding pass directory variable
# OSG_PASSDIR_${PASSNAME} - this variable may not be empty!
SET(OSG_CMAKE_PASSES "OSGCOLLECT" "OSGSETUP")

SET(OSG_PASSDIR_OSGCOLLECT "Collect")
SET(OSG_PASSDIR_OSGSETUP   "Build")

###############
# Clean
###############

FILE(GLOB OSG_OLD_BUILD_FILES  "${CMAKE_BINARY_DIR}/*.cmake")

IF(OSG_OLD_BUILD_FILES)
    FILE(REMOVE ${OSG_OLD_BUILD_FILES})
ENDIF(OSG_OLD_BUILD_FILES)

INCLUDE(OpenSGExtDep)

FOREACH(_OSG_COMPONENT ${STORED_PROJECTS})

  MESSAGE(STATUS "FAKE : ${CMAKE_BINARY_DIR}/${_OSG_COMPONENT}.cmake")
  FILE(WRITE ${CMAKE_BINARY_DIR}/${_OSG_COMPONENT}.cmake "#dummy")

  SET(_OSG_COMPONENT_LI )

  FOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_OSG_LIB})
    LIST(APPEND _OSG_COMPONENT_LI ${_OSG_COMPONENT_DEP})
  ENDFOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_OSG_LIB})

  FOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_LIB})
    IF(TARGET ${_OSG_COMPONENT_DEP})
      LIST(APPEND _OSG_COMPONENT_LI ${_OSG_COMPONENT_DEP})
    ELSE(TARGET ${_OSG_COMPONENT_DEP})
      LIST(APPEND _OSG_COMPONENT_LI ${${_OSG_COMPONENT_DEP}})
    ENDIF(TARGET ${_OSG_COMPONENT_DEP})
  ENDFOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_LIB})

  IF(_OSG_COMPONENT_LI AND TARGET ${_OSG_COMPONENT})
    SET_TARGET_PROPERTIES(${_OSG_COMPONENT} PROPERTIES
                          IMPORTED_LINK_INTERFACE_LIBRARIES "${_OSG_COMPONENT_LI}")
  ENDIF(_OSG_COMPONENT_LI AND TARGET ${_OSG_COMPONENT})

ENDFOREACH(_OSG_COMPONENT ${STORE_PROJECTS})

###############
# Tests
###############

# optional pass for test programs
LIST(APPEND OSG_CMAKE_PASSES "OSGSETUPTEST")
SET(OSG_PASSDIR_OSGSETUPTEST "Test")

OSG_OPTION(OSG_ENABLE_FCD2CODE "" ON)
OSG_OPTION(OSG_FCD2CODE_WRITE_CLASS "" OFF)

IF(NOT WIN32 AND NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE Debug CACHE STRING
      "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
      FORCE)
ENDIF(NOT WIN32 AND NOT CMAKE_BUILD_TYPE)

###############
# Passes
###############

# Find files describing libraries to build, but make sure base
# and system are processed first
FILE(GLOB_RECURSE OSG_LIBRARY_CONFIG_FILES RELATIVE "${CMAKE_SOURCE_DIR}"
     "./*CMakeLists.Lib.*.txt")

FOREACH(LIBCONFIGFILE ${OSG_LIBRARY_CONFIG_FILES})
  GET_FILENAME_COMPONENT(LIBCONFIGDIR "${LIBCONFIGFILE}" PATH)
  GET_FILENAME_COMPONENT(LIBFILENAME  "${LIBCONFIGFILE}" NAME)
  STRING(REPLACE "CMakeLists.Lib." "" LIBFILENAME "${LIBFILENAME}")
  STRING(REPLACE ".txt"            "" LIBFILENAME "${LIBFILENAME}")

  IF(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${LIBCONFIGDIR}/${LIBFILENAME}.Prepare.cmake)
    INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/${LIBCONFIGDIR}/${LIBFILENAME}.Prepare.cmake)
  ENDIF()
ENDFOREACH(LIBCONFIGFILE)

# run build passes
FOREACH(PASS ${OSG_CMAKE_PASSES})
    SET(OSG_CMAKE_PASS ${PASS})

    MESSAGE(STATUS "\nPASS : ${OSG_CMAKE_PASS} in ${OSG_PASSDIR_${PASS}}\n")

    FOREACH(LIBCONFIGFILE ${OSG_LIBRARY_CONFIG_FILES})
        GET_FILENAME_COMPONENT(LIBCONFIGDIR "${LIBCONFIGFILE}" PATH)
        GET_FILENAME_COMPONENT(LIBFILENAME  "${LIBCONFIGFILE}" NAME)
        STRING(REPLACE "CMakeLists.Lib." "" LIBFILENAME "${LIBFILENAME}")
        STRING(REPLACE ".txt"            "" LIBFILENAME "${LIBFILENAME}")

        ADD_SUBDIRECTORY("${LIBCONFIGDIR}" "${OSG_PASSDIR_${PASS}}/${LIBFILENAME}")

    ENDFOREACH(LIBCONFIGFILE)
   
ENDFOREACH()

ENDMACRO(OSG_COLLECT_LIBS)
