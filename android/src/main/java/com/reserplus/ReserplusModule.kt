package com.reserplus

import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.module.annotations.ReactModule

@ReactModule(name = ReserplusModule.NAME)
class ReserplusModule(reactContext: ReactApplicationContext) :
  NativeReserplusSpec(reactContext) {

  override fun getName(): String {
    return NAME
  }

  // Example method
  // See https://reactnative.dev/docs/native-modules-android
  override fun multiply(a: Double, b: Double): Double {
    return nativeMultiply(a, b)
  }

  private external fun nativeMultiply(a: Double, b: Double): Double

  companion object {
    const val NAME = "Reserplus"

     // This loads the native library when the class is loaded
     init {
       System.loadLibrary("react-native-quack")
     }
  }
}
