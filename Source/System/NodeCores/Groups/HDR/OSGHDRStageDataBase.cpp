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
 **     class HDRStageData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEHDRSTAGEDATAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>
#include "boost/bind.hpp"

#include <OSGConfig.h>



#include <OSGChunkMaterial.h> // ToneMappingMaterial Class
#include <OSGFrameBufferObject.h> // BlurRenderTarget Class
#include <OSGChunkMaterial.h> // BlurMaterial Class
#include <OSGSHLChunk.h> // HBlurShader Class
#include <OSGSHLChunk.h> // VBlurShader Class
#include <OSGFrameBufferObject.h> // ShrinkRenderTarget Class
#include <OSGChunkMaterial.h> // ShrinkMaterial Class

#include "OSGHDRStageDataBase.h"
#include "OSGHDRStageData.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::HDRStageData
    Data use for rendering by the HDR stage
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ChunkMaterialPtr HDRStageDataBase::_sfToneMappingMaterial
    
*/

/*! \var FrameBufferObjectPtr HDRStageDataBase::_sfBlurRenderTarget
    
*/

/*! \var ChunkMaterialPtr HDRStageDataBase::_sfBlurMaterial
    
*/

/*! \var SHLChunkPtr     HDRStageDataBase::_sfHBlurShader
    
*/

/*! \var SHLChunkPtr     HDRStageDataBase::_sfVBlurShader
    
*/

/*! \var UInt32          HDRStageDataBase::_sfWidth
    
*/

/*! \var UInt32          HDRStageDataBase::_sfHeight
    
*/

/*! \var FrameBufferObjectPtr HDRStageDataBase::_sfShrinkRenderTarget
    
*/

/*! \var ChunkMaterialPtr HDRStageDataBase::_sfShrinkMaterial
    
*/


void HDRStageDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFChunkMaterialPtr::Description(
        SFChunkMaterialPtr::getClassType(),
        "toneMappingMaterial",
        "",
        ToneMappingMaterialFieldId, ToneMappingMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleToneMappingMaterial),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleToneMappingMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new SFFrameBufferObjectPtr::Description(
        SFFrameBufferObjectPtr::getClassType(),
        "blurRenderTarget",
        "",
        BlurRenderTargetFieldId, BlurRenderTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleBlurRenderTarget),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleBlurRenderTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFChunkMaterialPtr::Description(
        SFChunkMaterialPtr::getClassType(),
        "blurMaterial",
        "",
        BlurMaterialFieldId, BlurMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleBlurMaterial),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleBlurMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new SFSHLChunkPtr::Description(
        SFSHLChunkPtr::getClassType(),
        "hBlurShader",
        "",
        HBlurShaderFieldId, HBlurShaderFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleHBlurShader),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleHBlurShader));

    oType.addInitialDesc(pDesc);

    pDesc = new SFSHLChunkPtr::Description(
        SFSHLChunkPtr::getClassType(),
        "vBlurShader",
        "",
        VBlurShaderFieldId, VBlurShaderFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleVBlurShader),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleVBlurShader));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleWidth),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleHeight),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFFrameBufferObjectPtr::Description(
        SFFrameBufferObjectPtr::getClassType(),
        "shrinkRenderTarget",
        "",
        ShrinkRenderTargetFieldId, ShrinkRenderTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleShrinkRenderTarget),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleShrinkRenderTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFChunkMaterialPtr::Description(
        SFChunkMaterialPtr::getClassType(),
        "shrinkMaterial",
        "",
        ShrinkMaterialFieldId, ShrinkMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&HDRStageDataBase::editHandleShrinkMaterial),
        static_cast<FieldGetMethodSig >(&HDRStageDataBase::getHandleShrinkMaterial));

    oType.addInitialDesc(pDesc);
}


HDRStageDataBase::TypeObject HDRStageDataBase::_type(
    HDRStageDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (ProtoBundleCreateF) &HDRStageDataBase::createEmpty,
    HDRStageData::initMethod,
    (InitalInsertDescFunc) &HDRStageDataBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"HDRStageData\"\n"
    "    parent=\"StageData\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "Data use for rendering by the HDR stage\n"
    "\t<Field\n"
    "\t\tname=\"toneMappingMaterial\"\n"
    "\t\ttype=\"ChunkMaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"blurRenderTarget\"\n"
    "\t\ttype=\"FrameBufferObjectPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"blurMaterial\"\n"
    "\t\ttype=\"ChunkMaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hBlurShader\"\n"
    "\t\ttype=\"SHLChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"vBlurShader\"\n"
    "\t\ttype=\"SHLChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"shrinkRenderTarget\"\n"
    "\t\ttype=\"FrameBufferObjectPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shrinkMaterial\"\n"
    "\t\ttype=\"ChunkMaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Data use for rendering by the HDR stage\n"
    );

/*------------------------------ get -----------------------------------*/

FieldBundleType &HDRStageDataBase::getType(void)
{
    return _type;
}

const FieldBundleType &HDRStageDataBase::getType(void) const
{
    return _type;
}

UInt32 HDRStageDataBase::getContainerSize(void) const
{
    return sizeof(HDRStageData);
}

/*------------------------- decorator get ------------------------------*/


//! Get the HDRStageData::_sfToneMappingMaterial field.
const SFChunkMaterialPtr *HDRStageDataBase::getSFToneMappingMaterial(void) const
{
    return &_sfToneMappingMaterial;
}

//! Get the HDRStageData::_sfBlurRenderTarget field.
const SFFrameBufferObjectPtr *HDRStageDataBase::getSFBlurRenderTarget(void) const
{
    return &_sfBlurRenderTarget;
}

//! Get the HDRStageData::_sfBlurMaterial field.
const SFChunkMaterialPtr *HDRStageDataBase::getSFBlurMaterial(void) const
{
    return &_sfBlurMaterial;
}

//! Get the HDRStageData::_sfHBlurShader field.
const SFSHLChunkPtr *HDRStageDataBase::getSFHBlurShader(void) const
{
    return &_sfHBlurShader;
}

//! Get the HDRStageData::_sfVBlurShader field.
const SFSHLChunkPtr *HDRStageDataBase::getSFVBlurShader(void) const
{
    return &_sfVBlurShader;
}

SFUInt32 *HDRStageDataBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt32 *HDRStageDataBase::getSFWidth(void) const
{
    return &_sfWidth;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *HDRStageDataBase::getSFWidth          (void)
{
    return this->editSFWidth          ();
}
#endif

SFUInt32 *HDRStageDataBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt32 *HDRStageDataBase::getSFHeight(void) const
{
    return &_sfHeight;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *HDRStageDataBase::getSFHeight         (void)
{
    return this->editSFHeight         ();
}
#endif

//! Get the HDRStageData::_sfShrinkRenderTarget field.
const SFFrameBufferObjectPtr *HDRStageDataBase::getSFShrinkRenderTarget(void) const
{
    return &_sfShrinkRenderTarget;
}

//! Get the HDRStageData::_sfShrinkMaterial field.
const SFChunkMaterialPtr *HDRStageDataBase::getSFShrinkMaterial(void) const
{
    return &_sfShrinkMaterial;
}





/*------------------------------ access -----------------------------------*/

UInt32 HDRStageDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ToneMappingMaterialFieldMask & whichField))
    {
        returnValue += _sfToneMappingMaterial.getBinSize();
    }
    if(FieldBits::NoField != (BlurRenderTargetFieldMask & whichField))
    {
        returnValue += _sfBlurRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (BlurMaterialFieldMask & whichField))
    {
        returnValue += _sfBlurMaterial.getBinSize();
    }
    if(FieldBits::NoField != (HBlurShaderFieldMask & whichField))
    {
        returnValue += _sfHBlurShader.getBinSize();
    }
    if(FieldBits::NoField != (VBlurShaderFieldMask & whichField))
    {
        returnValue += _sfVBlurShader.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (ShrinkRenderTargetFieldMask & whichField))
    {
        returnValue += _sfShrinkRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (ShrinkMaterialFieldMask & whichField))
    {
        returnValue += _sfShrinkMaterial.getBinSize();
    }

    return returnValue;
}

void HDRStageDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ToneMappingMaterialFieldMask & whichField))
    {
        _sfToneMappingMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlurRenderTargetFieldMask & whichField))
    {
        _sfBlurRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlurMaterialFieldMask & whichField))
    {
        _sfBlurMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HBlurShaderFieldMask & whichField))
    {
        _sfHBlurShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VBlurShaderFieldMask & whichField))
    {
        _sfVBlurShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShrinkRenderTargetFieldMask & whichField))
    {
        _sfShrinkRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShrinkMaterialFieldMask & whichField))
    {
        _sfShrinkMaterial.copyToBin(pMem);
    }
}

void HDRStageDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ToneMappingMaterialFieldMask & whichField))
    {
        _sfToneMappingMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlurRenderTargetFieldMask & whichField))
    {
        _sfBlurRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlurMaterialFieldMask & whichField))
    {
        _sfBlurMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HBlurShaderFieldMask & whichField))
    {
        _sfHBlurShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VBlurShaderFieldMask & whichField))
    {
        _sfVBlurShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShrinkRenderTargetFieldMask & whichField))
    {
        _sfShrinkRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShrinkMaterialFieldMask & whichField))
    {
        _sfShrinkMaterial.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
HDRStageDataP HDRStageDataBase::createEmpty(void)
{
    HDRStageDataP returnValue;

    newPtr<HDRStageData>(returnValue);

    return returnValue;
}

FieldBundleP HDRStageDataBase::shallowCopy(void) const
{
    HDRStageDataP returnValue;

    newPtr(returnValue, dynamic_cast<const HDRStageData *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

HDRStageDataBase::HDRStageDataBase(void) :
    Inherited(),
    _sfToneMappingMaterial    (ChunkMaterialPtr(NullFC)),
    _sfBlurRenderTarget       (FrameBufferObjectPtr(NullFC)),
    _sfBlurMaterial           (ChunkMaterialPtr(NullFC)),
    _sfHBlurShader            (SHLChunkPtr(NullFC)),
    _sfVBlurShader            (SHLChunkPtr(NullFC)),
    _sfWidth                  (UInt32(0)),
    _sfHeight                 (UInt32(0)),
    _sfShrinkRenderTarget     (FrameBufferObjectPtr(NullFC)),
    _sfShrinkMaterial         (ChunkMaterialPtr(NullFC))
{
}

HDRStageDataBase::HDRStageDataBase(const HDRStageDataBase &source) :
    Inherited(source),
    _sfToneMappingMaterial    (),
    _sfBlurRenderTarget       (),
    _sfBlurMaterial           (),
    _sfHBlurShader            (),
    _sfVBlurShader            (),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfShrinkRenderTarget     (),
    _sfShrinkMaterial         ()
{
}

/*-------------------------- destructors ----------------------------------*/

HDRStageDataBase::~HDRStageDataBase(void)
{
}

void HDRStageDataBase::onCreate(const HDRStageData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setToneMappingMaterial(source->getToneMappingMaterial());

        this->setBlurRenderTarget(source->getBlurRenderTarget());

        this->setBlurMaterial(source->getBlurMaterial());

        this->setHBlurShader(source->getHBlurShader());

        this->setVBlurShader(source->getVBlurShader());

        this->setShrinkRenderTarget(source->getShrinkRenderTarget());

        this->setShrinkMaterial(source->getShrinkMaterial());
    }
}

void HDRStageDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<HDRStageData *>(this)->setToneMappingMaterial(NullFC);

    static_cast<HDRStageData *>(this)->setBlurRenderTarget(NullFC);

    static_cast<HDRStageData *>(this)->setBlurMaterial(NullFC);

    static_cast<HDRStageData *>(this)->setHBlurShader(NullFC);

    static_cast<HDRStageData *>(this)->setVBlurShader(NullFC);

    static_cast<HDRStageData *>(this)->setShrinkRenderTarget(NullFC);

    static_cast<HDRStageData *>(this)->setShrinkMaterial(NullFC);
}

GetFieldHandlePtr HDRStageDataBase::getHandleToneMappingMaterial (void) const
{
    SFChunkMaterialPtr::GetHandlePtr returnValue(
        new  SFChunkMaterialPtr::GetHandle(
             &_sfToneMappingMaterial, 
             this->getType().getFieldDesc(ToneMappingMaterialFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleToneMappingMaterial(void)
{
    SFChunkMaterialPtr::EditHandlePtr returnValue(
        new  SFChunkMaterialPtr::EditHandle(
             &_sfToneMappingMaterial, 
             this->getType().getFieldDesc(ToneMappingMaterialFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setToneMappingMaterial, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(ToneMappingMaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleBlurRenderTarget (void) const
{
    SFFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFFrameBufferObjectPtr::GetHandle(
             &_sfBlurRenderTarget, 
             this->getType().getFieldDesc(BlurRenderTargetFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleBlurRenderTarget(void)
{
    SFFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFFrameBufferObjectPtr::EditHandle(
             &_sfBlurRenderTarget, 
             this->getType().getFieldDesc(BlurRenderTargetFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setBlurRenderTarget, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(BlurRenderTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleBlurMaterial    (void) const
{
    SFChunkMaterialPtr::GetHandlePtr returnValue(
        new  SFChunkMaterialPtr::GetHandle(
             &_sfBlurMaterial, 
             this->getType().getFieldDesc(BlurMaterialFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleBlurMaterial   (void)
{
    SFChunkMaterialPtr::EditHandlePtr returnValue(
        new  SFChunkMaterialPtr::EditHandle(
             &_sfBlurMaterial, 
             this->getType().getFieldDesc(BlurMaterialFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setBlurMaterial, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(BlurMaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleHBlurShader     (void) const
{
    SFSHLChunkPtr::GetHandlePtr returnValue(
        new  SFSHLChunkPtr::GetHandle(
             &_sfHBlurShader, 
             this->getType().getFieldDesc(HBlurShaderFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleHBlurShader    (void)
{
    SFSHLChunkPtr::EditHandlePtr returnValue(
        new  SFSHLChunkPtr::EditHandle(
             &_sfHBlurShader, 
             this->getType().getFieldDesc(HBlurShaderFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setHBlurShader, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(HBlurShaderFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleVBlurShader     (void) const
{
    SFSHLChunkPtr::GetHandlePtr returnValue(
        new  SFSHLChunkPtr::GetHandle(
             &_sfVBlurShader, 
             this->getType().getFieldDesc(VBlurShaderFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleVBlurShader    (void)
{
    SFSHLChunkPtr::EditHandlePtr returnValue(
        new  SFSHLChunkPtr::EditHandle(
             &_sfVBlurShader, 
             this->getType().getFieldDesc(VBlurShaderFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setVBlurShader, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(VBlurShaderFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleWidth           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleWidth          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleHeight          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfHeight, 
             this->getType().getFieldDesc(HeightFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleHeight         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfHeight, 
             this->getType().getFieldDesc(HeightFieldId)));

    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleShrinkRenderTarget (void) const
{
    SFFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFFrameBufferObjectPtr::GetHandle(
             &_sfShrinkRenderTarget, 
             this->getType().getFieldDesc(ShrinkRenderTargetFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleShrinkRenderTarget(void)
{
    SFFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFFrameBufferObjectPtr::EditHandle(
             &_sfShrinkRenderTarget, 
             this->getType().getFieldDesc(ShrinkRenderTargetFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setShrinkRenderTarget, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(ShrinkRenderTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr HDRStageDataBase::getHandleShrinkMaterial  (void) const
{
    SFChunkMaterialPtr::GetHandlePtr returnValue(
        new  SFChunkMaterialPtr::GetHandle(
             &_sfShrinkMaterial, 
             this->getType().getFieldDesc(ShrinkMaterialFieldId)));

    return returnValue;
}

EditFieldHandlePtr HDRStageDataBase::editHandleShrinkMaterial (void)
{
    SFChunkMaterialPtr::EditHandlePtr returnValue(
        new  SFChunkMaterialPtr::EditHandle(
             &_sfShrinkMaterial, 
             this->getType().getFieldDesc(ShrinkMaterialFieldId)));

    returnValue->setSetMethod(boost::bind(&HDRStageData::setShrinkMaterial, 
                                          static_cast<HDRStageData *>(this), _1));

    editSField(ShrinkMaterialFieldMask);

    return returnValue;
}



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<HDRStageDataP>::_type("HDRStageDataP", "StageDataP");
#endif



OSG_END_NAMESPACE
