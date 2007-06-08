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


#ifndef _OSGMANIPULATORFIELDS_H_
#define _OSGMANIPULATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribGUIDef.h"

#include "OSGTransformFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class Manipulator;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ManipulatorPtr

typedef PointerFwdBuilder<TransformPtr,
                          TransformConstPtr,
                          Manipulator>::ObjPtr         ManipulatorPtr;
typedef PointerFwdBuilder<TransformPtr,
                          TransformConstPtr,
                          Manipulator>::ObjPtrConst    ManipulatorPtrConst;
typedef PointerFwdBuilder<TransformPtr,
                          TransformConstPtr,
                          Manipulator>::ObjConstPtr    ManipulatorConstPtr;
typedef PointerFwdBuilder<TransformPtr,
                          TransformConstPtr,
                          Manipulator>::ObjPtrArg      ManipulatorPtrArg;
typedef PointerFwdBuilder<TransformPtr,
                          TransformConstPtr,
                          Manipulator>::ObjConstPtrArg ManipulatorConstPtrArg;
typedef PointerFwdBuilder<TransformPtr,
                          TransformConstPtr,
                          Manipulator>::ObjPtrConstArg ManipulatorPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribGUIFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ManipulatorPtr> :
    public FieldTraitsTemplateBase<ManipulatorPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ManipulatorPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBGUI_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFManipulatorPtr"; }
    static const char *getMName(void) { return "MFManipulatorPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ManipulatorPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribGUIFieldSingle */

typedef SFieldAdaptor<ManipulatorPtr, SFFieldContainerPtr> SFManipulatorPtr;
#endif

#ifndef OSG_COMPILEMANIPULATORINST
OSG_FIELD_DLLEXPORT_DECL1(SField, ManipulatorPtr, OSG_CONTRIBGUI_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribGUIFieldMulti */

typedef MFieldAdaptor<ManipulatorPtr, MFFieldContainerPtr> MFManipulatorPtr;
#endif

#ifndef OSG_COMPILEMANIPULATORINST
OSG_FIELD_DLLEXPORT_DECL1(MField, ManipulatorPtr, OSG_CONTRIBGUI_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGMANIPULATORFIELDS_H_ */
