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
 **     class LineChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELINECHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // Smooth default header


#include "OSGLineChunkBase.h"
#include "OSGLineChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LineChunk
    \ingroup GrpSystemState

    See \ref PageSystemLineChunk for a description.

    The line chunk contains the parameters that are specific to lines.

    The parameters of the following functions are wrapped here: glLineWidth
    (OSG::LineChunk::_sfWidth), glLineStipple (OSG::LineChunk::_sfStippleRepeat,
    OSG::LineChunk::_sfStipplePattern), glEnable(GL_LINE_SMOOTH)
    (OSG::LineChunk::_sfSmooth).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          LineChunkBase::_sfWidth
    The line's width, in pixels.
*/

/*! \var Int32           LineChunkBase::_sfStippleRepeat
    Repetition factor for stippling.
*/

/*! \var UInt16          LineChunkBase::_sfStipplePattern
    Defines the stipple pattern. 1 bits are drawn, 0 bits are ignored, 
    starting with the most significant bit.
*/

/*! \var bool            LineChunkBase::_sfSmooth
    Defines if line antialiasing is used.
*/


void LineChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "width",
        "The line's width, in pixels.\n",
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LineChunkBase::editHandleWidth),
        static_cast<FieldGetMethodSig >(&LineChunkBase::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "stippleRepeat",
        "Repetition factor for stippling.\n",
        StippleRepeatFieldId, StippleRepeatFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LineChunkBase::editHandleStippleRepeat),
        static_cast<FieldGetMethodSig >(&LineChunkBase::getHandleStippleRepeat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "stipplePattern",
        "Defines the stipple pattern. 1 bits are drawn, 0 bits are ignored, \n"
        "starting with the most significant bit.\n",
        StipplePatternFieldId, StipplePatternFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LineChunkBase::editHandleStipplePattern),
        static_cast<FieldGetMethodSig >(&LineChunkBase::getHandleStipplePattern));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "smooth",
        "Defines if line antialiasing is used.\n",
        SmoothFieldId, SmoothFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LineChunkBase::editHandleSmooth),
        static_cast<FieldGetMethodSig >(&LineChunkBase::getHandleSmooth));

    oType.addInitialDesc(pDesc);
}


LineChunkBase::TypeObject LineChunkBase::_type(
    LineChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &LineChunkBase::createEmpty,
    LineChunk::initMethod,
    LineChunk::exitMethod,
    (InitalInsertDescFunc) &LineChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"LineChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemLineChunk for a description.\n"
    "\n"
    "The line chunk contains the parameters that are specific to lines.\n"
    "\n"
    "The parameters of the following functions are wrapped here: glLineWidth\n"
    "(OSG::LineChunk::_sfWidth), glLineStipple (OSG::LineChunk::_sfStippleRepeat,\n"
    "OSG::LineChunk::_sfStipplePattern), glEnable(GL_LINE_SMOOTH)\n"
    "(OSG::LineChunk::_sfSmooth).\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The line's width, in pixels.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stippleRepeat\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Repetition factor for stippling.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stipplePattern\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0xffff\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines the stipple pattern. 1 bits are drawn, 0 bits are ignored, \n"
    "        starting with the most significant bit.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"smooth\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines if line antialiasing is used.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemLineChunk for a description.\n"
    "\n"
    "The line chunk contains the parameters that are specific to lines.\n"
    "\n"
    "The parameters of the following functions are wrapped here: glLineWidth\n"
    "(OSG::LineChunk::_sfWidth), glLineStipple (OSG::LineChunk::_sfStippleRepeat,\n"
    "OSG::LineChunk::_sfStipplePattern), glEnable(GL_LINE_SMOOTH)\n"
    "(OSG::LineChunk::_sfSmooth).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LineChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &LineChunkBase::getType(void) const
{
    return _type;
}

UInt32 LineChunkBase::getContainerSize(void) const
{
    return sizeof(LineChunk);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *LineChunkBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFReal32 *LineChunkBase::getSFWidth(void) const
{
    return &_sfWidth;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *LineChunkBase::getSFWidth          (void)
{
    return this->editSFWidth          ();
}
#endif

SFInt32 *LineChunkBase::editSFStippleRepeat(void)
{
    editSField(StippleRepeatFieldMask);

    return &_sfStippleRepeat;
}

const SFInt32 *LineChunkBase::getSFStippleRepeat(void) const
{
    return &_sfStippleRepeat;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *LineChunkBase::getSFStippleRepeat  (void)
{
    return this->editSFStippleRepeat  ();
}
#endif

SFUInt16 *LineChunkBase::editSFStipplePattern(void)
{
    editSField(StipplePatternFieldMask);

    return &_sfStipplePattern;
}

const SFUInt16 *LineChunkBase::getSFStipplePattern(void) const
{
    return &_sfStipplePattern;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *LineChunkBase::getSFStipplePattern (void)
{
    return this->editSFStipplePattern ();
}
#endif

SFBool *LineChunkBase::editSFSmooth(void)
{
    editSField(SmoothFieldMask);

    return &_sfSmooth;
}

const SFBool *LineChunkBase::getSFSmooth(void) const
{
    return &_sfSmooth;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *LineChunkBase::getSFSmooth         (void)
{
    return this->editSFSmooth         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 LineChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (StippleRepeatFieldMask & whichField))
    {
        returnValue += _sfStippleRepeat.getBinSize();
    }
    if(FieldBits::NoField != (StipplePatternFieldMask & whichField))
    {
        returnValue += _sfStipplePattern.getBinSize();
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        returnValue += _sfSmooth.getBinSize();
    }

    return returnValue;
}

void LineChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StippleRepeatFieldMask & whichField))
    {
        _sfStippleRepeat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StipplePatternFieldMask & whichField))
    {
        _sfStipplePattern.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyToBin(pMem);
    }
}

void LineChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StippleRepeatFieldMask & whichField))
    {
        _sfStippleRepeat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StipplePatternFieldMask & whichField))
    {
        _sfStipplePattern.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LineChunkPtr LineChunkBase::create(void)
{
    LineChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<LineChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
LineChunkPtr LineChunkBase::createEmpty(void)
{
    LineChunkPtr returnValue;

    newPtr<LineChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr LineChunkBase::shallowCopy(void) const
{
    LineChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const LineChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

LineChunkBase::LineChunkBase(void) :
    Inherited(),
    _sfWidth                  (Real32(1)),
    _sfStippleRepeat          (Int32(1)),
    _sfStipplePattern         (UInt16(0xffff)),
    _sfSmooth                 (bool(GL_FALSE))
{
}

LineChunkBase::LineChunkBase(const LineChunkBase &source) :
    Inherited(source),
    _sfWidth                  (source._sfWidth                  ),
    _sfStippleRepeat          (source._sfStippleRepeat          ),
    _sfStipplePattern         (source._sfStipplePattern         ),
    _sfSmooth                 (source._sfSmooth                 )
{
}


/*-------------------------- destructors ----------------------------------*/

LineChunkBase::~LineChunkBase(void)
{
}


GetFieldHandlePtr LineChunkBase::getHandleWidth           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr LineChunkBase::editHandleWidth          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr LineChunkBase::getHandleStippleRepeat   (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfStippleRepeat, 
             this->getType().getFieldDesc(StippleRepeatFieldId)));

    return returnValue;
}

EditFieldHandlePtr LineChunkBase::editHandleStippleRepeat  (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfStippleRepeat, 
             this->getType().getFieldDesc(StippleRepeatFieldId)));

    editSField(StippleRepeatFieldMask);

    return returnValue;
}

GetFieldHandlePtr LineChunkBase::getHandleStipplePattern  (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfStipplePattern, 
             this->getType().getFieldDesc(StipplePatternFieldId)));

    return returnValue;
}

EditFieldHandlePtr LineChunkBase::editHandleStipplePattern (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfStipplePattern, 
             this->getType().getFieldDesc(StipplePatternFieldId)));

    editSField(StipplePatternFieldMask);

    return returnValue;
}

GetFieldHandlePtr LineChunkBase::getHandleSmooth          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfSmooth, 
             this->getType().getFieldDesc(SmoothFieldId)));

    return returnValue;
}

EditFieldHandlePtr LineChunkBase::editHandleSmooth         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfSmooth, 
             this->getType().getFieldDesc(SmoothFieldId)));

    editSField(SmoothFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LineChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<LineChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr LineChunkBase::createAspectCopy(void) const
{
    LineChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LineChunk *>(this));

    return returnValue;
}
#endif

void LineChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<LineChunkPtr>::_type("LineChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(LineChunkPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, LineChunkPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, LineChunkPtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, LineChunkPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, LineChunkPtr, 0);

OSG_END_NAMESPACE
