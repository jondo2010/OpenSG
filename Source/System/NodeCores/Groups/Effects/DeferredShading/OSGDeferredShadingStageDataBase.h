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
 **     class DeferredShadingStageData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDEFERREDSHADINGSTAGEDATABASE_H_
#define _OSGDEFERREDSHADINGSTAGEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStageData.h" // Parent

#include "OSGFrameBufferObjectFields.h" // GBufferTarget type
#include "OSGBackgroundFields.h"        // GBufferBackground type
#include "OSGStateFields.h"             // ShadingStates type
#include "OSGShaderProgramChunkFields.h" // ShadingProgramChunks type
#include "OSGDSLightChunkFields.h"      // LightChunks type
#include "OSGBlendChunkFields.h"        // BlendChunk type

#include "OSGDeferredShadingStageDataFields.h"

OSG_BEGIN_NAMESPACE


class DeferredShadingStageData;

//! \brief DeferredShadingStageData Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING DeferredShadingStageDataBase : public StageData
{
  public:

    typedef StageData Inherited;
    typedef StageData ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DeferredShadingStageData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        GBufferTargetFieldId = Inherited::NextFieldId,
        GBufferBackgroundFieldId = GBufferTargetFieldId + 1,
        ShadingTargetFieldId = GBufferBackgroundFieldId + 1,
        ShadingStatesFieldId = ShadingTargetFieldId + 1,
        ShadingProgramChunksFieldId = ShadingStatesFieldId + 1,
        LightChunksFieldId = ShadingProgramChunksFieldId + 1,
        BlendChunkFieldId = LightChunksFieldId + 1,
        NextFieldId = BlendChunkFieldId + 1
    };

    static const OSG::BitVector GBufferTargetFieldMask =
        (TypeTraits<BitVector>::One << GBufferTargetFieldId);
    static const OSG::BitVector GBufferBackgroundFieldMask =
        (TypeTraits<BitVector>::One << GBufferBackgroundFieldId);
    static const OSG::BitVector ShadingTargetFieldMask =
        (TypeTraits<BitVector>::One << ShadingTargetFieldId);
    static const OSG::BitVector ShadingStatesFieldMask =
        (TypeTraits<BitVector>::One << ShadingStatesFieldId);
    static const OSG::BitVector ShadingProgramChunksFieldMask =
        (TypeTraits<BitVector>::One << ShadingProgramChunksFieldId);
    static const OSG::BitVector LightChunksFieldMask =
        (TypeTraits<BitVector>::One << LightChunksFieldId);
    static const OSG::BitVector BlendChunkFieldMask =
        (TypeTraits<BitVector>::One << BlendChunkFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecFrameBufferObjectPtr SFGBufferTargetType;
    typedef SFUnrecBackgroundPtr SFGBufferBackgroundType;
    typedef SFUnrecFrameBufferObjectPtr SFShadingTargetType;
    typedef MFUnrecStatePtr   MFShadingStatesType;
    typedef MFUnrecShaderProgramChunkPtr MFShadingProgramChunksType;
    typedef MFUnrecDSLightChunkPtr MFLightChunksType;
    typedef SFUnrecBlendChunkPtr SFBlendChunkType;

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

            const SFUnrecFrameBufferObjectPtr *getSFGBufferTarget  (void) const;
                  SFUnrecFrameBufferObjectPtr *editSFGBufferTarget  (void);
            const SFUnrecBackgroundPtr *getSFGBufferBackground(void) const;
                  SFUnrecBackgroundPtr *editSFGBufferBackground(void);
            const SFUnrecFrameBufferObjectPtr *getSFShadingTarget  (void) const;
                  SFUnrecFrameBufferObjectPtr *editSFShadingTarget  (void);
            const MFUnrecStatePtr     *getMFShadingStates  (void) const;
                  MFUnrecStatePtr     *editMFShadingStates  (void);
            const MFUnrecShaderProgramChunkPtr *getMFShadingProgramChunks(void) const;
                  MFUnrecShaderProgramChunkPtr *editMFShadingProgramChunks(void);
            const MFUnrecDSLightChunkPtr *getMFLightChunks    (void) const;
                  MFUnrecDSLightChunkPtr *editMFLightChunks    (void);
            const SFUnrecBlendChunkPtr *getSFBlendChunk     (void) const;
                  SFUnrecBlendChunkPtr *editSFBlendChunk     (void);


                  FrameBufferObject * getGBufferTarget  (void) const;

                  Background * getGBufferBackground(void) const;

                  FrameBufferObject * getShadingTarget  (void) const;

                  State * getShadingStates  (const UInt32 index) const;

                  ShaderProgramChunk * getShadingProgramChunks(const UInt32 index) const;

                  DSLightChunk * getLightChunks    (const UInt32 index) const;

                  BlendChunk * getBlendChunk     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGBufferTarget  (FrameBufferObject * const value);
            void setGBufferBackground(Background * const value);
            void setShadingTarget  (FrameBufferObject * const value);
            void setBlendChunk     (BlendChunk * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToShadingStates           (State * const value   );
    void assignShadingStates          (const MFUnrecStatePtr   &value);
    void removeFromShadingStates (UInt32               uiIndex );
    void removeObjFromShadingStates(State * const value   );
    void clearShadingStates            (void                         );

    void pushToShadingProgramChunks           (ShaderProgramChunk * const value   );
    void assignShadingProgramChunks          (const MFUnrecShaderProgramChunkPtr &value);
    void removeFromShadingProgramChunks (UInt32               uiIndex );
    void removeObjFromShadingProgramChunks(ShaderProgramChunk * const value   );
    void clearShadingProgramChunks            (void                         );

    void pushToLightChunks           (DSLightChunk * const value   );
    void assignLightChunks          (const MFUnrecDSLightChunkPtr &value);
    void removeFromLightChunks (UInt32               uiIndex );
    void removeObjFromLightChunks(DSLightChunk * const value   );
    void clearLightChunks            (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  DeferredShadingStageDataTransitPtr  create          (void);
    static  DeferredShadingStageData           *createEmpty     (void);

    static  DeferredShadingStageDataTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DeferredShadingStageData            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DeferredShadingStageDataTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecFrameBufferObjectPtr _sfGBufferTarget;
    SFUnrecBackgroundPtr _sfGBufferBackground;
    SFUnrecFrameBufferObjectPtr _sfShadingTarget;
    MFUnrecStatePtr   _mfShadingStates;
    MFUnrecShaderProgramChunkPtr _mfShadingProgramChunks;
    MFUnrecDSLightChunkPtr _mfLightChunks;
    SFUnrecBlendChunkPtr _sfBlendChunk;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DeferredShadingStageDataBase(void);
    DeferredShadingStageDataBase(const DeferredShadingStageDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DeferredShadingStageDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const DeferredShadingStageData *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleGBufferTarget   (void) const;
    EditFieldHandlePtr editHandleGBufferTarget  (void);
    GetFieldHandlePtr  getHandleGBufferBackground (void) const;
    EditFieldHandlePtr editHandleGBufferBackground(void);
    GetFieldHandlePtr  getHandleShadingTarget   (void) const;
    EditFieldHandlePtr editHandleShadingTarget  (void);
    GetFieldHandlePtr  getHandleShadingStates   (void) const;
    EditFieldHandlePtr editHandleShadingStates  (void);
    GetFieldHandlePtr  getHandleShadingProgramChunks (void) const;
    EditFieldHandlePtr editHandleShadingProgramChunks(void);
    GetFieldHandlePtr  getHandleLightChunks     (void) const;
    EditFieldHandlePtr editHandleLightChunks    (void);
    GetFieldHandlePtr  getHandleBlendChunk      (void) const;
    EditFieldHandlePtr editHandleBlendChunk     (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      DeferredShadingStageDataBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DeferredShadingStageDataBase &source);
};

typedef DeferredShadingStageDataBase *DeferredShadingStageDataBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDEFERREDSHADINGSTAGEDATABASE_H_ */
