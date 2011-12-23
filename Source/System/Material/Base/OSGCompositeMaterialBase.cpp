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
 **     class CompositeMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGCompositeMaterialBase.h"
#include "OSGCompositeMaterial.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CompositeMaterial
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CompositeMaterial *, nsOSG>::_type(
    "CompositeMaterialPtr", 
    "MaterialPtr", 
    CompositeMaterial::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CompositeMaterial *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CompositeMaterial *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CompositeMaterial *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CompositeMaterialBase::classDescInserter(TypeObject &oType)
{
}


CompositeMaterialBase::TypeObject CompositeMaterialBase::_type(
    CompositeMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    CompositeMaterial::initMethod,
    CompositeMaterial::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CompositeMaterial::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"CompositeMaterial\"\n"
    "   parent=\"Material\"\n"
    "   library=\"System\"\n"
    "   structure=\"abstract\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemMaterial\"\n"
    "   >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CompositeMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &CompositeMaterialBase::getType(void) const
{
    return _type;
}

UInt32 CompositeMaterialBase::getContainerSize(void) const
{
    return sizeof(CompositeMaterial);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT CompositeMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void CompositeMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void CompositeMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

CompositeMaterialBase::CompositeMaterialBase(void) :
    Inherited()
{
}

CompositeMaterialBase::CompositeMaterialBase(const CompositeMaterialBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

CompositeMaterialBase::~CompositeMaterialBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void CompositeMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CompositeMaterial *pThis = static_cast<CompositeMaterial *>(this);

    pThis->execSync(static_cast<CompositeMaterial *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void CompositeMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
