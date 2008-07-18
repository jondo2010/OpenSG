/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class FrameBufferObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FrameBufferObjectBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 FrameBufferObjectBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 FrameBufferObjectBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the FrameBufferObject::_sfGLId field.

inline
GLenum &FrameBufferObjectBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the FrameBufferObject::_sfGLId field.
inline
const GLenum &FrameBufferObjectBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the FrameBufferObject::_sfGLId field.
inline
void FrameBufferObjectBase::setGLId(const GLenum &value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}

//! Get the value of the FrameBufferObject::_sfDepthAttachment field.
inline
FrameBufferAttachment * FrameBufferObjectBase::getDepthAttachment(void) const
{
    return _sfDepthAttachment.getValue();
}

//! Set the value of the FrameBufferObject::_sfDepthAttachment field.
inline
void FrameBufferObjectBase::setDepthAttachment(FrameBufferAttachment * const value)
{
    editSField(DepthAttachmentFieldMask);

    _sfDepthAttachment.setValue(value);
}

//! Get the value of the FrameBufferObject::_sfStencilAttachment field.
inline
FrameBufferAttachment * FrameBufferObjectBase::getStencilAttachment(void) const
{
    return _sfStencilAttachment.getValue();
}

//! Set the value of the FrameBufferObject::_sfStencilAttachment field.
inline
void FrameBufferObjectBase::setStencilAttachment(FrameBufferAttachment * const value)
{
    editSField(StencilAttachmentFieldMask);

    _sfStencilAttachment.setValue(value);
}
//! Get the value of the FrameBufferObject::_sfWidth field.

inline
UInt16 &FrameBufferObjectBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the FrameBufferObject::_sfWidth field.
inline
      UInt16  FrameBufferObjectBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the FrameBufferObject::_sfWidth field.
inline
void FrameBufferObjectBase::setWidth(const UInt16 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the FrameBufferObject::_sfHeight field.

inline
UInt16 &FrameBufferObjectBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the FrameBufferObject::_sfHeight field.
inline
      UInt16  FrameBufferObjectBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the FrameBufferObject::_sfHeight field.
inline
void FrameBufferObjectBase::setHeight(const UInt16 value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}

//! Get the value of the \a index element the FrameBufferObject::_mfColorAttachments field.
inline
FrameBufferAttachment * FrameBufferObjectBase::getColorAttachments(const UInt32 index) const
{
    return _mfColorAttachments[index];
}

//! Get the value of the \a index element the FrameBufferObject::_mfDrawBuffers field.
inline
const GLenum &FrameBufferObjectBase::getDrawBuffers(const UInt32 index) const
{
    return _mfDrawBuffers[index];
}

inline
GLenum &FrameBufferObjectBase::editDrawBuffers(const UInt32 index)
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    return _mfDrawBuffers[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void FrameBufferObjectBase::execSync (      FrameBufferObjectBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);

    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
        _mfColorAttachments.syncWith(pFrom->_mfColorAttachments,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
        _mfDrawBuffers.syncWith(pFrom->_mfDrawBuffers,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
        _sfDepthAttachment.syncWith(pFrom->_sfDepthAttachment);

    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
        _sfStencilAttachment.syncWith(pFrom->_sfStencilAttachment);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);
}
#endif


inline
const Char8 *FrameBufferObjectBase::getClassname(void)
{
    return "FrameBufferObject";
}
OSG_GEN_CONTAINERPTR(FrameBufferObject);

OSG_END_NAMESPACE

