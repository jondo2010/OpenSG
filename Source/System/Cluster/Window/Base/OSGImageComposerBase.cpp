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
 **     class ImageComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEIMAGECOMPOSERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGImageComposerBase.h"
#include "OSGImageComposer.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ImageComposer
    An image composer creates an image from multiple cluster rendering servers.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            ImageComposerBase::_sfEnabled
    Do composition if value is true
*/

/*! \var bool            ImageComposerBase::_sfStatistics
    
*/


void ImageComposerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enabled",
        "Do composition if value is true\n",
        EnabledFieldId, EnabledFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ImageComposerBase::editHandleEnabled),
        static_cast<FieldGetMethodSig >(&ImageComposerBase::getHandleEnabled));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "statistics",
        "",
        StatisticsFieldId, StatisticsFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ImageComposerBase::editHandleStatistics),
        static_cast<FieldGetMethodSig >(&ImageComposerBase::getHandleStatistics));

    oType.addInitialDesc(pDesc);
}


ImageComposerBase::TypeObject ImageComposerBase::_type(
    ImageComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ImageComposer::initMethod,
    ImageComposer::exitMethod,
    (InitalInsertDescFunc) &ImageComposerBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ImageComposer\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "An image composer creates an image from multiple cluster rendering servers.\n"
    "\t<Field\n"
    "\t\tname=\"enabled\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDo composition if value is true\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"statistics\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An image composer creates an image from multiple cluster rendering servers.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImageComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &ImageComposerBase::getType(void) const
{
    return _type;
}

UInt32 ImageComposerBase::getContainerSize(void) const
{
    return sizeof(ImageComposer);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ImageComposerBase::editSFEnabled(void)
{
    editSField(EnabledFieldMask);

    return &_sfEnabled;
}

const SFBool *ImageComposerBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ImageComposerBase::getSFEnabled        (void)
{
    return this->editSFEnabled        ();
}
#endif

SFBool *ImageComposerBase::editSFStatistics(void)
{
    editSField(StatisticsFieldMask);

    return &_sfStatistics;
}

const SFBool *ImageComposerBase::getSFStatistics(void) const
{
    return &_sfStatistics;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ImageComposerBase::getSFStatistics     (void)
{
    return this->editSFStatistics     ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ImageComposerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }
    if(FieldBits::NoField != (StatisticsFieldMask & whichField))
    {
        returnValue += _sfStatistics.getBinSize();
    }

    return returnValue;
}

void ImageComposerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StatisticsFieldMask & whichField))
    {
        _sfStatistics.copyToBin(pMem);
    }
}

void ImageComposerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StatisticsFieldMask & whichField))
    {
        _sfStatistics.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ImageComposerBase::ImageComposerBase(void) :
    Inherited(),
    _sfEnabled                (bool(true)),
    _sfStatistics             (bool(false))
{
}

ImageComposerBase::ImageComposerBase(const ImageComposerBase &source) :
    Inherited(source),
    _sfEnabled                (source._sfEnabled                ),
    _sfStatistics             (source._sfStatistics             )
{
}


/*-------------------------- destructors ----------------------------------*/

ImageComposerBase::~ImageComposerBase(void)
{
}


GetFieldHandlePtr ImageComposerBase::getHandleEnabled         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnabled, 
             this->getType().getFieldDesc(EnabledFieldId)));

    return returnValue;
}

EditFieldHandlePtr ImageComposerBase::editHandleEnabled        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnabled, 
             this->getType().getFieldDesc(EnabledFieldId)));

    editSField(EnabledFieldMask);

    return returnValue;
}

GetFieldHandlePtr ImageComposerBase::getHandleStatistics      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfStatistics, 
             this->getType().getFieldDesc(StatisticsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ImageComposerBase::editHandleStatistics     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfStatistics, 
             this->getType().getFieldDesc(StatisticsFieldId)));

    editSField(StatisticsFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ImageComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ImageComposerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void ImageComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ImageComposerPtr>::_type("ImageComposerPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ImageComposerPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, ImageComposerPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, ImageComposerPtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, ImageComposerPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, ImageComposerPtr, 0);

OSG_END_NAMESPACE
