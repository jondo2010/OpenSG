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


#ifndef _OSGSHADOWMAPENGINEFIELDS_H_
#define _OSGSHADOWMAPENGINEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShadowMapEngine;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ShadowMapEnginePtr

OSG_GEN_CONTAINERPTR(ShadowMapEngine);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpGroupFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ShadowMapEnginePtr> :
    public FieldTraitsFCPtrBase<ShadowMapEnginePtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShadowMapEnginePtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShadowMapEnginePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShadowMapEnginePtr"; }
};

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShadowMapEnginePtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShadowMapEnginePtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ShadowMapEnginePtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldSingle */

typedef PointerSField<ShadowMapEnginePtr,
                      RecordedRefCountPolicy  > SFRecShadowMapEnginePtr;
typedef PointerSField<ShadowMapEnginePtr,
                      UnrecordedRefCountPolicy> SFUnrecShadowMapEnginePtr;
typedef PointerSField<ShadowMapEnginePtr,
                      WeakRefCountPolicy      > SFWeakShadowMapEnginePtr;
typedef PointerSField<ShadowMapEnginePtr,
                      NoRefCountPolicy        > SFUncountedShadowMapEnginePtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldMulti */

typedef PointerMField<ShadowMapEnginePtr,
                      RecordedRefCountPolicy  > MFRecShadowMapEnginePtr;
typedef PointerMField<ShadowMapEnginePtr,
                      UnrecordedRefCountPolicy> MFUnrecShadowMapEnginePtr;
typedef PointerMField<ShadowMapEnginePtr,
                      WeakRefCountPolicy      > MFWeakShadowMapEnginePtr;
typedef PointerMField<ShadowMapEnginePtr,
                      NoRefCountPolicy        > MFUncountedShadowMapEnginePtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSHADOWMAPENGINEFIELDS_H_ */
