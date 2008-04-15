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
 **     class LightChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELIGHTCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Beacon Class

#include "OSGLightChunkBase.h"
#include "OSGLightChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LightChunk
    \ingroup GrpSystemState

    See \ref PageSystemLightChunk for a description.

    The light chunk contains the parameter set for a single light source. It's taken
    straight from the glLight() manpage.

    This chunk wraps glLight() (OSG::LightChunk::_sfAmbient,
    OSG::LightChunk::_sfDiffuse, OSG::LightChunk::_sfSpecular,
    OSG::LightChunk::_sfEmission, OSG::LightChunk::_sfPosition,
    OSG::LightChunk::_sfDirection, OSG::LightChunk::_sfExponent,
    OSG::LightChunk::_sfCutoff, OSG::LightChunk::_sfConstantAttenuation,
    OSG::LightChunk::_sfLinearAttenuation,
    OSG::LightChunk::_sfQuadraticAttenuation).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color4r         LightChunkBase::_sfDiffuse
    The light's diffuse color.
*/

/*! \var Color4r         LightChunkBase::_sfAmbient
    The light's ambient color.
*/

/*! \var Color4r         LightChunkBase::_sfSpecular
    The light's specular color.
*/

/*! \var Vec4r           LightChunkBase::_sfPosition
    The light's position.
*/

/*! \var Vec3r           LightChunkBase::_sfDirection
    The light's direction (only for spotlights).
*/

/*! \var Real            LightChunkBase::_sfExponent
    The light's spotlight exponent.
*/

/*! \var Real            LightChunkBase::_sfCutoff
    The light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.
*/

/*! \var Real            LightChunkBase::_sfConstantAttenuation
    The light's constant attenuation.
*/

/*! \var Real            LightChunkBase::_sfLinearAttenuation
    The light's linear attenuation.
*/

/*! \var Real            LightChunkBase::_sfQuadraticAttenuation
    The light's quadratic attenuation.
*/

/*! \var NodePtr         LightChunkBase::_sfBeacon
    
*/


void LightChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "diffuse",
        "The light's diffuse color.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleDiffuse),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "ambient",
        "The light's ambient color.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleAmbient),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "specular",
        "The light's specular color.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleSpecular),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec4r::Description(
        SFVec4r::getClassType(),
        "position",
        "The light's position.\n",
        PositionFieldId, PositionFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandlePosition),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandlePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "direction",
        "The light's direction (only for spotlights).\n",
        DirectionFieldId, DirectionFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleDirection),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleDirection));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "exponent",
        "The light's spotlight exponent.\n",
        ExponentFieldId, ExponentFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleExponent),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleExponent));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "cutoff",
        "The light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.\n",
        CutoffFieldId, CutoffFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleCutoff),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleCutoff));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "constantAttenuation",
        "The light's constant attenuation.\n",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleConstantAttenuation),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleConstantAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "linearAttenuation",
        "The light's linear attenuation.\n",
        LinearAttenuationFieldId, LinearAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleLinearAttenuation),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleLinearAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "quadraticAttenuation",
        "The light's quadratic attenuation.\n",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleQuadraticAttenuation),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleQuadraticAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightChunkBase::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&LightChunkBase::getHandleBeacon));

    oType.addInitialDesc(pDesc);
}


LightChunkBase::TypeObject LightChunkBase::_type(
    LightChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &LightChunkBase::createEmptyLocal,
    LightChunk::initMethod,
    LightChunk::exitMethod,
    (InitalInsertDescFunc) &LightChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"LightChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemLightChunk for a description.\n"
    "\n"
    "The light chunk contains the parameter set for a single light source. It's taken\n"
    "straight from the glLight() manpage.\n"
    "\n"
    "This chunk wraps glLight() (OSG::LightChunk::_sfAmbient,\n"
    "OSG::LightChunk::_sfDiffuse, OSG::LightChunk::_sfSpecular,\n"
    "OSG::LightChunk::_sfEmission, OSG::LightChunk::_sfPosition,\n"
    "OSG::LightChunk::_sfDirection, OSG::LightChunk::_sfExponent,\n"
    "OSG::LightChunk::_sfCutoff, OSG::LightChunk::_sfConstantAttenuation,\n"
    "OSG::LightChunk::_sfLinearAttenuation,\n"
    "OSG::LightChunk::_sfQuadraticAttenuation).\n"
    "\t<Field\n"
    "\t\tname=\"diffuse\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,0.f\"\n"
    "\t>\n"
    "\tThe light's diffuse color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ambient\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\".1f,.1f,.1f,0.f\"\n"
    "\t>\n"
    "\tThe light's ambient color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"specular\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,0.f\"\n"
    "\t>\n"
    "\tThe light's specular color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Vec4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,-1.f,0.f,0.f\"\n"
    "\t>\n"
    "\tThe light's position.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"direction\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,1.f\"\n"
    "\t>\n"
    "\tThe light's direction (only for spotlights).\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"exponent\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"2.f\"\n"
    "\t>\n"
    "\tThe light's spotlight exponent.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"cutoff\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"180.f\"\n"
    "\t>\n"
    "\tThe light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantAttenuation\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t>\n"
    "\tThe light's constant attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"linearAttenuation\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe light's linear attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"quadraticAttenuation\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe light's quadratic attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "        doRefCount=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemLightChunk for a description.\n"
    "\n"
    "The light chunk contains the parameter set for a single light source. It's taken\n"
    "straight from the glLight() manpage.\n"
    "\n"
    "This chunk wraps glLight() (OSG::LightChunk::_sfAmbient,\n"
    "OSG::LightChunk::_sfDiffuse, OSG::LightChunk::_sfSpecular,\n"
    "OSG::LightChunk::_sfEmission, OSG::LightChunk::_sfPosition,\n"
    "OSG::LightChunk::_sfDirection, OSG::LightChunk::_sfExponent,\n"
    "OSG::LightChunk::_sfCutoff, OSG::LightChunk::_sfConstantAttenuation,\n"
    "OSG::LightChunk::_sfLinearAttenuation,\n"
    "OSG::LightChunk::_sfQuadraticAttenuation).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &LightChunkBase::getType(void) const
{
    return _type;
}

UInt32 LightChunkBase::getContainerSize(void) const
{
    return sizeof(LightChunk);
}

/*------------------------- decorator get ------------------------------*/


SFColor4r *LightChunkBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor4r *LightChunkBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}

#ifdef OSG_1_GET_COMPAT
SFColor4r           *LightChunkBase::getSFDiffuse        (void)
{
    return this->editSFDiffuse        ();
}
#endif

SFColor4r *LightChunkBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor4r *LightChunkBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}

#ifdef OSG_1_GET_COMPAT
SFColor4r           *LightChunkBase::getSFAmbient        (void)
{
    return this->editSFAmbient        ();
}
#endif

SFColor4r *LightChunkBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor4r *LightChunkBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}

#ifdef OSG_1_GET_COMPAT
SFColor4r           *LightChunkBase::getSFSpecular       (void)
{
    return this->editSFSpecular       ();
}
#endif

SFVec4r *LightChunkBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFVec4r *LightChunkBase::getSFPosition(void) const
{
    return &_sfPosition;
}

#ifdef OSG_1_GET_COMPAT
SFVec4r             *LightChunkBase::getSFPosition       (void)
{
    return this->editSFPosition       ();
}
#endif

SFVec3r *LightChunkBase::editSFDirection(void)
{
    editSField(DirectionFieldMask);

    return &_sfDirection;
}

const SFVec3r *LightChunkBase::getSFDirection(void) const
{
    return &_sfDirection;
}

#ifdef OSG_1_GET_COMPAT
SFVec3r             *LightChunkBase::getSFDirection      (void)
{
    return this->editSFDirection      ();
}
#endif

SFReal *LightChunkBase::editSFExponent(void)
{
    editSField(ExponentFieldMask);

    return &_sfExponent;
}

const SFReal *LightChunkBase::getSFExponent(void) const
{
    return &_sfExponent;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightChunkBase::getSFExponent       (void)
{
    return this->editSFExponent       ();
}
#endif

SFReal *LightChunkBase::editSFCutoff(void)
{
    editSField(CutoffFieldMask);

    return &_sfCutoff;
}

const SFReal *LightChunkBase::getSFCutoff(void) const
{
    return &_sfCutoff;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightChunkBase::getSFCutoff         (void)
{
    return this->editSFCutoff         ();
}
#endif

SFReal *LightChunkBase::editSFConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return &_sfConstantAttenuation;
}

const SFReal *LightChunkBase::getSFConstantAttenuation(void) const
{
    return &_sfConstantAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightChunkBase::getSFConstantAttenuation(void)
{
    return this->editSFConstantAttenuation();
}
#endif

SFReal *LightChunkBase::editSFLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return &_sfLinearAttenuation;
}

const SFReal *LightChunkBase::getSFLinearAttenuation(void) const
{
    return &_sfLinearAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightChunkBase::getSFLinearAttenuation(void)
{
    return this->editSFLinearAttenuation();
}
#endif

SFReal *LightChunkBase::editSFQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return &_sfQuadraticAttenuation;
}

const SFReal *LightChunkBase::getSFQuadraticAttenuation(void) const
{
    return &_sfQuadraticAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightChunkBase::getSFQuadraticAttenuation(void)
{
    return this->editSFQuadraticAttenuation();
}
#endif

//! Get the LightChunk::_sfBeacon field.
const SFWeakNodePtr *LightChunkBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}





/*------------------------------ access -----------------------------------*/

UInt32 LightChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        returnValue += _sfDirection.getBinSize();
    }
    if(FieldBits::NoField != (ExponentFieldMask & whichField))
    {
        returnValue += _sfExponent.getBinSize();
    }
    if(FieldBits::NoField != (CutoffFieldMask & whichField))
    {
        returnValue += _sfCutoff.getBinSize();
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
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    return returnValue;
}

void LightChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExponentFieldMask & whichField))
    {
        _sfExponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CutoffFieldMask & whichField))
    {
        _sfCutoff.copyToBin(pMem);
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
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
}

void LightChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExponentFieldMask & whichField))
    {
        _sfExponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CutoffFieldMask & whichField))
    {
        _sfCutoff.copyFromBin(pMem);
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
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LightChunkTransitPtr LightChunkBase::create(void)
{
    LightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LightChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LightChunkTransitPtr LightChunkBase::createLocal(BitVector bFlags)
{
    LightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LightChunk>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
LightChunkPtr LightChunkBase::createEmpty(void)
{
    LightChunkPtr returnValue;

    newPtr<LightChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

LightChunkPtr LightChunkBase::createEmptyLocal(BitVector bFlags)
{
    LightChunkPtr returnValue;

    newPtr<LightChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LightChunkBase::shallowCopy(void) const
{
    LightChunkPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const LightChunk *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr LightChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LightChunkPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LightChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

LightChunkBase::LightChunkBase(void) :
    Inherited(),
    _sfDiffuse                (Color4r(1.f,1.f,1.f,0.f)),
    _sfAmbient                (Color4r(.1f,.1f,.1f,0.f)),
    _sfSpecular               (Color4r(1.f,1.f,1.f,0.f)),
    _sfPosition               (Vec4r(0.f,-1.f,0.f,0.f)),
    _sfDirection              (Vec3r(0.f,0.f,1.f)),
    _sfExponent               (Real(2.f)),
    _sfCutoff                 (Real(180.f)),
    _sfConstantAttenuation    (Real(1.f)),
    _sfLinearAttenuation      (Real(0.f)),
    _sfQuadraticAttenuation   (Real(0.f)),
    _sfBeacon                 (NodePtr(NullFC))
{
}

LightChunkBase::LightChunkBase(const LightChunkBase &source) :
    Inherited(source),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfAmbient                (source._sfAmbient                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfPosition               (source._sfPosition               ),
    _sfDirection              (source._sfDirection              ),
    _sfExponent               (source._sfExponent               ),
    _sfCutoff                 (source._sfCutoff                 ),
    _sfConstantAttenuation    (source._sfConstantAttenuation    ),
    _sfLinearAttenuation      (source._sfLinearAttenuation      ),
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ),
    _sfBeacon                 (NullFC)
{
}


/*-------------------------- destructors ----------------------------------*/

LightChunkBase::~LightChunkBase(void)
{
}

void LightChunkBase::onCreate(const LightChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr LightChunkBase::getHandleDiffuse         (void) const
{
    SFColor4r::GetHandlePtr returnValue(
        new  SFColor4r::GetHandle(
             &_sfDiffuse, 
             this->getType().getFieldDesc(DiffuseFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleDiffuse        (void)
{
    SFColor4r::EditHandlePtr returnValue(
        new  SFColor4r::EditHandle(
             &_sfDiffuse, 
             this->getType().getFieldDesc(DiffuseFieldId)));

    editSField(DiffuseFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleAmbient         (void) const
{
    SFColor4r::GetHandlePtr returnValue(
        new  SFColor4r::GetHandle(
             &_sfAmbient, 
             this->getType().getFieldDesc(AmbientFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleAmbient        (void)
{
    SFColor4r::EditHandlePtr returnValue(
        new  SFColor4r::EditHandle(
             &_sfAmbient, 
             this->getType().getFieldDesc(AmbientFieldId)));

    editSField(AmbientFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleSpecular        (void) const
{
    SFColor4r::GetHandlePtr returnValue(
        new  SFColor4r::GetHandle(
             &_sfSpecular, 
             this->getType().getFieldDesc(SpecularFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleSpecular       (void)
{
    SFColor4r::EditHandlePtr returnValue(
        new  SFColor4r::EditHandle(
             &_sfSpecular, 
             this->getType().getFieldDesc(SpecularFieldId)));

    editSField(SpecularFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandlePosition        (void) const
{
    SFVec4r::GetHandlePtr returnValue(
        new  SFVec4r::GetHandle(
             &_sfPosition, 
             this->getType().getFieldDesc(PositionFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandlePosition       (void)
{
    SFVec4r::EditHandlePtr returnValue(
        new  SFVec4r::EditHandle(
             &_sfPosition, 
             this->getType().getFieldDesc(PositionFieldId)));

    editSField(PositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleDirection       (void) const
{
    SFVec3r::GetHandlePtr returnValue(
        new  SFVec3r::GetHandle(
             &_sfDirection, 
             this->getType().getFieldDesc(DirectionFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleDirection      (void)
{
    SFVec3r::EditHandlePtr returnValue(
        new  SFVec3r::EditHandle(
             &_sfDirection, 
             this->getType().getFieldDesc(DirectionFieldId)));

    editSField(DirectionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleExponent        (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfExponent, 
             this->getType().getFieldDesc(ExponentFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleExponent       (void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfExponent, 
             this->getType().getFieldDesc(ExponentFieldId)));

    editSField(ExponentFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleCutoff          (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfCutoff, 
             this->getType().getFieldDesc(CutoffFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleCutoff         (void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfCutoff, 
             this->getType().getFieldDesc(CutoffFieldId)));

    editSField(CutoffFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleConstantAttenuation (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfConstantAttenuation, 
             this->getType().getFieldDesc(ConstantAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleConstantAttenuation(void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfConstantAttenuation, 
             this->getType().getFieldDesc(ConstantAttenuationFieldId)));

    editSField(ConstantAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleLinearAttenuation (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfLinearAttenuation, 
             this->getType().getFieldDesc(LinearAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleLinearAttenuation(void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfLinearAttenuation, 
             this->getType().getFieldDesc(LinearAttenuationFieldId)));

    editSField(LinearAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleQuadraticAttenuation (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfQuadraticAttenuation, 
             this->getType().getFieldDesc(QuadraticAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleQuadraticAttenuation(void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfQuadraticAttenuation, 
             this->getType().getFieldDesc(QuadraticAttenuationFieldId)));

    editSField(QuadraticAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    returnValue->setSetMethod(boost::bind(&LightChunk::setBeacon, 
                                          static_cast<LightChunk *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LightChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<LightChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr LightChunkBase::createAspectCopy(void) const
{
    LightChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LightChunk *>(this));

    return returnValue;
}
#endif

void LightChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<LightChunk *>(this)->setBeacon(NullFC);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<LightChunkPtr>::_type("LightChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(LightChunkPtr)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           LightChunkPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           LightChunkPtr, 
                           0);

OSG_END_NAMESPACE
