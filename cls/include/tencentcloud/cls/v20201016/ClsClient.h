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

#ifndef TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_
#define TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cls/v20201016/model/ApplyConfigToMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ApplyConfigToMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateExportRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateExportResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogContextRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogContextResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogsetsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogsetsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachinesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachinesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsResponse.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogRequest.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogResponse.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/RetryShipperTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/RetryShipperTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchLogRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchLogResponse.h>
#include <tencentcloud/cls/v20201016/model/SplitPartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/SplitPartitionResponse.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            class ClsClient : public AbstractClient
            {
            public:
                ClsClient(const Credential &credential, const std::string &region);
                ClsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ApplyConfigToMachineGroupResponse> ApplyConfigToMachineGroupOutcome;
                typedef std::future<ApplyConfigToMachineGroupOutcome> ApplyConfigToMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ApplyConfigToMachineGroupRequest&, ApplyConfigToMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConfigToMachineGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateAlarmResponse> CreateAlarmOutcome;
                typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmRequest&, CreateAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
                typedef Outcome<Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Error, Model::CreateConfigResponse> CreateConfigOutcome;
                typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConfigRequest&, CreateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateExportResponse> CreateExportOutcome;
                typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateExportRequest&, CreateExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportAsyncHandler;
                typedef Outcome<Error, Model::CreateIndexResponse> CreateIndexOutcome;
                typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateIndexRequest&, CreateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexAsyncHandler;
                typedef Outcome<Error, Model::CreateLogsetResponse> CreateLogsetOutcome;
                typedef std::future<CreateLogsetOutcome> CreateLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateLogsetRequest&, CreateLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogsetAsyncHandler;
                typedef Outcome<Error, Model::CreateMachineGroupResponse> CreateMachineGroupOutcome;
                typedef std::future<CreateMachineGroupOutcome> CreateMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateMachineGroupRequest&, CreateMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMachineGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateShipperResponse> CreateShipperOutcome;
                typedef std::future<CreateShipperOutcome> CreateShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateShipperRequest&, CreateShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateShipperAsyncHandler;
                typedef Outcome<Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Error, Model::DeleteAlarmResponse> DeleteAlarmOutcome;
                typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmRequest&, DeleteAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
                typedef Outcome<Error, Model::DeleteAlarmNoticeResponse> DeleteAlarmNoticeOutcome;
                typedef std::future<DeleteAlarmNoticeOutcome> DeleteAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmNoticeRequest&, DeleteAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticeAsyncHandler;
                typedef Outcome<Error, Model::DeleteConfigResponse> DeleteConfigOutcome;
                typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigRequest&, DeleteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteConfigFromMachineGroupResponse> DeleteConfigFromMachineGroupOutcome;
                typedef std::future<DeleteConfigFromMachineGroupOutcome> DeleteConfigFromMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigFromMachineGroupRequest&, DeleteConfigFromMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFromMachineGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteExportResponse> DeleteExportOutcome;
                typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteExportRequest&, DeleteExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExportAsyncHandler;
                typedef Outcome<Error, Model::DeleteIndexResponse> DeleteIndexOutcome;
                typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteIndexRequest&, DeleteIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIndexAsyncHandler;
                typedef Outcome<Error, Model::DeleteLogsetResponse> DeleteLogsetOutcome;
                typedef std::future<DeleteLogsetOutcome> DeleteLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteLogsetRequest&, DeleteLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogsetAsyncHandler;
                typedef Outcome<Error, Model::DeleteMachineGroupResponse> DeleteMachineGroupOutcome;
                typedef std::future<DeleteMachineGroupOutcome> DeleteMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMachineGroupRequest&, DeleteMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteShipperResponse> DeleteShipperOutcome;
                typedef std::future<DeleteShipperOutcome> DeleteShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteShipperRequest&, DeleteShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShipperAsyncHandler;
                typedef Outcome<Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmsResponse> DescribeAlarmsOutcome;
                typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmsRequest&, DescribeAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigMachineGroupsResponse> DescribeConfigMachineGroupsOutcome;
                typedef std::future<DescribeConfigMachineGroupsOutcome> DescribeConfigMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigMachineGroupsRequest&, DescribeConfigMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMachineGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeExportsResponse> DescribeExportsOutcome;
                typedef std::future<DescribeExportsOutcome> DescribeExportsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeExportsRequest&, DescribeExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportsAsyncHandler;
                typedef Outcome<Error, Model::DescribeIndexResponse> DescribeIndexOutcome;
                typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeIndexRequest&, DescribeIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexAsyncHandler;
                typedef Outcome<Error, Model::DescribeLogContextResponse> DescribeLogContextOutcome;
                typedef std::future<DescribeLogContextOutcome> DescribeLogContextOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogContextRequest&, DescribeLogContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogContextAsyncHandler;
                typedef Outcome<Error, Model::DescribeLogsetsResponse> DescribeLogsetsOutcome;
                typedef std::future<DescribeLogsetsOutcome> DescribeLogsetsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogsetsRequest&, DescribeLogsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMachineGroupConfigsResponse> DescribeMachineGroupConfigsOutcome;
                typedef std::future<DescribeMachineGroupConfigsOutcome> DescribeMachineGroupConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachineGroupConfigsRequest&, DescribeMachineGroupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGroupConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMachineGroupsResponse> DescribeMachineGroupsOutcome;
                typedef std::future<DescribeMachineGroupsOutcome> DescribeMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachineGroupsRequest&, DescribeMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Error, Model::DescribePartitionsResponse> DescribePartitionsOutcome;
                typedef std::future<DescribePartitionsOutcome> DescribePartitionsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribePartitionsRequest&, DescribePartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePartitionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeShipperTasksResponse> DescribeShipperTasksOutcome;
                typedef std::future<DescribeShipperTasksOutcome> DescribeShipperTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShipperTasksRequest&, DescribeShipperTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShipperTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeShippersResponse> DescribeShippersOutcome;
                typedef std::future<DescribeShippersOutcome> DescribeShippersOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShippersRequest&, DescribeShippersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShippersAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopicsResponse> DescribeTopicsOutcome;
                typedef std::future<DescribeTopicsOutcome> DescribeTopicsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeTopicsRequest&, DescribeTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicsAsyncHandler;
                typedef Outcome<Error, Model::GetAlarmLogResponse> GetAlarmLogOutcome;
                typedef std::future<GetAlarmLogOutcome> GetAlarmLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::GetAlarmLogRequest&, GetAlarmLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmLogAsyncHandler;
                typedef Outcome<Error, Model::MergePartitionResponse> MergePartitionOutcome;
                typedef std::future<MergePartitionOutcome> MergePartitionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::MergePartitionRequest&, MergePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MergePartitionAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmResponse> ModifyAlarmOutcome;
                typedef std::future<ModifyAlarmOutcome> ModifyAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmRequest&, ModifyAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Error, Model::ModifyConfigResponse> ModifyConfigOutcome;
                typedef std::future<ModifyConfigOutcome> ModifyConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConfigRequest&, ModifyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyIndexResponse> ModifyIndexOutcome;
                typedef std::future<ModifyIndexOutcome> ModifyIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyIndexRequest&, ModifyIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIndexAsyncHandler;
                typedef Outcome<Error, Model::ModifyLogsetResponse> ModifyLogsetOutcome;
                typedef std::future<ModifyLogsetOutcome> ModifyLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyLogsetRequest&, ModifyLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogsetAsyncHandler;
                typedef Outcome<Error, Model::ModifyMachineGroupResponse> ModifyMachineGroupOutcome;
                typedef std::future<ModifyMachineGroupOutcome> ModifyMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyMachineGroupRequest&, ModifyMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyShipperResponse> ModifyShipperOutcome;
                typedef std::future<ModifyShipperOutcome> ModifyShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyShipperRequest&, ModifyShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShipperAsyncHandler;
                typedef Outcome<Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Error, Model::RetryShipperTaskResponse> RetryShipperTaskOutcome;
                typedef std::future<RetryShipperTaskOutcome> RetryShipperTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::RetryShipperTaskRequest&, RetryShipperTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryShipperTaskAsyncHandler;
                typedef Outcome<Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Error, Model::SplitPartitionResponse> SplitPartitionOutcome;
                typedef std::future<SplitPartitionOutcome> SplitPartitionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SplitPartitionRequest&, SplitPartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SplitPartitionAsyncHandler;



                /**
                 *应用采集配置到指定机器组
                 * @param req ApplyConfigToMachineGroupRequest
                 * @return ApplyConfigToMachineGroupOutcome
                 */
                ApplyConfigToMachineGroupOutcome ApplyConfigToMachineGroup(const Model::ApplyConfigToMachineGroupRequest &request);
                void ApplyConfigToMachineGroupAsync(const Model::ApplyConfigToMachineGroupRequest& request, const ApplyConfigToMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConfigToMachineGroupOutcomeCallable ApplyConfigToMachineGroupCallable(const Model::ApplyConfigToMachineGroupRequest& request);

                /**
                 *本接口用于创建告警策略。
                 * @param req CreateAlarmRequest
                 * @return CreateAlarmOutcome
                 */
                CreateAlarmOutcome CreateAlarm(const Model::CreateAlarmRequest &request);
                void CreateAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmOutcomeCallable CreateAlarmCallable(const Model::CreateAlarmRequest& request);

                /**
                 *该接口用户创建告警通知模板。
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *创建采集规则配置
                 * @param req CreateConfigRequest
                 * @return CreateConfigOutcome
                 */
                CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest &request);
                void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request);

                /**
                 *本接口用于创建日志导出
                 * @param req CreateExportRequest
                 * @return CreateExportOutcome
                 */
                CreateExportOutcome CreateExport(const Model::CreateExportRequest &request);
                void CreateExportAsync(const Model::CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportOutcomeCallable CreateExportCallable(const Model::CreateExportRequest& request);

                /**
                 *本接口用于创建索引
                 * @param req CreateIndexRequest
                 * @return CreateIndexOutcome
                 */
                CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest &request);
                void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request);

                /**
                 *本接口用于创建日志集，返回新创建的日志集的 ID。
                 * @param req CreateLogsetRequest
                 * @return CreateLogsetOutcome
                 */
                CreateLogsetOutcome CreateLogset(const Model::CreateLogsetRequest &request);
                void CreateLogsetAsync(const Model::CreateLogsetRequest& request, const CreateLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogsetOutcomeCallable CreateLogsetCallable(const Model::CreateLogsetRequest& request);

                /**
                 *创建机器组
                 * @param req CreateMachineGroupRequest
                 * @return CreateMachineGroupOutcome
                 */
                CreateMachineGroupOutcome CreateMachineGroup(const Model::CreateMachineGroupRequest &request);
                void CreateMachineGroupAsync(const Model::CreateMachineGroupRequest& request, const CreateMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMachineGroupOutcomeCallable CreateMachineGroupCallable(const Model::CreateMachineGroupRequest& request);

                /**
                 *创建新的投递规则，客户如果使用此接口，需要自行处理CLS对指定bucket的写权限。
                 * @param req CreateShipperRequest
                 * @return CreateShipperOutcome
                 */
                CreateShipperOutcome CreateShipper(const Model::CreateShipperRequest &request);
                void CreateShipperAsync(const Model::CreateShipperRequest& request, const CreateShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateShipperOutcomeCallable CreateShipperCallable(const Model::CreateShipperRequest& request);

                /**
                 *本接口用于创建日志主题。
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *本接口用于删除告警策略。
                 * @param req DeleteAlarmRequest
                 * @return DeleteAlarmOutcome
                 */
                DeleteAlarmOutcome DeleteAlarm(const Model::DeleteAlarmRequest &request);
                void DeleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmOutcomeCallable DeleteAlarmCallable(const Model::DeleteAlarmRequest& request);

                /**
                 *该接口用于删除告警通知模板
                 * @param req DeleteAlarmNoticeRequest
                 * @return DeleteAlarmNoticeOutcome
                 */
                DeleteAlarmNoticeOutcome DeleteAlarmNotice(const Model::DeleteAlarmNoticeRequest &request);
                void DeleteAlarmNoticeAsync(const Model::DeleteAlarmNoticeRequest& request, const DeleteAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticeOutcomeCallable DeleteAlarmNoticeCallable(const Model::DeleteAlarmNoticeRequest& request);

                /**
                 *删除采集规则配置
                 * @param req DeleteConfigRequest
                 * @return DeleteConfigOutcome
                 */
                DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest &request);
                void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request);

                /**
                 *删除应用到机器组的采集配置
                 * @param req DeleteConfigFromMachineGroupRequest
                 * @return DeleteConfigFromMachineGroupOutcome
                 */
                DeleteConfigFromMachineGroupOutcome DeleteConfigFromMachineGroup(const Model::DeleteConfigFromMachineGroupRequest &request);
                void DeleteConfigFromMachineGroupAsync(const Model::DeleteConfigFromMachineGroupRequest& request, const DeleteConfigFromMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigFromMachineGroupOutcomeCallable DeleteConfigFromMachineGroupCallable(const Model::DeleteConfigFromMachineGroupRequest& request);

                /**
                 *本接口用于删除日志导出
                 * @param req DeleteExportRequest
                 * @return DeleteExportOutcome
                 */
                DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest &request);
                void DeleteExportAsync(const Model::DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExportOutcomeCallable DeleteExportCallable(const Model::DeleteExportRequest& request);

                /**
                 *本接口用于日志主题的索引配置
                 * @param req DeleteIndexRequest
                 * @return DeleteIndexOutcome
                 */
                DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest &request);
                void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request);

                /**
                 *本接口用于删除日志集。
                 * @param req DeleteLogsetRequest
                 * @return DeleteLogsetOutcome
                 */
                DeleteLogsetOutcome DeleteLogset(const Model::DeleteLogsetRequest &request);
                void DeleteLogsetAsync(const Model::DeleteLogsetRequest& request, const DeleteLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogsetOutcomeCallable DeleteLogsetCallable(const Model::DeleteLogsetRequest& request);

                /**
                 *删除机器组
                 * @param req DeleteMachineGroupRequest
                 * @return DeleteMachineGroupOutcome
                 */
                DeleteMachineGroupOutcome DeleteMachineGroup(const Model::DeleteMachineGroupRequest &request);
                void DeleteMachineGroupAsync(const Model::DeleteMachineGroupRequest& request, const DeleteMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineGroupOutcomeCallable DeleteMachineGroupCallable(const Model::DeleteMachineGroupRequest& request);

                /**
                 *删除投递规则
                 * @param req DeleteShipperRequest
                 * @return DeleteShipperOutcome
                 */
                DeleteShipperOutcome DeleteShipper(const Model::DeleteShipperRequest &request);
                void DeleteShipperAsync(const Model::DeleteShipperRequest& request, const DeleteShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShipperOutcomeCallable DeleteShipperCallable(const Model::DeleteShipperRequest& request);

                /**
                 *本接口用于删除日志主题。
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *该接口用于获取告警通知模板列表
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *本接口用于获取告警策略。
                 * @param req DescribeAlarmsRequest
                 * @return DescribeAlarmsOutcome
                 */
                DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest &request);
                void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request);

                /**
                 *获取采集规则配置所绑定的机器组
                 * @param req DescribeConfigMachineGroupsRequest
                 * @return DescribeConfigMachineGroupsOutcome
                 */
                DescribeConfigMachineGroupsOutcome DescribeConfigMachineGroups(const Model::DescribeConfigMachineGroupsRequest &request);
                void DescribeConfigMachineGroupsAsync(const Model::DescribeConfigMachineGroupsRequest& request, const DescribeConfigMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigMachineGroupsOutcomeCallable DescribeConfigMachineGroupsCallable(const Model::DescribeConfigMachineGroupsRequest& request);

                /**
                 *获取采集规则配置
                 * @param req DescribeConfigsRequest
                 * @return DescribeConfigsOutcome
                 */
                DescribeConfigsOutcome DescribeConfigs(const Model::DescribeConfigsRequest &request);
                void DescribeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigsOutcomeCallable DescribeConfigsCallable(const Model::DescribeConfigsRequest& request);

                /**
                 *本接口用于获取日志导出列表
                 * @param req DescribeExportsRequest
                 * @return DescribeExportsOutcome
                 */
                DescribeExportsOutcome DescribeExports(const Model::DescribeExportsRequest &request);
                void DescribeExportsAsync(const Model::DescribeExportsRequest& request, const DescribeExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportsOutcomeCallable DescribeExportsCallable(const Model::DescribeExportsRequest& request);

                /**
                 *本接口用于获取索引配置信息
                 * @param req DescribeIndexRequest
                 * @return DescribeIndexOutcome
                 */
                DescribeIndexOutcome DescribeIndex(const Model::DescribeIndexRequest &request);
                void DescribeIndexAsync(const Model::DescribeIndexRequest& request, const DescribeIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexOutcomeCallable DescribeIndexCallable(const Model::DescribeIndexRequest& request);

                /**
                 *本接口用于搜索日志上下文附近的内容
                 * @param req DescribeLogContextRequest
                 * @return DescribeLogContextOutcome
                 */
                DescribeLogContextOutcome DescribeLogContext(const Model::DescribeLogContextRequest &request);
                void DescribeLogContextAsync(const Model::DescribeLogContextRequest& request, const DescribeLogContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogContextOutcomeCallable DescribeLogContextCallable(const Model::DescribeLogContextRequest& request);

                /**
                 *本接口用于获取日志集信息列表。
                 * @param req DescribeLogsetsRequest
                 * @return DescribeLogsetsOutcome
                 */
                DescribeLogsetsOutcome DescribeLogsets(const Model::DescribeLogsetsRequest &request);
                void DescribeLogsetsAsync(const Model::DescribeLogsetsRequest& request, const DescribeLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsetsOutcomeCallable DescribeLogsetsCallable(const Model::DescribeLogsetsRequest& request);

                /**
                 *获取机器组绑定的采集规则配置
                 * @param req DescribeMachineGroupConfigsRequest
                 * @return DescribeMachineGroupConfigsOutcome
                 */
                DescribeMachineGroupConfigsOutcome DescribeMachineGroupConfigs(const Model::DescribeMachineGroupConfigsRequest &request);
                void DescribeMachineGroupConfigsAsync(const Model::DescribeMachineGroupConfigsRequest& request, const DescribeMachineGroupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGroupConfigsOutcomeCallable DescribeMachineGroupConfigsCallable(const Model::DescribeMachineGroupConfigsRequest& request);

                /**
                 *获取机器组信息列表
                 * @param req DescribeMachineGroupsRequest
                 * @return DescribeMachineGroupsOutcome
                 */
                DescribeMachineGroupsOutcome DescribeMachineGroups(const Model::DescribeMachineGroupsRequest &request);
                void DescribeMachineGroupsAsync(const Model::DescribeMachineGroupsRequest& request, const DescribeMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGroupsOutcomeCallable DescribeMachineGroupsCallable(const Model::DescribeMachineGroupsRequest& request);

                /**
                 *获取制定机器组下的机器状态
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *本接口用于获取主题分区列表。
                 * @param req DescribePartitionsRequest
                 * @return DescribePartitionsOutcome
                 */
                DescribePartitionsOutcome DescribePartitions(const Model::DescribePartitionsRequest &request);
                void DescribePartitionsAsync(const Model::DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePartitionsOutcomeCallable DescribePartitionsCallable(const Model::DescribePartitionsRequest& request);

                /**
                 *获取投递任务列表
                 * @param req DescribeShipperTasksRequest
                 * @return DescribeShipperTasksOutcome
                 */
                DescribeShipperTasksOutcome DescribeShipperTasks(const Model::DescribeShipperTasksRequest &request);
                void DescribeShipperTasksAsync(const Model::DescribeShipperTasksRequest& request, const DescribeShipperTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShipperTasksOutcomeCallable DescribeShipperTasksCallable(const Model::DescribeShipperTasksRequest& request);

                /**
                 *获取投递规则信息列表
                 * @param req DescribeShippersRequest
                 * @return DescribeShippersOutcome
                 */
                DescribeShippersOutcome DescribeShippers(const Model::DescribeShippersRequest &request);
                void DescribeShippersAsync(const Model::DescribeShippersRequest& request, const DescribeShippersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShippersOutcomeCallable DescribeShippersCallable(const Model::DescribeShippersRequest& request);

                /**
                 * 本接口用于获取日志主题列表，支持分页
                 * @param req DescribeTopicsRequest
                 * @return DescribeTopicsOutcome
                 */
                DescribeTopicsOutcome DescribeTopics(const Model::DescribeTopicsRequest &request);
                void DescribeTopicsAsync(const Model::DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicsOutcomeCallable DescribeTopicsCallable(const Model::DescribeTopicsRequest& request);

                /**
                 *本接口用于获取告警任务历史
                 * @param req GetAlarmLogRequest
                 * @return GetAlarmLogOutcome
                 */
                GetAlarmLogOutcome GetAlarmLog(const Model::GetAlarmLogRequest &request);
                void GetAlarmLogAsync(const Model::GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAlarmLogOutcomeCallable GetAlarmLogCallable(const Model::GetAlarmLogRequest& request);

                /**
                 *本接口用于合并一个读写态的主题分区，合并时指定一个主题分区 ID，日志服务会自动合并范围右相邻的分区。
                 * @param req MergePartitionRequest
                 * @return MergePartitionOutcome
                 */
                MergePartitionOutcome MergePartition(const Model::MergePartitionRequest &request);
                void MergePartitionAsync(const Model::MergePartitionRequest& request, const MergePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MergePartitionOutcomeCallable MergePartitionCallable(const Model::MergePartitionRequest& request);

                /**
                 *本接口用于修改告警策略。需要至少修改一项有效内容。
                 * @param req ModifyAlarmRequest
                 * @return ModifyAlarmOutcome
                 */
                ModifyAlarmOutcome ModifyAlarm(const Model::ModifyAlarmRequest &request);
                void ModifyAlarmAsync(const Model::ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmOutcomeCallable ModifyAlarmCallable(const Model::ModifyAlarmRequest& request);

                /**
                 *该接口用于修改告警通知模板。
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *修改采集规则配置
                 * @param req ModifyConfigRequest
                 * @return ModifyConfigOutcome
                 */
                ModifyConfigOutcome ModifyConfig(const Model::ModifyConfigRequest &request);
                void ModifyConfigAsync(const Model::ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigOutcomeCallable ModifyConfigCallable(const Model::ModifyConfigRequest& request);

                /**
                 *本接口用于修改索引配置

                 * @param req ModifyIndexRequest
                 * @return ModifyIndexOutcome
                 */
                ModifyIndexOutcome ModifyIndex(const Model::ModifyIndexRequest &request);
                void ModifyIndexAsync(const Model::ModifyIndexRequest& request, const ModifyIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIndexOutcomeCallable ModifyIndexCallable(const Model::ModifyIndexRequest& request);

                /**
                 *本接口用于修改日志集信息
                 * @param req ModifyLogsetRequest
                 * @return ModifyLogsetOutcome
                 */
                ModifyLogsetOutcome ModifyLogset(const Model::ModifyLogsetRequest &request);
                void ModifyLogsetAsync(const Model::ModifyLogsetRequest& request, const ModifyLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogsetOutcomeCallable ModifyLogsetCallable(const Model::ModifyLogsetRequest& request);

                /**
                 *修改机器组
                 * @param req ModifyMachineGroupRequest
                 * @return ModifyMachineGroupOutcome
                 */
                ModifyMachineGroupOutcome ModifyMachineGroup(const Model::ModifyMachineGroupRequest &request);
                void ModifyMachineGroupAsync(const Model::ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineGroupOutcomeCallable ModifyMachineGroupCallable(const Model::ModifyMachineGroupRequest& request);

                /**
                 *修改现有的投递规则，客户如果使用此接口，需要自行处理CLS对指定bucket的写权限。
                 * @param req ModifyShipperRequest
                 * @return ModifyShipperOutcome
                 */
                ModifyShipperOutcome ModifyShipper(const Model::ModifyShipperRequest &request);
                void ModifyShipperAsync(const Model::ModifyShipperRequest& request, const ModifyShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShipperOutcomeCallable ModifyShipperCallable(const Model::ModifyShipperRequest& request);

                /**
                 *本接口用于修改日志主题。
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

                /**
                 *重试失败的投递任务
                 * @param req RetryShipperTaskRequest
                 * @return RetryShipperTaskOutcome
                 */
                RetryShipperTaskOutcome RetryShipperTask(const Model::RetryShipperTaskRequest &request);
                void RetryShipperTaskAsync(const Model::RetryShipperTaskRequest& request, const RetryShipperTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryShipperTaskOutcomeCallable RetryShipperTaskCallable(const Model::RetryShipperTaskRequest& request);

                /**
                 *本接口用于搜索日志
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *本接口用于分裂主题分区
                 * @param req SplitPartitionRequest
                 * @return SplitPartitionOutcome
                 */
                SplitPartitionOutcome SplitPartition(const Model::SplitPartitionRequest &request);
                void SplitPartitionAsync(const Model::SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitPartitionOutcomeCallable SplitPartitionCallable(const Model::SplitPartitionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_
