/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/postgres/v20170312/model/CloseAccountCAMRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseAccountCAMResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloseAuditServiceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseAuditServiceResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateAccountRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateAccountResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateAuditLogFileRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateAuditLogFileResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateBackupPlanRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateBackupPlanResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateBaseBackupRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateBaseBackupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDatabaseRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDatabaseResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateParameterTemplateRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateParameterTemplateResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteAccountRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteAccountResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteAuditLogFileRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteAuditLogFileResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteBackupPlanRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteBackupPlanResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteBaseBackupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteBaseBackupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteDBInstanceNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteLogBackupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteLogBackupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteParameterTemplateRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteParameterTemplateResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAuditInstanceListRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAuditInstanceListResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAuditLogFilesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAuditLogFilesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAuditLogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAuditLogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAvailableRecoveryTimeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAvailableRecoveryTimeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadRestrictionRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadRestrictionResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadURLRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadURLResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupOverviewRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupPlansResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupSummariesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupSummariesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBaseBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBaseBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeClassesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeClassesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeCloneDBInstanceSpecRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeCloneDBInstanceSpecResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceHAConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceHAConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSSLConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSSLConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBVersionsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBVersionsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDedicatedClustersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDedicatedClustersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDefaultParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDefaultParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeEncryptionKeysRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeEncryptionKeysResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeLogBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeLogBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeMaintainTimeWindowRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeMaintainTimeWindowResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplateAttributesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplateAttributesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplatesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplatesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParamsEventRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParamsEventResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeReadOnlyGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeReadOnlyGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryAnalysisRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryAnalysisResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryListRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryListResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeTasksRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeTasksResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DestroyDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/DestroyDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DisIsolateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DisIsolateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/IsolateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/IsolateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/LockAccountRequest.h>
#include <tencentcloud/postgres/v20170312/model/LockAccountResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAuditServiceResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupDownloadRestrictionResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupPlanRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupPlanResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBaseBackupExpireTimeRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBaseBackupExpireTimeResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceChargeTypeRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceChargeTypeResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeletionProtectionRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeletionProtectionResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceHAConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceHAConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSSLConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSSLConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSpecResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDatabaseOwnerRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDatabaseOwnerResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyMaintainTimeWindowRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyMaintainTimeWindowResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyParameterTemplateRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyParameterTemplateResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyDBInstanceWeightRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyDBInstanceWeightResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifySwitchTimePeriodRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifySwitchTimePeriodResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenAccountCAMRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenAccountCAMResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenAuditServiceRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenAuditServiceResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/RebalanceReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/RebalanceReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/RefreshAccountPasswordRequest.h>
#include <tencentcloud/postgres/v20170312/model/RefreshAccountPasswordResponse.h>
#include <tencentcloud/postgres/v20170312/model/RemoveDBInstanceFromReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/RemoveDBInstanceFromReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/RestoreDBInstanceObjectsRequest.h>
#include <tencentcloud/postgres/v20170312/model/RestoreDBInstanceObjectsResponse.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagRequest.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagResponse.h>
#include <tencentcloud/postgres/v20170312/model/SwitchDBInstancePrimaryRequest.h>
#include <tencentcloud/postgres/v20170312/model/SwitchDBInstancePrimaryResponse.h>
#include <tencentcloud/postgres/v20170312/model/UnlockAccountRequest.h>
#include <tencentcloud/postgres/v20170312/model/UnlockAccountResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceKernelVersionRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceKernelVersionResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceMajorVersionRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceMajorVersionResponse.h>


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
                typedef Outcome<Core::Error, Model::CloseAccountCAMResponse> CloseAccountCAMOutcome;
                typedef std::future<CloseAccountCAMOutcome> CloseAccountCAMOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseAccountCAMRequest&, CloseAccountCAMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAccountCAMAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseAuditServiceResponse> CloseAuditServiceOutcome;
                typedef std::future<CloseAuditServiceOutcome> CloseAuditServiceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseAuditServiceRequest&, CloseAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditLogFileResponse> CreateAuditLogFileOutcome;
                typedef std::future<CreateAuditLogFileOutcome> CreateAuditLogFileOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateAuditLogFileRequest&, CreateAuditLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupPlanResponse> CreateBackupPlanOutcome;
                typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateBackupPlanRequest&, CreateBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaseBackupResponse> CreateBaseBackupOutcome;
                typedef std::future<CreateBaseBackupOutcome> CreateBaseBackupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateBaseBackupRequest&, CreateBaseBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaseBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceNetworkAccessResponse> CreateDBInstanceNetworkAccessOutcome;
                typedef std::future<CreateDBInstanceNetworkAccessOutcome> CreateDBInstanceNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDBInstanceNetworkAccessRequest&, CreateDBInstanceNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateParameterTemplateResponse> CreateParameterTemplateOutcome;
                typedef std::future<CreateParameterTemplateOutcome> CreateParameterTemplateOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateParameterTemplateRequest&, CreateParameterTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyDBInstanceResponse> CreateReadOnlyDBInstanceOutcome;
                typedef std::future<CreateReadOnlyDBInstanceOutcome> CreateReadOnlyDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyDBInstanceRequest&, CreateReadOnlyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyGroupResponse> CreateReadOnlyGroupOutcome;
                typedef std::future<CreateReadOnlyGroupOutcome> CreateReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyGroupRequest&, CreateReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyGroupNetworkAccessResponse> CreateReadOnlyGroupNetworkAccessOutcome;
                typedef std::future<CreateReadOnlyGroupNetworkAccessOutcome> CreateReadOnlyGroupNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyGroupNetworkAccessRequest&, CreateReadOnlyGroupNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyGroupNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditLogFileResponse> DeleteAuditLogFileOutcome;
                typedef std::future<DeleteAuditLogFileOutcome> DeleteAuditLogFileOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteAuditLogFileRequest&, DeleteAuditLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupPlanResponse> DeleteBackupPlanOutcome;
                typedef std::future<DeleteBackupPlanOutcome> DeleteBackupPlanOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteBackupPlanRequest&, DeleteBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaseBackupResponse> DeleteBaseBackupOutcome;
                typedef std::future<DeleteBaseBackupOutcome> DeleteBaseBackupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteBaseBackupRequest&, DeleteBaseBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaseBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBInstanceNetworkAccessResponse> DeleteDBInstanceNetworkAccessOutcome;
                typedef std::future<DeleteDBInstanceNetworkAccessOutcome> DeleteDBInstanceNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteDBInstanceNetworkAccessRequest&, DeleteDBInstanceNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogBackupResponse> DeleteLogBackupOutcome;
                typedef std::future<DeleteLogBackupOutcome> DeleteLogBackupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteLogBackupRequest&, DeleteLogBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteParameterTemplateResponse> DeleteParameterTemplateOutcome;
                typedef std::future<DeleteParameterTemplateOutcome> DeleteParameterTemplateOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteParameterTemplateRequest&, DeleteParameterTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReadOnlyGroupResponse> DeleteReadOnlyGroupOutcome;
                typedef std::future<DeleteReadOnlyGroupOutcome> DeleteReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteReadOnlyGroupRequest&, DeleteReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReadOnlyGroupNetworkAccessResponse> DeleteReadOnlyGroupNetworkAccessOutcome;
                typedef std::future<DeleteReadOnlyGroupNetworkAccessOutcome> DeleteReadOnlyGroupNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteReadOnlyGroupNetworkAccessRequest&, DeleteReadOnlyGroupNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReadOnlyGroupNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditInstanceListResponse> DescribeAuditInstanceListOutcome;
                typedef std::future<DescribeAuditInstanceListOutcome> DescribeAuditInstanceListOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAuditInstanceListRequest&, DescribeAuditInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogFilesResponse> DescribeAuditLogFilesOutcome;
                typedef std::future<DescribeAuditLogFilesOutcome> DescribeAuditLogFilesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAuditLogFilesRequest&, DescribeAuditLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogsResponse> DescribeAuditLogsOutcome;
                typedef std::future<DescribeAuditLogsOutcome> DescribeAuditLogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAuditLogsRequest&, DescribeAuditLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableRecoveryTimeResponse> DescribeAvailableRecoveryTimeOutcome;
                typedef std::future<DescribeAvailableRecoveryTimeOutcome> DescribeAvailableRecoveryTimeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAvailableRecoveryTimeRequest&, DescribeAvailableRecoveryTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableRecoveryTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadRestrictionResponse> DescribeBackupDownloadRestrictionOutcome;
                typedef std::future<DescribeBackupDownloadRestrictionOutcome> DescribeBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupDownloadRestrictionRequest&, DescribeBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadURLResponse> DescribeBackupDownloadURLOutcome;
                typedef std::future<DescribeBackupDownloadURLOutcome> DescribeBackupDownloadURLOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupDownloadURLRequest&, DescribeBackupDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupOverviewResponse> DescribeBackupOverviewOutcome;
                typedef std::future<DescribeBackupOverviewOutcome> DescribeBackupOverviewOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupOverviewRequest&, DescribeBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlansResponse> DescribeBackupPlansOutcome;
                typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupPlansRequest&, DescribeBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupSummariesResponse> DescribeBackupSummariesOutcome;
                typedef std::future<DescribeBackupSummariesOutcome> DescribeBackupSummariesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupSummariesRequest&, DescribeBackupSummariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSummariesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseBackupsResponse> DescribeBaseBackupsOutcome;
                typedef std::future<DescribeBaseBackupsOutcome> DescribeBaseBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBaseBackupsRequest&, DescribeBaseBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassesResponse> DescribeClassesOutcome;
                typedef std::future<DescribeClassesOutcome> DescribeClassesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeClassesRequest&, DescribeClassesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDBInstanceHAConfigResponse> DescribeDBInstanceHAConfigOutcome;
                typedef std::future<DescribeDBInstanceHAConfigOutcome> DescribeDBInstanceHAConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceHAConfigRequest&, DescribeDBInstanceHAConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceHAConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceParametersResponse> DescribeDBInstanceParametersOutcome;
                typedef std::future<DescribeDBInstanceParametersOutcome> DescribeDBInstanceParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceParametersRequest&, DescribeDBInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceSSLConfigResponse> DescribeDBInstanceSSLConfigOutcome;
                typedef std::future<DescribeDBInstanceSSLConfigOutcome> DescribeDBInstanceSSLConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceSSLConfigRequest&, DescribeDBInstanceSSLConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceSecurityGroupsResponse> DescribeDBInstanceSecurityGroupsOutcome;
                typedef std::future<DescribeDBInstanceSecurityGroupsOutcome> DescribeDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceSecurityGroupsRequest&, DescribeDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBVersionsResponse> DescribeDBVersionsOutcome;
                typedef std::future<DescribeDBVersionsOutcome> DescribeDBVersionsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBVersionsRequest&, DescribeDBVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBXlogsResponse> DescribeDBXlogsOutcome;
                typedef std::future<DescribeDBXlogsOutcome> DescribeDBXlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBXlogsRequest&, DescribeDBXlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBXlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClustersResponse> DescribeDedicatedClustersOutcome;
                typedef std::future<DescribeDedicatedClustersOutcome> DescribeDedicatedClustersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDedicatedClustersRequest&, DescribeDedicatedClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultParametersResponse> DescribeDefaultParametersOutcome;
                typedef std::future<DescribeDefaultParametersOutcome> DescribeDefaultParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDefaultParametersRequest&, DescribeDefaultParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEncryptionKeysResponse> DescribeEncryptionKeysOutcome;
                typedef std::future<DescribeEncryptionKeysOutcome> DescribeEncryptionKeysOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeEncryptionKeysRequest&, DescribeEncryptionKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptionKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogBackupsResponse> DescribeLogBackupsOutcome;
                typedef std::future<DescribeLogBackupsOutcome> DescribeLogBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeLogBackupsRequest&, DescribeLogBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintainTimeWindowResponse> DescribeMaintainTimeWindowOutcome;
                typedef std::future<DescribeMaintainTimeWindowOutcome> DescribeMaintainTimeWindowOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeMaintainTimeWindowRequest&, DescribeMaintainTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintainTimeWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParameterTemplateAttributesResponse> DescribeParameterTemplateAttributesOutcome;
                typedef std::future<DescribeParameterTemplateAttributesOutcome> DescribeParameterTemplateAttributesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeParameterTemplateAttributesRequest&, DescribeParameterTemplateAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplateAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParameterTemplatesResponse> DescribeParameterTemplatesOutcome;
                typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeParameterTemplatesRequest&, DescribeParameterTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeSlowQueryAnalysisResponse> DescribeSlowQueryAnalysisOutcome;
                typedef std::future<DescribeSlowQueryAnalysisOutcome> DescribeSlowQueryAnalysisOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeSlowQueryAnalysisRequest&, DescribeSlowQueryAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryListResponse> DescribeSlowQueryListOutcome;
                typedef std::future<DescribeSlowQueryListOutcome> DescribeSlowQueryListOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeSlowQueryListRequest&, DescribeSlowQueryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBInstanceResponse> DestroyDBInstanceOutcome;
                typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DestroyDBInstanceRequest&, DestroyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisIsolateDBInstancesResponse> DisIsolateDBInstancesOutcome;
                typedef std::future<DisIsolateDBInstancesOutcome> DisIsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DisIsolateDBInstancesRequest&, DisIsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisIsolateDBInstancesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::LockAccountResponse> LockAccountOutcome;
                typedef std::future<LockAccountOutcome> LockAccountOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::LockAccountRequest&, LockAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditServiceResponse> ModifyAuditServiceOutcome;
                typedef std::future<ModifyAuditServiceOutcome> ModifyAuditServiceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyAuditServiceRequest&, ModifyAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupDownloadRestrictionResponse> ModifyBackupDownloadRestrictionOutcome;
                typedef std::future<ModifyBackupDownloadRestrictionOutcome> ModifyBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBackupDownloadRestrictionRequest&, ModifyBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupPlanResponse> ModifyBackupPlanOutcome;
                typedef std::future<ModifyBackupPlanOutcome> ModifyBackupPlanOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBackupPlanRequest&, ModifyBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaseBackupExpireTimeResponse> ModifyBaseBackupExpireTimeOutcome;
                typedef std::future<ModifyBaseBackupExpireTimeOutcome> ModifyBaseBackupExpireTimeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBaseBackupExpireTimeRequest&, ModifyBaseBackupExpireTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaseBackupExpireTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceChargeTypeResponse> ModifyDBInstanceChargeTypeOutcome;
                typedef std::future<ModifyDBInstanceChargeTypeOutcome> ModifyDBInstanceChargeTypeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceChargeTypeRequest&, ModifyDBInstanceChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceDeletionProtectionResponse> ModifyDBInstanceDeletionProtectionOutcome;
                typedef std::future<ModifyDBInstanceDeletionProtectionOutcome> ModifyDBInstanceDeletionProtectionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceDeletionProtectionRequest&, ModifyDBInstanceDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceDeploymentResponse> ModifyDBInstanceDeploymentOutcome;
                typedef std::future<ModifyDBInstanceDeploymentOutcome> ModifyDBInstanceDeploymentOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceDeploymentRequest&, ModifyDBInstanceDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceHAConfigResponse> ModifyDBInstanceHAConfigOutcome;
                typedef std::future<ModifyDBInstanceHAConfigOutcome> ModifyDBInstanceHAConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceHAConfigRequest&, ModifyDBInstanceHAConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceHAConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceParametersResponse> ModifyDBInstanceParametersOutcome;
                typedef std::future<ModifyDBInstanceParametersOutcome> ModifyDBInstanceParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceParametersRequest&, ModifyDBInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceReadOnlyGroupResponse> ModifyDBInstanceReadOnlyGroupOutcome;
                typedef std::future<ModifyDBInstanceReadOnlyGroupOutcome> ModifyDBInstanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceReadOnlyGroupRequest&, ModifyDBInstanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSSLConfigResponse> ModifyDBInstanceSSLConfigOutcome;
                typedef std::future<ModifyDBInstanceSSLConfigOutcome> ModifyDBInstanceSSLConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceSSLConfigRequest&, ModifyDBInstanceSSLConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSpecResponse> ModifyDBInstanceSpecOutcome;
                typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceSpecRequest&, ModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseOwnerResponse> ModifyDatabaseOwnerOutcome;
                typedef std::future<ModifyDatabaseOwnerOutcome> ModifyDatabaseOwnerOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDatabaseOwnerRequest&, ModifyDatabaseOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintainTimeWindowResponse> ModifyMaintainTimeWindowOutcome;
                typedef std::future<ModifyMaintainTimeWindowOutcome> ModifyMaintainTimeWindowOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyMaintainTimeWindowRequest&, ModifyMaintainTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintainTimeWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyParameterTemplateResponse> ModifyParameterTemplateOutcome;
                typedef std::future<ModifyParameterTemplateOutcome> ModifyParameterTemplateOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyParameterTemplateRequest&, ModifyParameterTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReadOnlyDBInstanceWeightResponse> ModifyReadOnlyDBInstanceWeightOutcome;
                typedef std::future<ModifyReadOnlyDBInstanceWeightOutcome> ModifyReadOnlyDBInstanceWeightOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyReadOnlyDBInstanceWeightRequest&, ModifyReadOnlyDBInstanceWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyDBInstanceWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReadOnlyGroupConfigResponse> ModifyReadOnlyGroupConfigOutcome;
                typedef std::future<ModifyReadOnlyGroupConfigOutcome> ModifyReadOnlyGroupConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyReadOnlyGroupConfigRequest&, ModifyReadOnlyGroupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyGroupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySwitchTimePeriodResponse> ModifySwitchTimePeriodOutcome;
                typedef std::future<ModifySwitchTimePeriodOutcome> ModifySwitchTimePeriodOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifySwitchTimePeriodRequest&, ModifySwitchTimePeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySwitchTimePeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAccountCAMResponse> OpenAccountCAMOutcome;
                typedef std::future<OpenAccountCAMOutcome> OpenAccountCAMOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenAccountCAMRequest&, OpenAccountCAMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAccountCAMAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAuditServiceResponse> OpenAuditServiceOutcome;
                typedef std::future<OpenAuditServiceOutcome> OpenAuditServiceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenAuditServiceRequest&, OpenAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RebalanceReadOnlyGroupResponse> RebalanceReadOnlyGroupOutcome;
                typedef std::future<RebalanceReadOnlyGroupOutcome> RebalanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RebalanceReadOnlyGroupRequest&, RebalanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebalanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshAccountPasswordResponse> RefreshAccountPasswordOutcome;
                typedef std::future<RefreshAccountPasswordOutcome> RefreshAccountPasswordOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RefreshAccountPasswordRequest&, RefreshAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshAccountPasswordAsyncHandler;
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
                typedef Outcome<Core::Error, Model::RestoreDBInstanceObjectsResponse> RestoreDBInstanceObjectsOutcome;
                typedef std::future<RestoreDBInstanceObjectsOutcome> RestoreDBInstanceObjectsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RestoreDBInstanceObjectsRequest&, RestoreDBInstanceObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreDBInstanceObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoRenewFlagResponse> SetAutoRenewFlagOutcome;
                typedef std::future<SetAutoRenewFlagOutcome> SetAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::SetAutoRenewFlagRequest&, SetAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstancePrimaryResponse> SwitchDBInstancePrimaryOutcome;
                typedef std::future<SwitchDBInstancePrimaryOutcome> SwitchDBInstancePrimaryOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::SwitchDBInstancePrimaryRequest&, SwitchDBInstancePrimaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstancePrimaryAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockAccountResponse> UnlockAccountOutcome;
                typedef std::future<UnlockAccountOutcome> UnlockAccountOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UnlockAccountRequest&, UnlockAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceKernelVersionResponse> UpgradeDBInstanceKernelVersionOutcome;
                typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, UpgradeDBInstanceKernelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceMajorVersionResponse> UpgradeDBInstanceMajorVersionOutcome;
                typedef std::future<UpgradeDBInstanceMajorVersionOutcome> UpgradeDBInstanceMajorVersionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceMajorVersionRequest&, UpgradeDBInstanceMajorVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceMajorVersionAsyncHandler;



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
                 *本接口用于关闭数据库账户的CAM验证服务。
                 * @param req CloseAccountCAMRequest
                 * @return CloseAccountCAMOutcome
                 */
                CloseAccountCAMOutcome CloseAccountCAM(const Model::CloseAccountCAMRequest &request);
                void CloseAccountCAMAsync(const Model::CloseAccountCAMRequest& request, const CloseAccountCAMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAccountCAMOutcomeCallable CloseAccountCAMCallable(const Model::CloseAccountCAMRequest& request);

                /**
                 *关闭数据库实例的审计功能
                 * @param req CloseAuditServiceRequest
                 * @return CloseAuditServiceOutcome
                 */
                CloseAuditServiceOutcome CloseAuditService(const Model::CloseAuditServiceRequest &request);
                void CloseAuditServiceAsync(const Model::CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAuditServiceOutcomeCallable CloseAuditServiceCallable(const Model::CloseAuditServiceRequest& request);

                /**
                 *本接口（CloseDBExtranetAccess）用于关闭实例公网地址。
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *此接口用于创建数据账号，返回的Oid为账号唯一标识。与数据库系统表pg_roles中记录的oid一致。
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *创建审计日志文件
                 * @param req CreateAuditLogFileRequest
                 * @return CreateAuditLogFileOutcome
                 */
                CreateAuditLogFileOutcome CreateAuditLogFile(const Model::CreateAuditLogFileRequest &request);
                void CreateAuditLogFileAsync(const Model::CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditLogFileOutcomeCallable CreateAuditLogFileCallable(const Model::CreateAuditLogFileRequest& request);

                /**
                 *此接口用于创建备份策略。
                 * @param req CreateBackupPlanRequest
                 * @return CreateBackupPlanOutcome
                 */
                CreateBackupPlanOutcome CreateBackupPlan(const Model::CreateBackupPlanRequest &request);
                void CreateBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupPlanOutcomeCallable CreateBackupPlanCallable(const Model::CreateBackupPlanRequest& request);

                /**
                 *本接口（CreateBaseBackup）用于创建实例的数据备份。
                 * @param req CreateBaseBackupRequest
                 * @return CreateBaseBackupOutcome
                 */
                CreateBaseBackupOutcome CreateBaseBackup(const Model::CreateBaseBackupRequest &request);
                void CreateBaseBackupAsync(const Model::CreateBaseBackupRequest& request, const CreateBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaseBackupOutcomeCallable CreateBaseBackupCallable(const Model::CreateBaseBackupRequest& request);

                /**
                 *本接口（CreateDBInstanceNetworkAccess）用于创建实例网络。单个实例允许创建的网络配置最多为2套，最少为1套。
                 * @param req CreateDBInstanceNetworkAccessRequest
                 * @return CreateDBInstanceNetworkAccessOutcome
                 */
                CreateDBInstanceNetworkAccessOutcome CreateDBInstanceNetworkAccess(const Model::CreateDBInstanceNetworkAccessRequest &request);
                void CreateDBInstanceNetworkAccessAsync(const Model::CreateDBInstanceNetworkAccessRequest& request, const CreateDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceNetworkAccessOutcomeCallable CreateDBInstanceNetworkAccessCallable(const Model::CreateDBInstanceNetworkAccessRequest& request);

                /**
                 *此接口用于创建数据库，需指定数据库名及所有者。
                 * @param req CreateDatabaseRequest
                 * @return CreateDatabaseOutcome
                 */
                CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest &request);
                void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request);

                /**
                 *本接口 (CreateInstances) 用于创建一个或者多个PostgreSQL实例，通过此接口创建的实例无需进行初始化，可直接使用。
<li>实例创建成功后将自动开机启动，实例状态变为“运行中”。</li>
<li>预付费实例的购买会预先扣除本次实例购买所需金额，按小时后付费实例购买会预先冻结本次实例购买一小时内所需金额，在调用本接口前请确保账户余额充足。</li>
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *本接口 (CreateParameterTemplate) 用于创建参数模板。
                 * @param req CreateParameterTemplateRequest
                 * @return CreateParameterTemplateOutcome
                 */
                CreateParameterTemplateOutcome CreateParameterTemplate(const Model::CreateParameterTemplateRequest &request);
                void CreateParameterTemplateAsync(const Model::CreateParameterTemplateRequest& request, const CreateParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParameterTemplateOutcomeCallable CreateParameterTemplateCallable(const Model::CreateParameterTemplateRequest& request);

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
                 *本接口（CreateReadOnlyGroupNetworkAccess）用于创建RO组的网络。创建网络的数量最多为2个。
                 * @param req CreateReadOnlyGroupNetworkAccessRequest
                 * @return CreateReadOnlyGroupNetworkAccessOutcome
                 */
                CreateReadOnlyGroupNetworkAccessOutcome CreateReadOnlyGroupNetworkAccess(const Model::CreateReadOnlyGroupNetworkAccessRequest &request);
                void CreateReadOnlyGroupNetworkAccessAsync(const Model::CreateReadOnlyGroupNetworkAccessRequest& request, const CreateReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyGroupNetworkAccessOutcomeCallable CreateReadOnlyGroupNetworkAccessCallable(const Model::CreateReadOnlyGroupNetworkAccessRequest& request);

                /**
                 *此接口用于删除数据库账号，需要同时输入Oid与UserName，避免误删。注：该接口可重入，如果账号已经不存在，调用此接口进行删除时不会报错。
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *删除审计日志文件
                 * @param req DeleteAuditLogFileRequest
                 * @return DeleteAuditLogFileOutcome
                 */
                DeleteAuditLogFileOutcome DeleteAuditLogFile(const Model::DeleteAuditLogFileRequest &request);
                void DeleteAuditLogFileAsync(const Model::DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditLogFileOutcomeCallable DeleteAuditLogFileCallable(const Model::DeleteAuditLogFileRequest& request);

                /**
                 *删除备份策略
                 * @param req DeleteBackupPlanRequest
                 * @return DeleteBackupPlanOutcome
                 */
                DeleteBackupPlanOutcome DeleteBackupPlan(const Model::DeleteBackupPlanRequest &request);
                void DeleteBackupPlanAsync(const Model::DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupPlanOutcomeCallable DeleteBackupPlanCallable(const Model::DeleteBackupPlanRequest& request);

                /**
                 *本接口（DeleteBaseBackup）用于删除实例指定数据备份。
                 * @param req DeleteBaseBackupRequest
                 * @return DeleteBaseBackupOutcome
                 */
                DeleteBaseBackupOutcome DeleteBaseBackup(const Model::DeleteBaseBackupRequest &request);
                void DeleteBaseBackupAsync(const Model::DeleteBaseBackupRequest& request, const DeleteBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaseBackupOutcomeCallable DeleteBaseBackupCallable(const Model::DeleteBaseBackupRequest& request);

                /**
                 *可对实例进行网络的删除操作（实例内至少保留一个网络）。
                 * @param req DeleteDBInstanceNetworkAccessRequest
                 * @return DeleteDBInstanceNetworkAccessOutcome
                 */
                DeleteDBInstanceNetworkAccessOutcome DeleteDBInstanceNetworkAccess(const Model::DeleteDBInstanceNetworkAccessRequest &request);
                void DeleteDBInstanceNetworkAccessAsync(const Model::DeleteDBInstanceNetworkAccessRequest& request, const DeleteDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBInstanceNetworkAccessOutcomeCallable DeleteDBInstanceNetworkAccessCallable(const Model::DeleteDBInstanceNetworkAccessRequest& request);

                /**
                 *本接口（DeleteLogBackup）用于删除实例指定日志备份。
                 * @param req DeleteLogBackupRequest
                 * @return DeleteLogBackupOutcome
                 */
                DeleteLogBackupOutcome DeleteLogBackup(const Model::DeleteLogBackupRequest &request);
                void DeleteLogBackupAsync(const Model::DeleteLogBackupRequest& request, const DeleteLogBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogBackupOutcomeCallable DeleteLogBackupCallable(const Model::DeleteLogBackupRequest& request);

                /**
                 *本接口（DeleteParameterTemplate）主要用于删除某个参数模板。
                 * @param req DeleteParameterTemplateRequest
                 * @return DeleteParameterTemplateOutcome
                 */
                DeleteParameterTemplateOutcome DeleteParameterTemplate(const Model::DeleteParameterTemplateRequest &request);
                void DeleteParameterTemplateAsync(const Model::DeleteParameterTemplateRequest& request, const DeleteParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParameterTemplateOutcomeCallable DeleteParameterTemplateCallable(const Model::DeleteParameterTemplateRequest& request);

                /**
                 *本接口(DeleteReadOnlyGroup)用于删除指定的只读组
                 * @param req DeleteReadOnlyGroupRequest
                 * @return DeleteReadOnlyGroupOutcome
                 */
                DeleteReadOnlyGroupOutcome DeleteReadOnlyGroup(const Model::DeleteReadOnlyGroupRequest &request);
                void DeleteReadOnlyGroupAsync(const Model::DeleteReadOnlyGroupRequest& request, const DeleteReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReadOnlyGroupOutcomeCallable DeleteReadOnlyGroupCallable(const Model::DeleteReadOnlyGroupRequest& request);

                /**
                 *可对RO组进行网络的删除操作（网络数量至少保留1个）。
                 * @param req DeleteReadOnlyGroupNetworkAccessRequest
                 * @return DeleteReadOnlyGroupNetworkAccessOutcome
                 */
                DeleteReadOnlyGroupNetworkAccessOutcome DeleteReadOnlyGroupNetworkAccess(const Model::DeleteReadOnlyGroupNetworkAccessRequest &request);
                void DeleteReadOnlyGroupNetworkAccessAsync(const Model::DeleteReadOnlyGroupNetworkAccessRequest& request, const DeleteReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReadOnlyGroupNetworkAccessOutcomeCallable DeleteReadOnlyGroupNetworkAccessCallable(const Model::DeleteReadOnlyGroupNetworkAccessRequest& request);

                /**
                 *查询数据库账号对某数据库对象拥有的权限列表。
                 * @param req DescribeAccountPrivilegesRequest
                 * @return DescribeAccountPrivilegesOutcome
                 */
                DescribeAccountPrivilegesOutcome DescribeAccountPrivileges(const Model::DescribeAccountPrivilegesRequest &request);
                void DescribeAccountPrivilegesAsync(const Model::DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegesOutcomeCallable DescribeAccountPrivilegesCallable(const Model::DescribeAccountPrivilegesRequest& request);

                /**
                 *本接口（DescribeAccounts）用于查询实例的数据库账号列表。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *查询审计实例列表
                 * @param req DescribeAuditInstanceListRequest
                 * @return DescribeAuditInstanceListOutcome
                 */
                DescribeAuditInstanceListOutcome DescribeAuditInstanceList(const Model::DescribeAuditInstanceListRequest &request);
                void DescribeAuditInstanceListAsync(const Model::DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditInstanceListOutcomeCallable DescribeAuditInstanceListCallable(const Model::DescribeAuditInstanceListRequest& request);

                /**
                 *查询审计日志文件
                 * @param req DescribeAuditLogFilesRequest
                 * @return DescribeAuditLogFilesOutcome
                 */
                DescribeAuditLogFilesOutcome DescribeAuditLogFiles(const Model::DescribeAuditLogFilesRequest &request);
                void DescribeAuditLogFilesAsync(const Model::DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogFilesOutcomeCallable DescribeAuditLogFilesCallable(const Model::DescribeAuditLogFilesRequest& request);

                /**
                 *查询数据库审计日志
                 * @param req DescribeAuditLogsRequest
                 * @return DescribeAuditLogsOutcome
                 */
                DescribeAuditLogsOutcome DescribeAuditLogs(const Model::DescribeAuditLogsRequest &request);
                void DescribeAuditLogsAsync(const Model::DescribeAuditLogsRequest& request, const DescribeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogsOutcomeCallable DescribeAuditLogsCallable(const Model::DescribeAuditLogsRequest& request);

                /**
                 *本接口（DescribeAvailableRecoveryTime）用于查询实例可恢复的时间范围。
                 * @param req DescribeAvailableRecoveryTimeRequest
                 * @return DescribeAvailableRecoveryTimeOutcome
                 */
                DescribeAvailableRecoveryTimeOutcome DescribeAvailableRecoveryTime(const Model::DescribeAvailableRecoveryTimeRequest &request);
                void DescribeAvailableRecoveryTimeAsync(const Model::DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableRecoveryTimeOutcomeCallable DescribeAvailableRecoveryTimeCallable(const Model::DescribeAvailableRecoveryTimeRequest& request);

                /**
                 *本接口（DescribeBackupDownloadRestriction）用于查询备份文件下载限制。
                 * @param req DescribeBackupDownloadRestrictionRequest
                 * @return DescribeBackupDownloadRestrictionOutcome
                 */
                DescribeBackupDownloadRestrictionOutcome DescribeBackupDownloadRestriction(const Model::DescribeBackupDownloadRestrictionRequest &request);
                void DescribeBackupDownloadRestrictionAsync(const Model::DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadRestrictionOutcomeCallable DescribeBackupDownloadRestrictionCallable(const Model::DescribeBackupDownloadRestrictionRequest& request);

                /**
                 *本接口 (DescribeBackupDownloadURL) 用于查询指定备份集的下载地址，可包括全量备份集、增量日志备份集。
                 * @param req DescribeBackupDownloadURLRequest
                 * @return DescribeBackupDownloadURLOutcome
                 */
                DescribeBackupDownloadURLOutcome DescribeBackupDownloadURL(const Model::DescribeBackupDownloadURLRequest &request);
                void DescribeBackupDownloadURLAsync(const Model::DescribeBackupDownloadURLRequest& request, const DescribeBackupDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadURLOutcomeCallable DescribeBackupDownloadURLCallable(const Model::DescribeBackupDownloadURLRequest& request);

                /**
                 *本接口（DescribeBackupOverview）用于查询用户的备份概览信息。返回用户当前备份个数、备份占用容量、免费容量、收费容量等信息（容量单位为字节）。
                 * @param req DescribeBackupOverviewRequest
                 * @return DescribeBackupOverviewOutcome
                 */
                DescribeBackupOverviewOutcome DescribeBackupOverview(const Model::DescribeBackupOverviewRequest &request);
                void DescribeBackupOverviewAsync(const Model::DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupOverviewOutcomeCallable DescribeBackupOverviewCallable(const Model::DescribeBackupOverviewRequest& request);

                /**
                 *本接口 (DescribeBackupPlans) 用于实例所有的备份计划查询
                 * @param req DescribeBackupPlansRequest
                 * @return DescribeBackupPlansOutcome
                 */
                DescribeBackupPlansOutcome DescribeBackupPlans(const Model::DescribeBackupPlansRequest &request);
                void DescribeBackupPlansAsync(const Model::DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupPlansOutcomeCallable DescribeBackupPlansCallable(const Model::DescribeBackupPlansRequest& request);

                /**
                 *本接口(DescribeBackupSummaries)用于查询实例备份的统计信息，返回以实例为维度的备份个数、占用容量等信息（容量单位为字节）。
                 * @param req DescribeBackupSummariesRequest
                 * @return DescribeBackupSummariesOutcome
                 */
                DescribeBackupSummariesOutcome DescribeBackupSummaries(const Model::DescribeBackupSummariesRequest &request);
                void DescribeBackupSummariesAsync(const Model::DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupSummariesOutcomeCallable DescribeBackupSummariesCallable(const Model::DescribeBackupSummariesRequest& request);

                /**
                 *本接口（DescribeBaseBackups）用于查询数据备份列表。
                 * @param req DescribeBaseBackupsRequest
                 * @return DescribeBaseBackupsOutcome
                 */
                DescribeBaseBackupsOutcome DescribeBaseBackups(const Model::DescribeBaseBackupsRequest &request);
                void DescribeBaseBackupsAsync(const Model::DescribeBaseBackupsRequest& request, const DescribeBaseBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseBackupsOutcomeCallable DescribeBaseBackupsCallable(const Model::DescribeBaseBackupsRequest& request);

                /**
                 *本接口（DescribeClasses）用于查询实例售卖规格。
                 * @param req DescribeClassesRequest
                 * @return DescribeClassesOutcome
                 */
                DescribeClassesOutcome DescribeClasses(const Model::DescribeClassesRequest &request);
                void DescribeClassesAsync(const Model::DescribeClassesRequest& request, const DescribeClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassesOutcomeCallable DescribeClassesCallable(const Model::DescribeClassesRequest& request);

                /**
                 *本接口（DescribeCloneDBInstanceSpec）用于查询克隆实例可选择的最小规格，包括SpecCode和磁盘。
                 * @param req DescribeCloneDBInstanceSpecRequest
                 * @return DescribeCloneDBInstanceSpecOutcome
                 */
                DescribeCloneDBInstanceSpecOutcome DescribeCloneDBInstanceSpec(const Model::DescribeCloneDBInstanceSpecRequest &request);
                void DescribeCloneDBInstanceSpecAsync(const Model::DescribeCloneDBInstanceSpecRequest& request, const DescribeCloneDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloneDBInstanceSpecOutcomeCallable DescribeCloneDBInstanceSpecCallable(const Model::DescribeCloneDBInstanceSpecRequest& request);

                /**
                 *本接口（DescribeDBBackups）用于查询实例备份列表。**本接口属于早期接口，已停止功能迭代，推荐使用接口**[DescribeBaseBackups](https://cloud.tencent.com/document/api/409/89022)**替代**。
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *本接口（DescribeDBErrlogs）用于查询错误日志。
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
                 *本接口（DescribeDBInstanceHAConfig）用于查询实例HA配置信息。其中HA配置信息包括：
<li>允许备节点切换为主节点的条件配置</li>
<li>半同步实例使用同步复制或异步复制的条件配置</li>
                 * @param req DescribeDBInstanceHAConfigRequest
                 * @return DescribeDBInstanceHAConfigOutcome
                 */
                DescribeDBInstanceHAConfigOutcome DescribeDBInstanceHAConfig(const Model::DescribeDBInstanceHAConfigRequest &request);
                void DescribeDBInstanceHAConfigAsync(const Model::DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceHAConfigOutcomeCallable DescribeDBInstanceHAConfigCallable(const Model::DescribeDBInstanceHAConfigRequest& request);

                /**
                 *本接口（DescribeDBInstanceAttribute）用于查询实例的参数信息。
                 * @param req DescribeDBInstanceParametersRequest
                 * @return DescribeDBInstanceParametersOutcome
                 */
                DescribeDBInstanceParametersOutcome DescribeDBInstanceParameters(const Model::DescribeDBInstanceParametersRequest &request);
                void DescribeDBInstanceParametersAsync(const Model::DescribeDBInstanceParametersRequest& request, const DescribeDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceParametersOutcomeCallable DescribeDBInstanceParametersCallable(const Model::DescribeDBInstanceParametersRequest& request);

                /**
                 *本接口用于查询实例SSL状态
                 * @param req DescribeDBInstanceSSLConfigRequest
                 * @return DescribeDBInstanceSSLConfigOutcome
                 */
                DescribeDBInstanceSSLConfigOutcome DescribeDBInstanceSSLConfig(const Model::DescribeDBInstanceSSLConfigRequest &request);
                void DescribeDBInstanceSSLConfigAsync(const Model::DescribeDBInstanceSSLConfigRequest& request, const DescribeDBInstanceSSLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceSSLConfigOutcomeCallable DescribeDBInstanceSSLConfigCallable(const Model::DescribeDBInstanceSSLConfigRequest& request);

                /**
                 *本接口（DescribeDBInstanceSecurityGroups）用于查询实例安全组。
                 * @param req DescribeDBInstanceSecurityGroupsRequest
                 * @return DescribeDBInstanceSecurityGroupsOutcome
                 */
                DescribeDBInstanceSecurityGroupsOutcome DescribeDBInstanceSecurityGroups(const Model::DescribeDBInstanceSecurityGroupsRequest &request);
                void DescribeDBInstanceSecurityGroupsAsync(const Model::DescribeDBInstanceSecurityGroupsRequest& request, const DescribeDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceSecurityGroupsOutcomeCallable DescribeDBInstanceSecurityGroupsCallable(const Model::DescribeDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口 (DescribeDBInstances) 用于查询一个或多个实例的详细信息。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBVersions）用于查询支持的数据库版本。
                 * @param req DescribeDBVersionsRequest
                 * @return DescribeDBVersionsOutcome
                 */
                DescribeDBVersionsOutcome DescribeDBVersions(const Model::DescribeDBVersionsRequest &request);
                void DescribeDBVersionsAsync(const Model::DescribeDBVersionsRequest& request, const DescribeDBVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBVersionsOutcomeCallable DescribeDBVersionsCallable(const Model::DescribeDBVersionsRequest& request);

                /**
                 *本接口（DescribeDBXlogs）用于获取实例Xlog列表。 **本接口属于早期接口，已停止功能迭代，推荐使用接口**[DescribeLogBackups](https://cloud.tencent.com/document/api/409/89021)**替代**。
                 * @param req DescribeDBXlogsRequest
                 * @return DescribeDBXlogsOutcome
                 */
                DescribeDBXlogsOutcome DescribeDBXlogs(const Model::DescribeDBXlogsRequest &request);
                void DescribeDBXlogsAsync(const Model::DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBXlogsOutcomeCallable DescribeDBXlogsCallable(const Model::DescribeDBXlogsRequest& request);

                /**
                 *本接口用于查询数据库对象列表。例如查询test数据库下的模式列表。
                 * @param req DescribeDatabaseObjectsRequest
                 * @return DescribeDatabaseObjectsOutcome
                 */
                DescribeDatabaseObjectsOutcome DescribeDatabaseObjects(const Model::DescribeDatabaseObjectsRequest &request);
                void DescribeDatabaseObjectsAsync(const Model::DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseObjectsOutcomeCallable DescribeDatabaseObjectsCallable(const Model::DescribeDatabaseObjectsRequest& request);

                /**
                 *接口（DescribeDatabases）用来查询实例的数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *查询专属集群
                 * @param req DescribeDedicatedClustersRequest
                 * @return DescribeDedicatedClustersOutcome
                 */
                DescribeDedicatedClustersOutcome DescribeDedicatedClusters(const Model::DescribeDedicatedClustersRequest &request);
                void DescribeDedicatedClustersAsync(const Model::DescribeDedicatedClustersRequest& request, const DescribeDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClustersOutcomeCallable DescribeDedicatedClustersCallable(const Model::DescribeDedicatedClustersRequest& request);

                /**
                 *本接口（DescribeDefaultParameters）主要用于查询某个数据库版本和引擎支持的所有参数。
                 * @param req DescribeDefaultParametersRequest
                 * @return DescribeDefaultParametersOutcome
                 */
                DescribeDefaultParametersOutcome DescribeDefaultParameters(const Model::DescribeDefaultParametersRequest &request);
                void DescribeDefaultParametersAsync(const Model::DescribeDefaultParametersRequest& request, const DescribeDefaultParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultParametersOutcomeCallable DescribeDefaultParametersCallable(const Model::DescribeDefaultParametersRequest& request);

                /**
                 *本接口 （DescribeEncryptionKeys） 用于查询实例的密钥信息列表。
                 * @param req DescribeEncryptionKeysRequest
                 * @return DescribeEncryptionKeysOutcome
                 */
                DescribeEncryptionKeysOutcome DescribeEncryptionKeys(const Model::DescribeEncryptionKeysRequest &request);
                void DescribeEncryptionKeysAsync(const Model::DescribeEncryptionKeysRequest& request, const DescribeEncryptionKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEncryptionKeysOutcomeCallable DescribeEncryptionKeysCallable(const Model::DescribeEncryptionKeysRequest& request);

                /**
                 *本接口（DescribeLogBackups）用于查询日志备份列表。
                 * @param req DescribeLogBackupsRequest
                 * @return DescribeLogBackupsOutcome
                 */
                DescribeLogBackupsOutcome DescribeLogBackups(const Model::DescribeLogBackupsRequest &request);
                void DescribeLogBackupsAsync(const Model::DescribeLogBackupsRequest& request, const DescribeLogBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogBackupsOutcomeCallable DescribeLogBackupsCallable(const Model::DescribeLogBackupsRequest& request);

                /**
                 *本接口 (DescribeMaintainTimeWindow) 用于查询实例的维护时间窗口
                 * @param req DescribeMaintainTimeWindowRequest
                 * @return DescribeMaintainTimeWindowOutcome
                 */
                DescribeMaintainTimeWindowOutcome DescribeMaintainTimeWindow(const Model::DescribeMaintainTimeWindowRequest &request);
                void DescribeMaintainTimeWindowAsync(const Model::DescribeMaintainTimeWindowRequest& request, const DescribeMaintainTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintainTimeWindowOutcomeCallable DescribeMaintainTimeWindowCallable(const Model::DescribeMaintainTimeWindowRequest& request);

                /**
                 *本接口（DescribeOrders）用于查询订单信息。
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *本接口（DescribeParameterTemplateAttributes）用于查询某个参数模板的具体内容，包括基本信息和参数信息。
                 * @param req DescribeParameterTemplateAttributesRequest
                 * @return DescribeParameterTemplateAttributesOutcome
                 */
                DescribeParameterTemplateAttributesOutcome DescribeParameterTemplateAttributes(const Model::DescribeParameterTemplateAttributesRequest &request);
                void DescribeParameterTemplateAttributesAsync(const Model::DescribeParameterTemplateAttributesRequest& request, const DescribeParameterTemplateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParameterTemplateAttributesOutcomeCallable DescribeParameterTemplateAttributesCallable(const Model::DescribeParameterTemplateAttributesRequest& request);

                /**
                 *本接口 (DescribeParameterTemplates) 用于查询参数模板列表。
                 * @param req DescribeParameterTemplatesRequest
                 * @return DescribeParameterTemplatesOutcome
                 */
                DescribeParameterTemplatesOutcome DescribeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request);
                void DescribeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParameterTemplatesOutcomeCallable DescribeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request);

                /**
                 *本接口（DescribeParamsEvent）用于查询参数修改事件。
                 * @param req DescribeParamsEventRequest
                 * @return DescribeParamsEventOutcome
                 */
                DescribeParamsEventOutcome DescribeParamsEvent(const Model::DescribeParamsEventRequest &request);
                void DescribeParamsEventAsync(const Model::DescribeParamsEventRequest& request, const DescribeParamsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamsEventOutcomeCallable DescribeParamsEventCallable(const Model::DescribeParamsEventRequest& request);

                /**
                 *本接口（DescribeProductConfig）用于查询售卖规格配置。**本接口属于早期接口，已停止功能迭代，推荐使用新接口**[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)**替代**。
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *本接口（DescribeReadOnlyGroups）用于查询只读组列表
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
                 *本接口（DescribeTasks）用于查询任务列表，展示异步任务的执行进度。
注：本接口中展示的步骤为总结性步骤，可能伴随着版本迭代进行调整，不建议作为关键逻辑使用
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *本接口 (DescribeZones) 用于查询支持的可用区信息。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *本接口 (DestroyDBInstance) 用于彻底销毁指定DBInstanceId对应的实例，销毁后实例数据将彻底删除，无法找回，调用前请仔细确认要操作的实例。只能销毁隔离中的实例。
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
                 *本接口 (InquiryPriceCreateDBInstances) 用于查询购买实例的价格信息。
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
                 *本接口（InquiryPriceUpgradeDBInstance）用于查询升级实例的价格。只支持按量计费实例。
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *本接口（IsolateDBInstances）用于隔离实例。
                 * @param req IsolateDBInstancesRequest
                 * @return IsolateDBInstancesOutcome
                 */
                IsolateDBInstancesOutcome IsolateDBInstances(const Model::IsolateDBInstancesRequest &request);
                void IsolateDBInstancesAsync(const Model::IsolateDBInstancesRequest& request, const IsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstancesOutcomeCallable IsolateDBInstancesCallable(const Model::IsolateDBInstancesRequest& request);

                /**
                 *此接口用于锁定数据库账号，锁定后账号当前连接会断开，并且无法建立新连接。
                 * @param req LockAccountRequest
                 * @return LockAccountOutcome
                 */
                LockAccountOutcome LockAccount(const Model::LockAccountRequest &request);
                void LockAccountAsync(const Model::LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockAccountOutcomeCallable LockAccountCallable(const Model::LockAccountRequest& request);

                /**
                 *修改某账号对某数据库对象的权限、修改账号类型。
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *本接口（ModifyAccountRemark）用于修改账号备注。
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *修改数据库实例的审计功能
                 * @param req ModifyAuditServiceRequest
                 * @return ModifyAuditServiceOutcome
                 */
                ModifyAuditServiceOutcome ModifyAuditService(const Model::ModifyAuditServiceRequest &request);
                void ModifyAuditServiceAsync(const Model::ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditServiceOutcomeCallable ModifyAuditServiceCallable(const Model::ModifyAuditServiceRequest& request);

                /**
                 *本接口（ModifyBackupDownloadRestriction）用于修改备份文件下载限制。
                 * @param req ModifyBackupDownloadRestrictionRequest
                 * @return ModifyBackupDownloadRestrictionOutcome
                 */
                ModifyBackupDownloadRestrictionOutcome ModifyBackupDownloadRestriction(const Model::ModifyBackupDownloadRestrictionRequest &request);
                void ModifyBackupDownloadRestrictionAsync(const Model::ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupDownloadRestrictionOutcomeCallable ModifyBackupDownloadRestrictionCallable(const Model::ModifyBackupDownloadRestrictionRequest& request);

                /**
                 *本接口 (ModifyBackupPlan) 用于实例备份计划的修改，默认是在每天的凌晨开始全量备份，备份保留时长是7天。可以根据此接口指定时间进行实例的备份。
                 * @param req ModifyBackupPlanRequest
                 * @return ModifyBackupPlanOutcome
                 */
                ModifyBackupPlanOutcome ModifyBackupPlan(const Model::ModifyBackupPlanRequest &request);
                void ModifyBackupPlanAsync(const Model::ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupPlanOutcomeCallable ModifyBackupPlanCallable(const Model::ModifyBackupPlanRequest& request);

                /**
                 *本接口（ModifyBaseBackupExpireTime）用于修改实例指定数据备份的过期时间。
                 * @param req ModifyBaseBackupExpireTimeRequest
                 * @return ModifyBaseBackupExpireTimeOutcome
                 */
                ModifyBaseBackupExpireTimeOutcome ModifyBaseBackupExpireTime(const Model::ModifyBaseBackupExpireTimeRequest &request);
                void ModifyBaseBackupExpireTimeAsync(const Model::ModifyBaseBackupExpireTimeRequest& request, const ModifyBaseBackupExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaseBackupExpireTimeOutcomeCallable ModifyBaseBackupExpireTimeCallable(const Model::ModifyBaseBackupExpireTimeRequest& request);

                /**
                 *支持实例的计费类型转换（目前仅支持按量计费转包年包月）
                 * @param req ModifyDBInstanceChargeTypeRequest
                 * @return ModifyDBInstanceChargeTypeOutcome
                 */
                ModifyDBInstanceChargeTypeOutcome ModifyDBInstanceChargeType(const Model::ModifyDBInstanceChargeTypeRequest &request);
                void ModifyDBInstanceChargeTypeAsync(const Model::ModifyDBInstanceChargeTypeRequest& request, const ModifyDBInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceChargeTypeOutcomeCallable ModifyDBInstanceChargeTypeCallable(const Model::ModifyDBInstanceChargeTypeRequest& request);

                /**
                 *本接口（DeletionProtection）用于开启或关闭实例销毁保护
                 * @param req ModifyDBInstanceDeletionProtectionRequest
                 * @return ModifyDBInstanceDeletionProtectionOutcome
                 */
                ModifyDBInstanceDeletionProtectionOutcome ModifyDBInstanceDeletionProtection(const Model::ModifyDBInstanceDeletionProtectionRequest &request);
                void ModifyDBInstanceDeletionProtectionAsync(const Model::ModifyDBInstanceDeletionProtectionRequest& request, const ModifyDBInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceDeletionProtectionOutcomeCallable ModifyDBInstanceDeletionProtectionCallable(const Model::ModifyDBInstanceDeletionProtectionRequest& request);

                /**
                 *本接口（ModifyDBInstanceDeployment）用于修改节点可用区部署方式，仅支持主实例。
                 * @param req ModifyDBInstanceDeploymentRequest
                 * @return ModifyDBInstanceDeploymentOutcome
                 */
                ModifyDBInstanceDeploymentOutcome ModifyDBInstanceDeployment(const Model::ModifyDBInstanceDeploymentRequest &request);
                void ModifyDBInstanceDeploymentAsync(const Model::ModifyDBInstanceDeploymentRequest& request, const ModifyDBInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceDeploymentOutcomeCallable ModifyDBInstanceDeploymentCallable(const Model::ModifyDBInstanceDeploymentRequest& request);

                /**
                 *本接口（ModifyDBInstanceHAConfig）用于修改实例HA配置信息。其中HA配置信息包括：
<li>允许备节点切换为主节点的条件配置</li>
<li>半同步实例使用同步复制或异步复制的条件配置</li>
                 * @param req ModifyDBInstanceHAConfigRequest
                 * @return ModifyDBInstanceHAConfigOutcome
                 */
                ModifyDBInstanceHAConfigOutcome ModifyDBInstanceHAConfig(const Model::ModifyDBInstanceHAConfigRequest &request);
                void ModifyDBInstanceHAConfigAsync(const Model::ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceHAConfigOutcomeCallable ModifyDBInstanceHAConfigCallable(const Model::ModifyDBInstanceHAConfigRequest& request);

                /**
                 *本接口（ModifyDBInstanceName）用于修改postgresql实例名字。
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *本接口 (ModifyDBInstanceParameters) 用于修改实例参数。
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
                 *本接口用于修改实例SSL配置，功能包含开启、关闭、修改SSL证书保护的连接地址。
                 * @param req ModifyDBInstanceSSLConfigRequest
                 * @return ModifyDBInstanceSSLConfigOutcome
                 */
                ModifyDBInstanceSSLConfigOutcome ModifyDBInstanceSSLConfig(const Model::ModifyDBInstanceSSLConfigRequest &request);
                void ModifyDBInstanceSSLConfigAsync(const Model::ModifyDBInstanceSSLConfigRequest& request, const ModifyDBInstanceSSLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSSLConfigOutcomeCallable ModifyDBInstanceSSLConfigCallable(const Model::ModifyDBInstanceSSLConfigRequest& request);

                /**
                 *本接口（ModifyDBInstanceSecurityGroups）用于修改实例安全组。
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyDBInstanceSpec）用于修改实例规格，包括内存、磁盘、Cpu。
                 * @param req ModifyDBInstanceSpecRequest
                 * @return ModifyDBInstanceSpecOutcome
                 */
                ModifyDBInstanceSpecOutcome ModifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request);
                void ModifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSpecOutcomeCallable ModifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request);

                /**
                 *本接口（ModifyDBInstancesProject）用于修改实例所属项目。
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *修改数据库所有者
                 * @param req ModifyDatabaseOwnerRequest
                 * @return ModifyDatabaseOwnerOutcome
                 */
                ModifyDatabaseOwnerOutcome ModifyDatabaseOwner(const Model::ModifyDatabaseOwnerRequest &request);
                void ModifyDatabaseOwnerAsync(const Model::ModifyDatabaseOwnerRequest& request, const ModifyDatabaseOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseOwnerOutcomeCallable ModifyDatabaseOwnerCallable(const Model::ModifyDatabaseOwnerRequest& request);

                /**
                 *本接口 (ModifyMaintainTimeWindow) 用于实例维护时间窗口的修改。
                 * @param req ModifyMaintainTimeWindowRequest
                 * @return ModifyMaintainTimeWindowOutcome
                 */
                ModifyMaintainTimeWindowOutcome ModifyMaintainTimeWindow(const Model::ModifyMaintainTimeWindowRequest &request);
                void ModifyMaintainTimeWindowAsync(const Model::ModifyMaintainTimeWindowRequest& request, const ModifyMaintainTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintainTimeWindowOutcomeCallable ModifyMaintainTimeWindowCallable(const Model::ModifyMaintainTimeWindowRequest& request);

                /**
                 *本接口（ModifyParameterTemplate）主要用于修改参数模板名称，描述等配置，也可用于管理参数模板中的参数列表。
                 * @param req ModifyParameterTemplateRequest
                 * @return ModifyParameterTemplateOutcome
                 */
                ModifyParameterTemplateOutcome ModifyParameterTemplate(const Model::ModifyParameterTemplateRequest &request);
                void ModifyParameterTemplateAsync(const Model::ModifyParameterTemplateRequest& request, const ModifyParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParameterTemplateOutcomeCallable ModifyParameterTemplateCallable(const Model::ModifyParameterTemplateRequest& request);

                /**
                 *本接口（ModifyReadOnlyDBInstanceWeight）用于修改只读实例权重
                 * @param req ModifyReadOnlyDBInstanceWeightRequest
                 * @return ModifyReadOnlyDBInstanceWeightOutcome
                 */
                ModifyReadOnlyDBInstanceWeightOutcome ModifyReadOnlyDBInstanceWeight(const Model::ModifyReadOnlyDBInstanceWeightRequest &request);
                void ModifyReadOnlyDBInstanceWeightAsync(const Model::ModifyReadOnlyDBInstanceWeightRequest& request, const ModifyReadOnlyDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReadOnlyDBInstanceWeightOutcomeCallable ModifyReadOnlyDBInstanceWeightCallable(const Model::ModifyReadOnlyDBInstanceWeightRequest& request);

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
                 *本接口用于开启数据库账户的CAM验证服务。
                 * @param req OpenAccountCAMRequest
                 * @return OpenAccountCAMOutcome
                 */
                OpenAccountCAMOutcome OpenAccountCAM(const Model::OpenAccountCAMRequest &request);
                void OpenAccountCAMAsync(const Model::OpenAccountCAMRequest& request, const OpenAccountCAMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAccountCAMOutcomeCallable OpenAccountCAMCallable(const Model::OpenAccountCAMRequest& request);

                /**
                 *开启数据库实例的审计功能
                 * @param req OpenAuditServiceRequest
                 * @return OpenAuditServiceOutcome
                 */
                OpenAuditServiceOutcome OpenAuditService(const Model::OpenAuditServiceRequest &request);
                void OpenAuditServiceAsync(const Model::OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAuditServiceOutcomeCallable OpenAuditServiceCallable(const Model::OpenAuditServiceRequest& request);

                /**
                 *本接口（OpenDBExtranetAccess）用于开通实例公网地址。
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *本接口(RebalanceReadOnlyGroup)用于重新均衡 RO 组内实例的负载。注意，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库，谨慎操作。
                 * @param req RebalanceReadOnlyGroupRequest
                 * @return RebalanceReadOnlyGroupOutcome
                 */
                RebalanceReadOnlyGroupOutcome RebalanceReadOnlyGroup(const Model::RebalanceReadOnlyGroupRequest &request);
                void RebalanceReadOnlyGroupAsync(const Model::RebalanceReadOnlyGroupRequest& request, const RebalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebalanceReadOnlyGroupOutcomeCallable RebalanceReadOnlyGroupCallable(const Model::RebalanceReadOnlyGroupRequest& request);

                /**
                 *本接口用于对开启CAM验证的账户执行手动刷新密码。
                 * @param req RefreshAccountPasswordRequest
                 * @return RefreshAccountPasswordOutcome
                 */
                RefreshAccountPasswordOutcome RefreshAccountPassword(const Model::RefreshAccountPasswordRequest &request);
                void RefreshAccountPasswordAsync(const Model::RefreshAccountPasswordRequest& request, const RefreshAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshAccountPasswordOutcomeCallable RefreshAccountPasswordCallable(const Model::RefreshAccountPasswordRequest& request);

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
                 *根据备份集或恢复目标时间，在原实例上恢复数据库相关对象，例如数据库、表。
                 * @param req RestoreDBInstanceObjectsRequest
                 * @return RestoreDBInstanceObjectsOutcome
                 */
                RestoreDBInstanceObjectsOutcome RestoreDBInstanceObjects(const Model::RestoreDBInstanceObjectsRequest &request);
                void RestoreDBInstanceObjectsAsync(const Model::RestoreDBInstanceObjectsRequest& request, const RestoreDBInstanceObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreDBInstanceObjectsOutcomeCallable RestoreDBInstanceObjectsCallable(const Model::RestoreDBInstanceObjectsRequest& request);

                /**
                 *本接口（SetAutoRenewFlag）用于设置自动续费。
                 * @param req SetAutoRenewFlagRequest
                 * @return SetAutoRenewFlagOutcome
                 */
                SetAutoRenewFlagOutcome SetAutoRenewFlag(const Model::SetAutoRenewFlagRequest &request);
                void SetAutoRenewFlagAsync(const Model::SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoRenewFlagOutcomeCallable SetAutoRenewFlagCallable(const Model::SetAutoRenewFlagRequest& request);

                /**
                 *本接口（SwitchDBInstancePrimary）用于切换实例主备关系。
<li>通过主动发起切换，可以验证业务能否正确处理实例主备切换的场景</li>
<li>通过使用强制切换，可以在备节点延迟不满足切换条件时，强制发起主从切换</li>
<li>只有主实例可以执行该操作</li>
                 * @param req SwitchDBInstancePrimaryRequest
                 * @return SwitchDBInstancePrimaryOutcome
                 */
                SwitchDBInstancePrimaryOutcome SwitchDBInstancePrimary(const Model::SwitchDBInstancePrimaryRequest &request);
                void SwitchDBInstancePrimaryAsync(const Model::SwitchDBInstancePrimaryRequest& request, const SwitchDBInstancePrimaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstancePrimaryOutcomeCallable SwitchDBInstancePrimaryCallable(const Model::SwitchDBInstancePrimaryRequest& request);

                /**
                 *解除数据库账号的锁定，解锁后账号可以登录数据库。
                 * @param req UnlockAccountRequest
                 * @return UnlockAccountOutcome
                 */
                UnlockAccountOutcome UnlockAccount(const Model::UnlockAccountRequest &request);
                void UnlockAccountAsync(const Model::UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockAccountOutcomeCallable UnlockAccountCallable(const Model::UnlockAccountRequest& request);

                /**
                 *本接口（UpgradeDBInstanceKernelVersion）用于升级实例的内核版本号。
                 * @param req UpgradeDBInstanceKernelVersionRequest
                 * @return UpgradeDBInstanceKernelVersionOutcome
                 */
                UpgradeDBInstanceKernelVersionOutcome UpgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request);
                void UpgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceKernelVersionOutcomeCallable UpgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request);

                /**
                 *本接口（UpgradeDBInstanceMajorVersion）用于升级实例内核大版本，例如从PostgreSQL 12升级到PostgreSQL 15。
                 * @param req UpgradeDBInstanceMajorVersionRequest
                 * @return UpgradeDBInstanceMajorVersionOutcome
                 */
                UpgradeDBInstanceMajorVersionOutcome UpgradeDBInstanceMajorVersion(const Model::UpgradeDBInstanceMajorVersionRequest &request);
                void UpgradeDBInstanceMajorVersionAsync(const Model::UpgradeDBInstanceMajorVersionRequest& request, const UpgradeDBInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceMajorVersionOutcomeCallable UpgradeDBInstanceMajorVersionCallable(const Model::UpgradeDBInstanceMajorVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
