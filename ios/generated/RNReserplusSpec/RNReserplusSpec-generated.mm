/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleObjCpp
 *
 * We create an umbrella header (and corresponding implementation) here since
 * Cxx compilation in BUCK has a limitation: source-code producing genrule()s
 * must have a single output. More files => more genrule()s => slower builds.
 */

#import "RNReserplusSpec.h"


@implementation NativeReserplusSpecBase


- (void)setEventEmitterCallback:(EventEmitterCallbackWrapper *)eventEmitterCallbackWrapper
{
  _eventEmitterCallback = std::move(eventEmitterCallbackWrapper->_eventEmitterCallback);
}
@end


namespace facebook::react {
  
    static facebook::jsi::Value __hostFunction_NativeReserplusSpecJSI_multiply(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
      return static_cast<ObjCTurboModule&>(turboModule).invokeObjCMethod(rt, NumberKind, "multiply", @selector(multiply:b:), args, count);
    }

  NativeReserplusSpecJSI::NativeReserplusSpecJSI(const ObjCTurboModule::InitParams &params)
    : ObjCTurboModule(params) {
      
        methodMap_["multiply"] = MethodMetadata {2, __hostFunction_NativeReserplusSpecJSI_multiply};
        
  }
} // namespace facebook::react
