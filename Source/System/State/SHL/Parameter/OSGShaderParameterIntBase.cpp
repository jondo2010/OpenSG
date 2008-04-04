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
 **     class ShaderParameterInt!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERINTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterIntBase.h"
#include "OSGShaderParameterInt.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterInt
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           ShaderParameterIntBase::_sfValue
    parameter value
*/


void ShaderParameterIntBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderParameterIntBase::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderParameterIntBase::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterIntBase::TypeObject ShaderParameterIntBase::_type(
    ShaderParameterIntBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterIntBase::createEmpty,
    ShaderParameterInt::initMethod,
    ShaderParameterInt::exitMethod,
    (InitalInsertDescFunc) &ShaderParameterIntBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterInt\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterIntBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterIntBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterIntBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterInt);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *ShaderParameterIntBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFInt32 *ShaderParameterIntBase::getSFValue(void) const
{
    return &_sfValue;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *ShaderParameterIntBase::getSFValue          (void)
{
    return this->editSFValue          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterIntBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterIntBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterIntBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterIntPtr ShaderParameterIntBase::create(void)
{
    ShaderParameterIntPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ShaderParameterInt::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterIntPtr ShaderParameterIntBase::createEmpty(void)
{
    ShaderParameterIntPtr returnValue;

    newPtr<ShaderParameterInt>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterIntBase::shallowCopy(void) const
{
    ShaderParameterIntPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterInt *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterIntBase::ShaderParameterIntBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterIntBase::ShaderParameterIntBase(const ShaderParameterIntBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterIntBase::~ShaderParameterIntBase(void)
{
}


GetFieldHandlePtr ShaderParameterIntBase::getHandleValue           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterIntBase::editHandleValue          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterIntBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterIntBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterIntBase::createAspectCopy(void) const
{
    ShaderParameterIntPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterInt *>(this));

    return returnValue;
}
#endif

void ShaderParameterIntBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterIntPtr>::_type("ShaderParameterIntPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterIntPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    ShaderParameterIntPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         ShaderParameterIntPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    ShaderParameterIntPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         ShaderParameterIntPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE
