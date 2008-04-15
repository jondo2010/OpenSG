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
 **     class GradientBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRADIENTBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGradientBackgroundBase.h"
#include "OSGGradientBackground.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GradientBackground
    \ingroup GrpSystemWindowBackgrounds

    A background showing a vertical color gradient, see
    \ref PageSystemWindowBackgroundGradient.

    The colors (_mfColor) and positions (_mfPosition) correspond to each other, so
    both have to have the same number of elements. The addColor() method should
    be used for defining the gradient, as it ensures that constraint.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color3f         GradientBackgroundBase::_mfColor
    The colors of the gradient.
*/

/*! \var Real32          GradientBackgroundBase::_mfPosition
    The positions of the gradient.
*/


void GradientBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFColor3f::Description(
        MFColor3f::getClassType(),
        "color",
        "The colors of the gradient.\n",
        ColorFieldId, ColorFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GradientBackgroundBase::editHandleColor),
        static_cast<FieldGetMethodSig >(&GradientBackgroundBase::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "position",
        "The positions of the gradient.\n",
        PositionFieldId, PositionFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GradientBackgroundBase::editHandlePosition),
        static_cast<FieldGetMethodSig >(&GradientBackgroundBase::getHandlePosition));

    oType.addInitialDesc(pDesc);
}


GradientBackgroundBase::TypeObject GradientBackgroundBase::_type(
    GradientBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GradientBackgroundBase::createEmptyLocal,
    GradientBackground::initMethod,
    GradientBackground::exitMethod,
    (InitalInsertDescFunc) &GradientBackgroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GradientBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"multi\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background showing a vertical color gradient, see\n"
    "\\ref PageSystemWindowBackgroundGradient.\n"
    "\n"
    "The colors (_mfColor) and positions (_mfPosition) correspond to each other, so\n"
    "both have to have the same number of elements. The addColor() method should\n"
    "be used for defining the gradient, as it ensures that constraint.\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tThe colors of the gradient.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tThe positions of the gradient.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background showing a vertical color gradient, see\n"
    "\\ref PageSystemWindowBackgroundGradient.\n"
    "\n"
    "The colors (_mfColor) and positions (_mfPosition) correspond to each other, so\n"
    "both have to have the same number of elements. The addColor() method should\n"
    "be used for defining the gradient, as it ensures that constraint.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GradientBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &GradientBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 GradientBackgroundBase::getContainerSize(void) const
{
    return sizeof(GradientBackground);
}

/*------------------------- decorator get ------------------------------*/


MFColor3f *GradientBackgroundBase::editMFColor(void)
{
    editMField(ColorFieldMask, _mfColor);

    return &_mfColor;
}

const MFColor3f *GradientBackgroundBase::getMFColor(void) const
{
    return &_mfColor;
}

#ifdef OSG_1_GET_COMPAT
MFColor3f           *GradientBackgroundBase::getMFColor          (void)
{
    return this->editMFColor          ();
}
#endif

MFReal32 *GradientBackgroundBase::editMFPosition(void)
{
    editMField(PositionFieldMask, _mfPosition);

    return &_mfPosition;
}

const MFReal32 *GradientBackgroundBase::getMFPosition(void) const
{
    return &_mfPosition;
}

#ifdef OSG_1_GET_COMPAT
MFReal32            *GradientBackgroundBase::getMFPosition       (void)
{
    return this->editMFPosition       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 GradientBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _mfColor.getBinSize();
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _mfPosition.getBinSize();
    }

    return returnValue;
}

void GradientBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _mfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _mfPosition.copyToBin(pMem);
    }
}

void GradientBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _mfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _mfPosition.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GradientBackgroundTransitPtr GradientBackgroundBase::create(void)
{
    GradientBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GradientBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GradientBackgroundTransitPtr GradientBackgroundBase::createLocal(BitVector bFlags)
{
    GradientBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GradientBackground>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GradientBackgroundPtr GradientBackgroundBase::createEmpty(void)
{
    GradientBackgroundPtr returnValue;

    newPtr<GradientBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

GradientBackgroundPtr GradientBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    GradientBackgroundPtr returnValue;

    newPtr<GradientBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GradientBackgroundBase::shallowCopy(void) const
{
    GradientBackgroundPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const GradientBackground *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr GradientBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GradientBackgroundPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GradientBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GradientBackgroundBase::GradientBackgroundBase(void) :
    Inherited(),
    _mfColor                  (),
    _mfPosition               ()
{
}

GradientBackgroundBase::GradientBackgroundBase(const GradientBackgroundBase &source) :
    Inherited(source),
    _mfColor                  (source._mfColor                  ),
    _mfPosition               (source._mfPosition               )
{
}


/*-------------------------- destructors ----------------------------------*/

GradientBackgroundBase::~GradientBackgroundBase(void)
{
}


GetFieldHandlePtr GradientBackgroundBase::getHandleColor           (void) const
{
    MFColor3f::GetHandlePtr returnValue(
        new  MFColor3f::GetHandle(
             &_mfColor, 
             this->getType().getFieldDesc(ColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr GradientBackgroundBase::editHandleColor          (void)
{
    MFColor3f::EditHandlePtr returnValue(
        new  MFColor3f::EditHandle(
             &_mfColor, 
             this->getType().getFieldDesc(ColorFieldId)));

    editMField(ColorFieldMask, _mfColor);

    return returnValue;
}

GetFieldHandlePtr GradientBackgroundBase::getHandlePosition        (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfPosition, 
             this->getType().getFieldDesc(PositionFieldId)));

    return returnValue;
}

EditFieldHandlePtr GradientBackgroundBase::editHandlePosition       (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfPosition, 
             this->getType().getFieldDesc(PositionFieldId)));

    editMField(PositionFieldMask, _mfPosition);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GradientBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GradientBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GradientBackgroundBase::createAspectCopy(void) const
{
    GradientBackgroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GradientBackground *>(this));

    return returnValue;
}
#endif

void GradientBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfColor.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPosition.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GradientBackgroundPtr>::_type("GradientBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GradientBackgroundPtr)


OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           GradientBackgroundPtr, 
                           0);

OSG_END_NAMESPACE
