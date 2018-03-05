// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEWALLET_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEWALLET_HPP


#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeWallet.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeWallet: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeWallet() {};
    NJSBitcoinLikeWallet(const std::shared_ptr<ledger::core::api::BitcoinLikeWallet> &iBitcoinLikeWallet):_BitcoinLikeWallet(iBitcoinLikeWallet){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeWallet> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeWallet_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeWallet> getCppImpl(){return _BitcoinLikeWallet;};

private:
    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeWallet> _BitcoinLikeWallet;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEWALLET_HPP
