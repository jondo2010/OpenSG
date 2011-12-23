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
 **     class VRMLCoordinateInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGVRMLCoordinateInterpolatorBase.h"
#include "OSGVRMLCoordinateInterpolator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VRMLCoordinateInterpolator
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           VRMLCoordinateInterpolatorBase::_mfKeyValue
    
*/

/*! \var Pnt3f           VRMLCoordinateInterpolatorBase::_mfOutValue
    This is VRML's value field.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<VRMLCoordinateInterpolator *, nsOSG>::_type(
    "VRMLCoordinateInterpolatorPtr", 
    "VRMLInterpolatorPtr", 
    VRMLCoordinateInterpolator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(VRMLCoordinateInterpolator *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VRMLCoordinateInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&VRMLCoordinateInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&VRMLCoordinateInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(),
        "outValue",
        "This is VRML's value field.\n",
        OutValueFieldId, OutValueFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&VRMLCoordinateInterpolator::editHandleOutValue),
        static_cast<FieldGetMethodSig >(&VRMLCoordinateInterpolator::getHandleOutValue));

    oType.addInitialDesc(pDesc);
}


VRMLCoordinateInterpolatorBase::TypeObject VRMLCoordinateInterpolatorBase::_type(
    VRMLCoordinateInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&VRMLCoordinateInterpolatorBase::createEmptyLocal),
    VRMLCoordinateInterpolator::initMethod,
    VRMLCoordinateInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VRMLCoordinateInterpolator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"VRMLCoordinateInterpolator\"\n"
    "    parent=\"VRMLInterpolator\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    "    docGroupBase=\"GrpDynamicsVRMLAnimation\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"keyValue\"\n"
    "        type=\"Pnt3f\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"outValue\"\n"
    "        type=\"Pnt3f\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "        This is VRML's value field.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VRMLCoordinateInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &VRMLCoordinateInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 VRMLCoordinateInterpolatorBase::getContainerSize(void) const
{
    return sizeof(VRMLCoordinateInterpolator);
}

/*------------------------- decorator get ------------------------------*/


MFPnt3f *VRMLCoordinateInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFPnt3f *VRMLCoordinateInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


MFPnt3f *VRMLCoordinateInterpolatorBase::editMFOutValue(void)
{
    editMField(OutValueFieldMask, _mfOutValue);

    return &_mfOutValue;
}

const MFPnt3f *VRMLCoordinateInterpolatorBase::getMFOutValue(void) const
{
    return &_mfOutValue;
}






/*------------------------------ access -----------------------------------*/

SizeT VRMLCoordinateInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        returnValue += _mfOutValue.getBinSize();
    }

    return returnValue;
}

void VRMLCoordinateInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        _mfOutValue.copyToBin(pMem);
    }
}

void VRMLCoordinateInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        editMField(KeyValueFieldMask, _mfKeyValue);
        _mfKeyValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        editMField(OutValueFieldMask, _mfOutValue);
        _mfOutValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VRMLCoordinateInterpolatorTransitPtr VRMLCoordinateInterpolatorBase::createLocal(BitVector bFlags)
{
    VRMLCoordinateInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VRMLCoordinateInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VRMLCoordinateInterpolatorTransitPtr VRMLCoordinateInterpolatorBase::createDependent(BitVector bFlags)
{
    VRMLCoordinateInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VRMLCoordinateInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VRMLCoordinateInterpolatorTransitPtr VRMLCoordinateInterpolatorBase::create(void)
{
    VRMLCoordinateInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VRMLCoordinateInterpolator>(tmpPtr);
    }

    return fc;
}

VRMLCoordinateInterpolator *VRMLCoordinateInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    VRMLCoordinateInterpolator *returnValue;

    newPtr<VRMLCoordinateInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VRMLCoordinateInterpolator *VRMLCoordinateInterpolatorBase::createEmpty(void)
{
    VRMLCoordinateInterpolator *returnValue;

    newPtr<VRMLCoordinateInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VRMLCoordinateInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VRMLCoordinateInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLCoordinateInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLCoordinateInterpolatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VRMLCoordinateInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLCoordinateInterpolator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLCoordinateInterpolatorBase::shallowCopy(void) const
{
    VRMLCoordinateInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VRMLCoordinateInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VRMLCoordinateInterpolatorBase::VRMLCoordinateInterpolatorBase(void) :
    Inherited(),
    _mfKeyValue               (),
    _mfOutValue               ()
{
}

VRMLCoordinateInterpolatorBase::VRMLCoordinateInterpolatorBase(const VRMLCoordinateInterpolatorBase &source) :
    Inherited(source),
    _mfKeyValue               (source._mfKeyValue               ),
    _mfOutValue               (source._mfOutValue               )
{
}


/*-------------------------- destructors ----------------------------------*/

VRMLCoordinateInterpolatorBase::~VRMLCoordinateInterpolatorBase(void)
{
}


GetFieldHandlePtr VRMLCoordinateInterpolatorBase::getHandleKeyValue        (void) const
{
    MFPnt3f::GetHandlePtr returnValue(
        new  MFPnt3f::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             const_cast<VRMLCoordinateInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VRMLCoordinateInterpolatorBase::editHandleKeyValue       (void)
{
    MFPnt3f::EditHandlePtr returnValue(
        new  MFPnt3f::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             this));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr VRMLCoordinateInterpolatorBase::getHandleOutValue        (void) const
{
    MFPnt3f::GetHandlePtr returnValue(
        new  MFPnt3f::GetHandle(
             &_mfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             const_cast<VRMLCoordinateInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VRMLCoordinateInterpolatorBase::editHandleOutValue       (void)
{
    MFPnt3f::EditHandlePtr returnValue(
        new  MFPnt3f::EditHandle(
             &_mfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             this));


    editMField(OutValueFieldMask, _mfOutValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VRMLCoordinateInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VRMLCoordinateInterpolator *pThis = static_cast<VRMLCoordinateInterpolator *>(this);

    pThis->execSync(static_cast<VRMLCoordinateInterpolator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VRMLCoordinateInterpolatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VRMLCoordinateInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VRMLCoordinateInterpolator *>(pRefAspect),
                  dynamic_cast<const VRMLCoordinateInterpolator *>(this));

    return returnValue;
}
#endif

void VRMLCoordinateInterpolatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKeyValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfOutValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
