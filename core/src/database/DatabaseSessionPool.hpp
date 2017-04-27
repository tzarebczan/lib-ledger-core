/*
 *
 * DatabaseSessionPool
 * ledger-core
 *
 * Created by Pierre Pollastri on 24/04/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#ifndef LEDGER_CORE_DATABASESESSIONPOOL_HPP
#define LEDGER_CORE_DATABASESESSIONPOOL_HPP

#include <soci.h>
#include <src/api/ExecutionContext.hpp>
#include <src/async/Future.hpp>
#include <src/database/DatabaseBackend.hpp>

namespace ledger {
    namespace core {
        class DatabaseSessionPool {
        public:
            soci::connection_pool& getPool();

            static FuturePtr<DatabaseSessionPool> getSessionPool(
                const std::shared_ptr<api::ExecutionContext>& context,
                const std::shared_ptr<DatabaseBackend>& backend,
                const std::shared_ptr<api::PathResolver>& resolver,
                const std::string& dbName
            );

            static const int POOL_SIZE;
            static const int CURRENT_DATABASE_SCHEME_VERSION = 1;
        private:
            DatabaseSessionPool(int poolSize);
            void performDatabaseMigration();
        private:
            soci::connection_pool _pool;
        };
    }
}


#endif //LEDGER_CORE_DATABASESESSIONPOOL_HPP