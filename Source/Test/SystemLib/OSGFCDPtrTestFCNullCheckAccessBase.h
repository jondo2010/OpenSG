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
 **     class FCDPtrTestFCNullCheckAccess
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFCDPTRTESTFCNULLCHECKACCESSBASE_H_
#define _OSGFCDPTRTESTFCNULLCHECKACCESSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGNodeCore.h" // Parent

#include "OSGFCDTestFCFields.h" // FieldSFPub_ptr type
#include "OSGFCDTestFCFields.h" // FieldSFPub_weakptr type
#include "OSGFCDTestFCFields.h" // FieldSFPub_mpchildptr type
#include "OSGFCDTestFCFields.h" // FieldSFPro_ptr type
#include "OSGFCDTestFCFields.h" // FieldSFPro_weakptr type
#include "OSGFCDTestFCFields.h" // FieldSFPro_mpchildptr type
#include "OSGFCDTestFCFields.h" // FieldSFNo_ptr type
#include "OSGFCDTestFCFields.h" // FieldSFNo_weakptr type
#include "OSGFCDTestFCFields.h" // FieldSFNo_mpchildptr type
#include "OSGFCDTestFCFields.h" // FieldMFPub_ptr type
#include "OSGFCDTestFCFields.h" // FieldMFPub_weakptr type
#include "OSGFCDTestFCFields.h" // FieldMFPub_mpchildptr type
#include "OSGFCDTestFCFields.h" // FieldMFPro_ptr type
#include "OSGFCDTestFCFields.h" // FieldMFPro_weakptr type
#include "OSGFCDTestFCFields.h" // FieldMFPro_mpchildptr type
#include "OSGFCDTestFCFields.h" // FieldMFNo_ptr type
#include "OSGFCDTestFCFields.h" // FieldMFNo_weakptr type
#include "OSGFCDTestFCFields.h" // FieldMFNo_mpchildptr type
#include "OSGFCDSParTestFCFields.h" // FieldSFPub_spchildptr type
#include "OSGFCDSParTestFCFields.h" // FieldSFPro_spchildptr type
#include "OSGFCDSParTestFCFields.h" // FieldSFNo_spchildptr type
#include "OSGFCDSParTestFCFields.h" // FieldMFPub_spchildptr type
#include "OSGFCDSParTestFCFields.h" // FieldMFPro_spchildptr type
#include "OSGFCDSParTestFCFields.h" // FieldMFNo_spchildptr type

#include "OSGFCDPtrTestFCNullCheckAccessFields.h"

OSG_BEGIN_NAMESPACE

class FCDPtrTestFCNullCheckAccess;

//! \brief FCDPtrTestFCNullCheckAccess Base Class.

class OSG_SYSTEM_DLLMAPPING FCDPtrTestFCNullCheckAccessBase : public NodeCore
{
  public:

    typedef NodeCore Inherited;
    typedef NodeCore ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(FCDPtrTestFCNullCheckAccess);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FieldSFPub_ptrFieldId = Inherited::NextFieldId,
        FieldSFPub_weakptrFieldId = FieldSFPub_ptrFieldId + 1,
        FieldSFPub_mpchildptrFieldId = FieldSFPub_weakptrFieldId + 1,
        FieldSFPro_ptrFieldId = FieldSFPub_mpchildptrFieldId + 1,
        FieldSFPro_weakptrFieldId = FieldSFPro_ptrFieldId + 1,
        FieldSFPro_mpchildptrFieldId = FieldSFPro_weakptrFieldId + 1,
        FieldSFNo_ptrFieldId = FieldSFPro_mpchildptrFieldId + 1,
        FieldSFNo_weakptrFieldId = FieldSFNo_ptrFieldId + 1,
        FieldSFNo_mpchildptrFieldId = FieldSFNo_weakptrFieldId + 1,
        FieldMFPub_ptrFieldId = FieldSFNo_mpchildptrFieldId + 1,
        FieldMFPub_weakptrFieldId = FieldMFPub_ptrFieldId + 1,
        FieldMFPub_mpchildptrFieldId = FieldMFPub_weakptrFieldId + 1,
        FieldMFPro_ptrFieldId = FieldMFPub_mpchildptrFieldId + 1,
        FieldMFPro_weakptrFieldId = FieldMFPro_ptrFieldId + 1,
        FieldMFPro_mpchildptrFieldId = FieldMFPro_weakptrFieldId + 1,
        FieldMFNo_ptrFieldId = FieldMFPro_mpchildptrFieldId + 1,
        FieldMFNo_weakptrFieldId = FieldMFNo_ptrFieldId + 1,
        FieldMFNo_mpchildptrFieldId = FieldMFNo_weakptrFieldId + 1,
        FieldSFPub_spchildptrFieldId = FieldMFNo_mpchildptrFieldId + 1,
        FieldSFPro_spchildptrFieldId = FieldSFPub_spchildptrFieldId + 1,
        FieldSFNo_spchildptrFieldId = FieldSFPro_spchildptrFieldId + 1,
        FieldMFPub_spchildptrFieldId = FieldSFNo_spchildptrFieldId + 1,
        FieldMFPro_spchildptrFieldId = FieldMFPub_spchildptrFieldId + 1,
        FieldMFNo_spchildptrFieldId = FieldMFPro_spchildptrFieldId + 1,
        NextFieldId = FieldMFNo_spchildptrFieldId + 1
    };

    static const OSG::BitVector FieldSFPub_ptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPub_ptrFieldId);
    static const OSG::BitVector FieldSFPub_weakptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPub_weakptrFieldId);
    static const OSG::BitVector FieldSFPub_mpchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPub_mpchildptrFieldId);
    static const OSG::BitVector FieldSFPro_ptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPro_ptrFieldId);
    static const OSG::BitVector FieldSFPro_weakptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPro_weakptrFieldId);
    static const OSG::BitVector FieldSFPro_mpchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPro_mpchildptrFieldId);
    static const OSG::BitVector FieldSFNo_ptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFNo_ptrFieldId);
    static const OSG::BitVector FieldSFNo_weakptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFNo_weakptrFieldId);
    static const OSG::BitVector FieldSFNo_mpchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFNo_mpchildptrFieldId);
    static const OSG::BitVector FieldMFPub_ptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPub_ptrFieldId);
    static const OSG::BitVector FieldMFPub_weakptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPub_weakptrFieldId);
    static const OSG::BitVector FieldMFPub_mpchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPub_mpchildptrFieldId);
    static const OSG::BitVector FieldMFPro_ptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPro_ptrFieldId);
    static const OSG::BitVector FieldMFPro_weakptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPro_weakptrFieldId);
    static const OSG::BitVector FieldMFPro_mpchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPro_mpchildptrFieldId);
    static const OSG::BitVector FieldMFNo_ptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFNo_ptrFieldId);
    static const OSG::BitVector FieldMFNo_weakptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFNo_weakptrFieldId);
    static const OSG::BitVector FieldMFNo_mpchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFNo_mpchildptrFieldId);
    static const OSG::BitVector FieldSFPub_spchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPub_spchildptrFieldId);
    static const OSG::BitVector FieldSFPro_spchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPro_spchildptrFieldId);
    static const OSG::BitVector FieldSFNo_spchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldSFNo_spchildptrFieldId);
    static const OSG::BitVector FieldMFPub_spchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPub_spchildptrFieldId);
    static const OSG::BitVector FieldMFPro_spchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPro_spchildptrFieldId);
    static const OSG::BitVector FieldMFNo_spchildptrFieldMask =
        (TypeTraits<BitVector>::One << FieldMFNo_spchildptrFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecFCDTestFCPtr SFFieldSFPub_ptrType;
    typedef SFWeakFCDTestFCPtr SFFieldSFPub_weakptrType;
    typedef SFUnrecChildFCDTestFCPtr SFFieldSFPub_mpchildptrType;
    typedef SFUnrecFCDTestFCPtr SFFieldSFPro_ptrType;
    typedef SFWeakFCDTestFCPtr SFFieldSFPro_weakptrType;
    typedef SFUnrecChildFCDTestFCPtr SFFieldSFPro_mpchildptrType;
    typedef SFUnrecFCDTestFCPtr SFFieldSFNo_ptrType;
    typedef SFWeakFCDTestFCPtr SFFieldSFNo_weakptrType;
    typedef SFUnrecChildFCDTestFCPtr SFFieldSFNo_mpchildptrType;
    typedef MFUnrecFCDTestFCPtr MFFieldMFPub_ptrType;
    typedef MFWeakFCDTestFCPtr MFFieldMFPub_weakptrType;
    typedef MFUnrecChildFCDTestFCPtr MFFieldMFPub_mpchildptrType;
    typedef MFUnrecFCDTestFCPtr MFFieldMFPro_ptrType;
    typedef MFWeakFCDTestFCPtr MFFieldMFPro_weakptrType;
    typedef MFUnrecChildFCDTestFCPtr MFFieldMFPro_mpchildptrType;
    typedef MFUnrecFCDTestFCPtr MFFieldMFNo_ptrType;
    typedef MFWeakFCDTestFCPtr MFFieldMFNo_weakptrType;
    typedef MFUnrecChildFCDTestFCPtr MFFieldMFNo_mpchildptrType;
    typedef SFUnrecChildFCDSParTestFCPtr SFFieldSFPub_spchildptrType;
    typedef SFUnrecChildFCDSParTestFCPtr SFFieldSFPro_spchildptrType;
    typedef SFUnrecChildFCDSParTestFCPtr SFFieldSFNo_spchildptrType;
    typedef MFUnrecChildFCDSParTestFCPtr MFFieldMFPub_spchildptrType;
    typedef MFUnrecChildFCDSParTestFCPtr MFFieldMFPro_spchildptrType;
    typedef MFUnrecChildFCDSParTestFCPtr MFFieldMFNo_spchildptrType;

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

            const SFUnrecFCDTestFCPtr *getSFFieldSFPub_ptr (void) const;
                  SFUnrecFCDTestFCPtr *editSFFieldSFPub_ptr (void);
            const SFWeakFCDTestFCPtr  *getSFFieldSFPub_weakptr(void) const;
                  SFWeakFCDTestFCPtr  *editSFFieldSFPub_weakptr(void);
            const SFUnrecChildFCDTestFCPtr *getSFFieldSFPub_mpchildptr(void) const;
                  SFUnrecChildFCDTestFCPtr *editSFFieldSFPub_mpchildptr(void);
            const MFUnrecFCDTestFCPtr *getMFFieldMFPub_ptr (void) const;
            const MFWeakFCDTestFCPtr  *getMFFieldMFPub_weakptr(void) const;
            const MFUnrecChildFCDTestFCPtr *getMFFieldMFPub_mpchildptr(void) const;
            const SFUnrecChildFCDSParTestFCPtr *getSFFieldSFPub_spchildptr(void) const;
                  SFUnrecChildFCDSParTestFCPtr *editSFFieldSFPub_spchildptr(void);
            const MFUnrecChildFCDSParTestFCPtr *getMFFieldMFPub_spchildptr(void) const;


                  FCDTestFC * getFieldSFPub_ptr (void) const;

                  FCDTestFC * getFieldSFPub_weakptr(void) const;

                  FCDTestFC * getFieldSFPub_mpchildptr(void) const;

                  FCDTestFC * getFieldMFPub_ptr (const UInt32 index) const;

                  FCDTestFC * getFieldMFPub_weakptr(const UInt32 index) const;

                  FCDTestFC * getFieldMFPub_mpchildptr(const UInt32 index) const;

                  FCDSParTestFC * getFieldSFPub_spchildptr(void) const;

                  FCDSParTestFC * getFieldMFPub_spchildptr(const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFieldSFPub_ptr (FCDTestFC * const value);
            void setFieldSFPub_weakptr(FCDTestFC * const value);
            void setFieldSFPub_mpchildptr(FCDTestFC * const value);
            void setFieldSFPub_spchildptr(FCDSParTestFC * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToFieldMFPub_ptr           (FCDTestFC * const value   );
    void assignFieldMFPub_ptr          (const MFUnrecFCDTestFCPtr &value);
    void clearFieldMFPub_ptr            (void                         );
    void insertIntoFieldMFPub_ptr      (UInt32               uiIndex,
                                             FCDTestFC * const value   );
    void replaceInFieldMFPub_ptr  (      UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceObjInFieldMFPub_ptr (FCDTestFC * const pOldElem,
                                             FCDTestFC * const pNewElem);
    void removeFromFieldMFPub_ptr (UInt32               uiIndex );
    void removeObjFromFieldMFPub_ptr(FCDTestFC * const value   );

    void pushToFieldMFPub_weakptr           (FCDTestFC * const value   );
    void assignFieldMFPub_weakptr          (const MFWeakFCDTestFCPtr &value);
    void clearFieldMFPub_weakptr            (void                         );
    void insertIntoFieldMFPub_weakptr      (UInt32               uiIndex,
                                             FCDTestFC * const value   );
    void replaceInFieldMFPub_weakptr  (      UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceObjInFieldMFPub_weakptr (FCDTestFC * const pOldElem,
                                             FCDTestFC * const pNewElem);
    void removeFromFieldMFPub_weakptr (UInt32               uiIndex );
    void removeObjFromFieldMFPub_weakptr(FCDTestFC * const value   );

    void pushToFieldMFPub_mpchildptr           (FCDTestFC * const value   );
    void assignFieldMFPub_mpchildptr          (const MFUnrecChildFCDTestFCPtr &value);
    void clearFieldMFPub_mpchildptr            (void                         );
    void insertIntoFieldMFPub_mpchildptr      (UInt32               uiIndex,
                                             FCDTestFC * const value   );
    void replaceInFieldMFPub_mpchildptr  (      UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceObjInFieldMFPub_mpchildptr (FCDTestFC * const pOldElem,
                                             FCDTestFC * const pNewElem);
    void removeFromFieldMFPub_mpchildptr (UInt32               uiIndex );
    void removeObjFromFieldMFPub_mpchildptr(FCDTestFC * const value   );

    void pushToFieldMFPub_spchildptr           (FCDSParTestFC * const value   );
    void assignFieldMFPub_spchildptr          (const MFUnrecChildFCDSParTestFCPtr &value);
    void clearFieldMFPub_spchildptr            (void                         );
    void insertIntoFieldMFPub_spchildptr      (UInt32               uiIndex,
                                             FCDSParTestFC * const value   );
    void replaceInFieldMFPub_spchildptr  (      UInt32         uiIndex,
                                             FCDSParTestFC * const value   );
    void replaceObjInFieldMFPub_spchildptr (FCDSParTestFC * const pOldElem,
                                             FCDSParTestFC * const pNewElem);
    void removeFromFieldMFPub_spchildptr (UInt32               uiIndex );
    void removeObjFromFieldMFPub_spchildptr(FCDSParTestFC * const value   );

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

    static  FCDPtrTestFCNullCheckAccessTransitPtr  create          (void);
    static  FCDPtrTestFCNullCheckAccess           *createEmpty     (void);

    static  FCDPtrTestFCNullCheckAccessTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  FCDPtrTestFCNullCheckAccess            *createEmptyLocal(
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

    SFUnrecFCDTestFCPtr _sfFieldSFPub_ptr;
    SFWeakFCDTestFCPtr _sfFieldSFPub_weakptr;
    SFUnrecChildFCDTestFCPtr _sfFieldSFPub_mpchildptr;
    SFUnrecFCDTestFCPtr _sfFieldSFPro_ptr;
    SFWeakFCDTestFCPtr _sfFieldSFPro_weakptr;
    SFUnrecChildFCDTestFCPtr _sfFieldSFPro_mpchildptr;
    SFUnrecFCDTestFCPtr _sfFieldSFNo_ptr;
    SFWeakFCDTestFCPtr _sfFieldSFNo_weakptr;
    SFUnrecChildFCDTestFCPtr _sfFieldSFNo_mpchildptr;
    MFUnrecFCDTestFCPtr _mfFieldMFPub_ptr;
    MFWeakFCDTestFCPtr _mfFieldMFPub_weakptr;
    MFUnrecChildFCDTestFCPtr _mfFieldMFPub_mpchildptr;
    MFUnrecFCDTestFCPtr _mfFieldMFPro_ptr;
    MFWeakFCDTestFCPtr _mfFieldMFPro_weakptr;
    MFUnrecChildFCDTestFCPtr _mfFieldMFPro_mpchildptr;
    MFUnrecFCDTestFCPtr _mfFieldMFNo_ptr;
    MFWeakFCDTestFCPtr _mfFieldMFNo_weakptr;
    MFUnrecChildFCDTestFCPtr _mfFieldMFNo_mpchildptr;
    SFUnrecChildFCDSParTestFCPtr _sfFieldSFPub_spchildptr;
    SFUnrecChildFCDSParTestFCPtr _sfFieldSFPro_spchildptr;
    SFUnrecChildFCDSParTestFCPtr _sfFieldSFNo_spchildptr;
    MFUnrecChildFCDSParTestFCPtr _mfFieldMFPub_spchildptr;
    MFUnrecChildFCDSParTestFCPtr _mfFieldMFPro_spchildptr;
    MFUnrecChildFCDSParTestFCPtr _mfFieldMFNo_spchildptr;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FCDPtrTestFCNullCheckAccessBase(void);
    FCDPtrTestFCNullCheckAccessBase(const FCDPtrTestFCNullCheckAccessBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FCDPtrTestFCNullCheckAccessBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const FCDPtrTestFCNullCheckAccess *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFieldSFPub_ptr  (void) const;
    EditFieldHandlePtr editHandleFieldSFPub_ptr (void);
    GetFieldHandlePtr  getHandleFieldSFPub_weakptr (void) const;
    EditFieldHandlePtr editHandleFieldSFPub_weakptr(void);
    GetFieldHandlePtr  getHandleFieldSFPub_mpchildptr (void) const;
    EditFieldHandlePtr editHandleFieldSFPub_mpchildptr(void);
    GetFieldHandlePtr  getHandleFieldSFPro_ptr  (void) const;
    EditFieldHandlePtr editHandleFieldSFPro_ptr (void);
    GetFieldHandlePtr  getHandleFieldSFPro_weakptr (void) const;
    EditFieldHandlePtr editHandleFieldSFPro_weakptr(void);
    GetFieldHandlePtr  getHandleFieldSFPro_mpchildptr (void) const;
    EditFieldHandlePtr editHandleFieldSFPro_mpchildptr(void);
    GetFieldHandlePtr  getHandleFieldSFNo_ptr   (void) const;
    EditFieldHandlePtr editHandleFieldSFNo_ptr  (void);
    GetFieldHandlePtr  getHandleFieldSFNo_weakptr (void) const;
    EditFieldHandlePtr editHandleFieldSFNo_weakptr(void);
    GetFieldHandlePtr  getHandleFieldSFNo_mpchildptr (void) const;
    EditFieldHandlePtr editHandleFieldSFNo_mpchildptr(void);
    GetFieldHandlePtr  getHandleFieldMFPub_ptr  (void) const;
    EditFieldHandlePtr editHandleFieldMFPub_ptr (void);
    GetFieldHandlePtr  getHandleFieldMFPub_weakptr (void) const;
    EditFieldHandlePtr editHandleFieldMFPub_weakptr(void);
    GetFieldHandlePtr  getHandleFieldMFPub_mpchildptr (void) const;
    EditFieldHandlePtr editHandleFieldMFPub_mpchildptr(void);
    GetFieldHandlePtr  getHandleFieldMFPro_ptr  (void) const;
    EditFieldHandlePtr editHandleFieldMFPro_ptr (void);
    GetFieldHandlePtr  getHandleFieldMFPro_weakptr (void) const;
    EditFieldHandlePtr editHandleFieldMFPro_weakptr(void);
    GetFieldHandlePtr  getHandleFieldMFPro_mpchildptr (void) const;
    EditFieldHandlePtr editHandleFieldMFPro_mpchildptr(void);
    GetFieldHandlePtr  getHandleFieldMFNo_ptr   (void) const;
    EditFieldHandlePtr editHandleFieldMFNo_ptr  (void);
    GetFieldHandlePtr  getHandleFieldMFNo_weakptr (void) const;
    EditFieldHandlePtr editHandleFieldMFNo_weakptr(void);
    GetFieldHandlePtr  getHandleFieldMFNo_mpchildptr (void) const;
    EditFieldHandlePtr editHandleFieldMFNo_mpchildptr(void);
    GetFieldHandlePtr  getHandleFieldSFPub_spchildptr (void) const;
    EditFieldHandlePtr editHandleFieldSFPub_spchildptr(void);
    GetFieldHandlePtr  getHandleFieldSFPro_spchildptr (void) const;
    EditFieldHandlePtr editHandleFieldSFPro_spchildptr(void);
    GetFieldHandlePtr  getHandleFieldSFNo_spchildptr (void) const;
    EditFieldHandlePtr editHandleFieldSFNo_spchildptr(void);
    GetFieldHandlePtr  getHandleFieldMFPub_spchildptr (void) const;
    EditFieldHandlePtr editHandleFieldMFPub_spchildptr(void);
    GetFieldHandlePtr  getHandleFieldMFPro_spchildptr (void) const;
    EditFieldHandlePtr editHandleFieldMFPro_spchildptr(void);
    GetFieldHandlePtr  getHandleFieldMFNo_spchildptr (void) const;
    EditFieldHandlePtr editHandleFieldMFNo_spchildptr(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecFCDTestFCPtr *getSFFieldSFPro_ptr  (void) const;
                  SFUnrecFCDTestFCPtr *editSFFieldSFPro_ptr (void);
            const SFWeakFCDTestFCPtr  *getSFFieldSFPro_weakptr (void) const;
                  SFWeakFCDTestFCPtr  *editSFFieldSFPro_weakptr(void);
            const SFUnrecChildFCDTestFCPtr *getSFFieldSFPro_mpchildptr (void) const;
                  SFUnrecChildFCDTestFCPtr *editSFFieldSFPro_mpchildptr(void);
            const MFUnrecFCDTestFCPtr *getMFFieldMFPro_ptr  (void) const;
            const MFWeakFCDTestFCPtr  *getMFFieldMFPro_weakptr (void) const;
            const MFUnrecChildFCDTestFCPtr *getMFFieldMFPro_mpchildptr (void) const;
            const SFUnrecChildFCDSParTestFCPtr *getSFFieldSFPro_spchildptr (void) const;
                  SFUnrecChildFCDSParTestFCPtr *editSFFieldSFPro_spchildptr(void);
            const MFUnrecChildFCDSParTestFCPtr *getMFFieldMFPro_spchildptr (void) const;


                  FCDTestFC * getFieldSFPro_ptr (void) const;

                  FCDTestFC * getFieldSFPro_weakptr(void) const;

                  FCDTestFC * getFieldSFPro_mpchildptr(void) const;

                  FCDTestFC * getFieldMFPro_ptr (const UInt32 index) const;

                  FCDTestFC * getFieldMFPro_weakptr(const UInt32 index) const;

                  FCDTestFC * getFieldMFPro_mpchildptr(const UInt32 index) const;

                  FCDSParTestFC * getFieldSFPro_spchildptr(void) const;

                  FCDSParTestFC * getFieldMFPro_spchildptr(const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFieldSFPro_ptr (FCDTestFC * const value);
            void setFieldSFPro_weakptr(FCDTestFC * const value);
            void setFieldSFPro_mpchildptr(FCDTestFC * const value);
            void setFieldSFPro_spchildptr(FCDSParTestFC * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToFieldMFPro_ptr           (FCDTestFC * const value   );
    void assignFieldMFPro_ptr          (const MFUnrecFCDTestFCPtr &value);
    void clearFieldMFPro_ptr            (void                          );
    void insertIntoFieldMFPro_ptr      (UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceInFieldMFPro_ptr  (UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceObjInFieldMFPro_ptr (FCDTestFC * const pOldElem,
                                             FCDTestFC * const pNewElem);
    void removeFromFieldMFPro_ptr (UInt32                uiIndex );
    void removeObjFromFieldMFPro_ptr(FCDTestFC * const value   );

    void pushToFieldMFPro_weakptr           (FCDTestFC * const value   );
    void assignFieldMFPro_weakptr          (const MFWeakFCDTestFCPtr &value);
    void clearFieldMFPro_weakptr            (void                          );
    void insertIntoFieldMFPro_weakptr      (UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceInFieldMFPro_weakptr  (UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceObjInFieldMFPro_weakptr (FCDTestFC * const pOldElem,
                                             FCDTestFC * const pNewElem);
    void removeFromFieldMFPro_weakptr (UInt32                uiIndex );
    void removeObjFromFieldMFPro_weakptr(FCDTestFC * const value   );

    void pushToFieldMFPro_mpchildptr           (FCDTestFC * const value   );
    void assignFieldMFPro_mpchildptr          (const MFUnrecChildFCDTestFCPtr &value);
    void clearFieldMFPro_mpchildptr            (void                          );
    void insertIntoFieldMFPro_mpchildptr      (UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceInFieldMFPro_mpchildptr  (UInt32         uiIndex,
                                             FCDTestFC * const value   );
    void replaceObjInFieldMFPro_mpchildptr (FCDTestFC * const pOldElem,
                                             FCDTestFC * const pNewElem);
    void removeFromFieldMFPro_mpchildptr (UInt32                uiIndex );
    void removeObjFromFieldMFPro_mpchildptr(FCDTestFC * const value   );

    void pushToFieldMFPro_spchildptr           (FCDSParTestFC * const value   );
    void assignFieldMFPro_spchildptr          (const MFUnrecChildFCDSParTestFCPtr &value);
    void clearFieldMFPro_spchildptr            (void                          );
    void insertIntoFieldMFPro_spchildptr      (UInt32         uiIndex,
                                             FCDSParTestFC * const value   );
    void replaceInFieldMFPro_spchildptr  (UInt32         uiIndex,
                                             FCDSParTestFC * const value   );
    void replaceObjInFieldMFPro_spchildptr (FCDSParTestFC * const pOldElem,
                                             FCDSParTestFC * const pNewElem);
    void removeFromFieldMFPro_spchildptr (UInt32                uiIndex );
    void removeObjFromFieldMFPro_spchildptr(FCDSParTestFC * const value   );

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

            void execSync (      FCDPtrTestFCNullCheckAccessBase *pFrom,
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
    void operator =(const FCDPtrTestFCNullCheckAccessBase &source);
};

typedef FCDPtrTestFCNullCheckAccessBase *FCDPtrTestFCNullCheckAccessBaseP;

typedef CoredNodeRefPtr  <FCDPtrTestFCNullCheckAccess> FCDPtrTestFCNullCheckAccessNodeRefPtr;
typedef CoredNodeMTRefPtr<FCDPtrTestFCNullCheckAccess> FCDPtrTestFCNullCheckAccessNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGFCDPTRTESTFCNULLCHECKACCESSBASE_H_ */
