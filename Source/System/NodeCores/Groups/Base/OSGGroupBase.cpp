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
 **     class Group!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGGroupBase.h"
#include "OSGGroup.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Group
    Group is the simplest form of a NodeCore. A group
    carries no predefined data and most actions will only traverse the
    children list. So usually the group does nothing.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<Group *, nsOSG>::_type(
    "GroupPtr", 
    "NodeCorePtr", 
    Group::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(Group *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Group *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Group *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GroupBase::classDescInserter(TypeObject &oType)
{
}


GroupBase::TypeObject GroupBase::_type(
    GroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&GroupBase::createEmptyLocal),
    Group::initMethod,
    Group::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Group::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"Group\"\n"
    "   parent=\"NodeCore\"\n"
    "   library=\"System\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpSystemNodeCoreGroups\"\n"
    "   >\n"
    "\n"
    "  Group is the simplest form of a NodeCore. A group\n"
    "  carries no predefined data and most actions will only traverse the\n"
    "  children list. So usually the group does nothing.\n"
    "</FieldContainer>\n",
    "Group is the simplest form of a NodeCore. A group\n"
    "carries no predefined data and most actions will only traverse the\n"
    "children list. So usually the group does nothing.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &GroupBase::getType(void) const
{
    return _type;
}

UInt32 GroupBase::getContainerSize(void) const
{
    return sizeof(Group);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT GroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GroupTransitPtr GroupBase::createLocal(BitVector bFlags)
{
    GroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Group>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GroupTransitPtr GroupBase::createDependent(BitVector bFlags)
{
    GroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Group>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GroupTransitPtr GroupBase::create(void)
{
    GroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Group>(tmpPtr);
    }

    return fc;
}

Group *GroupBase::createEmptyLocal(BitVector bFlags)
{
    Group *returnValue;

    newPtr<Group>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Group *GroupBase::createEmpty(void)
{
    Group *returnValue;

    newPtr<Group>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Group *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Group *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GroupBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Group *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Group *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GroupBase::shallowCopy(void) const
{
    Group *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Group *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GroupBase::GroupBase(void) :
    Inherited()
{
}

GroupBase::GroupBase(const GroupBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GroupBase::~GroupBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Group *pThis = static_cast<Group *>(this);

    pThis->execSync(static_cast<Group *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GroupBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Group *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Group *>(pRefAspect),
                  dynamic_cast<const Group *>(this));

    return returnValue;
}
#endif

void GroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
