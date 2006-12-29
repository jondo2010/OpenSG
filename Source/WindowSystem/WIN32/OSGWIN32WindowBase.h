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
 **     class WIN32Window
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGWIN32WINDOWBASE_H_
#define _OSGWIN32WINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowWIN32Def.h"

#include "OSGBaseTypes.h"

#include "OSGWindow.h" // Parent

#include "OSGWIN32WindowDataFields.h" // Hwnd type
#include "OSGWIN32WindowDataFields.h" // Hdc type
#include "OSGWIN32WindowDataFields.h" // Hglrc type

#include "OSGWIN32WindowFields.h"

OSG_BEGIN_NAMESPACE

class WIN32Window;

//! \brief WIN32Window Base Class.

class OSG_WINDOWWIN32_DLLMAPPING WIN32WindowBase : public Window
{
  public:

    typedef Window Inherited;
    typedef Window ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<WindowPtr,
                              WindowConstPtr,
                              WIN32Window>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<WindowPtr,
                              WindowConstPtr,
                              WIN32Window>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<WindowPtr,
                              WindowConstPtr,
                              WIN32Window>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<WindowPtr,
                              WindowConstPtr,
                              WIN32Window>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<WindowPtr,
                              WindowConstPtr,
                              WIN32Window>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<WindowPtr,
                              WindowConstPtr,
                              WIN32Window>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HwndFieldId = Inherited::NextFieldId,
        HdcFieldId = HwndFieldId + 1,
        HglrcFieldId = HdcFieldId + 1,
        NextFieldId = HglrcFieldId + 1
    };

    static const OSG::BitVector HwndFieldMask =
        (TypeTraits<BitVector>::One << HwndFieldId);
    static const OSG::BitVector HdcFieldMask =
        (TypeTraits<BitVector>::One << HdcFieldId);
    static const OSG::BitVector HglrcFieldMask =
        (TypeTraits<BitVector>::One << HglrcFieldId);
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
                  SFHWND              *getSFHwnd            (void);
#endif
                  SFHWND              *editSFHwnd           (void);
            const SFHWND              *getSFHwnd            (void) const;

#ifdef OSG_1_COMPAT
                  SFHDC               *getSFHdc             (void);
#endif
                  SFHDC               *editSFHdc            (void);
            const SFHDC               *getSFHdc             (void) const;

#ifdef OSG_1_COMPAT
                  SFHGLRC             *getSFHglrc           (void);
#endif
                  SFHGLRC             *editSFHglrc          (void);
            const SFHGLRC             *getSFHglrc           (void) const;


#ifdef OSG_1_COMPAT
                  HWND                &getHwnd            (void);
#endif
                  HWND                &editHwnd           (void);
            const HWND                &getHwnd            (void) const;

#ifdef OSG_1_COMPAT
                  HDC                 &getHdc             (void);
#endif
                  HDC                 &editHdc            (void);
            const HDC                 &getHdc             (void) const;

#ifdef OSG_1_COMPAT
                  HGLRC               &getHglrc           (void);
#endif
                  HGLRC               &editHglrc          (void);
            const HGLRC               &getHglrc           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setHwnd           (const HWND &value);
            void setHdc            (const HDC &value);
            void setHglrc          (const HGLRC &value);

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

    static  WIN32WindowPtr create     (void);
    static  WIN32WindowPtr createEmpty(void);

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

    SFHWND            _sfHwnd;
    SFHDC             _sfHdc;
    SFHGLRC           _sfHglrc;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    WIN32WindowBase(void);
    WIN32WindowBase(const WIN32WindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WIN32WindowBase(void);

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

            void execSync (      WIN32WindowBase *pFrom,
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

            void execSync (      WIN32WindowBase *pFrom,
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
    void operator =(const WIN32WindowBase &source);
};

typedef WIN32WindowBase *WIN32WindowBaseP;

/** Type specific RefPtr type for WIN32Window. */
typedef RefPtr<WIN32WindowPtr> WIN32WindowRefPtr;

typedef osgIF<
    WIN32WindowBase::isNodeCore,

    CoredNodePtr<WIN32Window>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        WIN32WindowNodePtr;

OSG_END_NAMESPACE

#define OSGWIN32WINDOWBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGWIN32WINDOWBASE_H_ */
