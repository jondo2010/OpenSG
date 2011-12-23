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
 **     class HDRStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGHDRSTAGEBASE_H_
#define _OSGHDRSTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStage.h" // Parent

#include "OSGSysFields.h"               // Exposure type
#include "OSGBaseFields.h"              // BufferFormat type

#include "OSGHDRStageFields.h"

OSG_BEGIN_NAMESPACE


class HDRStage;

//! \brief HDRStage Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING HDRStageBase : public Stage
{
  public:

    typedef Stage Inherited;
    typedef Stage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(HDRStage);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ExposureFieldId = Inherited::NextFieldId,
        BlurWidthFieldId = ExposureFieldId + 1,
        BlurAmountFieldId = BlurWidthFieldId + 1,
        EffectAmountFieldId = BlurAmountFieldId + 1,
        GammaFieldId = EffectAmountFieldId + 1,
        BufferFormatFieldId = GammaFieldId + 1,
        NextFieldId = BufferFormatFieldId + 1
    };

    static const OSG::BitVector ExposureFieldMask =
        (TypeTraits<BitVector>::One << ExposureFieldId);
    static const OSG::BitVector BlurWidthFieldMask =
        (TypeTraits<BitVector>::One << BlurWidthFieldId);
    static const OSG::BitVector BlurAmountFieldMask =
        (TypeTraits<BitVector>::One << BlurAmountFieldId);
    static const OSG::BitVector EffectAmountFieldMask =
        (TypeTraits<BitVector>::One << EffectAmountFieldId);
    static const OSG::BitVector GammaFieldMask =
        (TypeTraits<BitVector>::One << GammaFieldId);
    static const OSG::BitVector BufferFormatFieldMask =
        (TypeTraits<BitVector>::One << BufferFormatFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFExposureType;
    typedef SFReal32          SFBlurWidthType;
    typedef SFReal32          SFBlurAmountType;
    typedef SFReal32          SFEffectAmountType;
    typedef SFReal32          SFGammaType;
    typedef SFGLenum          SFBufferFormatType;

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


                  SFReal32            *editSFExposure       (void);
            const SFReal32            *getSFExposure        (void) const;

                  SFReal32            *editSFBlurWidth      (void);
            const SFReal32            *getSFBlurWidth       (void) const;

                  SFReal32            *editSFBlurAmount     (void);
            const SFReal32            *getSFBlurAmount      (void) const;

                  SFReal32            *editSFEffectAmount   (void);
            const SFReal32            *getSFEffectAmount    (void) const;

                  SFReal32            *editSFGamma          (void);
            const SFReal32            *getSFGamma           (void) const;

                  SFGLenum            *editSFBufferFormat   (void);
            const SFGLenum            *getSFBufferFormat    (void) const;


                  Real32              &editExposure       (void);
                  Real32               getExposure        (void) const;

                  Real32              &editBlurWidth      (void);
                  Real32               getBlurWidth       (void) const;

                  Real32              &editBlurAmount     (void);
                  Real32               getBlurAmount      (void) const;

                  Real32              &editEffectAmount   (void);
                  Real32               getEffectAmount    (void) const;

                  Real32              &editGamma          (void);
                  Real32               getGamma           (void) const;

                  GLenum              &editBufferFormat   (void);
            const GLenum              &getBufferFormat    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setExposure       (const Real32 value);
            void setBlurWidth      (const Real32 value);
            void setBlurAmount     (const Real32 value);
            void setEffectAmount   (const Real32 value);
            void setGamma          (const Real32 value);
            void setBufferFormat   (const GLenum &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

    static  HDRStageTransitPtr  create          (void);
    static  HDRStage           *createEmpty     (void);

    static  HDRStageTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  HDRStage            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  HDRStageTransitPtr  createDependent  (BitVector bFlags);

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

    SFReal32          _sfExposure;
    SFReal32          _sfBlurWidth;
    SFReal32          _sfBlurAmount;
    SFReal32          _sfEffectAmount;
    SFReal32          _sfGamma;
    SFGLenum          _sfBufferFormat;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    HDRStageBase(void);
    HDRStageBase(const HDRStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~HDRStageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleExposure        (void) const;
    EditFieldHandlePtr editHandleExposure       (void);
    GetFieldHandlePtr  getHandleBlurWidth       (void) const;
    EditFieldHandlePtr editHandleBlurWidth      (void);
    GetFieldHandlePtr  getHandleBlurAmount      (void) const;
    EditFieldHandlePtr editHandleBlurAmount     (void);
    GetFieldHandlePtr  getHandleEffectAmount    (void) const;
    EditFieldHandlePtr editHandleEffectAmount   (void);
    GetFieldHandlePtr  getHandleGamma           (void) const;
    EditFieldHandlePtr editHandleGamma          (void);
    GetFieldHandlePtr  getHandleBufferFormat    (void) const;
    EditFieldHandlePtr editHandleBufferFormat   (void);

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

            void execSync (      HDRStageBase *pFrom,
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
    void operator =(const HDRStageBase &source);
};

typedef HDRStageBase *HDRStageBaseP;

typedef CoredNodeRefPtr  <HDRStage> HDRStageNodeRefPtr;
typedef CoredNodeMTRefPtr<HDRStage> HDRStageNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGHDRSTAGEBASE_H_ */
