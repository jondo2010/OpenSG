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
 **     class MaterialGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGMaterial.h"                // Material Class

#include "OSGMaterialGroupBase.h"
#include "OSGMaterialGroup.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MaterialGroup
    MaterialGroup is a standard group node that allows for a material to be set
    that will override all materials in the entire subtree.  This can be useful
    if you want to disable materials in a subtree or if a large group of geometry
    nodes should have the same material applied.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Material *      MaterialGroupBase::_sfMaterial
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<MaterialGroup *, nsOSG>::_type(
    "MaterialGroupPtr", 
    "GroupPtr", 
    MaterialGroup::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(MaterialGroup *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MaterialGroup *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MaterialGroup *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MaterialGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecMaterialPtr::Description(
        SFUnrecMaterialPtr::getClassType(),
        "material",
        "",
        MaterialFieldId, MaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MaterialGroup::editHandleMaterial),
        static_cast<FieldGetMethodSig >(&MaterialGroup::getHandleMaterial));

    oType.addInitialDesc(pDesc);
}


MaterialGroupBase::TypeObject MaterialGroupBase::_type(
    MaterialGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&MaterialGroupBase::createEmptyLocal),
    MaterialGroup::initMethod,
    MaterialGroup::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MaterialGroup::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"MaterialGroup\"\n"
    "   parent=\"Group\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpSystemNodeCoreGroups\"\n"
    "   >\n"
    "\n"
    "  MaterialGroup is a standard group node that allows for a material to be set\n"
    "  that will override all materials in the entire subtree.  This can be useful\n"
    "  if you want to disable materials in a subtree or if a large group of geometry\n"
    "  nodes should have the same material applied.\n"
    "\n"
    "  <Field\n"
    "\t name=\"material\"\n"
    "\t type=\"MaterialPtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "MaterialGroup is a standard group node that allows for a material to be set\n"
    "that will override all materials in the entire subtree.  This can be useful\n"
    "if you want to disable materials in a subtree or if a large group of geometry\n"
    "nodes should have the same material applied.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialGroupBase::getType(void) const
{
    return _type;
}

UInt32 MaterialGroupBase::getContainerSize(void) const
{
    return sizeof(MaterialGroup);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MaterialGroup::_sfMaterial field.
const SFUnrecMaterialPtr *MaterialGroupBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}

SFUnrecMaterialPtr  *MaterialGroupBase::editSFMaterial       (void)
{
    editSField(MaterialFieldMask);

    return &_sfMaterial;
}





/*------------------------------ access -----------------------------------*/

SizeT MaterialGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }

    return returnValue;
}

void MaterialGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
}

void MaterialGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        editSField(MaterialFieldMask);
        _sfMaterial.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MaterialGroupTransitPtr MaterialGroupBase::createLocal(BitVector bFlags)
{
    MaterialGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MaterialGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MaterialGroupTransitPtr MaterialGroupBase::createDependent(BitVector bFlags)
{
    MaterialGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MaterialGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MaterialGroupTransitPtr MaterialGroupBase::create(void)
{
    MaterialGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MaterialGroup>(tmpPtr);
    }

    return fc;
}

MaterialGroup *MaterialGroupBase::createEmptyLocal(BitVector bFlags)
{
    MaterialGroup *returnValue;

    newPtr<MaterialGroup>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MaterialGroup *MaterialGroupBase::createEmpty(void)
{
    MaterialGroup *returnValue;

    newPtr<MaterialGroup>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MaterialGroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MaterialGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MaterialGroup *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MaterialGroupBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MaterialGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MaterialGroup *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MaterialGroupBase::shallowCopy(void) const
{
    MaterialGroup *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MaterialGroup *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MaterialGroupBase::MaterialGroupBase(void) :
    Inherited(),
    _sfMaterial               (NULL)
{
}

MaterialGroupBase::MaterialGroupBase(const MaterialGroupBase &source) :
    Inherited(source),
    _sfMaterial               (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

MaterialGroupBase::~MaterialGroupBase(void)
{
}

void MaterialGroupBase::onCreate(const MaterialGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        MaterialGroup *pThis = static_cast<MaterialGroup *>(this);

        pThis->setMaterial(source->getMaterial());
    }
}

GetFieldHandlePtr MaterialGroupBase::getHandleMaterial        (void) const
{
    SFUnrecMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecMaterialPtr::GetHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             const_cast<MaterialGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MaterialGroupBase::editHandleMaterial       (void)
{
    SFUnrecMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecMaterialPtr::EditHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&MaterialGroup::setMaterial,
                    static_cast<MaterialGroup *>(this), _1));

    editSField(MaterialFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MaterialGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MaterialGroup *pThis = static_cast<MaterialGroup *>(this);

    pThis->execSync(static_cast<MaterialGroup *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MaterialGroupBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MaterialGroup *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MaterialGroup *>(pRefAspect),
                  dynamic_cast<const MaterialGroup *>(this));

    return returnValue;
}
#endif

void MaterialGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MaterialGroup *>(this)->setMaterial(NULL);


}


OSG_END_NAMESPACE
