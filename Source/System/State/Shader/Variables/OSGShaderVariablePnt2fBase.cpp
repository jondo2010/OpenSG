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
 **     class ShaderVariablePnt2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGShaderVariablePnt2fBase.h"
#include "OSGShaderVariablePnt2f.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariablePnt2f
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt2f           ShaderVariablePnt2fBase::_sfValue
    variable value
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderVariablePnt2f *, nsOSG>::_type(
    "ShaderVariablePnt2fPtr", 
    "ShaderValueVariablePtr", 
    ShaderVariablePnt2f::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderVariablePnt2f *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariablePnt2f *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariablePnt2f *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderVariablePnt2fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt2f::Description(
        SFPnt2f::getClassType(),
        "value",
        "variable value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariablePnt2f::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariablePnt2f::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariablePnt2fBase::TypeObject ShaderVariablePnt2fBase::_type(
    ShaderVariablePnt2fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderVariablePnt2fBase::createEmptyLocal),
    ShaderVariablePnt2f::initMethod,
    ShaderVariablePnt2f::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariablePnt2f::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderVariablePnt2f\"\n"
    "   parent=\"ShaderValueVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"value\"\n"
    "\t type=\"Pnt2f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tvariable value\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariablePnt2fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariablePnt2fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariablePnt2fBase::getContainerSize(void) const
{
    return sizeof(ShaderVariablePnt2f);
}

/*------------------------- decorator get ------------------------------*/


SFPnt2f *ShaderVariablePnt2fBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFPnt2f *ShaderVariablePnt2fBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

SizeT ShaderVariablePnt2fBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariablePnt2fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderVariablePnt2fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        editSField(ValueFieldMask);
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariablePnt2fTransitPtr ShaderVariablePnt2fBase::createLocal(BitVector bFlags)
{
    ShaderVariablePnt2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariablePnt2f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariablePnt2fTransitPtr ShaderVariablePnt2fBase::createDependent(BitVector bFlags)
{
    ShaderVariablePnt2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariablePnt2f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariablePnt2fTransitPtr ShaderVariablePnt2fBase::create(void)
{
    ShaderVariablePnt2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariablePnt2f>(tmpPtr);
    }

    return fc;
}

ShaderVariablePnt2f *ShaderVariablePnt2fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariablePnt2f *returnValue;

    newPtr<ShaderVariablePnt2f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariablePnt2f *ShaderVariablePnt2fBase::createEmpty(void)
{
    ShaderVariablePnt2f *returnValue;

    newPtr<ShaderVariablePnt2f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariablePnt2fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariablePnt2f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariablePnt2f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariablePnt2fBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariablePnt2f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariablePnt2f *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariablePnt2fBase::shallowCopy(void) const
{
    ShaderVariablePnt2f *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariablePnt2f *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariablePnt2fBase::ShaderVariablePnt2fBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderVariablePnt2fBase::ShaderVariablePnt2fBase(const ShaderVariablePnt2fBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariablePnt2fBase::~ShaderVariablePnt2fBase(void)
{
}


GetFieldHandlePtr ShaderVariablePnt2fBase::getHandleValue           (void) const
{
    SFPnt2f::GetHandlePtr returnValue(
        new  SFPnt2f::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<ShaderVariablePnt2fBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariablePnt2fBase::editHandleValue          (void)
{
    SFPnt2f::EditHandlePtr returnValue(
        new  SFPnt2f::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariablePnt2fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariablePnt2f *pThis = static_cast<ShaderVariablePnt2f *>(this);

    pThis->execSync(static_cast<ShaderVariablePnt2f *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariablePnt2fBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariablePnt2f *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariablePnt2f *>(pRefAspect),
                  dynamic_cast<const ShaderVariablePnt2f *>(this));

    return returnValue;
}
#endif

void ShaderVariablePnt2fBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
