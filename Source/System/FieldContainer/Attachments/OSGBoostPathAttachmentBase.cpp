/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class BoostPathAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGBoostPathAttachmentBase.h"
#include "OSGBoostPathAttachment.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BoostPathAttachment
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var BoostPath       BoostPathAttachmentBase::_sfPath
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<BoostPathAttachment *, nsOSG>::_type(
    "BoostPathAttachmentPtr", 
    "AttachmentPtr", 
    BoostPathAttachment::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(BoostPathAttachment *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BoostPathAttachment *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BoostPathAttachment *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BoostPathAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBoostPath::Description(
        SFBoostPath::getClassType(),
        "path",
        "",
        PathFieldId, PathFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BoostPathAttachment::editHandlePath),
        static_cast<FieldGetMethodSig >(&BoostPathAttachment::getHandlePath));

    oType.addInitialDesc(pDesc);
}


BoostPathAttachmentBase::TypeObject BoostPathAttachmentBase::_type(
    BoostPathAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "BoostPathAttachment",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&BoostPathAttachmentBase::createEmptyLocal),
    BoostPathAttachment::initMethod,
    BoostPathAttachment::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BoostPathAttachment::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"BoostPathAttachment\"\n"
    "    parent=\"Attachment\"\n"
    "    library=\"System\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"path\"\n"
    "      type=\"BoostPath\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"internal\"\n"
    "      defaultValue=\"\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BoostPathAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &BoostPathAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 BoostPathAttachmentBase::getContainerSize(void) const
{
    return sizeof(BoostPathAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFBoostPath *BoostPathAttachmentBase::editSFPath(void)
{
    editSField(PathFieldMask);

    return &_sfPath;
}

const SFBoostPath *BoostPathAttachmentBase::getSFPath(void) const
{
    return &_sfPath;
}






/*------------------------------ access -----------------------------------*/

SizeT BoostPathAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PathFieldMask & whichField))
    {
        returnValue += _sfPath.getBinSize();
    }

    return returnValue;
}

void BoostPathAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PathFieldMask & whichField))
    {
        _sfPath.copyToBin(pMem);
    }
}

void BoostPathAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PathFieldMask & whichField))
    {
        editSField(PathFieldMask);
        _sfPath.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BoostPathAttachmentTransitPtr BoostPathAttachmentBase::createLocal(BitVector bFlags)
{
    BoostPathAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BoostPathAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BoostPathAttachmentTransitPtr BoostPathAttachmentBase::createDependent(BitVector bFlags)
{
    BoostPathAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BoostPathAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BoostPathAttachmentTransitPtr BoostPathAttachmentBase::create(void)
{
    BoostPathAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BoostPathAttachment>(tmpPtr);
    }

    return fc;
}

BoostPathAttachment *BoostPathAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    BoostPathAttachment *returnValue;

    newPtr<BoostPathAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BoostPathAttachment *BoostPathAttachmentBase::createEmpty(void)
{
    BoostPathAttachment *returnValue;

    newPtr<BoostPathAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr BoostPathAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BoostPathAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BoostPathAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BoostPathAttachmentBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BoostPathAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BoostPathAttachment *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BoostPathAttachmentBase::shallowCopy(void) const
{
    BoostPathAttachment *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BoostPathAttachment *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

BoostPathAttachmentBase::BoostPathAttachmentBase(void) :
    Inherited(),
    _sfPath                   ()
{
}

BoostPathAttachmentBase::BoostPathAttachmentBase(const BoostPathAttachmentBase &source) :
    Inherited(source),
    _sfPath                   (source._sfPath                   )
{
}


/*-------------------------- destructors ----------------------------------*/

BoostPathAttachmentBase::~BoostPathAttachmentBase(void)
{
}


GetFieldHandlePtr BoostPathAttachmentBase::getHandlePath            (void) const
{
    SFBoostPath::GetHandlePtr returnValue(
        new  SFBoostPath::GetHandle(
             &_sfPath,
             this->getType().getFieldDesc(PathFieldId),
             const_cast<BoostPathAttachmentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BoostPathAttachmentBase::editHandlePath           (void)
{
    SFBoostPath::EditHandlePtr returnValue(
        new  SFBoostPath::EditHandle(
             &_sfPath,
             this->getType().getFieldDesc(PathFieldId),
             this));


    editSField(PathFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BoostPathAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BoostPathAttachment *pThis = static_cast<BoostPathAttachment *>(this);

    pThis->execSync(static_cast<BoostPathAttachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BoostPathAttachmentBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BoostPathAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BoostPathAttachment *>(pRefAspect),
                  dynamic_cast<const BoostPathAttachment *>(this));

    return returnValue;
}
#endif

void BoostPathAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
