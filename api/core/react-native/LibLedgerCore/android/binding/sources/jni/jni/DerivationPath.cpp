// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "DerivationPath.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

DerivationPath::DerivationPath() : ::djinni::JniInterface<::ledger::core::api::DerivationPath, DerivationPath>("co/ledger/core/DerivationPath$CppProxy") {}

DerivationPath::~DerivationPath() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::DerivationPath>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1getDepth(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->getDepth();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1getChildNum(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_index)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->getChildNum(::djinni::I32::toCpp(jniEnv, j_index));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1getUnhardenedChildNum(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_index)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->getUnhardenedChildNum(::djinni::I32::toCpp(jniEnv, j_index));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1isHardened(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_index)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->isHardened(::djinni::I32::toCpp(jniEnv, j_index));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1toString(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->toString();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1getParent(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->getParent();
        return ::djinni::release(::djinni_generated::DerivationPath::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_DerivationPath_00024CppProxy_native_1toArray(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DerivationPath>(nativeRef);
        auto r = ref->toArray();
        return ::djinni::release(::djinni::List<::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_DerivationPath_parse(JNIEnv* jniEnv, jobject /*this*/, jstring j_path)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::DerivationPath::parse(::djinni::String::toCpp(jniEnv, j_path));
        return ::djinni::release(::djinni_generated::DerivationPath::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
