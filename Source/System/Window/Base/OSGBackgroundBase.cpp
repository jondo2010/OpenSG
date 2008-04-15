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
 **     class Background!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBackgroundBase.h"
#include "OSGBackground.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Background
    \ingroup GrpSystemWindowBackgrounds

    Background is the base class for all background/buffer clearing.  See \ref
    PageSystemWindowBackground for a description.

    \ext

    To create a new Background the method that has be overridden is
    clear(DrawActionBase * action, Viewport * port);. It can directly call OpenGL
    commands, but should restore the state after it's done.

    \endext
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           BackgroundBase::_sfClearStencilBit
    Usually 0 is used to clear all stencil bitplanes 
    (clear is deactivated if smaller zero).
*/

/*! \var Real32          BackgroundBase::_sfDepth
    Depth value for clear, defaults to 1.
*/

/*! \var bool            BackgroundBase::_sfClearDepth
    Whether to clear the depth buffer or not
*/

/*! \var bool            BackgroundBase::_sfClearColor
    Whether to clear the color buffer or not
*/


void BackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "clearStencilBit",
        "Usually 0 is used to clear all stencil bitplanes \n"
        "(clear is deactivated if smaller zero).\n",
        ClearStencilBitFieldId, ClearStencilBitFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BackgroundBase::editHandleClearStencilBit),
        static_cast<FieldGetMethodSig >(&BackgroundBase::getHandleClearStencilBit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "depth",
        "Depth value for clear, defaults to 1.\n",
        DepthFieldId, DepthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BackgroundBase::editHandleDepth),
        static_cast<FieldGetMethodSig >(&BackgroundBase::getHandleDepth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "clearDepth",
        "Whether to clear the depth buffer or not\n",
        ClearDepthFieldId, ClearDepthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BackgroundBase::editHandleClearDepth),
        static_cast<FieldGetMethodSig >(&BackgroundBase::getHandleClearDepth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "clearColor",
        "Whether to clear the color buffer or not\n",
        ClearColorFieldId, ClearColorFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&BackgroundBase::editHandleClearColor),
        static_cast<FieldGetMethodSig >(&BackgroundBase::getHandleClearColor));

    oType.addInitialDesc(pDesc);
}


BackgroundBase::TypeObject BackgroundBase::_type(
    BackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Background::initMethod,
    Background::exitMethod,
    (InitalInsertDescFunc) &BackgroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Background\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"abstract\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "Background is the base class for all background/buffer clearing.  See \\ref\n"
    "PageSystemWindowBackground for a description.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Background the method that has be overridden is\n"
    "clear(DrawActionBase * action, Viewport * port);. It can directly call OpenGL\n"
    "commands, but should restore the state after it's done.\n"
    "\n"
    "\\endext\n"
    " \t<Field\n"
    " \t\tname=\"clearStencilBit\"\n"
    " \t\ttype=\"Int32\"\n"
    " \t\tcardinality=\"single\"\n"
    " \t\tvisibility=\"external\"\n"
    " \t\tdefaultValue=\"-1\"\n"
    " \t\taccess=\"public\"\n"
    " \t>\n"
    " \tUsually 0 is used to clear all stencil bitplanes \n"
    "    (clear is deactivated if smaller zero).\n"
    " \t</Field>\n"
    " \t<Field\n"
    " \t\tname=\"depth\"\n"
    " \t\ttype=\"Real32\"\n"
    " \t\tcardinality=\"single\"\n"
    " \t\tvisibility=\"external\"\n"
    " \t\tdefaultValue=\"1.f\"\n"
    " \t\taccess=\"public\"\n"
    " \t>\n"
    " \tDepth value for clear, defaults to 1.\n"
    " \t</Field>\n"
    "    <Field\n"
    "        name=\"clearDepth\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    Whether to clear the depth buffer or not\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"clearColor\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    Whether to clear the color buffer or not\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "Background is the base class for all background/buffer clearing.  See \\ref\n"
    "PageSystemWindowBackground for a description.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Background the method that has be overridden is\n"
    "clear(DrawActionBase * action, Viewport * port);. It can directly call OpenGL\n"
    "commands, but should restore the state after it's done.\n"
    "\n"
    "\\endext\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &BackgroundBase::getType(void) const
{
    return _type;
}

UInt32 BackgroundBase::getContainerSize(void) const
{
    return sizeof(Background);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *BackgroundBase::editSFClearStencilBit(void)
{
    editSField(ClearStencilBitFieldMask);

    return &_sfClearStencilBit;
}

const SFInt32 *BackgroundBase::getSFClearStencilBit(void) const
{
    return &_sfClearStencilBit;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *BackgroundBase::getSFClearStencilBit(void)
{
    return this->editSFClearStencilBit();
}
#endif

SFReal32 *BackgroundBase::editSFDepth(void)
{
    editSField(DepthFieldMask);

    return &_sfDepth;
}

const SFReal32 *BackgroundBase::getSFDepth(void) const
{
    return &_sfDepth;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *BackgroundBase::getSFDepth          (void)
{
    return this->editSFDepth          ();
}
#endif

SFBool *BackgroundBase::editSFClearDepth(void)
{
    editSField(ClearDepthFieldMask);

    return &_sfClearDepth;
}

const SFBool *BackgroundBase::getSFClearDepth(void) const
{
    return &_sfClearDepth;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BackgroundBase::getSFClearDepth     (void)
{
    return this->editSFClearDepth     ();
}
#endif

SFBool *BackgroundBase::editSFClearColor(void)
{
    editSField(ClearColorFieldMask);

    return &_sfClearColor;
}

const SFBool *BackgroundBase::getSFClearColor(void) const
{
    return &_sfClearColor;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BackgroundBase::getSFClearColor     (void)
{
    return this->editSFClearColor     ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 BackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    {
        returnValue += _sfClearStencilBit.getBinSize();
    }
    if(FieldBits::NoField != (DepthFieldMask & whichField))
    {
        returnValue += _sfDepth.getBinSize();
    }
    if(FieldBits::NoField != (ClearDepthFieldMask & whichField))
    {
        returnValue += _sfClearDepth.getBinSize();
    }
    if(FieldBits::NoField != (ClearColorFieldMask & whichField))
    {
        returnValue += _sfClearColor.getBinSize();
    }

    return returnValue;
}

void BackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    {
        _sfClearStencilBit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DepthFieldMask & whichField))
    {
        _sfDepth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ClearDepthFieldMask & whichField))
    {
        _sfClearDepth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ClearColorFieldMask & whichField))
    {
        _sfClearColor.copyToBin(pMem);
    }
}

void BackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    {
        _sfClearStencilBit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DepthFieldMask & whichField))
    {
        _sfDepth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ClearDepthFieldMask & whichField))
    {
        _sfClearDepth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ClearColorFieldMask & whichField))
    {
        _sfClearColor.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

BackgroundBase::BackgroundBase(void) :
    Inherited(),
    _sfClearStencilBit        (Int32(-1)),
    _sfDepth                  (Real32(1.f)),
    _sfClearDepth             (bool(true)),
    _sfClearColor             (bool(true))
{
}

BackgroundBase::BackgroundBase(const BackgroundBase &source) :
    Inherited(source),
    _sfClearStencilBit        (source._sfClearStencilBit        ),
    _sfDepth                  (source._sfDepth                  ),
    _sfClearDepth             (source._sfClearDepth             ),
    _sfClearColor             (source._sfClearColor             )
{
}


/*-------------------------- destructors ----------------------------------*/

BackgroundBase::~BackgroundBase(void)
{
}


GetFieldHandlePtr BackgroundBase::getHandleClearStencilBit (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfClearStencilBit, 
             this->getType().getFieldDesc(ClearStencilBitFieldId)));

    return returnValue;
}

EditFieldHandlePtr BackgroundBase::editHandleClearStencilBit(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfClearStencilBit, 
             this->getType().getFieldDesc(ClearStencilBitFieldId)));

    editSField(ClearStencilBitFieldMask);

    return returnValue;
}

GetFieldHandlePtr BackgroundBase::getHandleDepth           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfDepth, 
             this->getType().getFieldDesc(DepthFieldId)));

    return returnValue;
}

EditFieldHandlePtr BackgroundBase::editHandleDepth          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfDepth, 
             this->getType().getFieldDesc(DepthFieldId)));

    editSField(DepthFieldMask);

    return returnValue;
}

GetFieldHandlePtr BackgroundBase::getHandleClearDepth      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfClearDepth, 
             this->getType().getFieldDesc(ClearDepthFieldId)));

    return returnValue;
}

EditFieldHandlePtr BackgroundBase::editHandleClearDepth     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfClearDepth, 
             this->getType().getFieldDesc(ClearDepthFieldId)));

    editSField(ClearDepthFieldMask);

    return returnValue;
}

GetFieldHandlePtr BackgroundBase::getHandleClearColor      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfClearColor, 
             this->getType().getFieldDesc(ClearColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr BackgroundBase::editHandleClearColor     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfClearColor, 
             this->getType().getFieldDesc(ClearColorFieldId)));

    editSField(ClearColorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void BackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BackgroundPtr>::_type("BackgroundPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BackgroundPtr)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           BackgroundPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           BackgroundPtr, 
                           0);

OSG_END_NAMESPACE
