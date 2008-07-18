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
 **     class DrawManager!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DrawManagerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DrawManagerBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DrawManagerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DrawManager::_sfParallel field.

inline
bool &DrawManagerBase::editParallel(void)
{
    editSField(ParallelFieldMask);

    return _sfParallel.getValue();
}

//! Get the value of the DrawManager::_sfParallel field.
inline
      bool  DrawManagerBase::getParallel(void) const
{
    return _sfParallel.getValue();
}

//! Set the value of the DrawManager::_sfParallel field.
inline
void DrawManagerBase::setParallel(const bool value)
{
    editSField(ParallelFieldMask);

    _sfParallel.setValue(value);
}
//! Get the value of the DrawManager::_sfSyncBarrierName field.

inline
std::string &DrawManagerBase::editSyncBarrierName(void)
{
    editSField(SyncBarrierNameFieldMask);

    return _sfSyncBarrierName.getValue();
}

//! Get the value of the DrawManager::_sfSyncBarrierName field.
inline
const std::string &DrawManagerBase::getSyncBarrierName(void) const
{
    return _sfSyncBarrierName.getValue();
}

//! Set the value of the DrawManager::_sfSyncBarrierName field.
inline
void DrawManagerBase::setSyncBarrierName(const std::string &value)
{
    editSField(SyncBarrierNameFieldMask);

    _sfSyncBarrierName.setValue(value);
}
//! Get the value of the DrawManager::_sfSwapBarrierName field.

inline
std::string &DrawManagerBase::editSwapBarrierName(void)
{
    editSField(SwapBarrierNameFieldMask);

    return _sfSwapBarrierName.getValue();
}

//! Get the value of the DrawManager::_sfSwapBarrierName field.
inline
const std::string &DrawManagerBase::getSwapBarrierName(void) const
{
    return _sfSwapBarrierName.getValue();
}

//! Set the value of the DrawManager::_sfSwapBarrierName field.
inline
void DrawManagerBase::setSwapBarrierName(const std::string &value)
{
    editSField(SwapBarrierNameFieldMask);

    _sfSwapBarrierName.setValue(value);
}

//! Get the value of the \a index element the DrawManager::_mfDrawer field.
inline
Drawer * DrawManagerBase::getDrawer(const UInt32 index) const
{
    return _mfDrawer[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DrawManagerBase::execSync (      DrawManagerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DrawerFieldMask & whichField))
        _mfDrawer.syncWith(pFrom->_mfDrawer,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ParallelFieldMask & whichField))
        _sfParallel.syncWith(pFrom->_sfParallel);

    if(FieldBits::NoField != (SyncBarrierNameFieldMask & whichField))
        _sfSyncBarrierName.syncWith(pFrom->_sfSyncBarrierName);

    if(FieldBits::NoField != (SwapBarrierNameFieldMask & whichField))
        _sfSwapBarrierName.syncWith(pFrom->_sfSwapBarrierName);
}
#endif


inline
const Char8 *DrawManagerBase::getClassname(void)
{
    return "DrawManager";
}
OSG_GEN_CONTAINERPTR(DrawManager);

OSG_END_NAMESPACE

