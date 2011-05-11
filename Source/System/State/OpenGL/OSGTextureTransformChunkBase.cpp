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
 **     class TextureTransformChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGTextureTransformChunkBase.h"
#include "OSGTextureTransformChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureTransformChunk
    See \ref PageSystemTextureTransformChunk for a description.

    This chunk wraps glLoadMatrix() for the GL_TEXTURE matrix mode. It is derived
    from the OSG::TransformChunk and uses its matrix.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            TextureTransformChunkBase::_sfUseCameraBeacon
    If enabled it uses the camera beacon matrix (for cube textures)
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureTransformChunk *>::_type("TextureTransformChunkPtr", "TransformChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureTransformChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextureTransformChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextureTransformChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextureTransformChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "useCameraBeacon",
        "If enabled it uses the camera beacon matrix (for cube textures)\n",
        UseCameraBeaconFieldId, UseCameraBeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureTransformChunk::editHandleUseCameraBeacon),
        static_cast<FieldGetMethodSig >(&TextureTransformChunk::getHandleUseCameraBeacon));

    oType.addInitialDesc(pDesc);
}


TextureTransformChunkBase::TypeObject TextureTransformChunkBase::_type(
    TextureTransformChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextureTransformChunkBase::createEmptyLocal),
    TextureTransformChunk::initMethod,
    TextureTransformChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextureTransformChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"TextureTransformChunk\"\n"
    "   parent=\"TransformChunk\"\n"
    "   library=\"State\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpStateOpenGL\"\n"
    "   >\n"
    "  See \\ref PageSystemTextureTransformChunk for a description.\n"
    "\n"
    "  This chunk wraps glLoadMatrix() for the GL_TEXTURE matrix mode. It is derived\n"
    "  from the OSG::TransformChunk and uses its matrix.\n"
    "  <Field\n"
    "\t name=\"useCameraBeacon\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tIf enabled it uses the camera beacon matrix (for cube textures)\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemTextureTransformChunk for a description.\n"
    "\n"
    "This chunk wraps glLoadMatrix() for the GL_TEXTURE matrix mode. It is derived\n"
    "from the OSG::TransformChunk and uses its matrix.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureTransformChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureTransformChunkBase::getType(void) const
{
    return _type;
}

UInt32 TextureTransformChunkBase::getContainerSize(void) const
{
    return sizeof(TextureTransformChunk);
}

/*------------------------- decorator get ------------------------------*/


SFBool *TextureTransformChunkBase::editSFUseCameraBeacon(void)
{
    editSField(UseCameraBeaconFieldMask);

    return &_sfUseCameraBeacon;
}

const SFBool *TextureTransformChunkBase::getSFUseCameraBeacon(void) const
{
    return &_sfUseCameraBeacon;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextureTransformChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
    {
        returnValue += _sfUseCameraBeacon.getBinSize();
    }

    return returnValue;
}

void TextureTransformChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
    {
        _sfUseCameraBeacon.copyToBin(pMem);
    }
}

void TextureTransformChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
    {
        editSField(UseCameraBeaconFieldMask);
        _sfUseCameraBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureTransformChunkTransitPtr TextureTransformChunkBase::createLocal(BitVector bFlags)
{
    TextureTransformChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextureTransformChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextureTransformChunkTransitPtr TextureTransformChunkBase::createDependent(BitVector bFlags)
{
    TextureTransformChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextureTransformChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextureTransformChunkTransitPtr TextureTransformChunkBase::create(void)
{
    TextureTransformChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextureTransformChunk>(tmpPtr);
    }

    return fc;
}

TextureTransformChunk *TextureTransformChunkBase::createEmptyLocal(BitVector bFlags)
{
    TextureTransformChunk *returnValue;

    newPtr<TextureTransformChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextureTransformChunk *TextureTransformChunkBase::createEmpty(void)
{
    TextureTransformChunk *returnValue;

    newPtr<TextureTransformChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextureTransformChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextureTransformChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureTransformChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureTransformChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextureTransformChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureTransformChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureTransformChunkBase::shallowCopy(void) const
{
    TextureTransformChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextureTransformChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextureTransformChunkBase::TextureTransformChunkBase(void) :
    Inherited(),
    _sfUseCameraBeacon        (bool(false))
{
}

TextureTransformChunkBase::TextureTransformChunkBase(const TextureTransformChunkBase &source) :
    Inherited(source),
    _sfUseCameraBeacon        (source._sfUseCameraBeacon        )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureTransformChunkBase::~TextureTransformChunkBase(void)
{
}


GetFieldHandlePtr TextureTransformChunkBase::getHandleUseCameraBeacon (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseCameraBeacon,
             this->getType().getFieldDesc(UseCameraBeaconFieldId),
             const_cast<TextureTransformChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureTransformChunkBase::editHandleUseCameraBeacon(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseCameraBeacon,
             this->getType().getFieldDesc(UseCameraBeaconFieldId),
             this));


    editSField(UseCameraBeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureTransformChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureTransformChunk *pThis = static_cast<TextureTransformChunk *>(this);

    pThis->execSync(static_cast<TextureTransformChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextureTransformChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextureTransformChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureTransformChunk *>(pRefAspect),
                  dynamic_cast<const TextureTransformChunk *>(this));

    return returnValue;
}
#endif

void TextureTransformChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
