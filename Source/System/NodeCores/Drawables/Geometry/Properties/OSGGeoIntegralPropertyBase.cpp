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
 **     class GeoIntegralProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOINTEGRALPROPERTYINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGeoIntegralPropertyBase.h"
#include "OSGGeoIntegralProperty.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoIntegralProperty
    Parent class for integral (i.e. one dimensional unsigned integer typed) properties.
 */


GeoIntegralPropertyBase::TypeObject GeoIntegralPropertyBase::_type(true,
    GeoIntegralPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    GeoIntegralProperty::initMethod,
    NULL,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoIntegralProperty\"\n"
    "\tparent=\"GeoProperty\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "Parent class for integral (i.e. one dimensional unsigned integer typed) properties.\n"
    "\n"
    "The main use for this class is as a parent class for indices, lengths and \n"
    "types for the Geometry.\n"
    "</FieldContainer>\n",
    "Parent class for integral (i.e. one dimensional unsigned integer typed) properties.\n"
    "\n"
    "The main use for this class is as a parent class for indices, lengths and \n"
    "types for the Geometry.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoIntegralPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoIntegralPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoIntegralPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoIntegralProperty);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GeoIntegralPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GeoIntegralPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GeoIntegralPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}



/*------------------------- constructors ----------------------------------*/

GeoIntegralPropertyBase::GeoIntegralPropertyBase(void) :
    Inherited()
{
}

GeoIntegralPropertyBase::GeoIntegralPropertyBase(const GeoIntegralPropertyBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

GeoIntegralPropertyBase::~GeoIntegralPropertyBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void GeoIntegralPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<GeoIntegralPropertyBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void GeoIntegralPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoIntegralPropertyBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void GeoIntegralPropertyBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void GeoIntegralPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoIntegralPropertyPtr>::_type("GeoIntegralPropertyPtr", "GeoPropertyPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoIntegralPropertyPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, GeoIntegralPropertyPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, GeoIntegralPropertyPtr);


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
    static Char8 cvsid_hpp       [] = OSGGEOINTEGRALPROPERTYBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGEOINTEGRALPROPERTYBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGEOINTEGRALPROPERTYFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
