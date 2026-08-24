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

#ifndef TENCENTCLOUD_BDRC_V20260330_BDRCCLIENT_H_
#define TENCENTCLOUD_BDRC_V20260330_BDRCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bdrc/v20260330/model/ApplyBackupGroupRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ApplyBackupGroupResponse.h>
#include <tencentcloud/bdrc/v20260330/model/BindAutoBackupPolicyRequest.h>
#include <tencentcloud/bdrc/v20260330/model/BindAutoBackupPolicyResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateAutoBackupPolicyRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateAutoBackupPolicyResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateBackupGroupRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateBackupGroupResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateBackupVaultRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateBackupVaultResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoveryProtectGroupRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoveryProtectGroupResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoverySitePairRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoverySitePairResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoveryVpcMappingRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoveryVpcMappingResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateFileBackupRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateFileBackupResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateFileBackupPlanRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateFileBackupPlanResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateFileRestoreTaskRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateFileRestoreTaskResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateInstanceCopyPairRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateInstanceCopyPairResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateInstanceDrillPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateInstanceDrillPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/CreateSecurityGroupMappingRequest.h>
#include <tencentcloud/bdrc/v20260330/model/CreateSecurityGroupMappingResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteAutoBackupPoliciesRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteAutoBackupPoliciesResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteBackupGroupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteBackupGroupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteBackupVaultsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteBackupVaultsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteCopyPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteCopyPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoveryProtectGroupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoveryProtectGroupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoverySitePairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoverySitePairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoveryVpcMappingRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoveryVpcMappingResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDrillPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteDrillPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteFileBackupPlansRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteFileBackupPlansResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteFileBackupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteFileBackupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteSecurityGroupMappingRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DeleteSecurityGroupMappingResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeAutoBackupPoliciesRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeAutoBackupPoliciesResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupGroupRollbackTasksRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupGroupRollbackTasksResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupGroupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupGroupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupGroupsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupGroupsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupInstancesRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupInstancesResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupOverviewGeneralRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupOverviewGeneralResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupPlansResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupVaultsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupVaultsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupVaultsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeBackupVaultsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeCommonBackupPointsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeCommonBackupPointsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeCopyPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeCopyPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeCopyPairsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeCopyPairsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryDrillGroupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryDrillGroupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryOverviewRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryOverviewResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryProtectGroupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryProtectGroupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySitePairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySitePairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySitePairsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySitePairsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySupportRegionRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySupportRegionResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisksRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDisksResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDrillPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDrillPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDrillPairsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeDrillPairsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupObjectsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupObjectsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupPlansRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupPlansResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileBackupsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileRestoreTasksRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeFileRestoreTasksResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeJobsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeJobsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribePriceCreateCopyPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribePriceCreateCopyPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeProtectGroupsDeniedActionsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeProtectGroupsDeniedActionsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeProtectedInstancesRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeProtectedInstancesResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeSecurityGroupMappingsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeSecurityGroupMappingsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeVpcMappingsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/DescribeVpcMappingsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/FinishFailoverCopyPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/FinishFailoverCopyPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyAutoBackupPolicyAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyAutoBackupPolicyAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyBackupAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyBackupAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyBackupVaultAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyBackupVaultAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyCopyPairAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyCopyPairAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyDrillGroupAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyDrillGroupAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyDrillPairAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyDrillPairAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyFileBackupAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyFileBackupAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyFileBackupPlanRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyFileBackupPlanResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyProtectGroupAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifyProtectGroupAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ModifySitePairAttributeRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ModifySitePairAttributeResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ReportAgentMetricsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ReportAgentMetricsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ReportGatewayHeartbeatRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ReportGatewayHeartbeatResponse.h>
#include <tencentcloud/bdrc/v20260330/model/ReportJobProgressRequest.h>
#include <tencentcloud/bdrc/v20260330/model/ReportJobProgressResponse.h>
#include <tencentcloud/bdrc/v20260330/model/RunCopyPairTasksRequest.h>
#include <tencentcloud/bdrc/v20260330/model/RunCopyPairTasksResponse.h>
#include <tencentcloud/bdrc/v20260330/model/RunFailoverCopyPairsRequest.h>
#include <tencentcloud/bdrc/v20260330/model/RunFailoverCopyPairsResponse.h>
#include <tencentcloud/bdrc/v20260330/model/RunInstancesWithBackupGroupRequest.h>
#include <tencentcloud/bdrc/v20260330/model/RunInstancesWithBackupGroupResponse.h>
#include <tencentcloud/bdrc/v20260330/model/StopCopyPairTasksRequest.h>
#include <tencentcloud/bdrc/v20260330/model/StopCopyPairTasksResponse.h>
#include <tencentcloud/bdrc/v20260330/model/UnbindAutoBackupPolicyRequest.h>
#include <tencentcloud/bdrc/v20260330/model/UnbindAutoBackupPolicyResponse.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            class BdrcClient : public AbstractClient
            {
            public:
                BdrcClient(const Credential &credential, const std::string &region);
                BdrcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyBackupGroupResponse> ApplyBackupGroupOutcome;
                typedef std::future<ApplyBackupGroupOutcome> ApplyBackupGroupOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ApplyBackupGroupRequest&, ApplyBackupGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyBackupGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindAutoBackupPolicyResponse> BindAutoBackupPolicyOutcome;
                typedef std::future<BindAutoBackupPolicyOutcome> BindAutoBackupPolicyOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::BindAutoBackupPolicyRequest&, BindAutoBackupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoBackupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoBackupPolicyResponse> CreateAutoBackupPolicyOutcome;
                typedef std::future<CreateAutoBackupPolicyOutcome> CreateAutoBackupPolicyOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateAutoBackupPolicyRequest&, CreateAutoBackupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoBackupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupGroupResponse> CreateBackupGroupOutcome;
                typedef std::future<CreateBackupGroupOutcome> CreateBackupGroupOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateBackupGroupRequest&, CreateBackupGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupVaultResponse> CreateBackupVaultOutcome;
                typedef std::future<CreateBackupVaultOutcome> CreateBackupVaultOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateBackupVaultRequest&, CreateBackupVaultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupVaultAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisasterRecoveryProtectGroupResponse> CreateDisasterRecoveryProtectGroupOutcome;
                typedef std::future<CreateDisasterRecoveryProtectGroupOutcome> CreateDisasterRecoveryProtectGroupOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateDisasterRecoveryProtectGroupRequest&, CreateDisasterRecoveryProtectGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisasterRecoveryProtectGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisasterRecoverySitePairResponse> CreateDisasterRecoverySitePairOutcome;
                typedef std::future<CreateDisasterRecoverySitePairOutcome> CreateDisasterRecoverySitePairOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateDisasterRecoverySitePairRequest&, CreateDisasterRecoverySitePairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisasterRecoverySitePairAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisasterRecoveryVpcMappingResponse> CreateDisasterRecoveryVpcMappingOutcome;
                typedef std::future<CreateDisasterRecoveryVpcMappingOutcome> CreateDisasterRecoveryVpcMappingOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateDisasterRecoveryVpcMappingRequest&, CreateDisasterRecoveryVpcMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisasterRecoveryVpcMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileBackupResponse> CreateFileBackupOutcome;
                typedef std::future<CreateFileBackupOutcome> CreateFileBackupOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateFileBackupRequest&, CreateFileBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileBackupPlanResponse> CreateFileBackupPlanOutcome;
                typedef std::future<CreateFileBackupPlanOutcome> CreateFileBackupPlanOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateFileBackupPlanRequest&, CreateFileBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileRestoreTaskResponse> CreateFileRestoreTaskOutcome;
                typedef std::future<CreateFileRestoreTaskOutcome> CreateFileRestoreTaskOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateFileRestoreTaskRequest&, CreateFileRestoreTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileRestoreTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceCopyPairResponse> CreateInstanceCopyPairOutcome;
                typedef std::future<CreateInstanceCopyPairOutcome> CreateInstanceCopyPairOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateInstanceCopyPairRequest&, CreateInstanceCopyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceCopyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceDrillPairsResponse> CreateInstanceDrillPairsOutcome;
                typedef std::future<CreateInstanceDrillPairsOutcome> CreateInstanceDrillPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateInstanceDrillPairsRequest&, CreateInstanceDrillPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceDrillPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupMappingResponse> CreateSecurityGroupMappingOutcome;
                typedef std::future<CreateSecurityGroupMappingOutcome> CreateSecurityGroupMappingOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::CreateSecurityGroupMappingRequest&, CreateSecurityGroupMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoBackupPoliciesResponse> DeleteAutoBackupPoliciesOutcome;
                typedef std::future<DeleteAutoBackupPoliciesOutcome> DeleteAutoBackupPoliciesOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteAutoBackupPoliciesRequest&, DeleteAutoBackupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoBackupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupGroupsResponse> DeleteBackupGroupsOutcome;
                typedef std::future<DeleteBackupGroupsOutcome> DeleteBackupGroupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteBackupGroupsRequest&, DeleteBackupGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupVaultsResponse> DeleteBackupVaultsOutcome;
                typedef std::future<DeleteBackupVaultsOutcome> DeleteBackupVaultsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteBackupVaultsRequest&, DeleteBackupVaultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupVaultsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCopyPairsResponse> DeleteCopyPairsOutcome;
                typedef std::future<DeleteCopyPairsOutcome> DeleteCopyPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteCopyPairsRequest&, DeleteCopyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCopyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDisasterRecoveryProtectGroupsResponse> DeleteDisasterRecoveryProtectGroupsOutcome;
                typedef std::future<DeleteDisasterRecoveryProtectGroupsOutcome> DeleteDisasterRecoveryProtectGroupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteDisasterRecoveryProtectGroupsRequest&, DeleteDisasterRecoveryProtectGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDisasterRecoveryProtectGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDisasterRecoverySitePairsResponse> DeleteDisasterRecoverySitePairsOutcome;
                typedef std::future<DeleteDisasterRecoverySitePairsOutcome> DeleteDisasterRecoverySitePairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteDisasterRecoverySitePairsRequest&, DeleteDisasterRecoverySitePairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDisasterRecoverySitePairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDisasterRecoveryVpcMappingResponse> DeleteDisasterRecoveryVpcMappingOutcome;
                typedef std::future<DeleteDisasterRecoveryVpcMappingOutcome> DeleteDisasterRecoveryVpcMappingOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteDisasterRecoveryVpcMappingRequest&, DeleteDisasterRecoveryVpcMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDisasterRecoveryVpcMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDrillPairsResponse> DeleteDrillPairsOutcome;
                typedef std::future<DeleteDrillPairsOutcome> DeleteDrillPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteDrillPairsRequest&, DeleteDrillPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDrillPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileBackupPlansResponse> DeleteFileBackupPlansOutcome;
                typedef std::future<DeleteFileBackupPlansOutcome> DeleteFileBackupPlansOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteFileBackupPlansRequest&, DeleteFileBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileBackupsResponse> DeleteFileBackupsOutcome;
                typedef std::future<DeleteFileBackupsOutcome> DeleteFileBackupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteFileBackupsRequest&, DeleteFileBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupMappingResponse> DeleteSecurityGroupMappingOutcome;
                typedef std::future<DeleteSecurityGroupMappingOutcome> DeleteSecurityGroupMappingOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DeleteSecurityGroupMappingRequest&, DeleteSecurityGroupMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoBackupPoliciesResponse> DescribeAutoBackupPoliciesOutcome;
                typedef std::future<DescribeAutoBackupPoliciesOutcome> DescribeAutoBackupPoliciesOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeAutoBackupPoliciesRequest&, DescribeAutoBackupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoBackupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupGroupRollbackTasksResponse> DescribeBackupGroupRollbackTasksOutcome;
                typedef std::future<DescribeBackupGroupRollbackTasksOutcome> DescribeBackupGroupRollbackTasksOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupGroupRollbackTasksRequest&, DescribeBackupGroupRollbackTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupGroupRollbackTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupGroupsResponse> DescribeBackupGroupsOutcome;
                typedef std::future<DescribeBackupGroupsOutcome> DescribeBackupGroupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupGroupsRequest&, DescribeBackupGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupGroupsDeniedActionsResponse> DescribeBackupGroupsDeniedActionsOutcome;
                typedef std::future<DescribeBackupGroupsDeniedActionsOutcome> DescribeBackupGroupsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupGroupsDeniedActionsRequest&, DescribeBackupGroupsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupGroupsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupInstancesResponse> DescribeBackupInstancesOutcome;
                typedef std::future<DescribeBackupInstancesOutcome> DescribeBackupInstancesOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupInstancesRequest&, DescribeBackupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupOverviewGeneralResponse> DescribeBackupOverviewGeneralOutcome;
                typedef std::future<DescribeBackupOverviewGeneralOutcome> DescribeBackupOverviewGeneralOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupOverviewGeneralRequest&, DescribeBackupOverviewGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupOverviewGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlansResponse> DescribeBackupPlansOutcome;
                typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupPlansRequest&, DescribeBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupVaultsResponse> DescribeBackupVaultsOutcome;
                typedef std::future<DescribeBackupVaultsOutcome> DescribeBackupVaultsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupVaultsRequest&, DescribeBackupVaultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupVaultsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupVaultsDeniedActionsResponse> DescribeBackupVaultsDeniedActionsOutcome;
                typedef std::future<DescribeBackupVaultsDeniedActionsOutcome> DescribeBackupVaultsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeBackupVaultsDeniedActionsRequest&, DescribeBackupVaultsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupVaultsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCommonBackupPointsResponse> DescribeCommonBackupPointsOutcome;
                typedef std::future<DescribeCommonBackupPointsOutcome> DescribeCommonBackupPointsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeCommonBackupPointsRequest&, DescribeCommonBackupPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonBackupPointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCopyPairsResponse> DescribeCopyPairsOutcome;
                typedef std::future<DescribeCopyPairsOutcome> DescribeCopyPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeCopyPairsRequest&, DescribeCopyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCopyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCopyPairsDeniedActionsResponse> DescribeCopyPairsDeniedActionsOutcome;
                typedef std::future<DescribeCopyPairsDeniedActionsOutcome> DescribeCopyPairsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeCopyPairsDeniedActionsRequest&, DescribeCopyPairsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCopyPairsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoveryDrillGroupsResponse> DescribeDisasterRecoveryDrillGroupsOutcome;
                typedef std::future<DescribeDisasterRecoveryDrillGroupsOutcome> DescribeDisasterRecoveryDrillGroupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisasterRecoveryDrillGroupsRequest&, DescribeDisasterRecoveryDrillGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoveryDrillGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoveryOverviewResponse> DescribeDisasterRecoveryOverviewOutcome;
                typedef std::future<DescribeDisasterRecoveryOverviewOutcome> DescribeDisasterRecoveryOverviewOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisasterRecoveryOverviewRequest&, DescribeDisasterRecoveryOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoveryOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoveryProtectGroupsResponse> DescribeDisasterRecoveryProtectGroupsOutcome;
                typedef std::future<DescribeDisasterRecoveryProtectGroupsOutcome> DescribeDisasterRecoveryProtectGroupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisasterRecoveryProtectGroupsRequest&, DescribeDisasterRecoveryProtectGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoveryProtectGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverySitePairsResponse> DescribeDisasterRecoverySitePairsOutcome;
                typedef std::future<DescribeDisasterRecoverySitePairsOutcome> DescribeDisasterRecoverySitePairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisasterRecoverySitePairsRequest&, DescribeDisasterRecoverySitePairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverySitePairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverySitePairsDeniedActionsResponse> DescribeDisasterRecoverySitePairsDeniedActionsOutcome;
                typedef std::future<DescribeDisasterRecoverySitePairsDeniedActionsOutcome> DescribeDisasterRecoverySitePairsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisasterRecoverySitePairsDeniedActionsRequest&, DescribeDisasterRecoverySitePairsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverySitePairsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverySupportRegionResponse> DescribeDisasterRecoverySupportRegionOutcome;
                typedef std::future<DescribeDisasterRecoverySupportRegionOutcome> DescribeDisasterRecoverySupportRegionOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisasterRecoverySupportRegionRequest&, DescribeDisasterRecoverySupportRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverySupportRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksResponse> DescribeDisksOutcome;
                typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDisksRequest&, DescribeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrillPairsResponse> DescribeDrillPairsOutcome;
                typedef std::future<DescribeDrillPairsOutcome> DescribeDrillPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDrillPairsRequest&, DescribeDrillPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrillPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrillPairsDeniedActionsResponse> DescribeDrillPairsDeniedActionsOutcome;
                typedef std::future<DescribeDrillPairsDeniedActionsOutcome> DescribeDrillPairsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeDrillPairsDeniedActionsRequest&, DescribeDrillPairsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrillPairsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileBackupObjectsResponse> DescribeFileBackupObjectsOutcome;
                typedef std::future<DescribeFileBackupObjectsOutcome> DescribeFileBackupObjectsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeFileBackupObjectsRequest&, DescribeFileBackupObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileBackupObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileBackupPlansResponse> DescribeFileBackupPlansOutcome;
                typedef std::future<DescribeFileBackupPlansOutcome> DescribeFileBackupPlansOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeFileBackupPlansRequest&, DescribeFileBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileBackupsResponse> DescribeFileBackupsOutcome;
                typedef std::future<DescribeFileBackupsOutcome> DescribeFileBackupsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeFileBackupsRequest&, DescribeFileBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileBackupsDeniedActionsResponse> DescribeFileBackupsDeniedActionsOutcome;
                typedef std::future<DescribeFileBackupsDeniedActionsOutcome> DescribeFileBackupsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeFileBackupsDeniedActionsRequest&, DescribeFileBackupsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileBackupsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileRestoreTasksResponse> DescribeFileRestoreTasksOutcome;
                typedef std::future<DescribeFileRestoreTasksOutcome> DescribeFileRestoreTasksOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeFileRestoreTasksRequest&, DescribeFileRestoreTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileRestoreTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePriceCreateCopyPairsResponse> DescribePriceCreateCopyPairsOutcome;
                typedef std::future<DescribePriceCreateCopyPairsOutcome> DescribePriceCreateCopyPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribePriceCreateCopyPairsRequest&, DescribePriceCreateCopyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceCreateCopyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectGroupsDeniedActionsResponse> DescribeProtectGroupsDeniedActionsOutcome;
                typedef std::future<DescribeProtectGroupsDeniedActionsOutcome> DescribeProtectGroupsDeniedActionsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeProtectGroupsDeniedActionsRequest&, DescribeProtectGroupsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectGroupsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectedInstancesResponse> DescribeProtectedInstancesOutcome;
                typedef std::future<DescribeProtectedInstancesOutcome> DescribeProtectedInstancesOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeProtectedInstancesRequest&, DescribeProtectedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupMappingsResponse> DescribeSecurityGroupMappingsOutcome;
                typedef std::future<DescribeSecurityGroupMappingsOutcome> DescribeSecurityGroupMappingsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeSecurityGroupMappingsRequest&, DescribeSecurityGroupMappingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupMappingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcMappingsResponse> DescribeVpcMappingsOutcome;
                typedef std::future<DescribeVpcMappingsOutcome> DescribeVpcMappingsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::DescribeVpcMappingsRequest&, DescribeVpcMappingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcMappingsAsyncHandler;
                typedef Outcome<Core::Error, Model::FinishFailoverCopyPairsResponse> FinishFailoverCopyPairsOutcome;
                typedef std::future<FinishFailoverCopyPairsOutcome> FinishFailoverCopyPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::FinishFailoverCopyPairsRequest&, FinishFailoverCopyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FinishFailoverCopyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoBackupPolicyAttributeResponse> ModifyAutoBackupPolicyAttributeOutcome;
                typedef std::future<ModifyAutoBackupPolicyAttributeOutcome> ModifyAutoBackupPolicyAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyAutoBackupPolicyAttributeRequest&, ModifyAutoBackupPolicyAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoBackupPolicyAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupAttributeResponse> ModifyBackupAttributeOutcome;
                typedef std::future<ModifyBackupAttributeOutcome> ModifyBackupAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyBackupAttributeRequest&, ModifyBackupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupVaultAttributeResponse> ModifyBackupVaultAttributeOutcome;
                typedef std::future<ModifyBackupVaultAttributeOutcome> ModifyBackupVaultAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyBackupVaultAttributeRequest&, ModifyBackupVaultAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupVaultAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCopyPairAttributeResponse> ModifyCopyPairAttributeOutcome;
                typedef std::future<ModifyCopyPairAttributeOutcome> ModifyCopyPairAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyCopyPairAttributeRequest&, ModifyCopyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCopyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDrillGroupAttributeResponse> ModifyDrillGroupAttributeOutcome;
                typedef std::future<ModifyDrillGroupAttributeOutcome> ModifyDrillGroupAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyDrillGroupAttributeRequest&, ModifyDrillGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrillGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDrillPairAttributeResponse> ModifyDrillPairAttributeOutcome;
                typedef std::future<ModifyDrillPairAttributeOutcome> ModifyDrillPairAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyDrillPairAttributeRequest&, ModifyDrillPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrillPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileBackupAttributeResponse> ModifyFileBackupAttributeOutcome;
                typedef std::future<ModifyFileBackupAttributeOutcome> ModifyFileBackupAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyFileBackupAttributeRequest&, ModifyFileBackupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileBackupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileBackupPlanResponse> ModifyFileBackupPlanOutcome;
                typedef std::future<ModifyFileBackupPlanOutcome> ModifyFileBackupPlanOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyFileBackupPlanRequest&, ModifyFileBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectGroupAttributeResponse> ModifyProtectGroupAttributeOutcome;
                typedef std::future<ModifyProtectGroupAttributeOutcome> ModifyProtectGroupAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifyProtectGroupAttributeRequest&, ModifyProtectGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySitePairAttributeResponse> ModifySitePairAttributeOutcome;
                typedef std::future<ModifySitePairAttributeOutcome> ModifySitePairAttributeOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ModifySitePairAttributeRequest&, ModifySitePairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySitePairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportAgentMetricsResponse> ReportAgentMetricsOutcome;
                typedef std::future<ReportAgentMetricsOutcome> ReportAgentMetricsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ReportAgentMetricsRequest&, ReportAgentMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportAgentMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportGatewayHeartbeatResponse> ReportGatewayHeartbeatOutcome;
                typedef std::future<ReportGatewayHeartbeatOutcome> ReportGatewayHeartbeatOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ReportGatewayHeartbeatRequest&, ReportGatewayHeartbeatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportGatewayHeartbeatAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportJobProgressResponse> ReportJobProgressOutcome;
                typedef std::future<ReportJobProgressOutcome> ReportJobProgressOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::ReportJobProgressRequest&, ReportJobProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportJobProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::RunCopyPairTasksResponse> RunCopyPairTasksOutcome;
                typedef std::future<RunCopyPairTasksOutcome> RunCopyPairTasksOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::RunCopyPairTasksRequest&, RunCopyPairTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunCopyPairTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::RunFailoverCopyPairsResponse> RunFailoverCopyPairsOutcome;
                typedef std::future<RunFailoverCopyPairsOutcome> RunFailoverCopyPairsOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::RunFailoverCopyPairsRequest&, RunFailoverCopyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunFailoverCopyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::RunInstancesWithBackupGroupResponse> RunInstancesWithBackupGroupOutcome;
                typedef std::future<RunInstancesWithBackupGroupOutcome> RunInstancesWithBackupGroupOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::RunInstancesWithBackupGroupRequest&, RunInstancesWithBackupGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesWithBackupGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCopyPairTasksResponse> StopCopyPairTasksOutcome;
                typedef std::future<StopCopyPairTasksOutcome> StopCopyPairTasksOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::StopCopyPairTasksRequest&, StopCopyPairTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCopyPairTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindAutoBackupPolicyResponse> UnbindAutoBackupPolicyOutcome;
                typedef std::future<UnbindAutoBackupPolicyOutcome> UnbindAutoBackupPolicyOutcomeCallable;
                typedef std::function<void(const BdrcClient*, const Model::UnbindAutoBackupPolicyRequest&, UnbindAutoBackupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAutoBackupPolicyAsyncHandler;



                /**
                 *回滚备份组
                 * @param req ApplyBackupGroupRequest
                 * @return ApplyBackupGroupOutcome
                 */
                ApplyBackupGroupOutcome ApplyBackupGroup(const Model::ApplyBackupGroupRequest &request);
                void ApplyBackupGroupAsync(const Model::ApplyBackupGroupRequest& request, const ApplyBackupGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyBackupGroupOutcomeCallable ApplyBackupGroupCallable(const Model::ApplyBackupGroupRequest& request);

                /**
                 *将实例绑定到备份策略上
                 * @param req BindAutoBackupPolicyRequest
                 * @return BindAutoBackupPolicyOutcome
                 */
                BindAutoBackupPolicyOutcome BindAutoBackupPolicy(const Model::BindAutoBackupPolicyRequest &request);
                void BindAutoBackupPolicyAsync(const Model::BindAutoBackupPolicyRequest& request, const BindAutoBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAutoBackupPolicyOutcomeCallable BindAutoBackupPolicyCallable(const Model::BindAutoBackupPolicyRequest& request);

                /**
                 *创建备份策略
                 * @param req CreateAutoBackupPolicyRequest
                 * @return CreateAutoBackupPolicyOutcome
                 */
                CreateAutoBackupPolicyOutcome CreateAutoBackupPolicy(const Model::CreateAutoBackupPolicyRequest &request);
                void CreateAutoBackupPolicyAsync(const Model::CreateAutoBackupPolicyRequest& request, const CreateAutoBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoBackupPolicyOutcomeCallable CreateAutoBackupPolicyCallable(const Model::CreateAutoBackupPolicyRequest& request);

                /**
                 *创建备份组
                 * @param req CreateBackupGroupRequest
                 * @return CreateBackupGroupOutcome
                 */
                CreateBackupGroupOutcome CreateBackupGroup(const Model::CreateBackupGroupRequest &request);
                void CreateBackupGroupAsync(const Model::CreateBackupGroupRequest& request, const CreateBackupGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupGroupOutcomeCallable CreateBackupGroupCallable(const Model::CreateBackupGroupRequest& request);

                /**
                 *创建备份库
                 * @param req CreateBackupVaultRequest
                 * @return CreateBackupVaultOutcome
                 */
                CreateBackupVaultOutcome CreateBackupVault(const Model::CreateBackupVaultRequest &request);
                void CreateBackupVaultAsync(const Model::CreateBackupVaultRequest& request, const CreateBackupVaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupVaultOutcomeCallable CreateBackupVaultCallable(const Model::CreateBackupVaultRequest& request);

                /**
                 *本接口用于创建容灾保护组
                 * @param req CreateDisasterRecoveryProtectGroupRequest
                 * @return CreateDisasterRecoveryProtectGroupOutcome
                 */
                CreateDisasterRecoveryProtectGroupOutcome CreateDisasterRecoveryProtectGroup(const Model::CreateDisasterRecoveryProtectGroupRequest &request);
                void CreateDisasterRecoveryProtectGroupAsync(const Model::CreateDisasterRecoveryProtectGroupRequest& request, const CreateDisasterRecoveryProtectGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisasterRecoveryProtectGroupOutcomeCallable CreateDisasterRecoveryProtectGroupCallable(const Model::CreateDisasterRecoveryProtectGroupRequest& request);

                /**
                 *创建容灾站点对
                 * @param req CreateDisasterRecoverySitePairRequest
                 * @return CreateDisasterRecoverySitePairOutcome
                 */
                CreateDisasterRecoverySitePairOutcome CreateDisasterRecoverySitePair(const Model::CreateDisasterRecoverySitePairRequest &request);
                void CreateDisasterRecoverySitePairAsync(const Model::CreateDisasterRecoverySitePairRequest& request, const CreateDisasterRecoverySitePairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisasterRecoverySitePairOutcomeCallable CreateDisasterRecoverySitePairCallable(const Model::CreateDisasterRecoverySitePairRequest& request);

                /**
                 *本接口用于创建容灾站点VPC网络映射
                 * @param req CreateDisasterRecoveryVpcMappingRequest
                 * @return CreateDisasterRecoveryVpcMappingOutcome
                 */
                CreateDisasterRecoveryVpcMappingOutcome CreateDisasterRecoveryVpcMapping(const Model::CreateDisasterRecoveryVpcMappingRequest &request);
                void CreateDisasterRecoveryVpcMappingAsync(const Model::CreateDisasterRecoveryVpcMappingRequest& request, const CreateDisasterRecoveryVpcMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisasterRecoveryVpcMappingOutcomeCallable CreateDisasterRecoveryVpcMappingCallable(const Model::CreateDisasterRecoveryVpcMappingRequest& request);

                /**
                 *本接口用于创建文件备份点
                 * @param req CreateFileBackupRequest
                 * @return CreateFileBackupOutcome
                 */
                CreateFileBackupOutcome CreateFileBackup(const Model::CreateFileBackupRequest &request);
                void CreateFileBackupAsync(const Model::CreateFileBackupRequest& request, const CreateFileBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileBackupOutcomeCallable CreateFileBackupCallable(const Model::CreateFileBackupRequest& request);

                /**
                 *本接口用于创建备份计划
                 * @param req CreateFileBackupPlanRequest
                 * @return CreateFileBackupPlanOutcome
                 */
                CreateFileBackupPlanOutcome CreateFileBackupPlan(const Model::CreateFileBackupPlanRequest &request);
                void CreateFileBackupPlanAsync(const Model::CreateFileBackupPlanRequest& request, const CreateFileBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileBackupPlanOutcomeCallable CreateFileBackupPlanCallable(const Model::CreateFileBackupPlanRequest& request);

                /**
                 *创建恢复任务
                 * @param req CreateFileRestoreTaskRequest
                 * @return CreateFileRestoreTaskOutcome
                 */
                CreateFileRestoreTaskOutcome CreateFileRestoreTask(const Model::CreateFileRestoreTaskRequest &request);
                void CreateFileRestoreTaskAsync(const Model::CreateFileRestoreTaskRequest& request, const CreateFileRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileRestoreTaskOutcomeCallable CreateFileRestoreTaskCallable(const Model::CreateFileRestoreTaskRequest& request);

                /**
                 *本接口用于创建CVM复制对
                 * @param req CreateInstanceCopyPairRequest
                 * @return CreateInstanceCopyPairOutcome
                 */
                CreateInstanceCopyPairOutcome CreateInstanceCopyPair(const Model::CreateInstanceCopyPairRequest &request);
                void CreateInstanceCopyPairAsync(const Model::CreateInstanceCopyPairRequest& request, const CreateInstanceCopyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceCopyPairOutcomeCallable CreateInstanceCopyPairCallable(const Model::CreateInstanceCopyPairRequest& request);

                /**
                 *创建cvm演练
                 * @param req CreateInstanceDrillPairsRequest
                 * @return CreateInstanceDrillPairsOutcome
                 */
                CreateInstanceDrillPairsOutcome CreateInstanceDrillPairs(const Model::CreateInstanceDrillPairsRequest &request);
                void CreateInstanceDrillPairsAsync(const Model::CreateInstanceDrillPairsRequest& request, const CreateInstanceDrillPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceDrillPairsOutcomeCallable CreateInstanceDrillPairsCallable(const Model::CreateInstanceDrillPairsRequest& request);

                /**
                 *本接口用于为站点对新增安全组映射，生产端实例绑定的安全组为源端，需要为每个生产端实例绑定的安全组建立映射，在创建复制对时，会自动以映射后的目标安全组作为容灾端实例绑定的安全组。
                 * @param req CreateSecurityGroupMappingRequest
                 * @return CreateSecurityGroupMappingOutcome
                 */
                CreateSecurityGroupMappingOutcome CreateSecurityGroupMapping(const Model::CreateSecurityGroupMappingRequest &request);
                void CreateSecurityGroupMappingAsync(const Model::CreateSecurityGroupMappingRequest& request, const CreateSecurityGroupMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupMappingOutcomeCallable CreateSecurityGroupMappingCallable(const Model::CreateSecurityGroupMappingRequest& request);

                /**
                 *删除备份策略
                 * @param req DeleteAutoBackupPoliciesRequest
                 * @return DeleteAutoBackupPoliciesOutcome
                 */
                DeleteAutoBackupPoliciesOutcome DeleteAutoBackupPolicies(const Model::DeleteAutoBackupPoliciesRequest &request);
                void DeleteAutoBackupPoliciesAsync(const Model::DeleteAutoBackupPoliciesRequest& request, const DeleteAutoBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoBackupPoliciesOutcomeCallable DeleteAutoBackupPoliciesCallable(const Model::DeleteAutoBackupPoliciesRequest& request);

                /**
                 *删除备份组
                 * @param req DeleteBackupGroupsRequest
                 * @return DeleteBackupGroupsOutcome
                 */
                DeleteBackupGroupsOutcome DeleteBackupGroups(const Model::DeleteBackupGroupsRequest &request);
                void DeleteBackupGroupsAsync(const Model::DeleteBackupGroupsRequest& request, const DeleteBackupGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupGroupsOutcomeCallable DeleteBackupGroupsCallable(const Model::DeleteBackupGroupsRequest& request);

                /**
                 *删除备份库
                 * @param req DeleteBackupVaultsRequest
                 * @return DeleteBackupVaultsOutcome
                 */
                DeleteBackupVaultsOutcome DeleteBackupVaults(const Model::DeleteBackupVaultsRequest &request);
                void DeleteBackupVaultsAsync(const Model::DeleteBackupVaultsRequest& request, const DeleteBackupVaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupVaultsOutcomeCallable DeleteBackupVaultsCallable(const Model::DeleteBackupVaultsRequest& request);

                /**
                 *本接口用于删除容灾复制对
                 * @param req DeleteCopyPairsRequest
                 * @return DeleteCopyPairsOutcome
                 */
                DeleteCopyPairsOutcome DeleteCopyPairs(const Model::DeleteCopyPairsRequest &request);
                void DeleteCopyPairsAsync(const Model::DeleteCopyPairsRequest& request, const DeleteCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCopyPairsOutcomeCallable DeleteCopyPairsCallable(const Model::DeleteCopyPairsRequest& request);

                /**
                 *本接口用于删除容灾保护组
                 * @param req DeleteDisasterRecoveryProtectGroupsRequest
                 * @return DeleteDisasterRecoveryProtectGroupsOutcome
                 */
                DeleteDisasterRecoveryProtectGroupsOutcome DeleteDisasterRecoveryProtectGroups(const Model::DeleteDisasterRecoveryProtectGroupsRequest &request);
                void DeleteDisasterRecoveryProtectGroupsAsync(const Model::DeleteDisasterRecoveryProtectGroupsRequest& request, const DeleteDisasterRecoveryProtectGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDisasterRecoveryProtectGroupsOutcomeCallable DeleteDisasterRecoveryProtectGroupsCallable(const Model::DeleteDisasterRecoveryProtectGroupsRequest& request);

                /**
                 *删除容灾站点对
                 * @param req DeleteDisasterRecoverySitePairsRequest
                 * @return DeleteDisasterRecoverySitePairsOutcome
                 */
                DeleteDisasterRecoverySitePairsOutcome DeleteDisasterRecoverySitePairs(const Model::DeleteDisasterRecoverySitePairsRequest &request);
                void DeleteDisasterRecoverySitePairsAsync(const Model::DeleteDisasterRecoverySitePairsRequest& request, const DeleteDisasterRecoverySitePairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDisasterRecoverySitePairsOutcomeCallable DeleteDisasterRecoverySitePairsCallable(const Model::DeleteDisasterRecoverySitePairsRequest& request);

                /**
                 *本接口用于删除容灾站点对vpc映射信息
                 * @param req DeleteDisasterRecoveryVpcMappingRequest
                 * @return DeleteDisasterRecoveryVpcMappingOutcome
                 */
                DeleteDisasterRecoveryVpcMappingOutcome DeleteDisasterRecoveryVpcMapping(const Model::DeleteDisasterRecoveryVpcMappingRequest &request);
                void DeleteDisasterRecoveryVpcMappingAsync(const Model::DeleteDisasterRecoveryVpcMappingRequest& request, const DeleteDisasterRecoveryVpcMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDisasterRecoveryVpcMappingOutcomeCallable DeleteDisasterRecoveryVpcMappingCallable(const Model::DeleteDisasterRecoveryVpcMappingRequest& request);

                /**
                 *删除演练对/演练组
                 * @param req DeleteDrillPairsRequest
                 * @return DeleteDrillPairsOutcome
                 */
                DeleteDrillPairsOutcome DeleteDrillPairs(const Model::DeleteDrillPairsRequest &request);
                void DeleteDrillPairsAsync(const Model::DeleteDrillPairsRequest& request, const DeleteDrillPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDrillPairsOutcomeCallable DeleteDrillPairsCallable(const Model::DeleteDrillPairsRequest& request);

                /**
                 *删除备份计划
                 * @param req DeleteFileBackupPlansRequest
                 * @return DeleteFileBackupPlansOutcome
                 */
                DeleteFileBackupPlansOutcome DeleteFileBackupPlans(const Model::DeleteFileBackupPlansRequest &request);
                void DeleteFileBackupPlansAsync(const Model::DeleteFileBackupPlansRequest& request, const DeleteFileBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileBackupPlansOutcomeCallable DeleteFileBackupPlansCallable(const Model::DeleteFileBackupPlansRequest& request);

                /**
                 *删除文件备份点
                 * @param req DeleteFileBackupsRequest
                 * @return DeleteFileBackupsOutcome
                 */
                DeleteFileBackupsOutcome DeleteFileBackups(const Model::DeleteFileBackupsRequest &request);
                void DeleteFileBackupsAsync(const Model::DeleteFileBackupsRequest& request, const DeleteFileBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileBackupsOutcomeCallable DeleteFileBackupsCallable(const Model::DeleteFileBackupsRequest& request);

                /**
                 *本接口用于删除站点对已添加的安全组映射
                 * @param req DeleteSecurityGroupMappingRequest
                 * @return DeleteSecurityGroupMappingOutcome
                 */
                DeleteSecurityGroupMappingOutcome DeleteSecurityGroupMapping(const Model::DeleteSecurityGroupMappingRequest &request);
                void DeleteSecurityGroupMappingAsync(const Model::DeleteSecurityGroupMappingRequest& request, const DeleteSecurityGroupMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupMappingOutcomeCallable DeleteSecurityGroupMappingCallable(const Model::DeleteSecurityGroupMappingRequest& request);

                /**
                 *查询定期备份策略列表
                 * @param req DescribeAutoBackupPoliciesRequest
                 * @return DescribeAutoBackupPoliciesOutcome
                 */
                DescribeAutoBackupPoliciesOutcome DescribeAutoBackupPolicies(const Model::DescribeAutoBackupPoliciesRequest &request);
                void DescribeAutoBackupPoliciesAsync(const Model::DescribeAutoBackupPoliciesRequest& request, const DescribeAutoBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoBackupPoliciesOutcomeCallable DescribeAutoBackupPoliciesCallable(const Model::DescribeAutoBackupPoliciesRequest& request);

                /**
                 *查询备份组恢复任务详情
                 * @param req DescribeBackupGroupRollbackTasksRequest
                 * @return DescribeBackupGroupRollbackTasksOutcome
                 */
                DescribeBackupGroupRollbackTasksOutcome DescribeBackupGroupRollbackTasks(const Model::DescribeBackupGroupRollbackTasksRequest &request);
                void DescribeBackupGroupRollbackTasksAsync(const Model::DescribeBackupGroupRollbackTasksRequest& request, const DescribeBackupGroupRollbackTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupGroupRollbackTasksOutcomeCallable DescribeBackupGroupRollbackTasksCallable(const Model::DescribeBackupGroupRollbackTasksRequest& request);

                /**
                 *查询备份组列表
                 * @param req DescribeBackupGroupsRequest
                 * @return DescribeBackupGroupsOutcome
                 */
                DescribeBackupGroupsOutcome DescribeBackupGroups(const Model::DescribeBackupGroupsRequest &request);
                void DescribeBackupGroupsAsync(const Model::DescribeBackupGroupsRequest& request, const DescribeBackupGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupGroupsOutcomeCallable DescribeBackupGroupsCallable(const Model::DescribeBackupGroupsRequest& request);

                /**
                 *查询操作掩码
                 * @param req DescribeBackupGroupsDeniedActionsRequest
                 * @return DescribeBackupGroupsDeniedActionsOutcome
                 */
                DescribeBackupGroupsDeniedActionsOutcome DescribeBackupGroupsDeniedActions(const Model::DescribeBackupGroupsDeniedActionsRequest &request);
                void DescribeBackupGroupsDeniedActionsAsync(const Model::DescribeBackupGroupsDeniedActionsRequest& request, const DescribeBackupGroupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupGroupsDeniedActionsOutcomeCallable DescribeBackupGroupsDeniedActionsCallable(const Model::DescribeBackupGroupsDeniedActionsRequest& request);

                /**
                 *本接口用来浏览已有受保护实例列表
                 * @param req DescribeBackupInstancesRequest
                 * @return DescribeBackupInstancesOutcome
                 */
                DescribeBackupInstancesOutcome DescribeBackupInstances(const Model::DescribeBackupInstancesRequest &request);
                void DescribeBackupInstancesAsync(const Model::DescribeBackupInstancesRequest& request, const DescribeBackupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupInstancesOutcomeCallable DescribeBackupInstancesCallable(const Model::DescribeBackupInstancesRequest& request);

                /**
                 *查询备份概览信息
                 * @param req DescribeBackupOverviewGeneralRequest
                 * @return DescribeBackupOverviewGeneralOutcome
                 */
                DescribeBackupOverviewGeneralOutcome DescribeBackupOverviewGeneral(const Model::DescribeBackupOverviewGeneralRequest &request);
                void DescribeBackupOverviewGeneralAsync(const Model::DescribeBackupOverviewGeneralRequest& request, const DescribeBackupOverviewGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupOverviewGeneralOutcomeCallable DescribeBackupOverviewGeneralCallable(const Model::DescribeBackupOverviewGeneralRequest& request);

                /**
                 *查询整机备份计划
                 * @param req DescribeBackupPlansRequest
                 * @return DescribeBackupPlansOutcome
                 */
                DescribeBackupPlansOutcome DescribeBackupPlans(const Model::DescribeBackupPlansRequest &request);
                void DescribeBackupPlansAsync(const Model::DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupPlansOutcomeCallable DescribeBackupPlansCallable(const Model::DescribeBackupPlansRequest& request);

                /**
                 *查询备份库信息
                 * @param req DescribeBackupVaultsRequest
                 * @return DescribeBackupVaultsOutcome
                 */
                DescribeBackupVaultsOutcome DescribeBackupVaults(const Model::DescribeBackupVaultsRequest &request);
                void DescribeBackupVaultsAsync(const Model::DescribeBackupVaultsRequest& request, const DescribeBackupVaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupVaultsOutcomeCallable DescribeBackupVaultsCallable(const Model::DescribeBackupVaultsRequest& request);

                /**
                 *查询备份库操作掩码
                 * @param req DescribeBackupVaultsDeniedActionsRequest
                 * @return DescribeBackupVaultsDeniedActionsOutcome
                 */
                DescribeBackupVaultsDeniedActionsOutcome DescribeBackupVaultsDeniedActions(const Model::DescribeBackupVaultsDeniedActionsRequest &request);
                void DescribeBackupVaultsDeniedActionsAsync(const Model::DescribeBackupVaultsDeniedActionsRequest& request, const DescribeBackupVaultsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupVaultsDeniedActionsOutcomeCallable DescribeBackupVaultsDeniedActionsCallable(const Model::DescribeBackupVaultsDeniedActionsRequest& request);

                /**
                 *查询共同备份点信息
                 * @param req DescribeCommonBackupPointsRequest
                 * @return DescribeCommonBackupPointsOutcome
                 */
                DescribeCommonBackupPointsOutcome DescribeCommonBackupPoints(const Model::DescribeCommonBackupPointsRequest &request);
                void DescribeCommonBackupPointsAsync(const Model::DescribeCommonBackupPointsRequest& request, const DescribeCommonBackupPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCommonBackupPointsOutcomeCallable DescribeCommonBackupPointsCallable(const Model::DescribeCommonBackupPointsRequest& request);

                /**
                 *本接口用来查询容灾复制对
                 * @param req DescribeCopyPairsRequest
                 * @return DescribeCopyPairsOutcome
                 */
                DescribeCopyPairsOutcome DescribeCopyPairs(const Model::DescribeCopyPairsRequest &request);
                void DescribeCopyPairsAsync(const Model::DescribeCopyPairsRequest& request, const DescribeCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCopyPairsOutcomeCallable DescribeCopyPairsCallable(const Model::DescribeCopyPairsRequest& request);

                /**
                 *查询复制对掩码
                 * @param req DescribeCopyPairsDeniedActionsRequest
                 * @return DescribeCopyPairsDeniedActionsOutcome
                 */
                DescribeCopyPairsDeniedActionsOutcome DescribeCopyPairsDeniedActions(const Model::DescribeCopyPairsDeniedActionsRequest &request);
                void DescribeCopyPairsDeniedActionsAsync(const Model::DescribeCopyPairsDeniedActionsRequest& request, const DescribeCopyPairsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCopyPairsDeniedActionsOutcomeCallable DescribeCopyPairsDeniedActionsCallable(const Model::DescribeCopyPairsDeniedActionsRequest& request);

                /**
                 *本接口用来查询容灾复制对
                 * @param req DescribeDisasterRecoveryDrillGroupsRequest
                 * @return DescribeDisasterRecoveryDrillGroupsOutcome
                 */
                DescribeDisasterRecoveryDrillGroupsOutcome DescribeDisasterRecoveryDrillGroups(const Model::DescribeDisasterRecoveryDrillGroupsRequest &request);
                void DescribeDisasterRecoveryDrillGroupsAsync(const Model::DescribeDisasterRecoveryDrillGroupsRequest& request, const DescribeDisasterRecoveryDrillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoveryDrillGroupsOutcomeCallable DescribeDisasterRecoveryDrillGroupsCallable(const Model::DescribeDisasterRecoveryDrillGroupsRequest& request);

                /**
                 *查询容灾资源概览
                 * @param req DescribeDisasterRecoveryOverviewRequest
                 * @return DescribeDisasterRecoveryOverviewOutcome
                 */
                DescribeDisasterRecoveryOverviewOutcome DescribeDisasterRecoveryOverview(const Model::DescribeDisasterRecoveryOverviewRequest &request);
                void DescribeDisasterRecoveryOverviewAsync(const Model::DescribeDisasterRecoveryOverviewRequest& request, const DescribeDisasterRecoveryOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoveryOverviewOutcomeCallable DescribeDisasterRecoveryOverviewCallable(const Model::DescribeDisasterRecoveryOverviewRequest& request);

                /**
                 *本接口用来查询容灾保护组
                 * @param req DescribeDisasterRecoveryProtectGroupsRequest
                 * @return DescribeDisasterRecoveryProtectGroupsOutcome
                 */
                DescribeDisasterRecoveryProtectGroupsOutcome DescribeDisasterRecoveryProtectGroups(const Model::DescribeDisasterRecoveryProtectGroupsRequest &request);
                void DescribeDisasterRecoveryProtectGroupsAsync(const Model::DescribeDisasterRecoveryProtectGroupsRequest& request, const DescribeDisasterRecoveryProtectGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoveryProtectGroupsOutcomeCallable DescribeDisasterRecoveryProtectGroupsCallable(const Model::DescribeDisasterRecoveryProtectGroupsRequest& request);

                /**
                 *本接口用来查询容灾站点对
                 * @param req DescribeDisasterRecoverySitePairsRequest
                 * @return DescribeDisasterRecoverySitePairsOutcome
                 */
                DescribeDisasterRecoverySitePairsOutcome DescribeDisasterRecoverySitePairs(const Model::DescribeDisasterRecoverySitePairsRequest &request);
                void DescribeDisasterRecoverySitePairsAsync(const Model::DescribeDisasterRecoverySitePairsRequest& request, const DescribeDisasterRecoverySitePairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverySitePairsOutcomeCallable DescribeDisasterRecoverySitePairsCallable(const Model::DescribeDisasterRecoverySitePairsRequest& request);

                /**
                 *查询指定容灾站点对当前不允许执行的操作列表（操作掩码）。前端在展示容灾策略操作菜单时，可基于该接口返回结果灰化或屏蔽相应入口，并向用户提示原因（错误码 + 错误信息）。
                 * @param req DescribeDisasterRecoverySitePairsDeniedActionsRequest
                 * @return DescribeDisasterRecoverySitePairsDeniedActionsOutcome
                 */
                DescribeDisasterRecoverySitePairsDeniedActionsOutcome DescribeDisasterRecoverySitePairsDeniedActions(const Model::DescribeDisasterRecoverySitePairsDeniedActionsRequest &request);
                void DescribeDisasterRecoverySitePairsDeniedActionsAsync(const Model::DescribeDisasterRecoverySitePairsDeniedActionsRequest& request, const DescribeDisasterRecoverySitePairsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverySitePairsDeniedActionsOutcomeCallable DescribeDisasterRecoverySitePairsDeniedActionsCallable(const Model::DescribeDisasterRecoverySitePairsDeniedActionsRequest& request);

                /**
                 *查询当前地域支持容灾的生产地域配置列表
                 * @param req DescribeDisasterRecoverySupportRegionRequest
                 * @return DescribeDisasterRecoverySupportRegionOutcome
                 */
                DescribeDisasterRecoverySupportRegionOutcome DescribeDisasterRecoverySupportRegion(const Model::DescribeDisasterRecoverySupportRegionRequest &request);
                void DescribeDisasterRecoverySupportRegionAsync(const Model::DescribeDisasterRecoverySupportRegionRequest& request, const DescribeDisasterRecoverySupportRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverySupportRegionOutcomeCallable DescribeDisasterRecoverySupportRegionCallable(const Model::DescribeDisasterRecoverySupportRegionRequest& request);

                /**
                 *本接口用来查询容灾云硬盘的详情，如系统盘的镜像格式。
                 * @param req DescribeDisksRequest
                 * @return DescribeDisksOutcome
                 */
                DescribeDisksOutcome DescribeDisks(const Model::DescribeDisksRequest &request);
                void DescribeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksOutcomeCallable DescribeDisksCallable(const Model::DescribeDisksRequest& request);

                /**
                 *查询演练对列表
                 * @param req DescribeDrillPairsRequest
                 * @return DescribeDrillPairsOutcome
                 */
                DescribeDrillPairsOutcome DescribeDrillPairs(const Model::DescribeDrillPairsRequest &request);
                void DescribeDrillPairsAsync(const Model::DescribeDrillPairsRequest& request, const DescribeDrillPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrillPairsOutcomeCallable DescribeDrillPairsCallable(const Model::DescribeDrillPairsRequest& request);

                /**
                 *查询演练操作掩码
                 * @param req DescribeDrillPairsDeniedActionsRequest
                 * @return DescribeDrillPairsDeniedActionsOutcome
                 */
                DescribeDrillPairsDeniedActionsOutcome DescribeDrillPairsDeniedActions(const Model::DescribeDrillPairsDeniedActionsRequest &request);
                void DescribeDrillPairsDeniedActionsAsync(const Model::DescribeDrillPairsDeniedActionsRequest& request, const DescribeDrillPairsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrillPairsDeniedActionsOutcomeCallable DescribeDrillPairsDeniedActionsCallable(const Model::DescribeDrillPairsDeniedActionsRequest& request);

                /**
                 *本接口用来浏览已有备份目录/文件内容
                 * @param req DescribeFileBackupObjectsRequest
                 * @return DescribeFileBackupObjectsOutcome
                 */
                DescribeFileBackupObjectsOutcome DescribeFileBackupObjects(const Model::DescribeFileBackupObjectsRequest &request);
                void DescribeFileBackupObjectsAsync(const Model::DescribeFileBackupObjectsRequest& request, const DescribeFileBackupObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileBackupObjectsOutcomeCallable DescribeFileBackupObjectsCallable(const Model::DescribeFileBackupObjectsRequest& request);

                /**
                 *本接口用来浏览已有备份计划内容
                 * @param req DescribeFileBackupPlansRequest
                 * @return DescribeFileBackupPlansOutcome
                 */
                DescribeFileBackupPlansOutcome DescribeFileBackupPlans(const Model::DescribeFileBackupPlansRequest &request);
                void DescribeFileBackupPlansAsync(const Model::DescribeFileBackupPlansRequest& request, const DescribeFileBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileBackupPlansOutcomeCallable DescribeFileBackupPlansCallable(const Model::DescribeFileBackupPlansRequest& request);

                /**
                 *本接口用来浏览已有备份点详情
                 * @param req DescribeFileBackupsRequest
                 * @return DescribeFileBackupsOutcome
                 */
                DescribeFileBackupsOutcome DescribeFileBackups(const Model::DescribeFileBackupsRequest &request);
                void DescribeFileBackupsAsync(const Model::DescribeFileBackupsRequest& request, const DescribeFileBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileBackupsOutcomeCallable DescribeFileBackupsCallable(const Model::DescribeFileBackupsRequest& request);

                /**
                 *本接口用来查询备份操作掩码
                 * @param req DescribeFileBackupsDeniedActionsRequest
                 * @return DescribeFileBackupsDeniedActionsOutcome
                 */
                DescribeFileBackupsDeniedActionsOutcome DescribeFileBackupsDeniedActions(const Model::DescribeFileBackupsDeniedActionsRequest &request);
                void DescribeFileBackupsDeniedActionsAsync(const Model::DescribeFileBackupsDeniedActionsRequest& request, const DescribeFileBackupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileBackupsDeniedActionsOutcomeCallable DescribeFileBackupsDeniedActionsCallable(const Model::DescribeFileBackupsDeniedActionsRequest& request);

                /**
                 *查询备份恢复任务列表
                 * @param req DescribeFileRestoreTasksRequest
                 * @return DescribeFileRestoreTasksOutcome
                 */
                DescribeFileRestoreTasksOutcome DescribeFileRestoreTasks(const Model::DescribeFileRestoreTasksRequest &request);
                void DescribeFileRestoreTasksAsync(const Model::DescribeFileRestoreTasksRequest& request, const DescribeFileRestoreTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileRestoreTasksOutcomeCallable DescribeFileRestoreTasksCallable(const Model::DescribeFileRestoreTasksRequest& request);

                /**
                 *本接口用于Agent查询相关Agent任务信息
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *本接口（DescribePriceCreateCopyPairs）用于查询创建容灾复制对的价格。支持批量询价，入参为每个复制对的盘容量数组，返回与入参一一对应的后付费每小时价格。
                 * @param req DescribePriceCreateCopyPairsRequest
                 * @return DescribePriceCreateCopyPairsOutcome
                 */
                DescribePriceCreateCopyPairsOutcome DescribePriceCreateCopyPairs(const Model::DescribePriceCreateCopyPairsRequest &request);
                void DescribePriceCreateCopyPairsAsync(const Model::DescribePriceCreateCopyPairsRequest& request, const DescribePriceCreateCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePriceCreateCopyPairsOutcomeCallable DescribePriceCreateCopyPairsCallable(const Model::DescribePriceCreateCopyPairsRequest& request);

                /**
                 *查询保护组操作掩码
                 * @param req DescribeProtectGroupsDeniedActionsRequest
                 * @return DescribeProtectGroupsDeniedActionsOutcome
                 */
                DescribeProtectGroupsDeniedActionsOutcome DescribeProtectGroupsDeniedActions(const Model::DescribeProtectGroupsDeniedActionsRequest &request);
                void DescribeProtectGroupsDeniedActionsAsync(const Model::DescribeProtectGroupsDeniedActionsRequest& request, const DescribeProtectGroupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectGroupsDeniedActionsOutcomeCallable DescribeProtectGroupsDeniedActionsCallable(const Model::DescribeProtectGroupsDeniedActionsRequest& request);

                /**
                 *本接口用来浏览已有受保护实例列表
                 * @param req DescribeProtectedInstancesRequest
                 * @return DescribeProtectedInstancesOutcome
                 */
                DescribeProtectedInstancesOutcome DescribeProtectedInstances(const Model::DescribeProtectedInstancesRequest &request);
                void DescribeProtectedInstancesAsync(const Model::DescribeProtectedInstancesRequest& request, const DescribeProtectedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectedInstancesOutcomeCallable DescribeProtectedInstancesCallable(const Model::DescribeProtectedInstancesRequest& request);

                /**
                 *本接口用于查询安全组映射列表
                 * @param req DescribeSecurityGroupMappingsRequest
                 * @return DescribeSecurityGroupMappingsOutcome
                 */
                DescribeSecurityGroupMappingsOutcome DescribeSecurityGroupMappings(const Model::DescribeSecurityGroupMappingsRequest &request);
                void DescribeSecurityGroupMappingsAsync(const Model::DescribeSecurityGroupMappingsRequest& request, const DescribeSecurityGroupMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupMappingsOutcomeCallable DescribeSecurityGroupMappingsCallable(const Model::DescribeSecurityGroupMappingsRequest& request);

                /**
                 *本接口用来查询站点对的vpc映射信息
                 * @param req DescribeVpcMappingsRequest
                 * @return DescribeVpcMappingsOutcome
                 */
                DescribeVpcMappingsOutcome DescribeVpcMappings(const Model::DescribeVpcMappingsRequest &request);
                void DescribeVpcMappingsAsync(const Model::DescribeVpcMappingsRequest& request, const DescribeVpcMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcMappingsOutcomeCallable DescribeVpcMappingsCallable(const Model::DescribeVpcMappingsRequest& request);

                /**
                 *完成切换
                 * @param req FinishFailoverCopyPairsRequest
                 * @return FinishFailoverCopyPairsOutcome
                 */
                FinishFailoverCopyPairsOutcome FinishFailoverCopyPairs(const Model::FinishFailoverCopyPairsRequest &request);
                void FinishFailoverCopyPairsAsync(const Model::FinishFailoverCopyPairsRequest& request, const FinishFailoverCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FinishFailoverCopyPairsOutcomeCallable FinishFailoverCopyPairsCallable(const Model::FinishFailoverCopyPairsRequest& request);

                /**
                 *修改备份策略
                 * @param req ModifyAutoBackupPolicyAttributeRequest
                 * @return ModifyAutoBackupPolicyAttributeOutcome
                 */
                ModifyAutoBackupPolicyAttributeOutcome ModifyAutoBackupPolicyAttribute(const Model::ModifyAutoBackupPolicyAttributeRequest &request);
                void ModifyAutoBackupPolicyAttributeAsync(const Model::ModifyAutoBackupPolicyAttributeRequest& request, const ModifyAutoBackupPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoBackupPolicyAttributeOutcomeCallable ModifyAutoBackupPolicyAttributeCallable(const Model::ModifyAutoBackupPolicyAttributeRequest& request);

                /**
                 *删除备份组
                 * @param req ModifyBackupAttributeRequest
                 * @return ModifyBackupAttributeOutcome
                 */
                ModifyBackupAttributeOutcome ModifyBackupAttribute(const Model::ModifyBackupAttributeRequest &request);
                void ModifyBackupAttributeAsync(const Model::ModifyBackupAttributeRequest& request, const ModifyBackupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupAttributeOutcomeCallable ModifyBackupAttributeCallable(const Model::ModifyBackupAttributeRequest& request);

                /**
                 *修改备份库信息
                 * @param req ModifyBackupVaultAttributeRequest
                 * @return ModifyBackupVaultAttributeOutcome
                 */
                ModifyBackupVaultAttributeOutcome ModifyBackupVaultAttribute(const Model::ModifyBackupVaultAttributeRequest &request);
                void ModifyBackupVaultAttributeAsync(const Model::ModifyBackupVaultAttributeRequest& request, const ModifyBackupVaultAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupVaultAttributeOutcomeCallable ModifyBackupVaultAttributeCallable(const Model::ModifyBackupVaultAttributeRequest& request);

                /**
                 *修改容灾复制对
                 * @param req ModifyCopyPairAttributeRequest
                 * @return ModifyCopyPairAttributeOutcome
                 */
                ModifyCopyPairAttributeOutcome ModifyCopyPairAttribute(const Model::ModifyCopyPairAttributeRequest &request);
                void ModifyCopyPairAttributeAsync(const Model::ModifyCopyPairAttributeRequest& request, const ModifyCopyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCopyPairAttributeOutcomeCallable ModifyCopyPairAttributeCallable(const Model::ModifyCopyPairAttributeRequest& request);

                /**
                 *修改演练组
                 * @param req ModifyDrillGroupAttributeRequest
                 * @return ModifyDrillGroupAttributeOutcome
                 */
                ModifyDrillGroupAttributeOutcome ModifyDrillGroupAttribute(const Model::ModifyDrillGroupAttributeRequest &request);
                void ModifyDrillGroupAttributeAsync(const Model::ModifyDrillGroupAttributeRequest& request, const ModifyDrillGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDrillGroupAttributeOutcomeCallable ModifyDrillGroupAttributeCallable(const Model::ModifyDrillGroupAttributeRequest& request);

                /**
                 *修改演练
                 * @param req ModifyDrillPairAttributeRequest
                 * @return ModifyDrillPairAttributeOutcome
                 */
                ModifyDrillPairAttributeOutcome ModifyDrillPairAttribute(const Model::ModifyDrillPairAttributeRequest &request);
                void ModifyDrillPairAttributeAsync(const Model::ModifyDrillPairAttributeRequest& request, const ModifyDrillPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDrillPairAttributeOutcomeCallable ModifyDrillPairAttributeCallable(const Model::ModifyDrillPairAttributeRequest& request);

                /**
                 *修改文件备份信息
                 * @param req ModifyFileBackupAttributeRequest
                 * @return ModifyFileBackupAttributeOutcome
                 */
                ModifyFileBackupAttributeOutcome ModifyFileBackupAttribute(const Model::ModifyFileBackupAttributeRequest &request);
                void ModifyFileBackupAttributeAsync(const Model::ModifyFileBackupAttributeRequest& request, const ModifyFileBackupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileBackupAttributeOutcomeCallable ModifyFileBackupAttributeCallable(const Model::ModifyFileBackupAttributeRequest& request);

                /**
                 *本接口用于修改已有的备份计划配置
                 * @param req ModifyFileBackupPlanRequest
                 * @return ModifyFileBackupPlanOutcome
                 */
                ModifyFileBackupPlanOutcome ModifyFileBackupPlan(const Model::ModifyFileBackupPlanRequest &request);
                void ModifyFileBackupPlanAsync(const Model::ModifyFileBackupPlanRequest& request, const ModifyFileBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileBackupPlanOutcomeCallable ModifyFileBackupPlanCallable(const Model::ModifyFileBackupPlanRequest& request);

                /**
                 *修改容灾保护组
                 * @param req ModifyProtectGroupAttributeRequest
                 * @return ModifyProtectGroupAttributeOutcome
                 */
                ModifyProtectGroupAttributeOutcome ModifyProtectGroupAttribute(const Model::ModifyProtectGroupAttributeRequest &request);
                void ModifyProtectGroupAttributeAsync(const Model::ModifyProtectGroupAttributeRequest& request, const ModifyProtectGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectGroupAttributeOutcomeCallable ModifyProtectGroupAttributeCallable(const Model::ModifyProtectGroupAttributeRequest& request);

                /**
                 *修改容灾站点对
                 * @param req ModifySitePairAttributeRequest
                 * @return ModifySitePairAttributeOutcome
                 */
                ModifySitePairAttributeOutcome ModifySitePairAttribute(const Model::ModifySitePairAttributeRequest &request);
                void ModifySitePairAttributeAsync(const Model::ModifySitePairAttributeRequest& request, const ModifySitePairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySitePairAttributeOutcomeCallable ModifySitePairAttributeCallable(const Model::ModifySitePairAttributeRequest& request);

                /**
                 *本接口用于上报Agent指标信息
                 * @param req ReportAgentMetricsRequest
                 * @return ReportAgentMetricsOutcome
                 */
                ReportAgentMetricsOutcome ReportAgentMetrics(const Model::ReportAgentMetricsRequest &request);
                void ReportAgentMetricsAsync(const Model::ReportAgentMetricsRequest& request, const ReportAgentMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportAgentMetricsOutcomeCallable ReportAgentMetricsCallable(const Model::ReportAgentMetricsRequest& request);

                /**
                 *本接口用于Agent心跳上报
                 * @param req ReportGatewayHeartbeatRequest
                 * @return ReportGatewayHeartbeatOutcome
                 */
                ReportGatewayHeartbeatOutcome ReportGatewayHeartbeat(const Model::ReportGatewayHeartbeatRequest &request);
                void ReportGatewayHeartbeatAsync(const Model::ReportGatewayHeartbeatRequest& request, const ReportGatewayHeartbeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportGatewayHeartbeatOutcomeCallable ReportGatewayHeartbeatCallable(const Model::ReportGatewayHeartbeatRequest& request);

                /**
                 *本接口用于上报Agent任务信息
                 * @param req ReportJobProgressRequest
                 * @return ReportJobProgressOutcome
                 */
                ReportJobProgressOutcome ReportJobProgress(const Model::ReportJobProgressRequest &request);
                void ReportJobProgressAsync(const Model::ReportJobProgressRequest& request, const ReportJobProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportJobProgressOutcomeCallable ReportJobProgressCallable(const Model::ReportJobProgressRequest& request);

                /**
                 *启动复制对
                 * @param req RunCopyPairTasksRequest
                 * @return RunCopyPairTasksOutcome
                 */
                RunCopyPairTasksOutcome RunCopyPairTasks(const Model::RunCopyPairTasksRequest &request);
                void RunCopyPairTasksAsync(const Model::RunCopyPairTasksRequest& request, const RunCopyPairTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunCopyPairTasksOutcomeCallable RunCopyPairTasksCallable(const Model::RunCopyPairTasksRequest& request);

                /**
                 *故障切换
                 * @param req RunFailoverCopyPairsRequest
                 * @return RunFailoverCopyPairsOutcome
                 */
                RunFailoverCopyPairsOutcome RunFailoverCopyPairs(const Model::RunFailoverCopyPairsRequest &request);
                void RunFailoverCopyPairsAsync(const Model::RunFailoverCopyPairsRequest& request, const RunFailoverCopyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunFailoverCopyPairsOutcomeCallable RunFailoverCopyPairsCallable(const Model::RunFailoverCopyPairsRequest& request);

                /**
                 *备份组新建云服务器
                 * @param req RunInstancesWithBackupGroupRequest
                 * @return RunInstancesWithBackupGroupOutcome
                 */
                RunInstancesWithBackupGroupOutcome RunInstancesWithBackupGroup(const Model::RunInstancesWithBackupGroupRequest &request);
                void RunInstancesWithBackupGroupAsync(const Model::RunInstancesWithBackupGroupRequest& request, const RunInstancesWithBackupGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesWithBackupGroupOutcomeCallable RunInstancesWithBackupGroupCallable(const Model::RunInstancesWithBackupGroupRequest& request);

                /**
                 *停止复制对
                 * @param req StopCopyPairTasksRequest
                 * @return StopCopyPairTasksOutcome
                 */
                StopCopyPairTasksOutcome StopCopyPairTasks(const Model::StopCopyPairTasksRequest &request);
                void StopCopyPairTasksAsync(const Model::StopCopyPairTasksRequest& request, const StopCopyPairTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCopyPairTasksOutcomeCallable StopCopyPairTasksCallable(const Model::StopCopyPairTasksRequest& request);

                /**
                 *将实例从备份策略上解绑
                 * @param req UnbindAutoBackupPolicyRequest
                 * @return UnbindAutoBackupPolicyOutcome
                 */
                UnbindAutoBackupPolicyOutcome UnbindAutoBackupPolicy(const Model::UnbindAutoBackupPolicyRequest &request);
                void UnbindAutoBackupPolicyAsync(const Model::UnbindAutoBackupPolicyRequest& request, const UnbindAutoBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindAutoBackupPolicyOutcomeCallable UnbindAutoBackupPolicyCallable(const Model::UnbindAutoBackupPolicyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_BDRCCLIENT_H_
