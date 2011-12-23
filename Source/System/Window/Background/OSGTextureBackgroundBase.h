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
 **     class TextureBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREBACKGROUNDBASE_H_
#define _OSGTEXTUREBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

//#include "OSGBaseTypes.h"

#include "OSGBackground.h" // Parent

#include "OSGBaseFields.h"              // Color type
#include "OSGTextureBaseChunkFields.h"  // Texture type
#include "OSGVecFields.h"               // TexCoords type
#include "OSGSysFields.h"               // RadialDistortion type

#include "OSGTextureBackgroundFields.h"

OSG_BEGIN_NAMESPACE


class TextureBackground;

//! \brief TextureBackground Base Class.

class OSG_WINDOW_DLLMAPPING TextureBackgroundBase : public Background
{
  public:

    typedef Background Inherited;
    typedef Background ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextureBackground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ColorFieldId = Inherited::NextFieldId,
        TextureFieldId = ColorFieldId + 1,
        TexCoordsFieldId = TextureFieldId + 1,
        RadialDistortionFieldId = TexCoordsFieldId + 1,
        CenterOfDistortionFieldId = RadialDistortionFieldId + 1,
        HorFieldId = CenterOfDistortionFieldId + 1,
        VertFieldId = HorFieldId + 1,
        NextFieldId = VertFieldId + 1
    };

    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector TextureFieldMask =
        (TypeTraits<BitVector>::One << TextureFieldId);
    static const OSG::BitVector TexCoordsFieldMask =
        (TypeTraits<BitVector>::One << TexCoordsFieldId);
    static const OSG::BitVector RadialDistortionFieldMask =
        (TypeTraits<BitVector>::One << RadialDistortionFieldId);
    static const OSG::BitVector CenterOfDistortionFieldMask =
        (TypeTraits<BitVector>::One << CenterOfDistortionFieldId);
    static const OSG::BitVector HorFieldMask =
        (TypeTraits<BitVector>::One << HorFieldId);
    static const OSG::BitVector VertFieldMask =
        (TypeTraits<BitVector>::One << VertFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFColor4f         SFColorType;
    typedef SFUnrecTextureBaseChunkPtr SFTextureType;
    typedef MFPnt2f           MFTexCoordsType;
    typedef SFReal32          SFRadialDistortionType;
    typedef SFVec2f           SFCenterOfDistortionType;
    typedef SFUInt16          SFHorType;
    typedef SFUInt16          SFVertType;

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


                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;
            const SFUnrecTextureBaseChunkPtr *getSFTexture        (void) const;
                  SFUnrecTextureBaseChunkPtr *editSFTexture        (void);

                  MFPnt2f             *editMFTexCoords      (void);
            const MFPnt2f             *getMFTexCoords       (void) const;

                  SFReal32            *editSFRadialDistortion(void);
            const SFReal32            *getSFRadialDistortion (void) const;

                  SFVec2f             *editSFCenterOfDistortion(void);
            const SFVec2f             *getSFCenterOfDistortion (void) const;

                  SFUInt16            *editSFHor            (void);
            const SFUInt16            *getSFHor             (void) const;

                  SFUInt16            *editSFVert           (void);
            const SFUInt16            *getSFVert            (void) const;


                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

                  TextureBaseChunk * getTexture        (void) const;

                  Pnt2f               &editTexCoords      (const UInt32 index);
            const Pnt2f               &getTexCoords       (const UInt32 index) const;

                  Real32              &editRadialDistortion(void);
                  Real32               getRadialDistortion (void) const;

                  Vec2f               &editCenterOfDistortion(void);
            const Vec2f               &getCenterOfDistortion (void) const;

                  UInt16              &editHor            (void);
                  UInt16               getHor             (void) const;

                  UInt16              &editVert           (void);
                  UInt16               getVert            (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setColor          (const Color4f &value);
            void setTexture        (TextureBaseChunk * const value);
            void setRadialDistortion(const Real32 value);
            void setCenterOfDistortion(const Vec2f &value);
            void setHor            (const UInt16 value);
            void setVert           (const UInt16 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  TextureBackgroundTransitPtr  create          (void);
    static  TextureBackground           *createEmpty     (void);

    static  TextureBackgroundTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TextureBackground            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TextureBackgroundTransitPtr  createDependent  (BitVector bFlags);

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

    SFColor4f         _sfColor;
    SFUnrecTextureBaseChunkPtr _sfTexture;
    MFPnt2f           _mfTexCoords;
    SFReal32          _sfRadialDistortion;
    SFVec2f           _sfCenterOfDistortion;
    SFUInt16          _sfHor;
    SFUInt16          _sfVert;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureBackgroundBase(void);
    TextureBackgroundBase(const TextureBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureBackgroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextureBackground *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleColor           (void) const;
    EditFieldHandlePtr editHandleColor          (void);
    GetFieldHandlePtr  getHandleTexture         (void) const;
    EditFieldHandlePtr editHandleTexture        (void);
    GetFieldHandlePtr  getHandleTexCoords       (void) const;
    EditFieldHandlePtr editHandleTexCoords      (void);
    GetFieldHandlePtr  getHandleRadialDistortion (void) const;
    EditFieldHandlePtr editHandleRadialDistortion(void);
    GetFieldHandlePtr  getHandleCenterOfDistortion (void) const;
    EditFieldHandlePtr editHandleCenterOfDistortion(void);
    GetFieldHandlePtr  getHandleHor             (void) const;
    EditFieldHandlePtr editHandleHor            (void);
    GetFieldHandlePtr  getHandleVert            (void) const;
    EditFieldHandlePtr editHandleVert           (void);

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

            void execSync (      TextureBackgroundBase *pFrom,
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
    void operator =(const TextureBackgroundBase &source);
};

typedef TextureBackgroundBase *TextureBackgroundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREBACKGROUNDBASE_H_ */
