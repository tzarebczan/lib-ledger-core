// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEOUTPUT_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEOUTPUT_HPP


#include "../../../core/src/utils/optional.hpp"
#include "NJSAmountCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeOutput.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeOutput: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeOutput() {};
    NJSBitcoinLikeOutput(const std::shared_ptr<ledger::core::api::BitcoinLikeOutput> &iBitcoinLikeOutput):_BitcoinLikeOutput(iBitcoinLikeOutput){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeOutput> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeOutput_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeOutput> getCppImpl(){return _BitcoinLikeOutput;};

private:
    static NAN_METHOD(getTransactionHash);

    static NAN_METHOD(getOutputIndex);

    static NAN_METHOD(getValue);

    static NAN_METHOD(getScript);

    static NAN_METHOD(getAddress);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeOutput> _BitcoinLikeOutput;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEOUTPUT_HPP
