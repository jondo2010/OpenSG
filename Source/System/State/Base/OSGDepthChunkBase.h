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
 **     class DepthChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDEPTHCHUNKBASE_H_
#define _OSGDEPTHCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGBoolFields.h" // Enable type
#include "OSGGLenumFields.h" // Func type
#include "OSGReal32Fields.h" // Near type
#include "OSGReal32Fields.h" // Far type
#include "OSGBoolFields.h" // ReadOnly type

#include "OSGDepthChunkFields.h"

OSG_BEGIN_NAMESPACE

class DepthChunk;

//! \brief DepthChunk Base Class.

class OSG_SYSTEM_DLLMAPPING DepthChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DepthChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EnableFieldId = Inherited::NextFieldId,
        FuncFieldId = EnableFieldId + 1,
        NearFieldId = FuncFieldId + 1,
        FarFieldId = NearFieldId + 1,
        ReadOnlyFieldId = FarFieldId + 1,
        NextFieldId = ReadOnlyFieldId + 1
    };

    static const OSG::BitVector EnableFieldMask =
        (TypeTraits<BitVector>::One << EnableFieldId);
    static const OSG::BitVector FuncFieldMask =
        (TypeTraits<BitVector>::One << FuncFieldId);
    static const OSG::BitVector NearFieldMask =
        (TypeTraits<BitVector>::One << NearFieldId);
    static const OSG::BitVector FarFieldMask =
        (TypeTraits<BitVector>::One << FarFieldId);
    static const OSG::BitVector ReadOnlyFieldMask =
        (TypeTraits<BitVector>::One << ReadOnlyFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBool            SFEnableType;
    typedef SFGLenum          SFFuncType;
    typedef SFReal32          SFNearType;
    typedef SFReal32          SFFarType;
    typedef SFBool            SFReadOnlyType;

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


                  SFBool              *editSFEnable         (void);
            const SFBool              *getSFEnable          (void) const;

                  SFGLenum            *editSFFunc           (void);
            const SFGLenum            *getSFFunc            (void) const;

                  SFReal32            *editSFNear           (void);
            const SFReal32            *getSFNear            (void) const;

                  SFReal32            *editSFFar            (void);
            const SFReal32            *getSFFar             (void) const;

                  SFBool              *editSFReadOnly       (void);
            const SFBool              *getSFReadOnly        (void) const;


                  bool                &editEnable         (void);
                  bool                 getEnable          (void) const;

                  GLenum              &editFunc           (void);
            const GLenum              &getFunc            (void) const;

                  Real32              &editNear           (void);
                  Real32               getNear            (void) const;

                  Real32              &editFar            (void);
                  Real32               getFar             (void) const;

                  bool                &editReadOnly       (void);
                  bool                 getReadOnly        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setEnable         (const bool value);
            void setFunc           (const GLenum &value);
            void setNear           (const Real32 value);
            void setFar            (const Real32 value);
            void setReadOnly       (const bool value);

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

    static  DepthChunkTransitPtr  create          (void);
    static  DepthChunk           *createEmpty     (void);

    static  DepthChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DepthChunk            *createEmptyLocal(
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

    SFBool            _sfEnable;
    SFGLenum          _sfFunc;
    SFReal32          _sfNear;
    SFReal32          _sfFar;
    SFBool            _sfReadOnly;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DepthChunkBase(void);
    DepthChunkBase(const DepthChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DepthChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleEnable          (void) const;
    EditFieldHandlePtr editHandleEnable         (void);
    GetFieldHandlePtr  getHandleFunc            (void) const;
    EditFieldHandlePtr editHandleFunc           (void);
    GetFieldHandlePtr  getHandleNear            (void) const;
    EditFieldHandlePtr editHandleNear           (void);
    GetFieldHandlePtr  getHandleFar             (void) const;
    EditFieldHandlePtr editHandleFar            (void);
    GetFieldHandlePtr  getHandleReadOnly        (void) const;
    EditFieldHandlePtr editHandleReadOnly       (void);

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

            void execSync (      DepthChunkBase *pFrom,
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
    void operator =(const DepthChunkBase &source);
};

typedef DepthChunkBase *DepthChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDEPTHCHUNKBASE_H_ */
