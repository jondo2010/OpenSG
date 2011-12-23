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
 **     class AnimDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGAnimDataSourceBase.h"
#include "OSGAnimDataSource.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimDataSource
    Base for animation data sources.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<AnimDataSource *, nsOSG>::_type(
    "AnimDataSourcePtr", 
    "AttachmentContainerPtr", 
    AnimDataSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(AnimDataSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimDataSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimDataSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimDataSourceBase::classDescInserter(TypeObject &oType)
{
}


AnimDataSourceBase::TypeObject AnimDataSourceBase::_type(
    AnimDataSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    AnimDataSource::initMethod,
    AnimDataSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimDataSource::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AnimDataSource\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "  Base for animation data sources.\n"
    "</FieldContainer>\n",
    "Base for animation data sources.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimDataSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimDataSourceBase::getType(void) const
{
    return _type;
}

UInt32 AnimDataSourceBase::getContainerSize(void) const
{
    return sizeof(AnimDataSource);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT AnimDataSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void AnimDataSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void AnimDataSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

AnimDataSourceBase::AnimDataSourceBase(void) :
    Inherited()
{
}

AnimDataSourceBase::AnimDataSourceBase(const AnimDataSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

AnimDataSourceBase::~AnimDataSourceBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void AnimDataSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimDataSource *pThis = static_cast<AnimDataSource *>(this);

    pThis->execSync(static_cast<AnimDataSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void AnimDataSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
