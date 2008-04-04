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
 **     class SimpleTexturedMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESIMPLETEXTUREDMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // MinFilter default header
#include <OSGGL.h>                        // MagFilter default header
#include <OSGGL.h>                        // EnvMode default header

#include <OSGImage.h> // Image Class

#include "OSGSimpleTexturedMaterialBase.h"
#include "OSGSimpleTexturedMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleTexturedMaterial
    \ingroup GrpSystemMaterial

    The simple textured material class. See \ref
    PageSystemMaterialTexturedSimpleMaterial for a description.

    A OSG::SimpleMaterial with an added texture. It doesn't expose all features 
    of the texture, just the ones needed most often.

    OSG::SimpleTexturedMaterial::_sfImage defines the texture, 
    OSG::SimpleTexturedMaterial::_sfMinFilter and
    OSG::SimpleTexturedMaterial::_sfMagFilter the used filters and 
    OSG::SimpleTexturedMaterial::_sfEnvMode the environment mode. As a special 
    case
    OSG::SimpleTexturedMaterial::_sfEnvMap can be used to use the texture as a
    spherical environment map.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        SimpleTexturedMaterialBase::_sfImage
    Defines the texture image.
*/

/*! \var GLenum          SimpleTexturedMaterialBase::_sfMinFilter
    Defines the minification filter, see glTexParameter for details.
    Default: GL_LINEAR_MIPMAP_LINEAR.
*/

/*! \var GLenum          SimpleTexturedMaterialBase::_sfMagFilter
    Defines the magnification filter, see glTexParameter for details.
    Default: GL_LINEAR
*/

/*! \var GLenum          SimpleTexturedMaterialBase::_sfEnvMode
    Sets the environment mode, defining how texture and lighting color interact.
    Default: GL_REPLACE.
*/

/*! \var bool            SimpleTexturedMaterialBase::_sfEnvMap
    Defines whether to use the texture as a spherical environment map.
*/


void SimpleTexturedMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "image",
        "Defines the texture image.\n",
        ImageFieldId, ImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterialBase::editHandleImage),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterialBase::getHandleImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "minFilter",
        "Defines the minification filter, see glTexParameter for details.\n"
        "Default: GL_LINEAR_MIPMAP_LINEAR.\n",
        MinFilterFieldId, MinFilterFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterialBase::editHandleMinFilter),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterialBase::getHandleMinFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "magFilter",
        "Defines the magnification filter, see glTexParameter for details.\n"
        "Default: GL_LINEAR\n",
        MagFilterFieldId, MagFilterFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterialBase::editHandleMagFilter),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterialBase::getHandleMagFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "envMode",
        "Sets the environment mode, defining how texture and lighting color interact.\n"
        "Default: GL_REPLACE.\n",
        EnvModeFieldId, EnvModeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterialBase::editHandleEnvMode),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterialBase::getHandleEnvMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "envMap",
        "Defines whether to use the texture as a spherical environment map.\n",
        EnvMapFieldId, EnvMapFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterialBase::editHandleEnvMap),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterialBase::getHandleEnvMap));

    oType.addInitialDesc(pDesc);
}


SimpleTexturedMaterialBase::TypeObject SimpleTexturedMaterialBase::_type(
    SimpleTexturedMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SimpleTexturedMaterialBase::createEmpty,
    SimpleTexturedMaterial::initMethod,
    SimpleTexturedMaterial::exitMethod,
    (InitalInsertDescFunc) &SimpleTexturedMaterialBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SimpleTexturedMaterial\"\n"
    "\tparent=\"SimpleMaterial\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The simple textured material class. See \\ref\n"
    "PageSystemMaterialTexturedSimpleMaterial for a description.\n"
    "\n"
    "A OSG::SimpleMaterial with an added texture. It doesn't expose all features \n"
    "of the texture, just the ones needed most often.\n"
    "\n"
    "OSG::SimpleTexturedMaterial::_sfImage defines the texture, \n"
    "OSG::SimpleTexturedMaterial::_sfMinFilter and\n"
    "OSG::SimpleTexturedMaterial::_sfMagFilter the used filters and \n"
    "OSG::SimpleTexturedMaterial::_sfEnvMode the environment mode. As a special \n"
    "case\n"
    "OSG::SimpleTexturedMaterial::_sfEnvMap can be used to use the texture as a\n"
    "spherical environment map.\n"
    "\t<Field\n"
    "\t\tname=\"image\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines the texture image.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"minFilter\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_LINEAR_MIPMAP_LINEAR\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "                potential_values=\"GL_NEAREST, GL_LINEAR, GL_NEAREST_MIPMAP_NEAREST, GL_NEAREST_MIPMAP_LINEAR, GL_LINEAR_MIPMAP_NEAREST, GL_LINEAR_MIPMAP_LINEAR\"\n"
    "\t>\n"
    "\tDefines the minification filter, see glTexParameter for details.\n"
    "        Default: GL_LINEAR_MIPMAP_LINEAR.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"magFilter\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_LINEAR\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "                potential_values=\"GL_NEAREST, GL_LINEAR\"\n"
    "\t>\n"
    "\tDefines the magnification filter, see glTexParameter for details.\n"
    "        Default: GL_LINEAR\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"envMode\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_REPLACE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "                potential_values=\"GL_MODULATE, GL_DECAL, GL_BLEND, GL_REPLACE, GL_ADD, GL_COMBINE\"\n"
    "\t>\n"
    "\tSets the environment mode, defining how texture and lighting color interact.\n"
    "        Default: GL_REPLACE.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"envMap\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines whether to use the texture as a spherical environment map.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The simple textured material class. See \\ref\n"
    "PageSystemMaterialTexturedSimpleMaterial for a description.\n"
    "\n"
    "A OSG::SimpleMaterial with an added texture. It doesn't expose all features \n"
    "of the texture, just the ones needed most often.\n"
    "\n"
    "OSG::SimpleTexturedMaterial::_sfImage defines the texture, \n"
    "OSG::SimpleTexturedMaterial::_sfMinFilter and\n"
    "OSG::SimpleTexturedMaterial::_sfMagFilter the used filters and \n"
    "OSG::SimpleTexturedMaterial::_sfEnvMode the environment mode. As a special \n"
    "case\n"
    "OSG::SimpleTexturedMaterial::_sfEnvMap can be used to use the texture as a\n"
    "spherical environment map.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleTexturedMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleTexturedMaterialBase::getType(void) const
{
    return _type;
}

UInt32 SimpleTexturedMaterialBase::getContainerSize(void) const
{
    return sizeof(SimpleTexturedMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SimpleTexturedMaterial::_sfImage field.
const SFImagePtr *SimpleTexturedMaterialBase::getSFImage(void) const
{
    return &_sfImage;
}

SFGLenum *SimpleTexturedMaterialBase::editSFMinFilter(void)
{
    editSField(MinFilterFieldMask);

    return &_sfMinFilter;
}

const SFGLenum *SimpleTexturedMaterialBase::getSFMinFilter(void) const
{
    return &_sfMinFilter;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *SimpleTexturedMaterialBase::getSFMinFilter      (void)
{
    return this->editSFMinFilter      ();
}
#endif

SFGLenum *SimpleTexturedMaterialBase::editSFMagFilter(void)
{
    editSField(MagFilterFieldMask);

    return &_sfMagFilter;
}

const SFGLenum *SimpleTexturedMaterialBase::getSFMagFilter(void) const
{
    return &_sfMagFilter;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *SimpleTexturedMaterialBase::getSFMagFilter      (void)
{
    return this->editSFMagFilter      ();
}
#endif

SFGLenum *SimpleTexturedMaterialBase::editSFEnvMode(void)
{
    editSField(EnvModeFieldMask);

    return &_sfEnvMode;
}

const SFGLenum *SimpleTexturedMaterialBase::getSFEnvMode(void) const
{
    return &_sfEnvMode;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *SimpleTexturedMaterialBase::getSFEnvMode        (void)
{
    return this->editSFEnvMode        ();
}
#endif

SFBool *SimpleTexturedMaterialBase::editSFEnvMap(void)
{
    editSField(EnvMapFieldMask);

    return &_sfEnvMap;
}

const SFBool *SimpleTexturedMaterialBase::getSFEnvMap(void) const
{
    return &_sfEnvMap;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *SimpleTexturedMaterialBase::getSFEnvMap         (void)
{
    return this->editSFEnvMap         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 SimpleTexturedMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }
    if(FieldBits::NoField != (MinFilterFieldMask & whichField))
    {
        returnValue += _sfMinFilter.getBinSize();
    }
    if(FieldBits::NoField != (MagFilterFieldMask & whichField))
    {
        returnValue += _sfMagFilter.getBinSize();
    }
    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
    {
        returnValue += _sfEnvMode.getBinSize();
    }
    if(FieldBits::NoField != (EnvMapFieldMask & whichField))
    {
        returnValue += _sfEnvMap.getBinSize();
    }

    return returnValue;
}

void SimpleTexturedMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinFilterFieldMask & whichField))
    {
        _sfMinFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MagFilterFieldMask & whichField))
    {
        _sfMagFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
    {
        _sfEnvMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnvMapFieldMask & whichField))
    {
        _sfEnvMap.copyToBin(pMem);
    }
}

void SimpleTexturedMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinFilterFieldMask & whichField))
    {
        _sfMinFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MagFilterFieldMask & whichField))
    {
        _sfMagFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
    {
        _sfEnvMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnvMapFieldMask & whichField))
    {
        _sfEnvMap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleTexturedMaterialPtr SimpleTexturedMaterialBase::create(void)
{
    SimpleTexturedMaterialPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<SimpleTexturedMaterial::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleTexturedMaterialPtr SimpleTexturedMaterialBase::createEmpty(void)
{
    SimpleTexturedMaterialPtr returnValue;

    newPtr<SimpleTexturedMaterial>(returnValue);

    return returnValue;
}

FieldContainerPtr SimpleTexturedMaterialBase::shallowCopy(void) const
{
    SimpleTexturedMaterialPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SimpleTexturedMaterial *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SimpleTexturedMaterialBase::SimpleTexturedMaterialBase(void) :
    Inherited(),
    _sfImage                  (NullFC),
    _sfMinFilter              (GLenum(GL_LINEAR_MIPMAP_LINEAR)),
    _sfMagFilter              (GLenum(GL_LINEAR)),
    _sfEnvMode                (GLenum(GL_REPLACE)),
    _sfEnvMap                 (bool(false))
{
}

SimpleTexturedMaterialBase::SimpleTexturedMaterialBase(const SimpleTexturedMaterialBase &source) :
    Inherited(source),
    _sfImage                  (NullFC),
    _sfMinFilter              (source._sfMinFilter              ),
    _sfMagFilter              (source._sfMagFilter              ),
    _sfEnvMode                (source._sfEnvMode                ),
    _sfEnvMap                 (source._sfEnvMap                 )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleTexturedMaterialBase::~SimpleTexturedMaterialBase(void)
{
}

void SimpleTexturedMaterialBase::onCreate(const SimpleTexturedMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setImage(source->getImage());
    }
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleImage           (void) const
{
    SFImagePtr::GetHandlePtr returnValue(
        new  SFImagePtr::GetHandle(
             &_sfImage, 
             this->getType().getFieldDesc(ImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleImage          (void)
{
    SFImagePtr::EditHandlePtr returnValue(
        new  SFImagePtr::EditHandle(
             &_sfImage, 
             this->getType().getFieldDesc(ImageFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleTexturedMaterial::setImage, 
                                          static_cast<SimpleTexturedMaterial *>(this), _1));

    editSField(ImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleMinFilter       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfMinFilter, 
             this->getType().getFieldDesc(MinFilterFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleMinFilter      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfMinFilter, 
             this->getType().getFieldDesc(MinFilterFieldId)));

    editSField(MinFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleMagFilter       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfMagFilter, 
             this->getType().getFieldDesc(MagFilterFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleMagFilter      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfMagFilter, 
             this->getType().getFieldDesc(MagFilterFieldId)));

    editSField(MagFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleEnvMode         (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfEnvMode, 
             this->getType().getFieldDesc(EnvModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleEnvMode        (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfEnvMode, 
             this->getType().getFieldDesc(EnvModeFieldId)));

    editSField(EnvModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleEnvMap          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnvMap, 
             this->getType().getFieldDesc(EnvMapFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleEnvMap         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnvMap, 
             this->getType().getFieldDesc(EnvMapFieldId)));

    editSField(EnvMapFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleTexturedMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SimpleTexturedMaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SimpleTexturedMaterialBase::createAspectCopy(void) const
{
    SimpleTexturedMaterialPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleTexturedMaterial *>(this));

    return returnValue;
}
#endif

void SimpleTexturedMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleTexturedMaterial *>(this)->setImage(NullFC);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SimpleTexturedMaterialPtr>::_type("SimpleTexturedMaterialPtr", "SimpleMaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SimpleTexturedMaterialPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, SimpleTexturedMaterialPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, SimpleTexturedMaterialPtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, SimpleTexturedMaterialPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, SimpleTexturedMaterialPtr, 0);

OSG_END_NAMESPACE
