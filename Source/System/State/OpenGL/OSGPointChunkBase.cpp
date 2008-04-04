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
 **     class PointChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOINTCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // Smooth default header
#include <OSGGL.h>                        // Sprite default header
#include <OSGGL.h>                        // RMode default header


#include "OSGPointChunkBase.h"
#include "OSGPointChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PointChunk
    \ingroup GrpSystemState

    See \ref PageSystemPointChunk for a description. 

    This chunk wraps glPointSize() (OSG::PointChunk::_sfSize) and
    glEnable(GL_POINT_SMOOTH) (OSG::PointChunk::_sfSmooth). It encompasses the
    ARB_point_parameters extension (OSG::PointChunk::_sfMinSize, 
    OSG::PointChunk::_sfMaxSize, OSG::PointChunk::_sfFadeThreshold, 
    OSG::PointChunk::_sfConstantAttenuation, 
    OSG::PointChunk::_sfLinearAttenuation,
    OSG::PointChunk::_sfQuadraticAttenuation) and NV_point_sprite
    (OSG::PointChunk::_sfSprite, OSG::PointChunk::_sfRMode).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          PointChunkBase::_sfSize
    The point's size in pixel.
*/

/*! \var bool            PointChunkBase::_sfSmooth
    Defines if line antialiasing is used.
*/

/*! \var Real32          PointChunkBase::_sfMinSize
    Minimum point size for attenuation, use less than 0 to disable it. See ARB_point_parameters extension.
*/

/*! \var Real32          PointChunkBase::_sfMaxSize
    Maximum point size for attenuation. See ARB_point_parameters extension.
*/

/*! \var Real32          PointChunkBase::_sfConstantAttenuation
    The point size's constant attenuation.
*/

/*! \var Real32          PointChunkBase::_sfLinearAttenuation
    The point size's linear attenuation.
*/

/*! \var Real32          PointChunkBase::_sfQuadraticAttenuation
    The point size's quadratic attenuation.
*/

/*! \var Real32          PointChunkBase::_sfFadeThreshold
    Minimum point size for attenuation. See ARB_point_parameters extension.
*/

/*! \var bool            PointChunkBase::_sfSprite
    Flag to enable point sprites, see NV_point_sprite for details.
*/

/*! \var GLenum          PointChunkBase::_sfRMode
    
*/


void PointChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "size",
        "The point's size in pixel.\n",
        SizeFieldId, SizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleSize),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "smooth",
        "Defines if line antialiasing is used.\n",
        SmoothFieldId, SmoothFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleSmooth),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleSmooth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "minSize",
        "Minimum point size for attenuation, use less than 0 to disable it. See ARB_point_parameters extension.\n",
        MinSizeFieldId, MinSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleMinSize),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleMinSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "maxSize",
        "Maximum point size for attenuation. See ARB_point_parameters extension.\n",
        MaxSizeFieldId, MaxSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleMaxSize),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleMaxSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "constantAttenuation",
        "The point size's constant attenuation.\n",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleConstantAttenuation),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleConstantAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "linearAttenuation",
        "The point size's linear attenuation.\n",
        LinearAttenuationFieldId, LinearAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleLinearAttenuation),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleLinearAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "quadraticAttenuation",
        "The point size's quadratic attenuation.\n",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleQuadraticAttenuation),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleQuadraticAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "fadeThreshold",
        "Minimum point size for attenuation. See ARB_point_parameters extension.\n",
        FadeThresholdFieldId, FadeThresholdFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleFadeThreshold),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleFadeThreshold));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "sprite",
        "Flag to enable point sprites, see NV_point_sprite for details.\n",
        SpriteFieldId, SpriteFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleSprite),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleSprite));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "rMode",
        "",
        RModeFieldId, RModeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PointChunkBase::editHandleRMode),
        static_cast<FieldGetMethodSig >(&PointChunkBase::getHandleRMode));

    oType.addInitialDesc(pDesc);
}


PointChunkBase::TypeObject PointChunkBase::_type(
    PointChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PointChunkBase::createEmpty,
    PointChunk::initMethod,
    PointChunk::exitMethod,
    (InitalInsertDescFunc) &PointChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PointChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemPointChunk for a description. \n"
    "\n"
    "This chunk wraps glPointSize() (OSG::PointChunk::_sfSize) and\n"
    "glEnable(GL_POINT_SMOOTH) (OSG::PointChunk::_sfSmooth). It encompasses the\n"
    "ARB_point_parameters extension (OSG::PointChunk::_sfMinSize, \n"
    "OSG::PointChunk::_sfMaxSize, OSG::PointChunk::_sfFadeThreshold, \n"
    "OSG::PointChunk::_sfConstantAttenuation, \n"
    "OSG::PointChunk::_sfLinearAttenuation,\n"
    "OSG::PointChunk::_sfQuadraticAttenuation) and NV_point_sprite\n"
    "(OSG::PointChunk::_sfSprite, OSG::PointChunk::_sfRMode).\n"
    "\t<Field\n"
    "\t\tname=\"size\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe point's size in pixel.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"smooth\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines if line antialiasing is used.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"minSize\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMinimum point size for attenuation, use less than 0 to disable it. See ARB_point_parameters extension.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"maxSize\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMaximum point size for attenuation. See ARB_point_parameters extension.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantAttenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe point size's constant attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"linearAttenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe point size's linear attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"quadraticAttenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe point size's quadratic attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fadeThreshold\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMinimum point size for attenuation. See ARB_point_parameters extension.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"sprite\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tFlag to enable point sprites, see NV_point_sprite for details.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"rMode\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_ZERO\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemPointChunk for a description. \n"
    "\n"
    "This chunk wraps glPointSize() (OSG::PointChunk::_sfSize) and\n"
    "glEnable(GL_POINT_SMOOTH) (OSG::PointChunk::_sfSmooth). It encompasses the\n"
    "ARB_point_parameters extension (OSG::PointChunk::_sfMinSize, \n"
    "OSG::PointChunk::_sfMaxSize, OSG::PointChunk::_sfFadeThreshold, \n"
    "OSG::PointChunk::_sfConstantAttenuation, \n"
    "OSG::PointChunk::_sfLinearAttenuation,\n"
    "OSG::PointChunk::_sfQuadraticAttenuation) and NV_point_sprite\n"
    "(OSG::PointChunk::_sfSprite, OSG::PointChunk::_sfRMode).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PointChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &PointChunkBase::getType(void) const
{
    return _type;
}

UInt32 PointChunkBase::getContainerSize(void) const
{
    return sizeof(PointChunk);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *PointChunkBase::editSFSize(void)
{
    editSField(SizeFieldMask);

    return &_sfSize;
}

const SFReal32 *PointChunkBase::getSFSize(void) const
{
    return &_sfSize;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFSize           (void)
{
    return this->editSFSize           ();
}
#endif

SFBool *PointChunkBase::editSFSmooth(void)
{
    editSField(SmoothFieldMask);

    return &_sfSmooth;
}

const SFBool *PointChunkBase::getSFSmooth(void) const
{
    return &_sfSmooth;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PointChunkBase::getSFSmooth         (void)
{
    return this->editSFSmooth         ();
}
#endif

SFReal32 *PointChunkBase::editSFMinSize(void)
{
    editSField(MinSizeFieldMask);

    return &_sfMinSize;
}

const SFReal32 *PointChunkBase::getSFMinSize(void) const
{
    return &_sfMinSize;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFMinSize        (void)
{
    return this->editSFMinSize        ();
}
#endif

SFReal32 *PointChunkBase::editSFMaxSize(void)
{
    editSField(MaxSizeFieldMask);

    return &_sfMaxSize;
}

const SFReal32 *PointChunkBase::getSFMaxSize(void) const
{
    return &_sfMaxSize;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFMaxSize        (void)
{
    return this->editSFMaxSize        ();
}
#endif

SFReal32 *PointChunkBase::editSFConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return &_sfConstantAttenuation;
}

const SFReal32 *PointChunkBase::getSFConstantAttenuation(void) const
{
    return &_sfConstantAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFConstantAttenuation(void)
{
    return this->editSFConstantAttenuation();
}
#endif

SFReal32 *PointChunkBase::editSFLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return &_sfLinearAttenuation;
}

const SFReal32 *PointChunkBase::getSFLinearAttenuation(void) const
{
    return &_sfLinearAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFLinearAttenuation(void)
{
    return this->editSFLinearAttenuation();
}
#endif

SFReal32 *PointChunkBase::editSFQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return &_sfQuadraticAttenuation;
}

const SFReal32 *PointChunkBase::getSFQuadraticAttenuation(void) const
{
    return &_sfQuadraticAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFQuadraticAttenuation(void)
{
    return this->editSFQuadraticAttenuation();
}
#endif

SFReal32 *PointChunkBase::editSFFadeThreshold(void)
{
    editSField(FadeThresholdFieldMask);

    return &_sfFadeThreshold;
}

const SFReal32 *PointChunkBase::getSFFadeThreshold(void) const
{
    return &_sfFadeThreshold;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PointChunkBase::getSFFadeThreshold  (void)
{
    return this->editSFFadeThreshold  ();
}
#endif

SFBool *PointChunkBase::editSFSprite(void)
{
    editSField(SpriteFieldMask);

    return &_sfSprite;
}

const SFBool *PointChunkBase::getSFSprite(void) const
{
    return &_sfSprite;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PointChunkBase::getSFSprite         (void)
{
    return this->editSFSprite         ();
}
#endif

SFGLenum *PointChunkBase::editSFRMode(void)
{
    editSField(RModeFieldMask);

    return &_sfRMode;
}

const SFGLenum *PointChunkBase::getSFRMode(void) const
{
    return &_sfRMode;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *PointChunkBase::getSFRMode          (void)
{
    return this->editSFRMode          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 PointChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        returnValue += _sfSmooth.getBinSize();
    }
    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
    {
        returnValue += _sfMinSize.getBinSize();
    }
    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        returnValue += _sfMaxSize.getBinSize();
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        returnValue += _sfConstantAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        returnValue += _sfLinearAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        returnValue += _sfQuadraticAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
    {
        returnValue += _sfFadeThreshold.getBinSize();
    }
    if(FieldBits::NoField != (SpriteFieldMask & whichField))
    {
        returnValue += _sfSprite.getBinSize();
    }
    if(FieldBits::NoField != (RModeFieldMask & whichField))
    {
        returnValue += _sfRMode.getBinSize();
    }

    return returnValue;
}

void PointChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
    {
        _sfMinSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        _sfMaxSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
    {
        _sfFadeThreshold.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpriteFieldMask & whichField))
    {
        _sfSprite.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RModeFieldMask & whichField))
    {
        _sfRMode.copyToBin(pMem);
    }
}

void PointChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
    {
        _sfMinSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        _sfMaxSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
    {
        _sfFadeThreshold.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpriteFieldMask & whichField))
    {
        _sfSprite.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RModeFieldMask & whichField))
    {
        _sfRMode.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PointChunkPtr PointChunkBase::create(void)
{
    PointChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<PointChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
PointChunkPtr PointChunkBase::createEmpty(void)
{
    PointChunkPtr returnValue;

    newPtr<PointChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr PointChunkBase::shallowCopy(void) const
{
    PointChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PointChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PointChunkBase::PointChunkBase(void) :
    Inherited(),
    _sfSize                   (Real32(1)),
    _sfSmooth                 (bool(GL_FALSE)),
    _sfMinSize                (Real32(-1.f)),
    _sfMaxSize                (Real32(-1.f)),
    _sfConstantAttenuation    (Real32(1)),
    _sfLinearAttenuation      (Real32(0)),
    _sfQuadraticAttenuation   (Real32(0)),
    _sfFadeThreshold          (Real32(0.f)),
    _sfSprite                 (bool(GL_FALSE)),
    _sfRMode                  (GLenum(GL_ZERO))
{
}

PointChunkBase::PointChunkBase(const PointChunkBase &source) :
    Inherited(source),
    _sfSize                   (source._sfSize                   ),
    _sfSmooth                 (source._sfSmooth                 ),
    _sfMinSize                (source._sfMinSize                ),
    _sfMaxSize                (source._sfMaxSize                ),
    _sfConstantAttenuation    (source._sfConstantAttenuation    ),
    _sfLinearAttenuation      (source._sfLinearAttenuation      ),
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ),
    _sfFadeThreshold          (source._sfFadeThreshold          ),
    _sfSprite                 (source._sfSprite                 ),
    _sfRMode                  (source._sfRMode                  )
{
}


/*-------------------------- destructors ----------------------------------*/

PointChunkBase::~PointChunkBase(void)
{
}


GetFieldHandlePtr PointChunkBase::getHandleSize            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSize, 
             this->getType().getFieldDesc(SizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleSize           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSize, 
             this->getType().getFieldDesc(SizeFieldId)));

    editSField(SizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleSmooth          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfSmooth, 
             this->getType().getFieldDesc(SmoothFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleSmooth         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfSmooth, 
             this->getType().getFieldDesc(SmoothFieldId)));

    editSField(SmoothFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleMinSize         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMinSize, 
             this->getType().getFieldDesc(MinSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleMinSize        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMinSize, 
             this->getType().getFieldDesc(MinSizeFieldId)));

    editSField(MinSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleMaxSize         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxSize, 
             this->getType().getFieldDesc(MaxSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleMaxSize        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxSize, 
             this->getType().getFieldDesc(MaxSizeFieldId)));

    editSField(MaxSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleConstantAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfConstantAttenuation, 
             this->getType().getFieldDesc(ConstantAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleConstantAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfConstantAttenuation, 
             this->getType().getFieldDesc(ConstantAttenuationFieldId)));

    editSField(ConstantAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleLinearAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLinearAttenuation, 
             this->getType().getFieldDesc(LinearAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleLinearAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLinearAttenuation, 
             this->getType().getFieldDesc(LinearAttenuationFieldId)));

    editSField(LinearAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleQuadraticAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfQuadraticAttenuation, 
             this->getType().getFieldDesc(QuadraticAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleQuadraticAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfQuadraticAttenuation, 
             this->getType().getFieldDesc(QuadraticAttenuationFieldId)));

    editSField(QuadraticAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleFadeThreshold   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFadeThreshold, 
             this->getType().getFieldDesc(FadeThresholdFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleFadeThreshold  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFadeThreshold, 
             this->getType().getFieldDesc(FadeThresholdFieldId)));

    editSField(FadeThresholdFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleSprite          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfSprite, 
             this->getType().getFieldDesc(SpriteFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleSprite         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfSprite, 
             this->getType().getFieldDesc(SpriteFieldId)));

    editSField(SpriteFieldMask);

    return returnValue;
}

GetFieldHandlePtr PointChunkBase::getHandleRMode           (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfRMode, 
             this->getType().getFieldDesc(RModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointChunkBase::editHandleRMode          (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfRMode, 
             this->getType().getFieldDesc(RModeFieldId)));

    editSField(RModeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PointChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PointChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PointChunkBase::createAspectCopy(void) const
{
    PointChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PointChunk *>(this));

    return returnValue;
}
#endif

void PointChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PointChunkPtr>::_type("PointChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PointChunkPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    PointChunkPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         PointChunkPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, 
                    PointChunkPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrMField, 
                         PointChunkPtr, 
                         RecordedRefCounts,
                         0);

OSG_END_NAMESPACE
