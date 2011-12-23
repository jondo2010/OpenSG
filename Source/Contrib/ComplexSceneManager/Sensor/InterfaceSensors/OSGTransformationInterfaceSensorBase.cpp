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
 **     class TransformationInterfaceSensor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGTransformationInterfaceSensorBase.h"
#include "OSGTransformationInterfaceSensor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TransformationInterfaceSensor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Matrix          TransformationInterfaceSensorBase::_sfTransformation
    
*/

/*! \var Vec3f           TransformationInterfaceSensorBase::_sfTranslation
    
*/

/*! \var Quaternion      TransformationInterfaceSensorBase::_sfRotation
    
*/

/*! \var Real32          TransformationInterfaceSensorBase::_sfRotationScale
    
*/

/*! \var Real32          TransformationInterfaceSensorBase::_sfTranslationScale
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TransformationInterfaceSensor *, nsOSG>::_type(
    "TransformationInterfaceSensorPtr", 
    "DeviceInterfaceSensorPtr", 
    TransformationInterfaceSensor::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TransformationInterfaceSensor *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TransformationInterfaceSensorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "transformation",
        "",
        TransformationFieldId, TransformationFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&TransformationInterfaceSensor::editHandleTransformation),
        static_cast<FieldGetMethodSig >(&TransformationInterfaceSensor::getHandleTransformation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "translation",
        "",
        TranslationFieldId, TranslationFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&TransformationInterfaceSensor::editHandleTranslation),
        static_cast<FieldGetMethodSig >(&TransformationInterfaceSensor::getHandleTranslation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "rotation",
        "",
        RotationFieldId, RotationFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&TransformationInterfaceSensor::editHandleRotation),
        static_cast<FieldGetMethodSig >(&TransformationInterfaceSensor::getHandleRotation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "rotationScale",
        "",
        RotationScaleFieldId, RotationScaleFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&TransformationInterfaceSensor::editHandleRotationScale),
        static_cast<FieldGetMethodSig >(&TransformationInterfaceSensor::getHandleRotationScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "translationScale",
        "",
        TranslationScaleFieldId, TranslationScaleFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&TransformationInterfaceSensor::editHandleTranslationScale),
        static_cast<FieldGetMethodSig >(&TransformationInterfaceSensor::getHandleTranslationScale));

    oType.addInitialDesc(pDesc);
}


TransformationInterfaceSensorBase::TypeObject TransformationInterfaceSensorBase::_type(
    TransformationInterfaceSensorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TransformationInterfaceSensorBase::createEmptyLocal),
    TransformationInterfaceSensor::initMethod,
    TransformationInterfaceSensor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TransformationInterfaceSensor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TransformationInterfaceSensor\"\n"
    "    parent=\"DeviceInterfaceSensor\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"transformation\"\n"
    "        type=\"Matrix\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"translation\"\n"
    "        type=\"Vec3f\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"rotation\"\n"
    "        type=\"Quaternion\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"rotationScale\"\n"
    "        type=\"Real32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"1.f\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"translationScale\"\n"
    "        type=\"Real32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"protected\"\n"
    "        defaultValue=\"1.f\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformationInterfaceSensorBase::getType(void)
{
    return _type;
}

const FieldContainerType &TransformationInterfaceSensorBase::getType(void) const
{
    return _type;
}

UInt32 TransformationInterfaceSensorBase::getContainerSize(void) const
{
    return sizeof(TransformationInterfaceSensor);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *TransformationInterfaceSensorBase::editSFTransformation(void)
{
    editSField(TransformationFieldMask);

    return &_sfTransformation;
}

const SFMatrix *TransformationInterfaceSensorBase::getSFTransformation(void) const
{
    return &_sfTransformation;
}


SFVec3f *TransformationInterfaceSensorBase::editSFTranslation(void)
{
    editSField(TranslationFieldMask);

    return &_sfTranslation;
}

const SFVec3f *TransformationInterfaceSensorBase::getSFTranslation(void) const
{
    return &_sfTranslation;
}


SFQuaternion *TransformationInterfaceSensorBase::editSFRotation(void)
{
    editSField(RotationFieldMask);

    return &_sfRotation;
}

const SFQuaternion *TransformationInterfaceSensorBase::getSFRotation(void) const
{
    return &_sfRotation;
}


SFReal32 *TransformationInterfaceSensorBase::editSFRotationScale(void)
{
    editSField(RotationScaleFieldMask);

    return &_sfRotationScale;
}

const SFReal32 *TransformationInterfaceSensorBase::getSFRotationScale(void) const
{
    return &_sfRotationScale;
}


SFReal32 *TransformationInterfaceSensorBase::editSFTranslationScale(void)
{
    editSField(TranslationScaleFieldMask);

    return &_sfTranslationScale;
}

const SFReal32 *TransformationInterfaceSensorBase::getSFTranslationScale(void) const
{
    return &_sfTranslationScale;
}






/*------------------------------ access -----------------------------------*/

SizeT TransformationInterfaceSensorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        returnValue += _sfTransformation.getBinSize();
    }
    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        returnValue += _sfTranslation.getBinSize();
    }
    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        returnValue += _sfRotation.getBinSize();
    }
    if(FieldBits::NoField != (RotationScaleFieldMask & whichField))
    {
        returnValue += _sfRotationScale.getBinSize();
    }
    if(FieldBits::NoField != (TranslationScaleFieldMask & whichField))
    {
        returnValue += _sfTranslationScale.getBinSize();
    }

    return returnValue;
}

void TransformationInterfaceSensorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        _sfTransformation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        _sfTranslation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RotationScaleFieldMask & whichField))
    {
        _sfRotationScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TranslationScaleFieldMask & whichField))
    {
        _sfTranslationScale.copyToBin(pMem);
    }
}

void TransformationInterfaceSensorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        editSField(TransformationFieldMask);
        _sfTransformation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        editSField(TranslationFieldMask);
        _sfTranslation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        editSField(RotationFieldMask);
        _sfRotation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RotationScaleFieldMask & whichField))
    {
        editSField(RotationScaleFieldMask);
        _sfRotationScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TranslationScaleFieldMask & whichField))
    {
        editSField(TranslationScaleFieldMask);
        _sfTranslationScale.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TransformationInterfaceSensorTransitPtr TransformationInterfaceSensorBase::createLocal(BitVector bFlags)
{
    TransformationInterfaceSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TransformationInterfaceSensor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TransformationInterfaceSensorTransitPtr TransformationInterfaceSensorBase::createDependent(BitVector bFlags)
{
    TransformationInterfaceSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TransformationInterfaceSensor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TransformationInterfaceSensorTransitPtr TransformationInterfaceSensorBase::create(void)
{
    TransformationInterfaceSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TransformationInterfaceSensor>(tmpPtr);
    }

    return fc;
}

TransformationInterfaceSensor *TransformationInterfaceSensorBase::createEmptyLocal(BitVector bFlags)
{
    TransformationInterfaceSensor *returnValue;

    newPtr<TransformationInterfaceSensor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TransformationInterfaceSensor *TransformationInterfaceSensorBase::createEmpty(void)
{
    TransformationInterfaceSensor *returnValue;

    newPtr<TransformationInterfaceSensor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TransformationInterfaceSensorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TransformationInterfaceSensor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TransformationInterfaceSensor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TransformationInterfaceSensorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TransformationInterfaceSensor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TransformationInterfaceSensor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TransformationInterfaceSensorBase::shallowCopy(void) const
{
    TransformationInterfaceSensor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TransformationInterfaceSensor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TransformationInterfaceSensorBase::TransformationInterfaceSensorBase(void) :
    Inherited(),
    _sfTransformation         (),
    _sfTranslation            (),
    _sfRotation               (),
    _sfRotationScale          (Real32(1.f)),
    _sfTranslationScale       (Real32(1.f))
{
}

TransformationInterfaceSensorBase::TransformationInterfaceSensorBase(const TransformationInterfaceSensorBase &source) :
    Inherited(source),
    _sfTransformation         (source._sfTransformation         ),
    _sfTranslation            (source._sfTranslation            ),
    _sfRotation               (source._sfRotation               ),
    _sfRotationScale          (source._sfRotationScale          ),
    _sfTranslationScale       (source._sfTranslationScale       )
{
}


/*-------------------------- destructors ----------------------------------*/

TransformationInterfaceSensorBase::~TransformationInterfaceSensorBase(void)
{
}


GetFieldHandlePtr TransformationInterfaceSensorBase::getHandleTransformation  (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfTransformation,
             this->getType().getFieldDesc(TransformationFieldId),
             const_cast<TransformationInterfaceSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformationInterfaceSensorBase::editHandleTransformation (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfTransformation,
             this->getType().getFieldDesc(TransformationFieldId),
             this));


    editSField(TransformationFieldMask);

    return returnValue;
}

GetFieldHandlePtr TransformationInterfaceSensorBase::getHandleTranslation     (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfTranslation,
             this->getType().getFieldDesc(TranslationFieldId),
             const_cast<TransformationInterfaceSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformationInterfaceSensorBase::editHandleTranslation    (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfTranslation,
             this->getType().getFieldDesc(TranslationFieldId),
             this));


    editSField(TranslationFieldMask);

    return returnValue;
}

GetFieldHandlePtr TransformationInterfaceSensorBase::getHandleRotation        (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfRotation,
             this->getType().getFieldDesc(RotationFieldId),
             const_cast<TransformationInterfaceSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformationInterfaceSensorBase::editHandleRotation       (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfRotation,
             this->getType().getFieldDesc(RotationFieldId),
             this));


    editSField(RotationFieldMask);

    return returnValue;
}

GetFieldHandlePtr TransformationInterfaceSensorBase::getHandleRotationScale   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRotationScale,
             this->getType().getFieldDesc(RotationScaleFieldId),
             const_cast<TransformationInterfaceSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformationInterfaceSensorBase::editHandleRotationScale  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRotationScale,
             this->getType().getFieldDesc(RotationScaleFieldId),
             this));


    editSField(RotationScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr TransformationInterfaceSensorBase::getHandleTranslationScale (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTranslationScale,
             this->getType().getFieldDesc(TranslationScaleFieldId),
             const_cast<TransformationInterfaceSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformationInterfaceSensorBase::editHandleTranslationScale(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTranslationScale,
             this->getType().getFieldDesc(TranslationScaleFieldId),
             this));


    editSField(TranslationScaleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TransformationInterfaceSensorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TransformationInterfaceSensor *pThis = static_cast<TransformationInterfaceSensor *>(this);

    pThis->execSync(static_cast<TransformationInterfaceSensor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TransformationInterfaceSensorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TransformationInterfaceSensor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TransformationInterfaceSensor *>(pRefAspect),
                  dynamic_cast<const TransformationInterfaceSensor *>(this));

    return returnValue;
}
#endif

void TransformationInterfaceSensorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
