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
#include <tencentcloud/cls/v20201016/model/AddMachineGroupInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/AddMachineGroupInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/ApplyConfigToMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ApplyConfigToMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CheckFunctionRequest.h>
#include <tencentcloud/cls/v20201016/model/CheckFunctionResponse.h>
#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerRequest.h>
#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerResponse.h>
#include <tencentcloud/cls/v20201016/model/CloseKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/CloseKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateCloudProductLogCollectionRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateCloudProductLogCollectionResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigExtraRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConfigExtraResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConsoleSharingRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConsoleSharingResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateExportRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateExportResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateNoticeContentRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateNoticeContentResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/CreateWebCallbackRequest.h>
#include <tencentcloud/cls/v20201016/model/CreateWebCallbackResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteCloudProductLogCollectionRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteCloudProductLogCollectionResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigExtraRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigExtraResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConfigFromMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsoleSharingRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsoleSharingResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteExportResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteMachineGroupInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteNoticeContentRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteNoticeContentResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/DeleteWebCallbackRequest.h>
#include <tencentcloud/cls/v20201016/model/DeleteWebCallbackResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmShieldsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmShieldsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlarmsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlertRecordHistoryRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeAlertRecordHistoryResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeCloudProductLogTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeCloudProductLogTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigExtrasRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigExtrasResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsoleSharingListRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsoleSharingListResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeCosRechargesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeCosRechargesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDashboardSubscribesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDashboardSubscribesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDashboardsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDashboardsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeDataTransformInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeDataTransformInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeExportsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaRechargesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeKafkaRechargesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogContextRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogContextResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogHistogramRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogHistogramResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogsetsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeLogsetsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupConfigsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupConfigsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachineGroupsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachinesRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeMachinesResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeNoticeContentsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeNoticeContentsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribePartitionsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeScheduledSqlInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeScheduledSqlInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShipperTasksResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeShippersResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeTopicsResponse.h>
#include <tencentcloud/cls/v20201016/model/DescribeWebCallbacksRequest.h>
#include <tencentcloud/cls/v20201016/model/DescribeWebCallbacksResponse.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogRequest.h>
#include <tencentcloud/cls/v20201016/model/GetAlarmLogResponse.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/MergePartitionResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyAlarmShieldResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyCloudProductLogCollectionRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyCloudProductLogCollectionResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigExtraRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConfigExtraResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsoleSharingRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsoleSharingResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyCosRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyCosRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyDataTransformRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyDataTransformResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyIndexResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyLogsetResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyMachineGroupResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyNoticeContentRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyNoticeContentResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyShipperResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyTopicResponse.h>
#include <tencentcloud/cls/v20201016/model/ModifyWebCallbackRequest.h>
#include <tencentcloud/cls/v20201016/model/ModifyWebCallbackResponse.h>
#include <tencentcloud/cls/v20201016/model/OpenKafkaConsumerRequest.h>
#include <tencentcloud/cls/v20201016/model/OpenKafkaConsumerResponse.h>
#include <tencentcloud/cls/v20201016/model/PreviewKafkaRechargeRequest.h>
#include <tencentcloud/cls/v20201016/model/PreviewKafkaRechargeResponse.h>
#include <tencentcloud/cls/v20201016/model/QueryMetricRequest.h>
#include <tencentcloud/cls/v20201016/model/QueryMetricResponse.h>
#include <tencentcloud/cls/v20201016/model/QueryRangeMetricRequest.h>
#include <tencentcloud/cls/v20201016/model/QueryRangeMetricResponse.h>
#include <tencentcloud/cls/v20201016/model/RetryShipperTaskRequest.h>
#include <tencentcloud/cls/v20201016/model/RetryShipperTaskResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchCosRechargeInfoRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchCosRechargeInfoResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchDashboardSubscribeRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchDashboardSubscribeResponse.h>
#include <tencentcloud/cls/v20201016/model/SearchLogRequest.h>
#include <tencentcloud/cls/v20201016/model/SearchLogResponse.h>
#include <tencentcloud/cls/v20201016/model/SplitPartitionRequest.h>
#include <tencentcloud/cls/v20201016/model/SplitPartitionResponse.h>
#include <tencentcloud/cls/v20201016/model/UploadLogRequest.h>
#include <tencentcloud/cls/v20201016/model/UploadLogResponse.h>


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

                typedef Outcome<Core::Error, Model::AddMachineGroupInfoResponse> AddMachineGroupInfoOutcome;
                typedef std::future<AddMachineGroupInfoOutcome> AddMachineGroupInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::AddMachineGroupInfoRequest&, AddMachineGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddMachineGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyConfigToMachineGroupResponse> ApplyConfigToMachineGroupOutcome;
                typedef std::future<ApplyConfigToMachineGroupOutcome> ApplyConfigToMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ApplyConfigToMachineGroupRequest&, ApplyConfigToMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConfigToMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFunctionResponse> CheckFunctionOutcome;
                typedef std::future<CheckFunctionOutcome> CheckFunctionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CheckFunctionRequest&, CheckFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRechargeKafkaServerResponse> CheckRechargeKafkaServerOutcome;
                typedef std::future<CheckRechargeKafkaServerOutcome> CheckRechargeKafkaServerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CheckRechargeKafkaServerRequest&, CheckRechargeKafkaServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRechargeKafkaServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseKafkaConsumerResponse> CloseKafkaConsumerOutcome;
                typedef std::future<CloseKafkaConsumerOutcome> CloseKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CloseKafkaConsumerRequest&, CloseKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmResponse> CreateAlarmOutcome;
                typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmRequest&, CreateAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmShieldResponse> CreateAlarmShieldOutcome;
                typedef std::future<CreateAlarmShieldOutcome> CreateAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateAlarmShieldRequest&, CreateAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudProductLogCollectionResponse> CreateCloudProductLogCollectionOutcome;
                typedef std::future<CreateCloudProductLogCollectionOutcome> CreateCloudProductLogCollectionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateCloudProductLogCollectionRequest&, CreateCloudProductLogCollectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudProductLogCollectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigResponse> CreateConfigOutcome;
                typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConfigRequest&, CreateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigExtraResponse> CreateConfigExtraOutcome;
                typedef std::future<CreateConfigExtraOutcome> CreateConfigExtraOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConfigExtraRequest&, CreateConfigExtraOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigExtraAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleSharingResponse> CreateConsoleSharingOutcome;
                typedef std::future<CreateConsoleSharingOutcome> CreateConsoleSharingOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConsoleSharingRequest&, CreateConsoleSharingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleSharingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerResponse> CreateConsumerOutcome;
                typedef std::future<CreateConsumerOutcome> CreateConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateConsumerRequest&, CreateConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosRechargeResponse> CreateCosRechargeOutcome;
                typedef std::future<CreateCosRechargeOutcome> CreateCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateCosRechargeRequest&, CreateCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDashboardSubscribeResponse> CreateDashboardSubscribeOutcome;
                typedef std::future<CreateDashboardSubscribeOutcome> CreateDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDashboardSubscribeRequest&, CreateDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataTransformResponse> CreateDataTransformOutcome;
                typedef std::future<CreateDataTransformOutcome> CreateDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDataTransformRequest&, CreateDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeliverCloudFunctionResponse> CreateDeliverCloudFunctionOutcome;
                typedef std::future<CreateDeliverCloudFunctionOutcome> CreateDeliverCloudFunctionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateDeliverCloudFunctionRequest&, CreateDeliverCloudFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeliverCloudFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportResponse> CreateExportOutcome;
                typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateExportRequest&, CreateExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIndexResponse> CreateIndexOutcome;
                typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateIndexRequest&, CreateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKafkaRechargeResponse> CreateKafkaRechargeOutcome;
                typedef std::future<CreateKafkaRechargeOutcome> CreateKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateKafkaRechargeRequest&, CreateKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogsetResponse> CreateLogsetOutcome;
                typedef std::future<CreateLogsetOutcome> CreateLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateLogsetRequest&, CreateLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMachineGroupResponse> CreateMachineGroupOutcome;
                typedef std::future<CreateMachineGroupOutcome> CreateMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateMachineGroupRequest&, CreateMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNoticeContentResponse> CreateNoticeContentOutcome;
                typedef std::future<CreateNoticeContentOutcome> CreateNoticeContentOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateNoticeContentRequest&, CreateNoticeContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNoticeContentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduledSqlResponse> CreateScheduledSqlOutcome;
                typedef std::future<CreateScheduledSqlOutcome> CreateScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateScheduledSqlRequest&, CreateScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateShipperResponse> CreateShipperOutcome;
                typedef std::future<CreateShipperOutcome> CreateShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateShipperRequest&, CreateShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebCallbackResponse> CreateWebCallbackOutcome;
                typedef std::future<CreateWebCallbackOutcome> CreateWebCallbackOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::CreateWebCallbackRequest&, CreateWebCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmResponse> DeleteAlarmOutcome;
                typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmRequest&, DeleteAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmNoticeResponse> DeleteAlarmNoticeOutcome;
                typedef std::future<DeleteAlarmNoticeOutcome> DeleteAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmNoticeRequest&, DeleteAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmShieldResponse> DeleteAlarmShieldOutcome;
                typedef std::future<DeleteAlarmShieldOutcome> DeleteAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteAlarmShieldRequest&, DeleteAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudProductLogCollectionResponse> DeleteCloudProductLogCollectionOutcome;
                typedef std::future<DeleteCloudProductLogCollectionOutcome> DeleteCloudProductLogCollectionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteCloudProductLogCollectionRequest&, DeleteCloudProductLogCollectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudProductLogCollectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigResponse> DeleteConfigOutcome;
                typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigRequest&, DeleteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigExtraResponse> DeleteConfigExtraOutcome;
                typedef std::future<DeleteConfigExtraOutcome> DeleteConfigExtraOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigExtraRequest&, DeleteConfigExtraOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigExtraAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigFromMachineGroupResponse> DeleteConfigFromMachineGroupOutcome;
                typedef std::future<DeleteConfigFromMachineGroupOutcome> DeleteConfigFromMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConfigFromMachineGroupRequest&, DeleteConfigFromMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFromMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsoleSharingResponse> DeleteConsoleSharingOutcome;
                typedef std::future<DeleteConsoleSharingOutcome> DeleteConsoleSharingOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConsoleSharingRequest&, DeleteConsoleSharingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsoleSharingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerResponse> DeleteConsumerOutcome;
                typedef std::future<DeleteConsumerOutcome> DeleteConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteConsumerRequest&, DeleteConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCosRechargeResponse> DeleteCosRechargeOutcome;
                typedef std::future<DeleteCosRechargeOutcome> DeleteCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteCosRechargeRequest&, DeleteCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDashboardSubscribeResponse> DeleteDashboardSubscribeOutcome;
                typedef std::future<DeleteDashboardSubscribeOutcome> DeleteDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDashboardSubscribeRequest&, DeleteDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataTransformResponse> DeleteDataTransformOutcome;
                typedef std::future<DeleteDataTransformOutcome> DeleteDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteDataTransformRequest&, DeleteDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExportResponse> DeleteExportOutcome;
                typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteExportRequest&, DeleteExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIndexResponse> DeleteIndexOutcome;
                typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteIndexRequest&, DeleteIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKafkaRechargeResponse> DeleteKafkaRechargeOutcome;
                typedef std::future<DeleteKafkaRechargeOutcome> DeleteKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteKafkaRechargeRequest&, DeleteKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogsetResponse> DeleteLogsetOutcome;
                typedef std::future<DeleteLogsetOutcome> DeleteLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteLogsetRequest&, DeleteLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineGroupResponse> DeleteMachineGroupOutcome;
                typedef std::future<DeleteMachineGroupOutcome> DeleteMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMachineGroupRequest&, DeleteMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineGroupInfoResponse> DeleteMachineGroupInfoOutcome;
                typedef std::future<DeleteMachineGroupInfoOutcome> DeleteMachineGroupInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteMachineGroupInfoRequest&, DeleteMachineGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNoticeContentResponse> DeleteNoticeContentOutcome;
                typedef std::future<DeleteNoticeContentOutcome> DeleteNoticeContentOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteNoticeContentRequest&, DeleteNoticeContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNoticeContentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduledSqlResponse> DeleteScheduledSqlOutcome;
                typedef std::future<DeleteScheduledSqlOutcome> DeleteScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteScheduledSqlRequest&, DeleteScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShipperResponse> DeleteShipperOutcome;
                typedef std::future<DeleteShipperOutcome> DeleteShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteShipperRequest&, DeleteShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebCallbackResponse> DeleteWebCallbackOutcome;
                typedef std::future<DeleteWebCallbackOutcome> DeleteWebCallbackOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DeleteWebCallbackRequest&, DeleteWebCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmShieldsResponse> DescribeAlarmShieldsOutcome;
                typedef std::future<DescribeAlarmShieldsOutcome> DescribeAlarmShieldsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmShieldsRequest&, DescribeAlarmShieldsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmShieldsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmsResponse> DescribeAlarmsOutcome;
                typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlarmsRequest&, DescribeAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertRecordHistoryResponse> DescribeAlertRecordHistoryOutcome;
                typedef std::future<DescribeAlertRecordHistoryOutcome> DescribeAlertRecordHistoryOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeAlertRecordHistoryRequest&, DescribeAlertRecordHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertRecordHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudProductLogTasksResponse> DescribeCloudProductLogTasksOutcome;
                typedef std::future<DescribeCloudProductLogTasksOutcome> DescribeCloudProductLogTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeCloudProductLogTasksRequest&, DescribeCloudProductLogTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudProductLogTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigExtrasResponse> DescribeConfigExtrasOutcome;
                typedef std::future<DescribeConfigExtrasOutcome> DescribeConfigExtrasOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigExtrasRequest&, DescribeConfigExtrasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigExtrasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigMachineGroupsResponse> DescribeConfigMachineGroupsOutcome;
                typedef std::future<DescribeConfigMachineGroupsOutcome> DescribeConfigMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigMachineGroupsRequest&, DescribeConfigMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMachineGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsoleSharingListResponse> DescribeConsoleSharingListOutcome;
                typedef std::future<DescribeConsoleSharingListOutcome> DescribeConsoleSharingListOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsoleSharingListRequest&, DescribeConsoleSharingListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsoleSharingListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerResponse> DescribeConsumerOutcome;
                typedef std::future<DescribeConsumerOutcome> DescribeConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeConsumerRequest&, DescribeConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosRechargesResponse> DescribeCosRechargesOutcome;
                typedef std::future<DescribeCosRechargesOutcome> DescribeCosRechargesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeCosRechargesRequest&, DescribeCosRechargesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosRechargesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDashboardSubscribesResponse> DescribeDashboardSubscribesOutcome;
                typedef std::future<DescribeDashboardSubscribesOutcome> DescribeDashboardSubscribesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDashboardSubscribesRequest&, DescribeDashboardSubscribesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardSubscribesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDashboardsResponse> DescribeDashboardsOutcome;
                typedef std::future<DescribeDashboardsOutcome> DescribeDashboardsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDashboardsRequest&, DescribeDashboardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataTransformInfoResponse> DescribeDataTransformInfoOutcome;
                typedef std::future<DescribeDataTransformInfoOutcome> DescribeDataTransformInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeDataTransformInfoRequest&, DescribeDataTransformInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataTransformInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportsResponse> DescribeExportsOutcome;
                typedef std::future<DescribeExportsOutcome> DescribeExportsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeExportsRequest&, DescribeExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexResponse> DescribeIndexOutcome;
                typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeIndexRequest&, DescribeIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaConsumerResponse> DescribeKafkaConsumerOutcome;
                typedef std::future<DescribeKafkaConsumerOutcome> DescribeKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaConsumerRequest&, DescribeKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKafkaRechargesResponse> DescribeKafkaRechargesOutcome;
                typedef std::future<DescribeKafkaRechargesOutcome> DescribeKafkaRechargesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeKafkaRechargesRequest&, DescribeKafkaRechargesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaRechargesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogContextResponse> DescribeLogContextOutcome;
                typedef std::future<DescribeLogContextOutcome> DescribeLogContextOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogContextRequest&, DescribeLogContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogContextAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogHistogramResponse> DescribeLogHistogramOutcome;
                typedef std::future<DescribeLogHistogramOutcome> DescribeLogHistogramOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogHistogramRequest&, DescribeLogHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsetsResponse> DescribeLogsetsOutcome;
                typedef std::future<DescribeLogsetsOutcome> DescribeLogsetsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeLogsetsRequest&, DescribeLogsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGroupConfigsResponse> DescribeMachineGroupConfigsOutcome;
                typedef std::future<DescribeMachineGroupConfigsOutcome> DescribeMachineGroupConfigsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachineGroupConfigsRequest&, DescribeMachineGroupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGroupConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGroupsResponse> DescribeMachineGroupsOutcome;
                typedef std::future<DescribeMachineGroupsOutcome> DescribeMachineGroupsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachineGroupsRequest&, DescribeMachineGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNoticeContentsResponse> DescribeNoticeContentsOutcome;
                typedef std::future<DescribeNoticeContentsOutcome> DescribeNoticeContentsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeNoticeContentsRequest&, DescribeNoticeContentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeContentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePartitionsResponse> DescribePartitionsOutcome;
                typedef std::future<DescribePartitionsOutcome> DescribePartitionsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribePartitionsRequest&, DescribePartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduledSqlInfoResponse> DescribeScheduledSqlInfoOutcome;
                typedef std::future<DescribeScheduledSqlInfoOutcome> DescribeScheduledSqlInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeScheduledSqlInfoRequest&, DescribeScheduledSqlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledSqlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShipperTasksResponse> DescribeShipperTasksOutcome;
                typedef std::future<DescribeShipperTasksOutcome> DescribeShipperTasksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShipperTasksRequest&, DescribeShipperTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShipperTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShippersResponse> DescribeShippersOutcome;
                typedef std::future<DescribeShippersOutcome> DescribeShippersOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeShippersRequest&, DescribeShippersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShippersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicsResponse> DescribeTopicsOutcome;
                typedef std::future<DescribeTopicsOutcome> DescribeTopicsOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeTopicsRequest&, DescribeTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebCallbacksResponse> DescribeWebCallbacksOutcome;
                typedef std::future<DescribeWebCallbacksOutcome> DescribeWebCallbacksOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::DescribeWebCallbacksRequest&, DescribeWebCallbacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebCallbacksAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAlarmLogResponse> GetAlarmLogOutcome;
                typedef std::future<GetAlarmLogOutcome> GetAlarmLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::GetAlarmLogRequest&, GetAlarmLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmLogAsyncHandler;
                typedef Outcome<Core::Error, Model::MergePartitionResponse> MergePartitionOutcome;
                typedef std::future<MergePartitionOutcome> MergePartitionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::MergePartitionRequest&, MergePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MergePartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmResponse> ModifyAlarmOutcome;
                typedef std::future<ModifyAlarmOutcome> ModifyAlarmOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmRequest&, ModifyAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmShieldResponse> ModifyAlarmShieldOutcome;
                typedef std::future<ModifyAlarmShieldOutcome> ModifyAlarmShieldOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyAlarmShieldRequest&, ModifyAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudProductLogCollectionResponse> ModifyCloudProductLogCollectionOutcome;
                typedef std::future<ModifyCloudProductLogCollectionOutcome> ModifyCloudProductLogCollectionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyCloudProductLogCollectionRequest&, ModifyCloudProductLogCollectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudProductLogCollectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigResponse> ModifyConfigOutcome;
                typedef std::future<ModifyConfigOutcome> ModifyConfigOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConfigRequest&, ModifyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigExtraResponse> ModifyConfigExtraOutcome;
                typedef std::future<ModifyConfigExtraOutcome> ModifyConfigExtraOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConfigExtraRequest&, ModifyConfigExtraOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigExtraAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsoleSharingResponse> ModifyConsoleSharingOutcome;
                typedef std::future<ModifyConsoleSharingOutcome> ModifyConsoleSharingOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConsoleSharingRequest&, ModifyConsoleSharingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsoleSharingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerResponse> ModifyConsumerOutcome;
                typedef std::future<ModifyConsumerOutcome> ModifyConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyConsumerRequest&, ModifyConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosRechargeResponse> ModifyCosRechargeOutcome;
                typedef std::future<ModifyCosRechargeOutcome> ModifyCosRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyCosRechargeRequest&, ModifyCosRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDashboardSubscribeResponse> ModifyDashboardSubscribeOutcome;
                typedef std::future<ModifyDashboardSubscribeOutcome> ModifyDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDashboardSubscribeRequest&, ModifyDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataTransformResponse> ModifyDataTransformOutcome;
                typedef std::future<ModifyDataTransformOutcome> ModifyDataTransformOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyDataTransformRequest&, ModifyDataTransformOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataTransformAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIndexResponse> ModifyIndexOutcome;
                typedef std::future<ModifyIndexOutcome> ModifyIndexOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyIndexRequest&, ModifyIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaConsumerResponse> ModifyKafkaConsumerOutcome;
                typedef std::future<ModifyKafkaConsumerOutcome> ModifyKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaConsumerRequest&, ModifyKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKafkaRechargeResponse> ModifyKafkaRechargeOutcome;
                typedef std::future<ModifyKafkaRechargeOutcome> ModifyKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyKafkaRechargeRequest&, ModifyKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogsetResponse> ModifyLogsetOutcome;
                typedef std::future<ModifyLogsetOutcome> ModifyLogsetOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyLogsetRequest&, ModifyLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineGroupResponse> ModifyMachineGroupOutcome;
                typedef std::future<ModifyMachineGroupOutcome> ModifyMachineGroupOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyMachineGroupRequest&, ModifyMachineGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNoticeContentResponse> ModifyNoticeContentOutcome;
                typedef std::future<ModifyNoticeContentOutcome> ModifyNoticeContentOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyNoticeContentRequest&, ModifyNoticeContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNoticeContentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduledSqlResponse> ModifyScheduledSqlOutcome;
                typedef std::future<ModifyScheduledSqlOutcome> ModifyScheduledSqlOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyScheduledSqlRequest&, ModifyScheduledSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShipperResponse> ModifyShipperOutcome;
                typedef std::future<ModifyShipperOutcome> ModifyShipperOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyShipperRequest&, ModifyShipperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShipperAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebCallbackResponse> ModifyWebCallbackOutcome;
                typedef std::future<ModifyWebCallbackOutcome> ModifyWebCallbackOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::ModifyWebCallbackRequest&, ModifyWebCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenKafkaConsumerResponse> OpenKafkaConsumerOutcome;
                typedef std::future<OpenKafkaConsumerOutcome> OpenKafkaConsumerOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::OpenKafkaConsumerRequest&, OpenKafkaConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenKafkaConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::PreviewKafkaRechargeResponse> PreviewKafkaRechargeOutcome;
                typedef std::future<PreviewKafkaRechargeOutcome> PreviewKafkaRechargeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::PreviewKafkaRechargeRequest&, PreviewKafkaRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewKafkaRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMetricResponse> QueryMetricOutcome;
                typedef std::future<QueryMetricOutcome> QueryMetricOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::QueryMetricRequest&, QueryMetricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryRangeMetricResponse> QueryRangeMetricOutcome;
                typedef std::future<QueryRangeMetricOutcome> QueryRangeMetricOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::QueryRangeMetricRequest&, QueryRangeMetricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRangeMetricAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryShipperTaskResponse> RetryShipperTaskOutcome;
                typedef std::future<RetryShipperTaskOutcome> RetryShipperTaskOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::RetryShipperTaskRequest&, RetryShipperTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryShipperTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchCosRechargeInfoResponse> SearchCosRechargeInfoOutcome;
                typedef std::future<SearchCosRechargeInfoOutcome> SearchCosRechargeInfoOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchCosRechargeInfoRequest&, SearchCosRechargeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchCosRechargeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchDashboardSubscribeResponse> SearchDashboardSubscribeOutcome;
                typedef std::future<SearchDashboardSubscribeOutcome> SearchDashboardSubscribeOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchDashboardSubscribeRequest&, SearchDashboardSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchDashboardSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SplitPartitionResponse> SplitPartitionOutcome;
                typedef std::future<SplitPartitionOutcome> SplitPartitionOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::SplitPartitionRequest&, SplitPartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SplitPartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadLogResponse> UploadLogOutcome;
                typedef std::future<UploadLogOutcome> UploadLogOutcomeCallable;
                typedef std::function<void(const ClsClient*, const Model::UploadLogRequest&, UploadLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadLogAsyncHandler;



                /**
                 *用于添加机器组信息
                 * @param req AddMachineGroupInfoRequest
                 * @return AddMachineGroupInfoOutcome
                 */
                AddMachineGroupInfoOutcome AddMachineGroupInfo(const Model::AddMachineGroupInfoRequest &request);
                void AddMachineGroupInfoAsync(const Model::AddMachineGroupInfoRequest& request, const AddMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddMachineGroupInfoOutcomeCallable AddMachineGroupInfoCallable(const Model::AddMachineGroupInfoRequest& request);

                /**
                 *应用采集配置到指定机器组
                 * @param req ApplyConfigToMachineGroupRequest
                 * @return ApplyConfigToMachineGroupOutcome
                 */
                ApplyConfigToMachineGroupOutcome ApplyConfigToMachineGroup(const Model::ApplyConfigToMachineGroupRequest &request);
                void ApplyConfigToMachineGroupAsync(const Model::ApplyConfigToMachineGroupRequest& request, const ApplyConfigToMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConfigToMachineGroupOutcomeCallable ApplyConfigToMachineGroupCallable(const Model::ApplyConfigToMachineGroupRequest& request);

                /**
                 *本接口用于数据加工DSL函数的语法校验。
                 * @param req CheckFunctionRequest
                 * @return CheckFunctionOutcome
                 */
                CheckFunctionOutcome CheckFunction(const Model::CheckFunctionRequest &request);
                void CheckFunctionAsync(const Model::CheckFunctionRequest& request, const CheckFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFunctionOutcomeCallable CheckFunctionCallable(const Model::CheckFunctionRequest& request);

                /**
                 *本接口用于校验Kafka服务集群是否可以正常访问
                 * @param req CheckRechargeKafkaServerRequest
                 * @return CheckRechargeKafkaServerOutcome
                 */
                CheckRechargeKafkaServerOutcome CheckRechargeKafkaServer(const Model::CheckRechargeKafkaServerRequest &request);
                void CheckRechargeKafkaServerAsync(const Model::CheckRechargeKafkaServerRequest& request, const CheckRechargeKafkaServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRechargeKafkaServerOutcomeCallable CheckRechargeKafkaServerCallable(const Model::CheckRechargeKafkaServerRequest& request);

                /**
                 *关闭Kafka协议消费
                 * @param req CloseKafkaConsumerRequest
                 * @return CloseKafkaConsumerOutcome
                 */
                CloseKafkaConsumerOutcome CloseKafkaConsumer(const Model::CloseKafkaConsumerRequest &request);
                void CloseKafkaConsumerAsync(const Model::CloseKafkaConsumerRequest& request, const CloseKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseKafkaConsumerOutcomeCallable CloseKafkaConsumerCallable(const Model::CloseKafkaConsumerRequest& request);

                /**
                 *本接口用于创建告警策略。
                 * @param req CreateAlarmRequest
                 * @return CreateAlarmOutcome
                 */
                CreateAlarmOutcome CreateAlarm(const Model::CreateAlarmRequest &request);
                void CreateAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmOutcomeCallable CreateAlarmCallable(const Model::CreateAlarmRequest& request);

                /**
                 *该接口用于创建通知渠道组，提供两种配置模式，二选一：
1，简易模式，提供最基本的通知渠道功能。需填写如下参数：
- Type
- NoticeReceivers
- WebCallbacks

2，高级模式，在简易模式基础上，支持设定规则，为不同类型的告警分别设定通知渠道，并支持告警升级功能。需填写如下参数：
- NoticeRules
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *该接口用于创建告警屏蔽规则。
                 * @param req CreateAlarmShieldRequest
                 * @return CreateAlarmShieldOutcome
                 */
                CreateAlarmShieldOutcome CreateAlarmShield(const Model::CreateAlarmShieldRequest &request);
                void CreateAlarmShieldAsync(const Model::CreateAlarmShieldRequest& request, const CreateAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmShieldOutcomeCallable CreateAlarmShieldCallable(const Model::CreateAlarmShieldRequest& request);

                /**
                 *内部云产品接入使用相关接口
                 * @param req CreateCloudProductLogCollectionRequest
                 * @return CreateCloudProductLogCollectionOutcome
                 */
                CreateCloudProductLogCollectionOutcome CreateCloudProductLogCollection(const Model::CreateCloudProductLogCollectionRequest &request);
                void CreateCloudProductLogCollectionAsync(const Model::CreateCloudProductLogCollectionRequest& request, const CreateCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudProductLogCollectionOutcomeCallable CreateCloudProductLogCollectionCallable(const Model::CreateCloudProductLogCollectionRequest& request);

                /**
                 *创建采集规则配置
                 * @param req CreateConfigRequest
                 * @return CreateConfigOutcome
                 */
                CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest &request);
                void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request);

                /**
                 *本接口用于创建特殊采集配置任务，特殊采集配置应用于自建K8S环境的采集Agent
                 * @param req CreateConfigExtraRequest
                 * @return CreateConfigExtraOutcome
                 */
                CreateConfigExtraOutcome CreateConfigExtra(const Model::CreateConfigExtraRequest &request);
                void CreateConfigExtraAsync(const Model::CreateConfigExtraRequest& request, const CreateConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigExtraOutcomeCallable CreateConfigExtraCallable(const Model::CreateConfigExtraRequest& request);

                /**
                 *创建控制台分享
                 * @param req CreateConsoleSharingRequest
                 * @return CreateConsoleSharingOutcome
                 */
                CreateConsoleSharingOutcome CreateConsoleSharing(const Model::CreateConsoleSharingRequest &request);
                void CreateConsoleSharingAsync(const Model::CreateConsoleSharingRequest& request, const CreateConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleSharingOutcomeCallable CreateConsoleSharingCallable(const Model::CreateConsoleSharingRequest& request);

                /**
                 *本接口用于创建投递CKafka任务
                 * @param req CreateConsumerRequest
                 * @return CreateConsumerOutcome
                 */
                CreateConsumerOutcome CreateConsumer(const Model::CreateConsumerRequest &request);
                void CreateConsumerAsync(const Model::CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerOutcomeCallable CreateConsumerCallable(const Model::CreateConsumerRequest& request);

                /**
                 *本接口用于创建cos导入任务
                 * @param req CreateCosRechargeRequest
                 * @return CreateCosRechargeOutcome
                 */
                CreateCosRechargeOutcome CreateCosRecharge(const Model::CreateCosRechargeRequest &request);
                void CreateCosRechargeAsync(const Model::CreateCosRechargeRequest& request, const CreateCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosRechargeOutcomeCallable CreateCosRechargeCallable(const Model::CreateCosRechargeRequest& request);

                /**
                 *此接口用于创建仪表盘订阅
                 * @param req CreateDashboardSubscribeRequest
                 * @return CreateDashboardSubscribeOutcome
                 */
                CreateDashboardSubscribeOutcome CreateDashboardSubscribe(const Model::CreateDashboardSubscribeRequest &request);
                void CreateDashboardSubscribeAsync(const Model::CreateDashboardSubscribeRequest& request, const CreateDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDashboardSubscribeOutcomeCallable CreateDashboardSubscribeCallable(const Model::CreateDashboardSubscribeRequest& request);

                /**
                 *本接口用于创建数据加工任务。
                 * @param req CreateDataTransformRequest
                 * @return CreateDataTransformOutcome
                 */
                CreateDataTransformOutcome CreateDataTransform(const Model::CreateDataTransformRequest &request);
                void CreateDataTransformAsync(const Model::CreateDataTransformRequest& request, const CreateDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataTransformOutcomeCallable CreateDataTransformCallable(const Model::CreateDataTransformRequest& request);

                /**
                 *本接口用于创建投递SCF任务
                 * @param req CreateDeliverCloudFunctionRequest
                 * @return CreateDeliverCloudFunctionOutcome
                 */
                CreateDeliverCloudFunctionOutcome CreateDeliverCloudFunction(const Model::CreateDeliverCloudFunctionRequest &request);
                void CreateDeliverCloudFunctionAsync(const Model::CreateDeliverCloudFunctionRequest& request, const CreateDeliverCloudFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeliverCloudFunctionOutcomeCallable CreateDeliverCloudFunctionCallable(const Model::CreateDeliverCloudFunctionRequest& request);

                /**
                 *本接口仅创建下载任务，任务返回的下载地址，请用户调用DescribeExports查看任务列表。其中有下载地址CosPath参数。参考文档https://cloud.tencent.com/document/product/614/56449
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
                 *本接口用于创建Kafka数据订阅任务
                 * @param req CreateKafkaRechargeRequest
                 * @return CreateKafkaRechargeOutcome
                 */
                CreateKafkaRechargeOutcome CreateKafkaRecharge(const Model::CreateKafkaRechargeRequest &request);
                void CreateKafkaRechargeAsync(const Model::CreateKafkaRechargeRequest& request, const CreateKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKafkaRechargeOutcomeCallable CreateKafkaRechargeCallable(const Model::CreateKafkaRechargeRequest& request);

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
                 *该接口用于创建通知内容。
                 * @param req CreateNoticeContentRequest
                 * @return CreateNoticeContentOutcome
                 */
                CreateNoticeContentOutcome CreateNoticeContent(const Model::CreateNoticeContentRequest &request);
                void CreateNoticeContentAsync(const Model::CreateNoticeContentRequest& request, const CreateNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNoticeContentOutcomeCallable CreateNoticeContentCallable(const Model::CreateNoticeContentRequest& request);

                /**
                 *本接口用于创建定时SQL分析任务
                 * @param req CreateScheduledSqlRequest
                 * @return CreateScheduledSqlOutcome
                 */
                CreateScheduledSqlOutcome CreateScheduledSql(const Model::CreateScheduledSqlRequest &request);
                void CreateScheduledSqlAsync(const Model::CreateScheduledSqlRequest& request, const CreateScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduledSqlOutcomeCallable CreateScheduledSqlCallable(const Model::CreateScheduledSqlRequest& request);

                /**
                 *新建投递到COS的任务，【！！！注意】使用此接口，需要检查是否配置了投递COS的角色和权限。如果没有配置，请参考文档投递权限查看和配置https://cloud.tencent.com/document/product/614/71623。
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
                 *该接口用于创建告警渠道回调配置。
                 * @param req CreateWebCallbackRequest
                 * @return CreateWebCallbackOutcome
                 */
                CreateWebCallbackOutcome CreateWebCallback(const Model::CreateWebCallbackRequest &request);
                void CreateWebCallbackAsync(const Model::CreateWebCallbackRequest& request, const CreateWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebCallbackOutcomeCallable CreateWebCallbackCallable(const Model::CreateWebCallbackRequest& request);

                /**
                 *本接口用于删除告警策略。
                 * @param req DeleteAlarmRequest
                 * @return DeleteAlarmOutcome
                 */
                DeleteAlarmOutcome DeleteAlarm(const Model::DeleteAlarmRequest &request);
                void DeleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmOutcomeCallable DeleteAlarmCallable(const Model::DeleteAlarmRequest& request);

                /**
                 *该接口用于删除通知渠道组
                 * @param req DeleteAlarmNoticeRequest
                 * @return DeleteAlarmNoticeOutcome
                 */
                DeleteAlarmNoticeOutcome DeleteAlarmNotice(const Model::DeleteAlarmNoticeRequest &request);
                void DeleteAlarmNoticeAsync(const Model::DeleteAlarmNoticeRequest& request, const DeleteAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticeOutcomeCallable DeleteAlarmNoticeCallable(const Model::DeleteAlarmNoticeRequest& request);

                /**
                 *该接口用于删除告警屏蔽规则。
                 * @param req DeleteAlarmShieldRequest
                 * @return DeleteAlarmShieldOutcome
                 */
                DeleteAlarmShieldOutcome DeleteAlarmShield(const Model::DeleteAlarmShieldRequest &request);
                void DeleteAlarmShieldAsync(const Model::DeleteAlarmShieldRequest& request, const DeleteAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmShieldOutcomeCallable DeleteAlarmShieldCallable(const Model::DeleteAlarmShieldRequest& request);

                /**
                 *内部云产品接入使用相关接口
                 * @param req DeleteCloudProductLogCollectionRequest
                 * @return DeleteCloudProductLogCollectionOutcome
                 */
                DeleteCloudProductLogCollectionOutcome DeleteCloudProductLogCollection(const Model::DeleteCloudProductLogCollectionRequest &request);
                void DeleteCloudProductLogCollectionAsync(const Model::DeleteCloudProductLogCollectionRequest& request, const DeleteCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudProductLogCollectionOutcomeCallable DeleteCloudProductLogCollectionCallable(const Model::DeleteCloudProductLogCollectionRequest& request);

                /**
                 *删除采集规则配置
                 * @param req DeleteConfigRequest
                 * @return DeleteConfigOutcome
                 */
                DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest &request);
                void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request);

                /**
                 *本接口用于删除特殊采集规则配置，特殊采集配置应用于自建K8S环境的采集Agent
                 * @param req DeleteConfigExtraRequest
                 * @return DeleteConfigExtraOutcome
                 */
                DeleteConfigExtraOutcome DeleteConfigExtra(const Model::DeleteConfigExtraRequest &request);
                void DeleteConfigExtraAsync(const Model::DeleteConfigExtraRequest& request, const DeleteConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigExtraOutcomeCallable DeleteConfigExtraCallable(const Model::DeleteConfigExtraRequest& request);

                /**
                 *删除应用到机器组的采集配置
                 * @param req DeleteConfigFromMachineGroupRequest
                 * @return DeleteConfigFromMachineGroupOutcome
                 */
                DeleteConfigFromMachineGroupOutcome DeleteConfigFromMachineGroup(const Model::DeleteConfigFromMachineGroupRequest &request);
                void DeleteConfigFromMachineGroupAsync(const Model::DeleteConfigFromMachineGroupRequest& request, const DeleteConfigFromMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigFromMachineGroupOutcomeCallable DeleteConfigFromMachineGroupCallable(const Model::DeleteConfigFromMachineGroupRequest& request);

                /**
                 *删除控制台分享
                 * @param req DeleteConsoleSharingRequest
                 * @return DeleteConsoleSharingOutcome
                 */
                DeleteConsoleSharingOutcome DeleteConsoleSharing(const Model::DeleteConsoleSharingRequest &request);
                void DeleteConsoleSharingAsync(const Model::DeleteConsoleSharingRequest& request, const DeleteConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsoleSharingOutcomeCallable DeleteConsoleSharingCallable(const Model::DeleteConsoleSharingRequest& request);

                /**
                 *本接口用于删除投递配置
                 * @param req DeleteConsumerRequest
                 * @return DeleteConsumerOutcome
                 */
                DeleteConsumerOutcome DeleteConsumer(const Model::DeleteConsumerRequest &request);
                void DeleteConsumerAsync(const Model::DeleteConsumerRequest& request, const DeleteConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerOutcomeCallable DeleteConsumerCallable(const Model::DeleteConsumerRequest& request);

                /**
                 *本接口用于删除cos导入任务
                 * @param req DeleteCosRechargeRequest
                 * @return DeleteCosRechargeOutcome
                 */
                DeleteCosRechargeOutcome DeleteCosRecharge(const Model::DeleteCosRechargeRequest &request);
                void DeleteCosRechargeAsync(const Model::DeleteCosRechargeRequest& request, const DeleteCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCosRechargeOutcomeCallable DeleteCosRechargeCallable(const Model::DeleteCosRechargeRequest& request);

                /**
                 *此接口用于删除仪表盘订阅
                 * @param req DeleteDashboardSubscribeRequest
                 * @return DeleteDashboardSubscribeOutcome
                 */
                DeleteDashboardSubscribeOutcome DeleteDashboardSubscribe(const Model::DeleteDashboardSubscribeRequest &request);
                void DeleteDashboardSubscribeAsync(const Model::DeleteDashboardSubscribeRequest& request, const DeleteDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDashboardSubscribeOutcomeCallable DeleteDashboardSubscribeCallable(const Model::DeleteDashboardSubscribeRequest& request);

                /**
                 *本接口用于删除数据加工任务
                 * @param req DeleteDataTransformRequest
                 * @return DeleteDataTransformOutcome
                 */
                DeleteDataTransformOutcome DeleteDataTransform(const Model::DeleteDataTransformRequest &request);
                void DeleteDataTransformAsync(const Model::DeleteDataTransformRequest& request, const DeleteDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataTransformOutcomeCallable DeleteDataTransformCallable(const Model::DeleteDataTransformRequest& request);

                /**
                 *本接口用于删除日志下载任务
                 * @param req DeleteExportRequest
                 * @return DeleteExportOutcome
                 */
                DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest &request);
                void DeleteExportAsync(const Model::DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExportOutcomeCallable DeleteExportCallable(const Model::DeleteExportRequest& request);

                /**
                 *本接口用于删除日志主题的索引配置，删除索引配置后将无法检索和查询采集到的日志。
                 * @param req DeleteIndexRequest
                 * @return DeleteIndexOutcome
                 */
                DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest &request);
                void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request);

                /**
                 *本接口用于删除Kafka数据订阅任务
                 * @param req DeleteKafkaRechargeRequest
                 * @return DeleteKafkaRechargeOutcome
                 */
                DeleteKafkaRechargeOutcome DeleteKafkaRecharge(const Model::DeleteKafkaRechargeRequest &request);
                void DeleteKafkaRechargeAsync(const Model::DeleteKafkaRechargeRequest& request, const DeleteKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKafkaRechargeOutcomeCallable DeleteKafkaRechargeCallable(const Model::DeleteKafkaRechargeRequest& request);

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
                 *用于删除机器组信息
                 * @param req DeleteMachineGroupInfoRequest
                 * @return DeleteMachineGroupInfoOutcome
                 */
                DeleteMachineGroupInfoOutcome DeleteMachineGroupInfo(const Model::DeleteMachineGroupInfoRequest &request);
                void DeleteMachineGroupInfoAsync(const Model::DeleteMachineGroupInfoRequest& request, const DeleteMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineGroupInfoOutcomeCallable DeleteMachineGroupInfoCallable(const Model::DeleteMachineGroupInfoRequest& request);

                /**
                 *该接口用于删除通知内容配置
                 * @param req DeleteNoticeContentRequest
                 * @return DeleteNoticeContentOutcome
                 */
                DeleteNoticeContentOutcome DeleteNoticeContent(const Model::DeleteNoticeContentRequest &request);
                void DeleteNoticeContentAsync(const Model::DeleteNoticeContentRequest& request, const DeleteNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNoticeContentOutcomeCallable DeleteNoticeContentCallable(const Model::DeleteNoticeContentRequest& request);

                /**
                 *本接口用于删除定时SQL分析任务
                 * @param req DeleteScheduledSqlRequest
                 * @return DeleteScheduledSqlOutcome
                 */
                DeleteScheduledSqlOutcome DeleteScheduledSql(const Model::DeleteScheduledSqlRequest &request);
                void DeleteScheduledSqlAsync(const Model::DeleteScheduledSqlRequest& request, const DeleteScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduledSqlOutcomeCallable DeleteScheduledSqlCallable(const Model::DeleteScheduledSqlRequest& request);

                /**
                 *删除投递COS任务
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
                 *该接口用于删除告警渠道回调配置。
                 * @param req DeleteWebCallbackRequest
                 * @return DeleteWebCallbackOutcome
                 */
                DeleteWebCallbackOutcome DeleteWebCallback(const Model::DeleteWebCallbackRequest &request);
                void DeleteWebCallbackAsync(const Model::DeleteWebCallbackRequest& request, const DeleteWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebCallbackOutcomeCallable DeleteWebCallbackCallable(const Model::DeleteWebCallbackRequest& request);

                /**
                 *该接口用于获取通知渠道组列表
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *获取告警屏蔽配置规则
                 * @param req DescribeAlarmShieldsRequest
                 * @return DescribeAlarmShieldsOutcome
                 */
                DescribeAlarmShieldsOutcome DescribeAlarmShields(const Model::DescribeAlarmShieldsRequest &request);
                void DescribeAlarmShieldsAsync(const Model::DescribeAlarmShieldsRequest& request, const DescribeAlarmShieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmShieldsOutcomeCallable DescribeAlarmShieldsCallable(const Model::DescribeAlarmShieldsRequest& request);

                /**
                 *本接口用于获取告警策略列表。
                 * @param req DescribeAlarmsRequest
                 * @return DescribeAlarmsOutcome
                 */
                DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest &request);
                void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request);

                /**
                 *获取告警历史，例如今天未恢复的告警
                 * @param req DescribeAlertRecordHistoryRequest
                 * @return DescribeAlertRecordHistoryOutcome
                 */
                DescribeAlertRecordHistoryOutcome DescribeAlertRecordHistory(const Model::DescribeAlertRecordHistoryRequest &request);
                void DescribeAlertRecordHistoryAsync(const Model::DescribeAlertRecordHistoryRequest& request, const DescribeAlertRecordHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertRecordHistoryOutcomeCallable DescribeAlertRecordHistoryCallable(const Model::DescribeAlertRecordHistoryRequest& request);

                /**
                 *云产品接入使用相关接口
                 * @param req DescribeCloudProductLogTasksRequest
                 * @return DescribeCloudProductLogTasksOutcome
                 */
                DescribeCloudProductLogTasksOutcome DescribeCloudProductLogTasks(const Model::DescribeCloudProductLogTasksRequest &request);
                void DescribeCloudProductLogTasksAsync(const Model::DescribeCloudProductLogTasksRequest& request, const DescribeCloudProductLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudProductLogTasksOutcomeCallable DescribeCloudProductLogTasksCallable(const Model::DescribeCloudProductLogTasksRequest& request);

                /**
                 *本接口用于获取特殊采集配置，特殊采集配置应用于自建K8S环境的采集Agent
                 * @param req DescribeConfigExtrasRequest
                 * @return DescribeConfigExtrasOutcome
                 */
                DescribeConfigExtrasOutcome DescribeConfigExtras(const Model::DescribeConfigExtrasRequest &request);
                void DescribeConfigExtrasAsync(const Model::DescribeConfigExtrasRequest& request, const DescribeConfigExtrasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigExtrasOutcomeCallable DescribeConfigExtrasCallable(const Model::DescribeConfigExtrasRequest& request);

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
                 *批量查询控制台分享列表
                 * @param req DescribeConsoleSharingListRequest
                 * @return DescribeConsoleSharingListOutcome
                 */
                DescribeConsoleSharingListOutcome DescribeConsoleSharingList(const Model::DescribeConsoleSharingListRequest &request);
                void DescribeConsoleSharingListAsync(const Model::DescribeConsoleSharingListRequest& request, const DescribeConsoleSharingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsoleSharingListOutcomeCallable DescribeConsoleSharingListCallable(const Model::DescribeConsoleSharingListRequest& request);

                /**
                 *本接口用于获取投递配置
                 * @param req DescribeConsumerRequest
                 * @return DescribeConsumerOutcome
                 */
                DescribeConsumerOutcome DescribeConsumer(const Model::DescribeConsumerRequest &request);
                void DescribeConsumerAsync(const Model::DescribeConsumerRequest& request, const DescribeConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerOutcomeCallable DescribeConsumerCallable(const Model::DescribeConsumerRequest& request);

                /**
                 *本接口用于获取cos导入配置
                 * @param req DescribeCosRechargesRequest
                 * @return DescribeCosRechargesOutcome
                 */
                DescribeCosRechargesOutcome DescribeCosRecharges(const Model::DescribeCosRechargesRequest &request);
                void DescribeCosRechargesAsync(const Model::DescribeCosRechargesRequest& request, const DescribeCosRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosRechargesOutcomeCallable DescribeCosRechargesCallable(const Model::DescribeCosRechargesRequest& request);

                /**
                 *本接口用于获取仪表盘订阅列表，支持分页
                 * @param req DescribeDashboardSubscribesRequest
                 * @return DescribeDashboardSubscribesOutcome
                 */
                DescribeDashboardSubscribesOutcome DescribeDashboardSubscribes(const Model::DescribeDashboardSubscribesRequest &request);
                void DescribeDashboardSubscribesAsync(const Model::DescribeDashboardSubscribesRequest& request, const DescribeDashboardSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDashboardSubscribesOutcomeCallable DescribeDashboardSubscribesCallable(const Model::DescribeDashboardSubscribesRequest& request);

                /**
                 *本接口用于获取仪表盘
                 * @param req DescribeDashboardsRequest
                 * @return DescribeDashboardsOutcome
                 */
                DescribeDashboardsOutcome DescribeDashboards(const Model::DescribeDashboardsRequest &request);
                void DescribeDashboardsAsync(const Model::DescribeDashboardsRequest& request, const DescribeDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDashboardsOutcomeCallable DescribeDashboardsCallable(const Model::DescribeDashboardsRequest& request);

                /**
                 *本接口用于获取数据加工任务列表基本信息
                 * @param req DescribeDataTransformInfoRequest
                 * @return DescribeDataTransformInfoOutcome
                 */
                DescribeDataTransformInfoOutcome DescribeDataTransformInfo(const Model::DescribeDataTransformInfoRequest &request);
                void DescribeDataTransformInfoAsync(const Model::DescribeDataTransformInfoRequest& request, const DescribeDataTransformInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataTransformInfoOutcomeCallable DescribeDataTransformInfoCallable(const Model::DescribeDataTransformInfoRequest& request);

                /**
                 *本接口用于获取日志下载任务列表
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
                 *获取Kafka协议消费信息
                 * @param req DescribeKafkaConsumerRequest
                 * @return DescribeKafkaConsumerOutcome
                 */
                DescribeKafkaConsumerOutcome DescribeKafkaConsumer(const Model::DescribeKafkaConsumerRequest &request);
                void DescribeKafkaConsumerAsync(const Model::DescribeKafkaConsumerRequest& request, const DescribeKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaConsumerOutcomeCallable DescribeKafkaConsumerCallable(const Model::DescribeKafkaConsumerRequest& request);

                /**
                 *本接口用于获取Kafka数据订阅任务
                 * @param req DescribeKafkaRechargesRequest
                 * @return DescribeKafkaRechargesOutcome
                 */
                DescribeKafkaRechargesOutcome DescribeKafkaRecharges(const Model::DescribeKafkaRechargesRequest &request);
                void DescribeKafkaRechargesAsync(const Model::DescribeKafkaRechargesRequest& request, const DescribeKafkaRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaRechargesOutcomeCallable DescribeKafkaRechargesCallable(const Model::DescribeKafkaRechargesRequest& request);

                /**
                 *本接口用于搜索日志上下文附近的内容，详情参考[上下文检索](https://cloud.tencent.com/document/product/614/53248)。
API返回数据包最大49MB，建议启用 gzip 压缩（HTTP Request Header Accept-Encoding:gzip）。
                 * @param req DescribeLogContextRequest
                 * @return DescribeLogContextOutcome
                 */
                DescribeLogContextOutcome DescribeLogContext(const Model::DescribeLogContextRequest &request);
                void DescribeLogContextAsync(const Model::DescribeLogContextRequest& request, const DescribeLogContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogContextOutcomeCallable DescribeLogContextCallable(const Model::DescribeLogContextRequest& request);

                /**
                 *本接口用于构建日志数量直方图
                 * @param req DescribeLogHistogramRequest
                 * @return DescribeLogHistogramOutcome
                 */
                DescribeLogHistogramOutcome DescribeLogHistogram(const Model::DescribeLogHistogramRequest &request);
                void DescribeLogHistogramAsync(const Model::DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogHistogramOutcomeCallable DescribeLogHistogramCallable(const Model::DescribeLogHistogramRequest& request);

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
                 *获取指定机器组下的机器状态
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *获取通知内容列表
                 * @param req DescribeNoticeContentsRequest
                 * @return DescribeNoticeContentsOutcome
                 */
                DescribeNoticeContentsOutcome DescribeNoticeContents(const Model::DescribeNoticeContentsRequest &request);
                void DescribeNoticeContentsAsync(const Model::DescribeNoticeContentsRequest& request, const DescribeNoticeContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNoticeContentsOutcomeCallable DescribeNoticeContentsCallable(const Model::DescribeNoticeContentsRequest& request);

                /**
                 *该接口已废弃，如需获取分区数量，请使用DescribeTopics接口。
                 * @param req DescribePartitionsRequest
                 * @return DescribePartitionsOutcome
                 */
                DescribePartitionsOutcome DescribePartitions(const Model::DescribePartitionsRequest &request);
                void DescribePartitionsAsync(const Model::DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePartitionsOutcomeCallable DescribePartitionsCallable(const Model::DescribePartitionsRequest& request);

                /**
                 *本接口用于获取定时SQL分析任务列表
                 * @param req DescribeScheduledSqlInfoRequest
                 * @return DescribeScheduledSqlInfoOutcome
                 */
                DescribeScheduledSqlInfoOutcome DescribeScheduledSqlInfo(const Model::DescribeScheduledSqlInfoRequest &request);
                void DescribeScheduledSqlInfoAsync(const Model::DescribeScheduledSqlInfoRequest& request, const DescribeScheduledSqlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduledSqlInfoOutcomeCallable DescribeScheduledSqlInfoCallable(const Model::DescribeScheduledSqlInfoRequest& request);

                /**
                 *获取投递任务列表
                 * @param req DescribeShipperTasksRequest
                 * @return DescribeShipperTasksOutcome
                 */
                DescribeShipperTasksOutcome DescribeShipperTasks(const Model::DescribeShipperTasksRequest &request);
                void DescribeShipperTasksAsync(const Model::DescribeShipperTasksRequest& request, const DescribeShipperTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShipperTasksOutcomeCallable DescribeShipperTasksCallable(const Model::DescribeShipperTasksRequest& request);

                /**
                 *获取投递到COS的任务配置信息
                 * @param req DescribeShippersRequest
                 * @return DescribeShippersOutcome
                 */
                DescribeShippersOutcome DescribeShippers(const Model::DescribeShippersRequest &request);
                void DescribeShippersAsync(const Model::DescribeShippersRequest& request, const DescribeShippersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShippersOutcomeCallable DescribeShippersCallable(const Model::DescribeShippersRequest& request);

                /**
                 *本接口用于获取日志主题列表，支持分页
                 * @param req DescribeTopicsRequest
                 * @return DescribeTopicsOutcome
                 */
                DescribeTopicsOutcome DescribeTopics(const Model::DescribeTopicsRequest &request);
                void DescribeTopicsAsync(const Model::DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicsOutcomeCallable DescribeTopicsCallable(const Model::DescribeTopicsRequest& request);

                /**
                 *获取告警渠道回调配置列表。
                 * @param req DescribeWebCallbacksRequest
                 * @return DescribeWebCallbacksOutcome
                 */
                DescribeWebCallbacksOutcome DescribeWebCallbacks(const Model::DescribeWebCallbacksRequest &request);
                void DescribeWebCallbacksAsync(const Model::DescribeWebCallbacksRequest& request, const DescribeWebCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebCallbacksOutcomeCallable DescribeWebCallbacksCallable(const Model::DescribeWebCallbacksRequest& request);

                /**
                 *本接口用于获取告警策略执行详情
                 * @param req GetAlarmLogRequest
                 * @return GetAlarmLogOutcome
                 */
                GetAlarmLogOutcome GetAlarmLog(const Model::GetAlarmLogRequest &request);
                void GetAlarmLogAsync(const Model::GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAlarmLogOutcomeCallable GetAlarmLogCallable(const Model::GetAlarmLogRequest& request);

                /**
                 *该接口已废弃，如需修改分区数量，请使用ModifyTopic接口。
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
                 *该接口用于修改通知渠道组
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *该接口用于修改告警屏蔽规则。
                 * @param req ModifyAlarmShieldRequest
                 * @return ModifyAlarmShieldOutcome
                 */
                ModifyAlarmShieldOutcome ModifyAlarmShield(const Model::ModifyAlarmShieldRequest &request);
                void ModifyAlarmShieldAsync(const Model::ModifyAlarmShieldRequest& request, const ModifyAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmShieldOutcomeCallable ModifyAlarmShieldCallable(const Model::ModifyAlarmShieldRequest& request);

                /**
                 *内部云产品接入使用相关接口
                 * @param req ModifyCloudProductLogCollectionRequest
                 * @return ModifyCloudProductLogCollectionOutcome
                 */
                ModifyCloudProductLogCollectionOutcome ModifyCloudProductLogCollection(const Model::ModifyCloudProductLogCollectionRequest &request);
                void ModifyCloudProductLogCollectionAsync(const Model::ModifyCloudProductLogCollectionRequest& request, const ModifyCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudProductLogCollectionOutcomeCallable ModifyCloudProductLogCollectionCallable(const Model::ModifyCloudProductLogCollectionRequest& request);

                /**
                 *修改采集规则配置
                 * @param req ModifyConfigRequest
                 * @return ModifyConfigOutcome
                 */
                ModifyConfigOutcome ModifyConfig(const Model::ModifyConfigRequest &request);
                void ModifyConfigAsync(const Model::ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigOutcomeCallable ModifyConfigCallable(const Model::ModifyConfigRequest& request);

                /**
                 *本接口用于修改特殊采集配置任务，特殊采集配置应用于自建K8S环境的采集Agent
                 * @param req ModifyConfigExtraRequest
                 * @return ModifyConfigExtraOutcome
                 */
                ModifyConfigExtraOutcome ModifyConfigExtra(const Model::ModifyConfigExtraRequest &request);
                void ModifyConfigExtraAsync(const Model::ModifyConfigExtraRequest& request, const ModifyConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigExtraOutcomeCallable ModifyConfigExtraCallable(const Model::ModifyConfigExtraRequest& request);

                /**
                 *修改控制台分享，目前仅允许修改有效期
                 * @param req ModifyConsoleSharingRequest
                 * @return ModifyConsoleSharingOutcome
                 */
                ModifyConsoleSharingOutcome ModifyConsoleSharing(const Model::ModifyConsoleSharingRequest &request);
                void ModifyConsoleSharingAsync(const Model::ModifyConsoleSharingRequest& request, const ModifyConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsoleSharingOutcomeCallable ModifyConsoleSharingCallable(const Model::ModifyConsoleSharingRequest& request);

                /**
                 *本接口用于修改投递Ckafka任务
                 * @param req ModifyConsumerRequest
                 * @return ModifyConsumerOutcome
                 */
                ModifyConsumerOutcome ModifyConsumer(const Model::ModifyConsumerRequest &request);
                void ModifyConsumerAsync(const Model::ModifyConsumerRequest& request, const ModifyConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerOutcomeCallable ModifyConsumerCallable(const Model::ModifyConsumerRequest& request);

                /**
                 *本接口用于修改cos导入任务
                 * @param req ModifyCosRechargeRequest
                 * @return ModifyCosRechargeOutcome
                 */
                ModifyCosRechargeOutcome ModifyCosRecharge(const Model::ModifyCosRechargeRequest &request);
                void ModifyCosRechargeAsync(const Model::ModifyCosRechargeRequest& request, const ModifyCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosRechargeOutcomeCallable ModifyCosRechargeCallable(const Model::ModifyCosRechargeRequest& request);

                /**
                 *此接口用于修改仪表盘订阅
                 * @param req ModifyDashboardSubscribeRequest
                 * @return ModifyDashboardSubscribeOutcome
                 */
                ModifyDashboardSubscribeOutcome ModifyDashboardSubscribe(const Model::ModifyDashboardSubscribeRequest &request);
                void ModifyDashboardSubscribeAsync(const Model::ModifyDashboardSubscribeRequest& request, const ModifyDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDashboardSubscribeOutcomeCallable ModifyDashboardSubscribeCallable(const Model::ModifyDashboardSubscribeRequest& request);

                /**
                 *本接口用于修改数据加工任务
                 * @param req ModifyDataTransformRequest
                 * @return ModifyDataTransformOutcome
                 */
                ModifyDataTransformOutcome ModifyDataTransform(const Model::ModifyDataTransformRequest &request);
                void ModifyDataTransformAsync(const Model::ModifyDataTransformRequest& request, const ModifyDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataTransformOutcomeCallable ModifyDataTransformCallable(const Model::ModifyDataTransformRequest& request);

                /**
                 *本接口用于修改索引配置，该接口除受默认接口请求频率限制外，针对单个日志主题，并发数不能超过1，即同一时间同一个日志主题只能有一个正在执行的索引配置修改操作。
                 * @param req ModifyIndexRequest
                 * @return ModifyIndexOutcome
                 */
                ModifyIndexOutcome ModifyIndex(const Model::ModifyIndexRequest &request);
                void ModifyIndexAsync(const Model::ModifyIndexRequest& request, const ModifyIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIndexOutcomeCallable ModifyIndexCallable(const Model::ModifyIndexRequest& request);

                /**
                 *修改Kafka协议消费信息
                 * @param req ModifyKafkaConsumerRequest
                 * @return ModifyKafkaConsumerOutcome
                 */
                ModifyKafkaConsumerOutcome ModifyKafkaConsumer(const Model::ModifyKafkaConsumerRequest &request);
                void ModifyKafkaConsumerAsync(const Model::ModifyKafkaConsumerRequest& request, const ModifyKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKafkaConsumerOutcomeCallable ModifyKafkaConsumerCallable(const Model::ModifyKafkaConsumerRequest& request);

                /**
                 *本接口用于修改Kafka数据订阅任务
                 * @param req ModifyKafkaRechargeRequest
                 * @return ModifyKafkaRechargeOutcome
                 */
                ModifyKafkaRechargeOutcome ModifyKafkaRecharge(const Model::ModifyKafkaRechargeRequest &request);
                void ModifyKafkaRechargeAsync(const Model::ModifyKafkaRechargeRequest& request, const ModifyKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKafkaRechargeOutcomeCallable ModifyKafkaRechargeCallable(const Model::ModifyKafkaRechargeRequest& request);

                /**
                 *本接口用于修改日志集信息
                 * @param req ModifyLogsetRequest
                 * @return ModifyLogsetOutcome
                 */
                ModifyLogsetOutcome ModifyLogset(const Model::ModifyLogsetRequest &request);
                void ModifyLogsetAsync(const Model::ModifyLogsetRequest& request, const ModifyLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogsetOutcomeCallable ModifyLogsetCallable(const Model::ModifyLogsetRequest& request);

                /**
                 *修改机器组。
注意：修改接口直接覆盖历史数据，改为本次合法入参数据，请谨慎调用此接口。
                 * @param req ModifyMachineGroupRequest
                 * @return ModifyMachineGroupOutcome
                 */
                ModifyMachineGroupOutcome ModifyMachineGroup(const Model::ModifyMachineGroupRequest &request);
                void ModifyMachineGroupAsync(const Model::ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineGroupOutcomeCallable ModifyMachineGroupCallable(const Model::ModifyMachineGroupRequest& request);

                /**
                 *该接口用于修改通知内容配置
                 * @param req ModifyNoticeContentRequest
                 * @return ModifyNoticeContentOutcome
                 */
                ModifyNoticeContentOutcome ModifyNoticeContent(const Model::ModifyNoticeContentRequest &request);
                void ModifyNoticeContentAsync(const Model::ModifyNoticeContentRequest& request, const ModifyNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNoticeContentOutcomeCallable ModifyNoticeContentCallable(const Model::ModifyNoticeContentRequest& request);

                /**
                 *本接口用于修改定时SQL分析任务
                 * @param req ModifyScheduledSqlRequest
                 * @return ModifyScheduledSqlOutcome
                 */
                ModifyScheduledSqlOutcome ModifyScheduledSql(const Model::ModifyScheduledSqlRequest &request);
                void ModifyScheduledSqlAsync(const Model::ModifyScheduledSqlRequest& request, const ModifyScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduledSqlOutcomeCallable ModifyScheduledSqlCallable(const Model::ModifyScheduledSqlRequest& request);

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
                 *该接口用于修改告警渠道回调配置。
                 * @param req ModifyWebCallbackRequest
                 * @return ModifyWebCallbackOutcome
                 */
                ModifyWebCallbackOutcome ModifyWebCallback(const Model::ModifyWebCallbackRequest &request);
                void ModifyWebCallbackAsync(const Model::ModifyWebCallbackRequest& request, const ModifyWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebCallbackOutcomeCallable ModifyWebCallbackCallable(const Model::ModifyWebCallbackRequest& request);

                /**
                 *打开Kafka协议消费功能
                 * @param req OpenKafkaConsumerRequest
                 * @return OpenKafkaConsumerOutcome
                 */
                OpenKafkaConsumerOutcome OpenKafkaConsumer(const Model::OpenKafkaConsumerRequest &request);
                void OpenKafkaConsumerAsync(const Model::OpenKafkaConsumerRequest& request, const OpenKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenKafkaConsumerOutcomeCallable OpenKafkaConsumerCallable(const Model::OpenKafkaConsumerRequest& request);

                /**
                 *本接口用于预览Kafka数据订阅任务客户日志信息
                 * @param req PreviewKafkaRechargeRequest
                 * @return PreviewKafkaRechargeOutcome
                 */
                PreviewKafkaRechargeOutcome PreviewKafkaRecharge(const Model::PreviewKafkaRechargeRequest &request);
                void PreviewKafkaRechargeAsync(const Model::PreviewKafkaRechargeRequest& request, const PreviewKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewKafkaRechargeOutcomeCallable PreviewKafkaRechargeCallable(const Model::PreviewKafkaRechargeRequest& request);

                /**
                 *查询指定时刻指标的最新值。
如果该时刻向前推5分钟内均无指标数据，则无相应的查询结果。
                 * @param req QueryMetricRequest
                 * @return QueryMetricOutcome
                 */
                QueryMetricOutcome QueryMetric(const Model::QueryMetricRequest &request);
                void QueryMetricAsync(const Model::QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMetricOutcomeCallable QueryMetricCallable(const Model::QueryMetricRequest& request);

                /**
                 *查询指定时间范围内指标的变化趋势
                 * @param req QueryRangeMetricRequest
                 * @return QueryRangeMetricOutcome
                 */
                QueryRangeMetricOutcome QueryRangeMetric(const Model::QueryRangeMetricRequest &request);
                void QueryRangeMetricAsync(const Model::QueryRangeMetricRequest& request, const QueryRangeMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRangeMetricOutcomeCallable QueryRangeMetricCallable(const Model::QueryRangeMetricRequest& request);

                /**
                 *重试失败的投递任务
                 * @param req RetryShipperTaskRequest
                 * @return RetryShipperTaskOutcome
                 */
                RetryShipperTaskOutcome RetryShipperTask(const Model::RetryShipperTaskRequest &request);
                void RetryShipperTaskAsync(const Model::RetryShipperTaskRequest& request, const RetryShipperTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryShipperTaskOutcomeCallable RetryShipperTaskCallable(const Model::RetryShipperTaskRequest& request);

                /**
                 *本接口用于预览cos导入信息
                 * @param req SearchCosRechargeInfoRequest
                 * @return SearchCosRechargeInfoOutcome
                 */
                SearchCosRechargeInfoOutcome SearchCosRechargeInfo(const Model::SearchCosRechargeInfoRequest &request);
                void SearchCosRechargeInfoAsync(const Model::SearchCosRechargeInfoRequest& request, const SearchCosRechargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchCosRechargeInfoOutcomeCallable SearchCosRechargeInfoCallable(const Model::SearchCosRechargeInfoRequest& request);

                /**
                 *此接口用于预览仪表盘订阅
                 * @param req SearchDashboardSubscribeRequest
                 * @return SearchDashboardSubscribeOutcome
                 */
                SearchDashboardSubscribeOutcome SearchDashboardSubscribe(const Model::SearchDashboardSubscribeRequest &request);
                void SearchDashboardSubscribeAsync(const Model::SearchDashboardSubscribeRequest& request, const SearchDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchDashboardSubscribeOutcomeCallable SearchDashboardSubscribeCallable(const Model::SearchDashboardSubscribeRequest& request);

                /**
                 *本接口用于检索分析日志，使用该接口时请注意如下事项：
1. 该接口除受默认接口请求频率限制外，针对单个日志主题，查询并发数不能超过15。
2. 检索语法建议使用日志服务专用检索语法CQL，请使用SyntaxRule参数，将值设置为1，控制台默认也使用该语法规则。
3. API返回数据包最大49MB，建议启用 gzip 压缩（HTTP Request Header Accept-Encoding:gzip）。
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *该接口已废弃，如需修改分区数量，请使用ModifyTopic接口。
                 * @param req SplitPartitionRequest
                 * @return SplitPartitionOutcome
                 */
                SplitPartitionOutcome SplitPartition(const Model::SplitPartitionRequest &request);
                void SplitPartitionAsync(const Model::SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitPartitionOutcomeCallable SplitPartitionCallable(const Model::SplitPartitionRequest& request);

                /**
                 *## 提示
为了保障您日志数据的可靠性以及更高效地使用日志服务，建议您使用CLS优化后的接口[上传结构化日志](https://cloud.tencent.com/document/product/614/16873)。

同时我们给此接口专门优化定制了多个语言版本的SDK供您选择，SDK提供统一的异步发送、资源控制、自动重试、优雅关闭、感知上报等功能，使上报日志功能更完善，详情请参考[SDK采集](https://cloud.tencent.com/document/product/614/67157)。

同时云API上传日志接口也支持同步上传日志数据，如果您选择继续使用此接口请参考下文。

## 功能描述

本接口用于将日志写入到指定的日志主题。

#### 输入参数(pb二进制流，位于body中)

| 字段名       | 类型    | 位置 | 必须 | 含义                                                         |
| ------------ | ------- | ---- | ---- | ------------------------------------------------------------ |
| logGroupList | message | pb   | 是   | logGroup 列表，封装好的日志组列表内容，建议 logGroup 数量不要超过5个 |

LogGroup 说明：

| 字段名      | 是否必选 | 含义                                                         |
| ----------- | -------- | ------------------------------------------------------------ |
| logs        | 是       | 日志数组，表示有多个 Log 组成的集合，一个 Log 表示一条日志，一个 LogGroup 中 Log 个数不能超过10000 |
| contextFlow | 否       | LogGroup 的唯一ID，需要使用上下文功能时传入。格式："{上下文ID}-{LogGroupID}"。<br>上下文ID：唯一标识一个上下文（连续滚动的一系列日志文件，或者是需要保序的一系列日志），16进制64位整型字符串。<br>LogGroupID：连续递增的一串整型，16进制64位整型字符串。样例："102700A66102516A-59F59"。                        |
| filename    | 否       | 日志文件名                                                   |
| source      | 否       | 日志来源，一般使用机器 IP 作为标识                           |
| logTags     | 否       | 日志的标签列表                                               |

Log 说明：

| 字段名   | 是否必选 | 含义                                                         |
| -------- | -------- | ------------------------------------------------------------ |
| time     | 是       | 日志时间（Unix 格式时间戳），支持秒、毫秒，建议采用毫秒      |
| contents | 否       | key-value 格式的日志内容，表示一条日志里的多个 key-value 组合 |

Content 说明：

| 字段名 | 是否必选 | 含义                                                         |
| ------ | -------- | ------------------------------------------------------------ |
| key    | 是       | 单条日志里某个字段组的 key 值，不能以`_`开头                 |
| value  | 是       | 单条日志某个字段组的 value 值，单条日志 value 不能超过1MB，LogGroup 中所有 value 总和不能超过5MB |

LogTag 说明：

| 字段名 | 是否必选 | 含义                             |
| ------ | -------- | -------------------------------- |
| key    | 是       | 自定义的标签 key                 |
| value  | 是       | 自定义的标签 key 对应的 value 值 |

## PB 编译示例

本示例将说明如何使用官方 protoc 编译工具将 PB 描述文件 编译生成为 C++ 语言可调用的上传日志接口。

> ?目前 protoc 官方支持 Java、C++、Python 等语言的编译，详情请参见 [protoc](https://github.com/protocolbuffers/protobuf)。

#### 1. 安装 Protocol Buffer

下载 [Protocol Buffer](https://main.qcloudimg.com/raw/d7810aaf8b3073fbbc9d4049c21532aa/protobuf-2.6.1.tar.gz) ，解压并安装。示例版本为 protobuf 2.6.1，环境为 Centos 7.3 系统。 解压`protobuf-2.6.1.tar.gz`压缩包至`/usr/local`目录并进入该目录，执行命令如下：

```
tar -zxvf protobuf-2.6.1.tar.gz -C /usr/local/ && cd /usr/local/protobuf-2.6.1
```

开始编译和安装，配置环境变量，执行命令如下：

```
[root@VM_0_8_centos protobuf-2.6.1]# ./configure 
[root@VM_0_8_centos protobuf-2.6.1]# make && make install
[root@VM_0_8_centos protobuf-2.6.1]# export PATH=$PATH:/usr/local/protobuf-2.6.1/bin
```

编译成功后，您可以使用以下命令查看版本：

```
[root@VM_0_8_centos protobuf-2.6.1]# protoc --version
liprotoc 2.6.1
```

#### 2. 创建 PB 描述文件

PB 描述文件是通信双方约定的数据交换格式，上传日志时须将规定的协议格式编译成对应语言版本的调用接口，然后添加到工程代码里，详情请参见 [protoc](https://github.com/protocolbuffers/protobuf) 。

以日志服务所规定的 PB 数据格式内容为准， 在本地创建 PB 消息描述文件 cls.proto。

> !PB 描述文件内容不可更改，且文件名须以`.proto`结尾。

cls.proto 内容（PB 描述文件）如下：

```
package cls;

message Log
{
    message Content
    {
        required string key   = 1; // 每组字段的 key
        required string value = 2; // 每组字段的 value
    }
    required int64   time     = 1; // 时间戳，UNIX时间格式
    repeated Content contents = 2; // 一条日志里的多个kv组合
}

message LogTag
{
    required string key       = 1;
    required string value     = 2;
}

message LogGroup
{
    repeated Log    logs        = 1; // 多条日志合成的日志数组
    optional string contextFlow = 2; // 目前暂无效用
    optional string filename    = 3; // 日志文件名
    optional string source      = 4; // 日志来源，一般使用机器IP
    repeated LogTag logTags     = 5;
}

message LogGroupList
{
    repeated LogGroup logGroupList = 1; // 日志组列表
}
```

#### 3. 编译生成

此例中，使用 proto 编译器生成 C++ 语言的文件，在 cls.proto 文件的同一目录下，执行如下编译命令：

```
protoc --cpp_out=./ ./cls.proto 
```

> ?`--cpp_out=./`表示编译成 cpp 格式并输出当前目录下，`./cls.proto`表示位于当前目录下的 cls.proto 描述文件。

编译成功后，会输出对应语言的代码文件。此例会生成 cls.pb.h 头文件和 [cls.pb.cc](http://cls.pb.cc) 代码实现文件，如下所示：

```
[root@VM_0_8_centos protobuf-2.6.1]# protoc --cpp_out=./ ./cls.proto
[root@VM_0_8_centos protobuf-2.6.1]# ls
cls.pb.cc cls.pb.h cls.proto
```

#### 4. 调用

将生成的 cls.pb.h 头文件引入代码中，调用接口进行数据格式封装。
                 * @param req UploadLogRequest
                 * @return UploadLogOutcome
                 */
                UploadLogOutcome UploadLog(const Model::UploadLogRequest &request);
                void UploadLogAsync(const Model::UploadLogRequest& request, const UploadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadLogOutcomeCallable UploadLogCallable(const Model::UploadLogRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_CLSCLIENT_H_
