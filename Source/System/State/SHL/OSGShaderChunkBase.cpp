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
 **     class ShaderChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderChunkBase.h"
#include "OSGShaderChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ShaderChunkBase::_sfVertexProgram
    vertex program source
*/

/*! \var std::string     ShaderChunkBase::_sfFragmentProgram
    fragment program source
*/

/*! \var std::string     ShaderChunkBase::_sfGeometryProgram
    geometry program source
*/


void ShaderChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "vertexProgram",
        "vertex program source\n",
        VertexProgramFieldId, VertexProgramFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderChunkBase::editHandleVertexProgram),
        static_cast<FieldGetMethodSig >(&ShaderChunkBase::getHandleVertexProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "fragmentProgram",
        "fragment program source\n",
        FragmentProgramFieldId, FragmentProgramFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderChunkBase::editHandleFragmentProgram),
        static_cast<FieldGetMethodSig >(&ShaderChunkBase::getHandleFragmentProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "geometryProgram",
        "geometry program source\n",
        GeometryProgramFieldId, GeometryProgramFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShaderChunkBase::editHandleGeometryProgram),
        static_cast<FieldGetMethodSig >(&ShaderChunkBase::getHandleGeometryProgram));

    oType.addInitialDesc(pDesc);
}


ShaderChunkBase::TypeObject ShaderChunkBase::_type(
    ShaderChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ShaderChunk::initMethod,
    ShaderChunk::exitMethod,
    (InitalInsertDescFunc) &ShaderChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderChunk\"\n"
    "\tparent=\"ShaderParameterChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"vertexProgram\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tvertex program source\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fragmentProgram\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tfragment program source\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"geometryProgram\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tgeometry program source\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderChunk);
}

/*------------------------- decorator get ------------------------------*/


SFString *ShaderChunkBase::editSFVertexProgram(void)
{
    editSField(VertexProgramFieldMask);

    return &_sfVertexProgram;
}

const SFString *ShaderChunkBase::getSFVertexProgram(void) const
{
    return &_sfVertexProgram;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ShaderChunkBase::getSFVertexProgram  (void)
{
    return this->editSFVertexProgram  ();
}
#endif

SFString *ShaderChunkBase::editSFFragmentProgram(void)
{
    editSField(FragmentProgramFieldMask);

    return &_sfFragmentProgram;
}

const SFString *ShaderChunkBase::getSFFragmentProgram(void) const
{
    return &_sfFragmentProgram;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ShaderChunkBase::getSFFragmentProgram(void)
{
    return this->editSFFragmentProgram();
}
#endif

SFString *ShaderChunkBase::editSFGeometryProgram(void)
{
    editSField(GeometryProgramFieldMask);

    return &_sfGeometryProgram;
}

const SFString *ShaderChunkBase::getSFGeometryProgram(void) const
{
    return &_sfGeometryProgram;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ShaderChunkBase::getSFGeometryProgram(void)
{
    return this->editSFGeometryProgram();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
    {
        returnValue += _sfVertexProgram.getBinSize();
    }
    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
    {
        returnValue += _sfFragmentProgram.getBinSize();
    }
    if(FieldBits::NoField != (GeometryProgramFieldMask & whichField))
    {
        returnValue += _sfGeometryProgram.getBinSize();
    }

    return returnValue;
}

void ShaderChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
    {
        _sfVertexProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
    {
        _sfFragmentProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryProgramFieldMask & whichField))
    {
        _sfGeometryProgram.copyToBin(pMem);
    }
}

void ShaderChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
    {
        _sfVertexProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
    {
        _sfFragmentProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryProgramFieldMask & whichField))
    {
        _sfGeometryProgram.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShaderChunkBase::ShaderChunkBase(void) :
    Inherited(),
    _sfVertexProgram          (),
    _sfFragmentProgram        (),
    _sfGeometryProgram        ()
{
}

ShaderChunkBase::ShaderChunkBase(const ShaderChunkBase &source) :
    Inherited(source),
    _sfVertexProgram          (source._sfVertexProgram          ),
    _sfFragmentProgram        (source._sfFragmentProgram        ),
    _sfGeometryProgram        (source._sfGeometryProgram        )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderChunkBase::~ShaderChunkBase(void)
{
}


GetFieldHandlePtr ShaderChunkBase::getHandleVertexProgram   (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfVertexProgram, 
             this->getType().getFieldDesc(VertexProgramFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderChunkBase::editHandleVertexProgram  (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfVertexProgram, 
             this->getType().getFieldDesc(VertexProgramFieldId)));

    editSField(VertexProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderChunkBase::getHandleFragmentProgram (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFragmentProgram, 
             this->getType().getFieldDesc(FragmentProgramFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderChunkBase::editHandleFragmentProgram(void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFragmentProgram, 
             this->getType().getFieldDesc(FragmentProgramFieldId)));

    editSField(FragmentProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderChunkBase::getHandleGeometryProgram (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfGeometryProgram, 
             this->getType().getFieldDesc(GeometryProgramFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderChunkBase::editHandleGeometryProgram(void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfGeometryProgram, 
             this->getType().getFieldDesc(GeometryProgramFieldId)));

    editSField(GeometryProgramFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void ShaderChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderChunkPtr>::_type("ShaderChunkPtr", "ShaderParameterChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderChunkPtr)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           ShaderChunkPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           ShaderChunkPtr, 
                           0);

OSG_END_NAMESPACE
