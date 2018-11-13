// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

package co.ledger.core;

import java.util.ArrayList;

/**Structure of informations needed for account creation */
public final class AccountCreationInfo {


    /*package*/ final int index;

    /*package*/ final ArrayList<String> owners;

    /*package*/ final ArrayList<String> derivations;

    /*package*/ final ArrayList<byte[]> publicKeys;

    /*package*/ final ArrayList<byte[]> chainCodes;

    public AccountCreationInfo(
            int index,
            ArrayList<String> owners,
            ArrayList<String> derivations,
            ArrayList<byte[]> publicKeys,
            ArrayList<byte[]> chainCodes) {
        this.index = index;
        this.owners = owners;
        this.derivations = derivations;
        this.publicKeys = publicKeys;
        this.chainCodes = chainCodes;
    }

    /**32 bits integer, index of account in user's wallet */
    public int getIndex() {
        return index;
    }

    /**List of string, account's owners */
    public ArrayList<String> getOwners() {
        return owners;
    }

    /**List of string, list of account's derivations */
    public ArrayList<String> getDerivations() {
        return derivations;
    }

    /**List of 32 bytes, list of public keys owning the account */
    public ArrayList<byte[]> getPublicKeys() {
        return publicKeys;
    }

    /**TODO */
    public ArrayList<byte[]> getChainCodes() {
        return chainCodes;
    }

    @Override
    public String toString() {
        return "AccountCreationInfo{" +
                "index=" + index +
                "," + "owners=" + owners +
                "," + "derivations=" + derivations +
                "," + "publicKeys=" + publicKeys +
                "," + "chainCodes=" + chainCodes +
        "}";
    }

}