/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_mozilla_dom_DOMAccessorImpl */

#ifndef _Included_org_mozilla_dom_DOMAccessorImpl
#define _Included_org_mozilla_dom_DOMAccessorImpl
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: instance */
/*
 * Class:     org_mozilla_dom_DOMAccessorImpl
 * Method:    register
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_mozilla_dom_DOMAccessorImpl_register
  (JNIEnv *, jclass);

/*
 * Class:     org_mozilla_dom_DOMAccessorImpl
 * Method:    unregister
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_mozilla_dom_DOMAccessorImpl_unregister
  (JNIEnv *, jclass);

/*
 * Class:     org_mozilla_dom_DOMAccessorImpl
 * Method:    getElementByHandle
 * Signature: (J)Lorg/w3c/dom/Element;
 */
JNIEXPORT jobject JNICALL Java_org_mozilla_dom_DOMAccessorImpl_getElementByHandle
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
