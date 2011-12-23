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
 **     class ColorBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGColorBufferViewportBase.h"
#include "OSGColorBufferViewport.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ColorBufferViewport
    Viewport to only render to specific color channels, see \ref
    PageSystemWindowViewports for a description.

    The color channels used are defined by the _sfRed, _sfGreen, _sfBlue and
    _sfAlpha Fields.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ColorBufferViewportBase::_sfRed
    Define whether the red color channel is written to.
*/

/*! \var bool            ColorBufferViewportBase::_sfBlue
    Define whether the green color channel is written to.
*/

/*! \var bool            ColorBufferViewportBase::_sfGreen
    Define whether the blue color channel is written to.
*/

/*! \var bool            ColorBufferViewportBase::_sfAlpha
    Define whether the alpha color channel is written to.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ColorBufferViewport *, nsOSG>::_type(
    "ColorBufferViewportPtr", 
    "ViewportPtr", 
    ColorBufferViewport::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ColorBufferViewport *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ColorBufferViewport *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ColorBufferViewport *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ColorBufferViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "red",
        "Define whether the red color channel is written to.\n",
        RedFieldId, RedFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorBufferViewport::editHandleRed),
        static_cast<FieldGetMethodSig >(&ColorBufferViewport::getHandleRed));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "blue",
        "Define whether the green color channel is written to.\n",
        BlueFieldId, BlueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorBufferViewport::editHandleBlue),
        static_cast<FieldGetMethodSig >(&ColorBufferViewport::getHandleBlue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "green",
        "Define whether the blue color channel is written to.\n",
        GreenFieldId, GreenFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorBufferViewport::editHandleGreen),
        static_cast<FieldGetMethodSig >(&ColorBufferViewport::getHandleGreen));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alpha",
        "Define whether the alpha color channel is written to.\n",
        AlphaFieldId, AlphaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorBufferViewport::editHandleAlpha),
        static_cast<FieldGetMethodSig >(&ColorBufferViewport::getHandleAlpha));

    oType.addInitialDesc(pDesc);
}


ColorBufferViewportBase::TypeObject ColorBufferViewportBase::_type(
    ColorBufferViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ColorBufferViewportBase::createEmptyLocal),
    ColorBufferViewport::initMethod,
    ColorBufferViewport::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ColorBufferViewport::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ColorBufferViewport\"\n"
    "   parent=\"Viewport\"\n"
    "   library=\"Window\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpWindowViewport\"\n"
    "   >\n"
    "  Viewport to only render to specific color channels, see \\ref\n"
    "  PageSystemWindowViewports for a description.\n"
    "\n"
    "  The color channels used are defined by the _sfRed, _sfGreen, _sfBlue and\n"
    "  _sfAlpha Fields.\n"
    "  <Field\n"
    "\t name=\"red\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRUE\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Define whether the red color channel is written to.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"blue\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRUE\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Define whether the green color channel is written to.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"green\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRUE\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Define whether the blue color channel is written to.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"alpha\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRUE\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Define whether the alpha color channel is written to.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Viewport to only render to specific color channels, see \\ref\n"
    "PageSystemWindowViewports for a description.\n"
    "\n"
    "The color channels used are defined by the _sfRed, _sfGreen, _sfBlue and\n"
    "_sfAlpha Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorBufferViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &ColorBufferViewportBase::getType(void) const
{
    return _type;
}

UInt32 ColorBufferViewportBase::getContainerSize(void) const
{
    return sizeof(ColorBufferViewport);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ColorBufferViewportBase::editSFRed(void)
{
    editSField(RedFieldMask);

    return &_sfRed;
}

const SFBool *ColorBufferViewportBase::getSFRed(void) const
{
    return &_sfRed;
}


SFBool *ColorBufferViewportBase::editSFBlue(void)
{
    editSField(BlueFieldMask);

    return &_sfBlue;
}

const SFBool *ColorBufferViewportBase::getSFBlue(void) const
{
    return &_sfBlue;
}


SFBool *ColorBufferViewportBase::editSFGreen(void)
{
    editSField(GreenFieldMask);

    return &_sfGreen;
}

const SFBool *ColorBufferViewportBase::getSFGreen(void) const
{
    return &_sfGreen;
}


SFBool *ColorBufferViewportBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFBool *ColorBufferViewportBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}






/*------------------------------ access -----------------------------------*/

SizeT ColorBufferViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        returnValue += _sfRed.getBinSize();
    }
    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        returnValue += _sfBlue.getBinSize();
    }
    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        returnValue += _sfGreen.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }

    return returnValue;
}

void ColorBufferViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        _sfRed.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        _sfBlue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        _sfGreen.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
}

void ColorBufferViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        editSField(RedFieldMask);
        _sfRed.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        editSField(BlueFieldMask);
        _sfBlue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        editSField(GreenFieldMask);
        _sfGreen.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        editSField(AlphaFieldMask);
        _sfAlpha.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ColorBufferViewportTransitPtr ColorBufferViewportBase::createLocal(BitVector bFlags)
{
    ColorBufferViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ColorBufferViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ColorBufferViewportTransitPtr ColorBufferViewportBase::createDependent(BitVector bFlags)
{
    ColorBufferViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ColorBufferViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ColorBufferViewportTransitPtr ColorBufferViewportBase::create(void)
{
    ColorBufferViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ColorBufferViewport>(tmpPtr);
    }

    return fc;
}

ColorBufferViewport *ColorBufferViewportBase::createEmptyLocal(BitVector bFlags)
{
    ColorBufferViewport *returnValue;

    newPtr<ColorBufferViewport>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ColorBufferViewport *ColorBufferViewportBase::createEmpty(void)
{
    ColorBufferViewport *returnValue;

    newPtr<ColorBufferViewport>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ColorBufferViewportBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ColorBufferViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorBufferViewport *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorBufferViewportBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ColorBufferViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorBufferViewport *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorBufferViewportBase::shallowCopy(void) const
{
    ColorBufferViewport *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ColorBufferViewport *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ColorBufferViewportBase::ColorBufferViewportBase(void) :
    Inherited(),
    _sfRed                    (bool(GL_TRUE)),
    _sfBlue                   (bool(GL_TRUE)),
    _sfGreen                  (bool(GL_TRUE)),
    _sfAlpha                  (bool(GL_TRUE))
{
}

ColorBufferViewportBase::ColorBufferViewportBase(const ColorBufferViewportBase &source) :
    Inherited(source),
    _sfRed                    (source._sfRed                    ),
    _sfBlue                   (source._sfBlue                   ),
    _sfGreen                  (source._sfGreen                  ),
    _sfAlpha                  (source._sfAlpha                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ColorBufferViewportBase::~ColorBufferViewportBase(void)
{
}


GetFieldHandlePtr ColorBufferViewportBase::getHandleRed             (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfRed,
             this->getType().getFieldDesc(RedFieldId),
             const_cast<ColorBufferViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorBufferViewportBase::editHandleRed            (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfRed,
             this->getType().getFieldDesc(RedFieldId),
             this));


    editSField(RedFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorBufferViewportBase::getHandleBlue            (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfBlue,
             this->getType().getFieldDesc(BlueFieldId),
             const_cast<ColorBufferViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorBufferViewportBase::editHandleBlue           (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfBlue,
             this->getType().getFieldDesc(BlueFieldId),
             this));


    editSField(BlueFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorBufferViewportBase::getHandleGreen           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfGreen,
             this->getType().getFieldDesc(GreenFieldId),
             const_cast<ColorBufferViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorBufferViewportBase::editHandleGreen          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfGreen,
             this->getType().getFieldDesc(GreenFieldId),
             this));


    editSField(GreenFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorBufferViewportBase::getHandleAlpha           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAlpha,
             this->getType().getFieldDesc(AlphaFieldId),
             const_cast<ColorBufferViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorBufferViewportBase::editHandleAlpha          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAlpha,
             this->getType().getFieldDesc(AlphaFieldId),
             this));


    editSField(AlphaFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ColorBufferViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ColorBufferViewport *pThis = static_cast<ColorBufferViewport *>(this);

    pThis->execSync(static_cast<ColorBufferViewport *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ColorBufferViewportBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ColorBufferViewport *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorBufferViewport *>(pRefAspect),
                  dynamic_cast<const ColorBufferViewport *>(this));

    return returnValue;
}
#endif

void ColorBufferViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
