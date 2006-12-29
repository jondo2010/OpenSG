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
 **     class DistanceLOD
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISTANCELODBASE_H_
#define _OSGDISTANCELODBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGPnt3fFields.h" // Center type
#include "OSGReal32Fields.h" // Range type

#include "OSGDistanceLODFields.h"

OSG_BEGIN_NAMESPACE

class DistanceLOD;

//! \brief DistanceLOD Base Class.

class OSG_GROUP_DLLMAPPING DistanceLODBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              DistanceLOD>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              DistanceLOD>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              DistanceLOD>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              DistanceLOD>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              DistanceLOD>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              DistanceLOD>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CenterFieldId = Inherited::NextFieldId,
        RangeFieldId = CenterFieldId + 1,
        NextFieldId = RangeFieldId + 1
    };

    static const OSG::BitVector CenterFieldMask =
        (TypeTraits<BitVector>::One << CenterFieldId);
    static const OSG::BitVector RangeFieldMask =
        (TypeTraits<BitVector>::One << RangeFieldId);
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
                  SFPnt3f             *getSFCenter          (void);
#endif
                  SFPnt3f             *editSFCenter         (void);
            const SFPnt3f             *getSFCenter          (void) const;

#ifdef OSG_1_COMPAT
                  MFReal32            *getMFRange           (void);
#endif
                  MFReal32            *editMFRange          (void);
            const MFReal32            *getMFRange           (void) const;


#ifdef OSG_1_COMPAT
                  Pnt3f               &getCenter          (void);
#endif
                  Pnt3f               &editCenter         (void);
            const Pnt3f               &getCenter          (void) const;

#ifdef OSG_1_COMPAT
                  Real32              &getRange           (const UInt32 index);
                  MFReal32            &getRange          (void);
#endif
                  Real32              &editRange          (const UInt32 index);
            const Real32              &getRange           (const UInt32 index) const;
                  MFReal32            &editRange          (void);
            const MFReal32            &getRange          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCenter         (const Pnt3f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToRange                       (const Real32    &value   );
    void insertIntoRange                   (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInRange                    (      UInt32     uiIndex,
                                            const Real32    &value   );
    void replaceInRange                    (const Real32    &pOldElem,
                                            const Real32    &pNewElem);
    void removeFromRange                   (      UInt32     uiIndex );
    void removeFromRange                   (const Real32    &value   );
    void clearRange                        (      void               );


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

    static  DistanceLODPtr create     (void);
    static  DistanceLODPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt3f           _sfCenter;
    MFReal32          _mfRange;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DistanceLODBase(void);
    DistanceLODBase(const DistanceLODBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DistanceLODBase(void);

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

            void execSync (      DistanceLODBase *pFrom,
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

            void execSync (      DistanceLODBase *pFrom,
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

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DistanceLODBase &source);
};

typedef DistanceLODBase *DistanceLODBaseP;

/** Type specific RefPtr type for DistanceLOD. */
typedef RefPtr<DistanceLODPtr> DistanceLODRefPtr;

typedef osgIF<
    DistanceLODBase::isNodeCore,

    CoredNodePtr<DistanceLOD>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        DistanceLODNodePtr;

OSG_END_NAMESPACE

#define OSGDISTANCELODBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGDISTANCELODBASE_H_ */
