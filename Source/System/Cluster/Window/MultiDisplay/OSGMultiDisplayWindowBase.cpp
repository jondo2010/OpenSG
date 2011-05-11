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
 **     class MultiDisplayWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGMultiDisplayWindowBase.h"
#include "OSGMultiDisplayWindow.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiDisplayWindow
    Cluster rendering configuration for multible displays
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          MultiDisplayWindowBase::_sfHServers
    Number of horizontal servers
*/

/*! \var UInt32          MultiDisplayWindowBase::_sfVServers
    Number of vertical servers
*/

/*! \var bool            MultiDisplayWindowBase::_sfManageClientViewports
    If true, duplicate all viewports into the client window
*/

/*! \var Int32           MultiDisplayWindowBase::_sfXOverlap
    Horizontal overlap
*/

/*! \var Int32           MultiDisplayWindowBase::_sfYOverlap
    Vertical overlap
*/

/*! \var Int32           MultiDisplayWindowBase::_sfMaxDepth
    Maximum depth in scene to create load groups for load balancing. Bigger
    values are more precise but slower. 
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiDisplayWindow *>::_type("MultiDisplayWindowPtr", "ClusterWindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MultiDisplayWindow *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MultiDisplayWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "hServers",
        "Number of horizontal servers\n",
        HServersFieldId, HServersFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiDisplayWindow::editHandleHServers),
        static_cast<FieldGetMethodSig >(&MultiDisplayWindow::getHandleHServers));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "vServers",
        "Number of vertical servers\n",
        VServersFieldId, VServersFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiDisplayWindow::editHandleVServers),
        static_cast<FieldGetMethodSig >(&MultiDisplayWindow::getHandleVServers));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "manageClientViewports",
        "If true, duplicate all viewports into the client window\n",
        ManageClientViewportsFieldId, ManageClientViewportsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiDisplayWindow::editHandleManageClientViewports),
        static_cast<FieldGetMethodSig >(&MultiDisplayWindow::getHandleManageClientViewports));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "xOverlap",
        "Horizontal overlap\n",
        XOverlapFieldId, XOverlapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiDisplayWindow::editHandleXOverlap),
        static_cast<FieldGetMethodSig >(&MultiDisplayWindow::getHandleXOverlap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "yOverlap",
        "Vertical overlap\n",
        YOverlapFieldId, YOverlapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiDisplayWindow::editHandleYOverlap),
        static_cast<FieldGetMethodSig >(&MultiDisplayWindow::getHandleYOverlap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "maxDepth",
        "Maximum depth in scene to create load groups for load balancing. Bigger\n"
        "values are more precise but slower. \n",
        MaxDepthFieldId, MaxDepthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MultiDisplayWindow::editHandleMaxDepth),
        static_cast<FieldGetMethodSig >(&MultiDisplayWindow::getHandleMaxDepth));

    oType.addInitialDesc(pDesc);
}


MultiDisplayWindowBase::TypeObject MultiDisplayWindowBase::_type(
    MultiDisplayWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MultiDisplayWindowBase::createEmptyLocal),
    MultiDisplayWindow::initMethod,
    MultiDisplayWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MultiDisplayWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"MultiDisplayWindow\"\n"
    "   parent=\"ClusterWindow\"\n"
    "   library=\"Cluster\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpClusterWindow\"\n"
    "   >\n"
    "  Cluster rendering configuration for multible displays\n"
    "  <Field\n"
    "\t name=\"hServers\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tNumber of horizontal servers\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"vServers\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tNumber of vertical servers\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"manageClientViewports\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tIf true, duplicate all viewports into the client window\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"xOverlap\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tHorizontal overlap\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"yOverlap\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tVertical overlap\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"maxDepth\"\n"
    "\t type=\"Int32\"\n"
    "     cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"999\"\n"
    "     access=\"public\"\n"
    "\t >\n"
    "    Maximum depth in scene to create load groups for load balancing. Bigger\n"
    "\tvalues are more precise but slower. \n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Cluster rendering configuration for multible displays\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiDisplayWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiDisplayWindowBase::getType(void) const
{
    return _type;
}

UInt32 MultiDisplayWindowBase::getContainerSize(void) const
{
    return sizeof(MultiDisplayWindow);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *MultiDisplayWindowBase::editSFHServers(void)
{
    editSField(HServersFieldMask);

    return &_sfHServers;
}

const SFUInt32 *MultiDisplayWindowBase::getSFHServers(void) const
{
    return &_sfHServers;
}


SFUInt32 *MultiDisplayWindowBase::editSFVServers(void)
{
    editSField(VServersFieldMask);

    return &_sfVServers;
}

const SFUInt32 *MultiDisplayWindowBase::getSFVServers(void) const
{
    return &_sfVServers;
}


SFBool *MultiDisplayWindowBase::editSFManageClientViewports(void)
{
    editSField(ManageClientViewportsFieldMask);

    return &_sfManageClientViewports;
}

const SFBool *MultiDisplayWindowBase::getSFManageClientViewports(void) const
{
    return &_sfManageClientViewports;
}


SFInt32 *MultiDisplayWindowBase::editSFXOverlap(void)
{
    editSField(XOverlapFieldMask);

    return &_sfXOverlap;
}

const SFInt32 *MultiDisplayWindowBase::getSFXOverlap(void) const
{
    return &_sfXOverlap;
}


SFInt32 *MultiDisplayWindowBase::editSFYOverlap(void)
{
    editSField(YOverlapFieldMask);

    return &_sfYOverlap;
}

const SFInt32 *MultiDisplayWindowBase::getSFYOverlap(void) const
{
    return &_sfYOverlap;
}


SFInt32 *MultiDisplayWindowBase::editSFMaxDepth(void)
{
    editSField(MaxDepthFieldMask);

    return &_sfMaxDepth;
}

const SFInt32 *MultiDisplayWindowBase::getSFMaxDepth(void) const
{
    return &_sfMaxDepth;
}






/*------------------------------ access -----------------------------------*/

UInt32 MultiDisplayWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HServersFieldMask & whichField))
    {
        returnValue += _sfHServers.getBinSize();
    }
    if(FieldBits::NoField != (VServersFieldMask & whichField))
    {
        returnValue += _sfVServers.getBinSize();
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        returnValue += _sfManageClientViewports.getBinSize();
    }
    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        returnValue += _sfXOverlap.getBinSize();
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        returnValue += _sfYOverlap.getBinSize();
    }
    if(FieldBits::NoField != (MaxDepthFieldMask & whichField))
    {
        returnValue += _sfMaxDepth.getBinSize();
    }

    return returnValue;
}

void MultiDisplayWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HServersFieldMask & whichField))
    {
        _sfHServers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VServersFieldMask & whichField))
    {
        _sfVServers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        _sfManageClientViewports.copyToBin(pMem);
    }
    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        _sfXOverlap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        _sfYOverlap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxDepthFieldMask & whichField))
    {
        _sfMaxDepth.copyToBin(pMem);
    }
}

void MultiDisplayWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HServersFieldMask & whichField))
    {
        editSField(HServersFieldMask);
        _sfHServers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VServersFieldMask & whichField))
    {
        editSField(VServersFieldMask);
        _sfVServers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        editSField(ManageClientViewportsFieldMask);
        _sfManageClientViewports.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        editSField(XOverlapFieldMask);
        _sfXOverlap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        editSField(YOverlapFieldMask);
        _sfYOverlap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxDepthFieldMask & whichField))
    {
        editSField(MaxDepthFieldMask);
        _sfMaxDepth.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiDisplayWindowTransitPtr MultiDisplayWindowBase::createLocal(BitVector bFlags)
{
    MultiDisplayWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MultiDisplayWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MultiDisplayWindowTransitPtr MultiDisplayWindowBase::createDependent(BitVector bFlags)
{
    MultiDisplayWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MultiDisplayWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MultiDisplayWindowTransitPtr MultiDisplayWindowBase::create(void)
{
    MultiDisplayWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MultiDisplayWindow>(tmpPtr);
    }

    return fc;
}

MultiDisplayWindow *MultiDisplayWindowBase::createEmptyLocal(BitVector bFlags)
{
    MultiDisplayWindow *returnValue;

    newPtr<MultiDisplayWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MultiDisplayWindow *MultiDisplayWindowBase::createEmpty(void)
{
    MultiDisplayWindow *returnValue;

    newPtr<MultiDisplayWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MultiDisplayWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MultiDisplayWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiDisplayWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiDisplayWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MultiDisplayWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MultiDisplayWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MultiDisplayWindowBase::shallowCopy(void) const
{
    MultiDisplayWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MultiDisplayWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MultiDisplayWindowBase::MultiDisplayWindowBase(void) :
    Inherited(),
    _sfHServers               (),
    _sfVServers               (),
    _sfManageClientViewports  (bool(true)),
    _sfXOverlap               (Int32(0)),
    _sfYOverlap               (Int32(0)),
    _sfMaxDepth               (Int32(999))
{
}

MultiDisplayWindowBase::MultiDisplayWindowBase(const MultiDisplayWindowBase &source) :
    Inherited(source),
    _sfHServers               (source._sfHServers               ),
    _sfVServers               (source._sfVServers               ),
    _sfManageClientViewports  (source._sfManageClientViewports  ),
    _sfXOverlap               (source._sfXOverlap               ),
    _sfYOverlap               (source._sfYOverlap               ),
    _sfMaxDepth               (source._sfMaxDepth               )
{
}


/*-------------------------- destructors ----------------------------------*/

MultiDisplayWindowBase::~MultiDisplayWindowBase(void)
{
}


GetFieldHandlePtr MultiDisplayWindowBase::getHandleHServers        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfHServers,
             this->getType().getFieldDesc(HServersFieldId),
             const_cast<MultiDisplayWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiDisplayWindowBase::editHandleHServers       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfHServers,
             this->getType().getFieldDesc(HServersFieldId),
             this));


    editSField(HServersFieldMask);

    return returnValue;
}

GetFieldHandlePtr MultiDisplayWindowBase::getHandleVServers        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfVServers,
             this->getType().getFieldDesc(VServersFieldId),
             const_cast<MultiDisplayWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiDisplayWindowBase::editHandleVServers       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfVServers,
             this->getType().getFieldDesc(VServersFieldId),
             this));


    editSField(VServersFieldMask);

    return returnValue;
}

GetFieldHandlePtr MultiDisplayWindowBase::getHandleManageClientViewports (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfManageClientViewports,
             this->getType().getFieldDesc(ManageClientViewportsFieldId),
             const_cast<MultiDisplayWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiDisplayWindowBase::editHandleManageClientViewports(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfManageClientViewports,
             this->getType().getFieldDesc(ManageClientViewportsFieldId),
             this));


    editSField(ManageClientViewportsFieldMask);

    return returnValue;
}

GetFieldHandlePtr MultiDisplayWindowBase::getHandleXOverlap        (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfXOverlap,
             this->getType().getFieldDesc(XOverlapFieldId),
             const_cast<MultiDisplayWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiDisplayWindowBase::editHandleXOverlap       (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfXOverlap,
             this->getType().getFieldDesc(XOverlapFieldId),
             this));


    editSField(XOverlapFieldMask);

    return returnValue;
}

GetFieldHandlePtr MultiDisplayWindowBase::getHandleYOverlap        (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfYOverlap,
             this->getType().getFieldDesc(YOverlapFieldId),
             const_cast<MultiDisplayWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiDisplayWindowBase::editHandleYOverlap       (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfYOverlap,
             this->getType().getFieldDesc(YOverlapFieldId),
             this));


    editSField(YOverlapFieldMask);

    return returnValue;
}

GetFieldHandlePtr MultiDisplayWindowBase::getHandleMaxDepth        (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfMaxDepth,
             this->getType().getFieldDesc(MaxDepthFieldId),
             const_cast<MultiDisplayWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MultiDisplayWindowBase::editHandleMaxDepth       (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfMaxDepth,
             this->getType().getFieldDesc(MaxDepthFieldId),
             this));


    editSField(MaxDepthFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiDisplayWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MultiDisplayWindow *pThis = static_cast<MultiDisplayWindow *>(this);

    pThis->execSync(static_cast<MultiDisplayWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MultiDisplayWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MultiDisplayWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiDisplayWindow *>(pRefAspect),
                  dynamic_cast<const MultiDisplayWindow *>(this));

    return returnValue;
}
#endif

void MultiDisplayWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
