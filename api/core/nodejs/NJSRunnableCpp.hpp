// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#ifndef DJINNI_GENERATED_NJSRUNNABLE_HPP
#define DJINNI_GENERATED_NJSRUNNABLE_HPP


#include <nan.h>
#include <node.h>
#include "../../../core/src/api/Runnable.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSRunnable: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSRunnable() {};
    NJSRunnable(const std::shared_ptr<ledger::core::api::Runnable> &iRunnable):_Runnable(iRunnable){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Runnable> &object);
    static Nan::Persistent<ObjectTemplate> Runnable_prototype;
    std::shared_ptr<ledger::core::api::Runnable> getCppImpl(){return _Runnable;};

private:
    static NAN_METHOD(run);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::Runnable> _Runnable;
};
#endif //DJINNI_GENERATED_NJSRUNNABLE_HPP
