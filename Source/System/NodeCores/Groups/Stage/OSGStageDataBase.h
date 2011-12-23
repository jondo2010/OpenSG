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
 **     class StageData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTAGEDATABASE_H_
#define _OSGSTAGEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGSysFields.h"               // PartitionRangeBegin type

#include "OSGStageDataFields.h"

OSG_BEGIN_NAMESPACE


class StageData;

//! \brief StageData Base Class.

class OSG_GROUP_DLLMAPPING StageDataBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(StageData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PartitionRangeBeginFieldId = Inherited::NextFieldId,
        PartitionRangeEndFieldId = PartitionRangeBeginFieldId + 1,
        GroupModeFieldId = PartitionRangeEndFieldId + 1,
        NextFieldId = GroupModeFieldId + 1
    };

    static const OSG::BitVector PartitionRangeBeginFieldMask =
        (TypeTraits<BitVector>::One << PartitionRangeBeginFieldId);
    static const OSG::BitVector PartitionRangeEndFieldMask =
        (TypeTraits<BitVector>::One << PartitionRangeEndFieldId);
    static const OSG::BitVector GroupModeFieldMask =
        (TypeTraits<BitVector>::One << GroupModeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFInt32           SFPartitionRangeBeginType;
    typedef SFInt32           SFPartitionRangeEndType;
    typedef SFInt32           SFGroupModeType;

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


                  SFInt32             *editSFPartitionRangeBegin(void);
            const SFInt32             *getSFPartitionRangeBegin (void) const;

                  SFInt32             *editSFPartitionRangeEnd(void);
            const SFInt32             *getSFPartitionRangeEnd (void) const;

                  SFInt32             *editSFGroupMode      (void);
            const SFInt32             *getSFGroupMode       (void) const;


                  Int32               &editPartitionRangeBegin(void);
                  Int32                getPartitionRangeBegin (void) const;

                  Int32               &editPartitionRangeEnd(void);
                  Int32                getPartitionRangeEnd (void) const;

                  Int32               &editGroupMode      (void);
                  Int32                getGroupMode       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPartitionRangeBegin(const Int32 value);
            void setPartitionRangeEnd(const Int32 value);
            void setGroupMode      (const Int32 value);

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

    static  StageDataTransitPtr  create          (void);
    static  StageData           *createEmpty     (void);

    static  StageDataTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  StageData            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  StageDataTransitPtr  createDependent  (BitVector bFlags);

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

    SFInt32           _sfPartitionRangeBegin;
    SFInt32           _sfPartitionRangeEnd;
    SFInt32           _sfGroupMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    StageDataBase(void);
    StageDataBase(const StageDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~StageDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePartitionRangeBegin (void) const;
    EditFieldHandlePtr editHandlePartitionRangeBegin(void);
    GetFieldHandlePtr  getHandlePartitionRangeEnd (void) const;
    EditFieldHandlePtr editHandlePartitionRangeEnd(void);
    GetFieldHandlePtr  getHandleGroupMode       (void) const;
    EditFieldHandlePtr editHandleGroupMode      (void);

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

            void execSync (      StageDataBase *pFrom,
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
    void operator =(const StageDataBase &source);
};

typedef StageDataBase *StageDataBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSTAGEDATABASE_H_ */
