/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MONGODB_V20180408_MONGODBCLIENT_H_
#define TENCENTCLOUD_MONGODB_V20180408_MONGODBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/mongodb/v20180408/model/TerminateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20180408/model/TerminateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceHourRequest.h>
#include <tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceHourResponse.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20180408
        {
            class MongodbClient : public AbstractClient
            {
            public:
                MongodbClient(const Credential &credential, const std::string &region);
                MongodbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Error, Model::TerminateDBInstanceResponse> TerminateDBInstanceOutcome;
                typedef std::future<TerminateDBInstanceOutcome> TerminateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::TerminateDBInstanceRequest&, TerminateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceHourResponse> UpgradeDBInstanceHourOutcome;
                typedef std::future<UpgradeDBInstanceHourOutcome> UpgradeDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::UpgradeDBInstanceHourRequest&, UpgradeDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceHourAsyncHandler;



                /**
                 *本接口(CreateDBInstance)用于创建包年包月的MongoDB云数据库实例。
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *本接口(CreateDBInstanceHour)用于创建按量计费的MongoDB云数据库实例（包括主实例、灾备实例和只读实例），可通过传入实例规格、实例类型、MongoDB版本、购买时长和数量等信息创建云数据库实例。
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *本接口(TerminateDBInstance)用于销毁按量计费的MongoDB云数据库实例
                 * @param req TerminateDBInstanceRequest
                 * @return TerminateDBInstanceOutcome
                 */
                TerminateDBInstanceOutcome TerminateDBInstance(const Model::TerminateDBInstanceRequest &request);
                void TerminateDBInstanceAsync(const Model::TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDBInstanceOutcomeCallable TerminateDBInstanceCallable(const Model::TerminateDBInstanceRequest& request);

                /**
                 *本接口(UpgradeDBInstance)用于升级包年包月的MongoDB云数据库实例，可以扩容内存、存储以及Oplog
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

                /**
                 *本接口(UpgradeDBInstanceHour)用于升级按量计费的MongoDB云数据库实例，可以扩容内存、存储以及oplog
                 * @param req UpgradeDBInstanceHourRequest
                 * @return UpgradeDBInstanceHourOutcome
                 */
                UpgradeDBInstanceHourOutcome UpgradeDBInstanceHour(const Model::UpgradeDBInstanceHourRequest &request);
                void UpgradeDBInstanceHourAsync(const Model::UpgradeDBInstanceHourRequest& request, const UpgradeDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceHourOutcomeCallable UpgradeDBInstanceHourCallable(const Model::UpgradeDBInstanceHourRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20180408_MONGODBCLIENT_H_
