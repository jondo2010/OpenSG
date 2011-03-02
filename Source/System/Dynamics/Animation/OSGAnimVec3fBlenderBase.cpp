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
 **     class AnimVec3fBlender!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGAnimVec3fChannel.h"        // Channels Class

#include "OSGAnimVec3fBlenderBase.h"
#include "OSGAnimVec3fBlender.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimVec3fBlender
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var AnimVec3fChannel * AnimVec3fBlenderBase::_mfChannels
    
*/

/*! \var Vec3f           AnimVec3fBlenderBase::_sfOutValue
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AnimVec3fBlender *>::_type("AnimVec3fBlenderPtr", "AnimBlenderPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AnimVec3fBlender *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimVec3fBlender *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimVec3fBlender *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimVec3fBlenderBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecAnimVec3fChannelPtr::Description(
        MFUnrecAnimVec3fChannelPtr::getClassType(),
        "channels",
        "",
        ChannelsFieldId, ChannelsFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&AnimVec3fBlender::editHandleChannels),
        static_cast<FieldGetMethodSig >(&AnimVec3fBlender::getHandleChannels));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "outValue",
        "",
        OutValueFieldId, OutValueFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&AnimVec3fBlender::editHandleOutValue),
        static_cast<FieldGetMethodSig >(&AnimVec3fBlender::getHandleOutValue));

    oType.addInitialDesc(pDesc);
}


AnimVec3fBlenderBase::TypeObject AnimVec3fBlenderBase::_type(
    AnimVec3fBlenderBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AnimVec3fBlenderBase::createEmptyLocal),
    AnimVec3fBlender::initMethod,
    AnimVec3fBlender::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimVec3fBlender::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"AnimVec3fBlender\"\n"
    "   parent=\"AnimBlender\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"true\"\n"
    "   isBundle=\"false\"\n"
    "   parentFields=\"none\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"channels\"\n"
    "     category=\"pointer\"\n"
    "     type=\"AnimVec3fChannel\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "    </Field>\n"
    "  <Field\n"
    "     name=\"outValue\"\n"
    "     category=\"data\"\n"
    "     type=\"Vec3f\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimVec3fBlenderBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimVec3fBlenderBase::getType(void) const
{
    return _type;
}

UInt32 AnimVec3fBlenderBase::getContainerSize(void) const
{
    return sizeof(AnimVec3fBlender);
}

/*------------------------- decorator get ------------------------------*/


//! Get the AnimVec3fBlender::_mfChannels field.
const MFUnrecAnimVec3fChannelPtr *AnimVec3fBlenderBase::getMFChannels(void) const
{
    return &_mfChannels;
}

MFUnrecAnimVec3fChannelPtr *AnimVec3fBlenderBase::editMFChannels       (void)
{
    editMField(ChannelsFieldMask, _mfChannels);

    return &_mfChannels;
}

SFVec3f *AnimVec3fBlenderBase::editSFOutValue(void)
{
    editSField(OutValueFieldMask);

    return &_sfOutValue;
}

const SFVec3f *AnimVec3fBlenderBase::getSFOutValue(void) const
{
    return &_sfOutValue;
}




void AnimVec3fBlenderBase::pushToChannels(AnimVec3fChannel * const value)
{
    editMField(ChannelsFieldMask, _mfChannels);

    _mfChannels.push_back(value);
}

void AnimVec3fBlenderBase::assignChannels (const MFUnrecAnimVec3fChannelPtr &value)
{
    MFUnrecAnimVec3fChannelPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecAnimVec3fChannelPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<AnimVec3fBlender *>(this)->clearChannels();

    while(elemIt != elemEnd)
    {
        this->pushToChannels(*elemIt);

        ++elemIt;
    }
}

void AnimVec3fBlenderBase::removeFromChannels(UInt32 uiIndex)
{
    if(uiIndex < _mfChannels.size())
    {
        editMField(ChannelsFieldMask, _mfChannels);

        _mfChannels.erase(uiIndex);
    }
}

void AnimVec3fBlenderBase::removeObjFromChannels(AnimVec3fChannel * const value)
{
    Int32 iElemIdx = _mfChannels.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ChannelsFieldMask, _mfChannels);

        _mfChannels.erase(iElemIdx);
    }
}
void AnimVec3fBlenderBase::clearChannels(void)
{
    editMField(ChannelsFieldMask, _mfChannels);


    _mfChannels.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 AnimVec3fBlenderBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChannelsFieldMask & whichField))
    {
        returnValue += _mfChannels.getBinSize();
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        returnValue += _sfOutValue.getBinSize();
    }

    return returnValue;
}

void AnimVec3fBlenderBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChannelsFieldMask & whichField))
    {
        _mfChannels.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        _sfOutValue.copyToBin(pMem);
    }
}

void AnimVec3fBlenderBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChannelsFieldMask & whichField))
    {
        editMField(ChannelsFieldMask, _mfChannels);
        _mfChannels.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        editSField(OutValueFieldMask);
        _sfOutValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AnimVec3fBlenderTransitPtr AnimVec3fBlenderBase::createLocal(BitVector bFlags)
{
    AnimVec3fBlenderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimVec3fBlender>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimVec3fBlenderTransitPtr AnimVec3fBlenderBase::createDependent(BitVector bFlags)
{
    AnimVec3fBlenderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimVec3fBlender>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimVec3fBlenderTransitPtr AnimVec3fBlenderBase::create(void)
{
    AnimVec3fBlenderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimVec3fBlender>(tmpPtr);
    }

    return fc;
}

AnimVec3fBlender *AnimVec3fBlenderBase::createEmptyLocal(BitVector bFlags)
{
    AnimVec3fBlender *returnValue;

    newPtr<AnimVec3fBlender>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimVec3fBlender *AnimVec3fBlenderBase::createEmpty(void)
{
    AnimVec3fBlender *returnValue;

    newPtr<AnimVec3fBlender>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimVec3fBlenderBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimVec3fBlender *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimVec3fBlender *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimVec3fBlenderBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimVec3fBlender *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimVec3fBlender *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimVec3fBlenderBase::shallowCopy(void) const
{
    AnimVec3fBlender *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimVec3fBlender *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimVec3fBlenderBase::AnimVec3fBlenderBase(void) :
    Inherited(),
    _mfChannels               (),
    _sfOutValue               ()
{
}

AnimVec3fBlenderBase::AnimVec3fBlenderBase(const AnimVec3fBlenderBase &source) :
    Inherited(source),
    _mfChannels               (),
    _sfOutValue               (source._sfOutValue               )
{
}


/*-------------------------- destructors ----------------------------------*/

AnimVec3fBlenderBase::~AnimVec3fBlenderBase(void)
{
}

void AnimVec3fBlenderBase::onCreate(const AnimVec3fBlender *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        AnimVec3fBlender *pThis = static_cast<AnimVec3fBlender *>(this);

        MFUnrecAnimVec3fChannelPtr::const_iterator ChannelsIt  =
            source->_mfChannels.begin();
        MFUnrecAnimVec3fChannelPtr::const_iterator ChannelsEnd =
            source->_mfChannels.end  ();

        while(ChannelsIt != ChannelsEnd)
        {
            pThis->pushToChannels(*ChannelsIt);

            ++ChannelsIt;
        }
    }
}

GetFieldHandlePtr AnimVec3fBlenderBase::getHandleChannels        (void) const
{
    MFUnrecAnimVec3fChannelPtr::GetHandlePtr returnValue(
        new  MFUnrecAnimVec3fChannelPtr::GetHandle(
             &_mfChannels,
             this->getType().getFieldDesc(ChannelsFieldId),
             const_cast<AnimVec3fBlenderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimVec3fBlenderBase::editHandleChannels       (void)
{
    MFUnrecAnimVec3fChannelPtr::EditHandlePtr returnValue(
        new  MFUnrecAnimVec3fChannelPtr::EditHandle(
             &_mfChannels,
             this->getType().getFieldDesc(ChannelsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&AnimVec3fBlender::pushToChannels,
                    static_cast<AnimVec3fBlender *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&AnimVec3fBlender::removeFromChannels,
                    static_cast<AnimVec3fBlender *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&AnimVec3fBlender::removeObjFromChannels,
                    static_cast<AnimVec3fBlender *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&AnimVec3fBlender::clearChannels,
                    static_cast<AnimVec3fBlender *>(this)));

    editMField(ChannelsFieldMask, _mfChannels);

    return returnValue;
}

GetFieldHandlePtr AnimVec3fBlenderBase::getHandleOutValue        (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             const_cast<AnimVec3fBlenderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimVec3fBlenderBase::editHandleOutValue       (void)
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
void AnimVec3fBlenderBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimVec3fBlender *pThis = static_cast<AnimVec3fBlender *>(this);

    pThis->execSync(static_cast<AnimVec3fBlender *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimVec3fBlenderBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimVec3fBlender *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimVec3fBlender *>(pRefAspect),
                  dynamic_cast<const AnimVec3fBlender *>(this));

    return returnValue;
}
#endif

void AnimVec3fBlenderBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<AnimVec3fBlender *>(this)->clearChannels();


}


OSG_END_NAMESPACE
