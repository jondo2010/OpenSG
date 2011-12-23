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
 **     class CSMPassiveWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGCSMPassiveWindowBase.h"
#include "OSGCSMPassiveWindow.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMPassiveWindow
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec2f           CSMPassiveWindowBase::_sfViewportScale
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CSMPassiveWindow *, nsOSG>::_type(
    "CSMPassiveWindowPtr", 
    "CSMWindowPtr", 
    CSMPassiveWindow::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CSMPassiveWindow *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMPassiveWindow *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMPassiveWindow *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CSMPassiveWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "viewportScale",
        "",
        ViewportScaleFieldId, ViewportScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMPassiveWindow::editHandleViewportScale),
        static_cast<FieldGetMethodSig >(&CSMPassiveWindow::getHandleViewportScale));

    oType.addInitialDesc(pDesc);
}


CSMPassiveWindowBase::TypeObject CSMPassiveWindowBase::_type(
    CSMPassiveWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CSMPassiveWindowBase::createEmptyLocal),
    CSMPassiveWindow::initMethod,
    CSMPassiveWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMPassiveWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMPassiveWindow\"\n"
    "    parent=\"CSMWindow\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"viewportScale\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"1.f, 1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMPassiveWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMPassiveWindowBase::getType(void) const
{
    return _type;
}

UInt32 CSMPassiveWindowBase::getContainerSize(void) const
{
    return sizeof(CSMPassiveWindow);
}

/*------------------------- decorator get ------------------------------*/


SFVec2f *CSMPassiveWindowBase::editSFViewportScale(void)
{
    editSField(ViewportScaleFieldMask);

    return &_sfViewportScale;
}

const SFVec2f *CSMPassiveWindowBase::getSFViewportScale(void) const
{
    return &_sfViewportScale;
}






/*------------------------------ access -----------------------------------*/

SizeT CSMPassiveWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ViewportScaleFieldMask & whichField))
    {
        returnValue += _sfViewportScale.getBinSize();
    }

    return returnValue;
}

void CSMPassiveWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ViewportScaleFieldMask & whichField))
    {
        _sfViewportScale.copyToBin(pMem);
    }
}

void CSMPassiveWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ViewportScaleFieldMask & whichField))
    {
        editSField(ViewportScaleFieldMask);
        _sfViewportScale.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMPassiveWindowTransitPtr CSMPassiveWindowBase::createLocal(BitVector bFlags)
{
    CSMPassiveWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMPassiveWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMPassiveWindowTransitPtr CSMPassiveWindowBase::createDependent(BitVector bFlags)
{
    CSMPassiveWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMPassiveWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMPassiveWindowTransitPtr CSMPassiveWindowBase::create(void)
{
    return createLocal();
}

CSMPassiveWindow *CSMPassiveWindowBase::createEmptyLocal(BitVector bFlags)
{
    CSMPassiveWindow *returnValue;

    newPtr<CSMPassiveWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMPassiveWindow *CSMPassiveWindowBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMPassiveWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMPassiveWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMPassiveWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMPassiveWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMPassiveWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMPassiveWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMPassiveWindowBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMPassiveWindowBase::CSMPassiveWindowBase(void) :
    Inherited(),
    _sfViewportScale          (Vec2f(1.f, 1.f))
{
}

CSMPassiveWindowBase::CSMPassiveWindowBase(const CSMPassiveWindowBase &source) :
    Inherited(source),
    _sfViewportScale          (source._sfViewportScale          )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMPassiveWindowBase::~CSMPassiveWindowBase(void)
{
}


GetFieldHandlePtr CSMPassiveWindowBase::getHandleViewportScale   (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfViewportScale,
             this->getType().getFieldDesc(ViewportScaleFieldId),
             const_cast<CSMPassiveWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMPassiveWindowBase::editHandleViewportScale  (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfViewportScale,
             this->getType().getFieldDesc(ViewportScaleFieldId),
             this));


    editSField(ViewportScaleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMPassiveWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMPassiveWindow *pThis = static_cast<CSMPassiveWindow *>(this);

    pThis->execSync(static_cast<CSMPassiveWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMPassiveWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMPassiveWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMPassiveWindow *>(pRefAspect),
                  dynamic_cast<const CSMPassiveWindow *>(this));

    return returnValue;
}
#endif

void CSMPassiveWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
