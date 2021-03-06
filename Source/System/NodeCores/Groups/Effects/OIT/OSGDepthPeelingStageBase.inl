/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 * contact: Alexander Lang                                                   *
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
 **     class DepthPeelingStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &DepthPeelingStageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DepthPeelingStageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DepthPeelingStageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DepthPeelingStage::_sfNumPasses field.

inline
UInt32 &DepthPeelingStageBase::editNumPasses(void)
{
    editSField(NumPassesFieldMask);

    return _sfNumPasses.getValue();
}

//! Get the value of the DepthPeelingStage::_sfNumPasses field.
inline
      UInt32  DepthPeelingStageBase::getNumPasses(void) const
{
    return _sfNumPasses.getValue();
}

//! Set the value of the DepthPeelingStage::_sfNumPasses field.
inline
void DepthPeelingStageBase::setNumPasses(const UInt32 value)
{
    editSField(NumPassesFieldMask);

    _sfNumPasses.setValue(value);
}
//! Get the value of the DepthPeelingStage::_sfDepthTexUnit field.

inline
UInt32 &DepthPeelingStageBase::editDepthTexUnit(void)
{
    editSField(DepthTexUnitFieldMask);

    return _sfDepthTexUnit.getValue();
}

//! Get the value of the DepthPeelingStage::_sfDepthTexUnit field.
inline
      UInt32  DepthPeelingStageBase::getDepthTexUnit(void) const
{
    return _sfDepthTexUnit.getValue();
}

//! Set the value of the DepthPeelingStage::_sfDepthTexUnit field.
inline
void DepthPeelingStageBase::setDepthTexUnit(const UInt32 value)
{
    editSField(DepthTexUnitFieldMask);

    _sfDepthTexUnit.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DepthPeelingStageBase::execSync (      DepthPeelingStageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (NumPassesFieldMask & whichField))
        _sfNumPasses.syncWith(pFrom->_sfNumPasses);

    if(FieldBits::NoField != (DepthTexUnitFieldMask & whichField))
        _sfDepthTexUnit.syncWith(pFrom->_sfDepthTexUnit);
}
#endif


inline
const Char8 *DepthPeelingStageBase::getClassname(void)
{
    return "DepthPeelingStage";
}
OSG_GEN_CONTAINERPTR(DepthPeelingStage);

OSG_END_NAMESPACE

