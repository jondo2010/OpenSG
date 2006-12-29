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
 **     class ShaderChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERCHUNKBASE_H_
#define _OSGSHADERCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGShaderParameterChunk.h" // Parent

#include "OSGStringFields.h" // VertexProgram type
#include "OSGStringFields.h" // FragmentProgram type

#include "OSGShaderChunkFields.h"

OSG_BEGIN_NAMESPACE

class ShaderChunk;

//! \brief ShaderChunk Base Class.

class OSG_STATE_DLLMAPPING ShaderChunkBase : public ShaderParameterChunk
{
  public:

    typedef ShaderParameterChunk Inherited;
    typedef ShaderParameterChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<ShaderParameterChunkPtr,
                              ShaderParameterChunkConstPtr,
                              ShaderChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<ShaderParameterChunkPtr,
                              ShaderParameterChunkConstPtr,
                              ShaderChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<ShaderParameterChunkPtr,
                              ShaderParameterChunkConstPtr,
                              ShaderChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<ShaderParameterChunkPtr,
                              ShaderParameterChunkConstPtr,
                              ShaderChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<ShaderParameterChunkPtr,
                              ShaderParameterChunkConstPtr,
                              ShaderChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<ShaderParameterChunkPtr,
                              ShaderParameterChunkConstPtr,
                              ShaderChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        VertexProgramFieldId = Inherited::NextFieldId,
        FragmentProgramFieldId = VertexProgramFieldId + 1,
        NextFieldId = FragmentProgramFieldId + 1
    };

    static const OSG::BitVector VertexProgramFieldMask =
        (TypeTraits<BitVector>::One << VertexProgramFieldId);
    static const OSG::BitVector FragmentProgramFieldMask =
        (TypeTraits<BitVector>::One << FragmentProgramFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_COMPAT
                  SFString            *getSFVertexProgram   (void);
#endif
                  SFString            *editSFVertexProgram  (void);
            const SFString            *getSFVertexProgram   (void) const;

#ifdef OSG_1_COMPAT
                  SFString            *getSFFragmentProgram (void);
#endif
                  SFString            *editSFFragmentProgram(void);
            const SFString            *getSFFragmentProgram (void) const;


#ifdef OSG_1_COMPAT
                  std::string         &getVertexProgram   (void);
#endif
                  std::string         &editVertexProgram  (void);
            const std::string         &getVertexProgram   (void) const;

#ifdef OSG_1_COMPAT
                  std::string         &getFragmentProgram (void);
#endif
                  std::string         &editFragmentProgram(void);
            const std::string         &getFragmentProgram (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setVertexProgram  (const std::string &value);
            void setFragmentProgram(const std::string &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString          _sfVertexProgram;
    SFString          _sfFragmentProgram;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShaderChunkBase(void);
    ShaderChunkBase(const ShaderChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      ShaderChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      ShaderChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ShaderChunkBase &source);
};

typedef ShaderChunkBase *ShaderChunkBaseP;

/** Type specific RefPtr type for ShaderChunk. */
typedef RefPtr<ShaderChunkPtr> ShaderChunkRefPtr;

typedef osgIF<
    ShaderChunkBase::isNodeCore,

    CoredNodePtr<ShaderChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        ShaderChunkNodePtr;

OSG_END_NAMESPACE

#define OSGSHADERCHUNKBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGSHADERCHUNKBASE_H_ */
