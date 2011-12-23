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

//#include "OSGBaseTypes.h"

#include "OSGGrabForeground.h" // Parent

#include "OSGBaseFields.h"              // Name type
#include "OSGSysFields.h"               // Frame type

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

    OSG_GEN_INTERNALPTR(FileGrabForeground);

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
        
    typedef SFString          SFNameType;
    typedef SFUInt32          SFFrameType;
    typedef SFBool            SFIncrementType;

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


                  SFString            *editSFName           (void);
            const SFString            *getSFName            (void) const;

                  SFUInt32            *editSFFrame          (void);
            const SFUInt32            *getSFFrame           (void) const;

                  SFBool              *editSFIncrement      (void);
            const SFBool              *getSFIncrement       (void) const;


                  std::string         &editName           (void);
            const std::string         &getName            (void) const;

                  UInt32              &editFrame          (void);
                  UInt32               getFrame           (void) const;

                  bool                &editIncrement      (void);
                  bool                 getIncrement       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setName           (const std::string &value);
            void setFrame          (const UInt32 value);
            void setIncrement      (const bool value);

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

    static  FileGrabForegroundTransitPtr  create          (void);
    static  FileGrabForeground           *createEmpty     (void);

    static  FileGrabForegroundTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  FileGrabForeground            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  FileGrabForegroundTransitPtr  createDependent  (BitVector bFlags);

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
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleName            (void) const;
    EditFieldHandlePtr editHandleName           (void);
    GetFieldHandlePtr  getHandleFrame           (void) const;
    EditFieldHandlePtr editHandleFrame          (void);
    GetFieldHandlePtr  getHandleIncrement       (void) const;
    EditFieldHandlePtr editHandleIncrement      (void);

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
    void operator =(const FileGrabForegroundBase &source);
};

typedef FileGrabForegroundBase *FileGrabForegroundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGFILEGRABFOREGROUNDBASE_H_ */
