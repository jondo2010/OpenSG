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
 **     class Stage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTAGEINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // RenderTarget Class

#include "OSGStageBase.h"
#include "OSGStage.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Stage
    Base of a staged rendering.  Tells the renderer to target an FBO for this subtree.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FrameBufferObjectPtr StageBase::_sfRenderTarget
    The FBO to target for rendering this subtree.
*/


void StageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFFrameBufferObjectPtr::Description(
        SFFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "The FBO to target for rendering this subtree.\n",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&StageBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&StageBase::getSFRenderTarget));

    oType.addInitialDesc(pDesc);
}


StageBase::TypeObject StageBase::_type(true,
    StageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &StageBase::createEmpty,
    Stage::initMethod,
    (InitalInsertDescFunc) &StageBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"Stage\"\n"
    "        parent=\"Group\"\n"
    "        library=\"Group\"\n"
    "        pointerfieldtypes=\"none\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "Base of a staged rendering.  Tells the renderer to target an FBO for this subtree.\n"
    "        <Field\n"
    "                name=\"renderTarget\"\n"
    "                type=\"FrameBufferObjectPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                defaultValue=\"NullFC\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The FBO to target for rendering this subtree.\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Base of a staged rendering.  Tells the renderer to target an FBO for this subtree.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StageBase::getType(void)
{
    return _type;
}

const FieldContainerType &StageBase::getType(void) const
{
    return _type;
}

UInt32 StageBase::getContainerSize(void) const
{
    return sizeof(Stage);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Stage::_sfRenderTarget field.
const SFFrameBufferObjectPtr *StageBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}


void StageBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == RenderTargetFieldId)
    {
        static_cast<Stage *>(this)->setRenderTarget(
            cast_dynamic<FrameBufferObjectPtr>(pNewElement));
    }
}

void StageBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void StageBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void StageBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void StageBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void StageBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void StageBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == RenderTargetFieldId)
    {
        static_cast<Stage *>(this)->setRenderTarget(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 StageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }

    return returnValue;
}

void StageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
}

void StageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
StagePtr StageBase::createEmpty(void)
{
    StagePtr returnValue;

    newPtr<Stage>(returnValue);

    return returnValue;
}

FieldContainerPtr StageBase::shallowCopy(void) const
{
    StagePtr returnValue;

    newPtr(returnValue, dynamic_cast<const Stage *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

StageBase::StageBase(void) :
    Inherited(),
    _sfRenderTarget           (FrameBufferObjectPtr(NullFC))
{
}

StageBase::StageBase(const StageBase &source) :
    Inherited(source),
    _sfRenderTarget           ()
{
}

/*-------------------------- destructors ----------------------------------*/

StageBase::~StageBase(void)
{
}

void StageBase::onCreate(const Stage *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setRenderTarget(source->getRenderTarget());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void StageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<StageBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void StageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void StageBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr StageBase::createAspectCopy(void) const
{
    StagePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Stage *>(this));

    return returnValue;
}
#endif

void StageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Stage *>(this)->setRenderTarget(NullFC);
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StagePtr>::_type("StagePtr", "GroupPtr");
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
    static Char8 cvsid_hpp       [] = OSGSTAGEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSTAGEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSTAGEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
