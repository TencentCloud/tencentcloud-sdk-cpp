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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_
#define TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mongodb/v20190725/model/AssignProjectRequest.h>
#include <tencentcloud/mongodb/v20190725/model/AssignProjectResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeBackupAccessRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeBackupAccessResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSpecInfoRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSpecInfoResponse.h>
#include <tencentcloud/mongodb/v20190725/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecResponse.h>
#include <tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/RenameInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/RenameInstanceResponse.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            class MongodbClient : public AbstractClient
            {
            public:
                MongodbClient(const Credential &credential, const std::string &region);
                MongodbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AssignProjectResponse> AssignProjectOutcome;
                typedef std::future<AssignProjectOutcome> AssignProjectOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::AssignProjectRequest&, AssignProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignProjectAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupAccessResponse> DescribeBackupAccessOutcome;
                typedef std::future<DescribeBackupAccessOutcome> DescribeBackupAccessOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeBackupAccessRequest&, DescribeBackupAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupAccessAsyncHandler;
                typedef Outcome<Error, Model::DescribeClientConnectionsResponse> DescribeClientConnectionsOutcome;
                typedef std::future<DescribeClientConnectionsOutcome> DescribeClientConnectionsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeClientConnectionsRequest&, DescribeClientConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientConnectionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBBackupsResponse> DescribeDBBackupsOutcome;
                typedef std::future<DescribeDBBackupsOutcome> DescribeDBBackupsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBBackupsRequest&, DescribeDBBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBBackupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSpecInfoResponse> DescribeSpecInfoOutcome;
                typedef std::future<DescribeSpecInfoOutcome> DescribeSpecInfoOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSpecInfoRequest&, DescribeSpecInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecInfoAsyncHandler;
                typedef Outcome<Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceSpecResponse> ModifyDBInstanceSpecOutcome;
                typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceSpecRequest&, ModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Error, Model::OfflineIsolatedDBInstanceResponse> OfflineIsolatedDBInstanceOutcome;
                typedef std::future<OfflineIsolatedDBInstanceOutcome> OfflineIsolatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::OfflineIsolatedDBInstanceRequest&, OfflineIsolatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::RenameInstanceResponse> RenameInstanceOutcome;
                typedef std::future<RenameInstanceOutcome> RenameInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::RenameInstanceRequest&, RenameInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameInstanceAsyncHandler;



                /**
                 *本接口(AssignProject)用于指定云数据库实例的所属项目。

                 * @param req AssignProjectRequest
                 * @return AssignProjectOutcome
                 */
                AssignProjectOutcome AssignProject(const Model::AssignProjectRequest &request);
                void AssignProjectAsync(const Model::AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignProjectOutcomeCallable AssignProjectCallable(const Model::AssignProjectRequest& request);

                /**
                 *本接口(CreateDBInstance)用于创建包年包月的MongoDB云数据库实例。接口支持的售卖规格，可从查询云数据库的售卖规格（DescribeSpecInfo）获取。
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *本接口(CreateDBInstanceHour)用于创建按量计费的MongoDB云数据库实例。
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *本接口（DescribeBackupAccess）用于获取备份文件的下载授权，具体的备份文件信息可通过查询实例备份列表（DescribeDBBackups）接口获取
                 * @param req DescribeBackupAccessRequest
                 * @return DescribeBackupAccessOutcome
                 */
                DescribeBackupAccessOutcome DescribeBackupAccess(const Model::DescribeBackupAccessRequest &request);
                void DescribeBackupAccessAsync(const Model::DescribeBackupAccessRequest& request, const DescribeBackupAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupAccessOutcomeCallable DescribeBackupAccessCallable(const Model::DescribeBackupAccessRequest& request);

                /**
                 *本接口(DescribeClientConnections)用于查询实例客户端连接信息，包括连接IP和连接数量。目前只支持3.2版本的MongoDB实例。
                 * @param req DescribeClientConnectionsRequest
                 * @return DescribeClientConnectionsOutcome
                 */
                DescribeClientConnectionsOutcome DescribeClientConnections(const Model::DescribeClientConnectionsRequest &request);
                void DescribeClientConnectionsAsync(const Model::DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientConnectionsOutcomeCallable DescribeClientConnectionsCallable(const Model::DescribeClientConnectionsRequest& request);

                /**
                 *本接口（DescribeDBBackups）用于查询实例备份列表，目前只支持7天内的备份查询。
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *本接口(DescribeDBInstances)用于查询云数据库实例列表，支持通过项目ID、实例ID、实例状态等过滤条件来筛选实例。支持查询主实例、灾备实例和只读实例信息列表。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口(DescribeSpecInfo)用于查询实例的售卖规格。
                 * @param req DescribeSpecInfoRequest
                 * @return DescribeSpecInfoOutcome
                 */
                DescribeSpecInfoOutcome DescribeSpecInfo(const Model::DescribeSpecInfoRequest &request);
                void DescribeSpecInfoAsync(const Model::DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecInfoOutcomeCallable DescribeSpecInfoCallable(const Model::DescribeSpecInfoRequest& request);

                /**
                 *本接口(IsolateDBInstance)用于隔离MongoDB云数据库按量计费实例。隔离后实例保留在回收站中，不能再写入数据。隔离一定时间后，实例会彻底删除，回收站保存时间请参考按量计费的服务条款。在隔离中的按量计费实例无法恢复，请谨慎操作。
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *本接口(ModifyDBInstanceSpec)用于调整MongoDB云数据库实例配置。接口支持的售卖规格，可从查询云数据库的售卖规格（DescribeSpecInfo）获取。
                 * @param req ModifyDBInstanceSpecRequest
                 * @return ModifyDBInstanceSpecOutcome
                 */
                ModifyDBInstanceSpecOutcome ModifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request);
                void ModifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSpecOutcomeCallable ModifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request);

                /**
                 *本接口(OfflineIsolatedInstances)用于立即下线隔离状态的云数据库实例。进行操作的实例状态必须为隔离状态。
                 * @param req OfflineIsolatedDBInstanceRequest
                 * @return OfflineIsolatedDBInstanceOutcome
                 */
                OfflineIsolatedDBInstanceOutcome OfflineIsolatedDBInstance(const Model::OfflineIsolatedDBInstanceRequest &request);
                void OfflineIsolatedDBInstanceAsync(const Model::OfflineIsolatedDBInstanceRequest& request, const OfflineIsolatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineIsolatedDBInstanceOutcomeCallable OfflineIsolatedDBInstanceCallable(const Model::OfflineIsolatedDBInstanceRequest& request);

                /**
                 *本接口(RenameInstance)用于修改云数据库实例的名称。
                 * @param req RenameInstanceRequest
                 * @return RenameInstanceOutcome
                 */
                RenameInstanceOutcome RenameInstance(const Model::RenameInstanceRequest &request);
                void RenameInstanceAsync(const Model::RenameInstanceRequest& request, const RenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameInstanceOutcomeCallable RenameInstanceCallable(const Model::RenameInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_
