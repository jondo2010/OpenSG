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
 **     class PointLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOINTLIGHTINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPointLightBase.h"
#include "OSGPointLight.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PointLight
    PointLight is a located lightsource. The position of the light source
    (in the beacon's coordinate system) is defined by the \c position
    attribute. The influence of the light diminishes with distance, controlled
    by the \c constantAttenuation, \c linearAttenuation and \c
    quadraticAttenuation attributes.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Pnt3r           PointLightBase::_sfPosition
    
*/


void PointLightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFPnt3r *(PointLightBase::*GetSFPositionF)(void) const;

    GetSFPositionF GetSFPosition = &PointLightBase::getSFPosition;
#endif

    pDesc = new SFPnt3r::Description(
        SFPnt3r::getClassType(),
        "position",
        "",
        PositionFieldId, PositionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PointLightBase::editSFPosition),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPosition));
#else
        reinterpret_cast<FieldGetMethodSig >(&PointLightBase::getSFPosition));
#endif

    oType.addInitialDesc(pDesc);
}


PointLightBase::TypeObject PointLightBase::_type(true,
    PointLightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PointLightBase::createEmpty,
    PointLight::initMethod,
    (InitalInsertDescFunc) &PointLightBase::classDescInserter,
    false,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PointLight\"\n"
    "\tparent=\"Light\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "PointLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute. The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Pnt3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"0.f,0.f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "PointLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute. The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PointLightBase::getType(void)
{
    return _type;
}

const FieldContainerType &PointLightBase::getType(void) const
{
    return _type;
}

UInt32 PointLightBase::getContainerSize(void) const
{
    return sizeof(PointLight);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3r *PointLightBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFPnt3r *PointLightBase::getSFPosition(void) const
{
    return &_sfPosition;
}

#ifdef OSG_1_COMPAT
SFPnt3r             *PointLightBase::getSFPosition       (void)
{
    return this->editSFPosition       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 PointLightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }

    return returnValue;
}

void PointLightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
}

void PointLightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
PointLightPtr PointLightBase::createEmpty(void)
{
    PointLightPtr returnValue;

    newPtr<PointLight>(returnValue);

    return returnValue;
}

FieldContainerPtr PointLightBase::shallowCopy(void) const
{
    PointLightPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PointLight *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PointLightBase::PointLightBase(void) :
    Inherited(),
    _sfPosition               (Pnt3r(0.f,0.f,0.f))
{
}

PointLightBase::PointLightBase(const PointLightBase &source) :
    Inherited(source),
    _sfPosition               (source._sfPosition               )
{
}

/*-------------------------- destructors ----------------------------------*/

PointLightBase::~PointLightBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void PointLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<PointLightBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void PointLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PointLightBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void PointLightBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PointLightBase::createAspectCopy(void) const
{
    PointLightPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PointLight *>(this));

    return returnValue;
}
#endif

void PointLightBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PointLightPtr>::_type("PointLightPtr", "LightPtr");
#endif



/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGPOINTLIGHTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPOINTLIGHTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPOINTLIGHTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
