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
 **     class ShaderParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGShaderParameter.h> // Parameters Class

#include "OSGShaderParameterChunkBase.h"
#include "OSGShaderParameterChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ShaderParameterPtr ShaderParameterChunkBase::_mfParameters
    parameter list
*/


void ShaderParameterChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFShaderParameterPtr::Description(
        MFShaderParameterPtr::getClassType(),
        "parameters",
        "parameter list\n",
        ParametersFieldId, ParametersFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderParameterChunkBase::editHandleParameters),
        static_cast<FieldGetMethodSig >(&ShaderParameterChunkBase::getHandleParameters));

    oType.addInitialDesc(pDesc);
}


ShaderParameterChunkBase::TypeObject ShaderParameterChunkBase::_type(
    ShaderParameterChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ShaderParameterChunk::initMethod,
    ShaderParameterChunk::exitMethod,
    (InitalInsertDescFunc) &ShaderParameterChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"parameters\"\n"
    "\t\ttype=\"ShaderParameterPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "\n"
    "        pushToFieldAs=\"addParameter\"\n"
    "        insertIntoMFieldAs=\"insertParameter\"\n"
    "        replaceInMFieldIndexAs=\"replaceParameter\"\n"
    "        replaceInMFieldObjectAs=\"replaceParameterBy\"\n"
    "        removeFromMFieldIndexAs=\"subParameter\"\n"
    "        removeFromMFieldObjectAs=\"subParameter\"\n"
    "        clearFieldAs=\"clearParameters\"        \n"
    "\t>\n"
    "\tparameter list\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShaderParameterChunk::_mfParameters field.
const MFShaderParameterPtr *ShaderParameterChunkBase::getMFParameters(void) const
{
    return &_mfParameters;
}



void ShaderParameterChunkBase::addParameter(ShaderParameterPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ParametersFieldMask, _mfParameters);

    //addRef(value);

    _mfParameters.push_back(value);

    value->addParent(this, ParametersFieldMask);
}

void ShaderParameterChunkBase::assignParameters(const MFShaderParameterPtr &value)
{
    MFShaderParameterPtr::const_iterator elemIt  =
        value.begin();
    MFShaderParameterPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ShaderParameterChunk *>(this)->clearParameters();

    while(elemIt != elemEnd)
    {
        this->addParameter(*elemIt);

        ++elemIt;
    }
}

void ShaderParameterChunkBase::insertParameter(UInt32                uiIndex,
                                                   ShaderParameterPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ParametersFieldMask, _mfParameters);

    MFShaderParameterPtr::iterator fieldIt = _mfParameters.begin();

    //addRef(value);

    fieldIt += uiIndex;

    _mfParameters.insert(fieldIt, value);

    value->addParent(this, ParametersFieldMask);
}

void ShaderParameterChunkBase::replaceParameter(UInt32                uiIndex,
                                                       ShaderParameterPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfParameters.size())
        return;

    editMField(ParametersFieldMask, _mfParameters);


    if(_mfParameters[uiIndex] != NullFC)
    {
        _mfParameters[uiIndex]->subParent(this);
    }

//    addRef(value);
//    subRef(_mfParameters[uiIndex]);

//    _mfParameters[uiIndex] = value;

      _mfParameters.replace(uiIndex, value);

    value->addParent(this, ParametersFieldMask);
}

void ShaderParameterChunkBase::replaceParameterBy(ShaderParameterPtrConstArg pOldElem,
                                                        ShaderParameterPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfParameters.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ParametersFieldMask, _mfParameters);


        if(pOldElem != NullFC)
        {
            pOldElem->subParent(this);
        }

        pNewElem->addParent(this, ParametersFieldMask);

//        MFShaderParameterPtr::iterator fieldIt = _mfParameters.begin();

//        fieldIt += elemIdx;
//        addRef(pNewElem);
//        subRef(pOldElem);

//        (*fieldIt) = pNewElem;
          _mfParameters.replace(elemIdx, pNewElem);
    }
}

void ShaderParameterChunkBase::subParameter(UInt32 uiIndex)
{
    if(uiIndex < _mfParameters.size())
    {
        editMField(ParametersFieldMask, _mfParameters);

        MFShaderParameterPtr::iterator fieldIt = _mfParameters.begin();

        fieldIt += uiIndex;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        //subRef(*fieldIt);

        _mfParameters.erase(fieldIt);
    }
}

void ShaderParameterChunkBase::subParameter(ShaderParameterPtrConstArg value)
{
    Int32 iElemIdx = _mfParameters.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ParametersFieldMask, _mfParameters);

        MFShaderParameterPtr::iterator fieldIt = _mfParameters.begin();

        fieldIt += iElemIdx;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        //subRef(*fieldIt);

        _mfParameters.erase(fieldIt);
    }
}
void ShaderParameterChunkBase::clearParameters(void)
{
    editMField(ParametersFieldMask, _mfParameters);

    MFShaderParameterPtr::iterator       fieldIt  = _mfParameters.begin();
    MFShaderParameterPtr::const_iterator fieldEnd = _mfParameters.end  ();

    while(fieldIt != fieldEnd)
    {
        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        //subRef(*fieldIt);

        ++fieldIt;
    }

    _mfParameters.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        returnValue += _mfParameters.getBinSize();
    }

    return returnValue;
}

void ShaderParameterChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        _mfParameters.copyToBin(pMem);
    }
}

void ShaderParameterChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        _mfParameters.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShaderParameterChunkBase::ShaderParameterChunkBase(void) :
    Inherited(),
    _mfParameters             ()
{
}

ShaderParameterChunkBase::ShaderParameterChunkBase(const ShaderParameterChunkBase &source) :
    Inherited(source),
    _mfParameters             ()
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterChunkBase::~ShaderParameterChunkBase(void)
{
}

void ShaderParameterChunkBase::onCreate(const ShaderParameterChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFShaderParameterPtr::const_iterator ParametersIt  =
            source->_mfParameters.begin();
        MFShaderParameterPtr::const_iterator ParametersEnd =
            source->_mfParameters.end  ();

        while(ParametersIt != ParametersEnd)
        {
            this->addParameter(*ParametersIt);

            ++ParametersIt;
        }
    }
}

GetFieldHandlePtr ShaderParameterChunkBase::getHandleParameters      (void) const
{
    MFShaderParameterPtr::GetHandlePtr returnValue(
        new  MFShaderParameterPtr::GetHandle(
             &_mfParameters, 
             this->getType().getFieldDesc(ParametersFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderParameterChunkBase::editHandleParameters     (void)
{
    MFShaderParameterPtr::EditHandlePtr returnValue(
        new  MFShaderParameterPtr::EditHandle(
             &_mfParameters, 
             this->getType().getFieldDesc(ParametersFieldId)));

    returnValue->setAddMethod(boost::bind(&ShaderParameterChunk::addParameter, 
                              static_cast<ShaderParameterChunk *>(this), _1));

    editMField(ParametersFieldMask, _mfParameters);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void ShaderParameterChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<ShaderParameterChunk *>(this)->clearParameters();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterChunkPtr>::_type("ShaderParameterChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterChunkPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    ShaderParameterChunkPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         ShaderParameterChunkPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    ShaderParameterChunkPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         ShaderParameterChunkPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE
