/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
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
/* AUTO-GENERATED. DO NOT EDIT!!! */

#ifndef nsIDOMProfileCore_h__
#define nsIDOMProfileCore_h__

#include "nsISupports.h"
#include "nsString.h"
#include "nsIScriptContext.h"
#include "nsIDOMBaseAppCore.h"


#define NS_IDOMPROFILECORE_IID \
 { 0x0573a2a3, 0xf838, 0x11d2, \
    {0x90, 0x6d, 0x00, 0x80, 0x5f, 0x8a, 0x08, 0xdc}} 

class nsIDOMProfileCore : public nsIDOMBaseAppCore {
public:
  static const nsIID& GetIID() { static nsIID iid = NS_IDOMPROFILECORE_IID; return iid; }

  NS_IMETHOD    CreateNewProfile(const nsString& aData)=0;

  NS_IMETHOD    RenameProfile(const nsString& aOldName, const nsString& aNewName)=0;

  NS_IMETHOD    DeleteProfile(const nsString& aProfileName, const nsString& aDeleteFlag)=0;

  NS_IMETHOD    GetProfileList(nsString& aReturn)=0;

  NS_IMETHOD    StartCommunicator(const nsString& aProfileName)=0;

  NS_IMETHOD    GetCurrentProfile(nsString& aReturn)=0;

  NS_IMETHOD    MigrateProfile(const nsString& aProfileName)=0;
};


#define NS_DECL_IDOMPROFILECORE   \
  NS_IMETHOD    CreateNewProfile(const nsString& aData);  \
  NS_IMETHOD    RenameProfile(const nsString& aOldName, const nsString& aNewName);  \
  NS_IMETHOD    DeleteProfile(const nsString& aProfileName, const nsString& aDeleteFlag);  \
  NS_IMETHOD    GetProfileList(nsString& aReturn);  \
  NS_IMETHOD    StartCommunicator(const nsString& aProfileName);  \
  NS_IMETHOD    GetCurrentProfile(nsString& aReturn);  \
  NS_IMETHOD    MigrateProfile(const nsString& aProfileName);  \



#define NS_FORWARD_IDOMPROFILECORE(_to)  \
  NS_IMETHOD    CreateNewProfile(const nsString& aData) { return _to CreateNewProfile(aData); }  \
  NS_IMETHOD    RenameProfile(const nsString& aOldName, const nsString& aNewName) { return _to RenameProfile(aOldName, aNewName); }  \
  NS_IMETHOD    DeleteProfile(const nsString& aProfileName, const nsString& aDeleteFlag) { return _to DeleteProfile(aProfileName, aDeleteFlag); }  \
  NS_IMETHOD    GetProfileList(nsString& aReturn) { return _to GetProfileList(aReturn); }  \
  NS_IMETHOD    StartCommunicator(const nsString& aProfileName) { return _to StartCommunicator(aProfileName); }  \
  NS_IMETHOD    GetCurrentProfile(nsString& aReturn) { return _to GetCurrentProfile(aReturn); }  \
  NS_IMETHOD    MigrateProfile(const nsString& aProfileName) { return _to MigrateProfile(aProfileName); }  \


extern "C" NS_DOM nsresult NS_InitProfileCoreClass(nsIScriptContext *aContext, void **aPrototype);

extern "C" NS_DOM nsresult NS_NewScriptProfileCore(nsIScriptContext *aContext, nsISupports *aSupports, nsISupports *aParent, void **aReturn);

#endif // nsIDOMProfileCore_h__
