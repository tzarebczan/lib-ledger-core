// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.idl

#import "LGLedgerCore+Private.h"
#import "LGLedgerCore.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGLedgerCore ()

- (id)initWithCpp:(const std::shared_ptr<::LedgerCore>&)cppRef;

@end

@implementation LGLedgerCore {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::LedgerCore>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::LedgerCore>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nonnull NSString *)getStringVersion {
    try {
        auto objcpp_result_ = ::LedgerCore::getStringVersion();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto LedgerCore::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto LedgerCore::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGLedgerCore>(cpp);
}

}  // namespace djinni_generated

@end
