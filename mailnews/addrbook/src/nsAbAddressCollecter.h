/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
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
 * Copyright (C) 1999 Netscape Communications Corporation.  All Rights
 * Reserved.
 */

#ifndef _nsAbAddressCollecter_H_
#define _nsAbAddressCollecter_H_

#include "nsIAbAddressCollecter.h"
#include "nsCOMPtr.h"
#include "nsIAbAddressCollecter.h"
#include "nsIAddrDatabase.h"
#include "nsAddrDatabase.h"

class nsIPref;

class nsAbAddressCollecter : public nsIAbAddressCollecter
{
public:
	nsAbAddressCollecter();
	virtual ~nsAbAddressCollecter();

	NS_DECL_ISUPPORTS
	NS_IMETHOD	CollectAddress(const char *address);

	nsresult OpenHistoryAB(nsIAddrDatabase **aDatabase);
	nsresult IsDomainExcluded(const char *address, nsIPref *pPref, PRBool *bExclude);
	nsresult SetNamesForCard(nsIAbCard *senderCard, const char *fullName);
	nsresult SplitFullName (const char *fullName, char **firstName, char **lastName);
protected:
	nsCOMPtr <nsIAddrDatabase> m_historyAB;
	nsCOMPtr <nsIAbDirectory> m_historyDirectory;

};

#endif  // _nsAbAddressCollecter_H_

