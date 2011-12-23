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
 **     class VRMLPositionInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGVRMLPositionInterpolatorBase.h"
#include "OSGVRMLPositionInterpolator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VRMLPositionInterpolator
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           VRMLPositionInterpolatorBase::_mfKeyValue
    
*/

/*! \var Vec3f           VRMLPositionInterpolatorBase::_sfOutValue
    This is VRML's value field.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<VRMLPositionInterpolator *, nsOSG>::_type(
    "VRMLPositionInterpolatorPtr", 
    "VRMLInterpolatorPtr", 
    VRMLPositionInterpolator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(VRMLPositionInterpolator *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VRMLPositionInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&VRMLPositionInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&VRMLPositionInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "outValue",
        "This is VRML's value field.\n",
        OutValueFieldId, OutValueFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&VRMLPositionInterpolator::editHandleOutValue),
        static_cast<FieldGetMethodSig >(&VRMLPositionInterpolator::getHandleOutValue));

    oType.addInitialDesc(pDesc);
}


VRMLPositionInterpolatorBase::TypeObject VRMLPositionInterpolatorBase::_type(
    VRMLPositionInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&VRMLPositionInterpolatorBase::createEmptyLocal),
    VRMLPositionInterpolator::initMethod,
    VRMLPositionInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VRMLPositionInterpolator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"VRMLPositionInterpolator\"\n"
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
    "        type=\"Vec3f\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"outValue\"\n"
    "        type=\"Vec3f\"\n"
    "        cardinality=\"single\"\n"
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

FieldContainerType &VRMLPositionInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &VRMLPositionInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 VRMLPositionInterpolatorBase::getContainerSize(void) const
{
    return sizeof(VRMLPositionInterpolator);
}

/*------------------------- decorator get ------------------------------*/


MFVec3f *VRMLPositionInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFVec3f *VRMLPositionInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


SFVec3f *VRMLPositionInterpolatorBase::editSFOutValue(void)
{
    editSField(OutValueFieldMask);

    return &_sfOutValue;
}

const SFVec3f *VRMLPositionInterpolatorBase::getSFOutValue(void) const
{
    return &_sfOutValue;
}






/*------------------------------ access -----------------------------------*/

SizeT VRMLPositionInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        returnValue += _sfOutValue.getBinSize();
    }

    return returnValue;
}

void VRMLPositionInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        _sfOutValue.copyToBin(pMem);
    }
}

void VRMLPositionInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
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
        editSField(OutValueFieldMask);
        _sfOutValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VRMLPositionInterpolatorTransitPtr VRMLPositionInterpolatorBase::createLocal(BitVector bFlags)
{
    VRMLPositionInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VRMLPositionInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VRMLPositionInterpolatorTransitPtr VRMLPositionInterpolatorBase::createDependent(BitVector bFlags)
{
    VRMLPositionInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VRMLPositionInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VRMLPositionInterpolatorTransitPtr VRMLPositionInterpolatorBase::create(void)
{
    VRMLPositionInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VRMLPositionInterpolator>(tmpPtr);
    }

    return fc;
}

VRMLPositionInterpolator *VRMLPositionInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    VRMLPositionInterpolator *returnValue;

    newPtr<VRMLPositionInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VRMLPositionInterpolator *VRMLPositionInterpolatorBase::createEmpty(void)
{
    VRMLPositionInterpolator *returnValue;

    newPtr<VRMLPositionInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VRMLPositionInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VRMLPositionInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLPositionInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLPositionInterpolatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VRMLPositionInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLPositionInterpolator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLPositionInterpolatorBase::shallowCopy(void) const
{
    VRMLPositionInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VRMLPositionInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VRMLPositionInterpolatorBase::VRMLPositionInterpolatorBase(void) :
    Inherited(),
    _mfKeyValue               (),
    _sfOutValue               ()
{
}

VRMLPositionInterpolatorBase::VRMLPositionInterpolatorBase(const VRMLPositionInterpolatorBase &source) :
    Inherited(source),
    _mfKeyValue               (source._mfKeyValue               ),
    _sfOutValue               (source._sfOutValue               )
{
}


/*-------------------------- destructors ----------------------------------*/

VRMLPositionInterpolatorBase::~VRMLPositionInterpolatorBase(void)
{
}


GetFieldHandlePtr VRMLPositionInterpolatorBase::getHandleKeyValue        (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             const_cast<VRMLPositionInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VRMLPositionInterpolatorBase::editHandleKeyValue       (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             this));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr VRMLPositionInterpolatorBase::getHandleOutValue        (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             const_cast<VRMLPositionInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VRMLPositionInterpolatorBase::editHandleOutValue       (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             this));


    editSField(OutValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VRMLPositionInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VRMLPositionInterpolator *pThis = static_cast<VRMLPositionInterpolator *>(this);

    pThis->execSync(static_cast<VRMLPositionInterpolator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VRMLPositionInterpolatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VRMLPositionInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VRMLPositionInterpolator *>(pRefAspect),
                  dynamic_cast<const VRMLPositionInterpolator *>(this));

    return returnValue;
}
#endif

void VRMLPositionInterpolatorBase::resolveLinks(void)
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
}


OSG_END_NAMESPACE
