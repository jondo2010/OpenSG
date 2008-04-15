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
 **     class FCDPtrTestFC!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FCDPtrTestFCBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 FCDPtrTestFCBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 FCDPtrTestFCBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the FCDPtrTestFC::_sfFieldSFPub_ptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPub_ptr(void) const
{
    return _sfFieldSFPub_ptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPub_ptr field.
inline
void FCDPtrTestFCBase::setFieldSFPub_ptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPub_ptrFieldMask);

    _sfFieldSFPub_ptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPub_weakptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPub_weakptr(void) const
{
    return _sfFieldSFPub_weakptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPub_weakptr field.
inline
void FCDPtrTestFCBase::setFieldSFPub_weakptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPub_weakptrFieldMask);

    _sfFieldSFPub_weakptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPub_mpchildptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPub_mpchildptr(void) const
{
    return _sfFieldSFPub_mpchildptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPub_mpchildptr field.
inline
void FCDPtrTestFCBase::setFieldSFPub_mpchildptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPub_mpchildptrFieldMask);

    _sfFieldSFPub_mpchildptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPro_ptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPro_ptr(void) const
{
    return _sfFieldSFPro_ptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPro_ptr field.
inline
void FCDPtrTestFCBase::setFieldSFPro_ptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPro_ptrFieldMask);

    _sfFieldSFPro_ptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPro_weakptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPro_weakptr(void) const
{
    return _sfFieldSFPro_weakptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPro_weakptr field.
inline
void FCDPtrTestFCBase::setFieldSFPro_weakptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPro_weakptrFieldMask);

    _sfFieldSFPro_weakptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPro_mpchildptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPro_mpchildptr(void) const
{
    return _sfFieldSFPro_mpchildptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPro_mpchildptr field.
inline
void FCDPtrTestFCBase::setFieldSFPro_mpchildptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPro_mpchildptrFieldMask);

    _sfFieldSFPro_mpchildptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPri_ptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPri_ptr(void) const
{
    return _sfFieldSFPri_ptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPri_ptr field.
inline
void FCDPtrTestFCBase::setFieldSFPri_ptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPri_ptrFieldMask);

    _sfFieldSFPri_ptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPri_weakptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPri_weakptr(void) const
{
    return _sfFieldSFPri_weakptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPri_weakptr field.
inline
void FCDPtrTestFCBase::setFieldSFPri_weakptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPri_weakptrFieldMask);

    _sfFieldSFPri_weakptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPri_mpchildptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldSFPri_mpchildptr(void) const
{
    return _sfFieldSFPri_mpchildptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPri_mpchildptr field.
inline
void FCDPtrTestFCBase::setFieldSFPri_mpchildptr(FCDTestFCPtrConstArg value)
{
    editSField(FieldSFPri_mpchildptrFieldMask);

    _sfFieldSFPri_mpchildptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPub_spchildptr field.
inline
FCDSParTestFCPtrConst FCDPtrTestFCBase::getFieldSFPub_spchildptr(void) const
{
    return _sfFieldSFPub_spchildptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPub_spchildptr field.
inline
void FCDPtrTestFCBase::setFieldSFPub_spchildptr(FCDSParTestFCPtrConstArg value)
{
    editSField(FieldSFPub_spchildptrFieldMask);

    _sfFieldSFPub_spchildptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPro_spchildptr field.
inline
FCDSParTestFCPtrConst FCDPtrTestFCBase::getFieldSFPro_spchildptr(void) const
{
    return _sfFieldSFPro_spchildptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPro_spchildptr field.
inline
void FCDPtrTestFCBase::setFieldSFPro_spchildptr(FCDSParTestFCPtrConstArg value)
{
    editSField(FieldSFPro_spchildptrFieldMask);

    _sfFieldSFPro_spchildptr.setValue(value);

}

//! Get the value of the FCDPtrTestFC::_sfFieldSFPri_spchildptr field.
inline
FCDSParTestFCPtrConst FCDPtrTestFCBase::getFieldSFPri_spchildptr(void) const
{
    return _sfFieldSFPri_spchildptr.getValue();
}

//! Set the value of the FCDPtrTestFC::_sfFieldSFPri_spchildptr field.
inline
void FCDPtrTestFCBase::setFieldSFPri_spchildptr(FCDSParTestFCPtrConstArg value)
{
    editSField(FieldSFPri_spchildptrFieldMask);

    _sfFieldSFPri_spchildptr.setValue(value);

}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPub_ptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPub_ptr(const UInt32 index) const
{
    return _mfFieldMFPub_ptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPub_ptr field.
inline
const MFUnrecFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPub_ptr(void) const
{
    return _mfFieldMFPub_ptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPub_weakptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPub_weakptr(const UInt32 index) const
{
    return _mfFieldMFPub_weakptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPub_weakptr field.
inline
const MFWeakFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPub_weakptr(void) const
{
    return _mfFieldMFPub_weakptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPub_mpchildptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPub_mpchildptr(const UInt32 index) const
{
    return _mfFieldMFPub_mpchildptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPub_mpchildptr field.
inline
const MFUnrecChildFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPub_mpchildptr(void) const
{
    return _mfFieldMFPub_mpchildptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPro_ptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPro_ptr(const UInt32 index) const
{
    return _mfFieldMFPro_ptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPro_ptr field.
inline
const MFUnrecFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPro_ptr(void) const
{
    return _mfFieldMFPro_ptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPro_weakptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPro_weakptr(const UInt32 index) const
{
    return _mfFieldMFPro_weakptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPro_weakptr field.
inline
const MFWeakFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPro_weakptr(void) const
{
    return _mfFieldMFPro_weakptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPro_mpchildptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPro_mpchildptr(const UInt32 index) const
{
    return _mfFieldMFPro_mpchildptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPro_mpchildptr field.
inline
const MFUnrecChildFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPro_mpchildptr(void) const
{
    return _mfFieldMFPro_mpchildptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPri_ptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPri_ptr(const UInt32 index) const
{
    return _mfFieldMFPri_ptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPri_ptr field.
inline
const MFUnrecFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPri_ptr(void) const
{
    return _mfFieldMFPri_ptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPri_weakptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPri_weakptr(const UInt32 index) const
{
    return _mfFieldMFPri_weakptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPri_weakptr field.
inline
const MFWeakFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPri_weakptr(void) const
{
    return _mfFieldMFPri_weakptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPri_mpchildptr field.
inline
FCDTestFCPtrConst FCDPtrTestFCBase::getFieldMFPri_mpchildptr(const UInt32 index) const
{
    return _mfFieldMFPri_mpchildptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPri_mpchildptr field.
inline
const MFUnrecChildFCDTestFCPtr &FCDPtrTestFCBase::getFieldMFPri_mpchildptr(void) const
{
    return _mfFieldMFPri_mpchildptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPub_spchildptr field.
inline
FCDSParTestFCPtrConst FCDPtrTestFCBase::getFieldMFPub_spchildptr(const UInt32 index) const
{
    return _mfFieldMFPub_spchildptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPub_spchildptr field.
inline
const MFUnrecChildFCDSParTestFCPtr &FCDPtrTestFCBase::getFieldMFPub_spchildptr(void) const
{
    return _mfFieldMFPub_spchildptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPro_spchildptr field.
inline
FCDSParTestFCPtrConst FCDPtrTestFCBase::getFieldMFPro_spchildptr(const UInt32 index) const
{
    return _mfFieldMFPro_spchildptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPro_spchildptr field.
inline
const MFUnrecChildFCDSParTestFCPtr &FCDPtrTestFCBase::getFieldMFPro_spchildptr(void) const
{
    return _mfFieldMFPro_spchildptr;
}

//! Get the value of the \a index element the FCDPtrTestFC::_mfFieldMFPri_spchildptr field.
inline
FCDSParTestFCPtrConst FCDPtrTestFCBase::getFieldMFPri_spchildptr(const UInt32 index) const
{
    return _mfFieldMFPri_spchildptr[index];
}

//! Get the FCDPtrTestFC::_mfFieldMFPri_spchildptr field.
inline
const MFUnrecChildFCDSParTestFCPtr &FCDPtrTestFCBase::getFieldMFPri_spchildptr(void) const
{
    return _mfFieldMFPri_spchildptr;
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void FCDPtrTestFCBase::execSync (      FCDPtrTestFCBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FieldSFPub_ptrFieldMask & whichField))
        _sfFieldSFPub_ptr.syncWith(pFrom->_sfFieldSFPub_ptr);

    if(FieldBits::NoField != (FieldSFPub_weakptrFieldMask & whichField))
        _sfFieldSFPub_weakptr.syncWith(pFrom->_sfFieldSFPub_weakptr);

    if(FieldBits::NoField != (FieldSFPub_mpchildptrFieldMask & whichField))
        _sfFieldSFPub_mpchildptr.syncWith(pFrom->_sfFieldSFPub_mpchildptr);

    if(FieldBits::NoField != (FieldSFPro_ptrFieldMask & whichField))
        _sfFieldSFPro_ptr.syncWith(pFrom->_sfFieldSFPro_ptr);

    if(FieldBits::NoField != (FieldSFPro_weakptrFieldMask & whichField))
        _sfFieldSFPro_weakptr.syncWith(pFrom->_sfFieldSFPro_weakptr);

    if(FieldBits::NoField != (FieldSFPro_mpchildptrFieldMask & whichField))
        _sfFieldSFPro_mpchildptr.syncWith(pFrom->_sfFieldSFPro_mpchildptr);

    if(FieldBits::NoField != (FieldSFPri_ptrFieldMask & whichField))
        _sfFieldSFPri_ptr.syncWith(pFrom->_sfFieldSFPri_ptr);

    if(FieldBits::NoField != (FieldSFPri_weakptrFieldMask & whichField))
        _sfFieldSFPri_weakptr.syncWith(pFrom->_sfFieldSFPri_weakptr);

    if(FieldBits::NoField != (FieldSFPri_mpchildptrFieldMask & whichField))
        _sfFieldSFPri_mpchildptr.syncWith(pFrom->_sfFieldSFPri_mpchildptr);

    if(FieldBits::NoField != (FieldSFNo_ptrFieldMask & whichField))
        _sfFieldSFNo_ptr.syncWith(pFrom->_sfFieldSFNo_ptr);

    if(FieldBits::NoField != (FieldSFNo_weakptrFieldMask & whichField))
        _sfFieldSFNo_weakptr.syncWith(pFrom->_sfFieldSFNo_weakptr);

    if(FieldBits::NoField != (FieldSFNo_mpchildptrFieldMask & whichField))
        _sfFieldSFNo_mpchildptr.syncWith(pFrom->_sfFieldSFNo_mpchildptr);

    if(FieldBits::NoField != (FieldMFPub_ptrFieldMask & whichField))
        _mfFieldMFPub_ptr.syncWith(pFrom->_mfFieldMFPub_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPub_weakptrFieldMask & whichField))
        _mfFieldMFPub_weakptr.syncWith(pFrom->_mfFieldMFPub_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPub_mpchildptrFieldMask & whichField))
        _mfFieldMFPub_mpchildptr.syncWith(pFrom->_mfFieldMFPub_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_ptrFieldMask & whichField))
        _mfFieldMFPro_ptr.syncWith(pFrom->_mfFieldMFPro_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_weakptrFieldMask & whichField))
        _mfFieldMFPro_weakptr.syncWith(pFrom->_mfFieldMFPro_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_mpchildptrFieldMask & whichField))
        _mfFieldMFPro_mpchildptr.syncWith(pFrom->_mfFieldMFPro_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPri_ptrFieldMask & whichField))
        _mfFieldMFPri_ptr.syncWith(pFrom->_mfFieldMFPri_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPri_weakptrFieldMask & whichField))
        _mfFieldMFPri_weakptr.syncWith(pFrom->_mfFieldMFPri_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPri_mpchildptrFieldMask & whichField))
        _mfFieldMFPri_mpchildptr.syncWith(pFrom->_mfFieldMFPri_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_ptrFieldMask & whichField))
        _mfFieldMFNo_ptr.syncWith(pFrom->_mfFieldMFNo_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_weakptrFieldMask & whichField))
        _mfFieldMFNo_weakptr.syncWith(pFrom->_mfFieldMFNo_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_mpchildptrFieldMask & whichField))
        _mfFieldMFNo_mpchildptr.syncWith(pFrom->_mfFieldMFNo_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldSFPub_spchildptrFieldMask & whichField))
        _sfFieldSFPub_spchildptr.syncWith(pFrom->_sfFieldSFPub_spchildptr);

    if(FieldBits::NoField != (FieldSFPro_spchildptrFieldMask & whichField))
        _sfFieldSFPro_spchildptr.syncWith(pFrom->_sfFieldSFPro_spchildptr);

    if(FieldBits::NoField != (FieldSFPri_spchildptrFieldMask & whichField))
        _sfFieldSFPri_spchildptr.syncWith(pFrom->_sfFieldSFPri_spchildptr);

    if(FieldBits::NoField != (FieldSFNo_spchildptrFieldMask & whichField))
        _sfFieldSFNo_spchildptr.syncWith(pFrom->_sfFieldSFNo_spchildptr);

    if(FieldBits::NoField != (FieldMFPub_spchildptrFieldMask & whichField))
        _mfFieldMFPub_spchildptr.syncWith(pFrom->_mfFieldMFPub_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_spchildptrFieldMask & whichField))
        _mfFieldMFPro_spchildptr.syncWith(pFrom->_mfFieldMFPro_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPri_spchildptrFieldMask & whichField))
        _mfFieldMFPri_spchildptr.syncWith(pFrom->_mfFieldMFPri_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_spchildptrFieldMask & whichField))
        _mfFieldMFNo_spchildptr.syncWith(pFrom->_mfFieldMFNo_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
Char8 *FCDPtrTestFCBase::getClassname(void)
{
    return "FCDPtrTestFC";
}
OSG_GEN_CONTAINERPTR(FCDPtrTestFC);

OSG_END_NAMESPACE

