/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is the Metrics extension.
 *
 * The Initial Developer of the Original Code is Google Inc.
 * Portions created by the Initial Developer are Copyright (C) 2006
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *  Darin Fisher <darin@meer.net>
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef nsMetricsConfig_h__
#define nsMetricsConfig_h__

#include "nsTHashtable.h"
#include "nsHashKeys.h"

class nsIDOMElement;

class nsMetricsConfig
{
public:
  nsMetricsConfig();
  ~nsMetricsConfig() {}

  /**
   * This method must be called before using an instance of this class.
   */
  PRBool Init() {
    return mEventSet.Init();
  }

  /**
   * Restore the default configuration.
   */
  void Reset();

  /**
   * Load the metrics configuration from disk.
   */
  nsresult Load(nsIFile *file);

  /**
   * Call this method to determine if the given event type is enabled for
   * collection.
   */
  PRBool IsEventEnabled(const nsAString &eventNS, const nsAString &eventName);

  /**
   * Get the limit on the number of events that should be collected.
   */
  PRInt32 EventLimit() {
    return mEventLimit;
  }

  /**
   * Get the upload interval (measured in seconds).
   */
  PRInt32 UploadInterval() {
    return mUploadInterval;
  }

  /**
   * Set the upload interval (measured in seconds).
   */
  void SetUploadInterval(PRInt32 uploadInterval) {
    mUploadInterval = uploadInterval;
  }

private:
  typedef void (nsMetricsConfig::*ForEachChildElementCallback)(nsIDOMElement *);

  // Run a callback method for each child element of the given element.
  void ForEachChildElement(nsIDOMElement *elem, ForEachChildElementCallback cb);

  void ProcessToplevelElement(nsIDOMElement *elem);
  void ProcessCollectorElement(nsIDOMElement *elem);

  nsTHashtable<nsStringHashKey> mEventSet;
  PRInt32 mEventLimit;
  PRInt32 mUploadInterval;
};

#endif  // nsMetricsConfig_h__
