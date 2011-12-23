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
 **     class CSMDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGCSMWindow.h"               // Windows Class

#include "OSGCSMDrawerBase.h"
#include "OSGCSMDrawer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMDrawer
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var CSMWindow *     CSMDrawerBase::_mfWindows
    
*/

/*! \var std::string     CSMDrawerBase::_sfDisplayString
    
*/

/*! \var UInt32          CSMDrawerBase::_sfAspect
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CSMDrawer *, nsOSG>::_type(
    "CSMDrawerPtr", 
    "AttachmentContainerPtr", 
    CSMDrawer::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CSMDrawer *, nsOSG)


OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMDrawer *,
                           nsOSG);

DataType &FieldTraits<CSMDrawer *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<CSMDrawer *, nsOSG>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    CSMDrawer *,
                    NoRefCountPolicy,
                    nsOSG + 1);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         CSMDrawer *,
                         NoRefCountPolicy,
                         nsOSG + 1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CSMDrawerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecChildCSMWindowPtr::Description(
        MFUnrecChildCSMWindowPtr::getClassType(),
        "windows",
        "",
        WindowsFieldId, WindowsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMDrawer::editHandleWindows),
        static_cast<FieldGetMethodSig >(&CSMDrawer::getHandleWindows));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "displayString",
        "",
        DisplayStringFieldId, DisplayStringFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMDrawer::editHandleDisplayString),
        static_cast<FieldGetMethodSig >(&CSMDrawer::getHandleDisplayString));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "aspect",
        "",
        AspectFieldId, AspectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMDrawer::editHandleAspect),
        static_cast<FieldGetMethodSig >(&CSMDrawer::getHandleAspect));

    oType.addInitialDesc(pDesc);
}


CSMDrawerBase::TypeObject CSMDrawerBase::_type(
    CSMDrawerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CSMDrawerBase::createEmptyLocal),
    CSMDrawer::initMethod,
    CSMDrawer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMDrawer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMDrawer\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"multi\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    parentFields=\"single\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"windows\"\n"
    "\t\ttype=\"CSMWindow\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"childpointer\"\n"
    "        childParentType=\"CSMDrawer\"\n"
    "        linkParentField=\"Parent\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"displayString\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "       name=\"aspect\"\n"
    "       type=\"UInt32\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "       defaultValue=\"1\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMDrawerBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMDrawerBase::getType(void) const
{
    return _type;
}

UInt32 CSMDrawerBase::getContainerSize(void) const
{
    return sizeof(CSMDrawer);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CSMDrawer::_mfWindows field.
const MFUnrecChildCSMWindowPtr *CSMDrawerBase::getMFWindows(void) const
{
    return &_mfWindows;
}

MFUnrecChildCSMWindowPtr *CSMDrawerBase::editMFWindows        (void)
{
    editMField(WindowsFieldMask, _mfWindows);

    return &_mfWindows;
}

SFString *CSMDrawerBase::editSFDisplayString(void)
{
    editSField(DisplayStringFieldMask);

    return &_sfDisplayString;
}

const SFString *CSMDrawerBase::getSFDisplayString(void) const
{
    return &_sfDisplayString;
}


SFUInt32 *CSMDrawerBase::editSFAspect(void)
{
    editSField(AspectFieldMask);

    return &_sfAspect;
}

const SFUInt32 *CSMDrawerBase::getSFAspect(void) const
{
    return &_sfAspect;
}




void CSMDrawerBase::pushToWindows(CSMWindow * const value)
{
    editMField(WindowsFieldMask, _mfWindows);

    _mfWindows.push_back(value);
}

void CSMDrawerBase::assignWindows  (const MFUnrecChildCSMWindowPtr &value)
{
    MFUnrecChildCSMWindowPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecChildCSMWindowPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<CSMDrawer *>(this)->clearWindows();

    while(elemIt != elemEnd)
    {
        this->pushToWindows(*elemIt);

        ++elemIt;
    }
}

void CSMDrawerBase::removeFromWindows(UInt32 uiIndex)
{
    if(uiIndex < _mfWindows.size())
    {
        editMField(WindowsFieldMask, _mfWindows);

        _mfWindows.erase(uiIndex);
    }
}

void CSMDrawerBase::removeObjFromWindows(CSMWindow * const value)
{
    Int32 iElemIdx = _mfWindows.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(WindowsFieldMask, _mfWindows);

        _mfWindows.erase(iElemIdx);
    }
}
void CSMDrawerBase::clearWindows(void)
{
    editMField(WindowsFieldMask, _mfWindows);


    _mfWindows.clear();
}



/*------------------------------ access -----------------------------------*/

SizeT CSMDrawerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WindowsFieldMask & whichField))
    {
        returnValue += _mfWindows.getBinSize();
    }
    if(FieldBits::NoField != (DisplayStringFieldMask & whichField))
    {
        returnValue += _sfDisplayString.getBinSize();
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        returnValue += _sfAspect.getBinSize();
    }

    return returnValue;
}

void CSMDrawerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WindowsFieldMask & whichField))
    {
        _mfWindows.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DisplayStringFieldMask & whichField))
    {
        _sfDisplayString.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyToBin(pMem);
    }
}

void CSMDrawerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WindowsFieldMask & whichField))
    {
        editMField(WindowsFieldMask, _mfWindows);
        _mfWindows.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DisplayStringFieldMask & whichField))
    {
        editSField(DisplayStringFieldMask);
        _sfDisplayString.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        editSField(AspectFieldMask);
        _sfAspect.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMDrawerTransitPtr CSMDrawerBase::createLocal(BitVector bFlags)
{
    CSMDrawerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMDrawer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMDrawerTransitPtr CSMDrawerBase::createDependent(BitVector bFlags)
{
    CSMDrawerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMDrawer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMDrawerTransitPtr CSMDrawerBase::create(void)
{
    return createLocal();
}

CSMDrawer *CSMDrawerBase::createEmptyLocal(BitVector bFlags)
{
    CSMDrawer *returnValue;

    newPtr<CSMDrawer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMDrawer *CSMDrawerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMDrawerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMDrawer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMDrawer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMDrawerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMDrawer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMDrawer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMDrawerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMDrawerBase::CSMDrawerBase(void) :
    Inherited(),
    _mfWindows                (this,
                          WindowsFieldId,
                          CSMWindow::ParentFieldId),
    _sfDisplayString          (),
    _sfAspect                 (UInt32(1))
{
}

CSMDrawerBase::CSMDrawerBase(const CSMDrawerBase &source) :
    Inherited(source),
    _mfWindows                (this,
                          WindowsFieldId,
                          CSMWindow::ParentFieldId),
    _sfDisplayString          (source._sfDisplayString          ),
    _sfAspect                 (source._sfAspect                 )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMDrawerBase::~CSMDrawerBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool CSMDrawerBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == WindowsFieldId)
    {
        CSMWindow * pTypedChild =
            dynamic_cast<CSMWindow *>(pChild);

        if(pTypedChild != NULL)
        {
            Int32 iChildIdx = _mfWindows.findIndex(pTypedChild);

            if(iChildIdx != -1)
            {
                editMField(WindowsFieldMask, _mfWindows);

                _mfWindows.erase(iChildIdx);

                return true;
            }

            SWARNING << "Parent (["        << this
                     << "] id ["           << this->getId()
                     << "] type ["         << this->getType().getCName()
                     << "] childFieldId [" << childFieldId
                     << "]) - Child (["    << pChild
                     << "] id ["           << pChild->getId()
                     << "] type ["         << pChild->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void CSMDrawerBase::onCreate(const CSMDrawer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CSMDrawer *pThis = static_cast<CSMDrawer *>(this);

        MFUnrecChildCSMWindowPtr::const_iterator WindowsIt  =
            source->_mfWindows.begin();
        MFUnrecChildCSMWindowPtr::const_iterator WindowsEnd =
            source->_mfWindows.end  ();

        while(WindowsIt != WindowsEnd)
        {
            pThis->pushToWindows(*WindowsIt);

            ++WindowsIt;
        }
    }
}

GetFieldHandlePtr CSMDrawerBase::getHandleWindows         (void) const
{
    MFUnrecChildCSMWindowPtr::GetHandlePtr returnValue(
        new  MFUnrecChildCSMWindowPtr::GetHandle(
             &_mfWindows,
             this->getType().getFieldDesc(WindowsFieldId),
             const_cast<CSMDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMDrawerBase::editHandleWindows        (void)
{
    MFUnrecChildCSMWindowPtr::EditHandlePtr returnValue(
        new  MFUnrecChildCSMWindowPtr::EditHandle(
             &_mfWindows,
             this->getType().getFieldDesc(WindowsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&CSMDrawer::pushToWindows,
                    static_cast<CSMDrawer *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&CSMDrawer::removeFromWindows,
                    static_cast<CSMDrawer *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&CSMDrawer::removeObjFromWindows,
                    static_cast<CSMDrawer *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&CSMDrawer::clearWindows,
                    static_cast<CSMDrawer *>(this)));

    editMField(WindowsFieldMask, _mfWindows);

    return returnValue;
}

GetFieldHandlePtr CSMDrawerBase::getHandleDisplayString   (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfDisplayString,
             this->getType().getFieldDesc(DisplayStringFieldId),
             const_cast<CSMDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMDrawerBase::editHandleDisplayString  (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfDisplayString,
             this->getType().getFieldDesc(DisplayStringFieldId),
             this));


    editSField(DisplayStringFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMDrawerBase::getHandleAspect          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfAspect,
             this->getType().getFieldDesc(AspectFieldId),
             const_cast<CSMDrawerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMDrawerBase::editHandleAspect         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfAspect,
             this->getType().getFieldDesc(AspectFieldId),
             this));


    editSField(AspectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMDrawerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMDrawer *pThis = static_cast<CSMDrawer *>(this);

    pThis->execSync(static_cast<CSMDrawer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMDrawerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMDrawer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMDrawer *>(pRefAspect),
                  dynamic_cast<const CSMDrawer *>(this));

    return returnValue;
}
#endif

void CSMDrawerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CSMDrawer *>(this)->clearWindows();


}


OSG_END_NAMESPACE
