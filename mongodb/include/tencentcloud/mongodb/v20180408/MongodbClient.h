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
#include <tencentcloud/mongodb/v20180408/model/AssignProjectRequest.h>
#include <tencentcloud/mongodb/v20180408/model/AssignProjectResponse.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeClientConnectionsRequest.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeClientConnectionsResponse.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeSlowLogRequest.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeSlowLogResponse.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeSpecInfoRequest.h>
#include <tencentcloud/mongodb/v20180408/model/DescribeSpecInfoResponse.h>
#include <tencentcloud/mongodb/v20180408/model/RenameInstanceRequest.h>
#include <tencentcloud/mongodb/v20180408/model/RenameInstanceResponse.h>
#include <tencentcloud/mongodb/v20180408/model/SetAutoRenewRequest.h>
#include <tencentcloud/mongodb/v20180408/model/SetAutoRenewResponse.h>
#include <tencentcloud/mongodb/v20180408/model/SetPasswordRequest.h>
#include <tencentcloud/mongodb/v20180408/model/SetPasswordResponse.h>
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

                typedef Outcome<Core::Error, Model::AssignProjectResponse> AssignProjectOutcome;
                typedef std::future<AssignProjectOutcome> AssignProjectOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::AssignProjectRequest&, AssignProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientConnectionsResponse> DescribeClientConnectionsOutcome;
                typedef std::future<DescribeClientConnectionsOutcome> DescribeClientConnectionsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeClientConnectionsRequest&, DescribeClientConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogResponse> DescribeSlowLogOutcome;
                typedef std::future<DescribeSlowLogOutcome> DescribeSlowLogOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSlowLogRequest&, DescribeSlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecInfoResponse> DescribeSpecInfoOutcome;
                typedef std::future<DescribeSpecInfoOutcome> DescribeSpecInfoOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSpecInfoRequest&, DescribeSpecInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameInstanceResponse> RenameInstanceOutcome;
                typedef std::future<RenameInstanceOutcome> RenameInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::RenameInstanceRequest&, RenameInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoRenewResponse> SetAutoRenewOutcome;
                typedef std::future<SetAutoRenewOutcome> SetAutoRenewOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::SetAutoRenewRequest&, SetAutoRenewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoRenewAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPasswordResponse> SetPasswordOutcome;
                typedef std::future<SetPasswordOutcome> SetPasswordOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::SetPasswordRequest&, SetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDBInstanceResponse> TerminateDBInstanceOutcome;
                typedef std::future<TerminateDBInstanceOutcome> TerminateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::TerminateDBInstanceRequest&, TerminateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceHourResponse> UpgradeDBInstanceHourOutcome;
                typedef std::future<UpgradeDBInstanceHourOutcome> UpgradeDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::UpgradeDBInstanceHourRequest&, UpgradeDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceHourAsyncHandler;



                /**
                 *本接口（AssignProject）用于指定云数据库实例的所属项目。
                 * @param req AssignProjectRequest
                 * @return AssignProjectOutcome
                 */
                AssignProjectOutcome AssignProject(const Model::AssignProjectRequest &request);
                void AssignProjectAsync(const Model::AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignProjectOutcomeCallable AssignProjectCallable(const Model::AssignProjectRequest& request);

                /**
                 *本接口(CreateDBInstance)用于创建包年包月的MongoDB云数据库实例。
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *本接口(CreateDBInstanceHour)用于创建按量计费的MongoDB云数据库实例，可通过传入实例规格、实例类型、MongoDB版本、购买时长和数量等信息创建云数据库实例。
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *本接口(DescribeClientConnections)用于查询实例客户端连接信息，包括连接IP和连接数量。目前只支持3.2版本的MongoDB实例。
                 * @param req DescribeClientConnectionsRequest
                 * @return DescribeClientConnectionsOutcome
                 */
                DescribeClientConnectionsOutcome DescribeClientConnections(const Model::DescribeClientConnectionsRequest &request);
                void DescribeClientConnectionsAsync(const Model::DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientConnectionsOutcomeCallable DescribeClientConnectionsCallable(const Model::DescribeClientConnectionsRequest& request);

                /**
                 *本接口(DescribeDBInstances)用于查询云数据库实例列表，支持通过项目ID、实例ID、实例状态等过滤条件来筛选实例。支持查询主实例、灾备实例和只读实例信息列表。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口(DescribeSlowLogs)用于获取云数据库实例的慢查询日志。
                 * @param req DescribeSlowLogRequest
                 * @return DescribeSlowLogOutcome
                 */
                DescribeSlowLogOutcome DescribeSlowLog(const Model::DescribeSlowLogRequest &request);
                void DescribeSlowLogAsync(const Model::DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogOutcomeCallable DescribeSlowLogCallable(const Model::DescribeSlowLogRequest& request);

                /**
                 *本接口(DescribeSpecInfo)用于查询实例的售卖规格。
                 * @param req DescribeSpecInfoRequest
                 * @return DescribeSpecInfoOutcome
                 */
                DescribeSpecInfoOutcome DescribeSpecInfo(const Model::DescribeSpecInfoRequest &request);
                void DescribeSpecInfoAsync(const Model::DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecInfoOutcomeCallable DescribeSpecInfoCallable(const Model::DescribeSpecInfoRequest& request);

                /**
                 *本接口(RenameInstance)用于修改云数据库实例的名称。
                 * @param req RenameInstanceRequest
                 * @return RenameInstanceOutcome
                 */
                RenameInstanceOutcome RenameInstance(const Model::RenameInstanceRequest &request);
                void RenameInstanceAsync(const Model::RenameInstanceRequest& request, const RenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameInstanceOutcomeCallable RenameInstanceCallable(const Model::RenameInstanceRequest& request);

                /**
                 *本接口(SetAutoRenew)用于设置包年包月云数据库实例的续费选项。
                 * @param req SetAutoRenewRequest
                 * @return SetAutoRenewOutcome
                 */
                SetAutoRenewOutcome SetAutoRenew(const Model::SetAutoRenewRequest &request);
                void SetAutoRenewAsync(const Model::SetAutoRenewRequest& request, const SetAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoRenewOutcomeCallable SetAutoRenewCallable(const Model::SetAutoRenewRequest& request);

                /**
                 *本接口(SetPassword)用于设置（初始化）MongoDB云数据库实例账户密码。
                 * @param req SetPasswordRequest
                 * @return SetPasswordOutcome
                 */
                SetPasswordOutcome SetPassword(const Model::SetPasswordRequest &request);
                void SetPasswordAsync(const Model::SetPasswordRequest& request, const SetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPasswordOutcomeCallable SetPasswordCallable(const Model::SetPasswordRequest& request);

                /**
                 *本接口(TerminateDBInstance)用于销毁按量计费的MongoDB云数据库实例。
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
