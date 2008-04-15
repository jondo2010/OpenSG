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


#ifndef _OSGGEOMULTIPROPERTYDATAFIELDS_H_
#define _OSGGEOMULTIPROPERTYDATAFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GeoMultiPropertyData;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! GeoMultiPropertyDataPtr

OSG_GEN_CONTAINERPTR(GeoMultiPropertyData);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpDrawableFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<GeoMultiPropertyDataPtr> :
    public FieldTraitsFCPtrBase<GeoMultiPropertyDataPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GeoMultiPropertyDataPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoMultiPropertyDataPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoMultiPropertyDataPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyDataPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoMultiPropertyDataPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<GeoMultiPropertyDataPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDrawableFieldSingle */

typedef PointerSField<GeoMultiPropertyDataPtr,
                      RecordedRefCountPolicy  > SFRecGeoMultiPropertyDataPtr;
typedef PointerSField<GeoMultiPropertyDataPtr,
                      UnrecordedRefCountPolicy> SFUnrecGeoMultiPropertyDataPtr;
typedef PointerSField<GeoMultiPropertyDataPtr,
                      WeakRefCountPolicy      > SFWeakGeoMultiPropertyDataPtr;
typedef PointerSField<GeoMultiPropertyDataPtr,
                      NoRefCountPolicy        > SFUncountedGeoMultiPropertyDataPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDrawableFieldMulti */

typedef PointerMField<GeoMultiPropertyDataPtr,
                      RecordedRefCountPolicy  > MFRecGeoMultiPropertyDataPtr;
typedef PointerMField<GeoMultiPropertyDataPtr,
                      UnrecordedRefCountPolicy> MFUnrecGeoMultiPropertyDataPtr;
typedef PointerMField<GeoMultiPropertyDataPtr,
                      WeakRefCountPolicy      > MFWeakGeoMultiPropertyDataPtr;
typedef PointerMField<GeoMultiPropertyDataPtr,
                      NoRefCountPolicy        > MFUncountedGeoMultiPropertyDataPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGGEOMULTIPROPERTYDATAFIELDS_H_ */
