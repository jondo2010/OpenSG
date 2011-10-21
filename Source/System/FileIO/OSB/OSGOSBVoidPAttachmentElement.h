/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                   Copyright (C) 2011 by the OpenSG Forum                  *
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

#ifndef _OSGOSBVOIDPATTACHMENTELEMENT_H_
#define _OSGOSBVOIDPATTACHMENTELEMENT_H_

#include "OSGConfig.h"
#include "OSGFileIODef.h"
#include "OSGOSBCommonElement.h"
#include "OSGOSBElementFactoryHelper.h"

OSG_BEGIN_NAMESPACE

class OSBRootElement;

/*! \ingroup GrpFileIOOSB
    \nohierarchy
 */

class OSG_FILEIO_DLLMAPPING OSBVoidPAttachmentElement : public OSBCommonElement
{
  /*==========================  PUBLIC  =================================*/
  public:
    /*---------------------------------------------------------------------*/
    /*! \name Types                                                        */
    /*! \{                                                                 */

    typedef OSBCommonElement           Inherited;
    typedef OSBVoidPAttachmentElement  Self;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Constructor                                                  */
    /*! \{                                                                 */

    OSBVoidPAttachmentElement(OSBRootElement *root);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Destructor                                                   */
    /*! \{                                                                 */

    virtual ~OSBVoidPAttachmentElement(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Reading                                                      */
    /*! \{                                                                 */

    virtual void read    (const std::string &typeName);
    virtual void postRead(      void                 );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Writing                                                      */
    /*! \{                                                                 */

    virtual void preWrite(FieldContainer * const fc);
    virtual void write   (void                     );

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:
    /*!\brief prohibit default function (move to 'public' if needed)       */
    OSBVoidPAttachmentElement(const OSBVoidPAttachmentElement &source);
    /*!\brief prohibit default function (move to 'public' if needed)       */
    void operator =(const OSBVoidPAttachmentElement &source);

    /*---------------------------------------------------------------------*/

    static OSBElementRegistrationHelper<OSBVoidPAttachmentElement> _regHelper;
};

OSG_END_NAMESPACE

#endif /* _OSGOSBVOIDPATTACHMENTELEMENT_H_ */
