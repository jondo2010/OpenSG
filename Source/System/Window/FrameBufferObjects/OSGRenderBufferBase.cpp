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
 **     class RenderBuffer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERENDERBUFFERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGRenderBufferBase.h"
#include "OSGRenderBuffer.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RenderBuffer
    Render buffer.  Wraps OpenGL render buffer objects.  RENDERBUFFER_EXT
    A renderbuffer is a data storage object containing a single image of a renderable internal format.

    \see TextureBuffer
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          RenderBufferBase::_sfGLId
    The OpenGL texture id for this buffer object.
*/

/*! \var GLenum          RenderBufferBase::_sfInternalFormat
    
*/


void RenderBufferBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(RenderBufferBase::*GetSFGLIdF)(void) const;

    GetSFGLIdF GetSFGLId = &RenderBufferBase::getSFGLId;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "GLId",
        "The OpenGL texture id for this buffer object.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        reinterpret_cast<FieldEditMethodSig>(&RenderBufferBase::editSFGLId),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderBufferBase::getSFGLId));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(RenderBufferBase::*GetSFInternalFormatF)(void) const;

    GetSFInternalFormatF GetSFInternalFormat = &RenderBufferBase::getSFInternalFormat;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "internalFormat",
        "",
        InternalFormatFieldId, InternalFormatFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&RenderBufferBase::editSFInternalFormat),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFInternalFormat));
#else
        reinterpret_cast<FieldGetMethodSig >(&RenderBufferBase::getSFInternalFormat));
#endif

    oType.addInitialDesc(pDesc);
}


RenderBufferBase::TypeObject RenderBufferBase::_type(true,
    RenderBufferBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &RenderBufferBase::createEmpty,
    RenderBuffer::initMethod,
    (InitalInsertDescFunc) &RenderBufferBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"RenderBuffer\"\n"
    "        parent=\"FrameBufferAttachment\"\n"
    "        library=\"System\"\n"
    "        pointerfieldtypes=\"both\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    ">\n"
    "Render buffer.  Wraps OpenGL render buffer objects.  RENDERBUFFER_EXT\n"
    "A renderbuffer is a data storage object containing a single image of a renderable internal format.\n"
    "\n"
    "\\see TextureBuffer\n"
    "        <Field\n"
    "                name=\"GLId\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"internal\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "        >\n"
    "        The OpenGL texture id for this buffer object.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"internalFormat\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"GL_NONE\"\n"
    "        >\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Render buffer.  Wraps OpenGL render buffer objects.  RENDERBUFFER_EXT\n"
    "A renderbuffer is a data storage object containing a single image of a renderable internal format.\n"
    "\n"
    "\\see TextureBuffer\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RenderBufferBase::getType(void)
{
    return _type;
}

const FieldContainerType &RenderBufferBase::getType(void) const
{
    return _type;
}

UInt32 RenderBufferBase::getContainerSize(void) const
{
    return sizeof(RenderBuffer);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *RenderBufferBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *RenderBufferBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_COMPAT
SFGLenum            *RenderBufferBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif

SFGLenum *RenderBufferBase::editSFInternalFormat(void)
{
    editSField(InternalFormatFieldMask);

    return &_sfInternalFormat;
}

const SFGLenum *RenderBufferBase::getSFInternalFormat(void) const
{
    return &_sfInternalFormat;
}

#ifdef OSG_1_COMPAT
SFGLenum            *RenderBufferBase::getSFInternalFormat (void)
{
    return this->editSFInternalFormat ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 RenderBufferBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
    {
        returnValue += _sfInternalFormat.getBinSize();
    }

    return returnValue;
}

void RenderBufferBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
    {
        _sfInternalFormat.copyToBin(pMem);
    }
}

void RenderBufferBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
    {
        _sfInternalFormat.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
RenderBufferPtr RenderBufferBase::createEmpty(void)
{
    RenderBufferPtr returnValue;

    newPtr<RenderBuffer>(returnValue);

    return returnValue;
}

FieldContainerPtr RenderBufferBase::shallowCopy(void) const
{
    RenderBufferPtr returnValue;

    newPtr(returnValue, dynamic_cast<const RenderBuffer *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

RenderBufferBase::RenderBufferBase(void) :
    Inherited(),
    _sfGLId                   (GLenum(0)),
    _sfInternalFormat         (GLenum(GL_NONE))
{
}

RenderBufferBase::RenderBufferBase(const RenderBufferBase &source) :
    Inherited(source),
    _sfGLId                   (source._sfGLId                   ),
    _sfInternalFormat         (source._sfInternalFormat         )
{
}

/*-------------------------- destructors ----------------------------------*/

RenderBufferBase::~RenderBufferBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void RenderBufferBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<RenderBufferBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void RenderBufferBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<RenderBufferBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void RenderBufferBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr RenderBufferBase::createAspectCopy(void) const
{
    RenderBufferPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RenderBuffer *>(this));

    return returnValue;
}
#endif

void RenderBufferBase::resolveLinks(void)
{
    Inherited::resolveLinks();
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
DataType FieldTraits<RenderBufferPtr>::_type("RenderBufferPtr", "FrameBufferAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RenderBufferPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, RenderBufferPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, RenderBufferPtr);


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
    static Char8 cvsid_hpp       [] = OSGRENDERBUFFERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGRENDERBUFFERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGRENDERBUFFERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
