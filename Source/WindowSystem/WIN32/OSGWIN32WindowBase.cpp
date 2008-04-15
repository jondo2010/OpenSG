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
 **     class WIN32Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEWIN32WINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGWIN32WindowBase.h"
#include "OSGWIN32Window.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::WIN32Window
    The class for WIN32 windows.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var HWND            WIN32WindowBase::_sfHwnd
    
*/

/*! \var HDC             WIN32WindowBase::_sfHdc
    
*/

/*! \var HGLRC           WIN32WindowBase::_sfHglrc
    
*/


void WIN32WindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFHWND::Description(
        SFHWND::getClassType(),
        "hwnd",
        "",
        HwndFieldId, HwndFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WIN32WindowBase::editHandleHwnd),
        static_cast<FieldGetMethodSig >(&WIN32WindowBase::getHandleHwnd));

    oType.addInitialDesc(pDesc);

    pDesc = new SFHDC::Description(
        SFHDC::getClassType(),
        "hdc",
        "",
        HdcFieldId, HdcFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WIN32WindowBase::editHandleHdc),
        static_cast<FieldGetMethodSig >(&WIN32WindowBase::getHandleHdc));

    oType.addInitialDesc(pDesc);

    pDesc = new SFHGLRC::Description(
        SFHGLRC::getClassType(),
        "hglrc",
        "",
        HglrcFieldId, HglrcFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WIN32WindowBase::editHandleHglrc),
        static_cast<FieldGetMethodSig >(&WIN32WindowBase::getHandleHglrc));

    oType.addInitialDesc(pDesc);
}


WIN32WindowBase::TypeObject WIN32WindowBase::_type(
    WIN32WindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &WIN32WindowBase::createEmptyLocal,
    WIN32Window::initMethod,
    WIN32Window::exitMethod,
    (InitalInsertDescFunc) &WIN32WindowBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"WIN32Window\"\n"
    "\tparent=\"Window\"\n"
    "\tlibrary=\"WindowWIN32\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "The class for WIN32 windows.\n"
    "\t<Field\n"
    "\t\tname=\"hwnd\"\n"
    "\t\ttype=\"HWND\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGWIN32WindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hdc\"\n"
    "\t\ttype=\"HDC\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGWIN32WindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hglrc\"\n"
    "\t\ttype=\"HGLRC\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGWIN32WindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The class for WIN32 windows.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &WIN32WindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &WIN32WindowBase::getType(void) const
{
    return _type;
}

UInt32 WIN32WindowBase::getContainerSize(void) const
{
    return sizeof(WIN32Window);
}

/*------------------------- decorator get ------------------------------*/


SFHWND *WIN32WindowBase::editSFHwnd(void)
{
    editSField(HwndFieldMask);

    return &_sfHwnd;
}

const SFHWND *WIN32WindowBase::getSFHwnd(void) const
{
    return &_sfHwnd;
}

#ifdef OSG_1_GET_COMPAT
SFHWND              *WIN32WindowBase::getSFHwnd           (void)
{
    return this->editSFHwnd           ();
}
#endif

SFHDC *WIN32WindowBase::editSFHdc(void)
{
    editSField(HdcFieldMask);

    return &_sfHdc;
}

const SFHDC *WIN32WindowBase::getSFHdc(void) const
{
    return &_sfHdc;
}

#ifdef OSG_1_GET_COMPAT
SFHDC               *WIN32WindowBase::getSFHdc            (void)
{
    return this->editSFHdc            ();
}
#endif

SFHGLRC *WIN32WindowBase::editSFHglrc(void)
{
    editSField(HglrcFieldMask);

    return &_sfHglrc;
}

const SFHGLRC *WIN32WindowBase::getSFHglrc(void) const
{
    return &_sfHglrc;
}

#ifdef OSG_1_GET_COMPAT
SFHGLRC             *WIN32WindowBase::getSFHglrc          (void)
{
    return this->editSFHglrc          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 WIN32WindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        returnValue += _sfHwnd.getBinSize();
    }
    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        returnValue += _sfHdc.getBinSize();
    }
    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        returnValue += _sfHglrc.getBinSize();
    }

    return returnValue;
}

void WIN32WindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        _sfHwnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        _sfHdc.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        _sfHglrc.copyToBin(pMem);
    }
}

void WIN32WindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        _sfHwnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        _sfHdc.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        _sfHglrc.copyFromBin(pMem);
    }
}

//! create a new instance of the class
WIN32WindowTransitPtr WIN32WindowBase::create(void)
{
    WIN32WindowTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<WIN32Window>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
WIN32WindowTransitPtr WIN32WindowBase::createLocal(BitVector bFlags)
{
    WIN32WindowTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<WIN32Window>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
WIN32WindowPtr WIN32WindowBase::createEmpty(void)
{
    WIN32WindowPtr returnValue;

    newPtr<WIN32Window>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

WIN32WindowPtr WIN32WindowBase::createEmptyLocal(BitVector bFlags)
{
    WIN32WindowPtr returnValue;

    newPtr<WIN32Window>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr WIN32WindowBase::shallowCopy(void) const
{
    WIN32WindowPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const WIN32Window *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr WIN32WindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    WIN32WindowPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const WIN32Window *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

WIN32WindowBase::WIN32WindowBase(void) :
    Inherited(),
    _sfHwnd                   (HWND(0)),
    _sfHdc                    (HDC(0)),
    _sfHglrc                  (HGLRC(0))
{
}

WIN32WindowBase::WIN32WindowBase(const WIN32WindowBase &source) :
    Inherited(source),
    _sfHwnd                   (source._sfHwnd                   ),
    _sfHdc                    (source._sfHdc                    ),
    _sfHglrc                  (source._sfHglrc                  )
{
}


/*-------------------------- destructors ----------------------------------*/

WIN32WindowBase::~WIN32WindowBase(void)
{
}


GetFieldHandlePtr WIN32WindowBase::getHandleHwnd            (void) const
{
    SFHWND::GetHandlePtr returnValue(
        new  SFHWND::GetHandle(
             &_sfHwnd, 
             this->getType().getFieldDesc(HwndFieldId)));

    return returnValue;
}

EditFieldHandlePtr WIN32WindowBase::editHandleHwnd           (void)
{
    SFHWND::EditHandlePtr returnValue(
        new  SFHWND::EditHandle(
             &_sfHwnd, 
             this->getType().getFieldDesc(HwndFieldId)));

    editSField(HwndFieldMask);

    return returnValue;
}

GetFieldHandlePtr WIN32WindowBase::getHandleHdc             (void) const
{
    SFHDC::GetHandlePtr returnValue(
        new  SFHDC::GetHandle(
             &_sfHdc, 
             this->getType().getFieldDesc(HdcFieldId)));

    return returnValue;
}

EditFieldHandlePtr WIN32WindowBase::editHandleHdc            (void)
{
    SFHDC::EditHandlePtr returnValue(
        new  SFHDC::EditHandle(
             &_sfHdc, 
             this->getType().getFieldDesc(HdcFieldId)));

    editSField(HdcFieldMask);

    return returnValue;
}

GetFieldHandlePtr WIN32WindowBase::getHandleHglrc           (void) const
{
    SFHGLRC::GetHandlePtr returnValue(
        new  SFHGLRC::GetHandle(
             &_sfHglrc, 
             this->getType().getFieldDesc(HglrcFieldId)));

    return returnValue;
}

EditFieldHandlePtr WIN32WindowBase::editHandleHglrc          (void)
{
    SFHGLRC::EditHandlePtr returnValue(
        new  SFHGLRC::EditHandle(
             &_sfHglrc, 
             this->getType().getFieldDesc(HglrcFieldId)));

    editSField(HglrcFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void WIN32WindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<WIN32WindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr WIN32WindowBase::createAspectCopy(void) const
{
    WIN32WindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const WIN32Window *>(this));

    return returnValue;
}
#endif

void WIN32WindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<WIN32WindowPtr>::_type("WIN32WindowPtr", "WindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(WIN32WindowPtr)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           WIN32WindowPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           WIN32WindowPtr, 
                           0);

OSG_END_NAMESPACE
