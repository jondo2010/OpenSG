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
 **     class CgFXTechnique!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGState.h"                   // RenderPassStates Class

#include "OSGCgFXTechniqueBase.h"
#include "OSGCgFXTechnique.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CgFXTechnique
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var State *         CgFXTechniqueBase::_mfRenderPassStates
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CgFXTechnique *>::_type("CgFXTechniquePtr", "PrimeMaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CgFXTechnique *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CgFXTechnique *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CgFXTechnique *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CgFXTechniqueBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStatePtr::Description(
        MFUnrecStatePtr::getClassType(),
        "renderPassStates",
        "",
        RenderPassStatesFieldId, RenderPassStatesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FNullCheckAccess),
        static_cast<FieldEditMethodSig>(&CgFXTechnique::editHandleRenderPassStates),
        static_cast<FieldGetMethodSig >(&CgFXTechnique::getHandleRenderPassStates));

    oType.addInitialDesc(pDesc);
}


CgFXTechniqueBase::TypeObject CgFXTechniqueBase::_type(
    CgFXTechniqueBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CgFXTechniqueBase::createEmptyLocal),
    CgFXTechnique::initMethod,
    CgFXTechnique::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CgFXTechnique::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"CgFXTechnique\"\n"
    "   parent=\"PrimeMaterial\"\n"
    "   library=\"ContribCgFX\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"renderPassStates\"\n"
    "\t type=\"State\"\n"
    "\t category=\"pointer\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"protected\"\n"
    "\t pushToFieldAs=\"addPassState\"\n"
    "\t insertIntoMFieldAs=\"insertPassState\"\n"
    "\t replaceInMFieldIndexAs=\"replacePassState\"\n"
    "\t replaceInMFieldObjectAs=\"replacePassStateByObj\"\n"
    "\t removeFromMFieldIndexAs=\"subPassState\"\n"
    "\t removeFromMFieldObjectAs=\"subPassStateByObj\"\n"
    "\t clearFieldAs=\"clearPassStates\"\n"
    "\t ptrFieldAccess = \"nullCheck\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CgFXTechniqueBase::getType(void)
{
    return _type;
}

const FieldContainerType &CgFXTechniqueBase::getType(void) const
{
    return _type;
}

UInt32 CgFXTechniqueBase::getContainerSize(void) const
{
    return sizeof(CgFXTechnique);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CgFXTechnique::_mfRenderPassStates field.
const MFUnrecStatePtr *CgFXTechniqueBase::getMFRenderPassStates(void) const
{
    return &_mfRenderPassStates;
}



void CgFXTechniqueBase::addPassState(State * const value)
{
    if(value == NULL)
        return;

    editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

    _mfRenderPassStates.push_back(value);
}

void CgFXTechniqueBase::assignRenderPassStates(const MFUnrecStatePtr   &value)
{
    MFUnrecStatePtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecStatePtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<CgFXTechnique *>(this)->clearPassStates();

    while(elemIt != elemEnd)
    {
        this->addPassState(*elemIt);

        ++elemIt;
    }
}

void CgFXTechniqueBase::insertPassState(UInt32               uiIndex,
                                                   State * const value   )
{
    if(value == NULL)
        return;

    editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

    MFUnrecStatePtr::iterator fieldIt = _mfRenderPassStates.begin_nc();

    fieldIt += uiIndex;

    _mfRenderPassStates.insert(fieldIt, value);
}

void CgFXTechniqueBase::replacePassState(UInt32               uiIndex,
                                                       State * const value   )
{
    if(value == NULL)
        return;

    if(uiIndex >= _mfRenderPassStates.size())
        return;

    editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

    _mfRenderPassStates.replace(uiIndex, value);
}

void CgFXTechniqueBase::replacePassStateByObj(State * const pOldElem,
                                                        State * const pNewElem)
{
    if(pNewElem == NULL)
        return;

    Int32  elemIdx = _mfRenderPassStates.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

        _mfRenderPassStates.replace(elemIdx, pNewElem);
    }
}

void CgFXTechniqueBase::subPassState(UInt32 uiIndex)
{
    if(uiIndex < _mfRenderPassStates.size())
    {
        editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

        _mfRenderPassStates.erase(uiIndex);
    }
}

void CgFXTechniqueBase::subPassStateByObj(State * const value)
{
    Int32 iElemIdx = _mfRenderPassStates.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

        _mfRenderPassStates.erase(iElemIdx);
    }
}
void CgFXTechniqueBase::clearPassStates(void)
{
    editMField(RenderPassStatesFieldMask, _mfRenderPassStates);


    _mfRenderPassStates.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 CgFXTechniqueBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderPassStatesFieldMask & whichField))
    {
        returnValue += _mfRenderPassStates.getBinSize();
    }

    return returnValue;
}

void CgFXTechniqueBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderPassStatesFieldMask & whichField))
    {
        _mfRenderPassStates.copyToBin(pMem);
    }
}

void CgFXTechniqueBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderPassStatesFieldMask & whichField))
    {
        editMField(RenderPassStatesFieldMask, _mfRenderPassStates);
        _mfRenderPassStates.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CgFXTechniqueTransitPtr CgFXTechniqueBase::createLocal(BitVector bFlags)
{
    CgFXTechniqueTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CgFXTechnique>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CgFXTechniqueTransitPtr CgFXTechniqueBase::createDependent(BitVector bFlags)
{
    CgFXTechniqueTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CgFXTechnique>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CgFXTechniqueTransitPtr CgFXTechniqueBase::create(void)
{
    CgFXTechniqueTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CgFXTechnique>(tmpPtr);
    }

    return fc;
}

CgFXTechnique *CgFXTechniqueBase::createEmptyLocal(BitVector bFlags)
{
    CgFXTechnique *returnValue;

    newPtr<CgFXTechnique>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CgFXTechnique *CgFXTechniqueBase::createEmpty(void)
{
    CgFXTechnique *returnValue;

    newPtr<CgFXTechnique>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CgFXTechniqueBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CgFXTechnique *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CgFXTechnique *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CgFXTechniqueBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CgFXTechnique *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CgFXTechnique *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CgFXTechniqueBase::shallowCopy(void) const
{
    CgFXTechnique *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CgFXTechnique *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CgFXTechniqueBase::CgFXTechniqueBase(void) :
    Inherited(),
    _mfRenderPassStates       ()
{
}

CgFXTechniqueBase::CgFXTechniqueBase(const CgFXTechniqueBase &source) :
    Inherited(source),
    _mfRenderPassStates       ()
{
}


/*-------------------------- destructors ----------------------------------*/

CgFXTechniqueBase::~CgFXTechniqueBase(void)
{
}

void CgFXTechniqueBase::onCreate(const CgFXTechnique *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CgFXTechnique *pThis = static_cast<CgFXTechnique *>(this);

        MFUnrecStatePtr::const_iterator RenderPassStatesIt  =
            source->_mfRenderPassStates.begin();
        MFUnrecStatePtr::const_iterator RenderPassStatesEnd =
            source->_mfRenderPassStates.end  ();

        while(RenderPassStatesIt != RenderPassStatesEnd)
        {
            pThis->addPassState(*RenderPassStatesIt);

            ++RenderPassStatesIt;
        }
    }
}

GetFieldHandlePtr CgFXTechniqueBase::getHandleRenderPassStates (void) const
{
    MFUnrecStatePtr::GetHandlePtr returnValue(
        new  MFUnrecStatePtr::GetHandle(
             &_mfRenderPassStates,
             this->getType().getFieldDesc(RenderPassStatesFieldId),
             const_cast<CgFXTechniqueBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CgFXTechniqueBase::editHandleRenderPassStates(void)
{
    MFUnrecStatePtr::EditHandlePtr returnValue(
        new  MFUnrecStatePtr::EditHandle(
             &_mfRenderPassStates,
             this->getType().getFieldDesc(RenderPassStatesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&CgFXTechnique::addPassState,
                    static_cast<CgFXTechnique *>(this), _1));
    returnValue->setInsertMethod(
        boost::bind(&CgFXTechnique::insertPassState,
                    static_cast<CgFXTechnique *>(this), _1, _2));
    returnValue->setReplaceMethod(
        boost::bind(&CgFXTechnique::replacePassState,
                    static_cast<CgFXTechnique *>(this), _1, _2));
    returnValue->setReplaceObjMethod(
        boost::bind(&CgFXTechnique::replacePassStateByObj,
                    static_cast<CgFXTechnique *>(this), _1, _2));
    returnValue->setRemoveMethod(
        boost::bind(&CgFXTechnique::subPassState,
                    static_cast<CgFXTechnique *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&CgFXTechnique::subPassStateByObj,
                    static_cast<CgFXTechnique *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&CgFXTechnique::clearPassStates,
                    static_cast<CgFXTechnique *>(this)));

    editMField(RenderPassStatesFieldMask, _mfRenderPassStates);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CgFXTechniqueBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CgFXTechnique *pThis = static_cast<CgFXTechnique *>(this);

    pThis->execSync(static_cast<CgFXTechnique *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CgFXTechniqueBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CgFXTechnique *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CgFXTechnique *>(pRefAspect),
                  dynamic_cast<const CgFXTechnique *>(this));

    return returnValue;
}
#endif

void CgFXTechniqueBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CgFXTechnique *>(this)->clearPassStates();


}


OSG_END_NAMESPACE
