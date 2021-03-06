/* Copyright (C) 2016  Intel Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 only, as published by the Free Software Foundation.
 * This file has been designated as subject to the "Classpath"
 * exception as provided in the LICENSE file that accompanied
 * this code.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License version 2 for more details (a copy
 * is included in the LICENSE file that accompanied this code).
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free 
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lib_persistent_PersistentSortedMap */

#ifndef _Included_lib_persistent_PersistentSortedMap
#define _Included_lib_persistent_PersistentSortedMap
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeOpenPool
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentSortedMap_nativeOpenPool
  (JNIEnv *, jclass);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeCreateSortedMap
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeCreateSortedMap
  (JNIEnv *, jclass);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeCheckSortedMapExists
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_lib_persistent_PersistentSortedMap_nativeCheckSortedMapExists
  (JNIEnv *, jclass, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativePut
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativePut
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGet
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGet
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeRemove
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeRemove
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_lib_persistent_PersistentSortedMap_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGetFirstNode
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGetFirstNode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGetLastNode
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGetLastNode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGetSuccessor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGetSuccessor
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGetPredecessor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGetPredecessor
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGetNodeKey
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGetNodeKey
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeGetNodeValue
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentSortedMap_nativeGetNodeValue
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentSortedMap_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativePutAll
 * Signature: (J[J[JI)V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentSortedMap_nativePutAll
  (JNIEnv *, jobject, jlong, jlongArray, jlongArray, jint);

/*
 * Class:     lib_persistent_PersistentSortedMap
 * Method:    nativeRemoveAll
 * Signature: (J[JI)V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentSortedMap_nativeRemoveAll
  (JNIEnv *, jobject, jlong, jlongArray, jint);

#ifdef __cplusplus
}
#endif
#endif
