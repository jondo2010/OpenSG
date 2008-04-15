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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGORTHOGRAPHICCAMERAFIELDS_H_
#define _OSGORTHOGRAPHICCAMERAFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class OrthographicCamera;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! OrthographicCameraPtr

OSG_GEN_CONTAINERPTR(OrthographicCamera);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<OrthographicCameraPtr> :
    public FieldTraitsFCPtrBase<OrthographicCameraPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<OrthographicCameraPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFOrthographicCameraPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFOrthographicCameraPtr"; }
};

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCameraPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdOrthographicCameraPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<OrthographicCameraPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldSingle */

typedef PointerSField<OrthographicCameraPtr,
                      RecordedRefCountPolicy  > SFRecOrthographicCameraPtr;
typedef PointerSField<OrthographicCameraPtr,
                      UnrecordedRefCountPolicy> SFUnrecOrthographicCameraPtr;
typedef PointerSField<OrthographicCameraPtr,
                      WeakRefCountPolicy      > SFWeakOrthographicCameraPtr;
typedef PointerSField<OrthographicCameraPtr,
                      NoRefCountPolicy        > SFUncountedOrthographicCameraPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldMulti */

typedef PointerMField<OrthographicCameraPtr,
                      RecordedRefCountPolicy  > MFRecOrthographicCameraPtr;
typedef PointerMField<OrthographicCameraPtr,
                      UnrecordedRefCountPolicy> MFUnrecOrthographicCameraPtr;
typedef PointerMField<OrthographicCameraPtr,
                      WeakRefCountPolicy      > MFWeakOrthographicCameraPtr;
typedef PointerMField<OrthographicCameraPtr,
                      NoRefCountPolicy        > MFUncountedOrthographicCameraPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGORTHOGRAPHICCAMERAFIELDS_H_ */
