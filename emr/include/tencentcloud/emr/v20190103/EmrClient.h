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

#ifndef TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_
#define TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/emr/v20190103/model/AddMetricScaleStrategyRequest.h>
#include <tencentcloud/emr/v20190103/model/AddMetricScaleStrategyResponse.h>
#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerRequest.h>
#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerResponse.h>
#include <tencentcloud/emr/v20190103/model/CreateClusterRequest.h>
#include <tencentcloud/emr/v20190103/model/CreateClusterResponse.h>
#include <tencentcloud/emr/v20190103/model/CreateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/CreateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/DeleteAutoScaleStrategyRequest.h>
#include <tencentcloud/emr/v20190103/model/DeleteAutoScaleStrategyResponse.h>
#include <tencentcloud/emr/v20190103/model/DeleteUserManagerUserListRequest.h>
#include <tencentcloud/emr/v20190103/model/DeleteUserManagerUserListResponse.h>
#include <tencentcloud/emr/v20190103/model/DeployYarnConfRequest.h>
#include <tencentcloud/emr/v20190103/model/DeployYarnConfResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeAutoScaleGroupGlobalConfRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeAutoScaleGroupGlobalConfResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeAutoScaleRecordsRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeAutoScaleRecordsResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeAutoScaleStrategiesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeAutoScaleStrategiesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterFlowStatusDetailRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterFlowStatusDetailResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeCvmQuotaRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeCvmQuotaResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrOverviewMetricsRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrOverviewMetricsResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeHBaseTableOverviewRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeHBaseTableOverviewResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeHiveQueriesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeHiveQueriesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeImpalaQueriesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeImpalaQueriesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInsightListRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInsightListResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesListRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesListResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeJobFlowRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeJobFlowResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeServiceNodeInfosRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeServiceNodeInfosResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeTrinoQueryInfoRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeTrinoQueryInfoResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeYarnApplicationsRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeYarnApplicationsResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeYarnQueueRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeYarnQueueResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeYarnScheduleHistoryRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeYarnScheduleHistoryResponse.h>
#include <tencentcloud/emr/v20190103/model/InquirePriceRenewEmrRequest.h>
#include <tencentcloud/emr/v20190103/model/InquirePriceRenewEmrResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyAutoScaleStrategyRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyAutoScaleStrategyResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourcePoolsRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourcePoolsResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourcesTagsRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourcesTagsResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyUserManagerPwdRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyUserManagerPwdResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyYarnDeployRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyYarnDeployResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyYarnQueueV2Request.h>
#include <tencentcloud/emr/v20190103/model/ModifyYarnQueueV2Response.h>
#include <tencentcloud/emr/v20190103/model/ResetYarnConfigRequest.h>
#include <tencentcloud/emr/v20190103/model/ResetYarnConfigResponse.h>
#include <tencentcloud/emr/v20190103/model/RunJobFlowRequest.h>
#include <tencentcloud/emr/v20190103/model/RunJobFlowResponse.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutClusterRequest.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutClusterResponse.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorRequest.h>
#include <tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorResponse.h>
#include <tencentcloud/emr/v20190103/model/SyncPodStateRequest.h>
#include <tencentcloud/emr/v20190103/model/SyncPodStateResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateClusterNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateClusterNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateTasksRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateTasksResponse.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            class EmrClient : public AbstractClient
            {
            public:
                EmrClient(const Credential &credential, const std::string &region);
                EmrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddMetricScaleStrategyResponse> AddMetricScaleStrategyOutcome;
                typedef std::future<AddMetricScaleStrategyOutcome> AddMetricScaleStrategyOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::AddMetricScaleStrategyRequest&, AddMetricScaleStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddMetricScaleStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUsersForUserManagerResponse> AddUsersForUserManagerOutcome;
                typedef std::future<AddUsersForUserManagerOutcome> AddUsersForUserManagerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::AddUsersForUserManagerRequest&, AddUsersForUserManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersForUserManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoScaleStrategyResponse> DeleteAutoScaleStrategyOutcome;
                typedef std::future<DeleteAutoScaleStrategyOutcome> DeleteAutoScaleStrategyOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DeleteAutoScaleStrategyRequest&, DeleteAutoScaleStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScaleStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserManagerUserListResponse> DeleteUserManagerUserListOutcome;
                typedef std::future<DeleteUserManagerUserListOutcome> DeleteUserManagerUserListOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DeleteUserManagerUserListRequest&, DeleteUserManagerUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserManagerUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployYarnConfResponse> DeployYarnConfOutcome;
                typedef std::future<DeployYarnConfOutcome> DeployYarnConfOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DeployYarnConfRequest&, DeployYarnConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployYarnConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScaleGroupGlobalConfResponse> DescribeAutoScaleGroupGlobalConfOutcome;
                typedef std::future<DescribeAutoScaleGroupGlobalConfOutcome> DescribeAutoScaleGroupGlobalConfOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeAutoScaleGroupGlobalConfRequest&, DescribeAutoScaleGroupGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScaleGroupGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScaleRecordsResponse> DescribeAutoScaleRecordsOutcome;
                typedef std::future<DescribeAutoScaleRecordsOutcome> DescribeAutoScaleRecordsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeAutoScaleRecordsRequest&, DescribeAutoScaleRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScaleRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScaleStrategiesResponse> DescribeAutoScaleStrategiesOutcome;
                typedef std::future<DescribeAutoScaleStrategiesOutcome> DescribeAutoScaleStrategiesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeAutoScaleStrategiesRequest&, DescribeAutoScaleStrategiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScaleStrategiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterFlowStatusDetailResponse> DescribeClusterFlowStatusDetailOutcome;
                typedef std::future<DescribeClusterFlowStatusDetailOutcome> DescribeClusterFlowStatusDetailOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeClusterFlowStatusDetailRequest&, DescribeClusterFlowStatusDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterFlowStatusDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodesResponse> DescribeClusterNodesOutcome;
                typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeClusterNodesRequest&, DescribeClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCvmQuotaResponse> DescribeCvmQuotaOutcome;
                typedef std::future<DescribeCvmQuotaOutcome> DescribeCvmQuotaOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeCvmQuotaRequest&, DescribeCvmQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCvmQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmrApplicationStaticsResponse> DescribeEmrApplicationStaticsOutcome;
                typedef std::future<DescribeEmrApplicationStaticsOutcome> DescribeEmrApplicationStaticsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeEmrApplicationStaticsRequest&, DescribeEmrApplicationStaticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrApplicationStaticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmrOverviewMetricsResponse> DescribeEmrOverviewMetricsOutcome;
                typedef std::future<DescribeEmrOverviewMetricsOutcome> DescribeEmrOverviewMetricsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeEmrOverviewMetricsRequest&, DescribeEmrOverviewMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrOverviewMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHBaseTableOverviewResponse> DescribeHBaseTableOverviewOutcome;
                typedef std::future<DescribeHBaseTableOverviewOutcome> DescribeHBaseTableOverviewOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeHBaseTableOverviewRequest&, DescribeHBaseTableOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHBaseTableOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHiveQueriesResponse> DescribeHiveQueriesOutcome;
                typedef std::future<DescribeHiveQueriesOutcome> DescribeHiveQueriesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeHiveQueriesRequest&, DescribeHiveQueriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiveQueriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImpalaQueriesResponse> DescribeImpalaQueriesOutcome;
                typedef std::future<DescribeImpalaQueriesOutcome> DescribeImpalaQueriesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeImpalaQueriesRequest&, DescribeImpalaQueriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImpalaQueriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInsightListResponse> DescribeInsightListOutcome;
                typedef std::future<DescribeInsightListOutcome> DescribeInsightListOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInsightListRequest&, DescribeInsightListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInsightListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceRenewNodesResponse> DescribeInstanceRenewNodesOutcome;
                typedef std::future<DescribeInstanceRenewNodesOutcome> DescribeInstanceRenewNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstanceRenewNodesRequest&, DescribeInstanceRenewNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceRenewNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesListResponse> DescribeInstancesListOutcome;
                typedef std::future<DescribeInstancesListOutcome> DescribeInstancesListOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstancesListRequest&, DescribeInstancesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobFlowResponse> DescribeJobFlowOutcome;
                typedef std::future<DescribeJobFlowOutcome> DescribeJobFlowOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeJobFlowRequest&, DescribeJobFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceScheduleResponse> DescribeResourceScheduleOutcome;
                typedef std::future<DescribeResourceScheduleOutcome> DescribeResourceScheduleOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeResourceScheduleRequest&, DescribeResourceScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceNodeInfosResponse> DescribeServiceNodeInfosOutcome;
                typedef std::future<DescribeServiceNodeInfosOutcome> DescribeServiceNodeInfosOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeServiceNodeInfosRequest&, DescribeServiceNodeInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceNodeInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrinoQueryInfoResponse> DescribeTrinoQueryInfoOutcome;
                typedef std::future<DescribeTrinoQueryInfoOutcome> DescribeTrinoQueryInfoOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeTrinoQueryInfoRequest&, DescribeTrinoQueryInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrinoQueryInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersForUserManagerResponse> DescribeUsersForUserManagerOutcome;
                typedef std::future<DescribeUsersForUserManagerOutcome> DescribeUsersForUserManagerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeUsersForUserManagerRequest&, DescribeUsersForUserManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersForUserManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeYarnApplicationsResponse> DescribeYarnApplicationsOutcome;
                typedef std::future<DescribeYarnApplicationsOutcome> DescribeYarnApplicationsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeYarnApplicationsRequest&, DescribeYarnApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeYarnApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeYarnQueueResponse> DescribeYarnQueueOutcome;
                typedef std::future<DescribeYarnQueueOutcome> DescribeYarnQueueOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeYarnQueueRequest&, DescribeYarnQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeYarnQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeYarnScheduleHistoryResponse> DescribeYarnScheduleHistoryOutcome;
                typedef std::future<DescribeYarnScheduleHistoryOutcome> DescribeYarnScheduleHistoryOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeYarnScheduleHistoryRequest&, DescribeYarnScheduleHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeYarnScheduleHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewEmrResponse> InquirePriceRenewEmrOutcome;
                typedef std::future<InquirePriceRenewEmrOutcome> InquirePriceRenewEmrOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquirePriceRenewEmrRequest&, InquirePriceRenewEmrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewEmrAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateInstanceResponse> InquiryPriceCreateInstanceOutcome;
                typedef std::future<InquiryPriceCreateInstanceOutcome> InquiryPriceCreateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceCreateInstanceRequest&, InquiryPriceCreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewInstanceResponse> InquiryPriceRenewInstanceOutcome;
                typedef std::future<InquiryPriceRenewInstanceOutcome> InquiryPriceRenewInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceRenewInstanceRequest&, InquiryPriceRenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceScaleOutInstanceResponse> InquiryPriceScaleOutInstanceOutcome;
                typedef std::future<InquiryPriceScaleOutInstanceOutcome> InquiryPriceScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceScaleOutInstanceRequest&, InquiryPriceScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpdateInstanceResponse> InquiryPriceUpdateInstanceOutcome;
                typedef std::future<InquiryPriceUpdateInstanceOutcome> InquiryPriceUpdateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceUpdateInstanceRequest&, InquiryPriceUpdateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpdateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoScaleStrategyResponse> ModifyAutoScaleStrategyOutcome;
                typedef std::future<ModifyAutoScaleStrategyOutcome> ModifyAutoScaleStrategyOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyAutoScaleStrategyRequest&, ModifyAutoScaleStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoScaleStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourcePoolsResponse> ModifyResourcePoolsOutcome;
                typedef std::future<ModifyResourcePoolsOutcome> ModifyResourcePoolsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolsRequest&, ModifyResourcePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceScheduleConfigResponse> ModifyResourceScheduleConfigOutcome;
                typedef std::future<ModifyResourceScheduleConfigOutcome> ModifyResourceScheduleConfigOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourceScheduleConfigRequest&, ModifyResourceScheduleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceScheduleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceSchedulerResponse> ModifyResourceSchedulerOutcome;
                typedef std::future<ModifyResourceSchedulerOutcome> ModifyResourceSchedulerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourceSchedulerRequest&, ModifyResourceSchedulerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceSchedulerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourcesTagsResponse> ModifyResourcesTagsOutcome;
                typedef std::future<ModifyResourcesTagsOutcome> ModifyResourcesTagsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourcesTagsRequest&, ModifyResourcesTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcesTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserManagerPwdResponse> ModifyUserManagerPwdOutcome;
                typedef std::future<ModifyUserManagerPwdOutcome> ModifyUserManagerPwdOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyUserManagerPwdRequest&, ModifyUserManagerPwdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserManagerPwdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyYarnDeployResponse> ModifyYarnDeployOutcome;
                typedef std::future<ModifyYarnDeployOutcome> ModifyYarnDeployOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyYarnDeployRequest&, ModifyYarnDeployOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyYarnDeployAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyYarnQueueV2Response> ModifyYarnQueueV2Outcome;
                typedef std::future<ModifyYarnQueueV2Outcome> ModifyYarnQueueV2OutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyYarnQueueV2Request&, ModifyYarnQueueV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyYarnQueueV2AsyncHandler;
                typedef Outcome<Core::Error, Model::ResetYarnConfigResponse> ResetYarnConfigOutcome;
                typedef std::future<ResetYarnConfigOutcome> ResetYarnConfigOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ResetYarnConfigRequest&, ResetYarnConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetYarnConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RunJobFlowResponse> RunJobFlowOutcome;
                typedef std::future<RunJobFlowOutcome> RunJobFlowOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::RunJobFlowRequest&, RunJobFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunJobFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutClusterResponse> ScaleOutClusterOutcome;
                typedef std::future<ScaleOutClusterOutcome> ScaleOutClusterOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ScaleOutClusterRequest&, ScaleOutClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStopServiceOrMonitorResponse> StartStopServiceOrMonitorOutcome;
                typedef std::future<StartStopServiceOrMonitorOutcome> StartStopServiceOrMonitorOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::StartStopServiceOrMonitorRequest&, StartStopServiceOrMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStopServiceOrMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPodStateResponse> SyncPodStateOutcome;
                typedef std::future<SyncPodStateOutcome> SyncPodStateOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::SyncPodStateRequest&, SyncPodStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPodStateAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateClusterNodesResponse> TerminateClusterNodesOutcome;
                typedef std::future<TerminateClusterNodesOutcome> TerminateClusterNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateClusterNodesRequest&, TerminateClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateClusterNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstanceResponse> TerminateInstanceOutcome;
                typedef std::future<TerminateInstanceOutcome> TerminateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateInstanceRequest&, TerminateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateTasksResponse> TerminateTasksOutcome;
                typedef std::future<TerminateTasksOutcome> TerminateTasksOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateTasksRequest&, TerminateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTasksAsyncHandler;



                /**
                 *添加扩缩容规则，按负载和时间
                 * @param req AddMetricScaleStrategyRequest
                 * @return AddMetricScaleStrategyOutcome
                 */
                AddMetricScaleStrategyOutcome AddMetricScaleStrategy(const Model::AddMetricScaleStrategyRequest &request);
                void AddMetricScaleStrategyAsync(const Model::AddMetricScaleStrategyRequest& request, const AddMetricScaleStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddMetricScaleStrategyOutcomeCallable AddMetricScaleStrategyCallable(const Model::AddMetricScaleStrategyRequest& request);

                /**
                 *该接口支持安装了OpenLdap组件的集群。
新增用户列表（用户管理）。
                 * @param req AddUsersForUserManagerRequest
                 * @return AddUsersForUserManagerOutcome
                 */
                AddUsersForUserManagerOutcome AddUsersForUserManager(const Model::AddUsersForUserManagerRequest &request);
                void AddUsersForUserManagerAsync(const Model::AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersForUserManagerOutcomeCallable AddUsersForUserManagerCallable(const Model::AddUsersForUserManagerRequest& request);

                /**
                 *创建EMR集群实例
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建EMR集群实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *删除自动扩缩容规则，后台销毁根据该规则扩缩容出来的节点
                 * @param req DeleteAutoScaleStrategyRequest
                 * @return DeleteAutoScaleStrategyOutcome
                 */
                DeleteAutoScaleStrategyOutcome DeleteAutoScaleStrategy(const Model::DeleteAutoScaleStrategyRequest &request);
                void DeleteAutoScaleStrategyAsync(const Model::DeleteAutoScaleStrategyRequest& request, const DeleteAutoScaleStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoScaleStrategyOutcomeCallable DeleteAutoScaleStrategyCallable(const Model::DeleteAutoScaleStrategyRequest& request);

                /**
                 *删除用户列表（用户管理）
                 * @param req DeleteUserManagerUserListRequest
                 * @return DeleteUserManagerUserListOutcome
                 */
                DeleteUserManagerUserListOutcome DeleteUserManagerUserList(const Model::DeleteUserManagerUserListRequest &request);
                void DeleteUserManagerUserListAsync(const Model::DeleteUserManagerUserListRequest& request, const DeleteUserManagerUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserManagerUserListOutcomeCallable DeleteUserManagerUserListCallable(const Model::DeleteUserManagerUserListRequest& request);

                /**
                 *yarn资源调度-部署生效
                 * @param req DeployYarnConfRequest
                 * @return DeployYarnConfOutcome
                 */
                DeployYarnConfOutcome DeployYarnConf(const Model::DeployYarnConfRequest &request);
                void DeployYarnConfAsync(const Model::DeployYarnConfRequest& request, const DeployYarnConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployYarnConfOutcomeCallable DeployYarnConfCallable(const Model::DeployYarnConfRequest& request);

                /**
                 *获取自动扩缩容全局配置
                 * @param req DescribeAutoScaleGroupGlobalConfRequest
                 * @return DescribeAutoScaleGroupGlobalConfOutcome
                 */
                DescribeAutoScaleGroupGlobalConfOutcome DescribeAutoScaleGroupGlobalConf(const Model::DescribeAutoScaleGroupGlobalConfRequest &request);
                void DescribeAutoScaleGroupGlobalConfAsync(const Model::DescribeAutoScaleGroupGlobalConfRequest& request, const DescribeAutoScaleGroupGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScaleGroupGlobalConfOutcomeCallable DescribeAutoScaleGroupGlobalConfCallable(const Model::DescribeAutoScaleGroupGlobalConfRequest& request);

                /**
                 *获取集群的自动扩缩容的详细记录
                 * @param req DescribeAutoScaleRecordsRequest
                 * @return DescribeAutoScaleRecordsOutcome
                 */
                DescribeAutoScaleRecordsOutcome DescribeAutoScaleRecords(const Model::DescribeAutoScaleRecordsRequest &request);
                void DescribeAutoScaleRecordsAsync(const Model::DescribeAutoScaleRecordsRequest& request, const DescribeAutoScaleRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScaleRecordsOutcomeCallable DescribeAutoScaleRecordsCallable(const Model::DescribeAutoScaleRecordsRequest& request);

                /**
                 *获取自动扩缩容规则
                 * @param req DescribeAutoScaleStrategiesRequest
                 * @return DescribeAutoScaleStrategiesOutcome
                 */
                DescribeAutoScaleStrategiesOutcome DescribeAutoScaleStrategies(const Model::DescribeAutoScaleStrategiesRequest &request);
                void DescribeAutoScaleStrategiesAsync(const Model::DescribeAutoScaleStrategiesRequest& request, const DescribeAutoScaleStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScaleStrategiesOutcomeCallable DescribeAutoScaleStrategiesCallable(const Model::DescribeAutoScaleStrategiesRequest& request);

                /**
                 *查询EMR任务运行详情状态
                 * @param req DescribeClusterFlowStatusDetailRequest
                 * @return DescribeClusterFlowStatusDetailOutcome
                 */
                DescribeClusterFlowStatusDetailOutcome DescribeClusterFlowStatusDetail(const Model::DescribeClusterFlowStatusDetailRequest &request);
                void DescribeClusterFlowStatusDetailAsync(const Model::DescribeClusterFlowStatusDetailRequest& request, const DescribeClusterFlowStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterFlowStatusDetailOutcomeCallable DescribeClusterFlowStatusDetailCallable(const Model::DescribeClusterFlowStatusDetailRequest& request);

                /**
                 *查询集群节点信息
                 * @param req DescribeClusterNodesRequest
                 * @return DescribeClusterNodesOutcome
                 */
                DescribeClusterNodesOutcome DescribeClusterNodes(const Model::DescribeClusterNodesRequest &request);
                void DescribeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodesOutcomeCallable DescribeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request);

                /**
                 *获取账户的CVM配额
                 * @param req DescribeCvmQuotaRequest
                 * @return DescribeCvmQuotaOutcome
                 */
                DescribeCvmQuotaOutcome DescribeCvmQuota(const Model::DescribeCvmQuotaRequest &request);
                void DescribeCvmQuotaAsync(const Model::DescribeCvmQuotaRequest& request, const DescribeCvmQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCvmQuotaOutcomeCallable DescribeCvmQuotaCallable(const Model::DescribeCvmQuotaRequest& request);

                /**
                 *yarn application 统计接口查询
                 * @param req DescribeEmrApplicationStaticsRequest
                 * @return DescribeEmrApplicationStaticsOutcome
                 */
                DescribeEmrApplicationStaticsOutcome DescribeEmrApplicationStatics(const Model::DescribeEmrApplicationStaticsRequest &request);
                void DescribeEmrApplicationStaticsAsync(const Model::DescribeEmrApplicationStaticsRequest& request, const DescribeEmrApplicationStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmrApplicationStaticsOutcomeCallable DescribeEmrApplicationStaticsCallable(const Model::DescribeEmrApplicationStaticsRequest& request);

                /**
                 *查询监控概览页指标数据
                 * @param req DescribeEmrOverviewMetricsRequest
                 * @return DescribeEmrOverviewMetricsOutcome
                 */
                DescribeEmrOverviewMetricsOutcome DescribeEmrOverviewMetrics(const Model::DescribeEmrOverviewMetricsRequest &request);
                void DescribeEmrOverviewMetricsAsync(const Model::DescribeEmrOverviewMetricsRequest& request, const DescribeEmrOverviewMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmrOverviewMetricsOutcomeCallable DescribeEmrOverviewMetricsCallable(const Model::DescribeEmrOverviewMetricsRequest& request);

                /**
                 *获取Hbase表级监控数据概览接口
                 * @param req DescribeHBaseTableOverviewRequest
                 * @return DescribeHBaseTableOverviewOutcome
                 */
                DescribeHBaseTableOverviewOutcome DescribeHBaseTableOverview(const Model::DescribeHBaseTableOverviewRequest &request);
                void DescribeHBaseTableOverviewAsync(const Model::DescribeHBaseTableOverviewRequest& request, const DescribeHBaseTableOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHBaseTableOverviewOutcomeCallable DescribeHBaseTableOverviewCallable(const Model::DescribeHBaseTableOverviewRequest& request);

                /**
                 *获取hive查询信息
                 * @param req DescribeHiveQueriesRequest
                 * @return DescribeHiveQueriesOutcome
                 */
                DescribeHiveQueriesOutcome DescribeHiveQueries(const Model::DescribeHiveQueriesRequest &request);
                void DescribeHiveQueriesAsync(const Model::DescribeHiveQueriesRequest& request, const DescribeHiveQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHiveQueriesOutcomeCallable DescribeHiveQueriesCallable(const Model::DescribeHiveQueriesRequest& request);

                /**
                 *DescribeImpalaQueries
                 * @param req DescribeImpalaQueriesRequest
                 * @return DescribeImpalaQueriesOutcome
                 */
                DescribeImpalaQueriesOutcome DescribeImpalaQueries(const Model::DescribeImpalaQueriesRequest &request);
                void DescribeImpalaQueriesAsync(const Model::DescribeImpalaQueriesRequest& request, const DescribeImpalaQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImpalaQueriesOutcomeCallable DescribeImpalaQueriesCallable(const Model::DescribeImpalaQueriesRequest& request);

                /**
                 *获取洞察结果信息
                 * @param req DescribeInsightListRequest
                 * @return DescribeInsightListOutcome
                 */
                DescribeInsightListOutcome DescribeInsightList(const Model::DescribeInsightListRequest &request);
                void DescribeInsightListAsync(const Model::DescribeInsightListRequest& request, const DescribeInsightListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInsightListOutcomeCallable DescribeInsightListCallable(const Model::DescribeInsightListRequest& request);

                /**
                 *查询待续费节点信息
                 * @param req DescribeInstanceRenewNodesRequest
                 * @return DescribeInstanceRenewNodesOutcome
                 */
                DescribeInstanceRenewNodesOutcome DescribeInstanceRenewNodes(const Model::DescribeInstanceRenewNodesRequest &request);
                void DescribeInstanceRenewNodesAsync(const Model::DescribeInstanceRenewNodesRequest& request, const DescribeInstanceRenewNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceRenewNodesOutcomeCallable DescribeInstanceRenewNodesCallable(const Model::DescribeInstanceRenewNodesRequest& request);

                /**
                 *查询集群实例信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *查询集群列表
                 * @param req DescribeInstancesListRequest
                 * @return DescribeInstancesListOutcome
                 */
                DescribeInstancesListOutcome DescribeInstancesList(const Model::DescribeInstancesListRequest &request);
                void DescribeInstancesListAsync(const Model::DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesListOutcomeCallable DescribeInstancesListCallable(const Model::DescribeInstancesListRequest& request);

                /**
                 *查询流程任务
                 * @param req DescribeJobFlowRequest
                 * @return DescribeJobFlowOutcome
                 */
                DescribeJobFlowOutcome DescribeJobFlow(const Model::DescribeJobFlowRequest &request);
                void DescribeJobFlowAsync(const Model::DescribeJobFlowRequest& request, const DescribeJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobFlowOutcomeCallable DescribeJobFlowCallable(const Model::DescribeJobFlowRequest& request);

                /**
                 *查询YARN资源调度数据信息。已废弃，请使用`DescribeYarnQueue`去查询队列信息。
                 * @param req DescribeResourceScheduleRequest
                 * @return DescribeResourceScheduleOutcome
                 */
                DescribeResourceScheduleOutcome DescribeResourceSchedule(const Model::DescribeResourceScheduleRequest &request);
                void DescribeResourceScheduleAsync(const Model::DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceScheduleOutcomeCallable DescribeResourceScheduleCallable(const Model::DescribeResourceScheduleRequest& request);

                /**
                 *查询服务进程信息
                 * @param req DescribeServiceNodeInfosRequest
                 * @return DescribeServiceNodeInfosOutcome
                 */
                DescribeServiceNodeInfosOutcome DescribeServiceNodeInfos(const Model::DescribeServiceNodeInfosRequest &request);
                void DescribeServiceNodeInfosAsync(const Model::DescribeServiceNodeInfosRequest& request, const DescribeServiceNodeInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceNodeInfosOutcomeCallable DescribeServiceNodeInfosCallable(const Model::DescribeServiceNodeInfosRequest& request);

                /**
                 *获取trino查询结果
                 * @param req DescribeTrinoQueryInfoRequest
                 * @return DescribeTrinoQueryInfoOutcome
                 */
                DescribeTrinoQueryInfoOutcome DescribeTrinoQueryInfo(const Model::DescribeTrinoQueryInfoRequest &request);
                void DescribeTrinoQueryInfoAsync(const Model::DescribeTrinoQueryInfoRequest& request, const DescribeTrinoQueryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrinoQueryInfoOutcomeCallable DescribeTrinoQueryInfoCallable(const Model::DescribeTrinoQueryInfoRequest& request);

                /**
                 *该接口支持安装了OpenLdap组件的集群。
批量导出用户。对于kerberos集群，如果需要kertab文件下载地址，可以将NeedKeytabInfo设置为true；注意SupportDownLoadKeyTab为true，但是DownLoadKeyTabUrl为空字符串，表示keytab文件在后台没有准备好（正在生成）。
                 * @param req DescribeUsersForUserManagerRequest
                 * @return DescribeUsersForUserManagerOutcome
                 */
                DescribeUsersForUserManagerOutcome DescribeUsersForUserManager(const Model::DescribeUsersForUserManagerRequest &request);
                void DescribeUsersForUserManagerAsync(const Model::DescribeUsersForUserManagerRequest& request, const DescribeUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersForUserManagerOutcomeCallable DescribeUsersForUserManagerCallable(const Model::DescribeUsersForUserManagerRequest& request);

                /**
                 *DescribeYarnApplications
                 * @param req DescribeYarnApplicationsRequest
                 * @return DescribeYarnApplicationsOutcome
                 */
                DescribeYarnApplicationsOutcome DescribeYarnApplications(const Model::DescribeYarnApplicationsRequest &request);
                void DescribeYarnApplicationsAsync(const Model::DescribeYarnApplicationsRequest& request, const DescribeYarnApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeYarnApplicationsOutcomeCallable DescribeYarnApplicationsCallable(const Model::DescribeYarnApplicationsRequest& request);

                /**
                 *获取资源调度中的队列信息
                 * @param req DescribeYarnQueueRequest
                 * @return DescribeYarnQueueOutcome
                 */
                DescribeYarnQueueOutcome DescribeYarnQueue(const Model::DescribeYarnQueueRequest &request);
                void DescribeYarnQueueAsync(const Model::DescribeYarnQueueRequest& request, const DescribeYarnQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeYarnQueueOutcomeCallable DescribeYarnQueueCallable(const Model::DescribeYarnQueueRequest& request);

                /**
                 *查看yarn资源调度的调度历史。废弃，请使用流程中心查看历史记录。
                 * @param req DescribeYarnScheduleHistoryRequest
                 * @return DescribeYarnScheduleHistoryOutcome
                 */
                DescribeYarnScheduleHistoryOutcome DescribeYarnScheduleHistory(const Model::DescribeYarnScheduleHistoryRequest &request);
                void DescribeYarnScheduleHistoryAsync(const Model::DescribeYarnScheduleHistoryRequest& request, const DescribeYarnScheduleHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeYarnScheduleHistoryOutcomeCallable DescribeYarnScheduleHistoryCallable(const Model::DescribeYarnScheduleHistoryRequest& request);

                /**
                 *集群续费询价。
                 * @param req InquirePriceRenewEmrRequest
                 * @return InquirePriceRenewEmrOutcome
                 */
                InquirePriceRenewEmrOutcome InquirePriceRenewEmr(const Model::InquirePriceRenewEmrRequest &request);
                void InquirePriceRenewEmrAsync(const Model::InquirePriceRenewEmrRequest& request, const InquirePriceRenewEmrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewEmrOutcomeCallable InquirePriceRenewEmrCallable(const Model::InquirePriceRenewEmrRequest& request);

                /**
                 *创建实例询价
                 * @param req InquiryPriceCreateInstanceRequest
                 * @return InquiryPriceCreateInstanceOutcome
                 */
                InquiryPriceCreateInstanceOutcome InquiryPriceCreateInstance(const Model::InquiryPriceCreateInstanceRequest &request);
                void InquiryPriceCreateInstanceAsync(const Model::InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateInstanceOutcomeCallable InquiryPriceCreateInstanceCallable(const Model::InquiryPriceCreateInstanceRequest& request);

                /**
                 *续费询价。
                 * @param req InquiryPriceRenewInstanceRequest
                 * @return InquiryPriceRenewInstanceOutcome
                 */
                InquiryPriceRenewInstanceOutcome InquiryPriceRenewInstance(const Model::InquiryPriceRenewInstanceRequest &request);
                void InquiryPriceRenewInstanceAsync(const Model::InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewInstanceOutcomeCallable InquiryPriceRenewInstanceCallable(const Model::InquiryPriceRenewInstanceRequest& request);

                /**
                 *扩容询价. 当扩容时候，请通过该接口查询价格。
                 * @param req InquiryPriceScaleOutInstanceRequest
                 * @return InquiryPriceScaleOutInstanceOutcome
                 */
                InquiryPriceScaleOutInstanceOutcome InquiryPriceScaleOutInstance(const Model::InquiryPriceScaleOutInstanceRequest &request);
                void InquiryPriceScaleOutInstanceAsync(const Model::InquiryPriceScaleOutInstanceRequest& request, const InquiryPriceScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceScaleOutInstanceOutcomeCallable InquiryPriceScaleOutInstanceCallable(const Model::InquiryPriceScaleOutInstanceRequest& request);

                /**
                 *变配询价
                 * @param req InquiryPriceUpdateInstanceRequest
                 * @return InquiryPriceUpdateInstanceOutcome
                 */
                InquiryPriceUpdateInstanceOutcome InquiryPriceUpdateInstance(const Model::InquiryPriceUpdateInstanceRequest &request);
                void InquiryPriceUpdateInstanceAsync(const Model::InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpdateInstanceOutcomeCallable InquiryPriceUpdateInstanceCallable(const Model::InquiryPriceUpdateInstanceRequest& request);

                /**
                 *前提：预付费集群
资源级别开启或关闭自动续费
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *修改自动扩缩容规则
                 * @param req ModifyAutoScaleStrategyRequest
                 * @return ModifyAutoScaleStrategyOutcome
                 */
                ModifyAutoScaleStrategyOutcome ModifyAutoScaleStrategy(const Model::ModifyAutoScaleStrategyRequest &request);
                void ModifyAutoScaleStrategyAsync(const Model::ModifyAutoScaleStrategyRequest& request, const ModifyAutoScaleStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoScaleStrategyOutcomeCallable ModifyAutoScaleStrategyCallable(const Model::ModifyAutoScaleStrategyRequest& request);

                /**
                 *刷新YARN的动态资源池。已废弃，请使用`DeployYarnConf`
                 * @param req ModifyResourcePoolsRequest
                 * @return ModifyResourcePoolsOutcome
                 */
                ModifyResourcePoolsOutcome ModifyResourcePools(const Model::ModifyResourcePoolsRequest &request);
                void ModifyResourcePoolsAsync(const Model::ModifyResourcePoolsRequest& request, const ModifyResourcePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourcePoolsOutcomeCallable ModifyResourcePoolsCallable(const Model::ModifyResourcePoolsRequest& request);

                /**
                 *修改YARN资源调度的资源配置。已废弃，请使用`ModifyYarnQueueV2`来修改队列配置
                 * @param req ModifyResourceScheduleConfigRequest
                 * @return ModifyResourceScheduleConfigOutcome
                 */
                ModifyResourceScheduleConfigOutcome ModifyResourceScheduleConfig(const Model::ModifyResourceScheduleConfigRequest &request);
                void ModifyResourceScheduleConfigAsync(const Model::ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceScheduleConfigOutcomeCallable ModifyResourceScheduleConfigCallable(const Model::ModifyResourceScheduleConfigRequest& request);

                /**
                 *修改了yarn的资源调度器，点击部署生效。
                 * @param req ModifyResourceSchedulerRequest
                 * @return ModifyResourceSchedulerOutcome
                 */
                ModifyResourceSchedulerOutcome ModifyResourceScheduler(const Model::ModifyResourceSchedulerRequest &request);
                void ModifyResourceSchedulerAsync(const Model::ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceSchedulerOutcomeCallable ModifyResourceSchedulerCallable(const Model::ModifyResourceSchedulerRequest& request);

                /**
                 *强制修改标签
                 * @param req ModifyResourcesTagsRequest
                 * @return ModifyResourcesTagsOutcome
                 */
                ModifyResourcesTagsOutcome ModifyResourcesTags(const Model::ModifyResourcesTagsRequest &request);
                void ModifyResourcesTagsAsync(const Model::ModifyResourcesTagsRequest& request, const ModifyResourcesTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourcesTagsOutcomeCallable ModifyResourcesTagsCallable(const Model::ModifyResourcesTagsRequest& request);

                /**
                 *修改用户密码（用户管理）
                 * @param req ModifyUserManagerPwdRequest
                 * @return ModifyUserManagerPwdOutcome
                 */
                ModifyUserManagerPwdOutcome ModifyUserManagerPwd(const Model::ModifyUserManagerPwdRequest &request);
                void ModifyUserManagerPwdAsync(const Model::ModifyUserManagerPwdRequest& request, const ModifyUserManagerPwdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserManagerPwdOutcomeCallable ModifyUserManagerPwdCallable(const Model::ModifyUserManagerPwdRequest& request);

                /**
                 *部署生效。已废弃，请使用`DeployYarnConf`接口进行部署生效
                 * @param req ModifyYarnDeployRequest
                 * @return ModifyYarnDeployOutcome
                 */
                ModifyYarnDeployOutcome ModifyYarnDeploy(const Model::ModifyYarnDeployRequest &request);
                void ModifyYarnDeployAsync(const Model::ModifyYarnDeployRequest& request, const ModifyYarnDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyYarnDeployOutcomeCallable ModifyYarnDeployCallable(const Model::ModifyYarnDeployRequest& request);

                /**
                 *修改资源调度中队列信息
                 * @param req ModifyYarnQueueV2Request
                 * @return ModifyYarnQueueV2Outcome
                 */
                ModifyYarnQueueV2Outcome ModifyYarnQueueV2(const Model::ModifyYarnQueueV2Request &request);
                void ModifyYarnQueueV2Async(const Model::ModifyYarnQueueV2Request& request, const ModifyYarnQueueV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyYarnQueueV2OutcomeCallable ModifyYarnQueueV2Callable(const Model::ModifyYarnQueueV2Request& request);

                /**
                 *修改YARN资源调度的资源配置
                 * @param req ResetYarnConfigRequest
                 * @return ResetYarnConfigOutcome
                 */
                ResetYarnConfigOutcome ResetYarnConfig(const Model::ResetYarnConfigRequest &request);
                void ResetYarnConfigAsync(const Model::ResetYarnConfigRequest& request, const ResetYarnConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetYarnConfigOutcomeCallable ResetYarnConfigCallable(const Model::ResetYarnConfigRequest& request);

                /**
                 *创建流程作业
                 * @param req RunJobFlowRequest
                 * @return RunJobFlowOutcome
                 */
                RunJobFlowOutcome RunJobFlow(const Model::RunJobFlowRequest &request);
                void RunJobFlowAsync(const Model::RunJobFlowRequest& request, const RunJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunJobFlowOutcomeCallable RunJobFlowCallable(const Model::RunJobFlowRequest& request);

                /**
                 *扩容集群节点
                 * @param req ScaleOutClusterRequest
                 * @return ScaleOutClusterOutcome
                 */
                ScaleOutClusterOutcome ScaleOutCluster(const Model::ScaleOutClusterRequest &request);
                void ScaleOutClusterAsync(const Model::ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutClusterOutcomeCallable ScaleOutClusterCallable(const Model::ScaleOutClusterRequest& request);

                /**
                 *扩容节点
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *用于启停服务 重启服务等功能
                 * @param req StartStopServiceOrMonitorRequest
                 * @return StartStopServiceOrMonitorOutcome
                 */
                StartStopServiceOrMonitorOutcome StartStopServiceOrMonitor(const Model::StartStopServiceOrMonitorRequest &request);
                void StartStopServiceOrMonitorAsync(const Model::StartStopServiceOrMonitorRequest& request, const StartStopServiceOrMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStopServiceOrMonitorOutcomeCallable StartStopServiceOrMonitorCallable(const Model::StartStopServiceOrMonitorRequest& request);

                /**
                 *EMR同步TKE中POD状态
                 * @param req SyncPodStateRequest
                 * @return SyncPodStateOutcome
                 */
                SyncPodStateOutcome SyncPodState(const Model::SyncPodStateRequest &request);
                void SyncPodStateAsync(const Model::SyncPodStateRequest& request, const SyncPodStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPodStateOutcomeCallable SyncPodStateCallable(const Model::SyncPodStateRequest& request);

                /**
                 *销毁集群节点
                 * @param req TerminateClusterNodesRequest
                 * @return TerminateClusterNodesOutcome
                 */
                TerminateClusterNodesOutcome TerminateClusterNodes(const Model::TerminateClusterNodesRequest &request);
                void TerminateClusterNodesAsync(const Model::TerminateClusterNodesRequest& request, const TerminateClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateClusterNodesOutcomeCallable TerminateClusterNodesCallable(const Model::TerminateClusterNodesRequest& request);

                /**
                 *销毁EMR实例。此接口仅支持弹性MapReduce正式计费版本。
                 * @param req TerminateInstanceRequest
                 * @return TerminateInstanceOutcome
                 */
                TerminateInstanceOutcome TerminateInstance(const Model::TerminateInstanceRequest &request);
                void TerminateInstanceAsync(const Model::TerminateInstanceRequest& request, const TerminateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstanceOutcomeCallable TerminateInstanceCallable(const Model::TerminateInstanceRequest& request);

                /**
                 *缩容Task节点
                 * @param req TerminateTasksRequest
                 * @return TerminateTasksOutcome
                 */
                TerminateTasksOutcome TerminateTasks(const Model::TerminateTasksRequest &request);
                void TerminateTasksAsync(const Model::TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTasksOutcomeCallable TerminateTasksCallable(const Model::TerminateTasksRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_
