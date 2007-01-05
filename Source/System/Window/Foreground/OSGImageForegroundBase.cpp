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
 **     class ImageForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEIMAGEFOREGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // Images Class

#include "OSGImageForegroundBase.h"
#include "OSGImageForeground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ImageForeground
    \ingroup GrpSystemWindowForegrounds

    The ImageForeground is used to draw images on top of the viewport.  See \ref
    PageSystemWindowForegroundImage for a description.

    The images are stored in the _mfImages Field, the corresponding positions in
    the _mfPositions Field.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        ImageForegroundBase::_mfImages
    The images to display.
*/

/*! \var Pnt2f           ImageForegroundBase::_mfPositions
    The positions of the images.
*/


void ImageForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFImagePtr::Description(
        MFImagePtr::getClassType(),
        "images",
        "The images to display.\n",
        ImagesFieldId, ImagesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ImageForegroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ImageForegroundBase::getMFImages));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFPnt2f *(ImageForegroundBase::*GetMFPositionsF)(void) const;

    GetMFPositionsF GetMFPositions = &ImageForegroundBase::getMFPositions;
#endif

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "positions",
        "The positions of the images.\n",
        PositionsFieldId, PositionsFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ImageForegroundBase::editMFPositions),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFPositions));
#else
        reinterpret_cast<FieldGetMethodSig >(&ImageForegroundBase::getMFPositions));
#endif

    oType.addInitialDesc(pDesc);
}


ImageForegroundBase::TypeObject ImageForegroundBase::_type(true,
    ImageForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ImageForegroundBase::createEmpty,
    ImageForeground::initMethod,
    (InitalInsertDescFunc) &ImageForegroundBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ImageForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The ImageForeground is used to draw images on top of the viewport.  See \\ref\n"
    "PageSystemWindowForegroundImage for a description.\n"
    "\n"
    "The images are stored in the _mfImages Field, the corresponding positions in\n"
    "the _mfPositions Field.\n"
    "\t<Field\n"
    "\t\tname=\"images\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe images to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe positions of the images.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The ImageForeground is used to draw images on top of the viewport.  See \\ref\n"
    "PageSystemWindowForegroundImage for a description.\n"
    "\n"
    "The images are stored in the _mfImages Field, the corresponding positions in\n"
    "the _mfPositions Field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImageForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &ImageForegroundBase::getType(void) const
{
    return _type;
}

UInt32 ImageForegroundBase::getContainerSize(void) const
{
    return sizeof(ImageForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ImageForeground::_mfImages field.
const MFImagePtr *ImageForegroundBase::getMFImages(void) const
{
    return &_mfImages;
}

MFPnt2f *ImageForegroundBase::editMFPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    return &_mfPositions;
}

const MFPnt2f *ImageForegroundBase::getMFPositions(void) const
{
    return &_mfPositions;
}

#ifdef OSG_1_COMPAT
MFPnt2f             *ImageForegroundBase::getMFPositions      (void)
{
    return this->editMFPositions      ();
}
#endif


void ImageForegroundBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->pushToImages(
            cast_dynamic<ImagePtr>(pNewElement));
    }
}

void ImageForegroundBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->insertIntoImages(
            uiIndex,
            cast_dynamic<ImagePtr>(pNewElement));
    }
}

void ImageForegroundBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->replaceInImages(
            uiIndex,
            cast_dynamic<ImagePtr>(pNewElement));
    }
}

void ImageForegroundBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->replaceInImages(
            cast_dynamic<ImagePtr>(pOldElement),
            cast_dynamic<ImagePtr>(pNewElement));
    }
}

void ImageForegroundBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->removeFromImages(
            uiIndex);
    }
}

void ImageForegroundBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->removeFromImages(
            cast_dynamic<ImagePtr>(pElement));
    }
}

void ImageForegroundBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ImagesFieldId)
    {
        static_cast<ImageForeground *>(this)->clearImages();
    }
}

void ImageForegroundBase::pushToImages(ImagePtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ImagesFieldMask, _mfImages);

    addRef(value);

    _mfImages.push_back(value);
}

void ImageForegroundBase::insertIntoImages(UInt32                uiIndex,
                                                   ImagePtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ImagesFieldMask, _mfImages);

    MFImagePtr::iterator fieldIt = _mfImages.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfImages.insert(fieldIt, value);
}

void ImageForegroundBase::replaceInImages(UInt32                uiIndex,
                                                       ImagePtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfImages.size())
        return;

    editMField(ImagesFieldMask, _mfImages);

    addRef(value);

    subRef(_mfImages[uiIndex]);

    _mfImages[uiIndex] = value;
}

void ImageForegroundBase::replaceInImages(ImagePtrConstArg pOldElem,
                                                        ImagePtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfImages.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ImagesFieldMask, _mfImages);

        MFImagePtr::iterator fieldIt = _mfImages.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void ImageForegroundBase::removeFromImages(UInt32 uiIndex)
{
    if(uiIndex < _mfImages.size())
    {
        editMField(ImagesFieldMask, _mfImages);

        MFImagePtr::iterator fieldIt = _mfImages.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfImages.erase(fieldIt);
    }
}

void ImageForegroundBase::removeFromImages(ImagePtrConstArg value)
{
    Int32 iElemIdx = _mfImages.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ImagesFieldMask, _mfImages);

        MFImagePtr::iterator fieldIt = _mfImages.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfImages.erase(fieldIt);
    }
}
void ImageForegroundBase::clearImages(void)
{
    editMField(ImagesFieldMask, _mfImages);

    MFImagePtr::iterator       fieldIt  = _mfImages.begin();
    MFImagePtr::const_iterator fieldEnd = _mfImages.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfImages.clear();
}

/*********************************** Non-ptr code ********************************/
void ImageForegroundBase::pushToPositions(const Pnt2f& value)
{
    editMField(PositionsFieldMask, _mfPositions);
    _mfPositions.push_back(value);
}

void ImageForegroundBase::insertIntoPositions(UInt32                uiIndex,
                                                   const Pnt2f& value   )
{
    editMField(PositionsFieldMask, _mfPositions);

    MFPnt2f::iterator fieldIt = _mfPositions.begin();

    fieldIt += uiIndex;

    _mfPositions.insert(fieldIt, value);
}

void ImageForegroundBase::replaceInPositions(UInt32                uiIndex,
                                                       const Pnt2f& value   )
{
    if(uiIndex >= _mfPositions.size())
        return;

    editMField(PositionsFieldMask, _mfPositions);

    _mfPositions[uiIndex] = value;
}

void ImageForegroundBase::replaceInPositions(const Pnt2f& pOldElem,
                                                        const Pnt2f& pNewElem)
{
    Int32  elemIdx = _mfPositions.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PositionsFieldMask, _mfPositions);

        MFPnt2f::iterator fieldIt = _mfPositions.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ImageForegroundBase::removeFromPositions(UInt32 uiIndex)
{
    if(uiIndex < _mfPositions.size())
    {
        editMField(PositionsFieldMask, _mfPositions);

        MFPnt2f::iterator fieldIt = _mfPositions.begin();

        fieldIt += uiIndex;
        _mfPositions.erase(fieldIt);
    }
}

void ImageForegroundBase::removeFromPositions(const Pnt2f& value)
{
    Int32 iElemIdx = _mfPositions.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PositionsFieldMask, _mfPositions);

        MFPnt2f::iterator fieldIt = _mfPositions.begin();

        fieldIt += iElemIdx;

        _mfPositions.erase(fieldIt);
    }
}

void ImageForegroundBase::clearPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    _mfPositions.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ImageForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        returnValue += _mfImages.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }

    return returnValue;
}

void ImageForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }
}

void ImageForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ImageForegroundPtr ImageForegroundBase::createEmpty(void)
{
    ImageForegroundPtr returnValue;

    newPtr<ImageForeground>(returnValue);

    return returnValue;
}

FieldContainerPtr ImageForegroundBase::shallowCopy(void) const
{
    ImageForegroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ImageForeground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ImageForegroundBase::ImageForegroundBase(void) :
    Inherited(),
    _mfImages                 (),
    _mfPositions              ()
{
}

ImageForegroundBase::ImageForegroundBase(const ImageForegroundBase &source) :
    Inherited(source),
    _mfImages                 (),
    _mfPositions              (source._mfPositions              )
{
}

/*-------------------------- destructors ----------------------------------*/

ImageForegroundBase::~ImageForegroundBase(void)
{
}

void ImageForegroundBase::onCreate(const ImageForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFImagePtr::const_iterator ImagesIt  =
            source->_mfImages.begin();
        MFImagePtr::const_iterator ImagesEnd =
            source->_mfImages.end  ();

        while(ImagesIt != ImagesEnd)
        {
            this->pushToImages(*ImagesIt);

            ++ImagesIt;
        }
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ImageForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ImageForegroundBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ImageForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ImageForegroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ImageForegroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ImageForegroundBase::createAspectCopy(void) const
{
    ImageForegroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ImageForeground *>(this));

    return returnValue;
}
#endif

void ImageForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ImageForeground *>(this)->clearImages();
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
DataType FieldTraits<ImageForegroundPtr>::_type("ImageForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ImageForegroundPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, ImageForegroundPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, ImageForegroundPtr);


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
    static Char8 cvsid_hpp       [] = OSGIMAGEFOREGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGIMAGEFOREGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGIMAGEFOREGROUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
