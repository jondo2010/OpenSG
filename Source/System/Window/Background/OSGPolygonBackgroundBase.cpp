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
 **     class PolygonBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGPrimeMaterial.h"           // Material Class

#include "OSGPolygonBackgroundBase.h"
#include "OSGPolygonBackground.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonBackground
    A Background that renders a single polygon using the specified material.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var PrimeMaterial * PolygonBackgroundBase::_sfMaterial
    The material used to display.
*/

/*! \var Vec3f           PolygonBackgroundBase::_mfTexCoords
    The texture coordinates of the geometry to display.
*/

/*! \var Pnt2f           PolygonBackgroundBase::_mfPositions
    The positions of the geometry to display.
*/

/*! \var bool            PolygonBackgroundBase::_sfNormalizedX
    Define whether the x coordinates are normalized (0-1) or pixel-based.
*/

/*! \var bool            PolygonBackgroundBase::_sfNormalizedY
    Define whether the y coordinates are normalized (0-1) or pixel-based.
*/

/*! \var UInt16          PolygonBackgroundBase::_sfAspectHeight
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var UInt16          PolygonBackgroundBase::_sfAspectWidth
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var Real32          PolygonBackgroundBase::_sfScale
    Scale factor for zooming.
*/

/*! \var bool            PolygonBackgroundBase::_sfCleanup
    Clear depth/ stencil buffer after applying the material.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<PolygonBackground *, nsOSG>::_type(
    "PolygonBackgroundPtr", 
    "TileableBackgroundPtr", 
    PolygonBackground::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(PolygonBackground *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PolygonBackground *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PolygonBackground *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PolygonBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecPrimeMaterialPtr::Description(
        SFUnrecPrimeMaterialPtr::getClassType(),
        "material",
        "The material used to display.\n",
        MaterialFieldId, MaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleMaterial),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "texCoords",
        "The texture coordinates of the geometry to display.\n",
        TexCoordsFieldId, TexCoordsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleTexCoords),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleTexCoords));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "positions",
        "The positions of the geometry to display.\n",
        PositionsFieldId, PositionsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandlePositions),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandlePositions));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedX",
        "Define whether the x coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedXFieldId, NormalizedXFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleNormalizedX),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleNormalizedX));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedY",
        "Define whether the y coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedYFieldId, NormalizedYFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleNormalizedY),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleNormalizedY));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectHeight",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectHeightFieldId, AspectHeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleAspectHeight),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleAspectHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectWidth",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectWidthFieldId, AspectWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleAspectWidth),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleAspectWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scale",
        "Scale factor for zooming.\n",
        ScaleFieldId, ScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleScale),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "cleanup",
        "Clear depth/ stencil buffer after applying the material.\n",
        CleanupFieldId, CleanupFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleCleanup),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleCleanup));

    oType.addInitialDesc(pDesc);
}


PolygonBackgroundBase::TypeObject PolygonBackgroundBase::_type(
    PolygonBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&PolygonBackgroundBase::createEmptyLocal),
    PolygonBackground::initMethod,
    PolygonBackground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PolygonBackground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"PolygonBackground\"\n"
    "   parent=\"TileableBackground\"\n"
    "   library=\"Window\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpWindowBackground\"\n"
    "   >\n"
    "  A Background that renders a single polygon using the specified material.\n"
    "  <Field\n"
    "\t name=\"material\"\n"
    "\t type=\"PrimeMaterialPtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe material used to display.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"texCoords\"\n"
    "\t type=\"Vec3f\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe texture coordinates of the geometry to display.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"positions\"\n"
    "\t type=\"Pnt2f\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe positions of the geometry to display.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"normalizedX\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tDefine whether the x coordinates are normalized (0-1) or pixel-based.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"normalizedY\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tDefine whether the y coordinates are normalized (0-1) or pixel-based.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"aspectHeight\"\n"
    "\t type=\"UInt16\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"aspectWidth\"\n"
    "\t type=\"UInt16\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"scale\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1.0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tScale factor for zooming.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"cleanup\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tClear depth/ stencil buffer after applying the material.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "A Background that renders a single polygon using the specified material.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 PolygonBackgroundBase::getContainerSize(void) const
{
    return sizeof(PolygonBackground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PolygonBackground::_sfMaterial field.
const SFUnrecPrimeMaterialPtr *PolygonBackgroundBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}

SFUnrecPrimeMaterialPtr *PolygonBackgroundBase::editSFMaterial       (void)
{
    editSField(MaterialFieldMask);

    return &_sfMaterial;
}

MFVec3f *PolygonBackgroundBase::editMFTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return &_mfTexCoords;
}

const MFVec3f *PolygonBackgroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}


MFPnt2f *PolygonBackgroundBase::editMFPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    return &_mfPositions;
}

const MFPnt2f *PolygonBackgroundBase::getMFPositions(void) const
{
    return &_mfPositions;
}


SFBool *PolygonBackgroundBase::editSFNormalizedX(void)
{
    editSField(NormalizedXFieldMask);

    return &_sfNormalizedX;
}

const SFBool *PolygonBackgroundBase::getSFNormalizedX(void) const
{
    return &_sfNormalizedX;
}


SFBool *PolygonBackgroundBase::editSFNormalizedY(void)
{
    editSField(NormalizedYFieldMask);

    return &_sfNormalizedY;
}

const SFBool *PolygonBackgroundBase::getSFNormalizedY(void) const
{
    return &_sfNormalizedY;
}


SFUInt16 *PolygonBackgroundBase::editSFAspectHeight(void)
{
    editSField(AspectHeightFieldMask);

    return &_sfAspectHeight;
}

const SFUInt16 *PolygonBackgroundBase::getSFAspectHeight(void) const
{
    return &_sfAspectHeight;
}


SFUInt16 *PolygonBackgroundBase::editSFAspectWidth(void)
{
    editSField(AspectWidthFieldMask);

    return &_sfAspectWidth;
}

const SFUInt16 *PolygonBackgroundBase::getSFAspectWidth(void) const
{
    return &_sfAspectWidth;
}


SFReal32 *PolygonBackgroundBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFReal32 *PolygonBackgroundBase::getSFScale(void) const
{
    return &_sfScale;
}


SFBool *PolygonBackgroundBase::editSFCleanup(void)
{
    editSField(CleanupFieldMask);

    return &_sfCleanup;
}

const SFBool *PolygonBackgroundBase::getSFCleanup(void) const
{
    return &_sfCleanup;
}






/*------------------------------ access -----------------------------------*/

SizeT PolygonBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        returnValue += _sfNormalizedX.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        returnValue += _sfNormalizedY.getBinSize();
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        returnValue += _sfAspectHeight.getBinSize();
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        returnValue += _sfAspectWidth.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        returnValue += _sfCleanup.getBinSize();
    }

    return returnValue;
}

void PolygonBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        _sfCleanup.copyToBin(pMem);
    }
}

void PolygonBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        editSField(MaterialFieldMask);
        _sfMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);
        _mfTexCoords.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        editMField(PositionsFieldMask, _mfPositions);
        _mfPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        editSField(NormalizedXFieldMask);
        _sfNormalizedX.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        editSField(NormalizedYFieldMask);
        _sfNormalizedY.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        editSField(AspectHeightFieldMask);
        _sfAspectHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        editSField(AspectWidthFieldMask);
        _sfAspectWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        editSField(ScaleFieldMask);
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        editSField(CleanupFieldMask);
        _sfCleanup.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PolygonBackgroundTransitPtr PolygonBackgroundBase::createLocal(BitVector bFlags)
{
    PolygonBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PolygonBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PolygonBackgroundTransitPtr PolygonBackgroundBase::createDependent(BitVector bFlags)
{
    PolygonBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PolygonBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PolygonBackgroundTransitPtr PolygonBackgroundBase::create(void)
{
    PolygonBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PolygonBackground>(tmpPtr);
    }

    return fc;
}

PolygonBackground *PolygonBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    PolygonBackground *returnValue;

    newPtr<PolygonBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PolygonBackground *PolygonBackgroundBase::createEmpty(void)
{
    PolygonBackground *returnValue;

    newPtr<PolygonBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PolygonBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PolygonBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonBackgroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PolygonBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonBackground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonBackgroundBase::shallowCopy(void) const
{
    PolygonBackground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PolygonBackground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PolygonBackgroundBase::PolygonBackgroundBase(void) :
    Inherited(),
    _sfMaterial               (NULL),
    _mfTexCoords              (),
    _mfPositions              (),
    _sfNormalizedX            (bool(true)),
    _sfNormalizedY            (bool(true)),
    _sfAspectHeight           (UInt16(0)),
    _sfAspectWidth            (UInt16(0)),
    _sfScale                  (Real32(1.0)),
    _sfCleanup                (bool(true))
{
}

PolygonBackgroundBase::PolygonBackgroundBase(const PolygonBackgroundBase &source) :
    Inherited(source),
    _sfMaterial               (NULL),
    _mfTexCoords              (source._mfTexCoords              ),
    _mfPositions              (source._mfPositions              ),
    _sfNormalizedX            (source._sfNormalizedX            ),
    _sfNormalizedY            (source._sfNormalizedY            ),
    _sfAspectHeight           (source._sfAspectHeight           ),
    _sfAspectWidth            (source._sfAspectWidth            ),
    _sfScale                  (source._sfScale                  ),
    _sfCleanup                (source._sfCleanup                )
{
}


/*-------------------------- destructors ----------------------------------*/

PolygonBackgroundBase::~PolygonBackgroundBase(void)
{
}

void PolygonBackgroundBase::onCreate(const PolygonBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        PolygonBackground *pThis = static_cast<PolygonBackground *>(this);

        pThis->setMaterial(source->getMaterial());
    }
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleMaterial        (void) const
{
    SFUnrecPrimeMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecPrimeMaterialPtr::GetHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleMaterial       (void)
{
    SFUnrecPrimeMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecPrimeMaterialPtr::EditHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PolygonBackground::setMaterial,
                    static_cast<PolygonBackground *>(this), _1));

    editSField(MaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleTexCoords       (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfTexCoords,
             this->getType().getFieldDesc(TexCoordsFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleTexCoords      (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfTexCoords,
             this->getType().getFieldDesc(TexCoordsFieldId),
             this));


    editMField(TexCoordsFieldMask, _mfTexCoords);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandlePositions       (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfPositions,
             this->getType().getFieldDesc(PositionsFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandlePositions      (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfPositions,
             this->getType().getFieldDesc(PositionsFieldId),
             this));


    editMField(PositionsFieldMask, _mfPositions);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleNormalizedX     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormalizedX,
             this->getType().getFieldDesc(NormalizedXFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleNormalizedX    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormalizedX,
             this->getType().getFieldDesc(NormalizedXFieldId),
             this));


    editSField(NormalizedXFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleNormalizedY     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormalizedY,
             this->getType().getFieldDesc(NormalizedYFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleNormalizedY    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormalizedY,
             this->getType().getFieldDesc(NormalizedYFieldId),
             this));


    editSField(NormalizedYFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleAspectHeight    (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfAspectHeight,
             this->getType().getFieldDesc(AspectHeightFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleAspectHeight   (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfAspectHeight,
             this->getType().getFieldDesc(AspectHeightFieldId),
             this));


    editSField(AspectHeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleAspectWidth     (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfAspectWidth,
             this->getType().getFieldDesc(AspectWidthFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleAspectWidth    (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfAspectWidth,
             this->getType().getFieldDesc(AspectWidthFieldId),
             this));


    editSField(AspectWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleScale           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleScale          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             this));


    editSField(ScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleCleanup         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfCleanup,
             this->getType().getFieldDesc(CleanupFieldId),
             const_cast<PolygonBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleCleanup        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfCleanup,
             this->getType().getFieldDesc(CleanupFieldId),
             this));


    editSField(CleanupFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PolygonBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PolygonBackground *pThis = static_cast<PolygonBackground *>(this);

    pThis->execSync(static_cast<PolygonBackground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PolygonBackgroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PolygonBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonBackground *>(pRefAspect),
                  dynamic_cast<const PolygonBackground *>(this));

    return returnValue;
}
#endif

void PolygonBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PolygonBackground *>(this)->setMaterial(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfTexCoords.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPositions.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
