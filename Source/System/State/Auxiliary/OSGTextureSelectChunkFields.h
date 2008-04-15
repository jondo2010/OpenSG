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


#ifndef _OSGTEXTURESELECTCHUNKFIELDS_H_
#define _OSGTEXTURESELECTCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TextureSelectChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureSelectChunkPtr

OSG_GEN_CONTAINERPTR(TextureSelectChunk);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureSelectChunkPtr> :
    public FieldTraitsFCPtrBase<TextureSelectChunkPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureSelectChunkPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureSelectChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureSelectChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextureSelectChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureSelectChunkPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextureSelectChunkPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureSelectChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef PointerSField<TextureSelectChunkPtr,
                      RecordedRefCountPolicy  > SFRecTextureSelectChunkPtr;
typedef PointerSField<TextureSelectChunkPtr,
                      UnrecordedRefCountPolicy> SFUnrecTextureSelectChunkPtr;
typedef PointerSField<TextureSelectChunkPtr,
                      WeakRefCountPolicy      > SFWeakTextureSelectChunkPtr;
typedef PointerSField<TextureSelectChunkPtr,
                      NoRefCountPolicy        > SFUncountedTextureSelectChunkPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef PointerMField<TextureSelectChunkPtr,
                      RecordedRefCountPolicy  > MFRecTextureSelectChunkPtr;
typedef PointerMField<TextureSelectChunkPtr,
                      UnrecordedRefCountPolicy> MFUnrecTextureSelectChunkPtr;
typedef PointerMField<TextureSelectChunkPtr,
                      WeakRefCountPolicy      > MFWeakTextureSelectChunkPtr;
typedef PointerMField<TextureSelectChunkPtr,
                      NoRefCountPolicy        > MFUncountedTextureSelectChunkPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGTEXTURESELECTCHUNKFIELDS_H_ */
