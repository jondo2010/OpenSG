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
 **     class GeoVectorBufferRefProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGGeoVectorBufferRefPropertyBase.h"
#include "OSGGeoVectorBufferRefProperty.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoVectorBufferRefProperty
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoVectorBufferRefProperty *>::_type("GeoVectorBufferRefPropertyPtr", "GeoVectorBufferPropertyPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoVectorBufferRefProperty *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GeoVectorBufferRefProperty *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GeoVectorBufferRefProperty *,
                           0);

DataType &FieldTraits< GeoVectorBufferRefProperty *, 1 >::getType(void)
{
    return FieldTraits<GeoVectorBufferRefProperty *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      GeoVectorBufferRefProperty *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      GeoVectorBufferRefProperty *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GeoVectorBufferRefPropertyBase::classDescInserter(TypeObject &oType)
{
}


GeoVectorBufferRefPropertyBase::TypeObject GeoVectorBufferRefPropertyBase::_type(
    GeoVectorBufferRefPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GeoVectorBufferRefPropertyBase::createEmptyLocal),
    GeoVectorBufferRefProperty::initMethod,
    GeoVectorBufferRefProperty::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GeoVectorBufferRefProperty::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"GeoVectorBufferRefProperty\"\n"
    "   parent=\"GeoVectorBufferProperty\"\n"
    "   library=\"Drawable\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"both\"\n"
    "   docGroupBase=\"GrpDrawablesGeometry\"\n"
    "   >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoVectorBufferRefPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoVectorBufferRefPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoVectorBufferRefPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoVectorBufferRefProperty);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GeoVectorBufferRefPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GeoVectorBufferRefPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GeoVectorBufferRefPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GeoVectorBufferRefPropertyTransitPtr GeoVectorBufferRefPropertyBase::createLocal(BitVector bFlags)
{
    GeoVectorBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GeoVectorBufferRefProperty>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GeoVectorBufferRefPropertyTransitPtr GeoVectorBufferRefPropertyBase::createDependent(BitVector bFlags)
{
    GeoVectorBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GeoVectorBufferRefProperty>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GeoVectorBufferRefPropertyTransitPtr GeoVectorBufferRefPropertyBase::create(void)
{
    GeoVectorBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GeoVectorBufferRefProperty>(tmpPtr);
    }

    return fc;
}

GeoVectorBufferRefProperty *GeoVectorBufferRefPropertyBase::createEmptyLocal(BitVector bFlags)
{
    GeoVectorBufferRefProperty *returnValue;

    newPtr<GeoVectorBufferRefProperty>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GeoVectorBufferRefProperty *GeoVectorBufferRefPropertyBase::createEmpty(void)
{
    GeoVectorBufferRefProperty *returnValue;

    newPtr<GeoVectorBufferRefProperty>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GeoVectorBufferRefPropertyBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GeoVectorBufferRefProperty *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoVectorBufferRefProperty *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoVectorBufferRefPropertyBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GeoVectorBufferRefProperty *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoVectorBufferRefProperty *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoVectorBufferRefPropertyBase::shallowCopy(void) const
{
    GeoVectorBufferRefProperty *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GeoVectorBufferRefProperty *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GeoVectorBufferRefPropertyBase::GeoVectorBufferRefPropertyBase(void) :
    Inherited()
{
}

GeoVectorBufferRefPropertyBase::GeoVectorBufferRefPropertyBase(const GeoVectorBufferRefPropertyBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoVectorBufferRefPropertyBase::~GeoVectorBufferRefPropertyBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GeoVectorBufferRefPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GeoVectorBufferRefProperty *pThis = static_cast<GeoVectorBufferRefProperty *>(this);

    pThis->execSync(static_cast<GeoVectorBufferRefProperty *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GeoVectorBufferRefPropertyBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GeoVectorBufferRefProperty *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoVectorBufferRefProperty *>(pRefAspect),
                  dynamic_cast<const GeoVectorBufferRefProperty *>(this));

    return returnValue;
}
#endif

void GeoVectorBufferRefPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
