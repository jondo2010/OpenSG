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
 **     class StateChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGStateChunkBase.h"
#include "OSGStateChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StateChunk
    See \ref PageSystemState for the conceptual background.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            StateChunkBase::_sfIgnore
    Enables / disables a chunk
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StateChunk *>::_type("StateChunkPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StateChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StateChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           StateChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StateChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ignore",
        "Enables / disables a chunk\n",
        IgnoreFieldId, IgnoreFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StateChunk::editHandleIgnore),
        static_cast<FieldGetMethodSig >(&StateChunk::getHandleIgnore));

    oType.addInitialDesc(pDesc);
}


StateChunkBase::TypeObject StateChunkBase::_type(
    StateChunkBase::getClassname(),
    Inherited::getClassname(),
    "StateChunk",
    0,
    NULL,
    StateChunk::initMethod,
    StateChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StateChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"StateChunk\"\n"
    "   parent=\"Attachment\"\n"
    "   library=\"System\"\n"
    "   structure=\"abstract\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemState\"\n"
    "   >\n"
    "  See \\ref PageSystemState for the conceptual background.\n"
    "  <Field\n"
    "\t name=\"ignore\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tEnables / disables a chunk\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemState for the conceptual background.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StateChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &StateChunkBase::getType(void) const
{
    return _type;
}

UInt32 StateChunkBase::getContainerSize(void) const
{
    return sizeof(StateChunk);
}

/*------------------------- decorator get ------------------------------*/


SFBool *StateChunkBase::editSFIgnore(void)
{
    editSField(IgnoreFieldMask);

    return &_sfIgnore;
}

const SFBool *StateChunkBase::getSFIgnore(void) const
{
    return &_sfIgnore;
}






/*------------------------------ access -----------------------------------*/

UInt32 StateChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IgnoreFieldMask & whichField))
    {
        returnValue += _sfIgnore.getBinSize();
    }

    return returnValue;
}

void StateChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IgnoreFieldMask & whichField))
    {
        _sfIgnore.copyToBin(pMem);
    }
}

void StateChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IgnoreFieldMask & whichField))
    {
        editSField(IgnoreFieldMask);
        _sfIgnore.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

StateChunkBase::StateChunkBase(void) :
    Inherited(),
    _sfIgnore                 (bool(false))
{
}

StateChunkBase::StateChunkBase(const StateChunkBase &source) :
    Inherited(source),
    _sfIgnore                 (source._sfIgnore                 )
{
}


/*-------------------------- destructors ----------------------------------*/

StateChunkBase::~StateChunkBase(void)
{
}


GetFieldHandlePtr StateChunkBase::getHandleIgnore          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIgnore,
             this->getType().getFieldDesc(IgnoreFieldId),
             const_cast<StateChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StateChunkBase::editHandleIgnore         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIgnore,
             this->getType().getFieldDesc(IgnoreFieldId),
             this));


    editSField(IgnoreFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StateChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StateChunk *pThis = static_cast<StateChunk *>(this);

    pThis->execSync(static_cast<StateChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void StateChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
