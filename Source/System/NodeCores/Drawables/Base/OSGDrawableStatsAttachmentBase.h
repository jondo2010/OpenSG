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
 **     class DrawableStatsAttachment
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDRAWABLESTATSATTACHMENTBASE_H_
#define _OSGDRAWABLESTATSATTACHMENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStatsAttachment.h" // Parent

#include "OSGUInt32Fields.h" // Vertices type
#include "OSGUInt32Fields.h" // Points type
#include "OSGUInt32Fields.h" // Lines type
#include "OSGUInt32Fields.h" // Triangles type
#include "OSGUInt32Fields.h" // ProcessedAttributeBytes type
#include "OSGUInt32Fields.h" // StoredAttributeBytes type
#include "OSGBoolFields.h" // Valid type

#include "OSGDrawableStatsAttachmentFields.h"

OSG_BEGIN_NAMESPACE

class DrawableStatsAttachment;

//! \brief DrawableStatsAttachment Base Class.

class OSG_SYSTEM_DLLMAPPING DrawableStatsAttachmentBase : public StatsAttachment
{
  public:

    typedef StatsAttachment Inherited;
    typedef StatsAttachment ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DrawableStatsAttachment);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        VerticesFieldId = Inherited::NextFieldId,
        PointsFieldId = VerticesFieldId + 1,
        LinesFieldId = PointsFieldId + 1,
        TrianglesFieldId = LinesFieldId + 1,
        ProcessedAttributeBytesFieldId = TrianglesFieldId + 1,
        StoredAttributeBytesFieldId = ProcessedAttributeBytesFieldId + 1,
        ValidFieldId = StoredAttributeBytesFieldId + 1,
        NextFieldId = ValidFieldId + 1
    };

    static const OSG::BitVector VerticesFieldMask =
        (TypeTraits<BitVector>::One << VerticesFieldId);
    static const OSG::BitVector PointsFieldMask =
        (TypeTraits<BitVector>::One << PointsFieldId);
    static const OSG::BitVector LinesFieldMask =
        (TypeTraits<BitVector>::One << LinesFieldId);
    static const OSG::BitVector TrianglesFieldMask =
        (TypeTraits<BitVector>::One << TrianglesFieldId);
    static const OSG::BitVector ProcessedAttributeBytesFieldMask =
        (TypeTraits<BitVector>::One << ProcessedAttributeBytesFieldId);
    static const OSG::BitVector StoredAttributeBytesFieldMask =
        (TypeTraits<BitVector>::One << StoredAttributeBytesFieldId);
    static const OSG::BitVector ValidFieldMask =
        (TypeTraits<BitVector>::One << ValidFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFVerticesType;
    typedef SFUInt32          SFPointsType;
    typedef SFUInt32          SFLinesType;
    typedef SFUInt32          SFTrianglesType;
    typedef SFUInt32          SFProcessedAttributeBytesType;
    typedef SFUInt32          SFStoredAttributeBytesType;
    typedef SFBool            SFValidType;

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


                  SFUInt32            *editSFVertices       (void);
            const SFUInt32            *getSFVertices        (void) const;

                  SFUInt32            *editSFPoints         (void);
            const SFUInt32            *getSFPoints          (void) const;

                  SFUInt32            *editSFLines          (void);
            const SFUInt32            *getSFLines           (void) const;

                  SFUInt32            *editSFTriangles      (void);
            const SFUInt32            *getSFTriangles       (void) const;

                  SFUInt32            *editSFProcessedAttributeBytes(void);
            const SFUInt32            *getSFProcessedAttributeBytes (void) const;

                  SFUInt32            *editSFStoredAttributeBytes(void);
            const SFUInt32            *getSFStoredAttributeBytes (void) const;

                  SFBool              *editSFValid          (void);
            const SFBool              *getSFValid           (void) const;


                  UInt32              &editVertices       (void);
                  UInt32               getVertices        (void) const;

                  UInt32              &editPoints         (void);
                  UInt32               getPoints          (void) const;

                  UInt32              &editLines          (void);
                  UInt32               getLines           (void) const;

                  UInt32              &editTriangles      (void);
                  UInt32               getTriangles       (void) const;

                  UInt32              &editProcessedAttributeBytes(void);
                  UInt32               getProcessedAttributeBytes (void) const;

                  UInt32              &editStoredAttributeBytes(void);
                  UInt32               getStoredAttributeBytes (void) const;

                  bool                &editValid          (void);
                  bool                 getValid           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setVertices       (const UInt32 value);
            void setPoints         (const UInt32 value);
            void setLines          (const UInt32 value);
            void setTriangles      (const UInt32 value);
            void setProcessedAttributeBytes(const UInt32 value);
            void setStoredAttributeBytes(const UInt32 value);
            void setValid          (const bool value);

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

    static  DrawableStatsAttachmentTransitPtr  create          (void);
    static  DrawableStatsAttachment           *createEmpty     (void);

    static  DrawableStatsAttachmentTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DrawableStatsAttachment            *createEmptyLocal(
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

    SFUInt32          _sfVertices;
    SFUInt32          _sfPoints;
    SFUInt32          _sfLines;
    SFUInt32          _sfTriangles;
    SFUInt32          _sfProcessedAttributeBytes;
    SFUInt32          _sfStoredAttributeBytes;
    SFBool            _sfValid;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DrawableStatsAttachmentBase(void);
    DrawableStatsAttachmentBase(const DrawableStatsAttachmentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DrawableStatsAttachmentBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleVertices        (void) const;
    EditFieldHandlePtr editHandleVertices       (void);
    GetFieldHandlePtr  getHandlePoints          (void) const;
    EditFieldHandlePtr editHandlePoints         (void);
    GetFieldHandlePtr  getHandleLines           (void) const;
    EditFieldHandlePtr editHandleLines          (void);
    GetFieldHandlePtr  getHandleTriangles       (void) const;
    EditFieldHandlePtr editHandleTriangles      (void);
    GetFieldHandlePtr  getHandleProcessedAttributeBytes (void) const;
    EditFieldHandlePtr editHandleProcessedAttributeBytes(void);
    GetFieldHandlePtr  getHandleStoredAttributeBytes (void) const;
    EditFieldHandlePtr editHandleStoredAttributeBytes(void);
    GetFieldHandlePtr  getHandleValid           (void) const;
    EditFieldHandlePtr editHandleValid          (void);

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

            void execSync (      DrawableStatsAttachmentBase *pFrom,
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
    void operator =(const DrawableStatsAttachmentBase &source);
};

typedef DrawableStatsAttachmentBase *DrawableStatsAttachmentBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDRAWABLESTATSATTACHMENTBASE_H_ */
