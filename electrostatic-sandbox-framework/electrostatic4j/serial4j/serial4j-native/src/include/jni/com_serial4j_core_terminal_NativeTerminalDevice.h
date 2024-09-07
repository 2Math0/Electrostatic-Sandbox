/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_serial4j_core_terminal_NativeTerminalDevice */

#ifndef _Included_com_serial4j_core_terminal_NativeTerminalDevice
#define _Included_com_serial4j_core_terminal_NativeTerminalDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setupJniEnvironment
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setupJniEnvironment
  (JNIEnv *, jclass);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    isExistential
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_isExistential__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    isExistential
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_isExistential__
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setTerminalControlFlag
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setTerminalControlFlag
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setTerminalLocalFlag
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setTerminalLocalFlag
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setTerminalInputFlag
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setTerminalInputFlag
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setTerminalOutputFlag
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setTerminalOutputFlag
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getTerminalControlFlag
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getTerminalControlFlag
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getTerminalLocalFlag
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getTerminalLocalFlag
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getTerminalInputFlag
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getTerminalInputFlag
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getTerminalOutputFlag
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getTerminalOutputFlag
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setReadConfigurationMode
 * Signature: (SS)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setReadConfigurationMode
  (JNIEnv *, jobject, jshort, jshort);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getReadConfigurationMode
 * Signature: ()[S
 */
JNIEXPORT jshortArray JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getReadConfigurationMode
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getErrno
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getErrno
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    fetchSerialPorts
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_fetchSerialPorts
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getBaudRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getBaudRate
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    write
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_write__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    write
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_write__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    sread
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_sread__
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    sread
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_sread__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    iread
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_iread
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    seek
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_seek
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    openPort
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_openPort
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setModemBitsStatus
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setModemBitsStatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    getModemBitsStatus
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_getModemBitsStatus
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    initTerminal
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_initTerminal
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    setBaudRate
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_setBaudRate
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_terminal_NativeTerminalDevice
 * Method:    closePort
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_terminal_NativeTerminalDevice_closePort
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
