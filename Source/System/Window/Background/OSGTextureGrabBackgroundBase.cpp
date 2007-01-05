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
 **     class TextureGrabBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUREGRABBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGTextureObjChunk.h> // Texture Class

#include "OSGTextureGrabBackgroundBase.h"
#include "OSGTextureGrabBackground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureGrabBackground
    \ingroup GrpSystemWindowBackgrounds

    A background that grabs what's underneath it into a texture before it clears 
    the viewport to a constant color.

    The color of the background is given by the _sfColor field, the texture to
    grab into by the _sfTexture field.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var TextureObjChunkPtr TextureGrabBackgroundBase::_sfTexture
    The texture to grab into.
*/

/*! \var bool            TextureGrabBackgroundBase::_sfAutoResize
    Automatically resize the texture when the viewport size changes.
*/

/*! \var GLenum          TextureGrabBackgroundBase::_sfBindTarget
    Enum to use for glBindTexture, if GL_NONE chosen from texture dimensionality.
*/

/*! \var GLenum          TextureGrabBackgroundBase::_sfCopyTarget
    Enum to use for glCopyTexture, if GL_NONE chosen from texture dimensionality.
    Mainly useful to grab into the different parts of a CubeTexture.
*/


void TextureGrabBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFTextureObjChunkPtr::Description(
        SFTextureObjChunkPtr::getClassType(),
        "texture",
        "The texture to grab into.\n",
        TextureFieldId, TextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TextureGrabBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TextureGrabBackgroundBase::getSFTexture));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(TextureGrabBackgroundBase::*GetSFAutoResizeF)(void) const;

    GetSFAutoResizeF GetSFAutoResize = &TextureGrabBackgroundBase::getSFAutoResize;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "autoResize",
        "Automatically resize the texture when the viewport size changes.\n",
        AutoResizeFieldId, AutoResizeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureGrabBackgroundBase::editSFAutoResize),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAutoResize));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureGrabBackgroundBase::getSFAutoResize));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TextureGrabBackgroundBase::*GetSFBindTargetF)(void) const;

    GetSFBindTargetF GetSFBindTarget = &TextureGrabBackgroundBase::getSFBindTarget;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "bindTarget",
        "Enum to use for glBindTexture, if GL_NONE chosen from texture dimensionality.\n",
        BindTargetFieldId, BindTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureGrabBackgroundBase::editSFBindTarget),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBindTarget));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureGrabBackgroundBase::getSFBindTarget));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TextureGrabBackgroundBase::*GetSFCopyTargetF)(void) const;

    GetSFCopyTargetF GetSFCopyTarget = &TextureGrabBackgroundBase::getSFCopyTarget;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "copyTarget",
        "Enum to use for glCopyTexture, if GL_NONE chosen from texture dimensionality.\n"
        "Mainly useful to grab into the different parts of a CubeTexture.\n",
        CopyTargetFieldId, CopyTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureGrabBackgroundBase::editSFCopyTarget),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCopyTarget));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureGrabBackgroundBase::getSFCopyTarget));
#endif

    oType.addInitialDesc(pDesc);
}


TextureGrabBackgroundBase::TypeObject TextureGrabBackgroundBase::_type(true,
    TextureGrabBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TextureGrabBackgroundBase::createEmpty,
    TextureGrabBackground::initMethod,
    (InitalInsertDescFunc) &TextureGrabBackgroundBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureGrabBackground\"\n"
    "\tparent=\"SolidBackground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background that grabs what's underneath it into a texture before it clears \n"
    "the viewport to a constant color.\n"
    "\n"
    "The color of the background is given by the _sfColor field, the texture to\n"
    "grab into by the _sfTexture field.\n"
    "\t<Field\n"
    "\t\tname=\"texture\"\n"
    "\t\ttype=\"TextureObjChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe texture to grab into.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"autoResize\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Automatically resize the texture when the viewport size changes.\n"
    "\t</Field>\n"
    "       \t<Field\n"
    "\t\tname=\"bindTarget\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Enum to use for glBindTexture, if GL_NONE chosen from texture dimensionality.\n"
    "\t</Field>\n"
    "       \t<Field\n"
    "\t\tname=\"copyTarget\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Enum to use for glCopyTexture, if GL_NONE chosen from texture dimensionality.\n"
    "        Mainly useful to grab into the different parts of a CubeTexture.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background that grabs what's underneath it into a texture before it clears \n"
    "the viewport to a constant color.\n"
    "\n"
    "The color of the background is given by the _sfColor field, the texture to\n"
    "grab into by the _sfTexture field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureGrabBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureGrabBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 TextureGrabBackgroundBase::getContainerSize(void) const
{
    return sizeof(TextureGrabBackground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TextureGrabBackground::_sfTexture field.
const SFTextureObjChunkPtr *TextureGrabBackgroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFBool *TextureGrabBackgroundBase::editSFAutoResize(void)
{
    editSField(AutoResizeFieldMask);

    return &_sfAutoResize;
}

const SFBool *TextureGrabBackgroundBase::getSFAutoResize(void) const
{
    return &_sfAutoResize;
}

#ifdef OSG_1_COMPAT
SFBool              *TextureGrabBackgroundBase::getSFAutoResize     (void)
{
    return this->editSFAutoResize     ();
}
#endif

SFGLenum *TextureGrabBackgroundBase::editSFBindTarget(void)
{
    editSField(BindTargetFieldMask);

    return &_sfBindTarget;
}

const SFGLenum *TextureGrabBackgroundBase::getSFBindTarget(void) const
{
    return &_sfBindTarget;
}

#ifdef OSG_1_COMPAT
SFGLenum            *TextureGrabBackgroundBase::getSFBindTarget     (void)
{
    return this->editSFBindTarget     ();
}
#endif

SFGLenum *TextureGrabBackgroundBase::editSFCopyTarget(void)
{
    editSField(CopyTargetFieldMask);

    return &_sfCopyTarget;
}

const SFGLenum *TextureGrabBackgroundBase::getSFCopyTarget(void) const
{
    return &_sfCopyTarget;
}

#ifdef OSG_1_COMPAT
SFGLenum            *TextureGrabBackgroundBase::getSFCopyTarget     (void)
{
    return this->editSFCopyTarget     ();
}
#endif


void TextureGrabBackgroundBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == TextureFieldId)
    {
        static_cast<TextureGrabBackground *>(this)->setTexture(
            cast_dynamic<TextureObjChunkPtr>(pNewElement));
    }
}

void TextureGrabBackgroundBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void TextureGrabBackgroundBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void TextureGrabBackgroundBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void TextureGrabBackgroundBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void TextureGrabBackgroundBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void TextureGrabBackgroundBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == TextureFieldId)
    {
        static_cast<TextureGrabBackground *>(this)->setTexture(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 TextureGrabBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        returnValue += _sfAutoResize.getBinSize();
    }
    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
    {
        returnValue += _sfBindTarget.getBinSize();
    }
    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
    {
        returnValue += _sfCopyTarget.getBinSize();
    }

    return returnValue;
}

void TextureGrabBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
    {
        _sfBindTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
    {
        _sfCopyTarget.copyToBin(pMem);
    }
}

void TextureGrabBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
    {
        _sfBindTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
    {
        _sfCopyTarget.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
TextureGrabBackgroundPtr TextureGrabBackgroundBase::createEmpty(void)
{
    TextureGrabBackgroundPtr returnValue;

    newPtr<TextureGrabBackground>(returnValue);

    return returnValue;
}

FieldContainerPtr TextureGrabBackgroundBase::shallowCopy(void) const
{
    TextureGrabBackgroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TextureGrabBackground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TextureGrabBackgroundBase::TextureGrabBackgroundBase(void) :
    Inherited(),
    _sfTexture                (),
    _sfAutoResize             (bool(true)),
    _sfBindTarget             (GLenum(GL_NONE)),
    _sfCopyTarget             (GLenum(GL_NONE))
{
}

TextureGrabBackgroundBase::TextureGrabBackgroundBase(const TextureGrabBackgroundBase &source) :
    Inherited(source),
    _sfTexture                (),
    _sfAutoResize             (source._sfAutoResize             ),
    _sfBindTarget             (source._sfBindTarget             ),
    _sfCopyTarget             (source._sfCopyTarget             )
{
}

/*-------------------------- destructors ----------------------------------*/

TextureGrabBackgroundBase::~TextureGrabBackgroundBase(void)
{
}

void TextureGrabBackgroundBase::onCreate(const TextureGrabBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setTexture(source->getTexture());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void TextureGrabBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TextureGrabBackgroundBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TextureGrabBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TextureGrabBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TextureGrabBackgroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TextureGrabBackgroundBase::createAspectCopy(void) const
{
    TextureGrabBackgroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureGrabBackground *>(this));

    return returnValue;
}
#endif

void TextureGrabBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextureGrabBackground *>(this)->setTexture(NullFC);
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureGrabBackgroundPtr>::_type("TextureGrabBackgroundPtr", "SolidBackgroundPtr");
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
    static Char8 cvsid_hpp       [] = OSGTEXTUREGRABBACKGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTUREGRABBACKGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTUREGRABBACKGROUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
