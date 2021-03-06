// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef _PYOPENSG_BASEWRAPPERS_H_
#define _PYOPENSG_BASEWRAPPERS_H_

#include <boost/python.hpp>
#include <OSGMatrix.h>
#include <OSGVector.h>
#include <OSGQuaternion.h>

namespace bp = boost::python;

/** Wrapper methods for getting values from some types. */
namespace osgwrap
{

/**
 * A wrapper for OSG::osgInit() to give it a Python-friendly interface. The
 * Python version of OSG::osgInit() takes a regular Python list as its only
 * argument. This wrapper function converts that input into the form that is
 * actually expected by OSG::osgInit().
 *
 * @param pythonArgv A list, possibly empty, of strings.
 */
bool osgInitWrapper(bp::list pythonArgv);

/**
 * @name Simple Multi-Value Helper Functions
 *
 * These functions are used to extract the data from objects with an array
 * interface and return that data as a Python tuple. Instantiations of these
 * functions are performed for types such as OSG::Pnt3d and OSG::Vec4f.
 */
//@{
template<typename T>
boost::python::tuple getValues2(T* obj)
{
   return boost::python::make_tuple((*obj)[0], (*obj)[1]);
}

template<typename T>
boost::python::tuple getValues3(T* obj)
{
   return boost::python::make_tuple((*obj)[0], (*obj)[1], (*obj)[2]);
}

template<typename T>
boost::python::tuple getValues4(T* obj)
{
   return boost::python::make_tuple((*obj)[0], (*obj)[1], (*obj)[2], (*obj)[3]);
}

#if defined(__GCCXML__)
template boost::python::tuple getValues3(OSG::Pnt3f*);
template boost::python::tuple getValues4(OSG::Pnt4f*);

template boost::python::tuple getValues4(OSG::Quaternion*);
template boost::python::tuple getValues4(OSG::Quaterniond*);

template boost::python::tuple getValues3(OSG::Vec3f*);
template boost::python::tuple getValues4(OSG::Vec4f*);
#endif
//@}

/**
 * @name Large Multi-Value Helper Functions
 *
 * These functions are used to extract the data from objects with an array
 * interface and return that data as a Python list. These are distinguished
 * from the tuple-returning counterparts by the size of the data returned.
 * boost::python::tuple has a compile-time size limit, whereas
 * boost::python::list can grow dynamically. Instantiations of these
 * functions are performed for types such as OSG::Matrix.
 */
//@{
template<typename T, unsigned SIZE>
static boost::python::list makeDataList(T* data)
{
   boost::python::list l;

   for ( unsigned int i = 0; i < SIZE; ++i )
   {
      l.append(data[i]);
   }

   return l;
}

template<typename T>
boost::python::list getValuesMatrix(OSG::TransformationMatrix<T>* matrix)
{
   return makeDataList<T, 16>(matrix->getValues());
}

template<typename T>
boost::python::tuple getTransform_Matrix(OSG::TransformationMatrix<T>* matrix)
{
   typename OSG::TransformationMatrix<T>::VectorType3f trans, scale;
   typename OSG::TransformationMatrix<T>::QuaternionType rotation, scaleOrientation;
   matrix->getTransform(trans, rotation, scale, scaleOrientation);

   return boost::python::make_tuple(trans, rotation, scale, scaleOrientation);
}

#if defined(__GCCXML__)
template boost::python::list getValuesMatrix(OSG::Matrix*);
template boost::python::list getValuesMatrix(OSG::Matrix4d*);
#endif
//@}

/**
 * Provides a Python-friendly interface for setting an indexed value of a C++
 * object type that has an array interface. Instatiations of this function
 * could be made for types such as OSG::Pnt3d or OSG::Quaternion. Uses are
 * generally found in the generated C++ code.
 */
template<typename T, typename S>
void setArrayElement(T* obj, const unsigned int i, S value)
{
   (*obj)[i] = value;
}

/** @name Matrix Manipulation Wrappers */
//@{
/**
 * Provides a Python-friendly interface for setting the value of an
 * OSG::TransformationMatrix<T> object using
 * OSG::TransformationMatrix<T>::setValue(). The values are provided in a
 * Python list.
 *
 * @param matrix     The matrix whose values will be set.
 * @param pyData     The list of values to assign to the given matrix. This
 *                   list must contain 16 values of a type that can be
 *                   converted to T.
 * @param transposed A flag indicating whether the given data is transposed.
 *                   This parameter is optional, and it defaults to true if
 *                   not given.
 */
template<typename T>
void setValueMatrix(OSG::TransformationMatrix<T>* matrix,
                    boost::python::list pyData, bool transposed = true)
{
   T mat_data[16];

   for ( unsigned int i = 0; i < 16; ++i )
   {
      mat_data[i] = boost::python::extract<T>(pyData[i]);
   }

   matrix->setValue(mat_data, transposed);
}

//XXX: Currently there is a bug (#5439) in gccxml that does all explicit
// member template instantiation of templated classes. For now we will have to
// manually wrap these methods.
template<typename L, typename R>
void wrapMatrixMult(OSG::TransformationMatrix<L>* left,
                    const OSG::TransformationMatrix<R>& right)
{
   left->mult(right);
}

template<typename L, typename R>
void wrapMatrixMultLeft(OSG::TransformationMatrix<L>* left,
                        const OSG::TransformationMatrix<R>& right)
{
   left->multLeft(right);
}
//@}

#if defined(__GCCXML__)
template void wrapMatrixMult(OSG::TransformationMatrix<OSG::Real32>*, const OSG::TransformationMatrix<OSG::Real32>&);
template void wrapMatrixMult(OSG::TransformationMatrix<OSG::Real32>*, const OSG::TransformationMatrix<OSG::Real64>&);
template void wrapMatrixMult(OSG::TransformationMatrix<OSG::Real64>*, const OSG::TransformationMatrix<OSG::Real32>&);
template void wrapMatrixMult(OSG::TransformationMatrix<OSG::Real64>*, const OSG::TransformationMatrix<OSG::Real64>&);
template void wrapMatrixMultLeft(OSG::TransformationMatrix<OSG::Real32>*, const OSG::TransformationMatrix<OSG::Real32>&);
template void wrapMatrixMultLeft(OSG::TransformationMatrix<OSG::Real32>*, const OSG::TransformationMatrix<OSG::Real64>&);
template void wrapMatrixMultLeft(OSG::TransformationMatrix<OSG::Real64>*, const OSG::TransformationMatrix<OSG::Real32>&);
template void wrapMatrixMultLeft(OSG::TransformationMatrix<OSG::Real64>*, const OSG::TransformationMatrix<OSG::Real64>&);
#endif

/** @name Quaternion Wrapper Functions */
//@{
template<typename ValueType>
boost::python::tuple getValueAsAxisDeg(OSG::QuaternionBase<ValueType>* quat)
{
   typedef OSG::Vector<ValueType, 3> vec_t;

   vec_t axis;
   ValueType degs;
   quat->getValueAsAxisDeg(axis, degs);
   return boost::python::make_tuple(axis, degs);
}

template<typename ValueType>
boost::python::tuple getValueAsAxisRad(OSG::QuaternionBase<ValueType>* quat)
{
   typedef OSG::Vector<ValueType, 3> vec_t;

   vec_t axis;
   ValueType rads;
   quat->getValueAsAxisDeg(axis, rads);
   return boost::python::make_tuple(axis, rads);
}

#if defined(__GCCXML__)
template boost::python::tuple getValueAsAxisDeg(OSG::Quaternion*);
template boost::python::tuple getValueAsAxisDeg(OSG::Quaterniond*);

template boost::python::tuple getValueAsAxisRad(OSG::Quaternion*);
template boost::python::tuple getValueAsAxisRad(OSG::Quaterniond*);
#endif
//@}

}

#endif /* _PYOPENSG_BASEWRAPPERS_H_ */
