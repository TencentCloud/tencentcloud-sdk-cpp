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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/postgres/v20170312/model/AddDBInstanceToReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/AddDBInstanceToReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloneDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloneDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloseServerlessDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseServerlessDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateServerlessDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateServerlessDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteDBInstanceNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteServerlessDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteServerlessDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAvailableRecoveryTimeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAvailableRecoveryTimeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupPlansResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeCloneDBInstanceSpecRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeCloneDBInstanceSpecResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParamsEventRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParamsEventResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeReadOnlyGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeReadOnlyGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeServerlessDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeServerlessDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryAnalysisRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryAnalysisResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryListRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryListResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DestroyDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/DestroyDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DisIsolateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DisIsolateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/IsolateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/IsolateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupPlanRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupPlanResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSpecResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifySwitchTimePeriodRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifySwitchTimePeriodResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenServerlessDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenServerlessDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/RebalanceReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/RebalanceReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/RemoveDBInstanceFromReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/RemoveDBInstanceFromReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagRequest.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            class PostgresClient : public AbstractClient
            {
            public:
                PostgresClient(const Credential &credential, const std::string &region);
                PostgresClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDBInstanceToReadOnlyGroupResponse> AddDBInstanceToReadOnlyGroupOutcome;
                typedef std::future<AddDBInstanceToReadOnlyGroupOutcome> AddDBInstanceToReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::AddDBInstanceToReadOnlyGroupRequest&, AddDBInstanceToReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDBInstanceToReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneDBInstanceResponse> CloneDBInstanceOutcome;
                typedef std::future<CloneDBInstanceOutcome> CloneDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloneDBInstanceRequest&, CloneDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseServerlessDBExtranetAccessResponse> CloseServerlessDBExtranetAccessOutcome;
                typedef std::future<CloseServerlessDBExtranetAccessOutcome> CloseServerlessDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseServerlessDBExtranetAccessRequest&, CloseServerlessDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseServerlessDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceNetworkAccessResponse> CreateDBInstanceNetworkAccessOutcome;
                typedef std::future<CreateDBInstanceNetworkAccessOutcome> CreateDBInstanceNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDBInstanceNetworkAccessRequest&, CreateDBInstanceNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyDBInstanceResponse> CreateReadOnlyDBInstanceOutcome;
                typedef std::future<CreateReadOnlyDBInstanceOutcome> CreateReadOnlyDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyDBInstanceRequest&, CreateReadOnlyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyGroupResponse> CreateReadOnlyGroupOutcome;
                typedef std::future<CreateReadOnlyGroupOutcome> CreateReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyGroupRequest&, CreateReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyGroupNetworkAccessResponse> CreateReadOnlyGroupNetworkAccessOutcome;
                typedef std::future<CreateReadOnlyGroupNetworkAccessOutcome> CreateReadOnlyGroupNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyGroupNetworkAccessRequest&, CreateReadOnlyGroupNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyGroupNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerlessDBInstanceResponse> CreateServerlessDBInstanceOutcome;
                typedef std::future<CreateServerlessDBInstanceOutcome> CreateServerlessDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateServerlessDBInstanceRequest&, CreateServerlessDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerlessDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBInstanceNetworkAccessResponse> DeleteDBInstanceNetworkAccessOutcome;
                typedef std::future<DeleteDBInstanceNetworkAccessOutcome> DeleteDBInstanceNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteDBInstanceNetworkAccessRequest&, DeleteDBInstanceNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReadOnlyGroupResponse> DeleteReadOnlyGroupOutcome;
                typedef std::future<DeleteReadOnlyGroupOutcome> DeleteReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteReadOnlyGroupRequest&, DeleteReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReadOnlyGroupNetworkAccessResponse> DeleteReadOnlyGroupNetworkAccessOutcome;
                typedef std::future<DeleteReadOnlyGroupNetworkAccessOutcome> DeleteReadOnlyGroupNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteReadOnlyGroupNetworkAccessRequest&, DeleteReadOnlyGroupNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReadOnlyGroupNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServerlessDBInstanceResponse> DeleteServerlessDBInstanceOutcome;
                typedef std::future<DeleteServerlessDBInstanceOutcome> DeleteServerlessDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteServerlessDBInstanceRequest&, DeleteServerlessDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableRecoveryTimeResponse> DescribeAvailableRecoveryTimeOutcome;
                typedef std::future<DescribeAvailableRecoveryTimeOutcome> DescribeAvailableRecoveryTimeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAvailableRecoveryTimeRequest&, DescribeAvailableRecoveryTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableRecoveryTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlansResponse> DescribeBackupPlansOutcome;
                typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupPlansRequest&, DescribeBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloneDBInstanceSpecResponse> DescribeCloneDBInstanceSpecOutcome;
                typedef std::future<DescribeCloneDBInstanceSpecOutcome> DescribeCloneDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeCloneDBInstanceSpecRequest&, DescribeCloneDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloneDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBBackupsResponse> DescribeDBBackupsOutcome;
                typedef std::future<DescribeDBBackupsOutcome> DescribeDBBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBBackupsRequest&, DescribeDBBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBErrlogsResponse> DescribeDBErrlogsOutcome;
                typedef std::future<DescribeDBErrlogsOutcome> DescribeDBErrlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBErrlogsRequest&, DescribeDBErrlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBErrlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceAttributeResponse> DescribeDBInstanceAttributeOutcome;
                typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceAttributeRequest&, DescribeDBInstanceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceParametersResponse> DescribeDBInstanceParametersOutcome;
                typedef std::future<DescribeDBInstanceParametersOutcome> DescribeDBInstanceParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceParametersRequest&, DescribeDBInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowlogsResponse> DescribeDBSlowlogsOutcome;
                typedef std::future<DescribeDBSlowlogsOutcome> DescribeDBSlowlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBSlowlogsRequest&, DescribeDBSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBXlogsResponse> DescribeDBXlogsOutcome;
                typedef std::future<DescribeDBXlogsOutcome> DescribeDBXlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBXlogsRequest&, DescribeDBXlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBXlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamsEventResponse> DescribeParamsEventOutcome;
                typedef std::future<DescribeParamsEventOutcome> DescribeParamsEventOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeParamsEventRequest&, DescribeParamsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupsResponse> DescribeReadOnlyGroupsOutcome;
                typedef std::future<DescribeReadOnlyGroupsOutcome> DescribeReadOnlyGroupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeReadOnlyGroupsRequest&, DescribeReadOnlyGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerlessDBInstancesResponse> DescribeServerlessDBInstancesOutcome;
                typedef std::future<DescribeServerlessDBInstancesOutcome> DescribeServerlessDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeServerlessDBInstancesRequest&, DescribeServerlessDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryAnalysisResponse> DescribeSlowQueryAnalysisOutcome;
                typedef std::future<DescribeSlowQueryAnalysisOutcome> DescribeSlowQueryAnalysisOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeSlowQueryAnalysisRequest&, DescribeSlowQueryAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryListResponse> DescribeSlowQueryListOutcome;
                typedef std::future<DescribeSlowQueryListOutcome> DescribeSlowQueryListOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeSlowQueryListRequest&, DescribeSlowQueryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBInstanceResponse> DestroyDBInstanceOutcome;
                typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DestroyDBInstanceRequest&, DestroyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisIsolateDBInstancesResponse> DisIsolateDBInstancesOutcome;
                typedef std::future<DisIsolateDBInstancesOutcome> DisIsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DisIsolateDBInstancesRequest&, DisIsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisIsolateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewDBInstanceResponse> InquiryPriceRenewDBInstanceOutcome;
                typedef std::future<InquiryPriceRenewDBInstanceOutcome> InquiryPriceRenewDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceRenewDBInstanceRequest&, InquiryPriceRenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstancesResponse> IsolateDBInstancesOutcome;
                typedef std::future<IsolateDBInstancesOutcome> IsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::IsolateDBInstancesRequest&, IsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupPlanResponse> ModifyBackupPlanOutcome;
                typedef std::future<ModifyBackupPlanOutcome> ModifyBackupPlanOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBackupPlanRequest&, ModifyBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceDeploymentResponse> ModifyDBInstanceDeploymentOutcome;
                typedef std::future<ModifyDBInstanceDeploymentOutcome> ModifyDBInstanceDeploymentOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceDeploymentRequest&, ModifyDBInstanceDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceParametersResponse> ModifyDBInstanceParametersOutcome;
                typedef std::future<ModifyDBInstanceParametersOutcome> ModifyDBInstanceParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceParametersRequest&, ModifyDBInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceReadOnlyGroupResponse> ModifyDBInstanceReadOnlyGroupOutcome;
                typedef std::future<ModifyDBInstanceReadOnlyGroupOutcome> ModifyDBInstanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceReadOnlyGroupRequest&, ModifyDBInstanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSpecResponse> ModifyDBInstanceSpecOutcome;
                typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceSpecRequest&, ModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReadOnlyGroupConfigResponse> ModifyReadOnlyGroupConfigOutcome;
                typedef std::future<ModifyReadOnlyGroupConfigOutcome> ModifyReadOnlyGroupConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyReadOnlyGroupConfigRequest&, ModifyReadOnlyGroupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyGroupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySwitchTimePeriodResponse> ModifySwitchTimePeriodOutcome;
                typedef std::future<ModifySwitchTimePeriodOutcome> ModifySwitchTimePeriodOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifySwitchTimePeriodRequest&, ModifySwitchTimePeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySwitchTimePeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenServerlessDBExtranetAccessResponse> OpenServerlessDBExtranetAccessOutcome;
                typedef std::future<OpenServerlessDBExtranetAccessOutcome> OpenServerlessDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenServerlessDBExtranetAccessRequest&, OpenServerlessDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenServerlessDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RebalanceReadOnlyGroupResponse> RebalanceReadOnlyGroupOutcome;
                typedef std::future<RebalanceReadOnlyGroupOutcome> RebalanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RebalanceReadOnlyGroupRequest&, RebalanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebalanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveDBInstanceFromReadOnlyGroupResponse> RemoveDBInstanceFromReadOnlyGroupOutcome;
                typedef std::future<RemoveDBInstanceFromReadOnlyGroupOutcome> RemoveDBInstanceFromReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RemoveDBInstanceFromReadOnlyGroupRequest&, RemoveDBInstanceFromReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDBInstanceFromReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoRenewFlagResponse> SetAutoRenewFlagOutcome;
                typedef std::future<SetAutoRenewFlagOutcome> SetAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::SetAutoRenewFlagRequest&, SetAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;



                /**
                 *本接口（AddDBInstanceToReadOnlyGroup）用于添加只读实例到只读组
                 * @param req AddDBInstanceToReadOnlyGroupRequest
                 * @return AddDBInstanceToReadOnlyGroupOutcome
                 */
                AddDBInstanceToReadOnlyGroupOutcome AddDBInstanceToReadOnlyGroup(const Model::AddDBInstanceToReadOnlyGroupRequest &request);
                void AddDBInstanceToReadOnlyGroupAsync(const Model::AddDBInstanceToReadOnlyGroupRequest& request, const AddDBInstanceToReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDBInstanceToReadOnlyGroupOutcomeCallable AddDBInstanceToReadOnlyGroupCallable(const Model::AddDBInstanceToReadOnlyGroupRequest& request);

                /**
                 *用于克隆实例，支持指定备份集、指定时间点进行克隆。
                 * @param req CloneDBInstanceRequest
                 * @return CloneDBInstanceOutcome
                 */
                CloneDBInstanceOutcome CloneDBInstance(const Model::CloneDBInstanceRequest &request);
                void CloneDBInstanceAsync(const Model::CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneDBInstanceOutcomeCallable CloneDBInstanceCallable(const Model::CloneDBInstanceRequest& request);

                /**
                 *本接口（CloseDBExtranetAccess）用于关闭实例外网链接。
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *关闭serverlessDB实例外网
                 * @param req CloseServerlessDBExtranetAccessRequest
                 * @return CloseServerlessDBExtranetAccessOutcome
                 */
                CloseServerlessDBExtranetAccessOutcome CloseServerlessDBExtranetAccess(const Model::CloseServerlessDBExtranetAccessRequest &request);
                void CloseServerlessDBExtranetAccessAsync(const Model::CloseServerlessDBExtranetAccessRequest& request, const CloseServerlessDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseServerlessDBExtranetAccessOutcomeCallable CloseServerlessDBExtranetAccessCallable(const Model::CloseServerlessDBExtranetAccessRequest& request);

                /**
                 *可对实例进行网络的添加操作。
                 * @param req CreateDBInstanceNetworkAccessRequest
                 * @return CreateDBInstanceNetworkAccessOutcome
                 */
                CreateDBInstanceNetworkAccessOutcome CreateDBInstanceNetworkAccess(const Model::CreateDBInstanceNetworkAccessRequest &request);
                void CreateDBInstanceNetworkAccessAsync(const Model::CreateDBInstanceNetworkAccessRequest& request, const CreateDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceNetworkAccessOutcomeCallable CreateDBInstanceNetworkAccessCallable(const Model::CreateDBInstanceNetworkAccessRequest& request);

                /**
                 *本接口 (CreateDBInstances) 用于创建一个或者多个PostgreSQL实例,仅发货实例不会进行初始化。
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *本接口 (CreateInstances) 用于创建一个或者多个PostgreSQL实例，通过此接口创建的实例无需进行初始化，可直接使用。
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *本接口(CreateReadOnlyDBInstance)用于创建只读实例
                 * @param req CreateReadOnlyDBInstanceRequest
                 * @return CreateReadOnlyDBInstanceOutcome
                 */
                CreateReadOnlyDBInstanceOutcome CreateReadOnlyDBInstance(const Model::CreateReadOnlyDBInstanceRequest &request);
                void CreateReadOnlyDBInstanceAsync(const Model::CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyDBInstanceOutcomeCallable CreateReadOnlyDBInstanceCallable(const Model::CreateReadOnlyDBInstanceRequest& request);

                /**
                 *本接口（CreateReadOnlyGroup）用于创建只读组
                 * @param req CreateReadOnlyGroupRequest
                 * @return CreateReadOnlyGroupOutcome
                 */
                CreateReadOnlyGroupOutcome CreateReadOnlyGroup(const Model::CreateReadOnlyGroupRequest &request);
                void CreateReadOnlyGroupAsync(const Model::CreateReadOnlyGroupRequest& request, const CreateReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyGroupOutcomeCallable CreateReadOnlyGroupCallable(const Model::CreateReadOnlyGroupRequest& request);

                /**
                 *可对RO组进行网络的添加操作。
                 * @param req CreateReadOnlyGroupNetworkAccessRequest
                 * @return CreateReadOnlyGroupNetworkAccessOutcome
                 */
                CreateReadOnlyGroupNetworkAccessOutcome CreateReadOnlyGroupNetworkAccess(const Model::CreateReadOnlyGroupNetworkAccessRequest &request);
                void CreateReadOnlyGroupNetworkAccessAsync(const Model::CreateReadOnlyGroupNetworkAccessRequest& request, const CreateReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyGroupNetworkAccessOutcomeCallable CreateReadOnlyGroupNetworkAccessCallable(const Model::CreateReadOnlyGroupNetworkAccessRequest& request);

                /**
                 *本接口 (CreateServerlessDBInstance) 用于创建一个ServerlessDB实例，创建成功返回实例ID。
                 * @param req CreateServerlessDBInstanceRequest
                 * @return CreateServerlessDBInstanceOutcome
                 */
                CreateServerlessDBInstanceOutcome CreateServerlessDBInstance(const Model::CreateServerlessDBInstanceRequest &request);
                void CreateServerlessDBInstanceAsync(const Model::CreateServerlessDBInstanceRequest& request, const CreateServerlessDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerlessDBInstanceOutcomeCallable CreateServerlessDBInstanceCallable(const Model::CreateServerlessDBInstanceRequest& request);

                /**
                 *可对实例进行网络的删除操作。
                 * @param req DeleteDBInstanceNetworkAccessRequest
                 * @return DeleteDBInstanceNetworkAccessOutcome
                 */
                DeleteDBInstanceNetworkAccessOutcome DeleteDBInstanceNetworkAccess(const Model::DeleteDBInstanceNetworkAccessRequest &request);
                void DeleteDBInstanceNetworkAccessAsync(const Model::DeleteDBInstanceNetworkAccessRequest& request, const DeleteDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBInstanceNetworkAccessOutcomeCallable DeleteDBInstanceNetworkAccessCallable(const Model::DeleteDBInstanceNetworkAccessRequest& request);

                /**
                 *本接口(DeleteReadOnlyGroup)用于删除指定的只读组
                 * @param req DeleteReadOnlyGroupRequest
                 * @return DeleteReadOnlyGroupOutcome
                 */
                DeleteReadOnlyGroupOutcome DeleteReadOnlyGroup(const Model::DeleteReadOnlyGroupRequest &request);
                void DeleteReadOnlyGroupAsync(const Model::DeleteReadOnlyGroupRequest& request, const DeleteReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReadOnlyGroupOutcomeCallable DeleteReadOnlyGroupCallable(const Model::DeleteReadOnlyGroupRequest& request);

                /**
                 *可对RO组进行网络的删除操作。
                 * @param req DeleteReadOnlyGroupNetworkAccessRequest
                 * @return DeleteReadOnlyGroupNetworkAccessOutcome
                 */
                DeleteReadOnlyGroupNetworkAccessOutcome DeleteReadOnlyGroupNetworkAccess(const Model::DeleteReadOnlyGroupNetworkAccessRequest &request);
                void DeleteReadOnlyGroupNetworkAccessAsync(const Model::DeleteReadOnlyGroupNetworkAccessRequest& request, const DeleteReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReadOnlyGroupNetworkAccessOutcomeCallable DeleteReadOnlyGroupNetworkAccessCallable(const Model::DeleteReadOnlyGroupNetworkAccessRequest& request);

                /**
                 *本接口 (DeleteServerlessDBInstance) 用于删除一个ServerlessDB实例。
                 * @param req DeleteServerlessDBInstanceRequest
                 * @return DeleteServerlessDBInstanceOutcome
                 */
                DeleteServerlessDBInstanceOutcome DeleteServerlessDBInstance(const Model::DeleteServerlessDBInstanceRequest &request);
                void DeleteServerlessDBInstanceAsync(const Model::DeleteServerlessDBInstanceRequest& request, const DeleteServerlessDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServerlessDBInstanceOutcomeCallable DeleteServerlessDBInstanceCallable(const Model::DeleteServerlessDBInstanceRequest& request);

                /**
                 *本接口（DescribeAccounts）用于获取实例用户列表。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *本接口（DescribeAvailableRecoveryTime）用于查询实例可恢复的时间范围。
                 * @param req DescribeAvailableRecoveryTimeRequest
                 * @return DescribeAvailableRecoveryTimeOutcome
                 */
                DescribeAvailableRecoveryTimeOutcome DescribeAvailableRecoveryTime(const Model::DescribeAvailableRecoveryTimeRequest &request);
                void DescribeAvailableRecoveryTimeAsync(const Model::DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableRecoveryTimeOutcomeCallable DescribeAvailableRecoveryTimeCallable(const Model::DescribeAvailableRecoveryTimeRequest& request);

                /**
                 *本接口 (DescribeBackupPlans) 用于实例所有的备份计划查询
                 * @param req DescribeBackupPlansRequest
                 * @return DescribeBackupPlansOutcome
                 */
                DescribeBackupPlansOutcome DescribeBackupPlans(const Model::DescribeBackupPlansRequest &request);
                void DescribeBackupPlansAsync(const Model::DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupPlansOutcomeCallable DescribeBackupPlansCallable(const Model::DescribeBackupPlansRequest& request);

                /**
                 *本接口（DescribeCloneDBInstanceSpec）用于查询克隆实例可选择的最小规格，包括SpecCode和磁盘。
                 * @param req DescribeCloneDBInstanceSpecRequest
                 * @return DescribeCloneDBInstanceSpecOutcome
                 */
                DescribeCloneDBInstanceSpecOutcome DescribeCloneDBInstanceSpec(const Model::DescribeCloneDBInstanceSpecRequest &request);
                void DescribeCloneDBInstanceSpecAsync(const Model::DescribeCloneDBInstanceSpecRequest& request, const DescribeCloneDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloneDBInstanceSpecOutcomeCallable DescribeCloneDBInstanceSpecCallable(const Model::DescribeCloneDBInstanceSpecRequest& request);

                /**
                 *本接口（DescribeDBBackups）用于查询实例备份列表。
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *本接口（DescribeDBErrlogs）用于获取错误日志。
                 * @param req DescribeDBErrlogsRequest
                 * @return DescribeDBErrlogsOutcome
                 */
                DescribeDBErrlogsOutcome DescribeDBErrlogs(const Model::DescribeDBErrlogsRequest &request);
                void DescribeDBErrlogsAsync(const Model::DescribeDBErrlogsRequest& request, const DescribeDBErrlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBErrlogsOutcomeCallable DescribeDBErrlogsCallable(const Model::DescribeDBErrlogsRequest& request);

                /**
                 *本接口 (DescribeDBInstanceAttribute) 用于查询某个实例的详情信息。
                 * @param req DescribeDBInstanceAttributeRequest
                 * @return DescribeDBInstanceAttributeOutcome
                 */
                DescribeDBInstanceAttributeOutcome DescribeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request);
                void DescribeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceAttributeOutcomeCallable DescribeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request);

                /**
                 *获取实例可修改参数列表
                 * @param req DescribeDBInstanceParametersRequest
                 * @return DescribeDBInstanceParametersOutcome
                 */
                DescribeDBInstanceParametersOutcome DescribeDBInstanceParameters(const Model::DescribeDBInstanceParametersRequest &request);
                void DescribeDBInstanceParametersAsync(const Model::DescribeDBInstanceParametersRequest& request, const DescribeDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceParametersOutcomeCallable DescribeDBInstanceParametersCallable(const Model::DescribeDBInstanceParametersRequest& request);

                /**
                 *本接口 (DescribeDBInstances) 用于查询一个或多个实例的详细信息。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBSlowlogs）用于获取慢查询日志。已于2021.09.01日正式废弃，后续此接口将不再返回任何数据，新接口为DescribeSlowQueryList，详细请查看：https://cloud.tencent.com/document/product/409/60540
                 * @param req DescribeDBSlowlogsRequest
                 * @return DescribeDBSlowlogsOutcome
                 */
                DescribeDBSlowlogsOutcome DescribeDBSlowlogs(const Model::DescribeDBSlowlogsRequest &request);
                void DescribeDBSlowlogsAsync(const Model::DescribeDBSlowlogsRequest& request, const DescribeDBSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowlogsOutcomeCallable DescribeDBSlowlogsCallable(const Model::DescribeDBSlowlogsRequest& request);

                /**
                 *本接口（DescribeDBXlogs）用于获取实例Xlog列表。
                 * @param req DescribeDBXlogsRequest
                 * @return DescribeDBXlogsOutcome
                 */
                DescribeDBXlogsOutcome DescribeDBXlogs(const Model::DescribeDBXlogsRequest &request);
                void DescribeDBXlogsAsync(const Model::DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBXlogsOutcomeCallable DescribeDBXlogsCallable(const Model::DescribeDBXlogsRequest& request);

                /**
                 *接口（DescribeDatabases）用来拉取数据库列表
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *本接口（DescribeOrders）用于获取订单信息。
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *获取参数修改事件详情
                 * @param req DescribeParamsEventRequest
                 * @return DescribeParamsEventOutcome
                 */
                DescribeParamsEventOutcome DescribeParamsEvent(const Model::DescribeParamsEventRequest &request);
                void DescribeParamsEventAsync(const Model::DescribeParamsEventRequest& request, const DescribeParamsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamsEventOutcomeCallable DescribeParamsEventCallable(const Model::DescribeParamsEventRequest& request);

                /**
                 *本接口 (DescribeProductConfig) 用于查询售卖规格配置。
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *本接口(DescribeReadOnlyGroups)用于查询用户输入指定实例的只读组
                 * @param req DescribeReadOnlyGroupsRequest
                 * @return DescribeReadOnlyGroupsOutcome
                 */
                DescribeReadOnlyGroupsOutcome DescribeReadOnlyGroups(const Model::DescribeReadOnlyGroupsRequest &request);
                void DescribeReadOnlyGroupsAsync(const Model::DescribeReadOnlyGroupsRequest& request, const DescribeReadOnlyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupsOutcomeCallable DescribeReadOnlyGroupsCallable(const Model::DescribeReadOnlyGroupsRequest& request);

                /**
                 *本接口 (DescribeRegions) 用于查询售卖地域信息。
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *用于查询一个或多个serverlessDB实例的详细信息
                 * @param req DescribeServerlessDBInstancesRequest
                 * @return DescribeServerlessDBInstancesOutcome
                 */
                DescribeServerlessDBInstancesOutcome DescribeServerlessDBInstances(const Model::DescribeServerlessDBInstancesRequest &request);
                void DescribeServerlessDBInstancesAsync(const Model::DescribeServerlessDBInstancesRequest& request, const DescribeServerlessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessDBInstancesOutcomeCallable DescribeServerlessDBInstancesCallable(const Model::DescribeServerlessDBInstancesRequest& request);

                /**
                 *此接口（DescribeSlowQueryAnalysis）用于统计指定时间范围内的所有慢查询，根据SQL语句抽象参数后，进行聚合分析，并返回同类SQL列表。
                 * @param req DescribeSlowQueryAnalysisRequest
                 * @return DescribeSlowQueryAnalysisOutcome
                 */
                DescribeSlowQueryAnalysisOutcome DescribeSlowQueryAnalysis(const Model::DescribeSlowQueryAnalysisRequest &request);
                void DescribeSlowQueryAnalysisAsync(const Model::DescribeSlowQueryAnalysisRequest& request, const DescribeSlowQueryAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryAnalysisOutcomeCallable DescribeSlowQueryAnalysisCallable(const Model::DescribeSlowQueryAnalysisRequest& request);

                /**
                 *此接口（DescribeSlowQueryList）用于查询指定时间范围内的所有慢查询。
                 * @param req DescribeSlowQueryListRequest
                 * @return DescribeSlowQueryListOutcome
                 */
                DescribeSlowQueryListOutcome DescribeSlowQueryList(const Model::DescribeSlowQueryListRequest &request);
                void DescribeSlowQueryListAsync(const Model::DescribeSlowQueryListRequest& request, const DescribeSlowQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryListOutcomeCallable DescribeSlowQueryListCallable(const Model::DescribeSlowQueryListRequest& request);

                /**
                 *本接口 (DescribeZones) 用于查询支持的可用区信息。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *本接口 (DestroyDBInstance) 用于彻底下线指定DBInstanceId对应的实例，下线后实例数据将彻底删除，无法找回，只能下线隔离中的实例。
                 * @param req DestroyDBInstanceRequest
                 * @return DestroyDBInstanceOutcome
                 */
                DestroyDBInstanceOutcome DestroyDBInstance(const Model::DestroyDBInstanceRequest &request);
                void DestroyDBInstanceAsync(const Model::DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDBInstanceOutcomeCallable DestroyDBInstanceCallable(const Model::DestroyDBInstanceRequest& request);

                /**
                 *本接口（DisIsolateDBInstances）用于解隔离实例
                 * @param req DisIsolateDBInstancesRequest
                 * @return DisIsolateDBInstancesOutcome
                 */
                DisIsolateDBInstancesOutcome DisIsolateDBInstances(const Model::DisIsolateDBInstancesRequest &request);
                void DisIsolateDBInstancesAsync(const Model::DisIsolateDBInstancesRequest& request, const DisIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisIsolateDBInstancesOutcomeCallable DisIsolateDBInstancesCallable(const Model::DisIsolateDBInstancesRequest& request);

                /**
                 *本接口 (InitDBInstances) 用于初始化云数据库PostgreSQL实例。
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *本接口 (InquiryPriceCreateDBInstances) 用于查询购买一个或多个实例的价格信息。
                 * @param req InquiryPriceCreateDBInstancesRequest
                 * @return InquiryPriceCreateDBInstancesOutcome
                 */
                InquiryPriceCreateDBInstancesOutcome InquiryPriceCreateDBInstances(const Model::InquiryPriceCreateDBInstancesRequest &request);
                void InquiryPriceCreateDBInstancesAsync(const Model::InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDBInstancesOutcomeCallable InquiryPriceCreateDBInstancesCallable(const Model::InquiryPriceCreateDBInstancesRequest& request);

                /**
                 *本接口（InquiryPriceRenewDBInstance）用于查询续费实例的价格。
                 * @param req InquiryPriceRenewDBInstanceRequest
                 * @return InquiryPriceRenewDBInstanceOutcome
                 */
                InquiryPriceRenewDBInstanceOutcome InquiryPriceRenewDBInstance(const Model::InquiryPriceRenewDBInstanceRequest &request);
                void InquiryPriceRenewDBInstanceAsync(const Model::InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewDBInstanceOutcomeCallable InquiryPriceRenewDBInstanceCallable(const Model::InquiryPriceRenewDBInstanceRequest& request);

                /**
                 *本接口（InquiryPriceUpgradeDBInstance）用于查询升级实例的价格。
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *本接口（IsolateDBInstances）用于隔离实例
                 * @param req IsolateDBInstancesRequest
                 * @return IsolateDBInstancesOutcome
                 */
                IsolateDBInstancesOutcome IsolateDBInstances(const Model::IsolateDBInstancesRequest &request);
                void IsolateDBInstancesAsync(const Model::IsolateDBInstancesRequest& request, const IsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstancesOutcomeCallable IsolateDBInstancesCallable(const Model::IsolateDBInstancesRequest& request);

                /**
                 *本接口（ModifyAccountRemark）用于修改帐号备注。
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *本接口 (ModifyBackupPlan) 用于实例备份计划的修改，默认是在每天的凌晨开始全量备份，备份保留时长是7天。可以根据此接口指定时间进行实例的备份。
                 * @param req ModifyBackupPlanRequest
                 * @return ModifyBackupPlanOutcome
                 */
                ModifyBackupPlanOutcome ModifyBackupPlan(const Model::ModifyBackupPlanRequest &request);
                void ModifyBackupPlanAsync(const Model::ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupPlanOutcomeCallable ModifyBackupPlanCallable(const Model::ModifyBackupPlanRequest& request);

                /**
                 *本接口（ModifyDBInstanceDeployment）用于修改节点可用区部署方式，仅支持主实例。
                 * @param req ModifyDBInstanceDeploymentRequest
                 * @return ModifyDBInstanceDeploymentOutcome
                 */
                ModifyDBInstanceDeploymentOutcome ModifyDBInstanceDeployment(const Model::ModifyDBInstanceDeploymentRequest &request);
                void ModifyDBInstanceDeploymentAsync(const Model::ModifyDBInstanceDeploymentRequest& request, const ModifyDBInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceDeploymentOutcomeCallable ModifyDBInstanceDeploymentCallable(const Model::ModifyDBInstanceDeploymentRequest& request);

                /**
                 *本接口（ModifyDBInstanceName）用于修改postgresql实例名字。
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *批量修改参数
                 * @param req ModifyDBInstanceParametersRequest
                 * @return ModifyDBInstanceParametersOutcome
                 */
                ModifyDBInstanceParametersOutcome ModifyDBInstanceParameters(const Model::ModifyDBInstanceParametersRequest &request);
                void ModifyDBInstanceParametersAsync(const Model::ModifyDBInstanceParametersRequest& request, const ModifyDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceParametersOutcomeCallable ModifyDBInstanceParametersCallable(const Model::ModifyDBInstanceParametersRequest& request);

                /**
                 *本接口（ModifyDBInstanceReadOnlyGroup）用于修改实例所属的只读组
                 * @param req ModifyDBInstanceReadOnlyGroupRequest
                 * @return ModifyDBInstanceReadOnlyGroupOutcome
                 */
                ModifyDBInstanceReadOnlyGroupOutcome ModifyDBInstanceReadOnlyGroup(const Model::ModifyDBInstanceReadOnlyGroupRequest &request);
                void ModifyDBInstanceReadOnlyGroupAsync(const Model::ModifyDBInstanceReadOnlyGroupRequest& request, const ModifyDBInstanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceReadOnlyGroupOutcomeCallable ModifyDBInstanceReadOnlyGroupCallable(const Model::ModifyDBInstanceReadOnlyGroupRequest& request);

                /**
                 *本接口（ModifyDBInstanceSpec）用于调整实例规格，包括内存、磁盘。
                 * @param req ModifyDBInstanceSpecRequest
                 * @return ModifyDBInstanceSpecOutcome
                 */
                ModifyDBInstanceSpecOutcome ModifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request);
                void ModifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSpecOutcomeCallable ModifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request);

                /**
                 *本接口（ModifyDBInstancesProject）用于将实例转至其他项目。
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *本接口(ModifyReadOnlyGroupConfig)用于更新只读组配置信息
                 * @param req ModifyReadOnlyGroupConfigRequest
                 * @return ModifyReadOnlyGroupConfigOutcome
                 */
                ModifyReadOnlyGroupConfigOutcome ModifyReadOnlyGroupConfig(const Model::ModifyReadOnlyGroupConfigRequest &request);
                void ModifyReadOnlyGroupConfigAsync(const Model::ModifyReadOnlyGroupConfigRequest& request, const ModifyReadOnlyGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReadOnlyGroupConfigOutcomeCallable ModifyReadOnlyGroupConfigCallable(const Model::ModifyReadOnlyGroupConfigRequest& request);

                /**
                 *当升级完成后，对处于等待切换状态下的实例，强制实例立即切换。
                 * @param req ModifySwitchTimePeriodRequest
                 * @return ModifySwitchTimePeriodOutcome
                 */
                ModifySwitchTimePeriodOutcome ModifySwitchTimePeriod(const Model::ModifySwitchTimePeriodRequest &request);
                void ModifySwitchTimePeriodAsync(const Model::ModifySwitchTimePeriodRequest& request, const ModifySwitchTimePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySwitchTimePeriodOutcomeCallable ModifySwitchTimePeriodCallable(const Model::ModifySwitchTimePeriodRequest& request);

                /**
                 *本接口（OpenDBExtranetAccess）用于开通外网。
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *开通serverlessDB实例外网
                 * @param req OpenServerlessDBExtranetAccessRequest
                 * @return OpenServerlessDBExtranetAccessOutcome
                 */
                OpenServerlessDBExtranetAccessOutcome OpenServerlessDBExtranetAccess(const Model::OpenServerlessDBExtranetAccessRequest &request);
                void OpenServerlessDBExtranetAccessAsync(const Model::OpenServerlessDBExtranetAccessRequest& request, const OpenServerlessDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenServerlessDBExtranetAccessOutcomeCallable OpenServerlessDBExtranetAccessCallable(const Model::OpenServerlessDBExtranetAccessRequest& request);

                /**
                 *本接口(RebalanceReadOnlyGroup)用于重新均衡 RO 组内实例的负载。注意，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库，谨慎操作。
                 * @param req RebalanceReadOnlyGroupRequest
                 * @return RebalanceReadOnlyGroupOutcome
                 */
                RebalanceReadOnlyGroupOutcome RebalanceReadOnlyGroup(const Model::RebalanceReadOnlyGroupRequest &request);
                void RebalanceReadOnlyGroupAsync(const Model::RebalanceReadOnlyGroupRequest& request, const RebalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebalanceReadOnlyGroupOutcomeCallable RebalanceReadOnlyGroupCallable(const Model::RebalanceReadOnlyGroupRequest& request);

                /**
                 *本接口（RemoveDBInstanceFromReadOnlyGroup）用户将只读实例从只读组中移除
                 * @param req RemoveDBInstanceFromReadOnlyGroupRequest
                 * @return RemoveDBInstanceFromReadOnlyGroupOutcome
                 */
                RemoveDBInstanceFromReadOnlyGroupOutcome RemoveDBInstanceFromReadOnlyGroup(const Model::RemoveDBInstanceFromReadOnlyGroupRequest &request);
                void RemoveDBInstanceFromReadOnlyGroupAsync(const Model::RemoveDBInstanceFromReadOnlyGroupRequest& request, const RemoveDBInstanceFromReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveDBInstanceFromReadOnlyGroupOutcomeCallable RemoveDBInstanceFromReadOnlyGroupCallable(const Model::RemoveDBInstanceFromReadOnlyGroupRequest& request);

                /**
                 *本接口（RenewInstance）用于续费实例。
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

                /**
                 *本接口（ResetAccountPassword）用于重置实例的账户密码。
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *本接口（RestartDBInstance）用于重启实例。
                 * @param req RestartDBInstanceRequest
                 * @return RestartDBInstanceOutcome
                 */
                RestartDBInstanceOutcome RestartDBInstance(const Model::RestartDBInstanceRequest &request);
                void RestartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstanceOutcomeCallable RestartDBInstanceCallable(const Model::RestartDBInstanceRequest& request);

                /**
                 *本接口（SetAutoRenewFlag）用于设置自动续费。
                 * @param req SetAutoRenewFlagRequest
                 * @return SetAutoRenewFlagOutcome
                 */
                SetAutoRenewFlagOutcome SetAutoRenewFlag(const Model::SetAutoRenewFlagRequest &request);
                void SetAutoRenewFlagAsync(const Model::SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoRenewFlagOutcomeCallable SetAutoRenewFlagCallable(const Model::SetAutoRenewFlagRequest& request);

                /**
                 *本接口（UpgradeDBInstance）用于升级实例配置。
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
