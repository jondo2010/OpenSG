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
 **     class ScreenTransform
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSCREENTRANSFORMBASE_H_
#define _OSGSCREENTRANSFORMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGNodeFields.h"              // Beacon type
#include "OSGSysFields.h"               // InvertWorldTransform type
#include "OSGMathFields.h"              // View type

#include "OSGScreenTransformFields.h"

OSG_BEGIN_NAMESPACE


class ScreenTransform;

//! \brief ScreenTransform Base Class.

class OSG_GROUP_DLLMAPPING ScreenTransformBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ScreenTransform);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        BeaconFieldId = Inherited::NextFieldId,
        InvertWorldTransformFieldId = BeaconFieldId + 1,
        InvertViewTransformFieldId = InvertWorldTransformFieldId + 1,
        ApplyBeaconRotationFieldId = InvertViewTransformFieldId + 1,
        ApplyBeaconScreenTranslationFieldId = ApplyBeaconRotationFieldId + 1,
        ViewFieldId = ApplyBeaconScreenTranslationFieldId + 1,
        NextFieldId = ViewFieldId + 1
    };

    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector InvertWorldTransformFieldMask =
        (TypeTraits<BitVector>::One << InvertWorldTransformFieldId);
    static const OSG::BitVector InvertViewTransformFieldMask =
        (TypeTraits<BitVector>::One << InvertViewTransformFieldId);
    static const OSG::BitVector ApplyBeaconRotationFieldMask =
        (TypeTraits<BitVector>::One << ApplyBeaconRotationFieldId);
    static const OSG::BitVector ApplyBeaconScreenTranslationFieldMask =
        (TypeTraits<BitVector>::One << ApplyBeaconScreenTranslationFieldId);
    static const OSG::BitVector ViewFieldMask =
        (TypeTraits<BitVector>::One << ViewFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFWeakNodePtr     SFBeaconType;
    typedef SFBool            SFInvertWorldTransformType;
    typedef SFBool            SFInvertViewTransformType;
    typedef SFBool            SFApplyBeaconRotationType;
    typedef SFBool            SFApplyBeaconScreenTranslationType;
    typedef SFMatrix          SFViewType;

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

            const SFWeakNodePtr       *getSFBeacon         (void) const;
                  SFWeakNodePtr       *editSFBeacon         (void);

                  SFBool              *editSFInvertWorldTransform(void);
            const SFBool              *getSFInvertWorldTransform (void) const;

                  SFBool              *editSFInvertViewTransform(void);
            const SFBool              *getSFInvertViewTransform (void) const;

                  SFBool              *editSFApplyBeaconRotation(void);
            const SFBool              *getSFApplyBeaconRotation (void) const;

                  SFBool              *editSFApplyBeaconScreenTranslation(void);
            const SFBool              *getSFApplyBeaconScreenTranslation (void) const;

                  SFMatrix            *editSFView           (void);
            const SFMatrix            *getSFView            (void) const;


                  Node * getBeacon         (void) const;

                  bool                &editInvertWorldTransform(void);
                  bool                 getInvertWorldTransform (void) const;

                  bool                &editInvertViewTransform(void);
                  bool                 getInvertViewTransform (void) const;

                  bool                &editApplyBeaconRotation(void);
                  bool                 getApplyBeaconRotation (void) const;

                  bool                &editApplyBeaconScreenTranslation(void);
                  bool                 getApplyBeaconScreenTranslation (void) const;

                  Matrix              &editView           (void);
            const Matrix              &getView            (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setBeacon         (Node * const value);
            void setInvertWorldTransform(const bool value);
            void setInvertViewTransform(const bool value);
            void setApplyBeaconRotation(const bool value);
            void setApplyBeaconScreenTranslation(const bool value);
            void setView           (const Matrix &value);

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

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ScreenTransformTransitPtr  create          (void);
    static  ScreenTransform           *createEmpty     (void);

    static  ScreenTransformTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ScreenTransform            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ScreenTransformTransitPtr  createDependent  (BitVector bFlags);

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

    SFWeakNodePtr     _sfBeacon;
    SFBool            _sfInvertWorldTransform;
    SFBool            _sfInvertViewTransform;
    SFBool            _sfApplyBeaconRotation;
    SFBool            _sfApplyBeaconScreenTranslation;
    SFMatrix          _sfView;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ScreenTransformBase(void);
    ScreenTransformBase(const ScreenTransformBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ScreenTransformBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ScreenTransform *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleBeacon          (void) const;
    EditFieldHandlePtr editHandleBeacon         (void);
    GetFieldHandlePtr  getHandleInvertWorldTransform (void) const;
    EditFieldHandlePtr editHandleInvertWorldTransform(void);
    GetFieldHandlePtr  getHandleInvertViewTransform (void) const;
    EditFieldHandlePtr editHandleInvertViewTransform(void);
    GetFieldHandlePtr  getHandleApplyBeaconRotation (void) const;
    EditFieldHandlePtr editHandleApplyBeaconRotation(void);
    GetFieldHandlePtr  getHandleApplyBeaconScreenTranslation (void) const;
    EditFieldHandlePtr editHandleApplyBeaconScreenTranslation(void);
    GetFieldHandlePtr  getHandleView            (void) const;
    EditFieldHandlePtr editHandleView           (void);

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

            void execSync (      ScreenTransformBase *pFrom,
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
    void operator =(const ScreenTransformBase &source);
};

typedef ScreenTransformBase *ScreenTransformBaseP;

typedef CoredNodeRefPtr  <ScreenTransform> ScreenTransformNodeRefPtr;
typedef CoredNodeMTRefPtr<ScreenTransform> ScreenTransformNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGSCREENTRANSFORMBASE_H_ */
