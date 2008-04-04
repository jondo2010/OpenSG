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
 **     class MaterialDrawable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATERIALDRAWABLEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Material Class

#include "OSGMaterialDrawableBase.h"
#include "OSGMaterialDrawable.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MaterialDrawable
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var MaterialPtr     MaterialDrawableBase::_sfMaterial
    The material used to render the Drawable.
*/


void MaterialDrawableBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMaterialPtr::Description(
        SFMaterialPtr::getClassType(),
        "material",
        "The material used to render the Drawable.\n",
        MaterialFieldId, MaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&MaterialDrawableBase::editHandleMaterial),
        static_cast<FieldGetMethodSig >(&MaterialDrawableBase::getHandleMaterial));

    oType.addInitialDesc(pDesc);
}


MaterialDrawableBase::TypeObject MaterialDrawableBase::_type(
    MaterialDrawableBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    MaterialDrawable::initMethod,
    MaterialDrawable::exitMethod,
    (InitalInsertDescFunc) &MaterialDrawableBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MaterialDrawable\"\n"
    "\tparent=\"Drawable\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"material\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe material used to render the Drawable.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialDrawableBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialDrawableBase::getType(void) const
{
    return _type;
}

UInt32 MaterialDrawableBase::getContainerSize(void) const
{
    return sizeof(MaterialDrawable);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MaterialDrawable::_sfMaterial field.
const SFMaterialPtr *MaterialDrawableBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}





/*------------------------------ access -----------------------------------*/

UInt32 MaterialDrawableBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }

    return returnValue;
}

void MaterialDrawableBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
}

void MaterialDrawableBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

MaterialDrawableBase::MaterialDrawableBase(void) :
    Inherited(),
    _sfMaterial               (NullFC)
{
}

MaterialDrawableBase::MaterialDrawableBase(const MaterialDrawableBase &source) :
    Inherited(source),
    _sfMaterial               (NullFC)
{
}


/*-------------------------- destructors ----------------------------------*/

MaterialDrawableBase::~MaterialDrawableBase(void)
{
}

void MaterialDrawableBase::onCreate(const MaterialDrawable *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setMaterial(source->getMaterial());
    }
}

GetFieldHandlePtr MaterialDrawableBase::getHandleMaterial        (void) const
{
    SFMaterialPtr::GetHandlePtr returnValue(
        new  SFMaterialPtr::GetHandle(
             &_sfMaterial, 
             this->getType().getFieldDesc(MaterialFieldId)));

    return returnValue;
}

EditFieldHandlePtr MaterialDrawableBase::editHandleMaterial       (void)
{
    SFMaterialPtr::EditHandlePtr returnValue(
        new  SFMaterialPtr::EditHandle(
             &_sfMaterial, 
             this->getType().getFieldDesc(MaterialFieldId)));

    returnValue->setSetMethod(boost::bind(&MaterialDrawable::setMaterial, 
                                          static_cast<MaterialDrawable *>(this), _1));

    editSField(MaterialFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MaterialDrawableBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MaterialDrawableBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void MaterialDrawableBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MaterialDrawable *>(this)->setMaterial(NullFC);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MaterialDrawablePtr>::_type("MaterialDrawablePtr", "DrawablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MaterialDrawablePtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, MaterialDrawablePtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, MaterialDrawablePtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, MaterialDrawablePtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, MaterialDrawablePtr, 0);

OSG_END_NAMESPACE
