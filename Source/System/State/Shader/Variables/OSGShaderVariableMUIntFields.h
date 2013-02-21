/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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


#ifndef _OSGSHADERVARIABLEMUINTFIELDS_H_
#define _OSGSHADERVARIABLEMUINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderVariableMUInt;

OSG_GEN_CONTAINERPTR(ShaderVariableMUInt);
/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderVariableMUInt *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderVariableMUInt *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderVariableMUInt *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderVariableMUIntPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableMUInt *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderVariableMUIntPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableMUInt *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderVariableMUIntPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableMUInt *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderVariableMUIntPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableMUInt *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderVariableMUIntPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableMUInt *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderVariableMUIntPtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableMUInt *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderVariableMUIntPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableMUInt *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderVariableMUIntPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableMUInt *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderVariableMUIntPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableMUInt *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderVariableMUIntPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderVariableMUIntPtr : 
    public PointerSField<ShaderVariableMUInt *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderVariableMUIntPtr : 
    public PointerSField<ShaderVariableMUInt *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderVariableMUIntPtr :
    public PointerSField<ShaderVariableMUInt *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderVariableMUIntPtr :
    public PointerSField<ShaderVariableMUInt *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderVariableMUIntPtr :
    public PointerMField<ShaderVariableMUInt *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderVariableMUIntPtr :
    public PointerMField<ShaderVariableMUInt *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderVariableMUIntPtr :
    public PointerMField<ShaderVariableMUInt *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderVariableMUIntPtr :
    public PointerMField<ShaderVariableMUInt *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERVARIABLEMUINTFIELDS_H_ */