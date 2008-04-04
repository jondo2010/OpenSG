/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPROGRAMCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGProgramChunkBase.h"
#include "OSGProgramChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ProgramChunk
    \ingroup GrpSystemState

    The ProgramChunk is the base class for generic ASCII-based programs
    inside OpenGL. For actual use see the derived VertexProgramChunk and
    FragmentProgramChunk.

    See \ref PageSystemProgramChunk for a description.

    The ProgramChunk contains the source code of the program to use
    (OSG::ProgramChunk::_sfProgram) and the local program parameters
    (OSG::ProgramChunk::_mfParamValues). The parameters can have an associated
    name (OSG::ProgramChunk::_mfParamNames).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ProgramChunkBase::_sfProgram
    The program source code.
*/

/*! \var Vec4f           ProgramChunkBase::_mfParamValues
    Program Parameters
*/

/*! \var std::string     ProgramChunkBase::_mfParamNames
    Symbolic names for the program parameters.
*/

/*! \var UInt32          ProgramChunkBase::_sfGLId
    The OpenGL ID of the program.
*/


void ProgramChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "program",
        "The program source code.\n",
        ProgramFieldId, ProgramFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ProgramChunkBase::editHandleProgram),
        static_cast<FieldGetMethodSig >(&ProgramChunkBase::getHandleProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec4f::Description(
        MFVec4f::getClassType(),
        "paramValues",
        "Program Parameters\n",
        ParamValuesFieldId, ParamValuesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ProgramChunkBase::editHandleParamValues),
        static_cast<FieldGetMethodSig >(&ProgramChunkBase::getHandleParamValues));

    oType.addInitialDesc(pDesc);

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "paramNames",
        "Symbolic names for the program parameters.\n",
        ParamNamesFieldId, ParamNamesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ProgramChunkBase::editHandleParamNames),
        static_cast<FieldGetMethodSig >(&ProgramChunkBase::getHandleParamNames));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "The OpenGL ID of the program.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ProgramChunkBase::editHandleGLId),
        static_cast<FieldGetMethodSig >(&ProgramChunkBase::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


ProgramChunkBase::TypeObject ProgramChunkBase::_type(
    ProgramChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ProgramChunk::initMethod,
    ProgramChunk::exitMethod,
    (InitalInsertDescFunc) &ProgramChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ProgramChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "The ProgramChunk is the base class for generic ASCII-based programs\n"
    "inside OpenGL. For actual use see the derived VertexProgramChunk and\n"
    "FragmentProgramChunk.\n"
    "\n"
    "See \\ref PageSystemProgramChunk for a description.\n"
    "\n"
    "The ProgramChunk contains the source code of the program to use\n"
    "(OSG::ProgramChunk::_sfProgram) and the local program parameters\n"
    "(OSG::ProgramChunk::_mfParamValues). The parameters can have an associated\n"
    "name (OSG::ProgramChunk::_mfParamNames).\n"
    "\t<Field\n"
    "\t\tname=\"program\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe program source code.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"paramValues\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tProgram Parameters\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"paramNames\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tSymbolic names for the program parameters.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    " \t\tdefaultValue=\"0\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe OpenGL ID of the program.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "The ProgramChunk is the base class for generic ASCII-based programs\n"
    "inside OpenGL. For actual use see the derived VertexProgramChunk and\n"
    "FragmentProgramChunk.\n"
    "\n"
    "See \\ref PageSystemProgramChunk for a description.\n"
    "\n"
    "The ProgramChunk contains the source code of the program to use\n"
    "(OSG::ProgramChunk::_sfProgram) and the local program parameters\n"
    "(OSG::ProgramChunk::_mfParamValues). The parameters can have an associated\n"
    "name (OSG::ProgramChunk::_mfParamNames).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ProgramChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ProgramChunkBase::getType(void) const
{
    return _type;
}

UInt32 ProgramChunkBase::getContainerSize(void) const
{
    return sizeof(ProgramChunk);
}

/*------------------------- decorator get ------------------------------*/


SFString *ProgramChunkBase::editSFProgram(void)
{
    editSField(ProgramFieldMask);

    return &_sfProgram;
}

const SFString *ProgramChunkBase::getSFProgram(void) const
{
    return &_sfProgram;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ProgramChunkBase::getSFProgram        (void)
{
    return this->editSFProgram        ();
}
#endif

MFVec4f *ProgramChunkBase::editMFParamValues(void)
{
    editMField(ParamValuesFieldMask, _mfParamValues);

    return &_mfParamValues;
}

const MFVec4f *ProgramChunkBase::getMFParamValues(void) const
{
    return &_mfParamValues;
}

#ifdef OSG_1_GET_COMPAT
MFVec4f             *ProgramChunkBase::getMFParamValues    (void)
{
    return this->editMFParamValues    ();
}
#endif

MFString *ProgramChunkBase::editMFParamNames(void)
{
    editMField(ParamNamesFieldMask, _mfParamNames);

    return &_mfParamNames;
}

const MFString *ProgramChunkBase::getMFParamNames(void) const
{
    return &_mfParamNames;
}

#ifdef OSG_1_GET_COMPAT
MFString            *ProgramChunkBase::getMFParamNames     (void)
{
    return this->editMFParamNames     ();
}
#endif

SFUInt32 *ProgramChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *ProgramChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *ProgramChunkBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif



/*********************************** Non-ptr code ********************************/
void ProgramChunkBase::pushToParamValues(const Vec4f& value)
{
    editMField(ParamValuesFieldMask, _mfParamValues);
    _mfParamValues.push_back(value);
}

void ProgramChunkBase::insertIntoParamValues(UInt32                uiIndex,
                                                   const Vec4f& value   )
{
    editMField(ParamValuesFieldMask, _mfParamValues);

    MFVec4f::iterator fieldIt = _mfParamValues.begin();

    fieldIt += uiIndex;

    _mfParamValues.insert(fieldIt, value);
}

void ProgramChunkBase::replaceInParamValues(UInt32                uiIndex,
                                                       const Vec4f& value   )
{
    if(uiIndex >= _mfParamValues.size())
        return;

    editMField(ParamValuesFieldMask, _mfParamValues);

    _mfParamValues[uiIndex] = value;
}

void ProgramChunkBase::replaceInParamValues(const Vec4f& pOldElem,
                                                        const Vec4f& pNewElem)
{
    Int32  elemIdx = _mfParamValues.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ParamValuesFieldMask, _mfParamValues);

        MFVec4f::iterator fieldIt = _mfParamValues.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ProgramChunkBase::removeFromParamValues(UInt32 uiIndex)
{
    if(uiIndex < _mfParamValues.size())
    {
        editMField(ParamValuesFieldMask, _mfParamValues);

        MFVec4f::iterator fieldIt = _mfParamValues.begin();

        fieldIt += uiIndex;
        _mfParamValues.erase(fieldIt);
    }
}

void ProgramChunkBase::removeFromParamValues(const Vec4f& value)
{
    Int32 iElemIdx = _mfParamValues.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ParamValuesFieldMask, _mfParamValues);

        MFVec4f::iterator fieldIt = _mfParamValues.begin();

        fieldIt += iElemIdx;

        _mfParamValues.erase(fieldIt);
    }
}

void ProgramChunkBase::clearParamValues(void)
{
    editMField(ParamValuesFieldMask, _mfParamValues);

    _mfParamValues.clear();
}
/*********************************** Non-ptr code ********************************/
void ProgramChunkBase::pushToParamNames(const std::string& value)
{
    editMField(ParamNamesFieldMask, _mfParamNames);
    _mfParamNames.push_back(value);
}

void ProgramChunkBase::insertIntoParamNames(UInt32                uiIndex,
                                                   const std::string& value   )
{
    editMField(ParamNamesFieldMask, _mfParamNames);

    MFString::iterator fieldIt = _mfParamNames.begin();

    fieldIt += uiIndex;

    _mfParamNames.insert(fieldIt, value);
}

void ProgramChunkBase::replaceInParamNames(UInt32                uiIndex,
                                                       const std::string& value   )
{
    if(uiIndex >= _mfParamNames.size())
        return;

    editMField(ParamNamesFieldMask, _mfParamNames);

    _mfParamNames[uiIndex] = value;
}

void ProgramChunkBase::replaceInParamNames(const std::string& pOldElem,
                                                        const std::string& pNewElem)
{
    Int32  elemIdx = _mfParamNames.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ParamNamesFieldMask, _mfParamNames);

        MFString::iterator fieldIt = _mfParamNames.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ProgramChunkBase::removeFromParamNames(UInt32 uiIndex)
{
    if(uiIndex < _mfParamNames.size())
    {
        editMField(ParamNamesFieldMask, _mfParamNames);

        MFString::iterator fieldIt = _mfParamNames.begin();

        fieldIt += uiIndex;
        _mfParamNames.erase(fieldIt);
    }
}

void ProgramChunkBase::removeFromParamNames(const std::string& value)
{
    Int32 iElemIdx = _mfParamNames.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ParamNamesFieldMask, _mfParamNames);

        MFString::iterator fieldIt = _mfParamNames.begin();

        fieldIt += iElemIdx;

        _mfParamNames.erase(fieldIt);
    }
}

void ProgramChunkBase::clearParamNames(void)
{
    editMField(ParamNamesFieldMask, _mfParamNames);

    _mfParamNames.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ProgramChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        returnValue += _sfProgram.getBinSize();
    }
    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
    {
        returnValue += _mfParamValues.getBinSize();
    }
    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
    {
        returnValue += _mfParamNames.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void ProgramChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        _sfProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
    {
        _mfParamValues.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
    {
        _mfParamNames.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void ProgramChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        _sfProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
    {
        _mfParamValues.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
    {
        _mfParamNames.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ProgramChunkBase::ProgramChunkBase(void) :
    Inherited(),
    _sfProgram                (),
    _mfParamValues            (),
    _mfParamNames             (),
    _sfGLId                   (UInt32(0))
{
}

ProgramChunkBase::ProgramChunkBase(const ProgramChunkBase &source) :
    Inherited(source),
    _sfProgram                (source._sfProgram                ),
    _mfParamValues            (source._mfParamValues            ),
    _mfParamNames             (source._mfParamNames             ),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

ProgramChunkBase::~ProgramChunkBase(void)
{
}


GetFieldHandlePtr ProgramChunkBase::getHandleProgram         (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfProgram, 
             this->getType().getFieldDesc(ProgramFieldId)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleProgram        (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfProgram, 
             this->getType().getFieldDesc(ProgramFieldId)));

    editSField(ProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProgramChunkBase::getHandleParamValues     (void) const
{
    MFVec4f::GetHandlePtr returnValue(
        new  MFVec4f::GetHandle(
             &_mfParamValues, 
             this->getType().getFieldDesc(ParamValuesFieldId)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleParamValues    (void)
{
    MFVec4f::EditHandlePtr returnValue(
        new  MFVec4f::EditHandle(
             &_mfParamValues, 
             this->getType().getFieldDesc(ParamValuesFieldId)));

    editMField(ParamValuesFieldMask, _mfParamValues);

    return returnValue;
}

GetFieldHandlePtr ProgramChunkBase::getHandleParamNames      (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfParamNames, 
             this->getType().getFieldDesc(ParamNamesFieldId)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleParamNames     (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfParamNames, 
             this->getType().getFieldDesc(ParamNamesFieldId)));

    editMField(ParamNamesFieldMask, _mfParamNames);

    return returnValue;
}

GetFieldHandlePtr ProgramChunkBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr ProgramChunkBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ProgramChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void ProgramChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfParamValues.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfParamNames.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ProgramChunkPtr>::_type("ProgramChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ProgramChunkPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, ProgramChunkPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, ProgramChunkPtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, ProgramChunkPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, ProgramChunkPtr, 0);

OSG_END_NAMESPACE
