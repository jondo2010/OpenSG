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
 **     class FileGrabForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFILEGRABFOREGROUNDBASE_H_
#define _OSGFILEGRABFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGGrabForeground.h" // Parent

#include "OSGStringFields.h" // Name type
#include "OSGUInt32Fields.h" // Frame type
#include "OSGBoolFields.h" // Increment type

#include "OSGFileGrabForegroundFields.h"

OSG_BEGIN_NAMESPACE

class FileGrabForeground;

//! \brief FileGrabForeground Base Class.

class OSG_WINDOW_DLLMAPPING FileGrabForegroundBase : public GrabForeground
{
  public:

    typedef GrabForeground Inherited;
    typedef GrabForeground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<GrabForegroundPtr,
                              GrabForegroundConstPtr,
                              FileGrabForeground>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<GrabForegroundPtr,
                              GrabForegroundConstPtr,
                              FileGrabForeground>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<GrabForegroundPtr,
                              GrabForegroundConstPtr,
                              FileGrabForeground>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<GrabForegroundPtr,
                              GrabForegroundConstPtr,
                              FileGrabForeground>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<GrabForegroundPtr,
                              GrabForegroundConstPtr,
                              FileGrabForeground>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<GrabForegroundPtr,
                              GrabForegroundConstPtr,
                              FileGrabForeground>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        NameFieldId = Inherited::NextFieldId,
        FrameFieldId = NameFieldId + 1,
        IncrementFieldId = FrameFieldId + 1,
        NextFieldId = IncrementFieldId + 1
    };

    static const OSG::BitVector NameFieldMask =
        (TypeTraits<BitVector>::One << NameFieldId);
    static const OSG::BitVector FrameFieldMask =
        (TypeTraits<BitVector>::One << FrameFieldId);
    static const OSG::BitVector IncrementFieldMask =
        (TypeTraits<BitVector>::One << IncrementFieldId);
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
                  SFString            *getSFName            (void);
#endif
                  SFString            *editSFName           (void);
            const SFString            *getSFName            (void) const;

#ifdef OSG_1_COMPAT
                  SFUInt32            *getSFFrame           (void);
#endif
                  SFUInt32            *editSFFrame          (void);
            const SFUInt32            *getSFFrame           (void) const;

#ifdef OSG_1_COMPAT
                  SFBool              *getSFIncrement       (void);
#endif
                  SFBool              *editSFIncrement      (void);
            const SFBool              *getSFIncrement       (void) const;


#ifdef OSG_1_COMPAT
                  std::string         &getName            (void);
#endif
                  std::string         &editName           (void);
            const std::string         &getName            (void) const;

#ifdef OSG_1_COMPAT
                  UInt32              &getFrame           (void);
#endif
                  UInt32              &editFrame          (void);
            const UInt32              &getFrame           (void) const;

#ifdef OSG_1_COMPAT
                  bool                &getIncrement       (void);
#endif
                  bool                &editIncrement      (void);
            const bool                &getIncrement       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setName           (const std::string &value);
            void setFrame          (const UInt32 &value);
            void setIncrement      (const bool &value);

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

    static  FileGrabForegroundPtr create     (void);
    static  FileGrabForegroundPtr createEmpty(void);

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

    SFString          _sfName;
    SFUInt32          _sfFrame;
    SFBool            _sfIncrement;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FileGrabForegroundBase(void);
    FileGrabForegroundBase(const FileGrabForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FileGrabForegroundBase(void);

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

            void execSync (      FileGrabForegroundBase *pFrom,
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

            void execSync (      FileGrabForegroundBase *pFrom,
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
    void operator =(const FileGrabForegroundBase &source);
};

typedef FileGrabForegroundBase *FileGrabForegroundBaseP;

/** Type specific RefPtr type for FileGrabForeground. */
typedef RefPtr<FileGrabForegroundPtr> FileGrabForegroundRefPtr;

typedef osgIF<
    FileGrabForegroundBase::isNodeCore,

    CoredNodePtr<FileGrabForeground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        FileGrabForegroundNodePtr;

OSG_END_NAMESPACE

#define OSGFILEGRABFOREGROUNDBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGFILEGRABFOREGROUNDBASE_H_ */
