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
 **     class MatrixCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATRIXCAMERADECORATORINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGMatrixCameraDecoratorBase.h"
#include "OSGMatrixCameraDecorator.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MatrixCameraDecorator
    \ingroup GrpSystemWindowCameraDecorators

    The OSG::MatrixCameraDecorator for modifying the camera matrices by 
    matrices, see \ref
    PageSystemWindowCameraDecoratorsMatrix for a description.

    The matrices to use are defined by the _sf Fields. The size of the full
    image is defined by the _sfFullWidth and
    _sfFullHeight Fields.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPreViewing
    The matrix to multiply to the right of the viewing matrix, i.e. 
    applied before the viewing matrix.
*/

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPostViewing
    The matrix to multiply to the left of the viewing matrix, i.e. 
    applied after the viewing matrix.
*/

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPreProjectionTranslation
    The matrix to multiply to the right of the projectionTranslation matrix, i.e. 
    applied before the projectionTranslation matrix.
*/

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPostProjectionTranslation
    The matrix to multiply to the left of the projectionTranslation matrix, i.e. 
    applied before the projectionTranslation matrix.
*/

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPreProjection
    The matrix to multiply to the right of the projection matrix, i.e. 
    applied before the projection matrix.
*/

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPostProjection
    The matrix to multiply to the left of the projection matrix, i.e. 
    applied before the projection matrix.
*/


void MatrixCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFMatrix *(MatrixCameraDecoratorBase::*GetSFPreViewingF)(void) const;

    GetSFPreViewingF GetSFPreViewing = &MatrixCameraDecoratorBase::getSFPreViewing;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "preViewing",
        "The matrix to multiply to the right of the viewing matrix, i.e. \n"
        "applied before the viewing matrix.\n",
        PreViewingFieldId, PreViewingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraDecoratorBase::editSFPreViewing),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPreViewing));
#else
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraDecoratorBase::getSFPreViewing));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFMatrix *(MatrixCameraDecoratorBase::*GetSFPostViewingF)(void) const;

    GetSFPostViewingF GetSFPostViewing = &MatrixCameraDecoratorBase::getSFPostViewing;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "postViewing",
        "The matrix to multiply to the left of the viewing matrix, i.e. \n"
        "applied after the viewing matrix.\n",
        PostViewingFieldId, PostViewingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraDecoratorBase::editSFPostViewing),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPostViewing));
#else
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraDecoratorBase::getSFPostViewing));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFMatrix *(MatrixCameraDecoratorBase::*GetSFPreProjectionTranslationF)(void) const;

    GetSFPreProjectionTranslationF GetSFPreProjectionTranslation = &MatrixCameraDecoratorBase::getSFPreProjectionTranslation;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "preProjectionTranslation",
        "The matrix to multiply to the right of the projectionTranslation matrix, i.e. \n"
        "applied before the projectionTranslation matrix.\n",
        PreProjectionTranslationFieldId, PreProjectionTranslationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraDecoratorBase::editSFPreProjectionTranslation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPreProjectionTranslation));
#else
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraDecoratorBase::getSFPreProjectionTranslation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFMatrix *(MatrixCameraDecoratorBase::*GetSFPostProjectionTranslationF)(void) const;

    GetSFPostProjectionTranslationF GetSFPostProjectionTranslation = &MatrixCameraDecoratorBase::getSFPostProjectionTranslation;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "postProjectionTranslation",
        "The matrix to multiply to the left of the projectionTranslation matrix, i.e. \n"
        "applied before the projectionTranslation matrix.\n",
        PostProjectionTranslationFieldId, PostProjectionTranslationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraDecoratorBase::editSFPostProjectionTranslation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPostProjectionTranslation));
#else
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraDecoratorBase::getSFPostProjectionTranslation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFMatrix *(MatrixCameraDecoratorBase::*GetSFPreProjectionF)(void) const;

    GetSFPreProjectionF GetSFPreProjection = &MatrixCameraDecoratorBase::getSFPreProjection;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "preProjection",
        "The matrix to multiply to the right of the projection matrix, i.e. \n"
        "applied before the projection matrix.\n",
        PreProjectionFieldId, PreProjectionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraDecoratorBase::editSFPreProjection),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPreProjection));
#else
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraDecoratorBase::getSFPreProjection));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFMatrix *(MatrixCameraDecoratorBase::*GetSFPostProjectionF)(void) const;

    GetSFPostProjectionF GetSFPostProjection = &MatrixCameraDecoratorBase::getSFPostProjection;
#endif

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "postProjection",
        "The matrix to multiply to the left of the projection matrix, i.e. \n"
        "applied before the projection matrix.\n",
        PostProjectionFieldId, PostProjectionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraDecoratorBase::editSFPostProjection),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPostProjection));
#else
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraDecoratorBase::getSFPostProjection));
#endif

    oType.addInitialDesc(pDesc);
}


MatrixCameraDecoratorBase::TypeObject MatrixCameraDecoratorBase::_type(true,
    MatrixCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MatrixCameraDecoratorBase::createEmpty,
    MatrixCameraDecorator::initMethod,
    (InitalInsertDescFunc) &MatrixCameraDecoratorBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MatrixCameraDecorator\"\n"
    "\tparent=\"CameraDecorator\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::MatrixCameraDecorator for modifying the camera matrices by \n"
    "matrices, see \\ref\n"
    "PageSystemWindowCameraDecoratorsMatrix for a description.\n"
    "\n"
    "The matrices to use are defined by the _sf Fields. The size of the full\n"
    "image is defined by the _sfFullWidth and\n"
    "_sfFullHeight Fields.\n"
    "\t<Field\n"
    "\t\tname=\"preViewing\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe matrix to multiply to the right of the viewing matrix, i.e. \n"
    "        applied before the viewing matrix.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"postViewing\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe matrix to multiply to the left of the viewing matrix, i.e. \n"
    "        applied after the viewing matrix.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"preProjectionTranslation\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe matrix to multiply to the right of the projectionTranslation matrix, i.e. \n"
    "        applied before the projectionTranslation matrix.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"postProjectionTranslation\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe matrix to multiply to the left of the projectionTranslation matrix, i.e. \n"
    "        applied before the projectionTranslation matrix.\n"
    "\t</Field>\n"
    "    <Field\n"
    "\t\tname=\"preProjection\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe matrix to multiply to the right of the projection matrix, i.e. \n"
    "        applied before the projection matrix.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"postProjection\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe matrix to multiply to the left of the projection matrix, i.e. \n"
    "        applied before the projection matrix.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::MatrixCameraDecorator for modifying the camera matrices by \n"
    "matrices, see \\ref\n"
    "PageSystemWindowCameraDecoratorsMatrix for a description.\n"
    "\n"
    "The matrices to use are defined by the _sf Fields. The size of the full\n"
    "image is defined by the _sfFullWidth and\n"
    "_sfFullHeight Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MatrixCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &MatrixCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 MatrixCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(MatrixCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *MatrixCameraDecoratorBase::editSFPreViewing(void)
{
    editSField(PreViewingFieldMask);

    return &_sfPreViewing;
}

const SFMatrix *MatrixCameraDecoratorBase::getSFPreViewing(void) const
{
    return &_sfPreViewing;
}

#ifdef OSG_1_COMPAT
SFMatrix            *MatrixCameraDecoratorBase::getSFPreViewing     (void)
{
    return this->editSFPreViewing     ();
}
#endif

SFMatrix *MatrixCameraDecoratorBase::editSFPostViewing(void)
{
    editSField(PostViewingFieldMask);

    return &_sfPostViewing;
}

const SFMatrix *MatrixCameraDecoratorBase::getSFPostViewing(void) const
{
    return &_sfPostViewing;
}

#ifdef OSG_1_COMPAT
SFMatrix            *MatrixCameraDecoratorBase::getSFPostViewing    (void)
{
    return this->editSFPostViewing    ();
}
#endif

SFMatrix *MatrixCameraDecoratorBase::editSFPreProjectionTranslation(void)
{
    editSField(PreProjectionTranslationFieldMask);

    return &_sfPreProjectionTranslation;
}

const SFMatrix *MatrixCameraDecoratorBase::getSFPreProjectionTranslation(void) const
{
    return &_sfPreProjectionTranslation;
}

#ifdef OSG_1_COMPAT
SFMatrix            *MatrixCameraDecoratorBase::getSFPreProjectionTranslation(void)
{
    return this->editSFPreProjectionTranslation();
}
#endif

SFMatrix *MatrixCameraDecoratorBase::editSFPostProjectionTranslation(void)
{
    editSField(PostProjectionTranslationFieldMask);

    return &_sfPostProjectionTranslation;
}

const SFMatrix *MatrixCameraDecoratorBase::getSFPostProjectionTranslation(void) const
{
    return &_sfPostProjectionTranslation;
}

#ifdef OSG_1_COMPAT
SFMatrix            *MatrixCameraDecoratorBase::getSFPostProjectionTranslation(void)
{
    return this->editSFPostProjectionTranslation();
}
#endif

SFMatrix *MatrixCameraDecoratorBase::editSFPreProjection(void)
{
    editSField(PreProjectionFieldMask);

    return &_sfPreProjection;
}

const SFMatrix *MatrixCameraDecoratorBase::getSFPreProjection(void) const
{
    return &_sfPreProjection;
}

#ifdef OSG_1_COMPAT
SFMatrix            *MatrixCameraDecoratorBase::getSFPreProjection  (void)
{
    return this->editSFPreProjection  ();
}
#endif

SFMatrix *MatrixCameraDecoratorBase::editSFPostProjection(void)
{
    editSField(PostProjectionFieldMask);

    return &_sfPostProjection;
}

const SFMatrix *MatrixCameraDecoratorBase::getSFPostProjection(void) const
{
    return &_sfPostProjection;
}

#ifdef OSG_1_COMPAT
SFMatrix            *MatrixCameraDecoratorBase::getSFPostProjection (void)
{
    return this->editSFPostProjection ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 MatrixCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
    {
        returnValue += _sfPreViewing.getBinSize();
    }
    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
    {
        returnValue += _sfPostViewing.getBinSize();
    }
    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
    {
        returnValue += _sfPreProjectionTranslation.getBinSize();
    }
    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
    {
        returnValue += _sfPostProjectionTranslation.getBinSize();
    }
    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
    {
        returnValue += _sfPreProjection.getBinSize();
    }
    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
    {
        returnValue += _sfPostProjection.getBinSize();
    }

    return returnValue;
}

void MatrixCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
    {
        _sfPreViewing.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
    {
        _sfPostViewing.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
    {
        _sfPreProjectionTranslation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
    {
        _sfPostProjectionTranslation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
    {
        _sfPreProjection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
    {
        _sfPostProjection.copyToBin(pMem);
    }
}

void MatrixCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
    {
        _sfPreViewing.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
    {
        _sfPostViewing.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
    {
        _sfPreProjectionTranslation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
    {
        _sfPostProjectionTranslation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
    {
        _sfPreProjection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
    {
        _sfPostProjection.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
MatrixCameraDecoratorPtr MatrixCameraDecoratorBase::createEmpty(void)
{
    MatrixCameraDecoratorPtr returnValue;

    newPtr<MatrixCameraDecorator>(returnValue);

    return returnValue;
}

FieldContainerPtr MatrixCameraDecoratorBase::shallowCopy(void) const
{
    MatrixCameraDecoratorPtr returnValue;

    newPtr(returnValue, dynamic_cast<const MatrixCameraDecorator *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MatrixCameraDecoratorBase::MatrixCameraDecoratorBase(void) :
    Inherited(),
    _sfPreViewing             (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)),
    _sfPostViewing            (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)),
    _sfPreProjectionTranslation(Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)),
    _sfPostProjectionTranslation(Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)),
    _sfPreProjection          (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)),
    _sfPostProjection         (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1))
{
}

MatrixCameraDecoratorBase::MatrixCameraDecoratorBase(const MatrixCameraDecoratorBase &source) :
    Inherited(source),
    _sfPreViewing             (source._sfPreViewing             ),
    _sfPostViewing            (source._sfPostViewing            ),
    _sfPreProjectionTranslation(source._sfPreProjectionTranslation),
    _sfPostProjectionTranslation(source._sfPostProjectionTranslation),
    _sfPreProjection          (source._sfPreProjection          ),
    _sfPostProjection         (source._sfPostProjection         )
{
}

/*-------------------------- destructors ----------------------------------*/

MatrixCameraDecoratorBase::~MatrixCameraDecoratorBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void MatrixCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<MatrixCameraDecoratorBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void MatrixCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MatrixCameraDecoratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void MatrixCameraDecoratorBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MatrixCameraDecoratorBase::createAspectCopy(void) const
{
    MatrixCameraDecoratorPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MatrixCameraDecorator *>(this));

    return returnValue;
}
#endif

void MatrixCameraDecoratorBase::resolveLinks(void)
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
DataType FieldTraits<MatrixCameraDecoratorPtr>::_type("MatrixCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MatrixCameraDecoratorPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, MatrixCameraDecoratorPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, MatrixCameraDecoratorPtr);


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
    static Char8 cvsid_hpp       [] = OSGMATRIXCAMERADECORATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMATRIXCAMERADECORATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMATRIXCAMERADECORATORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
