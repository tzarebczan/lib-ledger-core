// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_WALLET_HPP
#define DJINNI_GENERATED_WALLET_HPP

#include <cstdint>
#include <memory>

namespace ledger { namespace core { namespace api {

class AccountCallback;
class AccountListCallback;
class EventBus;
class I32Callback;
class Preferences;
struct Currency;

class Wallet {
public:
    virtual ~Wallet() {}

    virtual std::shared_ptr<AccountListCallback> getAccounts() = 0;

    virtual std::shared_ptr<AccountCallback> getAccount(int32_t index) = 0;

    virtual std::shared_ptr<I32Callback> getAccountCount() = 0;

    virtual std::shared_ptr<EventBus> getEventBus() = 0;

    virtual bool isSynchronizing() = 0;

    virtual std::shared_ptr<EventBus> synchronize() = 0;

    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    /**
     * asBitcoinLikeWallet(): Callback<BitcoinLikeWallet>;
     * asEthereumLikeWallet(): Callback<EthereumLikeWallet>;
     * asRippleLikeWallet(): Callback<RippleLikeWallet>;
     */
    virtual Currency getCurrency() = 0;

    virtual bool isInstanceOfBitcoinLikeWallet() = 0;

    virtual bool isInstanceOfEthereumLikeWallet() = 0;

    virtual bool isInstanceOfRippleLikeWallet() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_WALLET_HPP