#include <jni.h>
#include "react-native-reserplus.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_reserplus_ReserplusModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return reserplus::multiply(a, b);
}
