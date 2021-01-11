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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/PutMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/PutMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgRequest.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgResponse.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::BindingPolicyObjectResponse> BindingPolicyObjectOutcome;
                typedef std::future<BindingPolicyObjectOutcome> BindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindingPolicyObjectRequest&, BindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindingPolicyObjectAsyncHandler;
                typedef Outcome<Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Error, Model::CreateAlarmPolicyResponse> CreateAlarmPolicyOutcome;
                typedef std::future<CreateAlarmPolicyOutcome> CreateAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmPolicyRequest&, CreateAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmPolicyAsyncHandler;
                typedef Outcome<Error, Model::CreatePolicyGroupResponse> CreatePolicyGroupOutcome;
                typedef std::future<CreatePolicyGroupOutcome> CreatePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePolicyGroupRequest&, CreatePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceDiscoveryResponse> CreateServiceDiscoveryOutcome;
                typedef std::future<CreateServiceDiscoveryOutcome> CreateServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateServiceDiscoveryRequest&, CreateServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceDiscoveryAsyncHandler;
                typedef Outcome<Error, Model::DeleteAlarmNoticesResponse> DeleteAlarmNoticesOutcome;
                typedef std::future<DeleteAlarmNoticesOutcome> DeleteAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmNoticesRequest&, DeleteAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticesAsyncHandler;
                typedef Outcome<Error, Model::DeleteAlarmPolicyResponse> DeleteAlarmPolicyOutcome;
                typedef std::future<DeleteAlarmPolicyOutcome> DeleteAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmPolicyRequest&, DeleteAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmPolicyAsyncHandler;
                typedef Outcome<Error, Model::DeletePolicyGroupResponse> DeletePolicyGroupOutcome;
                typedef std::future<DeletePolicyGroupOutcome> DeletePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePolicyGroupRequest&, DeletePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceDiscoveryResponse> DeleteServiceDiscoveryOutcome;
                typedef std::future<DeleteServiceDiscoveryOutcome> DeleteServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteServiceDiscoveryRequest&, DeleteServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceDiscoveryAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccidentEventListResponse> DescribeAccidentEventListOutcome;
                typedef std::future<DescribeAccidentEventListOutcome> DescribeAccidentEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAccidentEventListRequest&, DescribeAccidentEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccidentEventListAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmHistoriesResponse> DescribeAlarmHistoriesOutcome;
                typedef std::future<DescribeAlarmHistoriesOutcome> DescribeAlarmHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmHistoriesRequest&, DescribeAlarmHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoriesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmMetricsResponse> DescribeAlarmMetricsOutcome;
                typedef std::future<DescribeAlarmMetricsOutcome> DescribeAlarmMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmMetricsRequest&, DescribeAlarmMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmMetricsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmNoticeResponse> DescribeAlarmNoticeOutcome;
                typedef std::future<DescribeAlarmNoticeOutcome> DescribeAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeRequest&, DescribeAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmNoticeCallbacksResponse> DescribeAlarmNoticeCallbacksOutcome;
                typedef std::future<DescribeAlarmNoticeCallbacksOutcome> DescribeAlarmNoticeCallbacksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeCallbacksRequest&, DescribeAlarmNoticeCallbacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeCallbacksAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmPoliciesResponse> DescribeAlarmPoliciesOutcome;
                typedef std::future<DescribeAlarmPoliciesOutcome> DescribeAlarmPoliciesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPoliciesRequest&, DescribeAlarmPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmPolicyResponse> DescribeAlarmPolicyOutcome;
                typedef std::future<DescribeAlarmPolicyOutcome> DescribeAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPolicyRequest&, DescribeAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPolicyAsyncHandler;
                typedef Outcome<Error, Model::DescribeAllNamespacesResponse> DescribeAllNamespacesOutcome;
                typedef std::future<DescribeAllNamespacesOutcome> DescribeAllNamespacesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAllNamespacesRequest&, DescribeAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllNamespacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBaseMetricsResponse> DescribeBaseMetricsOutcome;
                typedef std::future<DescribeBaseMetricsOutcome> DescribeBaseMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBaseMetricsRequest&, DescribeBaseMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseMetricsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBasicAlarmListResponse> DescribeBasicAlarmListOutcome;
                typedef std::future<DescribeBasicAlarmListOutcome> DescribeBasicAlarmListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBasicAlarmListRequest&, DescribeBasicAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicAlarmListAsyncHandler;
                typedef Outcome<Error, Model::DescribeBindingPolicyObjectListResponse> DescribeBindingPolicyObjectListOutcome;
                typedef std::future<DescribeBindingPolicyObjectListOutcome> DescribeBindingPolicyObjectListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBindingPolicyObjectListRequest&, DescribeBindingPolicyObjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindingPolicyObjectListAsyncHandler;
                typedef Outcome<Error, Model::DescribeMonitorTypesResponse> DescribeMonitorTypesOutcome;
                typedef std::future<DescribeMonitorTypesOutcome> DescribeMonitorTypesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeMonitorTypesRequest&, DescribeMonitorTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorTypesAsyncHandler;
                typedef Outcome<Error, Model::DescribePolicyConditionListResponse> DescribePolicyConditionListOutcome;
                typedef std::future<DescribePolicyConditionListOutcome> DescribePolicyConditionListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyConditionListRequest&, DescribePolicyConditionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConditionListAsyncHandler;
                typedef Outcome<Error, Model::DescribePolicyGroupInfoResponse> DescribePolicyGroupInfoOutcome;
                typedef std::future<DescribePolicyGroupInfoOutcome> DescribePolicyGroupInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupInfoRequest&, DescribePolicyGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribePolicyGroupListResponse> DescribePolicyGroupListOutcome;
                typedef std::future<DescribePolicyGroupListOutcome> DescribePolicyGroupListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupListRequest&, DescribePolicyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupListAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductEventListResponse> DescribeProductEventListOutcome;
                typedef std::future<DescribeProductEventListOutcome> DescribeProductEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductEventListRequest&, DescribeProductEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductEventListAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductListResponse> DescribeProductListOutcome;
                typedef std::future<DescribeProductListOutcome> DescribeProductListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductListRequest&, DescribeProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductListAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceDiscoveryResponse> DescribeServiceDiscoveryOutcome;
                typedef std::future<DescribeServiceDiscoveryOutcome> DescribeServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeServiceDiscoveryRequest&, DescribeServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceDiscoveryAsyncHandler;
                typedef Outcome<Error, Model::DescribeStatisticDataResponse> DescribeStatisticDataOutcome;
                typedef std::future<DescribeStatisticDataOutcome> DescribeStatisticDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeStatisticDataRequest&, DescribeStatisticDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticDataAsyncHandler;
                typedef Outcome<Error, Model::GetMonitorDataResponse> GetMonitorDataOutcome;
                typedef std::future<GetMonitorDataOutcome> GetMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetMonitorDataRequest&, GetMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorDataAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmPolicyConditionResponse> ModifyAlarmPolicyConditionOutcome;
                typedef std::future<ModifyAlarmPolicyConditionOutcome> ModifyAlarmPolicyConditionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyConditionRequest&, ModifyAlarmPolicyConditionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyConditionAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmPolicyInfoResponse> ModifyAlarmPolicyInfoOutcome;
                typedef std::future<ModifyAlarmPolicyInfoOutcome> ModifyAlarmPolicyInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyInfoRequest&, ModifyAlarmPolicyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyInfoAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmPolicyNoticeResponse> ModifyAlarmPolicyNoticeOutcome;
                typedef std::future<ModifyAlarmPolicyNoticeOutcome> ModifyAlarmPolicyNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyNoticeRequest&, ModifyAlarmPolicyNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyNoticeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmPolicyStatusResponse> ModifyAlarmPolicyStatusOutcome;
                typedef std::future<ModifyAlarmPolicyStatusOutcome> ModifyAlarmPolicyStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyStatusRequest&, ModifyAlarmPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmPolicyTasksResponse> ModifyAlarmPolicyTasksOutcome;
                typedef std::future<ModifyAlarmPolicyTasksOutcome> ModifyAlarmPolicyTasksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyTasksRequest&, ModifyAlarmPolicyTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyTasksAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmReceiversResponse> ModifyAlarmReceiversOutcome;
                typedef std::future<ModifyAlarmReceiversOutcome> ModifyAlarmReceiversOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmReceiversRequest&, ModifyAlarmReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmReceiversAsyncHandler;
                typedef Outcome<Error, Model::ModifyPolicyGroupResponse> ModifyPolicyGroupOutcome;
                typedef std::future<ModifyPolicyGroupOutcome> ModifyPolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPolicyGroupRequest&, ModifyPolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyGroupAsyncHandler;
                typedef Outcome<Error, Model::PutMonitorDataResponse> PutMonitorDataOutcome;
                typedef std::future<PutMonitorDataOutcome> PutMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::PutMonitorDataRequest&, PutMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutMonitorDataAsyncHandler;
                typedef Outcome<Error, Model::SendCustomAlarmMsgResponse> SendCustomAlarmMsgOutcome;
                typedef std::future<SendCustomAlarmMsgOutcome> SendCustomAlarmMsgOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SendCustomAlarmMsgRequest&, SendCustomAlarmMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendCustomAlarmMsgAsyncHandler;
                typedef Outcome<Error, Model::SetDefaultAlarmPolicyResponse> SetDefaultAlarmPolicyOutcome;
                typedef std::future<SetDefaultAlarmPolicyOutcome> SetDefaultAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SetDefaultAlarmPolicyRequest&, SetDefaultAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultAlarmPolicyAsyncHandler;
                typedef Outcome<Error, Model::UnBindingAllPolicyObjectResponse> UnBindingAllPolicyObjectOutcome;
                typedef std::future<UnBindingAllPolicyObjectOutcome> UnBindingAllPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingAllPolicyObjectRequest&, UnBindingAllPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingAllPolicyObjectAsyncHandler;
                typedef Outcome<Error, Model::UnBindingPolicyObjectResponse> UnBindingPolicyObjectOutcome;
                typedef std::future<UnBindingPolicyObjectOutcome> UnBindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingPolicyObjectRequest&, UnBindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingPolicyObjectAsyncHandler;
                typedef Outcome<Error, Model::UpdateServiceDiscoveryResponse> UpdateServiceDiscoveryOutcome;
                typedef std::future<UpdateServiceDiscoveryOutcome> UpdateServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateServiceDiscoveryRequest&, UpdateServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceDiscoveryAsyncHandler;



                /**
                 *将告警策略绑定到特定对象
                 * @param req BindingPolicyObjectRequest
                 * @return BindingPolicyObjectOutcome
                 */
                BindingPolicyObjectOutcome BindingPolicyObject(const Model::BindingPolicyObjectRequest &request);
                void BindingPolicyObjectAsync(const Model::BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindingPolicyObjectOutcomeCallable BindingPolicyObjectCallable(const Model::BindingPolicyObjectRequest& request);

                /**
                 *创建通知模板
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *创建告警策略
                 * @param req CreateAlarmPolicyRequest
                 * @return CreateAlarmPolicyOutcome
                 */
                CreateAlarmPolicyOutcome CreateAlarmPolicy(const Model::CreateAlarmPolicyRequest &request);
                void CreateAlarmPolicyAsync(const Model::CreateAlarmPolicyRequest& request, const CreateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmPolicyOutcomeCallable CreateAlarmPolicyCallable(const Model::CreateAlarmPolicyRequest& request);

                /**
                 *增加策略组
                 * @param req CreatePolicyGroupRequest
                 * @return CreatePolicyGroupOutcome
                 */
                CreatePolicyGroupOutcome CreatePolicyGroup(const Model::CreatePolicyGroupRequest &request);
                void CreatePolicyGroupAsync(const Model::CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyGroupOutcomeCallable CreatePolicyGroupCallable(const Model::CreatePolicyGroupRequest& request);

                /**
                 *在腾讯云容器服务下创建 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req CreateServiceDiscoveryRequest
                 * @return CreateServiceDiscoveryOutcome
                 */
                CreateServiceDiscoveryOutcome CreateServiceDiscovery(const Model::CreateServiceDiscoveryRequest &request);
                void CreateServiceDiscoveryAsync(const Model::CreateServiceDiscoveryRequest& request, const CreateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceDiscoveryOutcomeCallable CreateServiceDiscoveryCallable(const Model::CreateServiceDiscoveryRequest& request);

                /**
                 *云监控告警删除告警通知模板
                 * @param req DeleteAlarmNoticesRequest
                 * @return DeleteAlarmNoticesOutcome
                 */
                DeleteAlarmNoticesOutcome DeleteAlarmNotices(const Model::DeleteAlarmNoticesRequest &request);
                void DeleteAlarmNoticesAsync(const Model::DeleteAlarmNoticesRequest& request, const DeleteAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticesOutcomeCallable DeleteAlarmNoticesCallable(const Model::DeleteAlarmNoticesRequest& request);

                /**
                 *删除告警策略
                 * @param req DeleteAlarmPolicyRequest
                 * @return DeleteAlarmPolicyOutcome
                 */
                DeleteAlarmPolicyOutcome DeleteAlarmPolicy(const Model::DeleteAlarmPolicyRequest &request);
                void DeleteAlarmPolicyAsync(const Model::DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmPolicyOutcomeCallable DeleteAlarmPolicyCallable(const Model::DeleteAlarmPolicyRequest& request);

                /**
                 *删除告警策略组
                 * @param req DeletePolicyGroupRequest
                 * @return DeletePolicyGroupOutcome
                 */
                DeletePolicyGroupOutcome DeletePolicyGroup(const Model::DeletePolicyGroupRequest &request);
                void DeletePolicyGroupAsync(const Model::DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyGroupOutcomeCallable DeletePolicyGroupCallable(const Model::DeletePolicyGroupRequest& request);

                /**
                 *删除在腾讯云容器服务下创建的 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req DeleteServiceDiscoveryRequest
                 * @return DeleteServiceDiscoveryOutcome
                 */
                DeleteServiceDiscoveryOutcome DeleteServiceDiscovery(const Model::DeleteServiceDiscoveryRequest &request);
                void DeleteServiceDiscoveryAsync(const Model::DeleteServiceDiscoveryRequest& request, const DeleteServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceDiscoveryOutcomeCallable DeleteServiceDiscoveryCallable(const Model::DeleteServiceDiscoveryRequest& request);

                /**
                 *获取平台事件列表
                 * @param req DescribeAccidentEventListRequest
                 * @return DescribeAccidentEventListOutcome
                 */
                DescribeAccidentEventListOutcome DescribeAccidentEventList(const Model::DescribeAccidentEventListRequest &request);
                void DescribeAccidentEventListAsync(const Model::DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccidentEventListOutcomeCallable DescribeAccidentEventListCallable(const Model::DescribeAccidentEventListRequest& request);

                /**
                 *查询告警事件列表
                 * @param req DescribeAlarmEventsRequest
                 * @return DescribeAlarmEventsOutcome
                 */
                DescribeAlarmEventsOutcome DescribeAlarmEvents(const Model::DescribeAlarmEventsRequest &request);
                void DescribeAlarmEventsAsync(const Model::DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmEventsOutcomeCallable DescribeAlarmEventsCallable(const Model::DescribeAlarmEventsRequest& request);

                /**
                 *查询告警历史
                 * @param req DescribeAlarmHistoriesRequest
                 * @return DescribeAlarmHistoriesOutcome
                 */
                DescribeAlarmHistoriesOutcome DescribeAlarmHistories(const Model::DescribeAlarmHistoriesRequest &request);
                void DescribeAlarmHistoriesAsync(const Model::DescribeAlarmHistoriesRequest& request, const DescribeAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmHistoriesOutcomeCallable DescribeAlarmHistoriesCallable(const Model::DescribeAlarmHistoriesRequest& request);

                /**
                 *查询告警指标列表
                 * @param req DescribeAlarmMetricsRequest
                 * @return DescribeAlarmMetricsOutcome
                 */
                DescribeAlarmMetricsOutcome DescribeAlarmMetrics(const Model::DescribeAlarmMetricsRequest &request);
                void DescribeAlarmMetricsAsync(const Model::DescribeAlarmMetricsRequest& request, const DescribeAlarmMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmMetricsOutcomeCallable DescribeAlarmMetricsCallable(const Model::DescribeAlarmMetricsRequest& request);

                /**
                 *查询单个通知模板的详情
                 * @param req DescribeAlarmNoticeRequest
                 * @return DescribeAlarmNoticeOutcome
                 */
                DescribeAlarmNoticeOutcome DescribeAlarmNotice(const Model::DescribeAlarmNoticeRequest &request);
                void DescribeAlarmNoticeAsync(const Model::DescribeAlarmNoticeRequest& request, const DescribeAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeOutcomeCallable DescribeAlarmNoticeCallable(const Model::DescribeAlarmNoticeRequest& request);

                /**
                 *云监控告警获取告警通知模板所有回调URL
                 * @param req DescribeAlarmNoticeCallbacksRequest
                 * @return DescribeAlarmNoticeCallbacksOutcome
                 */
                DescribeAlarmNoticeCallbacksOutcome DescribeAlarmNoticeCallbacks(const Model::DescribeAlarmNoticeCallbacksRequest &request);
                void DescribeAlarmNoticeCallbacksAsync(const Model::DescribeAlarmNoticeCallbacksRequest& request, const DescribeAlarmNoticeCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeCallbacksOutcomeCallable DescribeAlarmNoticeCallbacksCallable(const Model::DescribeAlarmNoticeCallbacksRequest& request);

                /**
                 *查询通知模板列表
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *查询告警策略列表
                 * @param req DescribeAlarmPoliciesRequest
                 * @return DescribeAlarmPoliciesOutcome
                 */
                DescribeAlarmPoliciesOutcome DescribeAlarmPolicies(const Model::DescribeAlarmPoliciesRequest &request);
                void DescribeAlarmPoliciesAsync(const Model::DescribeAlarmPoliciesRequest& request, const DescribeAlarmPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPoliciesOutcomeCallable DescribeAlarmPoliciesCallable(const Model::DescribeAlarmPoliciesRequest& request);

                /**
                 *获取单个告警策略详情
                 * @param req DescribeAlarmPolicyRequest
                 * @return DescribeAlarmPolicyOutcome
                 */
                DescribeAlarmPolicyOutcome DescribeAlarmPolicy(const Model::DescribeAlarmPolicyRequest &request);
                void DescribeAlarmPolicyAsync(const Model::DescribeAlarmPolicyRequest& request, const DescribeAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPolicyOutcomeCallable DescribeAlarmPolicyCallable(const Model::DescribeAlarmPolicyRequest& request);

                /**
                 *查询所有名字空间
                 * @param req DescribeAllNamespacesRequest
                 * @return DescribeAllNamespacesOutcome
                 */
                DescribeAllNamespacesOutcome DescribeAllNamespaces(const Model::DescribeAllNamespacesRequest &request);
                void DescribeAllNamespacesAsync(const Model::DescribeAllNamespacesRequest& request, const DescribeAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllNamespacesOutcomeCallable DescribeAllNamespacesCallable(const Model::DescribeAllNamespacesRequest& request);

                /**
                 *获取基础指标详情
                 * @param req DescribeBaseMetricsRequest
                 * @return DescribeBaseMetricsOutcome
                 */
                DescribeBaseMetricsOutcome DescribeBaseMetrics(const Model::DescribeBaseMetricsRequest &request);
                void DescribeBaseMetricsAsync(const Model::DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseMetricsOutcomeCallable DescribeBaseMetricsCallable(const Model::DescribeBaseMetricsRequest& request);

                /**
                 *获取基础告警列表
                 * @param req DescribeBasicAlarmListRequest
                 * @return DescribeBasicAlarmListOutcome
                 */
                DescribeBasicAlarmListOutcome DescribeBasicAlarmList(const Model::DescribeBasicAlarmListRequest &request);
                void DescribeBasicAlarmListAsync(const Model::DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicAlarmListOutcomeCallable DescribeBasicAlarmListCallable(const Model::DescribeBasicAlarmListRequest& request);

                /**
                 *获取已绑定对象列表
                 * @param req DescribeBindingPolicyObjectListRequest
                 * @return DescribeBindingPolicyObjectListOutcome
                 */
                DescribeBindingPolicyObjectListOutcome DescribeBindingPolicyObjectList(const Model::DescribeBindingPolicyObjectListRequest &request);
                void DescribeBindingPolicyObjectListAsync(const Model::DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindingPolicyObjectListOutcomeCallable DescribeBindingPolicyObjectListCallable(const Model::DescribeBindingPolicyObjectListRequest& request);

                /**
                 *云监控支持多种类型的监控，此接口列出支持的所有类型
                 * @param req DescribeMonitorTypesRequest
                 * @return DescribeMonitorTypesOutcome
                 */
                DescribeMonitorTypesOutcome DescribeMonitorTypes(const Model::DescribeMonitorTypesRequest &request);
                void DescribeMonitorTypesAsync(const Model::DescribeMonitorTypesRequest& request, const DescribeMonitorTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorTypesOutcomeCallable DescribeMonitorTypesCallable(const Model::DescribeMonitorTypesRequest& request);

                /**
                 *获取基础告警策略条件
                 * @param req DescribePolicyConditionListRequest
                 * @return DescribePolicyConditionListOutcome
                 */
                DescribePolicyConditionListOutcome DescribePolicyConditionList(const Model::DescribePolicyConditionListRequest &request);
                void DescribePolicyConditionListAsync(const Model::DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConditionListOutcomeCallable DescribePolicyConditionListCallable(const Model::DescribePolicyConditionListRequest& request);

                /**
                 *获取基础策略组详情
                 * @param req DescribePolicyGroupInfoRequest
                 * @return DescribePolicyGroupInfoOutcome
                 */
                DescribePolicyGroupInfoOutcome DescribePolicyGroupInfo(const Model::DescribePolicyGroupInfoRequest &request);
                void DescribePolicyGroupInfoAsync(const Model::DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupInfoOutcomeCallable DescribePolicyGroupInfoCallable(const Model::DescribePolicyGroupInfoRequest& request);

                /**
                 *获取基础策略告警组列表
                 * @param req DescribePolicyGroupListRequest
                 * @return DescribePolicyGroupListOutcome
                 */
                DescribePolicyGroupListOutcome DescribePolicyGroupList(const Model::DescribePolicyGroupListRequest &request);
                void DescribePolicyGroupListAsync(const Model::DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupListOutcomeCallable DescribePolicyGroupListCallable(const Model::DescribePolicyGroupListRequest& request);

                /**
                 *分页获取产品事件的列表
                 * @param req DescribeProductEventListRequest
                 * @return DescribeProductEventListOutcome
                 */
                DescribeProductEventListOutcome DescribeProductEventList(const Model::DescribeProductEventListRequest &request);
                void DescribeProductEventListAsync(const Model::DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductEventListOutcomeCallable DescribeProductEventListCallable(const Model::DescribeProductEventListRequest& request);

                /**
                 *查询云监控产品列表
                 * @param req DescribeProductListRequest
                 * @return DescribeProductListOutcome
                 */
                DescribeProductListOutcome DescribeProductList(const Model::DescribeProductListRequest &request);
                void DescribeProductListAsync(const Model::DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductListOutcomeCallable DescribeProductListCallable(const Model::DescribeProductListRequest& request);

                /**
                 *列出在腾讯云容器服务下创建的 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req DescribeServiceDiscoveryRequest
                 * @return DescribeServiceDiscoveryOutcome
                 */
                DescribeServiceDiscoveryOutcome DescribeServiceDiscovery(const Model::DescribeServiceDiscoveryRequest &request);
                void DescribeServiceDiscoveryAsync(const Model::DescribeServiceDiscoveryRequest& request, const DescribeServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceDiscoveryOutcomeCallable DescribeServiceDiscoveryCallable(const Model::DescribeServiceDiscoveryRequest& request);

                /**
                 *根据维度条件查询监控数据
                 * @param req DescribeStatisticDataRequest
                 * @return DescribeStatisticDataOutcome
                 */
                DescribeStatisticDataOutcome DescribeStatisticData(const Model::DescribeStatisticDataRequest &request);
                void DescribeStatisticDataAsync(const Model::DescribeStatisticDataRequest& request, const DescribeStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticDataOutcomeCallable DescribeStatisticDataCallable(const Model::DescribeStatisticDataRequest& request);

                /**
                 *获取云产品的监控数据。传入产品的命名空间、对象维度描述和监控指标即可获得相应的监控数据。
接口调用频率限制为：20次/秒，1200次/分钟。单请求最多可支持批量拉取10个实例的监控数据，单请求的数据点数限制为1440个。
若您需要调用的指标、对象较多，可能存在因限频出现拉取失败的情况，建议尽量将请求按时间维度均摊。
                 * @param req GetMonitorDataRequest
                 * @return GetMonitorDataOutcome
                 */
                GetMonitorDataOutcome GetMonitorData(const Model::GetMonitorDataRequest &request);
                void GetMonitorDataAsync(const Model::GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMonitorDataOutcomeCallable GetMonitorDataCallable(const Model::GetMonitorDataRequest& request);

                /**
                 *云监控告警编辑告警通知模板
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *编辑告警策略触发条件
                 * @param req ModifyAlarmPolicyConditionRequest
                 * @return ModifyAlarmPolicyConditionOutcome
                 */
                ModifyAlarmPolicyConditionOutcome ModifyAlarmPolicyCondition(const Model::ModifyAlarmPolicyConditionRequest &request);
                void ModifyAlarmPolicyConditionAsync(const Model::ModifyAlarmPolicyConditionRequest& request, const ModifyAlarmPolicyConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyConditionOutcomeCallable ModifyAlarmPolicyConditionCallable(const Model::ModifyAlarmPolicyConditionRequest& request);

                /**
                 *告警2.0编辑告警策略基本信息，包括策略名、备注
                 * @param req ModifyAlarmPolicyInfoRequest
                 * @return ModifyAlarmPolicyInfoOutcome
                 */
                ModifyAlarmPolicyInfoOutcome ModifyAlarmPolicyInfo(const Model::ModifyAlarmPolicyInfoRequest &request);
                void ModifyAlarmPolicyInfoAsync(const Model::ModifyAlarmPolicyInfoRequest& request, const ModifyAlarmPolicyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyInfoOutcomeCallable ModifyAlarmPolicyInfoCallable(const Model::ModifyAlarmPolicyInfoRequest& request);

                /**
                 *云监控告警修改告警策略绑定的告警通知模板
                 * @param req ModifyAlarmPolicyNoticeRequest
                 * @return ModifyAlarmPolicyNoticeOutcome
                 */
                ModifyAlarmPolicyNoticeOutcome ModifyAlarmPolicyNotice(const Model::ModifyAlarmPolicyNoticeRequest &request);
                void ModifyAlarmPolicyNoticeAsync(const Model::ModifyAlarmPolicyNoticeRequest& request, const ModifyAlarmPolicyNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyNoticeOutcomeCallable ModifyAlarmPolicyNoticeCallable(const Model::ModifyAlarmPolicyNoticeRequest& request);

                /**
                 *启停告警策略
                 * @param req ModifyAlarmPolicyStatusRequest
                 * @return ModifyAlarmPolicyStatusOutcome
                 */
                ModifyAlarmPolicyStatusOutcome ModifyAlarmPolicyStatus(const Model::ModifyAlarmPolicyStatusRequest &request);
                void ModifyAlarmPolicyStatusAsync(const Model::ModifyAlarmPolicyStatusRequest& request, const ModifyAlarmPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyStatusOutcomeCallable ModifyAlarmPolicyStatusCallable(const Model::ModifyAlarmPolicyStatusRequest& request);

                /**
                 *云监控告警修改告警策略的触发任务，TriggerTasks字段放触发任务列表，TriggerTasks传空数组时，代表解绑该策略的所有触发任务。
                 * @param req ModifyAlarmPolicyTasksRequest
                 * @return ModifyAlarmPolicyTasksOutcome
                 */
                ModifyAlarmPolicyTasksOutcome ModifyAlarmPolicyTasks(const Model::ModifyAlarmPolicyTasksRequest &request);
                void ModifyAlarmPolicyTasksAsync(const Model::ModifyAlarmPolicyTasksRequest& request, const ModifyAlarmPolicyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyTasksOutcomeCallable ModifyAlarmPolicyTasksCallable(const Model::ModifyAlarmPolicyTasksRequest& request);

                /**
                 *修改告警接收人
                 * @param req ModifyAlarmReceiversRequest
                 * @return ModifyAlarmReceiversOutcome
                 */
                ModifyAlarmReceiversOutcome ModifyAlarmReceivers(const Model::ModifyAlarmReceiversRequest &request);
                void ModifyAlarmReceiversAsync(const Model::ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmReceiversOutcomeCallable ModifyAlarmReceiversCallable(const Model::ModifyAlarmReceiversRequest& request);

                /**
                 *更新策略组
                 * @param req ModifyPolicyGroupRequest
                 * @return ModifyPolicyGroupOutcome
                 */
                ModifyPolicyGroupOutcome ModifyPolicyGroup(const Model::ModifyPolicyGroupRequest &request);
                void ModifyPolicyGroupAsync(const Model::ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyGroupOutcomeCallable ModifyPolicyGroupCallable(const Model::ModifyPolicyGroupRequest& request);

                /**
                 *默认接口请求频率限制：50次/秒。
默认单租户指标上限：100个。
单次上报最多 30 个指标/值对，请求返回错误时，请求中所有的指标/值均不会被保存。

上报的时间戳为期望保存的时间戳，建议构造整数分钟时刻的时间戳。
时间戳时间范围必须为当前时间到 300 秒前之间。
同一 IP 指标对的数据需按分钟先后顺序上报。
                 * @param req PutMonitorDataRequest
                 * @return PutMonitorDataOutcome
                 */
                PutMonitorDataOutcome PutMonitorData(const Model::PutMonitorDataRequest &request);
                void PutMonitorDataAsync(const Model::PutMonitorDataRequest& request, const PutMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutMonitorDataOutcomeCallable PutMonitorDataCallable(const Model::PutMonitorDataRequest& request);

                /**
                 *发送自定义消息告警
                 * @param req SendCustomAlarmMsgRequest
                 * @return SendCustomAlarmMsgOutcome
                 */
                SendCustomAlarmMsgOutcome SendCustomAlarmMsg(const Model::SendCustomAlarmMsgRequest &request);
                void SendCustomAlarmMsgAsync(const Model::SendCustomAlarmMsgRequest& request, const SendCustomAlarmMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendCustomAlarmMsgOutcomeCallable SendCustomAlarmMsgCallable(const Model::SendCustomAlarmMsgRequest& request);

                /**
                 *设置一个策略为该告警策略类型、该项目的默认告警策略。
同一项目下相同的告警策略类型，就会被设置为非默认。
                 * @param req SetDefaultAlarmPolicyRequest
                 * @return SetDefaultAlarmPolicyOutcome
                 */
                SetDefaultAlarmPolicyOutcome SetDefaultAlarmPolicy(const Model::SetDefaultAlarmPolicyRequest &request);
                void SetDefaultAlarmPolicyAsync(const Model::SetDefaultAlarmPolicyRequest& request, const SetDefaultAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDefaultAlarmPolicyOutcomeCallable SetDefaultAlarmPolicyCallable(const Model::SetDefaultAlarmPolicyRequest& request);

                /**
                 *删除全部的关联对象
                 * @param req UnBindingAllPolicyObjectRequest
                 * @return UnBindingAllPolicyObjectOutcome
                 */
                UnBindingAllPolicyObjectOutcome UnBindingAllPolicyObject(const Model::UnBindingAllPolicyObjectRequest &request);
                void UnBindingAllPolicyObjectAsync(const Model::UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingAllPolicyObjectOutcomeCallable UnBindingAllPolicyObjectCallable(const Model::UnBindingAllPolicyObjectRequest& request);

                /**
                 *删除策略的关联对象
                 * @param req UnBindingPolicyObjectRequest
                 * @return UnBindingPolicyObjectOutcome
                 */
                UnBindingPolicyObjectOutcome UnBindingPolicyObject(const Model::UnBindingPolicyObjectRequest &request);
                void UnBindingPolicyObjectAsync(const Model::UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingPolicyObjectOutcomeCallable UnBindingPolicyObjectCallable(const Model::UnBindingPolicyObjectRequest& request);

                /**
                 *在腾讯云容器服务下更新 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req UpdateServiceDiscoveryRequest
                 * @return UpdateServiceDiscoveryOutcome
                 */
                UpdateServiceDiscoveryOutcome UpdateServiceDiscovery(const Model::UpdateServiceDiscoveryRequest &request);
                void UpdateServiceDiscoveryAsync(const Model::UpdateServiceDiscoveryRequest& request, const UpdateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServiceDiscoveryOutcomeCallable UpdateServiceDiscoveryCallable(const Model::UpdateServiceDiscoveryRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
