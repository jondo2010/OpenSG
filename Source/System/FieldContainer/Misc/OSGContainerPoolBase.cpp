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
 **     class ContainerPool!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECONTAINERPOOLINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Containers Class

#include "OSGContainerPoolBase.h"
#include "OSGContainerPool.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ContainerPool
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ContainerPoolBase::_sfName
    The name of the container pool.  Can be used to identify pools.
*/

/*! \var FieldContainerPtr ContainerPoolBase::_mfContainers
    A list of containers held in the pool.
*/


void ContainerPoolBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "The name of the container pool.  Can be used to identify pools.\n",
        NameFieldId, NameFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ContainerPoolBase::editHandleName),
        static_cast<FieldGetMethodSig >(&ContainerPoolBase::getHandleName));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecFieldContainerPtr::Description(
        MFUnrecFieldContainerPtr::getClassType(),
        "containers",
        "A list of containers held in the pool.\n",
        ContainersFieldId, ContainersFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ContainerPoolBase::editHandleContainers),
        static_cast<FieldGetMethodSig >(&ContainerPoolBase::getHandleContainers));

    oType.addInitialDesc(pDesc);
}


ContainerPoolBase::TypeObject ContainerPoolBase::_type(
    ContainerPoolBase::getClassname(),
    Inherited::getClassname(),
    "ContainerPool",
    0,
    (PrototypeCreateF) &ContainerPoolBase::createEmptyLocal,
    ContainerPool::initMethod,
    ContainerPool::exitMethod,
    (InitalInsertDescFunc) &ContainerPoolBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ContainerPool\"\n"
    "\tparent=\"FieldContainerAttachment\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"name\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe name of the container pool.  Can be used to identify pools.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"containers\"\n"
    "\t\ttype=\"FieldContainerPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "                access=\"public\"\n"
    "\t>\n"
    "        A list of containers held in the pool.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ContainerPoolBase::getType(void)
{
    return _type;
}

const FieldContainerType &ContainerPoolBase::getType(void) const
{
    return _type;
}

UInt32 ContainerPoolBase::getContainerSize(void) const
{
    return sizeof(ContainerPool);
}

/*------------------------- decorator get ------------------------------*/


SFString *ContainerPoolBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *ContainerPoolBase::getSFName(void) const
{
    return &_sfName;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ContainerPoolBase::getSFName           (void)
{
    return this->editSFName           ();
}
#endif

//! Get the ContainerPool::_mfContainers field.
const MFUnrecFieldContainerPtr *ContainerPoolBase::getMFContainers(void) const
{
    return &_mfContainers;
}



void ContainerPoolBase::pushToContainers(FieldContainerPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ContainersFieldMask, _mfContainers);

    //addRef(value);

    _mfContainers.push_back(value);
}

void ContainerPoolBase::assignContainers(const MFUnrecFieldContainerPtr &value)
{
    MFUnrecFieldContainerPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFieldContainerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ContainerPool *>(this)->clearContainers();

    while(elemIt != elemEnd)
    {
        this->pushToContainers(*elemIt);

        ++elemIt;
    }
}

void ContainerPoolBase::insertIntoContainers(UInt32                uiIndex,
                                                   FieldContainerPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ContainersFieldMask, _mfContainers);

    MFUnrecFieldContainerPtr::iterator fieldIt = _mfContainers.begin_nc();

    //addRef(value);

    fieldIt += uiIndex;

    _mfContainers.insert(fieldIt, value);
}

void ContainerPoolBase::replaceInContainers(UInt32                uiIndex,
                                                       FieldContainerPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfContainers.size())
        return;

    editMField(ContainersFieldMask, _mfContainers);


//    addRef(value);
//    subRef(_mfContainers[uiIndex]);

//    _mfContainers[uiIndex] = value;

      _mfContainers.replace(uiIndex, value);
}

void ContainerPoolBase::replaceInContainers(FieldContainerPtrConstArg pOldElem,
                                                        FieldContainerPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfContainers.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ContainersFieldMask, _mfContainers);

//        MFFieldContainerPtr::iterator fieldIt = _mfContainers.begin();

//        fieldIt += elemIdx;
//        addRef(pNewElem);
//        subRef(pOldElem);

//        (*fieldIt) = pNewElem;
          _mfContainers.replace(elemIdx, pNewElem);
    }
}

void ContainerPoolBase::removeFromContainers(UInt32 uiIndex)
{
    if(uiIndex < _mfContainers.size())
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFUnrecFieldContainerPtr::iterator fieldIt = _mfContainers.begin_nc();

        fieldIt += uiIndex;

        //subRef(*fieldIt);

        _mfContainers.erase(fieldIt);
    }
}

void ContainerPoolBase::removeFromContainers(FieldContainerPtrConstArg value)
{
    Int32 iElemIdx = _mfContainers.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFUnrecFieldContainerPtr::iterator fieldIt = _mfContainers.begin_nc();

        fieldIt += iElemIdx;

        //subRef(*fieldIt);

        _mfContainers.erase(fieldIt);
    }
}
void ContainerPoolBase::clearContainers(void)
{
    editMField(ContainersFieldMask, _mfContainers);


    _mfContainers.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ContainerPoolBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        returnValue += _mfContainers.getBinSize();
    }

    return returnValue;
}

void ContainerPoolBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        _mfContainers.copyToBin(pMem);
    }
}

void ContainerPoolBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        _mfContainers.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ContainerPoolTransitPtr ContainerPoolBase::create(void)
{
    ContainerPoolTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ContainerPool>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ContainerPoolTransitPtr ContainerPoolBase::createLocal(BitVector bFlags)
{
    ContainerPoolTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ContainerPool>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ContainerPoolPtr ContainerPoolBase::createEmpty(void)
{
    ContainerPoolPtr returnValue;

    newPtr<ContainerPool>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

ContainerPoolPtr ContainerPoolBase::createEmptyLocal(BitVector bFlags)
{
    ContainerPoolPtr returnValue;

    newPtr<ContainerPool>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ContainerPoolBase::shallowCopy(void) const
{
    ContainerPoolPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const ContainerPool *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr ContainerPoolBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ContainerPoolPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ContainerPool *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ContainerPoolBase::ContainerPoolBase(void) :
    Inherited(),
    _sfName                   (),
    _mfContainers             ()
{
}

ContainerPoolBase::ContainerPoolBase(const ContainerPoolBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   ),
    _mfContainers             ()
{
}


/*-------------------------- destructors ----------------------------------*/

ContainerPoolBase::~ContainerPoolBase(void)
{
}

void ContainerPoolBase::onCreate(const ContainerPool *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFUnrecFieldContainerPtr::const_iterator ContainersIt  =
            source->_mfContainers.begin();
        MFUnrecFieldContainerPtr::const_iterator ContainersEnd =
            source->_mfContainers.end  ();

        while(ContainersIt != ContainersEnd)
        {
            this->pushToContainers(*ContainersIt);

            ++ContainersIt;
        }
    }
}

GetFieldHandlePtr ContainerPoolBase::getHandleName            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfName, 
             this->getType().getFieldDesc(NameFieldId)));

    return returnValue;
}

EditFieldHandlePtr ContainerPoolBase::editHandleName           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfName, 
             this->getType().getFieldDesc(NameFieldId)));

    editSField(NameFieldMask);

    return returnValue;
}

GetFieldHandlePtr ContainerPoolBase::getHandleContainers      (void) const
{
    MFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::GetHandle(
             &_mfContainers, 
             this->getType().getFieldDesc(ContainersFieldId)));

    return returnValue;
}

EditFieldHandlePtr ContainerPoolBase::editHandleContainers     (void)
{
    MFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::EditHandle(
             &_mfContainers, 
             this->getType().getFieldDesc(ContainersFieldId)));

    returnValue->setAddMethod(boost::bind(&ContainerPool::pushToContainers, 
                              static_cast<ContainerPool *>(this), _1));

    editMField(ContainersFieldMask, _mfContainers);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ContainerPoolBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ContainerPoolBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ContainerPoolBase::createAspectCopy(void) const
{
    ContainerPoolPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ContainerPool *>(this));

    return returnValue;
}
#endif

void ContainerPoolBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<ContainerPool *>(this)->clearContainers();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ContainerPoolPtr>::_type("ContainerPoolPtr", "FieldContainerAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ContainerPoolPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           ContainerPoolPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           ContainerPoolPtr, 
                           0);

OSG_END_NAMESPACE
