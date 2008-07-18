/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class CSMSceneParameter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CSMSceneParameterBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMSceneParameterBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMSceneParameterBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the CSMSceneParameter::_sfSceneRef field.
inline
Node * CSMSceneParameterBase::getSceneRef(void) const
{
    return _sfSceneRef.getValue();
}

//! Set the value of the CSMSceneParameter::_sfSceneRef field.
inline
void CSMSceneParameterBase::setSceneRef(Node * const value)
{
    editSField(SceneRefFieldMask);

    _sfSceneRef.setValue(value);
}
//! Get the value of the CSMSceneParameter::_sfDistScale field.

inline
Real32 &CSMSceneParameterBase::editDistScale(void)
{
    editSField(DistScaleFieldMask);

    return _sfDistScale.getValue();
}

//! Get the value of the CSMSceneParameter::_sfDistScale field.
inline
      Real32  CSMSceneParameterBase::getDistScale(void) const
{
    return _sfDistScale.getValue();
}

//! Set the value of the CSMSceneParameter::_sfDistScale field.
inline
void CSMSceneParameterBase::setDistScale(const Real32 value)
{
    editSField(DistScaleFieldMask);

    _sfDistScale.setValue(value);
}
//! Get the value of the CSMSceneParameter::_sfSceneDiag field.

inline
Vec3f &CSMSceneParameterBase::editSceneDiag(void)
{
    editSField(SceneDiagFieldMask);

    return _sfSceneDiag.getValue();
}

//! Get the value of the CSMSceneParameter::_sfSceneDiag field.
inline
const Vec3f &CSMSceneParameterBase::getSceneDiag(void) const
{
    return _sfSceneDiag.getValue();
}

//! Set the value of the CSMSceneParameter::_sfSceneDiag field.
inline
void CSMSceneParameterBase::setSceneDiag(const Vec3f &value)
{
    editSField(SceneDiagFieldMask);

    _sfSceneDiag.setValue(value);
}
//! Get the value of the CSMSceneParameter::_sfInitViewPos field.

inline
Pnt3f &CSMSceneParameterBase::editInitViewPos(void)
{
    editSField(InitViewPosFieldMask);

    return _sfInitViewPos.getValue();
}

//! Get the value of the CSMSceneParameter::_sfInitViewPos field.
inline
const Pnt3f &CSMSceneParameterBase::getInitViewPos(void) const
{
    return _sfInitViewPos.getValue();
}

//! Set the value of the CSMSceneParameter::_sfInitViewPos field.
inline
void CSMSceneParameterBase::setInitViewPos(const Pnt3f &value)
{
    editSField(InitViewPosFieldMask);

    _sfInitViewPos.setValue(value);
}
//! Get the value of the CSMSceneParameter::_sfSceneCenter field.

inline
Pnt3f &CSMSceneParameterBase::editSceneCenter(void)
{
    editSField(SceneCenterFieldMask);

    return _sfSceneCenter.getValue();
}

//! Get the value of the CSMSceneParameter::_sfSceneCenter field.
inline
const Pnt3f &CSMSceneParameterBase::getSceneCenter(void) const
{
    return _sfSceneCenter.getValue();
}

//! Set the value of the CSMSceneParameter::_sfSceneCenter field.
inline
void CSMSceneParameterBase::setSceneCenter(const Pnt3f &value)
{
    editSField(SceneCenterFieldMask);

    _sfSceneCenter.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMSceneParameterBase::execSync (      CSMSceneParameterBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SceneRefFieldMask & whichField))
        _sfSceneRef.syncWith(pFrom->_sfSceneRef);

    if(FieldBits::NoField != (DistScaleFieldMask & whichField))
        _sfDistScale.syncWith(pFrom->_sfDistScale);

    if(FieldBits::NoField != (SceneDiagFieldMask & whichField))
        _sfSceneDiag.syncWith(pFrom->_sfSceneDiag);

    if(FieldBits::NoField != (InitViewPosFieldMask & whichField))
        _sfInitViewPos.syncWith(pFrom->_sfInitViewPos);

    if(FieldBits::NoField != (SceneCenterFieldMask & whichField))
        _sfSceneCenter.syncWith(pFrom->_sfSceneCenter);
}
#endif


inline
const Char8 *CSMSceneParameterBase::getClassname(void)
{
    return "CSMSceneParameter";
}
OSG_GEN_CONTAINERPTR(CSMSceneParameter);

OSG_END_NAMESPACE

