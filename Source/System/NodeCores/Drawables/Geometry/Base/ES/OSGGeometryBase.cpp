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
 **     class Geometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOMETRYINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGGeoIntegralProperty.h> // Types Class
#include <OSGGeoIntegralProperty.h> // Lengths Class
#include <OSGGeoVectorProperty.h> // Properties Class
#include <OSGGeoIntegralProperty.h> // PropIndices Class

#include "OSGGeometryBase.h"
#include "OSGGeometry.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Geometry
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GeoIntegralPropertyPtr GeometryBase::_sfTypes
    The types property contains the primitive's types. Legal values are 
    everything that can be passed to glBegin(). There have to be as many 
    types as lengths.
*/

/*! \var GeoIntegralPropertyPtr GeometryBase::_sfLengths
    The lengths property contains the number of vertices to use for the 
    corresponding primitive. There have to be as many  lengths as types.
*/

/*! \var GeoVectorPropertyPtr GeometryBase::_mfProperties
    The attributes used to render the geometry. The order is based on the 
    the one given in ARB_vertex_program.
*/

/*! \var GeoIntegralPropertyPtr GeometryBase::_mfPropIndices
    The indices property contains the index data. See \ref 
    PageSystemGeoIndexing for a description of the indexing options.
*/

/*! \var Int32           GeometryBase::_sfClassicGLId
    The dlist id for the classic rendering mode, if used.
*/

/*! \var Int32           GeometryBase::_sfAttGLId
    The dlist id for the attribute-based rendering mode, if used.
*/


void GeometryBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGeoIntegralPropertyPtr::Description(
        SFGeoIntegralPropertyPtr::getClassType(),
        "types",
        "The types property contains the primitive's types. Legal values are \n"
        "everything that can be passed to glBegin(). There have to be as many \n"
        "types as lengths.\n",
        TypesFieldId, TypesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeometryBase::editHandleTypes),
        static_cast<FieldGetMethodSig >(&GeometryBase::getHandleTypes));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGeoIntegralPropertyPtr::Description(
        SFGeoIntegralPropertyPtr::getClassType(),
        "lengths",
        "The lengths property contains the number of vertices to use for the \n"
        "corresponding primitive. There have to be as many  lengths as types.\n",
        LengthsFieldId, LengthsFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeometryBase::editHandleLengths),
        static_cast<FieldGetMethodSig >(&GeometryBase::getHandleLengths));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGeoVectorPropertyPtr::Description(
        MFGeoVectorPropertyPtr::getClassType(),
        "properties",
        "The attributes used to render the geometry. The order is based on the \n"
        "the one given in ARB_vertex_program.\n",
        PropertiesFieldId, PropertiesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeometryBase::editHandleProperties),
        static_cast<FieldGetMethodSig >(&GeometryBase::getHandleProperties));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGeoIntegralPropertyPtr::Description(
        MFGeoIntegralPropertyPtr::getClassType(),
        "propIndices",
        "The indices property contains the index data. See \\ref \n"
        "PageSystemGeoIndexing for a description of the indexing options.\n",
        PropIndicesFieldId, PropIndicesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeometryBase::editHandlePropIndices),
        static_cast<FieldGetMethodSig >(&GeometryBase::getHandlePropIndices));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "classicGLId",
        "The dlist id for the classic rendering mode, if used.\n",
        ClassicGLIdFieldId, ClassicGLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&GeometryBase::editHandleClassicGLId),
        static_cast<FieldGetMethodSig >(&GeometryBase::getHandleClassicGLId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "attGLId",
        "The dlist id for the attribute-based rendering mode, if used.\n",
        AttGLIdFieldId, AttGLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&GeometryBase::editHandleAttGLId),
        static_cast<FieldGetMethodSig >(&GeometryBase::getHandleAttGLId));

    oType.addInitialDesc(pDesc);
}


GeometryBase::TypeObject GeometryBase::_type(
    GeometryBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GeometryBase::createEmpty,
    Geometry::initMethod,
    Geometry::exitMethod,
    (InitalInsertDescFunc) &GeometryBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Geometry\"\n"
    "\tparent=\"MaterialDrawable\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"types\"\n"
    "\t\ttype=\"GeoIntegralPropertyPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "\t>\n"
    "        The types property contains the primitive's types. Legal values are \n"
    "        everything that can be passed to glBegin(). There have to be as many \n"
    "        types as lengths.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lengths\"\n"
    "\t\ttype=\"GeoIntegralPropertyPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "\t>\n"
    "        The lengths property contains the number of vertices to use for the \n"
    "        corresponding primitive. There have to be as many  lengths as types.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"properties\"\n"
    "\t\ttype=\"GeoVectorPropertyPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "        checkNilPtr=\"false\"\n"
    "\t>\n"
    "        The attributes used to render the geometry. The order is based on the \n"
    "        the one given in ARB_vertex_program.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"propIndices\"\n"
    "\t\ttype=\"GeoIntegralPropertyPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "        checkNilPtr=\"false\"\n"
    "\t>\n"
    "        The indices property contains the index data. See \\ref \n"
    "        PageSystemGeoIndexing for a description of the indexing options.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"classicGLId\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe dlist id for the classic rendering mode, if used.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"attGLId\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe dlist id for the attribute-based rendering mode, if used.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeometryBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeometryBase::getType(void) const
{
    return _type;
}

UInt32 GeometryBase::getContainerSize(void) const
{
    return sizeof(Geometry);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Geometry::_sfTypes field.
const SFGeoIntegralPropertyPtr *GeometryBase::getSFTypes(void) const
{
    return &_sfTypes;
}

//! Get the Geometry::_sfLengths field.
const SFGeoIntegralPropertyPtr *GeometryBase::getSFLengths(void) const
{
    return &_sfLengths;
}

//! Get the Geometry::_mfProperties field.
const MFGeoVectorPropertyPtr *GeometryBase::getMFProperties(void) const
{
    return &_mfProperties;
}

//! Get the Geometry::_mfPropIndices field.
const MFGeoIntegralPropertyPtr *GeometryBase::getMFPropIndices(void) const
{
    return &_mfPropIndices;
}

SFInt32 *GeometryBase::editSFClassicGLId(void)
{
    editSField(ClassicGLIdFieldMask);

    return &_sfClassicGLId;
}

const SFInt32 *GeometryBase::getSFClassicGLId(void) const
{
    return &_sfClassicGLId;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *GeometryBase::getSFClassicGLId    (void)
{
    return this->editSFClassicGLId    ();
}
#endif

SFInt32 *GeometryBase::editSFAttGLId(void)
{
    editSField(AttGLIdFieldMask);

    return &_sfAttGLId;
}

const SFInt32 *GeometryBase::getSFAttGLId(void) const
{
    return &_sfAttGLId;
}

#ifdef OSG_1_GET_COMPAT
SFInt32             *GeometryBase::getSFAttGLId        (void)
{
    return this->editSFAttGLId        ();
}
#endif



void GeometryBase::pushToProperties(GeoVectorPropertyPtrConstArg value)
{
    editMField(PropertiesFieldMask, _mfProperties);

    addRef(value);

    _mfProperties.push_back(value);

    if(value == NullFC)
        return;

    value->addParent(this, PropertiesFieldMask);
}

void GeometryBase::assignProperties(const MFGeoVectorPropertyPtr &value)
{
    MFGeoVectorPropertyPtr::const_iterator elemIt  =
        value.begin();
    MFGeoVectorPropertyPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<Geometry *>(this)->clearProperties();

    while(elemIt != elemEnd)
    {
        this->pushToProperties(*elemIt);

        ++elemIt;
    }
}

void GeometryBase::insertIntoProperties(UInt32                uiIndex,
                                                   GeoVectorPropertyPtrConstArg value   )
{
    editMField(PropertiesFieldMask, _mfProperties);

    MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfProperties.insert(fieldIt, value);

    if(value == NullFC)
        return;

    value->addParent(this, PropertiesFieldMask);
}

void GeometryBase::replaceInProperties(UInt32                uiIndex,
                                                       GeoVectorPropertyPtrConstArg value   )
{
    if(uiIndex >= _mfProperties.size())
        return;

    editMField(PropertiesFieldMask, _mfProperties);

    addRef(value);

    if(_mfProperties[uiIndex] != NullFC)
    {
        _mfProperties[uiIndex]->subParent(this);
    }

    subRef(_mfProperties[uiIndex]);

    _mfProperties[uiIndex] = value;

    if(value == NullFC)
        return;

    value->addParent(this, PropertiesFieldMask);
}

void GeometryBase::replaceInProperties(GeoVectorPropertyPtrConstArg pOldElem,
                                                        GeoVectorPropertyPtrConstArg pNewElem)
{
    Int32  elemIdx = _mfProperties.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PropertiesFieldMask, _mfProperties);

        MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

        fieldIt += elemIdx;


        if(pOldElem != NullFC)
        {
            pOldElem->subParent(this);
        }

        if(pNewElem != NullFC)
        {
            pNewElem->addParent(this, PropertiesFieldMask);
        }

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void GeometryBase::removeFromProperties(UInt32 uiIndex)
{
    if(uiIndex < _mfProperties.size())
    {
        editMField(PropertiesFieldMask, _mfProperties);

        MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

        fieldIt += uiIndex;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        _mfProperties.erase(fieldIt);
    }
}

void GeometryBase::removeFromProperties(GeoVectorPropertyPtrConstArg value)
{
    Int32 iElemIdx = _mfProperties.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PropertiesFieldMask, _mfProperties);

        MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

        fieldIt += iElemIdx;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        _mfProperties.erase(fieldIt);
    }
}
void GeometryBase::clearProperties(void)
{
    editMField(PropertiesFieldMask, _mfProperties);

    MFGeoVectorPropertyPtr::iterator       fieldIt  = _mfProperties.begin();
    MFGeoVectorPropertyPtr::const_iterator fieldEnd = _mfProperties.end  ();

    while(fieldIt != fieldEnd)
    {
        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfProperties.clear();
}

void GeometryBase::pushToPropIndices(GeoIntegralPropertyPtrConstArg value)
{
    editMField(PropIndicesFieldMask, _mfPropIndices);

    addRef(value);

    _mfPropIndices.push_back(value);

    if(value == NullFC)
        return;

    value->addParent(this, PropIndicesFieldMask);
}

void GeometryBase::assignPropIndices(const MFGeoIntegralPropertyPtr &value)
{
    MFGeoIntegralPropertyPtr::const_iterator elemIt  =
        value.begin();
    MFGeoIntegralPropertyPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<Geometry *>(this)->clearPropIndices();

    while(elemIt != elemEnd)
    {
        this->pushToPropIndices(*elemIt);

        ++elemIt;
    }
}

void GeometryBase::insertIntoPropIndices(UInt32                uiIndex,
                                                   GeoIntegralPropertyPtrConstArg value   )
{
    editMField(PropIndicesFieldMask, _mfPropIndices);

    MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfPropIndices.insert(fieldIt, value);

    if(value == NullFC)
        return;

    value->addParent(this, PropIndicesFieldMask);
}

void GeometryBase::replaceInPropIndices(UInt32                uiIndex,
                                                       GeoIntegralPropertyPtrConstArg value   )
{
    if(uiIndex >= _mfPropIndices.size())
        return;

    editMField(PropIndicesFieldMask, _mfPropIndices);

    addRef(value);

    if(_mfPropIndices[uiIndex] != NullFC)
    {
        _mfPropIndices[uiIndex]->subParent(this);
    }

    subRef(_mfPropIndices[uiIndex]);

    _mfPropIndices[uiIndex] = value;

    if(value == NullFC)
        return;

    value->addParent(this, PropIndicesFieldMask);
}

void GeometryBase::replaceInPropIndices(GeoIntegralPropertyPtrConstArg pOldElem,
                                                        GeoIntegralPropertyPtrConstArg pNewElem)
{
    Int32  elemIdx = _mfPropIndices.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PropIndicesFieldMask, _mfPropIndices);

        MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

        fieldIt += elemIdx;


        if(pOldElem != NullFC)
        {
            pOldElem->subParent(this);
        }

        if(pNewElem != NullFC)
        {
            pNewElem->addParent(this, PropIndicesFieldMask);
        }

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void GeometryBase::removeFromPropIndices(UInt32 uiIndex)
{
    if(uiIndex < _mfPropIndices.size())
    {
        editMField(PropIndicesFieldMask, _mfPropIndices);

        MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

        fieldIt += uiIndex;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        _mfPropIndices.erase(fieldIt);
    }
}

void GeometryBase::removeFromPropIndices(GeoIntegralPropertyPtrConstArg value)
{
    Int32 iElemIdx = _mfPropIndices.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PropIndicesFieldMask, _mfPropIndices);

        MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

        fieldIt += iElemIdx;


        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        _mfPropIndices.erase(fieldIt);
    }
}
void GeometryBase::clearPropIndices(void)
{
    editMField(PropIndicesFieldMask, _mfPropIndices);

    MFGeoIntegralPropertyPtr::iterator       fieldIt  = _mfPropIndices.begin();
    MFGeoIntegralPropertyPtr::const_iterator fieldEnd = _mfPropIndices.end  ();

    while(fieldIt != fieldEnd)
    {
        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(this);
        }

        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfPropIndices.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 GeometryBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
    {
        returnValue += _sfTypes.getBinSize();
    }
    if(FieldBits::NoField != (LengthsFieldMask & whichField))
    {
        returnValue += _sfLengths.getBinSize();
    }
    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
    {
        returnValue += _mfProperties.getBinSize();
    }
    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
    {
        returnValue += _mfPropIndices.getBinSize();
    }
    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
    {
        returnValue += _sfClassicGLId.getBinSize();
    }
    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
    {
        returnValue += _sfAttGLId.getBinSize();
    }

    return returnValue;
}

void GeometryBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
    {
        _sfTypes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LengthsFieldMask & whichField))
    {
        _sfLengths.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
    {
        _mfProperties.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
    {
        _mfPropIndices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
    {
        _sfClassicGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
    {
        _sfAttGLId.copyToBin(pMem);
    }
}

void GeometryBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
    {
        _sfTypes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LengthsFieldMask & whichField))
    {
        _sfLengths.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
    {
        _mfProperties.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
    {
        _mfPropIndices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
    {
        _sfClassicGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
    {
        _sfAttGLId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GeometryPtr GeometryBase::create(void)
{
    GeometryPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<Geometry::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GeometryPtr GeometryBase::createEmpty(void)
{
    GeometryPtr returnValue;

    newPtr<Geometry>(returnValue);

    return returnValue;
}

FieldContainerPtr GeometryBase::shallowCopy(void) const
{
    GeometryPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Geometry *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GeometryBase::GeometryBase(void) :
    Inherited(),
    _sfTypes                  (NullFC),
    _sfLengths                (NullFC),
    _mfProperties             (),
    _mfPropIndices            (),
    _sfClassicGLId            (Int32(0)),
    _sfAttGLId                (Int32(0))
{
}

GeometryBase::GeometryBase(const GeometryBase &source) :
    Inherited(source),
    _sfTypes                  (NullFC),
    _sfLengths                (NullFC),
    _mfProperties             (),
    _mfPropIndices            (),
    _sfClassicGLId            (source._sfClassicGLId            ),
    _sfAttGLId                (source._sfAttGLId                )
{
}


/*-------------------------- destructors ----------------------------------*/

GeometryBase::~GeometryBase(void)
{
}

void GeometryBase::onCreate(const Geometry *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setTypes(source->getTypes());

        this->setLengths(source->getLengths());

        MFGeoVectorPropertyPtr::const_iterator PropertiesIt  =
            source->_mfProperties.begin();
        MFGeoVectorPropertyPtr::const_iterator PropertiesEnd =
            source->_mfProperties.end  ();

        while(PropertiesIt != PropertiesEnd)
        {
            this->pushToProperties(*PropertiesIt);

            ++PropertiesIt;
        }

        MFGeoIntegralPropertyPtr::const_iterator PropIndicesIt  =
            source->_mfPropIndices.begin();
        MFGeoIntegralPropertyPtr::const_iterator PropIndicesEnd =
            source->_mfPropIndices.end  ();

        while(PropIndicesIt != PropIndicesEnd)
        {
            this->pushToPropIndices(*PropIndicesIt);

            ++PropIndicesIt;
        }
    }
}

GetFieldHandlePtr GeometryBase::getHandleTypes           (void) const
{
    SFGeoIntegralPropertyPtr::GetHandlePtr returnValue(
        new  SFGeoIntegralPropertyPtr::GetHandle(
             &_sfTypes, 
             this->getType().getFieldDesc(TypesFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeometryBase::editHandleTypes          (void)
{
    SFGeoIntegralPropertyPtr::EditHandlePtr returnValue(
        new  SFGeoIntegralPropertyPtr::EditHandle(
             &_sfTypes, 
             this->getType().getFieldDesc(TypesFieldId)));

    returnValue->setSetMethod(boost::bind(&Geometry::setTypes, 
                                          static_cast<Geometry *>(this), _1));

    editSField(TypesFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeometryBase::getHandleLengths         (void) const
{
    SFGeoIntegralPropertyPtr::GetHandlePtr returnValue(
        new  SFGeoIntegralPropertyPtr::GetHandle(
             &_sfLengths, 
             this->getType().getFieldDesc(LengthsFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeometryBase::editHandleLengths        (void)
{
    SFGeoIntegralPropertyPtr::EditHandlePtr returnValue(
        new  SFGeoIntegralPropertyPtr::EditHandle(
             &_sfLengths, 
             this->getType().getFieldDesc(LengthsFieldId)));

    returnValue->setSetMethod(boost::bind(&Geometry::setLengths, 
                                          static_cast<Geometry *>(this), _1));

    editSField(LengthsFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeometryBase::getHandleProperties      (void) const
{
    MFGeoVectorPropertyPtr::GetHandlePtr returnValue(
        new  MFGeoVectorPropertyPtr::GetHandle(
             &_mfProperties, 
             this->getType().getFieldDesc(PropertiesFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeometryBase::editHandleProperties     (void)
{
    MFGeoVectorPropertyPtr::EditHandlePtr returnValue(
        new  MFGeoVectorPropertyPtr::EditHandle(
             &_mfProperties, 
             this->getType().getFieldDesc(PropertiesFieldId)));

    returnValue->setAddMethod(boost::bind(&Geometry::pushToProperties, 
                              static_cast<Geometry *>(this), _1));

    editMField(PropertiesFieldMask, _mfProperties);

    return returnValue;
}

GetFieldHandlePtr GeometryBase::getHandlePropIndices     (void) const
{
    MFGeoIntegralPropertyPtr::GetHandlePtr returnValue(
        new  MFGeoIntegralPropertyPtr::GetHandle(
             &_mfPropIndices, 
             this->getType().getFieldDesc(PropIndicesFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeometryBase::editHandlePropIndices    (void)
{
    MFGeoIntegralPropertyPtr::EditHandlePtr returnValue(
        new  MFGeoIntegralPropertyPtr::EditHandle(
             &_mfPropIndices, 
             this->getType().getFieldDesc(PropIndicesFieldId)));

    returnValue->setAddMethod(boost::bind(&Geometry::pushToPropIndices, 
                              static_cast<Geometry *>(this), _1));

    editMField(PropIndicesFieldMask, _mfPropIndices);

    return returnValue;
}

GetFieldHandlePtr GeometryBase::getHandleClassicGLId     (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfClassicGLId, 
             this->getType().getFieldDesc(ClassicGLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeometryBase::editHandleClassicGLId    (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfClassicGLId, 
             this->getType().getFieldDesc(ClassicGLIdFieldId)));

    editSField(ClassicGLIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeometryBase::getHandleAttGLId         (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfAttGLId, 
             this->getType().getFieldDesc(AttGLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeometryBase::editHandleAttGLId        (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfAttGLId, 
             this->getType().getFieldDesc(AttGLIdFieldId)));

    editSField(AttGLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GeometryBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeometryBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GeometryBase::createAspectCopy(void) const
{
    GeometryPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Geometry *>(this));

    return returnValue;
}
#endif

void GeometryBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Geometry *>(this)->setTypes(NullFC);

    static_cast<Geometry *>(this)->setLengths(NullFC);


    static_cast<Geometry *>(this)->clearProperties();
    static_cast<Geometry *>(this)->clearPropIndices();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeometryPtr>::_type("GeometryPtr", "MaterialDrawablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeometryPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, GeometryPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrSField, GeometryPtr, 0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, GeometryPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, GeometryPtr, 0);

OSG_END_NAMESPACE
