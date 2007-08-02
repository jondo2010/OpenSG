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
 **     class ChunkMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECHUNKMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGStateChunk.h> // Chunks Class

#include "OSGChunkMaterialBase.h"
#include "OSGChunkMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ChunkMaterial
    \ingroup GrpSystemMaterial

    The chunk material class. See \ref PageSystemMaterialChunkMaterial for a
    description.

    Chunks can be attached and detached from the material using
    OSG::ChunkMaterial::addChunk() and OSG::ChunkMaterial::subChunk(). For more
    complex manipulation of the chunk list use the OSG::ChunkMaterial::_mfChunks
    field's functions.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var StateChunkPtr   ChunkMaterialBase::_mfChunks
    
*/

/*! \var Int32           ChunkMaterialBase::_mfSlots
    
*/


void ChunkMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFStateChunkPtr::Description(
        MFStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ChunkMaterialBase::editHandleChunks),
        static_cast<FieldGetMethodSig >(&ChunkMaterialBase::getHandleChunks));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "slots",
        "",
        SlotsFieldId, SlotsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ChunkMaterialBase::editHandleSlots),
        static_cast<FieldGetMethodSig >(&ChunkMaterialBase::getHandleSlots));

    oType.addInitialDesc(pDesc);
}


ChunkMaterialBase::TypeObject ChunkMaterialBase::_type(
    ChunkMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ChunkMaterialBase::createEmpty,
    ChunkMaterial::initMethod,
    (InitalInsertDescFunc) &ChunkMaterialBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ChunkMaterial\"\n"
    "\tparent=\"Material\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The chunk material class. See \\ref PageSystemMaterialChunkMaterial for a\n"
    "description.\n"
    "\n"
    "Chunks can be attached and detached from the material using\n"
    "OSG::ChunkMaterial::addChunk() and OSG::ChunkMaterial::subChunk(). For more\n"
    "complex manipulation of the chunk list use the OSG::ChunkMaterial::_mfChunks\n"
    "field's functions.\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        clearField=\"clearChunks\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"slots\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The chunk material class. See \\ref PageSystemMaterialChunkMaterial for a\n"
    "description.\n"
    "\n"
    "Chunks can be attached and detached from the material using\n"
    "OSG::ChunkMaterial::addChunk() and OSG::ChunkMaterial::subChunk(). For more\n"
    "complex manipulation of the chunk list use the OSG::ChunkMaterial::_mfChunks\n"
    "field's functions.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ChunkMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &ChunkMaterialBase::getType(void) const
{
    return _type;
}

UInt32 ChunkMaterialBase::getContainerSize(void) const
{
    return sizeof(ChunkMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ChunkMaterial::_mfChunks field.
const MFStateChunkPtr *ChunkMaterialBase::getMFChunks(void) const
{
    return &_mfChunks;
}

MFInt32 *ChunkMaterialBase::editMFSlots(void)
{
    editMField(SlotsFieldMask, _mfSlots);

    return &_mfSlots;
}

const MFInt32 *ChunkMaterialBase::getMFSlots(void) const
{
    return &_mfSlots;
}

#ifdef OSG_1_GET_COMPAT
MFInt32             *ChunkMaterialBase::getMFSlots          (void)
{
    return this->editMFSlots          ();
}
#endif



void ChunkMaterialBase::pushToChunks(StateChunkPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ChunksFieldMask, _mfChunks);

    addRef(value);

    _mfChunks.push_back(value);
}

void ChunkMaterialBase::assignChunks   (const MFStateChunkPtr   &value)
{
    MFStateChunkPtr  ::const_iterator elemIt  =
        value.begin();
    MFStateChunkPtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<ChunkMaterial *>(this)->clearChunks();

    while(elemIt != elemEnd)
    {
        this->pushToChunks(*elemIt);

        ++elemIt;
    }
}

void ChunkMaterialBase::insertIntoChunks(UInt32                uiIndex,
                                                   StateChunkPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ChunksFieldMask, _mfChunks);

    MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfChunks.insert(fieldIt, value);
}

void ChunkMaterialBase::replaceInChunks(UInt32                uiIndex,
                                                       StateChunkPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfChunks.size())
        return;

    editMField(ChunksFieldMask, _mfChunks);

    addRef(value);

    subRef(_mfChunks[uiIndex]);

    _mfChunks[uiIndex] = value;
}

void ChunkMaterialBase::replaceInChunks(StateChunkPtrConstArg pOldElem,
                                                        StateChunkPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfChunks.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void ChunkMaterialBase::removeFromChunks(UInt32 uiIndex)
{
    if(uiIndex < _mfChunks.size())
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfChunks.erase(fieldIt);
    }
}

void ChunkMaterialBase::removeFromChunks(StateChunkPtrConstArg value)
{
    Int32 iElemIdx = _mfChunks.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfChunks.erase(fieldIt);
    }
}

/*********************************** Non-ptr code ********************************/
void ChunkMaterialBase::pushToSlots(const Int32& value)
{
    editMField(SlotsFieldMask, _mfSlots);
    _mfSlots.push_back(value);
}

void ChunkMaterialBase::insertIntoSlots(UInt32                uiIndex,
                                                   const Int32& value   )
{
    editMField(SlotsFieldMask, _mfSlots);

    MFInt32::iterator fieldIt = _mfSlots.begin();

    fieldIt += uiIndex;

    _mfSlots.insert(fieldIt, value);
}

void ChunkMaterialBase::replaceInSlots(UInt32                uiIndex,
                                                       const Int32& value   )
{
    if(uiIndex >= _mfSlots.size())
        return;

    editMField(SlotsFieldMask, _mfSlots);

    _mfSlots[uiIndex] = value;
}

void ChunkMaterialBase::replaceInSlots(const Int32& pOldElem,
                                                        const Int32& pNewElem)
{
    Int32  elemIdx = _mfSlots.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(SlotsFieldMask, _mfSlots);

        MFInt32::iterator fieldIt = _mfSlots.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ChunkMaterialBase::removeFromSlots(UInt32 uiIndex)
{
    if(uiIndex < _mfSlots.size())
    {
        editMField(SlotsFieldMask, _mfSlots);

        MFInt32::iterator fieldIt = _mfSlots.begin();

        fieldIt += uiIndex;
        _mfSlots.erase(fieldIt);
    }
}

void ChunkMaterialBase::removeFromSlots(const Int32& value)
{
    Int32 iElemIdx = _mfSlots.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(SlotsFieldMask, _mfSlots);

        MFInt32::iterator fieldIt = _mfSlots.begin();

        fieldIt += iElemIdx;

        _mfSlots.erase(fieldIt);
    }
}

void ChunkMaterialBase::clearSlots(void)
{
    editMField(SlotsFieldMask, _mfSlots);

    _mfSlots.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ChunkMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }
    if(FieldBits::NoField != (SlotsFieldMask & whichField))
    {
        returnValue += _mfSlots.getBinSize();
    }

    return returnValue;
}

void ChunkMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SlotsFieldMask & whichField))
    {
        _mfSlots.copyToBin(pMem);
    }
}

void ChunkMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SlotsFieldMask & whichField))
    {
        _mfSlots.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ChunkMaterialPtr ChunkMaterialBase::create(void)
{
    ChunkMaterialPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ChunkMaterial::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ChunkMaterialPtr ChunkMaterialBase::createEmpty(void)
{
    ChunkMaterialPtr returnValue;

    newPtr<ChunkMaterial>(returnValue);

    return returnValue;
}

FieldContainerPtr ChunkMaterialBase::shallowCopy(void) const
{
    ChunkMaterialPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ChunkMaterial *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ChunkMaterialBase::ChunkMaterialBase(void) :
    Inherited(),
    _mfChunks                 (),
    _mfSlots                  ()
{
}

ChunkMaterialBase::ChunkMaterialBase(const ChunkMaterialBase &source) :
    Inherited(source),
    _mfChunks                 (),
    _mfSlots                  (source._mfSlots                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ChunkMaterialBase::~ChunkMaterialBase(void)
{
}

void ChunkMaterialBase::onCreate(const ChunkMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFStateChunkPtr::const_iterator ChunksIt  =
            source->_mfChunks.begin();
        MFStateChunkPtr::const_iterator ChunksEnd =
            source->_mfChunks.end  ();

        while(ChunksIt != ChunksEnd)
        {
            this->pushToChunks(*ChunksIt);

            ++ChunksIt;
        }
    }
}

GetFieldHandlePtr ChunkMaterialBase::getHandleChunks          (void) const
{
    MFStateChunkPtr::GetHandlePtr returnValue(
        new  MFStateChunkPtr::GetHandle(
             &_mfChunks, 
             this->getType().getFieldDesc(ChunksFieldId)));

    return returnValue;
}

EditFieldHandlePtr ChunkMaterialBase::editHandleChunks         (void)
{
    MFStateChunkPtr::EditHandlePtr returnValue(
        new  MFStateChunkPtr::EditHandle(
             &_mfChunks, 
             this->getType().getFieldDesc(ChunksFieldId)));

    returnValue->setAddMethod(boost::bind(&ChunkMaterial::pushToChunks, 
                              static_cast<ChunkMaterial *>(this), _1));

    editMField(ChunksFieldMask, _mfChunks);

    return returnValue;
}

GetFieldHandlePtr ChunkMaterialBase::getHandleSlots           (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfSlots, 
             this->getType().getFieldDesc(SlotsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ChunkMaterialBase::editHandleSlots          (void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfSlots, 
             this->getType().getFieldDesc(SlotsFieldId)));

    editMField(SlotsFieldMask, _mfSlots);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ChunkMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ChunkMaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ChunkMaterialBase::createAspectCopy(void) const
{
    ChunkMaterialPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ChunkMaterial *>(this));

    return returnValue;
}
#endif

void ChunkMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

    static_cast<ChunkMaterial *>(this)->clearChunks();
#ifdef OSG_MT_CPTR_ASPECT
    _mfSlots.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ChunkMaterialPtr>::_type("ChunkMaterialPtr", "MaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ChunkMaterialPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ChunkMaterialPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ChunkMaterialPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
