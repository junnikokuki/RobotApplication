/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ubtechinc_alpha_jni_headkey_HeadKeyMgr */

#ifndef _Included_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
#define _Included_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_FORMOR_SHORT
#define com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_FORMOR_SHORT 60L
#undef com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_FORMOR_LONG
#define com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_FORMOR_LONG 64L
#undef com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_BACK_SHORT
#define com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_BACK_SHORT 61L
#undef com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_BACK_LONG
#define com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_BACK_LONG 65L
#undef com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_INTERRUPT
#define com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_MIC5_KEY_INTERRUPT 66L
/*
 * Class:     com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
 * Method:    Init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_Init
  (JNIEnv *, jobject);

/*
 * Class:     com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
 * Method:    Add
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_Add
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
 * Method:    nativeThreadStart
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_nativeThreadStart
  (JNIEnv *, jobject);

/*
 * Class:     com_ubtechinc_alpha_jni_headkey_HeadKeyMgr
 * Method:    nativeThreadStop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ubtechinc_alpha_jni_headkey_HeadKeyMgr_nativeThreadStop
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif