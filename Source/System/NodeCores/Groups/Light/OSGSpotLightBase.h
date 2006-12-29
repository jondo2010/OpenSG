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
 **     class SpotLight
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSPOTLIGHTBASE_H_
#define _OSGSPOTLIGHTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGPointLight.h" // Parent

#include "OSGVec3rFields.h" // Direction type
#include "OSGRealFields.h" // SpotExponent type
#include "OSGRealFields.h" // SpotCutOff type

#include "OSGSpotLightFields.h"

OSG_BEGIN_NAMESPACE

class SpotLight;

//! \brief SpotLight Base Class.

class OSG_GROUP_DLLMAPPING SpotLightBase : public PointLight
{
  public:

    typedef PointLight Inherited;
    typedef PointLight ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<PointLightPtr,
                              PointLightConstPtr,
                              SpotLight>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<PointLightPtr,
                              PointLightConstPtr,
                              SpotLight>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<PointLightPtr,
                              PointLightConstPtr,
                              SpotLight>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<PointLightPtr,
                              PointLightConstPtr,
                              SpotLight>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<PointLightPtr,
                              PointLightConstPtr,
                              SpotLight>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<PointLightPtr,
                              PointLightConstPtr,
                              SpotLight>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DirectionFieldId = Inherited::NextFieldId,
        SpotExponentFieldId = DirectionFieldId + 1,
        SpotCutOffFieldId = SpotExponentFieldId + 1,
        NextFieldId = SpotCutOffFieldId + 1
    };

    static const OSG::BitVector DirectionFieldMask =
        (TypeTraits<BitVector>::One << DirectionFieldId);
    static const OSG::BitVector SpotExponentFieldMask =
        (TypeTraits<BitVector>::One << SpotExponentFieldId);
    static const OSG::BitVector SpotCutOffFieldMask =
        (TypeTraits<BitVector>::One << SpotCutOffFieldId);
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
                  SFVec3r             *getSFDirection       (void);
#endif
                  SFVec3r             *editSFDirection      (void);
            const SFVec3r             *getSFDirection       (void) const;

#ifdef OSG_1_COMPAT
                  SFReal              *getSFSpotExponent    (void);
#endif
                  SFReal              *editSFSpotExponent   (void);
            const SFReal              *getSFSpotExponent    (void) const;

#ifdef OSG_1_COMPAT
                  SFReal              *getSFSpotCutOff      (void);
#endif
                  SFReal              *editSFSpotCutOff     (void);
            const SFReal              *getSFSpotCutOff      (void) const;


#ifdef OSG_1_COMPAT
                  Vec3r               &getDirection       (void);
#endif
                  Vec3r               &editDirection      (void);
            const Vec3r               &getDirection       (void) const;

#ifdef OSG_1_COMPAT
                  Real                &getSpotExponent    (void);
#endif
                  Real                &editSpotExponent   (void);
            const Real                &getSpotExponent    (void) const;

#ifdef OSG_1_COMPAT
                  Real                &getSpotCutOff      (void);
#endif
                  Real                &editSpotCutOff     (void);
            const Real                &getSpotCutOff      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDirection      (const Vec3r &value);
            void setSpotExponent   (const Real &value);
            void setSpotCutOff     (const Real &value);

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

    static  SpotLightPtr create     (void);
    static  SpotLightPtr createEmpty(void);

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

    SFVec3r           _sfDirection;
    SFReal            _sfSpotExponent;
    SFReal            _sfSpotCutOff;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SpotLightBase(void);
    SpotLightBase(const SpotLightBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SpotLightBase(void);

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

            void execSync (      SpotLightBase *pFrom,
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

            void execSync (      SpotLightBase *pFrom,
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
    void operator =(const SpotLightBase &source);
};

typedef SpotLightBase *SpotLightBaseP;

/** Type specific RefPtr type for SpotLight. */
typedef RefPtr<SpotLightPtr> SpotLightRefPtr;

typedef osgIF<
    SpotLightBase::isNodeCore,

    CoredNodePtr<SpotLight>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        SpotLightNodePtr;

OSG_END_NAMESPACE

#define OSGSPOTLIGHTBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGSPOTLIGHTBASE_H_ */
