// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSACCOUNTCALLBACK_HPP
#define DJINNI_GENERATED_NJSACCOUNTCALLBACK_HPP


#include "../../../core/src/api/Account.hpp"
#include "../../../core/src/utils/optional.hpp"
#include "NJSAccountCpp.hpp"
#include <memory>

#include "../../../core/src/api/Error.hpp"

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/AccountCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

struct NJSError;

class NJSAccountCallback: public Nan::ObjectWrap, public ledger::core::api::AccountCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSAccountCallback() {njs_impl.Reset();};
    NJSAccountCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onCallback(const std::shared_ptr<Account> & result, const std::experimental::optional<Error> & error);

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent <Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSACCOUNTCALLBACK_HPP
