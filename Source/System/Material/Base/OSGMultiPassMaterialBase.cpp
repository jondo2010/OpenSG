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
 **     class MultiPassMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMULTIPASSMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Materials Class

#include "OSGMultiPassMaterialBase.h"
#include "OSGMultiPassMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiPassMaterial
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var MaterialPtr     MultiPassMaterialBase::_mfMaterials
    
*/


void MultiPassMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecMaterialPtr::Description(
        MFUnrecMaterialPtr::getClassType(),
        "materials",
        "",
        MaterialsFieldId, MaterialsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&MultiPassMaterialBase::editHandleMaterials),
        static_cast<FieldGetMethodSig >(&MultiPassMaterialBase::getHandleMaterials));

    oType.addInitialDesc(pDesc);
}


MultiPassMaterialBase::TypeObject MultiPassMaterialBase::_type(
    MultiPassMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MultiPassMaterialBase::createEmptyLocal,
    MultiPassMaterial::initMethod,
    MultiPassMaterial::exitMethod,
    (InitalInsertDescFunc) &MultiPassMaterialBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MultiPassMaterial\"\n"
    "\tparent=\"Material\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"materials\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        pushToFieldAs=\"addMaterial\"\n"
    "        assignMFieldAs=\"assignMaterialsFrom\"\n"
    "        insertIntoMFieldAs=\"insertMaterial\"\n"
    "        replaceInMFieldIndexAs=\"replaceMaterial\"\n"
    "        replaceInMFieldObjectAs=\"replaceMaterial\"\n"
    "        removeFromMFieldIndexAs=\"subMaterial\"\n"
    "        removeFromMFieldObjectAs=\"subMaterial\"\n"
    "        clearFieldAs=\"clearMaterials\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiPassMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiPassMaterialBase::getType(void) const
{
    return _type;
}

UInt32 MultiPassMaterialBase::getContainerSize(void) const
{
    return sizeof(MultiPassMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MultiPassMaterial::_mfMaterials field.
const MFUnrecMaterialPtr *MultiPassMaterialBase::getMFMaterials(void) const
{
    return &_mfMaterials;
}



void MultiPassMaterialBase::addMaterial(MaterialPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(MaterialsFieldMask, _mfMaterials);

    //addRef(value);

    _mfMaterials.push_back(value);
}

void MultiPassMaterialBase::assignMaterialsFrom(const MFUnrecMaterialPtr &value)
{
    MFUnrecMaterialPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecMaterialPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<MultiPassMaterial *>(this)->clearMaterials();

    while(elemIt != elemEnd)
    {
        this->addMaterial(*elemIt);

        ++elemIt;
    }
}

void MultiPassMaterialBase::insertMaterial(UInt32                uiIndex,
                                                   MaterialPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(MaterialsFieldMask, _mfMaterials);

    MFUnrecMaterialPtr::iterator fieldIt = _mfMaterials.begin_nc();

    //addRef(value);

    fieldIt += uiIndex;

    _mfMaterials.insert(fieldIt, value);
}

void MultiPassMaterialBase::replaceMaterial(UInt32                uiIndex,
                                                       MaterialPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfMaterials.size())
        return;

    editMField(MaterialsFieldMask, _mfMaterials);


//    addRef(value);
//    subRef(_mfMaterials[uiIndex]);

//    _mfMaterials[uiIndex] = value;

      _mfMaterials.replace(uiIndex, value);
}

void MultiPassMaterialBase::replaceMaterial(MaterialPtrConstArg pOldElem,
                                                        MaterialPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfMaterials.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(MaterialsFieldMask, _mfMaterials);

//        MFMaterialPtr::iterator fieldIt = _mfMaterials.begin();

//        fieldIt += elemIdx;
//        addRef(pNewElem);
//        subRef(pOldElem);

//        (*fieldIt) = pNewElem;
          _mfMaterials.replace(elemIdx, pNewElem);
    }
}

void MultiPassMaterialBase::subMaterial(UInt32 uiIndex)
{
    if(uiIndex < _mfMaterials.size())
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        MFUnrecMaterialPtr::iterator fieldIt = _mfMaterials.begin_nc();

        fieldIt += uiIndex;

        //subRef(*fieldIt);

        _mfMaterials.erase(fieldIt);
    }
}

void MultiPassMaterialBase::subMaterial(MaterialPtrConstArg value)
{
    Int32 iElemIdx = _mfMaterials.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        MFUnrecMaterialPtr::iterator fieldIt = _mfMaterials.begin_nc();

        fieldIt += iElemIdx;

        //subRef(*fieldIt);

        _mfMaterials.erase(fieldIt);
    }
}
void MultiPassMaterialBase::clearMaterials(void)
{
    editMField(MaterialsFieldMask, _mfMaterials);


    _mfMaterials.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 MultiPassMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        returnValue += _mfMaterials.getBinSize();
    }

    return returnValue;
}

void MultiPassMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyToBin(pMem);
    }
}

void MultiPassMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiPassMaterialTransitPtr MultiPassMaterialBase::create(void)
{
    MultiPassMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MultiPassMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MultiPassMaterialTransitPtr MultiPassMaterialBase::createLocal(BitVector bFlags)
{
    MultiPassMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MultiPassMaterial>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
MultiPassMaterialPtr MultiPassMaterialBase::createEmpty(void)
{
    MultiPassMaterialPtr returnValue;

    newPtr<MultiPassMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

MultiPassMaterialPtr MultiPassMaterialBase::createEmptyLocal(BitVector bFlags)
{
    MultiPassMaterialPtr returnValue;

    newPtr<MultiPassMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiPassMaterialBase::shallowCopy(void) const
{
    MultiPassMaterialPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const MultiPassMaterial *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr MultiPassMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MultiPassMaterialPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiPassMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MultiPassMaterialBase::MultiPassMaterialBase(void) :
    Inherited(),
    _mfMaterials              ()
{
}

MultiPassMaterialBase::MultiPassMaterialBase(const MultiPassMaterialBase &source) :
    Inherited(source),
    _mfMaterials              ()
{
}


/*-------------------------- destructors ----------------------------------*/

MultiPassMaterialBase::~MultiPassMaterialBase(void)
{
}

void MultiPassMaterialBase::onCreate(const MultiPassMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFUnrecMaterialPtr::const_iterator MaterialsIt  =
            source->_mfMaterials.begin();
        MFUnrecMaterialPtr::const_iterator MaterialsEnd =
            source->_mfMaterials.end  ();

        while(MaterialsIt != MaterialsEnd)
        {
            this->addMaterial(*MaterialsIt);

            ++MaterialsIt;
        }
    }
}

GetFieldHandlePtr MultiPassMaterialBase::getHandleMaterials       (void) const
{
    MFUnrecMaterialPtr::GetHandlePtr returnValue(
        new  MFUnrecMaterialPtr::GetHandle(
             &_mfMaterials, 
             this->getType().getFieldDesc(MaterialsFieldId)));

    return returnValue;
}

EditFieldHandlePtr MultiPassMaterialBase::editHandleMaterials      (void)
{
    MFUnrecMaterialPtr::EditHandlePtr returnValue(
        new  MFUnrecMaterialPtr::EditHandle(
             &_mfMaterials, 
             this->getType().getFieldDesc(MaterialsFieldId)));

    returnValue->setAddMethod(boost::bind(&MultiPassMaterial::addMaterial, 
                              static_cast<MultiPassMaterial *>(this), _1));

    editMField(MaterialsFieldMask, _mfMaterials);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiPassMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MultiPassMaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MultiPassMaterialBase::createAspectCopy(void) const
{
    MultiPassMaterialPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiPassMaterial *>(this));

    return returnValue;
}
#endif

void MultiPassMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<MultiPassMaterial *>(this)->clearMaterials();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiPassMaterialPtr>::_type("MultiPassMaterialPtr", "MaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MultiPassMaterialPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           MultiPassMaterialPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           MultiPassMaterialPtr, 
                           0);

OSG_END_NAMESPACE
