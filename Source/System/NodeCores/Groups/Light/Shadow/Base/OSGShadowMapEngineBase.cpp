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
 **     class ShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADOWMAPENGINEINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // RenderTarget Class

#include "OSGShadowMapEngineBase.h"
#include "OSGShadowMapEngine.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShadowMapEngine
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FrameBufferObjectPtr ShadowMapEngineBase::_sfRenderTarget
    
*/

/*! \var Int32           ShadowMapEngineBase::_sfWidth
    
*/

/*! \var Int32           ShadowMapEngineBase::_sfHeight
    
*/

/*! \var Color4f         ShadowMapEngineBase::_sfShadowColor
    
*/

/*! \var Real32          ShadowMapEngineBase::_sfOffsetBias
    
*/

/*! \var Real32          ShadowMapEngineBase::_sfOffsetFactor
    
*/

/*! \var UInt32          ShadowMapEngineBase::_sfUpdateMode
    
*/


void ShadowMapEngineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFFrameBufferObjectPtr::Description(
        SFFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ShadowMapEngineBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFRenderTarget));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFInt32 *(ShadowMapEngineBase::*GetSFWidthF)(void) const;

    GetSFWidthF GetSFWidth = &ShadowMapEngineBase::getSFWidth;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShadowMapEngineBase::editSFWidth),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFInt32 *(ShadowMapEngineBase::*GetSFHeightF)(void) const;

    GetSFHeightF GetSFHeight = &ShadowMapEngineBase::getSFHeight;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShadowMapEngineBase::editSFHeight),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFHeight));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4f *(ShadowMapEngineBase::*GetSFShadowColorF)(void) const;

    GetSFShadowColorF GetSFShadowColor = &ShadowMapEngineBase::getSFShadowColor;
#endif

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "shadowColor",
        "",
        ShadowColorFieldId, ShadowColorFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShadowMapEngineBase::editSFShadowColor),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFShadowColor));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFShadowColor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ShadowMapEngineBase::*GetSFOffsetBiasF)(void) const;

    GetSFOffsetBiasF GetSFOffsetBias = &ShadowMapEngineBase::getSFOffsetBias;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "offsetBias",
        "",
        OffsetBiasFieldId, OffsetBiasFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShadowMapEngineBase::editSFOffsetBias),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetBias));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFOffsetBias));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ShadowMapEngineBase::*GetSFOffsetFactorF)(void) const;

    GetSFOffsetFactorF GetSFOffsetFactor = &ShadowMapEngineBase::getSFOffsetFactor;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "offsetFactor",
        "",
        OffsetFactorFieldId, OffsetFactorFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShadowMapEngineBase::editSFOffsetFactor),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetFactor));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFOffsetFactor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ShadowMapEngineBase::*GetSFUpdateModeF)(void) const;

    GetSFUpdateModeF GetSFUpdateMode = &ShadowMapEngineBase::getSFUpdateMode;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "updateMode",
        "",
        UpdateModeFieldId, UpdateModeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShadowMapEngineBase::editSFUpdateMode),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFUpdateMode));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShadowMapEngineBase::getSFUpdateMode));
#endif

    oType.addInitialDesc(pDesc);
}


ShadowMapEngineBase::TypeObject ShadowMapEngineBase::_type(true,
    ShadowMapEngineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ShadowMapEngine::initMethod,
    (InitalInsertDescFunc) &ShadowMapEngineBase::classDescInserter,
    false,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShadowMapEngine\"\n"
    "\tparent=\"LightEngine\"\n"
    "\tlibrary=\"RenderTrav\"\n"
    "\tstructure=\"abstract\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"renderTarget\"\n"
    "\t\ttype=\"FrameBufferObjectPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"512\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"512\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shadowColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"Color4f(0.f, 0.f, 0.f, 1.f)\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetBias\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"4.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetFactor\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"10.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"updateMode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShadowMapEngineBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShadowMapEngineBase::getType(void) const
{
    return _type;
}

UInt32 ShadowMapEngineBase::getContainerSize(void) const
{
    return sizeof(ShadowMapEngine);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShadowMapEngine::_sfRenderTarget field.
const SFFrameBufferObjectPtr *ShadowMapEngineBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}

SFInt32 *ShadowMapEngineBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFInt32 *ShadowMapEngineBase::getSFWidth(void) const
{
    return &_sfWidth;
}

#ifdef OSG_1_COMPAT
SFInt32             *ShadowMapEngineBase::getSFWidth          (void)
{
    return this->editSFWidth          ();
}
#endif

SFInt32 *ShadowMapEngineBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFInt32 *ShadowMapEngineBase::getSFHeight(void) const
{
    return &_sfHeight;
}

#ifdef OSG_1_COMPAT
SFInt32             *ShadowMapEngineBase::getSFHeight         (void)
{
    return this->editSFHeight         ();
}
#endif

SFColor4f *ShadowMapEngineBase::editSFShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return &_sfShadowColor;
}

const SFColor4f *ShadowMapEngineBase::getSFShadowColor(void) const
{
    return &_sfShadowColor;
}

#ifdef OSG_1_COMPAT
SFColor4f           *ShadowMapEngineBase::getSFShadowColor    (void)
{
    return this->editSFShadowColor    ();
}
#endif

SFReal32 *ShadowMapEngineBase::editSFOffsetBias(void)
{
    editSField(OffsetBiasFieldMask);

    return &_sfOffsetBias;
}

const SFReal32 *ShadowMapEngineBase::getSFOffsetBias(void) const
{
    return &_sfOffsetBias;
}

#ifdef OSG_1_COMPAT
SFReal32            *ShadowMapEngineBase::getSFOffsetBias     (void)
{
    return this->editSFOffsetBias     ();
}
#endif

SFReal32 *ShadowMapEngineBase::editSFOffsetFactor(void)
{
    editSField(OffsetFactorFieldMask);

    return &_sfOffsetFactor;
}

const SFReal32 *ShadowMapEngineBase::getSFOffsetFactor(void) const
{
    return &_sfOffsetFactor;
}

#ifdef OSG_1_COMPAT
SFReal32            *ShadowMapEngineBase::getSFOffsetFactor   (void)
{
    return this->editSFOffsetFactor   ();
}
#endif

SFUInt32 *ShadowMapEngineBase::editSFUpdateMode(void)
{
    editSField(UpdateModeFieldMask);

    return &_sfUpdateMode;
}

const SFUInt32 *ShadowMapEngineBase::getSFUpdateMode(void) const
{
    return &_sfUpdateMode;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ShadowMapEngineBase::getSFUpdateMode     (void)
{
    return this->editSFUpdateMode     ();
}
#endif


void ShadowMapEngineBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == RenderTargetFieldId)
    {
        static_cast<ShadowMapEngine *>(this)->setRenderTarget(
            cast_dynamic<FrameBufferObjectPtr>(pNewElement));
    }
}

void ShadowMapEngineBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void ShadowMapEngineBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void ShadowMapEngineBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void ShadowMapEngineBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void ShadowMapEngineBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void ShadowMapEngineBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == RenderTargetFieldId)
    {
        static_cast<ShadowMapEngine *>(this)->setRenderTarget(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 ShadowMapEngineBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        returnValue += _sfShadowColor.getBinSize();
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        returnValue += _sfOffsetBias.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        returnValue += _sfOffsetFactor.getBinSize();
    }
    if(FieldBits::NoField != (UpdateModeFieldMask & whichField))
    {
        returnValue += _sfUpdateMode.getBinSize();
    }

    return returnValue;
}

void ShadowMapEngineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UpdateModeFieldMask & whichField))
    {
        _sfUpdateMode.copyToBin(pMem);
    }
}

void ShadowMapEngineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UpdateModeFieldMask & whichField))
    {
        _sfUpdateMode.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

ShadowMapEngineBase::ShadowMapEngineBase(void) :
    Inherited(),
    _sfRenderTarget           (FrameBufferObjectPtr(NullFC)),
    _sfWidth                  (Int32(512)),
    _sfHeight                 (Int32(512)),
    _sfShadowColor            (Color4f(Color4f(0.f, 0.f, 0.f, 1.f))),
    _sfOffsetBias             (Real32(4.f)),
    _sfOffsetFactor           (Real32(10.f)),
    _sfUpdateMode             (UInt32(1))
{
}

ShadowMapEngineBase::ShadowMapEngineBase(const ShadowMapEngineBase &source) :
    Inherited(source),
    _sfRenderTarget           (),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfShadowColor            (source._sfShadowColor            ),
    _sfOffsetBias             (source._sfOffsetBias             ),
    _sfOffsetFactor           (source._sfOffsetFactor           ),
    _sfUpdateMode             (source._sfUpdateMode             )
{
}

/*-------------------------- destructors ----------------------------------*/

ShadowMapEngineBase::~ShadowMapEngineBase(void)
{
}

void ShadowMapEngineBase::onCreate(const ShadowMapEngine *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setRenderTarget(source->getRenderTarget());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ShadowMapEngineBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShadowMapEngineBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ShadowMapEngineBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void ShadowMapEngineBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShadowMapEngine *>(this)->setRenderTarget(NullFC);
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
DataType FieldTraits<ShadowMapEnginePtr>::_type("ShadowMapEnginePtr", "LightEnginePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShadowMapEnginePtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, ShadowMapEnginePtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, ShadowMapEnginePtr);


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
    static Char8 cvsid_hpp       [] = OSGSHADOWMAPENGINEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSHADOWMAPENGINEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSHADOWMAPENGINEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
