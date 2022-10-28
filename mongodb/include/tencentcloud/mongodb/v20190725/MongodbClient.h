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
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDownloadTaskRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDownloadTaskResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeAccountUsersRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeAccountUsersResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeBackupDownloadTaskRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeBackupDownloadTaskResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeCurrentOpRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeCurrentOpResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNodePropertyRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNodePropertyResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSecurityGroupRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSecurityGroupResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogPatternsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogPatternsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSpecInfoRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSpecInfoResponse.h>
#include <tencentcloud/mongodb/v20190725/model/FlushInstanceRouterConfigRequest.h>
#include <tencentcloud/mongodb/v20190725/model/FlushInstanceRouterConfigResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceModifyDBInstanceSpecRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceModifyDBInstanceSpecResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceRenewDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceRenewDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/KillOpsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/KillOpsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSecurityGroupRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSecurityGroupResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecResponse.h>
#include <tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/RenameInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/RenameInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/RenewDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/RenewDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ResetDBInstancePasswordRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ResetDBInstancePasswordResponse.h>
#include <tencentcloud/mongodb/v20190725/model/SetAccountUserPrivilegeRequest.h>
#include <tencentcloud/mongodb/v20190725/model/SetAccountUserPrivilegeResponse.h>
#include <tencentcloud/mongodb/v20190725/model/TerminateDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/TerminateDBInstancesResponse.h>


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

                typedef Outcome<Core::Error, Model::AssignProjectResponse> AssignProjectOutcome;
                typedef std::future<AssignProjectOutcome> AssignProjectOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::AssignProjectRequest&, AssignProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupDBInstanceResponse> CreateBackupDBInstanceOutcome;
                typedef std::future<CreateBackupDBInstanceOutcome> CreateBackupDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateBackupDBInstanceRequest&, CreateBackupDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupDownloadTaskResponse> CreateBackupDownloadTaskOutcome;
                typedef std::future<CreateBackupDownloadTaskOutcome> CreateBackupDownloadTaskOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateBackupDownloadTaskRequest&, CreateBackupDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountUsersResponse> DescribeAccountUsersOutcome;
                typedef std::future<DescribeAccountUsersOutcome> DescribeAccountUsersOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeAccountUsersRequest&, DescribeAccountUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadTaskResponse> DescribeBackupDownloadTaskOutcome;
                typedef std::future<DescribeBackupDownloadTaskOutcome> DescribeBackupDownloadTaskOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeBackupDownloadTaskRequest&, DescribeBackupDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientConnectionsResponse> DescribeClientConnectionsOutcome;
                typedef std::future<DescribeClientConnectionsOutcome> DescribeClientConnectionsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeClientConnectionsRequest&, DescribeClientConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentOpResponse> DescribeCurrentOpOutcome;
                typedef std::future<DescribeCurrentOpOutcome> DescribeCurrentOpOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeCurrentOpRequest&, DescribeCurrentOpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentOpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBBackupsResponse> DescribeDBBackupsOutcome;
                typedef std::future<DescribeDBBackupsOutcome> DescribeDBBackupsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBBackupsRequest&, DescribeDBBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceDealResponse> DescribeDBInstanceDealOutcome;
                typedef std::future<DescribeDBInstanceDealOutcome> DescribeDBInstanceDealOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstanceDealRequest&, DescribeDBInstanceDealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDealAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceNodePropertyResponse> DescribeDBInstanceNodePropertyOutcome;
                typedef std::future<DescribeDBInstanceNodePropertyOutcome> DescribeDBInstanceNodePropertyOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstanceNodePropertyRequest&, DescribeDBInstanceNodePropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNodePropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupResponse> DescribeSecurityGroupOutcome;
                typedef std::future<DescribeSecurityGroupOutcome> DescribeSecurityGroupOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSecurityGroupRequest&, DescribeSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogPatternsResponse> DescribeSlowLogPatternsOutcome;
                typedef std::future<DescribeSlowLogPatternsOutcome> DescribeSlowLogPatternsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSlowLogPatternsRequest&, DescribeSlowLogPatternsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogPatternsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecInfoResponse> DescribeSpecInfoOutcome;
                typedef std::future<DescribeSpecInfoOutcome> DescribeSpecInfoOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSpecInfoRequest&, DescribeSpecInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::FlushInstanceRouterConfigResponse> FlushInstanceRouterConfigOutcome;
                typedef std::future<FlushInstanceRouterConfigOutcome> FlushInstanceRouterConfigOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::FlushInstanceRouterConfigRequest&, FlushInstanceRouterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlushInstanceRouterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateDBInstancesResponse> InquirePriceCreateDBInstancesOutcome;
                typedef std::future<InquirePriceCreateDBInstancesOutcome> InquirePriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InquirePriceCreateDBInstancesRequest&, InquirePriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyDBInstanceSpecResponse> InquirePriceModifyDBInstanceSpecOutcome;
                typedef std::future<InquirePriceModifyDBInstanceSpecOutcome> InquirePriceModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InquirePriceModifyDBInstanceSpecRequest&, InquirePriceModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewDBInstancesResponse> InquirePriceRenewDBInstancesOutcome;
                typedef std::future<InquirePriceRenewDBInstancesOutcome> InquirePriceRenewDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InquirePriceRenewDBInstancesRequest&, InquirePriceRenewDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillOpsResponse> KillOpsOutcome;
                typedef std::future<KillOpsOutcome> KillOpsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::KillOpsRequest&, KillOpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillOpsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNetworkAddressResponse> ModifyDBInstanceNetworkAddressOutcome;
                typedef std::future<ModifyDBInstanceNetworkAddressOutcome> ModifyDBInstanceNetworkAddressOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceNetworkAddressRequest&, ModifyDBInstanceNetworkAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupResponse> ModifyDBInstanceSecurityGroupOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupOutcome> ModifyDBInstanceSecurityGroupOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceSecurityGroupRequest&, ModifyDBInstanceSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSpecResponse> ModifyDBInstanceSpecOutcome;
                typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceSpecRequest&, ModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineIsolatedDBInstanceResponse> OfflineIsolatedDBInstanceOutcome;
                typedef std::future<OfflineIsolatedDBInstanceOutcome> OfflineIsolatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::OfflineIsolatedDBInstanceRequest&, OfflineIsolatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameInstanceResponse> RenameInstanceOutcome;
                typedef std::future<RenameInstanceOutcome> RenameInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::RenameInstanceRequest&, RenameInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDBInstancesResponse> RenewDBInstancesOutcome;
                typedef std::future<RenewDBInstancesOutcome> RenewDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::RenewDBInstancesRequest&, RenewDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDBInstancePasswordResponse> ResetDBInstancePasswordOutcome;
                typedef std::future<ResetDBInstancePasswordOutcome> ResetDBInstancePasswordOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ResetDBInstancePasswordRequest&, ResetDBInstancePasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDBInstancePasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAccountUserPrivilegeResponse> SetAccountUserPrivilegeOutcome;
                typedef std::future<SetAccountUserPrivilegeOutcome> SetAccountUserPrivilegeOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::SetAccountUserPrivilegeRequest&, SetAccountUserPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAccountUserPrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDBInstancesResponse> TerminateDBInstancesOutcome;
                typedef std::future<TerminateDBInstancesOutcome> TerminateDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::TerminateDBInstancesRequest&, TerminateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstancesAsyncHandler;



                /**
                 *本接口(AssignProject)用于指定云数据库实例的所属项目。

                 * @param req AssignProjectRequest
                 * @return AssignProjectOutcome
                 */
                AssignProjectOutcome AssignProject(const Model::AssignProjectRequest &request);
                void AssignProjectAsync(const Model::AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignProjectOutcomeCallable AssignProjectCallable(const Model::AssignProjectRequest& request);

                /**
                 *备份实例接口
                 * @param req CreateBackupDBInstanceRequest
                 * @return CreateBackupDBInstanceOutcome
                 */
                CreateBackupDBInstanceOutcome CreateBackupDBInstance(const Model::CreateBackupDBInstanceRequest &request);
                void CreateBackupDBInstanceAsync(const Model::CreateBackupDBInstanceRequest& request, const CreateBackupDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupDBInstanceOutcomeCallable CreateBackupDBInstanceCallable(const Model::CreateBackupDBInstanceRequest& request);

                /**
                 *本接口用来创建某个备份文件的下载任务
                 * @param req CreateBackupDownloadTaskRequest
                 * @return CreateBackupDownloadTaskOutcome
                 */
                CreateBackupDownloadTaskOutcome CreateBackupDownloadTask(const Model::CreateBackupDownloadTaskRequest &request);
                void CreateBackupDownloadTaskAsync(const Model::CreateBackupDownloadTaskRequest& request, const CreateBackupDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupDownloadTaskOutcomeCallable CreateBackupDownloadTaskCallable(const Model::CreateBackupDownloadTaskRequest& request);

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
                 *本接口(DescribeAccountUsers)用于获取当前实例的全部账号列表。
                 * @param req DescribeAccountUsersRequest
                 * @return DescribeAccountUsersOutcome
                 */
                DescribeAccountUsersOutcome DescribeAccountUsers(const Model::DescribeAccountUsersRequest &request);
                void DescribeAccountUsersAsync(const Model::DescribeAccountUsersRequest& request, const DescribeAccountUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountUsersOutcomeCallable DescribeAccountUsersCallable(const Model::DescribeAccountUsersRequest& request);

                /**
                 *查询异步任务状态接口
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *查询备份下载任务信息
                 * @param req DescribeBackupDownloadTaskRequest
                 * @return DescribeBackupDownloadTaskOutcome
                 */
                DescribeBackupDownloadTaskOutcome DescribeBackupDownloadTask(const Model::DescribeBackupDownloadTaskRequest &request);
                void DescribeBackupDownloadTaskAsync(const Model::DescribeBackupDownloadTaskRequest& request, const DescribeBackupDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadTaskOutcomeCallable DescribeBackupDownloadTaskCallable(const Model::DescribeBackupDownloadTaskRequest& request);

                /**
                 *本接口(DescribeClientConnections)用于查询实例客户端连接信息，包括连接IP和连接数量。
                 * @param req DescribeClientConnectionsRequest
                 * @return DescribeClientConnectionsOutcome
                 */
                DescribeClientConnectionsOutcome DescribeClientConnections(const Model::DescribeClientConnectionsRequest &request);
                void DescribeClientConnectionsAsync(const Model::DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientConnectionsOutcomeCallable DescribeClientConnectionsCallable(const Model::DescribeClientConnectionsRequest& request);

                /**
                 *本接口(DescribeCurrentOp)用于查询MongoDB云数据库实例的当前正在执行的操作。
                 * @param req DescribeCurrentOpRequest
                 * @return DescribeCurrentOpOutcome
                 */
                DescribeCurrentOpOutcome DescribeCurrentOp(const Model::DescribeCurrentOpRequest &request);
                void DescribeCurrentOpAsync(const Model::DescribeCurrentOpRequest& request, const DescribeCurrentOpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentOpOutcomeCallable DescribeCurrentOpCallable(const Model::DescribeCurrentOpRequest& request);

                /**
                 *本接口（DescribeDBBackups）用于查询实例备份列表，目前只支持查询7天内的备份记录。
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *本接口（DescribeDBInstanceDeal）用于获取MongoDB购买、续费及变配订单详细。
                 * @param req DescribeDBInstanceDealRequest
                 * @return DescribeDBInstanceDealOutcome
                 */
                DescribeDBInstanceDealOutcome DescribeDBInstanceDeal(const Model::DescribeDBInstanceDealRequest &request);
                void DescribeDBInstanceDealAsync(const Model::DescribeDBInstanceDealRequest& request, const DescribeDBInstanceDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceDealOutcomeCallable DescribeDBInstanceDealCallable(const Model::DescribeDBInstanceDealRequest& request);

                /**
                 *本接口用于查询节点的属性，包括节点所在可用区、节点名称、地址、角色、状态、主从延迟、优先级、投票权、标签等属性。
                 * @param req DescribeDBInstanceNodePropertyRequest
                 * @return DescribeDBInstanceNodePropertyOutcome
                 */
                DescribeDBInstanceNodePropertyOutcome DescribeDBInstanceNodeProperty(const Model::DescribeDBInstanceNodePropertyRequest &request);
                void DescribeDBInstanceNodePropertyAsync(const Model::DescribeDBInstanceNodePropertyRequest& request, const DescribeDBInstanceNodePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceNodePropertyOutcomeCallable DescribeDBInstanceNodePropertyCallable(const Model::DescribeDBInstanceNodePropertyRequest& request);

                /**
                 *本接口(DescribeDBInstances)用于查询云数据库实例列表，支持通过项目ID、实例ID、实例状态等过滤条件来筛选实例。支持查询主实例、灾备实例和只读实例信息列表。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口(DescribeInstanceParams)用于查询当前实例可修改的参数列表。
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *查询实例绑定的安全组
                 * @param req DescribeSecurityGroupRequest
                 * @return DescribeSecurityGroupOutcome
                 */
                DescribeSecurityGroupOutcome DescribeSecurityGroup(const Model::DescribeSecurityGroupRequest &request);
                void DescribeSecurityGroupAsync(const Model::DescribeSecurityGroupRequest& request, const DescribeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupOutcomeCallable DescribeSecurityGroupCallable(const Model::DescribeSecurityGroupRequest& request);

                /**
                 *本接口（DescribeSlowLogPatterns）用于获取数据库实例慢日志的统计信息。
                 * @param req DescribeSlowLogPatternsRequest
                 * @return DescribeSlowLogPatternsOutcome
                 */
                DescribeSlowLogPatternsOutcome DescribeSlowLogPatterns(const Model::DescribeSlowLogPatternsRequest &request);
                void DescribeSlowLogPatternsAsync(const Model::DescribeSlowLogPatternsRequest& request, const DescribeSlowLogPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogPatternsOutcomeCallable DescribeSlowLogPatternsCallable(const Model::DescribeSlowLogPatternsRequest& request);

                /**
                 *本接口（DescribeSlowLogs）用于获取云数据库慢日志信息。接口只支持查询最近7天内慢日志。
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *本接口(DescribeSpecInfo)用于查询实例的售卖规格。
                 * @param req DescribeSpecInfoRequest
                 * @return DescribeSpecInfoOutcome
                 */
                DescribeSpecInfoOutcome DescribeSpecInfo(const Model::DescribeSpecInfoRequest &request);
                void DescribeSpecInfoAsync(const Model::DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecInfoOutcomeCallable DescribeSpecInfoCallable(const Model::DescribeSpecInfoRequest& request);

                /**
                 *在所有mongos上执行FlushRouterConfig命令
                 * @param req FlushInstanceRouterConfigRequest
                 * @return FlushInstanceRouterConfigOutcome
                 */
                FlushInstanceRouterConfigOutcome FlushInstanceRouterConfig(const Model::FlushInstanceRouterConfigRequest &request);
                void FlushInstanceRouterConfigAsync(const Model::FlushInstanceRouterConfigRequest& request, const FlushInstanceRouterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlushInstanceRouterConfigOutcomeCallable FlushInstanceRouterConfigCallable(const Model::FlushInstanceRouterConfigRequest& request);

                /**
                 *本接口（InquirePriceCreateDBInstances）用于创建数据库实例询价。本接口参数中必须传入region参数，否则无法通过校验。本接口仅允许针对购买限制范围内的实例配置进行询价。
                 * @param req InquirePriceCreateDBInstancesRequest
                 * @return InquirePriceCreateDBInstancesOutcome
                 */
                InquirePriceCreateDBInstancesOutcome InquirePriceCreateDBInstances(const Model::InquirePriceCreateDBInstancesRequest &request);
                void InquirePriceCreateDBInstancesAsync(const Model::InquirePriceCreateDBInstancesRequest& request, const InquirePriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateDBInstancesOutcomeCallable InquirePriceCreateDBInstancesCallable(const Model::InquirePriceCreateDBInstancesRequest& request);

                /**
                 *本接口 (InquirePriceModifyDBInstanceSpec) 用于调整实例的配置询价。
                 * @param req InquirePriceModifyDBInstanceSpecRequest
                 * @return InquirePriceModifyDBInstanceSpecOutcome
                 */
                InquirePriceModifyDBInstanceSpecOutcome InquirePriceModifyDBInstanceSpec(const Model::InquirePriceModifyDBInstanceSpecRequest &request);
                void InquirePriceModifyDBInstanceSpecAsync(const Model::InquirePriceModifyDBInstanceSpecRequest& request, const InquirePriceModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyDBInstanceSpecOutcomeCallable InquirePriceModifyDBInstanceSpecCallable(const Model::InquirePriceModifyDBInstanceSpecRequest& request);

                /**
                 *本接口 (InquiryPriceRenewDBInstances) 用于续费包年包月实例询价。
                 * @param req InquirePriceRenewDBInstancesRequest
                 * @return InquirePriceRenewDBInstancesOutcome
                 */
                InquirePriceRenewDBInstancesOutcome InquirePriceRenewDBInstances(const Model::InquirePriceRenewDBInstancesRequest &request);
                void InquirePriceRenewDBInstancesAsync(const Model::InquirePriceRenewDBInstancesRequest& request, const InquirePriceRenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewDBInstancesOutcomeCallable InquirePriceRenewDBInstancesCallable(const Model::InquirePriceRenewDBInstancesRequest& request);

                /**
                 *本接口(IsolateDBInstance)用于隔离MongoDB云数据库按量计费实例。隔离后实例保留在回收站中，不能再写入数据。隔离一定时间后，实例会彻底删除，回收站保存时间请参考按量计费的服务条款。在隔离中的按量计费实例无法恢复，请谨慎操作。
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *本接口(KillOps)用于终止MongoDB云数据库实例上执行的特定操作。
                 * @param req KillOpsRequest
                 * @return KillOpsOutcome
                 */
                KillOpsOutcome KillOps(const Model::KillOpsRequest &request);
                void KillOpsAsync(const Model::KillOpsRequest& request, const KillOpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillOpsOutcomeCallable KillOpsCallable(const Model::KillOpsRequest& request);

                /**
                 *本接口(ModifyDBInstanceNetworkAddress)用于修改云数据库实例的网络信息，可进行基础网络转VPC网络和VPC网络之间的变换。
                 * @param req ModifyDBInstanceNetworkAddressRequest
                 * @return ModifyDBInstanceNetworkAddressOutcome
                 */
                ModifyDBInstanceNetworkAddressOutcome ModifyDBInstanceNetworkAddress(const Model::ModifyDBInstanceNetworkAddressRequest &request);
                void ModifyDBInstanceNetworkAddressAsync(const Model::ModifyDBInstanceNetworkAddressRequest& request, const ModifyDBInstanceNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNetworkAddressOutcomeCallable ModifyDBInstanceNetworkAddressCallable(const Model::ModifyDBInstanceNetworkAddressRequest& request);

                /**
                 *修改实例绑定的安全组
                 * @param req ModifyDBInstanceSecurityGroupRequest
                 * @return ModifyDBInstanceSecurityGroupOutcome
                 */
                ModifyDBInstanceSecurityGroupOutcome ModifyDBInstanceSecurityGroup(const Model::ModifyDBInstanceSecurityGroupRequest &request);
                void ModifyDBInstanceSecurityGroupAsync(const Model::ModifyDBInstanceSecurityGroupRequest& request, const ModifyDBInstanceSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupOutcomeCallable ModifyDBInstanceSecurityGroupCallable(const Model::ModifyDBInstanceSecurityGroupRequest& request);

                /**
                 *本接口(ModifyDBInstanceSpec)用于调整MongoDB云数据库实例配置。接口支持的售卖规格，可从查询云数据库的售卖规格（DescribeSpecInfo）获取。
                 * @param req ModifyDBInstanceSpecRequest
                 * @return ModifyDBInstanceSpecOutcome
                 */
                ModifyDBInstanceSpecOutcome ModifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request);
                void ModifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSpecOutcomeCallable ModifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request);

                /**
                 *本接口(OfflineIsolatedDBInstance)用于立即下线隔离状态的云数据库实例。进行操作的实例状态必须为隔离状态。
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

                /**
                 *本接口(RenewDBInstance)用于续费云数据库实例，仅支持付费模式为包年包月的实例。按量计费实例不需要续费。
                 * @param req RenewDBInstancesRequest
                 * @return RenewDBInstancesOutcome
                 */
                RenewDBInstancesOutcome RenewDBInstances(const Model::RenewDBInstancesRequest &request);
                void RenewDBInstancesAsync(const Model::RenewDBInstancesRequest& request, const RenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBInstancesOutcomeCallable RenewDBInstancesCallable(const Model::RenewDBInstancesRequest& request);

                /**
                 *修改实例用户的密码
                 * @param req ResetDBInstancePasswordRequest
                 * @return ResetDBInstancePasswordOutcome
                 */
                ResetDBInstancePasswordOutcome ResetDBInstancePassword(const Model::ResetDBInstancePasswordRequest &request);
                void ResetDBInstancePasswordAsync(const Model::ResetDBInstancePasswordRequest& request, const ResetDBInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDBInstancePasswordOutcomeCallable ResetDBInstancePasswordCallable(const Model::ResetDBInstancePasswordRequest& request);

                /**
                 *账户权限设置。
                 * @param req SetAccountUserPrivilegeRequest
                 * @return SetAccountUserPrivilegeOutcome
                 */
                SetAccountUserPrivilegeOutcome SetAccountUserPrivilege(const Model::SetAccountUserPrivilegeRequest &request);
                void SetAccountUserPrivilegeAsync(const Model::SetAccountUserPrivilegeRequest& request, const SetAccountUserPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAccountUserPrivilegeOutcomeCallable SetAccountUserPrivilegeCallable(const Model::SetAccountUserPrivilegeRequest& request);

                /**
                 *本接口（TerminateDBInstances）可将包年包月实例退还隔离。
                 * @param req TerminateDBInstancesRequest
                 * @return TerminateDBInstancesOutcome
                 */
                TerminateDBInstancesOutcome TerminateDBInstances(const Model::TerminateDBInstancesRequest &request);
                void TerminateDBInstancesAsync(const Model::TerminateDBInstancesRequest& request, const TerminateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDBInstancesOutcomeCallable TerminateDBInstancesCallable(const Model::TerminateDBInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_
