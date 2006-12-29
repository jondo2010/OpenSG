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

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Beacon Class

#include "OSGLightChunkBase.h"
#include "OSGLightChunk.h"

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


#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(LightChunkBase::*GetSFDiffuseF)(void) const;

    GetSFDiffuseF GetSFDiffuse = &LightChunkBase::getSFDiffuse;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "diffuse",
        "The light's diffuse color.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFDiffuse),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFDiffuse));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFDiffuse));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(LightChunkBase::*GetSFAmbientF)(void) const;

    GetSFAmbientF GetSFAmbient = &LightChunkBase::getSFAmbient;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "ambient",
        "The light's ambient color.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFAmbient),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAmbient));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFAmbient));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(LightChunkBase::*GetSFSpecularF)(void) const;

    GetSFSpecularF GetSFSpecular = &LightChunkBase::getSFSpecular;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "specular",
        "The light's specular color.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFSpecular),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSpecular));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFSpecular));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec4r *(LightChunkBase::*GetSFPositionF)(void) const;

    GetSFPositionF GetSFPosition = &LightChunkBase::getSFPosition;
#endif

    pDesc = new SFVec4r::Description(
        SFVec4r::getClassType(),
        "position",
        "The light's position.\n",
        PositionFieldId, PositionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFPosition),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPosition));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFPosition));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec3r *(LightChunkBase::*GetSFDirectionF)(void) const;

    GetSFDirectionF GetSFDirection = &LightChunkBase::getSFDirection;
#endif

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "direction",
        "The light's direction (only for spotlights).\n",
        DirectionFieldId, DirectionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFDirection),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFDirection));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFDirection));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(LightChunkBase::*GetSFExponentF)(void) const;

    GetSFExponentF GetSFExponent = &LightChunkBase::getSFExponent;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "exponent",
        "The light's spotlight exponent.\n",
        ExponentFieldId, ExponentFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFExponent),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFExponent));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFExponent));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(LightChunkBase::*GetSFCutoffF)(void) const;

    GetSFCutoffF GetSFCutoff = &LightChunkBase::getSFCutoff;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "cutoff",
        "The light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.\n",
        CutoffFieldId, CutoffFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFCutoff),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCutoff));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFCutoff));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(LightChunkBase::*GetSFConstantAttenuationF)(void) const;

    GetSFConstantAttenuationF GetSFConstantAttenuation = &LightChunkBase::getSFConstantAttenuation;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "constantAttenuation",
        "The light's constant attenuation.\n",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFConstantAttenuation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFConstantAttenuation));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFConstantAttenuation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(LightChunkBase::*GetSFLinearAttenuationF)(void) const;

    GetSFLinearAttenuationF GetSFLinearAttenuation = &LightChunkBase::getSFLinearAttenuation;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "linearAttenuation",
        "The light's linear attenuation.\n",
        LinearAttenuationFieldId, LinearAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFLinearAttenuation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLinearAttenuation));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFLinearAttenuation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(LightChunkBase::*GetSFQuadraticAttenuationF)(void) const;

    GetSFQuadraticAttenuationF GetSFQuadraticAttenuation = &LightChunkBase::getSFQuadraticAttenuation;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "quadraticAttenuation",
        "The light's quadratic attenuation.\n",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&LightChunkBase::editSFQuadraticAttenuation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFQuadraticAttenuation));
#else
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFQuadraticAttenuation));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&LightChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&LightChunkBase::getSFBeacon));

    oType.addInitialDesc(pDesc);
}


LightChunkBase::TypeObject LightChunkBase::_type(true,
    LightChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &LightChunkBase::createEmpty,
    LightChunk::initMethod,
    (InitalInsertDescFunc) &LightChunkBase::classDescInserter,
    false,
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
    "\t\ttype=\"NodePtr\"\n"
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
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

#ifdef OSG_1_COMPAT
SFReal              *LightChunkBase::getSFQuadraticAttenuation(void)
{
    return this->editSFQuadraticAttenuation();
}
#endif

//! Get the LightChunk::_sfBeacon field.
const SFNodePtr *LightChunkBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}


void LightChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == BeaconFieldId)
    {
        static_cast<LightChunk *>(this)->setBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void LightChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void LightChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void LightChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void LightChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void LightChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void LightChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == BeaconFieldId)
    {
        static_cast<LightChunk *>(this)->setBeacon(NullFC);
    }
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

//! create an empty new instance of the class, do not copy the prototype
LightChunkPtr LightChunkBase::createEmpty(void)
{
    LightChunkPtr returnValue;

    newPtr<LightChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr LightChunkBase::shallowCopy(void) const
{
    LightChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const LightChunk *>(this));

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
    _sfBeacon                 ()
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

#ifdef OSG_MT_FIELDCONTAINERPTR
void LightChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<LightChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

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

#if 0
void LightChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
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
DataType FieldTraits<LightChunkPtr>::_type("LightChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(LightChunkPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, LightChunkPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, LightChunkPtr);


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
    static Char8 cvsid_hpp       [] = OSGLIGHTCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLIGHTCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLIGHTCHUNKFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
