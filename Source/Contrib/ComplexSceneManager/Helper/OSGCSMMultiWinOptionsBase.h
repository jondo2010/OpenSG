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
 **     class CSMMultiWinOptions
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMMULTIWINOPTIONSBASE_H_
#define _OSGCSMMULTIWINOPTIONSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGBaseTypes.h"

#include "OSGCSMClusterWinOptions.h" // Parent

#include "OSGInt32Fields.h" // XOverlap type
#include "OSGInt32Fields.h" // YOverlap type
#include "OSGBoolFields.h" // ManageClientViewports type
#include "OSGBoolFields.h" // Balance type
#include "OSGBoolFields.h" // BestCut type
#include "OSGBoolFields.h" // ShowBalancing type

#include "OSGCSMMultiWinOptionsFields.h"

OSG_BEGIN_NAMESPACE

class CSMMultiWinOptions;

//! \brief CSMMultiWinOptions Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMMultiWinOptionsBase : public CSMClusterWinOptions
{
  public:

    typedef CSMClusterWinOptions Inherited;
    typedef CSMClusterWinOptions ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMMultiWinOptions);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        XOverlapFieldId = Inherited::NextFieldId,
        YOverlapFieldId = XOverlapFieldId + 1,
        ManageClientViewportsFieldId = YOverlapFieldId + 1,
        BalanceFieldId = ManageClientViewportsFieldId + 1,
        BestCutFieldId = BalanceFieldId + 1,
        ShowBalancingFieldId = BestCutFieldId + 1,
        NextFieldId = ShowBalancingFieldId + 1
    };

    static const OSG::BitVector XOverlapFieldMask =
        (TypeTraits<BitVector>::One << XOverlapFieldId);
    static const OSG::BitVector YOverlapFieldMask =
        (TypeTraits<BitVector>::One << YOverlapFieldId);
    static const OSG::BitVector ManageClientViewportsFieldMask =
        (TypeTraits<BitVector>::One << ManageClientViewportsFieldId);
    static const OSG::BitVector BalanceFieldMask =
        (TypeTraits<BitVector>::One << BalanceFieldId);
    static const OSG::BitVector BestCutFieldMask =
        (TypeTraits<BitVector>::One << BestCutFieldId);
    static const OSG::BitVector ShowBalancingFieldMask =
        (TypeTraits<BitVector>::One << ShowBalancingFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFInt32           SFXOverlapType;
    typedef SFInt32           SFYOverlapType;
    typedef SFBool            SFManageClientViewportsType;
    typedef SFBool            SFBalanceType;
    typedef SFBool            SFBestCutType;
    typedef SFBool            SFShowBalancingType;

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


                  SFInt32             *editSFXOverlap       (void);
            const SFInt32             *getSFXOverlap        (void) const;

                  SFInt32             *editSFYOverlap       (void);
            const SFInt32             *getSFYOverlap        (void) const;

                  SFBool              *editSFManageClientViewports(void);
            const SFBool              *getSFManageClientViewports (void) const;

                  SFBool              *editSFBalance        (void);
            const SFBool              *getSFBalance         (void) const;

                  SFBool              *editSFBestCut        (void);
            const SFBool              *getSFBestCut         (void) const;

                  SFBool              *editSFShowBalancing  (void);
            const SFBool              *getSFShowBalancing   (void) const;


                  Int32               &editXOverlap       (void);
                  Int32                getXOverlap        (void) const;

                  Int32               &editYOverlap       (void);
                  Int32                getYOverlap        (void) const;

                  bool                &editManageClientViewports(void);
                  bool                 getManageClientViewports (void) const;

                  bool                &editBalance        (void);
                  bool                 getBalance         (void) const;

                  bool                &editBestCut        (void);
                  bool                 getBestCut         (void) const;

                  bool                &editShowBalancing  (void);
                  bool                 getShowBalancing   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setXOverlap       (const Int32 value);
            void setYOverlap       (const Int32 value);
            void setManageClientViewports(const bool value);
            void setBalance        (const bool value);
            void setBestCut        (const bool value);
            void setShowBalancing  (const bool value);

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

    static  CSMMultiWinOptionsTransitPtr  create          (void);
    static  CSMMultiWinOptions           *createEmpty     (void);

    static  CSMMultiWinOptionsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMMultiWinOptions            *createEmptyLocal(
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

    SFInt32           _sfXOverlap;
    SFInt32           _sfYOverlap;
    SFBool            _sfManageClientViewports;
    SFBool            _sfBalance;
    SFBool            _sfBestCut;
    SFBool            _sfShowBalancing;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMMultiWinOptionsBase(void);
    CSMMultiWinOptionsBase(const CSMMultiWinOptionsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMMultiWinOptionsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleXOverlap        (void) const;
    EditFieldHandlePtr editHandleXOverlap       (void);
    GetFieldHandlePtr  getHandleYOverlap        (void) const;
    EditFieldHandlePtr editHandleYOverlap       (void);
    GetFieldHandlePtr  getHandleManageClientViewports (void) const;
    EditFieldHandlePtr editHandleManageClientViewports(void);
    GetFieldHandlePtr  getHandleBalance         (void) const;
    EditFieldHandlePtr editHandleBalance        (void);
    GetFieldHandlePtr  getHandleBestCut         (void) const;
    EditFieldHandlePtr editHandleBestCut        (void);
    GetFieldHandlePtr  getHandleShowBalancing   (void) const;
    EditFieldHandlePtr editHandleShowBalancing  (void);

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

            void execSync (      CSMMultiWinOptionsBase *pFrom,
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
    void operator =(const CSMMultiWinOptionsBase &source);
};

typedef CSMMultiWinOptionsBase *CSMMultiWinOptionsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMMULTIWINOPTIONSBASE_H_ */
