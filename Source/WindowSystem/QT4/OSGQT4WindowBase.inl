/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                     Copyright 2000-2002 by OpenSG Forum                   *
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
 **     class QTWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline OSG::FieldContainerType &QTWindowBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline OSG::UInt32 QTWindowBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 QTWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

inline
const SFOSGQGLWidgetP QTWindowBase::getSFGlWidget(void)
{
	return _sfGlWidget;
}

inline
SFOSGQGLWidgetP QTWindowBase::editSFGlWidget(void)
{
	editSField(GlWidgetFieldMask);
    return _sfGlWidget;
}


inline
const OSGQGLWidgetP QTWindowBase::getGlWidget(void) const
{
    return _sfGlWidget.getValue();
}

inline
OSGQGLWidget &QTWindowBase::editGlWidget(void)
{
	editSField(GlWidgetFieldMask);
    return *_sfGlWidget.getValue();
}

inline
void QTWindowBase::setGlWidget(const OSGQGLWidgetP &value)
{
	editSField(GlWidgetFieldMask);
    _sfGlWidget.setValue(value);
}

#ifdef OSG_MT_CPTR_ASPECT
inline
void QTWindowBase::execSync (      QTWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (GlWidgetFieldMask & whichField))
        _sfGlWidget.syncWith(pFrom->_sfGlWidget);
}
#endif

inline
const Char8 *QTWindowBase::getClassname(void)
{
    return "QTWindow";
}

OSG_GEN_CONTAINERPTR(QTWindow);

OSG_END_NAMESPACE