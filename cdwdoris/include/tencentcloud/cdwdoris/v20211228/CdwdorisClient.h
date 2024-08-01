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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwdoris/v20211228/model/CancelBackupJobRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CancelBackupJobResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateBackUpScheduleRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateBackUpScheduleResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteBackUpDataRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteBackUpDataResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeAreaRegionRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeAreaRegionResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpSchedulesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpSchedulesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTablesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTablesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTaskDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTaskDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsHistoryRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsHistoryResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditResourceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditResourceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDmsSqlHistoryRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDmsSqlHistoryResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDorisMetricFilesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDorisMetricFilesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeFederationTokenRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeFederationTokenResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeFrontEndRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeFrontEndResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeGoodsDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeGoodsDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRoleRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRoleResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceOperationsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceOperationsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceUsedSubnetsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceUsedSubnetsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesHealthStateRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesHealthStateResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeRegionZoneRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeRegionZoneResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeReplicaVersionRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeReplicaVersionResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeRestoreTaskDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeRestoreTaskDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSpecRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSpecResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSqlApisRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSqlApisResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserBindWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserBindWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DestroyInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DestroyInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/FitClsLogRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/FitClsLogResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceKeyValConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceKeyValConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyNodeStatusRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyNodeStatusResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifySecurityGroupsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifySecurityGroupsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserBindWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserBindWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserPrivilegesV3Request.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserPrivilegesV3Response.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupStatusRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupStatusResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/OpenBackUpRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/OpenBackUpResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RecoverBackUpJobRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RecoverBackUpJobResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ReduceInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ReduceInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResizeDiskRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResizeDiskResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceResponse.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            class CdwdorisClient : public AbstractClient
            {
            public:
                CdwdorisClient(const Credential &credential, const std::string &region);
                CdwdorisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelBackupJobResponse> CancelBackupJobOutcome;
                typedef std::future<CancelBackupJobOutcome> CancelBackupJobOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CancelBackupJobRequest&, CancelBackupJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelBackupJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackUpScheduleResponse> CreateBackUpScheduleOutcome;
                typedef std::future<CreateBackUpScheduleOutcome> CreateBackUpScheduleOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateBackUpScheduleRequest&, CreateBackUpScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackUpScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceNewResponse> CreateInstanceNewOutcome;
                typedef std::future<CreateInstanceNewOutcome> CreateInstanceNewOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateInstanceNewRequest&, CreateInstanceNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceNewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkloadGroupResponse> CreateWorkloadGroupOutcome;
                typedef std::future<CreateWorkloadGroupOutcome> CreateWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateWorkloadGroupRequest&, CreateWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackUpDataResponse> DeleteBackUpDataOutcome;
                typedef std::future<DeleteBackUpDataOutcome> DeleteBackUpDataOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DeleteBackUpDataRequest&, DeleteBackUpDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackUpDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkloadGroupResponse> DeleteWorkloadGroupOutcome;
                typedef std::future<DeleteWorkloadGroupOutcome> DeleteWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DeleteWorkloadGroupRequest&, DeleteWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAreaRegionResponse> DescribeAreaRegionOutcome;
                typedef std::future<DescribeAreaRegionOutcome> DescribeAreaRegionOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeAreaRegionRequest&, DescribeAreaRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAreaRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpJobResponse> DescribeBackUpJobOutcome;
                typedef std::future<DescribeBackUpJobOutcome> DescribeBackUpJobOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpJobRequest&, DescribeBackUpJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpJobDetailResponse> DescribeBackUpJobDetailOutcome;
                typedef std::future<DescribeBackUpJobDetailOutcome> DescribeBackUpJobDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpJobDetailRequest&, DescribeBackUpJobDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpJobDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpSchedulesResponse> DescribeBackUpSchedulesOutcome;
                typedef std::future<DescribeBackUpSchedulesOutcome> DescribeBackUpSchedulesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpSchedulesRequest&, DescribeBackUpSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpTablesResponse> DescribeBackUpTablesOutcome;
                typedef std::future<DescribeBackUpTablesOutcome> DescribeBackUpTablesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpTablesRequest&, DescribeBackUpTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpTaskDetailResponse> DescribeBackUpTaskDetailOutcome;
                typedef std::future<DescribeBackUpTaskDetailOutcome> DescribeBackUpTaskDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpTaskDetailRequest&, DescribeBackUpTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterConfigsResponse> DescribeClusterConfigsOutcome;
                typedef std::future<DescribeClusterConfigsOutcome> DescribeClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeClusterConfigsRequest&, DescribeClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterConfigsHistoryResponse> DescribeClusterConfigsHistoryOutcome;
                typedef std::future<DescribeClusterConfigsHistoryOutcome> DescribeClusterConfigsHistoryOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeClusterConfigsHistoryRequest&, DescribeClusterConfigsHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConfigsHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditDownloadResponse> DescribeDatabaseAuditDownloadOutcome;
                typedef std::future<DescribeDatabaseAuditDownloadOutcome> DescribeDatabaseAuditDownloadOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditDownloadRequest&, DescribeDatabaseAuditDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditRecordsResponse> DescribeDatabaseAuditRecordsOutcome;
                typedef std::future<DescribeDatabaseAuditRecordsOutcome> DescribeDatabaseAuditRecordsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditRecordsRequest&, DescribeDatabaseAuditRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditResourceResponse> DescribeDatabaseAuditResourceOutcome;
                typedef std::future<DescribeDatabaseAuditResourceOutcome> DescribeDatabaseAuditResourceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditResourceRequest&, DescribeDatabaseAuditResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDmsSqlHistoryResponse> DescribeDmsSqlHistoryOutcome;
                typedef std::future<DescribeDmsSqlHistoryOutcome> DescribeDmsSqlHistoryOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDmsSqlHistoryRequest&, DescribeDmsSqlHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDmsSqlHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDorisMetricFilesResponse> DescribeDorisMetricFilesOutcome;
                typedef std::future<DescribeDorisMetricFilesOutcome> DescribeDorisMetricFilesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDorisMetricFilesRequest&, DescribeDorisMetricFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDorisMetricFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFederationTokenResponse> DescribeFederationTokenOutcome;
                typedef std::future<DescribeFederationTokenOutcome> DescribeFederationTokenOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeFederationTokenRequest&, DescribeFederationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFederationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFrontEndResponse> DescribeFrontEndOutcome;
                typedef std::future<DescribeFrontEndOutcome> DescribeFrontEndOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeFrontEndRequest&, DescribeFrontEndOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFrontEndAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGoodsDetailResponse> DescribeGoodsDetailOutcome;
                typedef std::future<DescribeGoodsDetailOutcome> DescribeGoodsDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeGoodsDetailRequest&, DescribeGoodsDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGoodsDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesInfoResponse> DescribeInstanceNodesInfoOutcome;
                typedef std::future<DescribeInstanceNodesInfoOutcome> DescribeInstanceNodesInfoOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesInfoRequest&, DescribeInstanceNodesInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesRoleResponse> DescribeInstanceNodesRoleOutcome;
                typedef std::future<DescribeInstanceNodesRoleOutcome> DescribeInstanceNodesRoleOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesRoleRequest&, DescribeInstanceNodesRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceOperationsResponse> DescribeInstanceOperationsOutcome;
                typedef std::future<DescribeInstanceOperationsOutcome> DescribeInstanceOperationsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceOperationsRequest&, DescribeInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStateResponse> DescribeInstanceStateOutcome;
                typedef std::future<DescribeInstanceStateOutcome> DescribeInstanceStateOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceStateRequest&, DescribeInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceUsedSubnetsResponse> DescribeInstanceUsedSubnetsOutcome;
                typedef std::future<DescribeInstanceUsedSubnetsOutcome> DescribeInstanceUsedSubnetsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceUsedSubnetsRequest&, DescribeInstanceUsedSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceUsedSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesHealthStateResponse> DescribeInstancesHealthStateOutcome;
                typedef std::future<DescribeInstancesHealthStateOutcome> DescribeInstancesHealthStateOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstancesHealthStateRequest&, DescribeInstancesHealthStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesHealthStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionZoneResponse> DescribeRegionZoneOutcome;
                typedef std::future<DescribeRegionZoneOutcome> DescribeRegionZoneOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeRegionZoneRequest&, DescribeRegionZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicaVersionResponse> DescribeReplicaVersionOutcome;
                typedef std::future<DescribeReplicaVersionOutcome> DescribeReplicaVersionOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeReplicaVersionRequest&, DescribeReplicaVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicaVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRestoreTaskDetailResponse> DescribeRestoreTaskDetailOutcome;
                typedef std::future<DescribeRestoreTaskDetailOutcome> DescribeRestoreTaskDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeRestoreTaskDetailRequest&, DescribeRestoreTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryRecordsResponse> DescribeSlowQueryRecordsOutcome;
                typedef std::future<DescribeSlowQueryRecordsOutcome> DescribeSlowQueryRecordsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSlowQueryRecordsRequest&, DescribeSlowQueryRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryRecordsDownloadResponse> DescribeSlowQueryRecordsDownloadOutcome;
                typedef std::future<DescribeSlowQueryRecordsDownloadOutcome> DescribeSlowQueryRecordsDownloadOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSlowQueryRecordsDownloadRequest&, DescribeSlowQueryRecordsDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryRecordsDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecResponse> DescribeSpecOutcome;
                typedef std::future<DescribeSpecOutcome> DescribeSpecOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSpecRequest&, DescribeSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSqlApisResponse> DescribeSqlApisOutcome;
                typedef std::future<DescribeSqlApisOutcome> DescribeSqlApisOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSqlApisRequest&, DescribeSqlApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserBindWorkloadGroupResponse> DescribeUserBindWorkloadGroupOutcome;
                typedef std::future<DescribeUserBindWorkloadGroupOutcome> DescribeUserBindWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeUserBindWorkloadGroupRequest&, DescribeUserBindWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBindWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkloadGroupResponse> DescribeWorkloadGroupOutcome;
                typedef std::future<DescribeWorkloadGroupOutcome> DescribeWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeWorkloadGroupRequest&, DescribeWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstanceResponse> DestroyInstanceOutcome;
                typedef std::future<DestroyInstanceOutcome> DestroyInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DestroyInstanceRequest&, DestroyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::FitClsLogResponse> FitClsLogOutcome;
                typedef std::future<FitClsLogOutcome> FitClsLogOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::FitClsLogRequest&, FitClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FitClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceKeyValConfigsResponse> ModifyInstanceKeyValConfigsOutcome;
                typedef std::future<ModifyInstanceKeyValConfigsOutcome> ModifyInstanceKeyValConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyInstanceKeyValConfigsRequest&, ModifyInstanceKeyValConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceKeyValConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodeStatusResponse> ModifyNodeStatusOutcome;
                typedef std::future<ModifyNodeStatusOutcome> ModifyNodeStatusOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyNodeStatusRequest&, ModifyNodeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupsResponse> ModifySecurityGroupsOutcome;
                typedef std::future<ModifySecurityGroupsOutcome> ModifySecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifySecurityGroupsRequest&, ModifySecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserBindWorkloadGroupResponse> ModifyUserBindWorkloadGroupOutcome;
                typedef std::future<ModifyUserBindWorkloadGroupOutcome> ModifyUserBindWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyUserBindWorkloadGroupRequest&, ModifyUserBindWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserBindWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserPrivilegesV3Response> ModifyUserPrivilegesV3Outcome;
                typedef std::future<ModifyUserPrivilegesV3Outcome> ModifyUserPrivilegesV3OutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyUserPrivilegesV3Request&, ModifyUserPrivilegesV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPrivilegesV3AsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkloadGroupResponse> ModifyWorkloadGroupOutcome;
                typedef std::future<ModifyWorkloadGroupOutcome> ModifyWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyWorkloadGroupRequest&, ModifyWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkloadGroupStatusResponse> ModifyWorkloadGroupStatusOutcome;
                typedef std::future<ModifyWorkloadGroupStatusOutcome> ModifyWorkloadGroupStatusOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyWorkloadGroupStatusRequest&, ModifyWorkloadGroupStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkloadGroupStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenBackUpResponse> OpenBackUpOutcome;
                typedef std::future<OpenBackUpOutcome> OpenBackUpOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::OpenBackUpRequest&, OpenBackUpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenBackUpAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverBackUpJobResponse> RecoverBackUpJobOutcome;
                typedef std::future<RecoverBackUpJobOutcome> RecoverBackUpJobOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RecoverBackUpJobRequest&, RecoverBackUpJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverBackUpJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ReduceInstanceResponse> ReduceInstanceOutcome;
                typedef std::future<ReduceInstanceOutcome> ReduceInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ReduceInstanceRequest&, ReduceInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReduceInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartClusterForConfigsResponse> RestartClusterForConfigsOutcome;
                typedef std::future<RestartClusterForConfigsOutcome> RestartClusterForConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RestartClusterForConfigsRequest&, RestartClusterForConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterForConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartClusterForNodeResponse> RestartClusterForNodeOutcome;
                typedef std::future<RestartClusterForNodeOutcome> RestartClusterForNodeOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RestartClusterForNodeRequest&, RestartClusterForNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterForNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpInstanceResponse> ScaleUpInstanceOutcome;
                typedef std::future<ScaleUpInstanceOutcome> ScaleUpInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ScaleUpInstanceRequest&, ScaleUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpInstanceAsyncHandler;



                /**
                 *取消对应的备份实例任务
                 * @param req CancelBackupJobRequest
                 * @return CancelBackupJobOutcome
                 */
                CancelBackupJobOutcome CancelBackupJob(const Model::CancelBackupJobRequest &request);
                void CancelBackupJobAsync(const Model::CancelBackupJobRequest& request, const CancelBackupJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelBackupJobOutcomeCallable CancelBackupJobCallable(const Model::CancelBackupJobRequest& request);

                /**
                 *创建或者修改备份策略
                 * @param req CreateBackUpScheduleRequest
                 * @return CreateBackUpScheduleOutcome
                 */
                CreateBackUpScheduleOutcome CreateBackUpSchedule(const Model::CreateBackUpScheduleRequest &request);
                void CreateBackUpScheduleAsync(const Model::CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackUpScheduleOutcomeCallable CreateBackUpScheduleCallable(const Model::CreateBackUpScheduleRequest& request);

                /**
                 *通过API创建集群
                 * @param req CreateInstanceNewRequest
                 * @return CreateInstanceNewOutcome
                 */
                CreateInstanceNewOutcome CreateInstanceNew(const Model::CreateInstanceNewRequest &request);
                void CreateInstanceNewAsync(const Model::CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceNewOutcomeCallable CreateInstanceNewCallable(const Model::CreateInstanceNewRequest& request);

                /**
                 *创建资源组
                 * @param req CreateWorkloadGroupRequest
                 * @return CreateWorkloadGroupOutcome
                 */
                CreateWorkloadGroupOutcome CreateWorkloadGroup(const Model::CreateWorkloadGroupRequest &request);
                void CreateWorkloadGroupAsync(const Model::CreateWorkloadGroupRequest& request, const CreateWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkloadGroupOutcomeCallable CreateWorkloadGroupCallable(const Model::CreateWorkloadGroupRequest& request);

                /**
                 *删除备份数据
                 * @param req DeleteBackUpDataRequest
                 * @return DeleteBackUpDataOutcome
                 */
                DeleteBackUpDataOutcome DeleteBackUpData(const Model::DeleteBackUpDataRequest &request);
                void DeleteBackUpDataAsync(const Model::DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackUpDataOutcomeCallable DeleteBackUpDataCallable(const Model::DeleteBackUpDataRequest& request);

                /**
                 *删除资源组
                 * @param req DeleteWorkloadGroupRequest
                 * @return DeleteWorkloadGroupOutcome
                 */
                DeleteWorkloadGroupOutcome DeleteWorkloadGroup(const Model::DeleteWorkloadGroupRequest &request);
                void DeleteWorkloadGroupAsync(const Model::DeleteWorkloadGroupRequest& request, const DeleteWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkloadGroupOutcomeCallable DeleteWorkloadGroupCallable(const Model::DeleteWorkloadGroupRequest& request);

                /**
                 *集群列表页上显示地域信息及各个地域的集群总数
                 * @param req DescribeAreaRegionRequest
                 * @return DescribeAreaRegionOutcome
                 */
                DescribeAreaRegionOutcome DescribeAreaRegion(const Model::DescribeAreaRegionRequest &request);
                void DescribeAreaRegionAsync(const Model::DescribeAreaRegionRequest& request, const DescribeAreaRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAreaRegionOutcomeCallable DescribeAreaRegionCallable(const Model::DescribeAreaRegionRequest& request);

                /**
                 *查询备份实例列表
                 * @param req DescribeBackUpJobRequest
                 * @return DescribeBackUpJobOutcome
                 */
                DescribeBackUpJobOutcome DescribeBackUpJob(const Model::DescribeBackUpJobRequest &request);
                void DescribeBackUpJobAsync(const Model::DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpJobOutcomeCallable DescribeBackUpJobCallable(const Model::DescribeBackUpJobRequest& request);

                /**
                 *查询备份任务详情
                 * @param req DescribeBackUpJobDetailRequest
                 * @return DescribeBackUpJobDetailOutcome
                 */
                DescribeBackUpJobDetailOutcome DescribeBackUpJobDetail(const Model::DescribeBackUpJobDetailRequest &request);
                void DescribeBackUpJobDetailAsync(const Model::DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpJobDetailOutcomeCallable DescribeBackUpJobDetailCallable(const Model::DescribeBackUpJobDetailRequest& request);

                /**
                 *获取备份、迁移的调度任务信息
                 * @param req DescribeBackUpSchedulesRequest
                 * @return DescribeBackUpSchedulesOutcome
                 */
                DescribeBackUpSchedulesOutcome DescribeBackUpSchedules(const Model::DescribeBackUpSchedulesRequest &request);
                void DescribeBackUpSchedulesAsync(const Model::DescribeBackUpSchedulesRequest& request, const DescribeBackUpSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpSchedulesOutcomeCallable DescribeBackUpSchedulesCallable(const Model::DescribeBackUpSchedulesRequest& request);

                /**
                 *获取可备份表信息
                 * @param req DescribeBackUpTablesRequest
                 * @return DescribeBackUpTablesOutcome
                 */
                DescribeBackUpTablesOutcome DescribeBackUpTables(const Model::DescribeBackUpTablesRequest &request);
                void DescribeBackUpTablesAsync(const Model::DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpTablesOutcomeCallable DescribeBackUpTablesCallable(const Model::DescribeBackUpTablesRequest& request);

                /**
                 *查询备份任务进度详情
                 * @param req DescribeBackUpTaskDetailRequest
                 * @return DescribeBackUpTaskDetailOutcome
                 */
                DescribeBackUpTaskDetailOutcome DescribeBackUpTaskDetail(const Model::DescribeBackUpTaskDetailRequest &request);
                void DescribeBackUpTaskDetailAsync(const Model::DescribeBackUpTaskDetailRequest& request, const DescribeBackUpTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpTaskDetailOutcomeCallable DescribeBackUpTaskDetailCallable(const Model::DescribeBackUpTaskDetailRequest& request);

                /**
                 *获取集群的最新的几个配置文件（config.xml、metrika.xml、user.xml）的内容，显示给用户
                 * @param req DescribeClusterConfigsRequest
                 * @return DescribeClusterConfigsOutcome
                 */
                DescribeClusterConfigsOutcome DescribeClusterConfigs(const Model::DescribeClusterConfigsRequest &request);
                void DescribeClusterConfigsAsync(const Model::DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterConfigsOutcomeCallable DescribeClusterConfigsCallable(const Model::DescribeClusterConfigsRequest& request);

                /**
                 *获取集群配置文件修改历史
                 * @param req DescribeClusterConfigsHistoryRequest
                 * @return DescribeClusterConfigsHistoryOutcome
                 */
                DescribeClusterConfigsHistoryOutcome DescribeClusterConfigsHistory(const Model::DescribeClusterConfigsHistoryRequest &request);
                void DescribeClusterConfigsHistoryAsync(const Model::DescribeClusterConfigsHistoryRequest& request, const DescribeClusterConfigsHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterConfigsHistoryOutcomeCallable DescribeClusterConfigsHistoryCallable(const Model::DescribeClusterConfigsHistoryRequest& request);

                /**
                 *下载数据库审计日志
                 * @param req DescribeDatabaseAuditDownloadRequest
                 * @return DescribeDatabaseAuditDownloadOutcome
                 */
                DescribeDatabaseAuditDownloadOutcome DescribeDatabaseAuditDownload(const Model::DescribeDatabaseAuditDownloadRequest &request);
                void DescribeDatabaseAuditDownloadAsync(const Model::DescribeDatabaseAuditDownloadRequest& request, const DescribeDatabaseAuditDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditDownloadOutcomeCallable DescribeDatabaseAuditDownloadCallable(const Model::DescribeDatabaseAuditDownloadRequest& request);

                /**
                 *获取数据库审计记录
                 * @param req DescribeDatabaseAuditRecordsRequest
                 * @return DescribeDatabaseAuditRecordsOutcome
                 */
                DescribeDatabaseAuditRecordsOutcome DescribeDatabaseAuditRecords(const Model::DescribeDatabaseAuditRecordsRequest &request);
                void DescribeDatabaseAuditRecordsAsync(const Model::DescribeDatabaseAuditRecordsRequest& request, const DescribeDatabaseAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditRecordsOutcomeCallable DescribeDatabaseAuditRecordsCallable(const Model::DescribeDatabaseAuditRecordsRequest& request);

                /**
                 *数据库审计数据库、用户等
                 * @param req DescribeDatabaseAuditResourceRequest
                 * @return DescribeDatabaseAuditResourceOutcome
                 */
                DescribeDatabaseAuditResourceOutcome DescribeDatabaseAuditResource(const Model::DescribeDatabaseAuditResourceRequest &request);
                void DescribeDatabaseAuditResourceAsync(const Model::DescribeDatabaseAuditResourceRequest& request, const DescribeDatabaseAuditResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditResourceOutcomeCallable DescribeDatabaseAuditResourceCallable(const Model::DescribeDatabaseAuditResourceRequest& request);

                /**
                 *查询sql工作区历史运行记录
                 * @param req DescribeDmsSqlHistoryRequest
                 * @return DescribeDmsSqlHistoryOutcome
                 */
                DescribeDmsSqlHistoryOutcome DescribeDmsSqlHistory(const Model::DescribeDmsSqlHistoryRequest &request);
                void DescribeDmsSqlHistoryAsync(const Model::DescribeDmsSqlHistoryRequest& request, const DescribeDmsSqlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDmsSqlHistoryOutcomeCallable DescribeDmsSqlHistoryCallable(const Model::DescribeDmsSqlHistoryRequest& request);

                /**
                 *展示监控指标文件
                 * @param req DescribeDorisMetricFilesRequest
                 * @return DescribeDorisMetricFilesOutcome
                 */
                DescribeDorisMetricFilesOutcome DescribeDorisMetricFiles(const Model::DescribeDorisMetricFilesRequest &request);
                void DescribeDorisMetricFilesAsync(const Model::DescribeDorisMetricFilesRequest& request, const DescribeDorisMetricFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDorisMetricFilesOutcomeCallable DescribeDorisMetricFilesCallable(const Model::DescribeDorisMetricFilesRequest& request);

                /**
                 *获取联合身份临时访问凭证
                 * @param req DescribeFederationTokenRequest
                 * @return DescribeFederationTokenOutcome
                 */
                DescribeFederationTokenOutcome DescribeFederationToken(const Model::DescribeFederationTokenRequest &request);
                void DescribeFederationTokenAsync(const Model::DescribeFederationTokenRequest& request, const DescribeFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFederationTokenOutcomeCallable DescribeFederationTokenCallable(const Model::DescribeFederationTokenRequest& request);

                /**
                 *查询前端内容
                 * @param req DescribeFrontEndRequest
                 * @return DescribeFrontEndOutcome
                 */
                DescribeFrontEndOutcome DescribeFrontEnd(const Model::DescribeFrontEndRequest &request);
                void DescribeFrontEndAsync(const Model::DescribeFrontEndRequest& request, const DescribeFrontEndAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFrontEndOutcomeCallable DescribeFrontEndCallable(const Model::DescribeFrontEndRequest& request);

                /**
                 *生成计费相关接口的GoodsDetail结构
                 * @param req DescribeGoodsDetailRequest
                 * @return DescribeGoodsDetailOutcome
                 */
                DescribeGoodsDetailOutcome DescribeGoodsDetail(const Model::DescribeGoodsDetailRequest &request);
                void DescribeGoodsDetailAsync(const Model::DescribeGoodsDetailRequest& request, const DescribeGoodsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGoodsDetailOutcomeCallable DescribeGoodsDetailCallable(const Model::DescribeGoodsDetailRequest& request);

                /**
                 *根据集群ID查询某个集群的具体信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *获取集群节点信息列表
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *获取BE/FE节点角色
                 * @param req DescribeInstanceNodesInfoRequest
                 * @return DescribeInstanceNodesInfoOutcome
                 */
                DescribeInstanceNodesInfoOutcome DescribeInstanceNodesInfo(const Model::DescribeInstanceNodesInfoRequest &request);
                void DescribeInstanceNodesInfoAsync(const Model::DescribeInstanceNodesInfoRequest& request, const DescribeInstanceNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesInfoOutcomeCallable DescribeInstanceNodesInfoCallable(const Model::DescribeInstanceNodesInfoRequest& request);

                /**
                 *获取集群节点角色
                 * @param req DescribeInstanceNodesRoleRequest
                 * @return DescribeInstanceNodesRoleOutcome
                 */
                DescribeInstanceNodesRoleOutcome DescribeInstanceNodesRole(const Model::DescribeInstanceNodesRoleRequest &request);
                void DescribeInstanceNodesRoleAsync(const Model::DescribeInstanceNodesRoleRequest& request, const DescribeInstanceNodesRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesRoleOutcomeCallable DescribeInstanceNodesRoleCallable(const Model::DescribeInstanceNodesRoleRequest& request);

                /**
                 *在集群详情页面，拉取该集群的操作
                 * @param req DescribeInstanceOperationsRequest
                 * @return DescribeInstanceOperationsOutcome
                 */
                DescribeInstanceOperationsOutcome DescribeInstanceOperations(const Model::DescribeInstanceOperationsRequest &request);
                void DescribeInstanceOperationsAsync(const Model::DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationsOutcomeCallable DescribeInstanceOperationsCallable(const Model::DescribeInstanceOperationsRequest& request);

                /**
                 *集群详情页中显示集群状态、流程进度等
                 * @param req DescribeInstanceStateRequest
                 * @return DescribeInstanceStateOutcome
                 */
                DescribeInstanceStateOutcome DescribeInstanceState(const Model::DescribeInstanceStateRequest &request);
                void DescribeInstanceStateAsync(const Model::DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStateOutcomeCallable DescribeInstanceStateCallable(const Model::DescribeInstanceStateRequest& request);

                /**
                 *获取集群已使用子网信息
                 * @param req DescribeInstanceUsedSubnetsRequest
                 * @return DescribeInstanceUsedSubnetsOutcome
                 */
                DescribeInstanceUsedSubnetsOutcome DescribeInstanceUsedSubnets(const Model::DescribeInstanceUsedSubnetsRequest &request);
                void DescribeInstanceUsedSubnetsAsync(const Model::DescribeInstanceUsedSubnetsRequest& request, const DescribeInstanceUsedSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceUsedSubnetsOutcomeCallable DescribeInstanceUsedSubnetsCallable(const Model::DescribeInstanceUsedSubnetsRequest& request);

                /**
                 *获取集群列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *集群健康检查
                 * @param req DescribeInstancesHealthStateRequest
                 * @return DescribeInstancesHealthStateOutcome
                 */
                DescribeInstancesHealthStateOutcome DescribeInstancesHealthState(const Model::DescribeInstancesHealthStateRequest &request);
                void DescribeInstancesHealthStateAsync(const Model::DescribeInstancesHealthStateRequest& request, const DescribeInstancesHealthStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesHealthStateOutcomeCallable DescribeInstancesHealthStateCallable(const Model::DescribeInstancesHealthStateRequest& request);

                /**
                 *购买页获取地域及可用区列表、内核版本、网络规则等
                 * @param req DescribeRegionZoneRequest
                 * @return DescribeRegionZoneOutcome
                 */
                DescribeRegionZoneOutcome DescribeRegionZone(const Model::DescribeRegionZoneRequest &request);
                void DescribeRegionZoneAsync(const Model::DescribeRegionZoneRequest& request, const DescribeRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionZoneOutcomeCallable DescribeRegionZoneCallable(const Model::DescribeRegionZoneRequest& request);

                /**
                 *检查内核版本是否支持新的备份恢复语法
                 * @param req DescribeReplicaVersionRequest
                 * @return DescribeReplicaVersionOutcome
                 */
                DescribeReplicaVersionOutcome DescribeReplicaVersion(const Model::DescribeReplicaVersionRequest &request);
                void DescribeReplicaVersionAsync(const Model::DescribeReplicaVersionRequest& request, const DescribeReplicaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicaVersionOutcomeCallable DescribeReplicaVersionCallable(const Model::DescribeReplicaVersionRequest& request);

                /**
                 *查询恢复任务进度详情
                 * @param req DescribeRestoreTaskDetailRequest
                 * @return DescribeRestoreTaskDetailOutcome
                 */
                DescribeRestoreTaskDetailOutcome DescribeRestoreTaskDetail(const Model::DescribeRestoreTaskDetailRequest &request);
                void DescribeRestoreTaskDetailAsync(const Model::DescribeRestoreTaskDetailRequest& request, const DescribeRestoreTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRestoreTaskDetailOutcomeCallable DescribeRestoreTaskDetailCallable(const Model::DescribeRestoreTaskDetailRequest& request);

                /**
                 *获取慢查询列表
                 * @param req DescribeSlowQueryRecordsRequest
                 * @return DescribeSlowQueryRecordsOutcome
                 */
                DescribeSlowQueryRecordsOutcome DescribeSlowQueryRecords(const Model::DescribeSlowQueryRecordsRequest &request);
                void DescribeSlowQueryRecordsAsync(const Model::DescribeSlowQueryRecordsRequest& request, const DescribeSlowQueryRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryRecordsOutcomeCallable DescribeSlowQueryRecordsCallable(const Model::DescribeSlowQueryRecordsRequest& request);

                /**
                 *下载慢查询文件
                 * @param req DescribeSlowQueryRecordsDownloadRequest
                 * @return DescribeSlowQueryRecordsDownloadOutcome
                 */
                DescribeSlowQueryRecordsDownloadOutcome DescribeSlowQueryRecordsDownload(const Model::DescribeSlowQueryRecordsDownloadRequest &request);
                void DescribeSlowQueryRecordsDownloadAsync(const Model::DescribeSlowQueryRecordsDownloadRequest& request, const DescribeSlowQueryRecordsDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryRecordsDownloadOutcomeCallable DescribeSlowQueryRecordsDownloadCallable(const Model::DescribeSlowQueryRecordsDownloadRequest& request);

                /**
                 *购买页拉取集群的数据节点和zookeeper节点的规格列表
                 * @param req DescribeSpecRequest
                 * @return DescribeSpecOutcome
                 */
                DescribeSpecOutcome DescribeSpec(const Model::DescribeSpecRequest &request);
                void DescribeSpecAsync(const Model::DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecOutcomeCallable DescribeSpecCallable(const Model::DescribeSpecRequest& request);

                /**
                 *针对驱动sql命令查询ck集群接口
                 * @param req DescribeSqlApisRequest
                 * @return DescribeSqlApisOutcome
                 */
                DescribeSqlApisOutcome DescribeSqlApis(const Model::DescribeSqlApisRequest &request);
                void DescribeSqlApisAsync(const Model::DescribeSqlApisRequest& request, const DescribeSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSqlApisOutcomeCallable DescribeSqlApisCallable(const Model::DescribeSqlApisRequest& request);

                /**
                 *获取当前集群各用户绑定的资源信息
                 * @param req DescribeUserBindWorkloadGroupRequest
                 * @return DescribeUserBindWorkloadGroupOutcome
                 */
                DescribeUserBindWorkloadGroupOutcome DescribeUserBindWorkloadGroup(const Model::DescribeUserBindWorkloadGroupRequest &request);
                void DescribeUserBindWorkloadGroupAsync(const Model::DescribeUserBindWorkloadGroupRequest& request, const DescribeUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserBindWorkloadGroupOutcomeCallable DescribeUserBindWorkloadGroupCallable(const Model::DescribeUserBindWorkloadGroupRequest& request);

                /**
                 *获取资源组信息
                 * @param req DescribeWorkloadGroupRequest
                 * @return DescribeWorkloadGroupOutcome
                 */
                DescribeWorkloadGroupOutcome DescribeWorkloadGroup(const Model::DescribeWorkloadGroupRequest &request);
                void DescribeWorkloadGroupAsync(const Model::DescribeWorkloadGroupRequest& request, const DescribeWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkloadGroupOutcomeCallable DescribeWorkloadGroupCallable(const Model::DescribeWorkloadGroupRequest& request);

                /**
                 *销毁集群
                 * @param req DestroyInstanceRequest
                 * @return DestroyInstanceOutcome
                 */
                DestroyInstanceOutcome DestroyInstance(const Model::DestroyInstanceRequest &request);
                void DestroyInstanceAsync(const Model::DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstanceOutcomeCallable DestroyInstanceCallable(const Model::DestroyInstanceRequest& request);

                /**
                 *给已存在集群，配置日志服务
                 * @param req FitClsLogRequest
                 * @return FitClsLogOutcome
                 */
                FitClsLogOutcome FitClsLog(const Model::FitClsLogRequest &request);
                void FitClsLogAsync(const Model::FitClsLogRequest& request, const FitClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FitClsLogOutcomeCallable FitClsLogCallable(const Model::FitClsLogRequest& request);

                /**
                 *修改集群名称
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *KV模式修改配置接口
                 * @param req ModifyInstanceKeyValConfigsRequest
                 * @return ModifyInstanceKeyValConfigsOutcome
                 */
                ModifyInstanceKeyValConfigsOutcome ModifyInstanceKeyValConfigs(const Model::ModifyInstanceKeyValConfigsRequest &request);
                void ModifyInstanceKeyValConfigsAsync(const Model::ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceKeyValConfigsOutcomeCallable ModifyInstanceKeyValConfigsCallable(const Model::ModifyInstanceKeyValConfigsRequest& request);

                /**
                 *修改节点状态
                 * @param req ModifyNodeStatusRequest
                 * @return ModifyNodeStatusOutcome
                 */
                ModifyNodeStatusOutcome ModifyNodeStatus(const Model::ModifyNodeStatusRequest &request);
                void ModifyNodeStatusAsync(const Model::ModifyNodeStatusRequest& request, const ModifyNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodeStatusOutcomeCallable ModifyNodeStatusCallable(const Model::ModifyNodeStatusRequest& request);

                /**
                 *更改安全组
                 * @param req ModifySecurityGroupsRequest
                 * @return ModifySecurityGroupsOutcome
                 */
                ModifySecurityGroupsOutcome ModifySecurityGroups(const Model::ModifySecurityGroupsRequest &request);
                void ModifySecurityGroupsAsync(const Model::ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupsOutcomeCallable ModifySecurityGroupsCallable(const Model::ModifySecurityGroupsRequest& request);

                /**
                 *修改用户绑定的资源组
                 * @param req ModifyUserBindWorkloadGroupRequest
                 * @return ModifyUserBindWorkloadGroupOutcome
                 */
                ModifyUserBindWorkloadGroupOutcome ModifyUserBindWorkloadGroup(const Model::ModifyUserBindWorkloadGroupRequest &request);
                void ModifyUserBindWorkloadGroupAsync(const Model::ModifyUserBindWorkloadGroupRequest& request, const ModifyUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserBindWorkloadGroupOutcomeCallable ModifyUserBindWorkloadGroupCallable(const Model::ModifyUserBindWorkloadGroupRequest& request);

                /**
                 *修改用户权限,支持catalog，全部db，部分db表三种权限设置类别
                 * @param req ModifyUserPrivilegesV3Request
                 * @return ModifyUserPrivilegesV3Outcome
                 */
                ModifyUserPrivilegesV3Outcome ModifyUserPrivilegesV3(const Model::ModifyUserPrivilegesV3Request &request);
                void ModifyUserPrivilegesV3Async(const Model::ModifyUserPrivilegesV3Request& request, const ModifyUserPrivilegesV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserPrivilegesV3OutcomeCallable ModifyUserPrivilegesV3Callable(const Model::ModifyUserPrivilegesV3Request& request);

                /**
                 *修改资源组信息
                 * @param req ModifyWorkloadGroupRequest
                 * @return ModifyWorkloadGroupOutcome
                 */
                ModifyWorkloadGroupOutcome ModifyWorkloadGroup(const Model::ModifyWorkloadGroupRequest &request);
                void ModifyWorkloadGroupAsync(const Model::ModifyWorkloadGroupRequest& request, const ModifyWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkloadGroupOutcomeCallable ModifyWorkloadGroupCallable(const Model::ModifyWorkloadGroupRequest& request);

                /**
                 *开启或关闭资源组
                 * @param req ModifyWorkloadGroupStatusRequest
                 * @return ModifyWorkloadGroupStatusOutcome
                 */
                ModifyWorkloadGroupStatusOutcome ModifyWorkloadGroupStatus(const Model::ModifyWorkloadGroupStatusRequest &request);
                void ModifyWorkloadGroupStatusAsync(const Model::ModifyWorkloadGroupStatusRequest& request, const ModifyWorkloadGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkloadGroupStatusOutcomeCallable ModifyWorkloadGroupStatusCallable(const Model::ModifyWorkloadGroupStatusRequest& request);

                /**
                 *开启或者关闭策略
                 * @param req OpenBackUpRequest
                 * @return OpenBackUpOutcome
                 */
                OpenBackUpOutcome OpenBackUp(const Model::OpenBackUpRequest &request);
                void OpenBackUpAsync(const Model::OpenBackUpRequest& request, const OpenBackUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenBackUpOutcomeCallable OpenBackUpCallable(const Model::OpenBackUpRequest& request);

                /**
                 *备份恢复
                 * @param req RecoverBackUpJobRequest
                 * @return RecoverBackUpJobOutcome
                 */
                RecoverBackUpJobOutcome RecoverBackUpJob(const Model::RecoverBackUpJobRequest &request);
                void RecoverBackUpJobAsync(const Model::RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverBackUpJobOutcomeCallable RecoverBackUpJobCallable(const Model::RecoverBackUpJobRequest& request);

                /**
                 *集群缩容
                 * @param req ReduceInstanceRequest
                 * @return ReduceInstanceOutcome
                 */
                ReduceInstanceOutcome ReduceInstance(const Model::ReduceInstanceRequest &request);
                void ReduceInstanceAsync(const Model::ReduceInstanceRequest& request, const ReduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReduceInstanceOutcomeCallable ReduceInstanceCallable(const Model::ReduceInstanceRequest& request);

                /**
                 *扩容云盘
                 * @param req ResizeDiskRequest
                 * @return ResizeDiskOutcome
                 */
                ResizeDiskOutcome ResizeDisk(const Model::ResizeDiskRequest &request);
                void ResizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeDiskOutcomeCallable ResizeDiskCallable(const Model::ResizeDiskRequest& request);

                /**
                 *重启集群让配置文件生效
                 * @param req RestartClusterForConfigsRequest
                 * @return RestartClusterForConfigsOutcome
                 */
                RestartClusterForConfigsOutcome RestartClusterForConfigs(const Model::RestartClusterForConfigsRequest &request);
                void RestartClusterForConfigsAsync(const Model::RestartClusterForConfigsRequest& request, const RestartClusterForConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartClusterForConfigsOutcomeCallable RestartClusterForConfigsCallable(const Model::RestartClusterForConfigsRequest& request);

                /**
                 *集群滚动重启
                 * @param req RestartClusterForNodeRequest
                 * @return RestartClusterForNodeOutcome
                 */
                RestartClusterForNodeOutcome RestartClusterForNode(const Model::RestartClusterForNodeRequest &request);
                void RestartClusterForNodeAsync(const Model::RestartClusterForNodeRequest& request, const RestartClusterForNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartClusterForNodeOutcomeCallable RestartClusterForNodeCallable(const Model::RestartClusterForNodeRequest& request);

                /**
                 *水平扩容节点
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *计算资源垂直变配
                 * @param req ScaleUpInstanceRequest
                 * @return ScaleUpInstanceOutcome
                 */
                ScaleUpInstanceOutcome ScaleUpInstance(const Model::ScaleUpInstanceRequest &request);
                void ScaleUpInstanceAsync(const Model::ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleUpInstanceOutcomeCallable ScaleUpInstanceCallable(const Model::ScaleUpInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
