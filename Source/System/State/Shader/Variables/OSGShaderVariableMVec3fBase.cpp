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
 **     class ShaderVariableMVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderVariableMVec3fBase.h"
#include "OSGShaderVariableMVec3f.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableMVec3f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3f           ShaderVariableMVec3fBase::_mfValue
    variable value
*/


void ShaderVariableMVec3fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "value",
        "variable value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableMVec3f::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariableMVec3f::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariableMVec3fBase::TypeObject ShaderVariableMVec3fBase::_type(
    ShaderVariableMVec3fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableMVec3fBase::createEmptyLocal),
    ShaderVariableMVec3f::initMethod,
    ShaderVariableMVec3f::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariableMVec3fBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderVariableMVec3f\"\n"
    "\tparent=\"ShaderValueVariable\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tvariable value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableMVec3fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableMVec3fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableMVec3fBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableMVec3f);
}

/*------------------------- decorator get ------------------------------*/


MFVec3f *ShaderVariableMVec3fBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFVec3f *ShaderVariableMVec3fBase::getMFValue(void) const
{
    return &_mfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderVariableMVec3fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariableMVec3fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderVariableMVec3fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableMVec3fTransitPtr ShaderVariableMVec3fBase::createLocal(BitVector bFlags)
{
    ShaderVariableMVec3fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMVec3f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableMVec3fTransitPtr ShaderVariableMVec3fBase::createDependent(BitVector bFlags)
{
    ShaderVariableMVec3fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMVec3f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableMVec3fTransitPtr ShaderVariableMVec3fBase::create(void)
{
    ShaderVariableMVec3fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableMVec3f>(tmpPtr);
    }

    return fc;
}

ShaderVariableMVec3f *ShaderVariableMVec3fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableMVec3f *returnValue;

    newPtr<ShaderVariableMVec3f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableMVec3f *ShaderVariableMVec3fBase::createEmpty(void)
{
    ShaderVariableMVec3f *returnValue;

    newPtr<ShaderVariableMVec3f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableMVec3fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableMVec3f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMVec3f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMVec3fBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableMVec3f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMVec3f *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMVec3fBase::shallowCopy(void) const
{
    ShaderVariableMVec3f *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableMVec3f *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableMVec3fBase::ShaderVariableMVec3fBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderVariableMVec3fBase::ShaderVariableMVec3fBase(const ShaderVariableMVec3fBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableMVec3fBase::~ShaderVariableMVec3fBase(void)
{
}


GetFieldHandlePtr ShaderVariableMVec3fBase::getHandleValue           (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableMVec3fBase::editHandleValue          (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId)));


    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableMVec3fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableMVec3f *pThis = static_cast<ShaderVariableMVec3f *>(this);

    pThis->execSync(static_cast<ShaderVariableMVec3f *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableMVec3fBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableMVec3f *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableMVec3f *>(pRefAspect),
                  dynamic_cast<const ShaderVariableMVec3f *>(this));

    return returnValue;
}
#endif

void ShaderVariableMVec3fBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderVariableMVec3f *>::_type("ShaderVariableMVec3fPtr", "ShaderValueVariablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderVariableMVec3f *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableMVec3f *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableMVec3f *,
                           0);

OSG_END_NAMESPACE