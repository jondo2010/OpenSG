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
 **     class TileCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTILECAMERADECORATORBASE_H_
#define _OSGTILECAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGCameraDecorator.h" // Parent

#include "OSGReal32Fields.h" // Left type
#include "OSGReal32Fields.h" // Right type
#include "OSGReal32Fields.h" // Bottom type
#include "OSGReal32Fields.h" // Top type
#include "OSGUInt32Fields.h" // FullWidth type
#include "OSGUInt32Fields.h" // FullHeight type

#include "OSGTileCameraDecoratorFields.h"

OSG_BEGIN_NAMESPACE

class TileCameraDecorator;

//! \brief TileCameraDecorator Base Class.

class OSG_WINDOW_DLLMAPPING TileCameraDecoratorBase : public CameraDecorator
{
  public:

    typedef CameraDecorator Inherited;
    typedef CameraDecorator ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TileCameraDecorator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LeftFieldId = Inherited::NextFieldId,
        RightFieldId = LeftFieldId + 1,
        BottomFieldId = RightFieldId + 1,
        TopFieldId = BottomFieldId + 1,
        FullWidthFieldId = TopFieldId + 1,
        FullHeightFieldId = FullWidthFieldId + 1,
        NextFieldId = FullHeightFieldId + 1
    };

    static const OSG::BitVector LeftFieldMask =
        (TypeTraits<BitVector>::One << LeftFieldId);
    static const OSG::BitVector RightFieldMask =
        (TypeTraits<BitVector>::One << RightFieldId);
    static const OSG::BitVector BottomFieldMask =
        (TypeTraits<BitVector>::One << BottomFieldId);
    static const OSG::BitVector TopFieldMask =
        (TypeTraits<BitVector>::One << TopFieldId);
    static const OSG::BitVector FullWidthFieldMask =
        (TypeTraits<BitVector>::One << FullWidthFieldId);
    static const OSG::BitVector FullHeightFieldMask =
        (TypeTraits<BitVector>::One << FullHeightFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFLeftType;
    typedef SFReal32          SFRightType;
    typedef SFReal32          SFBottomType;
    typedef SFReal32          SFTopType;
    typedef SFUInt32          SFFullWidthType;
    typedef SFUInt32          SFFullHeightType;

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


                  SFReal32            *editSFLeft           (void);
            const SFReal32            *getSFLeft            (void) const;

                  SFReal32            *editSFRight          (void);
            const SFReal32            *getSFRight           (void) const;

                  SFReal32            *editSFBottom         (void);
            const SFReal32            *getSFBottom          (void) const;

                  SFReal32            *editSFTop            (void);
            const SFReal32            *getSFTop             (void) const;

                  SFUInt32            *editSFFullWidth      (void);
            const SFUInt32            *getSFFullWidth       (void) const;

                  SFUInt32            *editSFFullHeight     (void);
            const SFUInt32            *getSFFullHeight      (void) const;


                  Real32              &editLeft           (void);
                  Real32               getLeft            (void) const;

                  Real32              &editRight          (void);
                  Real32               getRight           (void) const;

                  Real32              &editBottom         (void);
                  Real32               getBottom          (void) const;

                  Real32              &editTop            (void);
                  Real32               getTop             (void) const;

                  UInt32              &editFullWidth      (void);
                  UInt32               getFullWidth       (void) const;

                  UInt32              &editFullHeight     (void);
                  UInt32               getFullHeight      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLeft           (const Real32 value);
            void setRight          (const Real32 value);
            void setBottom         (const Real32 value);
            void setTop            (const Real32 value);
            void setFullWidth      (const UInt32 value);
            void setFullHeight     (const UInt32 value);

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

    static  TileCameraDecoratorTransitPtr  create          (void);
    static  TileCameraDecorator           *createEmpty     (void);

    static  TileCameraDecoratorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TileCameraDecorator            *createEmptyLocal(
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

    SFReal32          _sfLeft;
    SFReal32          _sfRight;
    SFReal32          _sfBottom;
    SFReal32          _sfTop;
    SFUInt32          _sfFullWidth;
    SFUInt32          _sfFullHeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TileCameraDecoratorBase(void);
    TileCameraDecoratorBase(const TileCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TileCameraDecoratorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLeft            (void) const;
    EditFieldHandlePtr editHandleLeft           (void);
    GetFieldHandlePtr  getHandleRight           (void) const;
    EditFieldHandlePtr editHandleRight          (void);
    GetFieldHandlePtr  getHandleBottom          (void) const;
    EditFieldHandlePtr editHandleBottom         (void);
    GetFieldHandlePtr  getHandleTop             (void) const;
    EditFieldHandlePtr editHandleTop            (void);
    GetFieldHandlePtr  getHandleFullWidth       (void) const;
    EditFieldHandlePtr editHandleFullWidth      (void);
    GetFieldHandlePtr  getHandleFullHeight      (void) const;
    EditFieldHandlePtr editHandleFullHeight     (void);

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

            void execSync (      TileCameraDecoratorBase *pFrom,
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
    void operator =(const TileCameraDecoratorBase &source);
};

typedef TileCameraDecoratorBase *TileCameraDecoratorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTILECAMERADECORATORBASE_H_ */
