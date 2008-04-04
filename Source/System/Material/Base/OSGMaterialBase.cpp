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
 **     class Material!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGMaterialBase.h"
#include "OSGMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Material
    \ingroup GrpSystemMaterial

    The material base class.

    \ext
    The Material has two interfaces to return a State that represents it.
    OSG::Material::makeState() creates a new OSG::State and returns it. This is 
    ok for rare use, but for every frame this is going to be too expensive. For 
    these cases OSG::Material::rebuildState() and OSG::Material::getState() are 
    used, which modify and return an internal copy of the State. 

    The other method to implement is OSG::Material::isTransparent(), to identify
    transparent materials to be rendered after the opaque ones.
    \endext
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           MaterialBase::_sfSortKey
    
*/

/*! \var Int32           MaterialBase::_sfTransparencyMode
    Set the transparency mode, possible values are TransparencyAutoDetection, TransparencyForceTransparent and TransparencyForceOpaque
*/


void MaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "sortKey",
        "",
        SortKeyFieldId, SortKeyFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&MaterialBase::editHandleSortKey),
        static_cast<FieldGetMethodSig >(&MaterialBase::getHandleSortKey));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "transparencyMode",
        "Set the transparency mode, possible values are TransparencyAutoDetection, TransparencyForceTransparent and TransparencyForceOpaque\n",
        TransparencyModeFieldId, TransparencyModeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&MaterialBase::editHandleTransparencyMode),
        static_cast<FieldGetMethodSig >(&MaterialBase::getHandleTransparencyMode));

    oType.addInitialDesc(pDesc);
}


MaterialBase::TypeObject MaterialBase::_type(
    MaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Material::initMethod,
    Material::exitMethod,
    (InitalInsertDescFunc) &MaterialBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Material\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"abstract\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The material base class.\n"
    "\n"
    "\\ext\n"
    "The Material has two interfaces to return a State that represents it.\n"
    "OSG::Material::makeState() creates a new OSG::State and returns it. This is \n"
    "ok for rare use, but for every frame this is going to be too expensive. For \n"
    "these cases OSG::Material::rebuildState() and OSG::Material::getState() are \n"
    "used, which modify and return an internal copy of the State. \n"
    "\n"
    "The other method to implement is OSG::Material::isTransparent(), to identify\n"
    "transparent materials to be rendered after the opaque ones.\n"
    "\\endext\n"
    "\t<Field\n"
    "\t\tname=\"sortKey\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transparencyMode\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tSet the transparency mode, possible values are TransparencyAutoDetection, TransparencyForceTransparent and TransparencyForceOpaque\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The material base class.\n"
    "\n"
    "\\ext\n"
    "The Material has two interfaces to return a State that represents it.\n"
    "OSG::Material::makeState() creates a new OSG::State and returns it. This is \n"
    "ok for rare use, but for every frame this is going to be too expensive. For \n"
    "these cases OSG::Material::rebuildState() and OSG::Material::getState() are \n"
    "used, which modify and return an internal copy of the State. \n"
    "\n"
    "The other method to implement is OSG::Material::isTransparent(), to identify\n"
    "transparent materials to be rendered after the opaque ones.\n"
    "\\endext\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialBase::getType(void) const
{
    return _type;
}

UInt32 MaterialBase::getContainerSize(void) const
{
    return sizeof(Material);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *MaterialBase::editSFSortKey(void)
{
    editSField(SortKeyFieldMask);

    return &_sfSortKey;
}

const SFInt32 *MaterialBase::getSFSortKey(void) const
{
    return &_sfSortKey;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *MaterialBase::getSFSortKey        (void)
{
    return this->editSFSortKey        ();
}
#endif

SFInt32 *MaterialBase::editSFTransparencyMode(void)
{
    editSField(TransparencyModeFieldMask);

    return &_sfTransparencyMode;
}

const SFInt32 *MaterialBase::getSFTransparencyMode(void) const
{
    return &_sfTransparencyMode;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *MaterialBase::getSFTransparencyMode(void)
{
    return this->editSFTransparencyMode();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 MaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SortKeyFieldMask & whichField))
    {
        returnValue += _sfSortKey.getBinSize();
    }
    if(FieldBits::NoField != (TransparencyModeFieldMask & whichField))
    {
        returnValue += _sfTransparencyMode.getBinSize();
    }

    return returnValue;
}

void MaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SortKeyFieldMask & whichField))
    {
        _sfSortKey.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyModeFieldMask & whichField))
    {
        _sfTransparencyMode.copyToBin(pMem);
    }
}

void MaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SortKeyFieldMask & whichField))
    {
        _sfSortKey.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyModeFieldMask & whichField))
    {
        _sfTransparencyMode.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

MaterialBase::MaterialBase(void) :
    Inherited(),
    _sfSortKey                (Int32(0)),
    _sfTransparencyMode       (Int32(0))
{
}

MaterialBase::MaterialBase(const MaterialBase &source) :
    Inherited(source),
    _sfSortKey                (source._sfSortKey                ),
    _sfTransparencyMode       (source._sfTransparencyMode       )
{
}


/*-------------------------- destructors ----------------------------------*/

MaterialBase::~MaterialBase(void)
{
}


GetFieldHandlePtr MaterialBase::getHandleSortKey         (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfSortKey, 
             this->getType().getFieldDesc(SortKeyFieldId)));

    return returnValue;
}

EditFieldHandlePtr MaterialBase::editHandleSortKey        (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfSortKey, 
             this->getType().getFieldDesc(SortKeyFieldId)));

    editSField(SortKeyFieldMask);

    return returnValue;
}

GetFieldHandlePtr MaterialBase::getHandleTransparencyMode (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfTransparencyMode, 
             this->getType().getFieldDesc(TransparencyModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr MaterialBase::editHandleTransparencyMode(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfTransparencyMode, 
             this->getType().getFieldDesc(TransparencyModeFieldId)));

    editSField(TransparencyModeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void MaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MaterialPtr>::_type("MaterialPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MaterialPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, MaterialPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, MaterialPtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, MaterialPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, MaterialPtr, 0);

OSG_END_NAMESPACE
