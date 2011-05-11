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
 **     class AnimMatrixDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGAnimMatrixDataSourceBase.h"
#include "OSGAnimMatrixDataSource.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimMatrixDataSource
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Matrix          AnimMatrixDataSourceBase::_mfValues
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AnimMatrixDataSource *>::_type("AnimMatrixDataSourcePtr", "AnimKeyFrameDataSourcePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AnimMatrixDataSource *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimMatrixDataSource *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimMatrixDataSource *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimMatrixDataSourceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFMatrix::Description(
        MFMatrix::getClassType(),
        "values",
        "",
        ValuesFieldId, ValuesFieldMask,
        false,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimMatrixDataSource::editHandleValues),
        static_cast<FieldGetMethodSig >(&AnimMatrixDataSource::getHandleValues));

    oType.addInitialDesc(pDesc);
}


AnimMatrixDataSourceBase::TypeObject AnimMatrixDataSourceBase::_type(
    AnimMatrixDataSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AnimMatrixDataSourceBase::createEmptyLocal),
    AnimMatrixDataSource::initMethod,
    AnimMatrixDataSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimMatrixDataSource::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AnimMatrixDataSource\"\n"
    "    parent=\"AnimKeyFrameDataSource\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"values\"\n"
    "     category=\"data\"\n"
    "     type=\"Matrix\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimMatrixDataSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimMatrixDataSourceBase::getType(void) const
{
    return _type;
}

UInt32 AnimMatrixDataSourceBase::getContainerSize(void) const
{
    return sizeof(AnimMatrixDataSource);
}

/*------------------------- decorator get ------------------------------*/


MFMatrix *AnimMatrixDataSourceBase::editMFValues(void)
{
    editMField(ValuesFieldMask, _mfValues);

    return &_mfValues;
}

const MFMatrix *AnimMatrixDataSourceBase::getMFValues(void) const
{
    return &_mfValues;
}






/*------------------------------ access -----------------------------------*/

UInt32 AnimMatrixDataSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }

    return returnValue;
}

void AnimMatrixDataSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }
}

void AnimMatrixDataSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        editMField(ValuesFieldMask, _mfValues);
        _mfValues.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AnimMatrixDataSourceTransitPtr AnimMatrixDataSourceBase::createLocal(BitVector bFlags)
{
    AnimMatrixDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimMatrixDataSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimMatrixDataSourceTransitPtr AnimMatrixDataSourceBase::createDependent(BitVector bFlags)
{
    AnimMatrixDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimMatrixDataSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimMatrixDataSourceTransitPtr AnimMatrixDataSourceBase::create(void)
{
    AnimMatrixDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimMatrixDataSource>(tmpPtr);
    }

    return fc;
}

AnimMatrixDataSource *AnimMatrixDataSourceBase::createEmptyLocal(BitVector bFlags)
{
    AnimMatrixDataSource *returnValue;

    newPtr<AnimMatrixDataSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimMatrixDataSource *AnimMatrixDataSourceBase::createEmpty(void)
{
    AnimMatrixDataSource *returnValue;

    newPtr<AnimMatrixDataSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimMatrixDataSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimMatrixDataSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimMatrixDataSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimMatrixDataSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimMatrixDataSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimMatrixDataSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimMatrixDataSourceBase::shallowCopy(void) const
{
    AnimMatrixDataSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimMatrixDataSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimMatrixDataSourceBase::AnimMatrixDataSourceBase(void) :
    Inherited(),
    _mfValues                 ()
{
}

AnimMatrixDataSourceBase::AnimMatrixDataSourceBase(const AnimMatrixDataSourceBase &source) :
    Inherited(source),
    _mfValues                 (source._mfValues                 )
{
}


/*-------------------------- destructors ----------------------------------*/

AnimMatrixDataSourceBase::~AnimMatrixDataSourceBase(void)
{
}


GetFieldHandlePtr AnimMatrixDataSourceBase::getHandleValues          (void) const
{
    MFMatrix::GetHandlePtr returnValue(
        new  MFMatrix::GetHandle(
             &_mfValues,
             this->getType().getFieldDesc(ValuesFieldId),
             const_cast<AnimMatrixDataSourceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimMatrixDataSourceBase::editHandleValues         (void)
{
    MFMatrix::EditHandlePtr returnValue(
        new  MFMatrix::EditHandle(
             &_mfValues,
             this->getType().getFieldDesc(ValuesFieldId),
             this));


    editMField(ValuesFieldMask, _mfValues);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AnimMatrixDataSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimMatrixDataSource *pThis = static_cast<AnimMatrixDataSource *>(this);

    pThis->execSync(static_cast<AnimMatrixDataSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimMatrixDataSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimMatrixDataSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimMatrixDataSource *>(pRefAspect),
                  dynamic_cast<const AnimMatrixDataSource *>(this));

    return returnValue;
}
#endif

void AnimMatrixDataSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValues.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
