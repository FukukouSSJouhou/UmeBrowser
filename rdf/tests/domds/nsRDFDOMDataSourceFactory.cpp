/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * The contents of this file are subject to the Netscape Public License
 * Version 1.0 (the "NPL"); you may not use this file except in
 * compliance with the NPL.  You may obtain a copy of the NPL at
 * http://www.mozilla.org/NPL/
 *
 * Software distributed under the NPL is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL
 * for the specific language governing rights and limitations under the
 * NPL.
 *
 * The Initial Developer of this code under the NPL is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights
 * Reserved.
 */
#include "nsCOMPtr.h"
#include "nsIModule.h"
#include "nsIGenericFactory.h"
#include "nsRDFDOMDataSource.h"
#include "nsRDFDOMResourceFactory.h"
#include "nsIComponentManager.h"
#include "nsIServiceManager.h"
#include "rdf.h"

#ifdef NS_DEBUG
#include <stdio.h>
#endif

static NS_DEFINE_CID(kRDFDOMDataSourceCID, NS_RDF_DOMDATASOURCE_CID);
static NS_DEFINE_CID(kRDFDOMResourceFactoryCID, NS_RDF_DOMRESOURCEFACTORY_CID);
static NS_DEFINE_CID(kComponentManagerCID, NS_COMPONENTMANAGER_CID);

NS_GENERIC_FACTORY_CONSTRUCTOR(nsRDFDOMDataSource);
NS_GENERIC_FACTORY_CONSTRUCTOR(nsRDFDOMViewerElement);

static nsModuleComponentInfo components[] =
{
  { NS_RDF_DOMDATASOURCE_CID,        &nsRDFDOMDataSourceConstructor,  NS_RDF_DATASOURCE_PROGID_PREFIX "domds",  },
  { NS_RDF_DOMRESOURCEFACTORY_CID, &nsRDFDOMViewerElementConstructor, NS_RDF_RESOURCE_FACTORY_PROGID_PREFIX "dom", },
};

NS_IMPL_MODULE(nsRDFDOMViewerModule, components)
NS_IMPL_NSGETMODULE(nsRDFDOMViewerModule)
