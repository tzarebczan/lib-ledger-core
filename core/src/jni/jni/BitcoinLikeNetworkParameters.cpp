// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "BitcoinLikeNetworkParameters.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeNetworkParameters::BitcoinLikeNetworkParameters() = default;

BitcoinLikeNetworkParameters::~BitcoinLikeNetworkParameters() = default;

auto BitcoinLikeNetworkParameters::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<BitcoinLikeNetworkParameters>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.identifier)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.P2PKHVersion)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.P2SHVersion)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.XPUBVersion)),
                                                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c.usesFeePerBytePolicy)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.BIP44CoinType)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto BitcoinLikeNetworkParameters::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 7);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<BitcoinLikeNetworkParameters>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_identifier)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_P2PKHVersion)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_P2SHVersion)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_XPUBVersion)),
            ::djinni::Bool::toCpp(jniEnv, jniEnv->GetBooleanField(j, data.field_usesFeePerBytePolicy)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_BIP44CoinType))};
}

}  // namespace djinni_generated
