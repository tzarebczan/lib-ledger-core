// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

package co.ledger.core;

import java.util.ArrayList;
import java.util.Date;
import java.util.concurrent.atomic.AtomicBoolean;

/**Class representing a Bitcoin transaction */
public abstract class BitcoinLikeTransaction {
    /** Get the hash of the transaction. */
    public abstract String getHash();

    /** Get the input of the transaction */
    public abstract ArrayList<BitcoinLikeInput> getInputs();

    /** Get the output of the transaction */
    public abstract ArrayList<BitcoinLikeOutput> getOutputs();

    /** Get the block in which the transaction is inserted if the transaction is confirmed. */
    public abstract BitcoinLikeBlock getBlock();

    /** Get the lock time of the transaction. */
    public abstract long getLockTime();

    /** Get the amount of fees of the transaction. */
    public abstract Amount getFees();

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    public abstract Date getTime();

    /** Get the timestamps serialized in the raw transaction if the underlying currency handles it. */
    public abstract Integer getTimestamp();

    /** Get Transaction version */
    public abstract int getVersion();

    /** Serialize the transaction to its raw format. */
    public abstract byte[] serialize();

    /** Serialize outputs of the raw transaction into a byte array using the bitcoin transaction format. */
    public abstract byte[] serializeOutputs();

    /** Get the witness if the underlying transaction is a segwit transaction. */
    public abstract byte[] getWitness();

    /**
     * Estimate the size of the raw transaction in bytes. This method returns a minimum estimated size and a maximum estimated
     * size.
     */
    public abstract EstimatedSize getEstimatedSize();

    private static final class CppProxy extends BitcoinLikeTransaction
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getHash()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getHash(this.nativeRef);
        }
        private native String native_getHash(long _nativeRef);

        @Override
        public ArrayList<BitcoinLikeInput> getInputs()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getInputs(this.nativeRef);
        }
        private native ArrayList<BitcoinLikeInput> native_getInputs(long _nativeRef);

        @Override
        public ArrayList<BitcoinLikeOutput> getOutputs()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getOutputs(this.nativeRef);
        }
        private native ArrayList<BitcoinLikeOutput> native_getOutputs(long _nativeRef);

        @Override
        public BitcoinLikeBlock getBlock()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getBlock(this.nativeRef);
        }
        private native BitcoinLikeBlock native_getBlock(long _nativeRef);

        @Override
        public long getLockTime()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getLockTime(this.nativeRef);
        }
        private native long native_getLockTime(long _nativeRef);

        @Override
        public Amount getFees()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getFees(this.nativeRef);
        }
        private native Amount native_getFees(long _nativeRef);

        @Override
        public Date getTime()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTime(this.nativeRef);
        }
        private native Date native_getTime(long _nativeRef);

        @Override
        public Integer getTimestamp()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTimestamp(this.nativeRef);
        }
        private native Integer native_getTimestamp(long _nativeRef);

        @Override
        public int getVersion()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getVersion(this.nativeRef);
        }
        private native int native_getVersion(long _nativeRef);

        @Override
        public byte[] serialize()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_serialize(this.nativeRef);
        }
        private native byte[] native_serialize(long _nativeRef);

        @Override
        public byte[] serializeOutputs()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_serializeOutputs(this.nativeRef);
        }
        private native byte[] native_serializeOutputs(long _nativeRef);

        @Override
        public byte[] getWitness()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getWitness(this.nativeRef);
        }
        private native byte[] native_getWitness(long _nativeRef);

        @Override
        public EstimatedSize getEstimatedSize()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getEstimatedSize(this.nativeRef);
        }
        private native EstimatedSize native_getEstimatedSize(long _nativeRef);
    }
}
