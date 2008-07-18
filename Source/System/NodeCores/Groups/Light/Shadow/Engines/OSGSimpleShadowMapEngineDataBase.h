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
 **     class SimpleShadowMapEngineData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLESHADOWMAPENGINEDATABASE_H_
#define _OSGSIMPLESHADOWMAPENGINEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGStageData.h" // Parent

#include "OSGCameraFields.h" // Camera type
#include "OSGTextureObjChunkFields.h" // TexChunk type
#include "OSGTextureBufferFields.h" // TexBuffer type
#include "OSGLightChunkFields.h" // LightChunk type
#include "OSGBlendChunkFields.h" // BlendChunk type
#include "OSGTexGenChunkFields.h" // TexGenChunk type
#include "OSGPolygonChunkFields.h" // PolyChunk type

#include "OSGSimpleShadowMapEngineDataFields.h"

OSG_BEGIN_NAMESPACE

class SimpleShadowMapEngineData;

//! \brief SimpleShadowMapEngineData Base Class.

class OSG_GROUP_DLLMAPPING SimpleShadowMapEngineDataBase : public StageData
{
  public:

    typedef StageData Inherited;
    typedef StageData ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SimpleShadowMapEngineData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CameraFieldId = Inherited::NextFieldId,
        TexChunkFieldId = CameraFieldId + 1,
        TexBufferFieldId = TexChunkFieldId + 1,
        LightChunkFieldId = TexBufferFieldId + 1,
        BlendChunkFieldId = LightChunkFieldId + 1,
        TexGenChunkFieldId = BlendChunkFieldId + 1,
        PolyChunkFieldId = TexGenChunkFieldId + 1,
        NextFieldId = PolyChunkFieldId + 1
    };

    static const OSG::BitVector CameraFieldMask =
        (TypeTraits<BitVector>::One << CameraFieldId);
    static const OSG::BitVector TexChunkFieldMask =
        (TypeTraits<BitVector>::One << TexChunkFieldId);
    static const OSG::BitVector TexBufferFieldMask =
        (TypeTraits<BitVector>::One << TexBufferFieldId);
    static const OSG::BitVector LightChunkFieldMask =
        (TypeTraits<BitVector>::One << LightChunkFieldId);
    static const OSG::BitVector BlendChunkFieldMask =
        (TypeTraits<BitVector>::One << BlendChunkFieldId);
    static const OSG::BitVector TexGenChunkFieldMask =
        (TypeTraits<BitVector>::One << TexGenChunkFieldId);
    static const OSG::BitVector PolyChunkFieldMask =
        (TypeTraits<BitVector>::One << PolyChunkFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecCameraPtr  SFCameraType;
    typedef SFUnrecTextureObjChunkPtr SFTexChunkType;
    typedef SFUnrecTextureBufferPtr SFTexBufferType;
    typedef SFUnrecLightChunkPtr SFLightChunkType;
    typedef SFUnrecBlendChunkPtr SFBlendChunkType;
    typedef SFUnrecTexGenChunkPtr SFTexGenChunkType;
    typedef SFUnrecPolygonChunkPtr SFPolyChunkType;

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

            const SFUnrecCameraPtr    *getSFCamera         (void) const;
                  SFUnrecCameraPtr    *editSFCamera         (void);
            const SFUnrecTextureObjChunkPtr *getSFTexChunk       (void) const;
                  SFUnrecTextureObjChunkPtr *editSFTexChunk       (void);
            const SFUnrecTextureBufferPtr *getSFTexBuffer      (void) const;
                  SFUnrecTextureBufferPtr *editSFTexBuffer      (void);
            const SFUnrecLightChunkPtr *getSFLightChunk     (void) const;
                  SFUnrecLightChunkPtr *editSFLightChunk     (void);
            const SFUnrecBlendChunkPtr *getSFBlendChunk     (void) const;
                  SFUnrecBlendChunkPtr *editSFBlendChunk     (void);
            const SFUnrecTexGenChunkPtr *getSFTexGenChunk    (void) const;
                  SFUnrecTexGenChunkPtr *editSFTexGenChunk    (void);
            const SFUnrecPolygonChunkPtr *getSFPolyChunk      (void) const;
                  SFUnrecPolygonChunkPtr *editSFPolyChunk      (void);


                  Camera * getCamera         (void) const;

                  TextureObjChunk * getTexChunk       (void) const;

                  TextureBuffer * getTexBuffer      (void) const;

                  LightChunk * getLightChunk     (void) const;

                  BlendChunk * getBlendChunk     (void) const;

                  TexGenChunk * getTexGenChunk    (void) const;

                  PolygonChunk * getPolyChunk      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCamera         (Camera * const value);
            void setTexChunk       (TextureObjChunk * const value);
            void setTexBuffer      (TextureBuffer * const value);
            void setLightChunk     (LightChunk * const value);
            void setBlendChunk     (BlendChunk * const value);
            void setTexGenChunk    (TexGenChunk * const value);
            void setPolyChunk      (PolygonChunk * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SimpleShadowMapEngineDataTransitPtr  create          (void);
    static  SimpleShadowMapEngineData           *createEmpty     (void);

    static  SimpleShadowMapEngineDataTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SimpleShadowMapEngineData            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecCameraPtr  _sfCamera;
    SFUnrecTextureObjChunkPtr _sfTexChunk;
    SFUnrecTextureBufferPtr _sfTexBuffer;
    SFUnrecLightChunkPtr _sfLightChunk;
    SFUnrecBlendChunkPtr _sfBlendChunk;
    SFUnrecTexGenChunkPtr _sfTexGenChunk;
    SFUnrecPolygonChunkPtr _sfPolyChunk;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleShadowMapEngineDataBase(void);
    SimpleShadowMapEngineDataBase(const SimpleShadowMapEngineDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SimpleShadowMapEngineDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SimpleShadowMapEngineData *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleCamera          (void) const;
    EditFieldHandlePtr editHandleCamera         (void);
    GetFieldHandlePtr  getHandleTexChunk        (void) const;
    EditFieldHandlePtr editHandleTexChunk       (void);
    GetFieldHandlePtr  getHandleTexBuffer       (void) const;
    EditFieldHandlePtr editHandleTexBuffer      (void);
    GetFieldHandlePtr  getHandleLightChunk      (void) const;
    EditFieldHandlePtr editHandleLightChunk     (void);
    GetFieldHandlePtr  getHandleBlendChunk      (void) const;
    EditFieldHandlePtr editHandleBlendChunk     (void);
    GetFieldHandlePtr  getHandleTexGenChunk     (void) const;
    EditFieldHandlePtr editHandleTexGenChunk    (void);
    GetFieldHandlePtr  getHandlePolyChunk       (void) const;
    EditFieldHandlePtr editHandlePolyChunk      (void);

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

            void execSync (      SimpleShadowMapEngineDataBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(void) const;
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
    void operator =(const SimpleShadowMapEngineDataBase &source);
};

typedef SimpleShadowMapEngineDataBase *SimpleShadowMapEngineDataBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSIMPLESHADOWMAPENGINEDATABASE_H_ */
