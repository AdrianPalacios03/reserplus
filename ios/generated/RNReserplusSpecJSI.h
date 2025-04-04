/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


  class JSI_EXPORT NativeReserplusCxxSpecJSI : public TurboModule {
protected:
  NativeReserplusCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual double multiply(jsi::Runtime &rt, double a, double b) = 0;

};

template <typename T>
class JSI_EXPORT NativeReserplusCxxSpec : public TurboModule {
public:
  jsi::Value create(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.create(rt, propName);
  }

  std::vector<jsi::PropNameID> getPropertyNames(jsi::Runtime& runtime) override {
    return delegate_.getPropertyNames(runtime);
  }

  static constexpr std::string_view kModuleName = "Reserplus";

protected:
  NativeReserplusCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeReserplusCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeReserplusCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeReserplusCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    double multiply(jsi::Runtime &rt, double a, double b) override {
      static_assert(
          bridging::getParameterCount(&T::multiply) == 3,
          "Expected multiply(...) to have 3 parameters");

      return bridging::callFromJs<double>(
          rt, &T::multiply, jsInvoker_, instance_, std::move(a), std::move(b));
    }

  private:
    friend class NativeReserplusCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
