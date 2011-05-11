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
 **     class StringAttributeMap!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGStringAttributeMapBase.h"
#include "OSGStringAttributeMap.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StringAttributeMap
    An attachment that stores a string-to-string mapping of keys to values.
    User code can store any key and value pair and interpret the string value in
    whatever ways are appropriate.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     StringAttributeMapBase::_mfKeys
    
*/

/*! \var std::string     StringAttributeMapBase::_mfValues
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StringAttributeMap *>::_type("StringAttributeMapPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StringAttributeMap *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StringAttributeMap *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StringAttributeMapBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFString::Description(
        MFString::getClassType(),
        "keys",
        "",
        KeysFieldId, KeysFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StringAttributeMap::editHandleKeys),
        static_cast<FieldGetMethodSig >(&StringAttributeMap::getHandleKeys));

    oType.addInitialDesc(pDesc);

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "values",
        "",
        ValuesFieldId, ValuesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StringAttributeMap::editHandleValues),
        static_cast<FieldGetMethodSig >(&StringAttributeMap::getHandleValues));

    oType.addInitialDesc(pDesc);
}


StringAttributeMapBase::TypeObject StringAttributeMapBase::_type(
    StringAttributeMapBase::getClassname(),
    Inherited::getClassname(),
    "StringAttributeMap",
    0,
    reinterpret_cast<PrototypeCreateF>(&StringAttributeMapBase::createEmptyLocal),
    StringAttributeMap::initMethod,
    StringAttributeMap::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StringAttributeMap::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"StringAttributeMap\"\n"
    "   parent=\"Attachment\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"single\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemFieldContainer\"\n"
    "   >\n"
    "  An attachment that stores a string-to-string mapping of keys to values.\n"
    "  User code can store any key and value pair and interpret the string value in\n"
    "  whatever ways are appropriate.\n"
    "  <Field\n"
    "\t name=\"keys\"\n"
    "\t type=\"std::string\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"protected\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"values\"\n"
    "\t type=\"std::string\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"protected\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "An attachment that stores a string-to-string mapping of keys to values.\n"
    "User code can store any key and value pair and interpret the string value in\n"
    "whatever ways are appropriate.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StringAttributeMapBase::getType(void)
{
    return _type;
}

const FieldContainerType &StringAttributeMapBase::getType(void) const
{
    return _type;
}

UInt32 StringAttributeMapBase::getContainerSize(void) const
{
    return sizeof(StringAttributeMap);
}

/*------------------------- decorator get ------------------------------*/


MFString *StringAttributeMapBase::editMFKeys(void)
{
    editMField(KeysFieldMask, _mfKeys);

    return &_mfKeys;
}

const MFString *StringAttributeMapBase::getMFKeys(void) const
{
    return &_mfKeys;
}


MFString *StringAttributeMapBase::editMFValues(void)
{
    editMField(ValuesFieldMask, _mfValues);

    return &_mfValues;
}

const MFString *StringAttributeMapBase::getMFValues(void) const
{
    return &_mfValues;
}






/*------------------------------ access -----------------------------------*/

UInt32 StringAttributeMapBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        returnValue += _mfKeys.getBinSize();
    }
    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }

    return returnValue;
}

void StringAttributeMapBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        _mfKeys.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }
}

void StringAttributeMapBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        editMField(KeysFieldMask, _mfKeys);
        _mfKeys.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        editMField(ValuesFieldMask, _mfValues);
        _mfValues.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StringAttributeMapTransitPtr StringAttributeMapBase::createLocal(BitVector bFlags)
{
    StringAttributeMapTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<StringAttributeMap>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
StringAttributeMapTransitPtr StringAttributeMapBase::createDependent(BitVector bFlags)
{
    StringAttributeMapTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<StringAttributeMap>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StringAttributeMapTransitPtr StringAttributeMapBase::create(void)
{
    StringAttributeMapTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<StringAttributeMap>(tmpPtr);
    }

    return fc;
}

StringAttributeMap *StringAttributeMapBase::createEmptyLocal(BitVector bFlags)
{
    StringAttributeMap *returnValue;

    newPtr<StringAttributeMap>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
StringAttributeMap *StringAttributeMapBase::createEmpty(void)
{
    StringAttributeMap *returnValue;

    newPtr<StringAttributeMap>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr StringAttributeMapBase::shallowCopyLocal(
    BitVector bFlags) const
{
    StringAttributeMap *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StringAttributeMap *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StringAttributeMapBase::shallowCopyDependent(
    BitVector bFlags) const
{
    StringAttributeMap *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StringAttributeMap *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr StringAttributeMapBase::shallowCopy(void) const
{
    StringAttributeMap *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const StringAttributeMap *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

StringAttributeMapBase::StringAttributeMapBase(void) :
    Inherited(),
    _mfKeys                   (),
    _mfValues                 ()
{
}

StringAttributeMapBase::StringAttributeMapBase(const StringAttributeMapBase &source) :
    Inherited(source),
    _mfKeys                   (source._mfKeys                   ),
    _mfValues                 (source._mfValues                 )
{
}


/*-------------------------- destructors ----------------------------------*/

StringAttributeMapBase::~StringAttributeMapBase(void)
{
}


GetFieldHandlePtr StringAttributeMapBase::getHandleKeys            (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfKeys,
             this->getType().getFieldDesc(KeysFieldId),
             const_cast<StringAttributeMapBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StringAttributeMapBase::editHandleKeys           (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfKeys,
             this->getType().getFieldDesc(KeysFieldId),
             this));


    editMField(KeysFieldMask, _mfKeys);

    return returnValue;
}

GetFieldHandlePtr StringAttributeMapBase::getHandleValues          (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfValues,
             this->getType().getFieldDesc(ValuesFieldId),
             const_cast<StringAttributeMapBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StringAttributeMapBase::editHandleValues         (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfValues,
             this->getType().getFieldDesc(ValuesFieldId),
             this));


    editMField(ValuesFieldMask, _mfValues);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StringAttributeMapBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StringAttributeMap *pThis = static_cast<StringAttributeMap *>(this);

    pThis->execSync(static_cast<StringAttributeMap *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StringAttributeMapBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    StringAttributeMap *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const StringAttributeMap *>(pRefAspect),
                  dynamic_cast<const StringAttributeMap *>(this));

    return returnValue;
}
#endif

void StringAttributeMapBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKeys.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfValues.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
