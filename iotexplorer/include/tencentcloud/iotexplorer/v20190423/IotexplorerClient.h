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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_IOTEXPLORERCLIENT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_IOTEXPLORERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateBatchProductionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateBatchProductionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateFenceBindRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateFenceBindResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionFenceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionFenceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteFenceBindRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteFenceBindResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionFenceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionFenceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBatchProductionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBatchProductionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBindedProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBindedProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceBindGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceBindGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceLocationSolveRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceLocationSolveResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePositionListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePositionListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceBindListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceBindListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceEventListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceEventListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewayBindDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewayBindDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePositionFenceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePositionFenceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeSpaceFenceEventListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeSpaceFenceEventListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DirectBindDeviceInFamilyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DirectBindDeviceInFamilyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DisableTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DisableTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/EnableTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/EnableTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenSingleDeviceSignatureOfPublicRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenSingleDeviceSignatureOfPublicResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetBatchProductionsListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetBatchProductionsListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetCOSURLRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetCOSURLResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceLocationHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceLocationHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetFamilyDeviceUserListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetFamilyDeviceUserListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetGatewaySubDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetGatewaySubDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetLoRaGatewayListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetLoRaGatewayListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetPositionSpaceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetPositionSpaceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetProjectListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetProjectListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetStudioProductListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetStudioProductListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTopicRuleListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTopicRuleListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListEventHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListEventHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListFirmwaresRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListFirmwaresResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyFenceBindRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyFenceBindResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionFenceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionFenceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifySpacePropertyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifySpacePropertyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishBroadcastMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishBroadcastMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishRRPCMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishRRPCMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchPositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchPositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateDevicesEnableStateResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateFirmwareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateFirmwareResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UploadFirmwareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UploadFirmwareResponse.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            class IotexplorerClient : public AbstractClient
            {
            public:
                IotexplorerClient(const Credential &credential, const std::string &region);
                IotexplorerClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindDevicesResponse> BindDevicesOutcome;
                typedef std::future<BindDevicesOutcome> BindDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BindDevicesRequest&, BindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::BindProductsResponse> BindProductsOutcome;
                typedef std::future<BindProductsOutcome> BindProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BindProductsRequest&, BindProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::CallDeviceActionAsyncResponse> CallDeviceActionAsyncOutcome;
                typedef std::future<CallDeviceActionAsyncOutcome> CallDeviceActionAsyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CallDeviceActionAsyncRequest&, CallDeviceActionAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CallDeviceActionSyncResponse> CallDeviceActionSyncOutcome;
                typedef std::future<CallDeviceActionSyncOutcome> CallDeviceActionSyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CallDeviceActionSyncRequest&, CallDeviceActionSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDeviceDataResponse> ControlDeviceDataOutcome;
                typedef std::future<ControlDeviceDataOutcome> ControlDeviceDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ControlDeviceDataRequest&, ControlDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchProductionResponse> CreateBatchProductionOutcome;
                typedef std::future<CreateBatchProductionOutcome> CreateBatchProductionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateBatchProductionRequest&, CreateBatchProductionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchProductionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFenceBindResponse> CreateFenceBindOutcome;
                typedef std::future<CreateFenceBindOutcome> CreateFenceBindOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateFenceBindRequest&, CreateFenceBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFenceBindAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoRaFrequencyResponse> CreateLoRaFrequencyOutcome;
                typedef std::future<CreateLoRaFrequencyOutcome> CreateLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateLoRaFrequencyRequest&, CreateLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoRaGatewayResponse> CreateLoRaGatewayOutcome;
                typedef std::future<CreateLoRaGatewayOutcome> CreateLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateLoRaGatewayRequest&, CreateLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePositionFenceResponse> CreatePositionFenceOutcome;
                typedef std::future<CreatePositionFenceOutcome> CreatePositionFenceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreatePositionFenceRequest&, CreatePositionFenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePositionFenceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePositionSpaceResponse> CreatePositionSpaceOutcome;
                typedef std::future<CreatePositionSpaceOutcome> CreatePositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreatePositionSpaceRequest&, CreatePositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStudioProductResponse> CreateStudioProductOutcome;
                typedef std::future<CreateStudioProductOutcome> CreateStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateStudioProductRequest&, CreateStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicPolicyResponse> CreateTopicPolicyOutcome;
                typedef std::future<CreateTopicPolicyOutcome> CreateTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTopicPolicyRequest&, CreateTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicRuleResponse> CreateTopicRuleOutcome;
                typedef std::future<CreateTopicRuleOutcome> CreateTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTopicRuleRequest&, CreateTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDevicesResponse> DeleteDevicesOutcome;
                typedef std::future<DeleteDevicesOutcome> DeleteDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteDevicesRequest&, DeleteDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFenceBindResponse> DeleteFenceBindOutcome;
                typedef std::future<DeleteFenceBindOutcome> DeleteFenceBindOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteFenceBindRequest&, DeleteFenceBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFenceBindAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoRaFrequencyResponse> DeleteLoRaFrequencyOutcome;
                typedef std::future<DeleteLoRaFrequencyOutcome> DeleteLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteLoRaFrequencyRequest&, DeleteLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoRaGatewayResponse> DeleteLoRaGatewayOutcome;
                typedef std::future<DeleteLoRaGatewayOutcome> DeleteLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteLoRaGatewayRequest&, DeleteLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoRaGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePositionFenceResponse> DeletePositionFenceOutcome;
                typedef std::future<DeletePositionFenceOutcome> DeletePositionFenceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeletePositionFenceRequest&, DeletePositionFenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePositionFenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePositionSpaceResponse> DeletePositionSpaceOutcome;
                typedef std::future<DeletePositionSpaceOutcome> DeletePositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeletePositionSpaceRequest&, DeletePositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStudioProductResponse> DeleteStudioProductOutcome;
                typedef std::future<DeleteStudioProductOutcome> DeleteStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteStudioProductRequest&, DeleteStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicPolicyResponse> DeleteTopicPolicyOutcome;
                typedef std::future<DeleteTopicPolicyOutcome> DeleteTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTopicPolicyRequest&, DeleteTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicRuleResponse> DeleteTopicRuleOutcome;
                typedef std::future<DeleteTopicRuleOutcome> DeleteTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTopicRuleRequest&, DeleteTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchProductionResponse> DescribeBatchProductionOutcome;
                typedef std::future<DescribeBatchProductionOutcome> DescribeBatchProductionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeBatchProductionRequest&, DescribeBatchProductionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchProductionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindedProductsResponse> DescribeBindedProductsOutcome;
                typedef std::future<DescribeBindedProductsOutcome> DescribeBindedProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeBindedProductsRequest&, DescribeBindedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindedProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceBindGatewayResponse> DescribeDeviceBindGatewayOutcome;
                typedef std::future<DescribeDeviceBindGatewayOutcome> DescribeDeviceBindGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceBindGatewayRequest&, DescribeDeviceBindGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceBindGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceDataResponse> DescribeDeviceDataOutcome;
                typedef std::future<DescribeDeviceDataOutcome> DescribeDeviceDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceDataRequest&, DescribeDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceDataHistoryResponse> DescribeDeviceDataHistoryOutcome;
                typedef std::future<DescribeDeviceDataHistoryOutcome> DescribeDeviceDataHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceDataHistoryRequest&, DescribeDeviceDataHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceLocationSolveResponse> DescribeDeviceLocationSolveOutcome;
                typedef std::future<DescribeDeviceLocationSolveOutcome> DescribeDeviceLocationSolveOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceLocationSolveRequest&, DescribeDeviceLocationSolveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceLocationSolveAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePositionListResponse> DescribeDevicePositionListOutcome;
                typedef std::future<DescribeDevicePositionListOutcome> DescribeDevicePositionListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDevicePositionListRequest&, DescribeDevicePositionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePositionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFenceBindListResponse> DescribeFenceBindListOutcome;
                typedef std::future<DescribeFenceBindListOutcome> DescribeFenceBindListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFenceBindListRequest&, DescribeFenceBindListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFenceBindListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFenceEventListResponse> DescribeFenceEventListOutcome;
                typedef std::future<DescribeFenceEventListOutcome> DescribeFenceEventListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFenceEventListRequest&, DescribeFenceEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFenceEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskResponse> DescribeFirmwareTaskOutcome;
                typedef std::future<DescribeFirmwareTaskOutcome> DescribeFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareTaskRequest&, DescribeFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayBindDevicesResponse> DescribeGatewayBindDevicesOutcome;
                typedef std::future<DescribeGatewayBindDevicesOutcome> DescribeGatewayBindDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeGatewayBindDevicesRequest&, DescribeGatewayBindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayBindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewaySubDeviceListResponse> DescribeGatewaySubDeviceListOutcome;
                typedef std::future<DescribeGatewaySubDeviceListOutcome> DescribeGatewaySubDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeGatewaySubDeviceListRequest&, DescribeGatewaySubDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaySubDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewaySubProductsResponse> DescribeGatewaySubProductsOutcome;
                typedef std::future<DescribeGatewaySubProductsOutcome> DescribeGatewaySubProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeGatewaySubProductsRequest&, DescribeGatewaySubProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaySubProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoRaFrequencyResponse> DescribeLoRaFrequencyOutcome;
                typedef std::future<DescribeLoRaFrequencyOutcome> DescribeLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeLoRaFrequencyRequest&, DescribeLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelDefinitionResponse> DescribeModelDefinitionOutcome;
                typedef std::future<DescribeModelDefinitionOutcome> DescribeModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeModelDefinitionRequest&, DescribeModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelDefinitionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePositionFenceListResponse> DescribePositionFenceListOutcome;
                typedef std::future<DescribePositionFenceListOutcome> DescribePositionFenceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribePositionFenceListRequest&, DescribePositionFenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePositionFenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceFenceEventListResponse> DescribeSpaceFenceEventListOutcome;
                typedef std::future<DescribeSpaceFenceEventListOutcome> DescribeSpaceFenceEventListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeSpaceFenceEventListRequest&, DescribeSpaceFenceEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceFenceEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStudioProductResponse> DescribeStudioProductOutcome;
                typedef std::future<DescribeStudioProductOutcome> DescribeStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeStudioProductRequest&, DescribeStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicPolicyResponse> DescribeTopicPolicyOutcome;
                typedef std::future<DescribeTopicPolicyOutcome> DescribeTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTopicPolicyRequest&, DescribeTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicRuleResponse> DescribeTopicRuleOutcome;
                typedef std::future<DescribeTopicRuleOutcome> DescribeTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTopicRuleRequest&, DescribeTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DirectBindDeviceInFamilyResponse> DirectBindDeviceInFamilyOutcome;
                typedef std::future<DirectBindDeviceInFamilyOutcome> DirectBindDeviceInFamilyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DirectBindDeviceInFamilyRequest&, DirectBindDeviceInFamilyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DirectBindDeviceInFamilyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableTopicRuleResponse> DisableTopicRuleOutcome;
                typedef std::future<DisableTopicRuleOutcome> DisableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DisableTopicRuleRequest&, DisableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTopicRuleResponse> EnableTopicRuleOutcome;
                typedef std::future<EnableTopicRuleOutcome> EnableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::EnableTopicRuleRequest&, EnableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::GenSingleDeviceSignatureOfPublicResponse> GenSingleDeviceSignatureOfPublicOutcome;
                typedef std::future<GenSingleDeviceSignatureOfPublicOutcome> GenSingleDeviceSignatureOfPublicOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GenSingleDeviceSignatureOfPublicRequest&, GenSingleDeviceSignatureOfPublicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenSingleDeviceSignatureOfPublicAsyncHandler;
                typedef Outcome<Core::Error, Model::GetBatchProductionsListResponse> GetBatchProductionsListOutcome;
                typedef std::future<GetBatchProductionsListOutcome> GetBatchProductionsListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetBatchProductionsListRequest&, GetBatchProductionsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBatchProductionsListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCOSURLResponse> GetCOSURLOutcome;
                typedef std::future<GetCOSURLOutcome> GetCOSURLOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetCOSURLRequest&, GetCOSURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCOSURLAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceListResponse> GetDeviceListOutcome;
                typedef std::future<GetDeviceListOutcome> GetDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetDeviceListRequest&, GetDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceLocationHistoryResponse> GetDeviceLocationHistoryOutcome;
                typedef std::future<GetDeviceLocationHistoryOutcome> GetDeviceLocationHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetDeviceLocationHistoryRequest&, GetDeviceLocationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceLocationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFamilyDeviceUserListResponse> GetFamilyDeviceUserListOutcome;
                typedef std::future<GetFamilyDeviceUserListOutcome> GetFamilyDeviceUserListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetFamilyDeviceUserListRequest&, GetFamilyDeviceUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFamilyDeviceUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGatewaySubDeviceListResponse> GetGatewaySubDeviceListOutcome;
                typedef std::future<GetGatewaySubDeviceListOutcome> GetGatewaySubDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetGatewaySubDeviceListRequest&, GetGatewaySubDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewaySubDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLoRaGatewayListResponse> GetLoRaGatewayListOutcome;
                typedef std::future<GetLoRaGatewayListOutcome> GetLoRaGatewayListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetLoRaGatewayListRequest&, GetLoRaGatewayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLoRaGatewayListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPositionSpaceListResponse> GetPositionSpaceListOutcome;
                typedef std::future<GetPositionSpaceListOutcome> GetPositionSpaceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetPositionSpaceListRequest&, GetPositionSpaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPositionSpaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProjectListResponse> GetProjectListOutcome;
                typedef std::future<GetProjectListOutcome> GetProjectListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetProjectListRequest&, GetProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetStudioProductListResponse> GetStudioProductListOutcome;
                typedef std::future<GetStudioProductListOutcome> GetStudioProductListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetStudioProductListRequest&, GetStudioProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStudioProductListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTopicRuleListResponse> GetTopicRuleListOutcome;
                typedef std::future<GetTopicRuleListOutcome> GetTopicRuleListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTopicRuleListRequest&, GetTopicRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEventHistoryResponse> ListEventHistoryOutcome;
                typedef std::future<ListEventHistoryOutcome> ListEventHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListEventHistoryRequest&, ListEventHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEventHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFirmwaresResponse> ListFirmwaresOutcome;
                typedef std::future<ListFirmwaresOutcome> ListFirmwaresOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListFirmwaresRequest&, ListFirmwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFirmwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopicPolicyResponse> ListTopicPolicyOutcome;
                typedef std::future<ListTopicPolicyOutcome> ListTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListTopicPolicyRequest&, ListTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFenceBindResponse> ModifyFenceBindOutcome;
                typedef std::future<ModifyFenceBindOutcome> ModifyFenceBindOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyFenceBindRequest&, ModifyFenceBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFenceBindAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoRaFrequencyResponse> ModifyLoRaFrequencyOutcome;
                typedef std::future<ModifyLoRaFrequencyOutcome> ModifyLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyLoRaFrequencyRequest&, ModifyLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoRaGatewayResponse> ModifyLoRaGatewayOutcome;
                typedef std::future<ModifyLoRaGatewayOutcome> ModifyLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyLoRaGatewayRequest&, ModifyLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoRaGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelDefinitionResponse> ModifyModelDefinitionOutcome;
                typedef std::future<ModifyModelDefinitionOutcome> ModifyModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyModelDefinitionRequest&, ModifyModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelDefinitionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPositionFenceResponse> ModifyPositionFenceOutcome;
                typedef std::future<ModifyPositionFenceOutcome> ModifyPositionFenceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyPositionFenceRequest&, ModifyPositionFenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPositionFenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPositionSpaceResponse> ModifyPositionSpaceOutcome;
                typedef std::future<ModifyPositionSpaceOutcome> ModifyPositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyPositionSpaceRequest&, ModifyPositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpacePropertyResponse> ModifySpacePropertyOutcome;
                typedef std::future<ModifySpacePropertyOutcome> ModifySpacePropertyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifySpacePropertyRequest&, ModifySpacePropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpacePropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStudioProductResponse> ModifyStudioProductOutcome;
                typedef std::future<ModifyStudioProductOutcome> ModifyStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyStudioProductRequest&, ModifyStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicPolicyResponse> ModifyTopicPolicyOutcome;
                typedef std::future<ModifyTopicPolicyOutcome> ModifyTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTopicPolicyRequest&, ModifyTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicRuleResponse> ModifyTopicRuleOutcome;
                typedef std::future<ModifyTopicRuleOutcome> ModifyTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTopicRuleRequest&, ModifyTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishBroadcastMessageResponse> PublishBroadcastMessageOutcome;
                typedef std::future<PublishBroadcastMessageOutcome> PublishBroadcastMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishBroadcastMessageRequest&, PublishBroadcastMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishBroadcastMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishMessageResponse> PublishMessageOutcome;
                typedef std::future<PublishMessageOutcome> PublishMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishMessageRequest&, PublishMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishRRPCMessageResponse> PublishRRPCMessageOutcome;
                typedef std::future<PublishRRPCMessageOutcome> PublishRRPCMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishRRPCMessageRequest&, PublishRRPCMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishRRPCMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseStudioProductResponse> ReleaseStudioProductOutcome;
                typedef std::future<ReleaseStudioProductOutcome> ReleaseStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ReleaseStudioProductRequest&, ReleaseStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchPositionSpaceResponse> SearchPositionSpaceOutcome;
                typedef std::future<SearchPositionSpaceOutcome> SearchPositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchPositionSpaceRequest&, SearchPositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchPositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchStudioProductResponse> SearchStudioProductOutcome;
                typedef std::future<SearchStudioProductOutcome> SearchStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchStudioProductRequest&, SearchStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchTopicRuleResponse> SearchTopicRuleOutcome;
                typedef std::future<SearchTopicRuleOutcome> SearchTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchTopicRuleRequest&, SearchTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDevicesResponse> UnbindDevicesOutcome;
                typedef std::future<UnbindDevicesOutcome> UnbindDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UnbindDevicesRequest&, UnbindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindProductsResponse> UnbindProductsOutcome;
                typedef std::future<UnbindProductsOutcome> UnbindProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UnbindProductsRequest&, UnbindProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicesEnableStateResponse> UpdateDevicesEnableStateOutcome;
                typedef std::future<UpdateDevicesEnableStateOutcome> UpdateDevicesEnableStateOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateDevicesEnableStateRequest&, UpdateDevicesEnableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicesEnableStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFirmwareResponse> UpdateFirmwareOutcome;
                typedef std::future<UpdateFirmwareOutcome> UpdateFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateFirmwareRequest&, UpdateFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFirmwareResponse> UploadFirmwareOutcome;
                typedef std::future<UploadFirmwareOutcome> UploadFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UploadFirmwareRequest&, UploadFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFirmwareAsyncHandler;



                /**
                 *批量绑定子设备
                 * @param req BindDevicesRequest
                 * @return BindDevicesOutcome
                 */
                BindDevicesOutcome BindDevices(const Model::BindDevicesRequest &request);
                void BindDevicesAsync(const Model::BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDevicesOutcomeCallable BindDevicesCallable(const Model::BindDevicesRequest& request);

                /**
                 *批量绑定子产品
                 * @param req BindProductsRequest
                 * @return BindProductsOutcome
                 */
                BindProductsOutcome BindProducts(const Model::BindProductsRequest &request);
                void BindProductsAsync(const Model::BindProductsRequest& request, const BindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindProductsOutcomeCallable BindProductsCallable(const Model::BindProductsRequest& request);

                /**
                 *提供给用户异步调用设备行为的能力
                 * @param req CallDeviceActionAsyncRequest
                 * @return CallDeviceActionAsyncOutcome
                 */
                CallDeviceActionAsyncOutcome CallDeviceActionAsync(const Model::CallDeviceActionAsyncRequest &request);
                void CallDeviceActionAsyncAsync(const Model::CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallDeviceActionAsyncOutcomeCallable CallDeviceActionAsyncCallable(const Model::CallDeviceActionAsyncRequest& request);

                /**
                 *为用户提供同步调用设备行为的能力。
                 * @param req CallDeviceActionSyncRequest
                 * @return CallDeviceActionSyncOutcome
                 */
                CallDeviceActionSyncOutcome CallDeviceActionSync(const Model::CallDeviceActionSyncRequest &request);
                void CallDeviceActionSyncAsync(const Model::CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallDeviceActionSyncOutcomeCallable CallDeviceActionSyncCallable(const Model::CallDeviceActionSyncRequest& request);

                /**
                 *根据设备产品ID、设备名称，设置控制设备的属性数据。
                 * @param req ControlDeviceDataRequest
                 * @return ControlDeviceDataOutcome
                 */
                ControlDeviceDataOutcome ControlDeviceData(const Model::ControlDeviceDataRequest &request);
                void ControlDeviceDataAsync(const Model::ControlDeviceDataRequest& request, const ControlDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDeviceDataOutcomeCallable ControlDeviceDataCallable(const Model::ControlDeviceDataRequest& request);

                /**
                 *用于新建批量生产设备
                 * @param req CreateBatchProductionRequest
                 * @return CreateBatchProductionOutcome
                 */
                CreateBatchProductionOutcome CreateBatchProduction(const Model::CreateBatchProductionRequest &request);
                void CreateBatchProductionAsync(const Model::CreateBatchProductionRequest& request, const CreateBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchProductionOutcomeCallable CreateBatchProductionCallable(const Model::CreateBatchProductionRequest& request);

                /**
                 *创建设备
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *创建围栏绑定信息
                 * @param req CreateFenceBindRequest
                 * @return CreateFenceBindOutcome
                 */
                CreateFenceBindOutcome CreateFenceBind(const Model::CreateFenceBindRequest &request);
                void CreateFenceBindAsync(const Model::CreateFenceBindRequest& request, const CreateFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFenceBindOutcomeCallable CreateFenceBindCallable(const Model::CreateFenceBindRequest& request);

                /**
                 *创建 LoRa 自定义频点
                 * @param req CreateLoRaFrequencyRequest
                 * @return CreateLoRaFrequencyOutcome
                 */
                CreateLoRaFrequencyOutcome CreateLoRaFrequency(const Model::CreateLoRaFrequencyRequest &request);
                void CreateLoRaFrequencyAsync(const Model::CreateLoRaFrequencyRequest& request, const CreateLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoRaFrequencyOutcomeCallable CreateLoRaFrequencyCallable(const Model::CreateLoRaFrequencyRequest& request);

                /**
                 *创建新 LoRa 网关设备接口
                 * @param req CreateLoRaGatewayRequest
                 * @return CreateLoRaGatewayOutcome
                 */
                CreateLoRaGatewayOutcome CreateLoRaGateway(const Model::CreateLoRaGatewayRequest &request);
                void CreateLoRaGatewayAsync(const Model::CreateLoRaGatewayRequest& request, const CreateLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoRaGatewayOutcomeCallable CreateLoRaGatewayCallable(const Model::CreateLoRaGatewayRequest& request);

                /**
                 *创建围栏
                 * @param req CreatePositionFenceRequest
                 * @return CreatePositionFenceOutcome
                 */
                CreatePositionFenceOutcome CreatePositionFence(const Model::CreatePositionFenceRequest &request);
                void CreatePositionFenceAsync(const Model::CreatePositionFenceRequest& request, const CreatePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePositionFenceOutcomeCallable CreatePositionFenceCallable(const Model::CreatePositionFenceRequest& request);

                /**
                 *创建位置空间
                 * @param req CreatePositionSpaceRequest
                 * @return CreatePositionSpaceOutcome
                 */
                CreatePositionSpaceOutcome CreatePositionSpace(const Model::CreatePositionSpaceRequest &request);
                void CreatePositionSpaceAsync(const Model::CreatePositionSpaceRequest& request, const CreatePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePositionSpaceOutcomeCallable CreatePositionSpaceCallable(const Model::CreatePositionSpaceRequest& request);

                /**
                 *为用户提供新建项目的能力，用于集中管理产品和应用。
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *为用户提供新建产品的能力，用于管理用户的设备
                 * @param req CreateStudioProductRequest
                 * @return CreateStudioProductOutcome
                 */
                CreateStudioProductOutcome CreateStudioProduct(const Model::CreateStudioProductRequest &request);
                void CreateStudioProductAsync(const Model::CreateStudioProductRequest& request, const CreateStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStudioProductOutcomeCallable CreateStudioProductCallable(const Model::CreateStudioProductRequest& request);

                /**
                 *本接口（CreateTopicPolicy）用于创建一个Topic 
                 * @param req CreateTopicPolicyRequest
                 * @return CreateTopicPolicyOutcome
                 */
                CreateTopicPolicyOutcome CreateTopicPolicy(const Model::CreateTopicPolicyRequest &request);
                void CreateTopicPolicyAsync(const Model::CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicPolicyOutcomeCallable CreateTopicPolicyCallable(const Model::CreateTopicPolicyRequest& request);

                /**
                 *创建规则
                 * @param req CreateTopicRuleRequest
                 * @return CreateTopicRuleOutcome
                 */
                CreateTopicRuleOutcome CreateTopicRule(const Model::CreateTopicRuleRequest &request);
                void CreateTopicRuleAsync(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const Model::CreateTopicRuleRequest& request);

                /**
                 *删除设备
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *批量删除设备
                 * @param req DeleteDevicesRequest
                 * @return DeleteDevicesOutcome
                 */
                DeleteDevicesOutcome DeleteDevices(const Model::DeleteDevicesRequest &request);
                void DeleteDevicesAsync(const Model::DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDevicesOutcomeCallable DeleteDevicesCallable(const Model::DeleteDevicesRequest& request);

                /**
                 *删除围栏绑定信息
                 * @param req DeleteFenceBindRequest
                 * @return DeleteFenceBindOutcome
                 */
                DeleteFenceBindOutcome DeleteFenceBind(const Model::DeleteFenceBindRequest &request);
                void DeleteFenceBindAsync(const Model::DeleteFenceBindRequest& request, const DeleteFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFenceBindOutcomeCallable DeleteFenceBindCallable(const Model::DeleteFenceBindRequest& request);

                /**
                 *提供删除LoRa自定义频点的能力
                 * @param req DeleteLoRaFrequencyRequest
                 * @return DeleteLoRaFrequencyOutcome
                 */
                DeleteLoRaFrequencyOutcome DeleteLoRaFrequency(const Model::DeleteLoRaFrequencyRequest &request);
                void DeleteLoRaFrequencyAsync(const Model::DeleteLoRaFrequencyRequest& request, const DeleteLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoRaFrequencyOutcomeCallable DeleteLoRaFrequencyCallable(const Model::DeleteLoRaFrequencyRequest& request);

                /**
                 *删除  LoRa 网关的接口
                 * @param req DeleteLoRaGatewayRequest
                 * @return DeleteLoRaGatewayOutcome
                 */
                DeleteLoRaGatewayOutcome DeleteLoRaGateway(const Model::DeleteLoRaGatewayRequest &request);
                void DeleteLoRaGatewayAsync(const Model::DeleteLoRaGatewayRequest& request, const DeleteLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoRaGatewayOutcomeCallable DeleteLoRaGatewayCallable(const Model::DeleteLoRaGatewayRequest& request);

                /**
                 *删除围栏
                 * @param req DeletePositionFenceRequest
                 * @return DeletePositionFenceOutcome
                 */
                DeletePositionFenceOutcome DeletePositionFence(const Model::DeletePositionFenceRequest &request);
                void DeletePositionFenceAsync(const Model::DeletePositionFenceRequest& request, const DeletePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePositionFenceOutcomeCallable DeletePositionFenceCallable(const Model::DeletePositionFenceRequest& request);

                /**
                 *删除位置空间
                 * @param req DeletePositionSpaceRequest
                 * @return DeletePositionSpaceOutcome
                 */
                DeletePositionSpaceOutcome DeletePositionSpace(const Model::DeletePositionSpaceRequest &request);
                void DeletePositionSpaceAsync(const Model::DeletePositionSpaceRequest& request, const DeletePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePositionSpaceOutcomeCallable DeletePositionSpaceCallable(const Model::DeletePositionSpaceRequest& request);

                /**
                 *提供删除某个项目的能力
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *提供删除某个项目下产品的能力
                 * @param req DeleteStudioProductRequest
                 * @return DeleteStudioProductOutcome
                 */
                DeleteStudioProductOutcome DeleteStudioProduct(const Model::DeleteStudioProductRequest &request);
                void DeleteStudioProductAsync(const Model::DeleteStudioProductRequest& request, const DeleteStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStudioProductOutcomeCallable DeleteStudioProductCallable(const Model::DeleteStudioProductRequest& request);

                /**
                 *本接口（DeleteTopicPolicy）用于删除Topic 
                 * @param req DeleteTopicPolicyRequest
                 * @return DeleteTopicPolicyOutcome
                 */
                DeleteTopicPolicyOutcome DeleteTopicPolicy(const Model::DeleteTopicPolicyRequest &request);
                void DeleteTopicPolicyAsync(const Model::DeleteTopicPolicyRequest& request, const DeleteTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicPolicyOutcomeCallable DeleteTopicPolicyCallable(const Model::DeleteTopicPolicyRequest& request);

                /**
                 *删除规则
                 * @param req DeleteTopicRuleRequest
                 * @return DeleteTopicRuleOutcome
                 */
                DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest &request);
                void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request);

                /**
                 *获取量产详情信息。
                 * @param req DescribeBatchProductionRequest
                 * @return DescribeBatchProductionOutcome
                 */
                DescribeBatchProductionOutcome DescribeBatchProduction(const Model::DescribeBatchProductionRequest &request);
                void DescribeBatchProductionAsync(const Model::DescribeBatchProductionRequest& request, const DescribeBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchProductionOutcomeCallable DescribeBatchProductionCallable(const Model::DescribeBatchProductionRequest& request);

                /**
                 *获取网关产品已经绑定的子产品
                 * @param req DescribeBindedProductsRequest
                 * @return DescribeBindedProductsOutcome
                 */
                DescribeBindedProductsOutcome DescribeBindedProducts(const Model::DescribeBindedProductsRequest &request);
                void DescribeBindedProductsAsync(const Model::DescribeBindedProductsRequest& request, const DescribeBindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindedProductsOutcomeCallable DescribeBindedProductsCallable(const Model::DescribeBindedProductsRequest& request);

                /**
                 *用于查看某个设备的详细信息
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *查询设备绑定的网关设备
                 * @param req DescribeDeviceBindGatewayRequest
                 * @return DescribeDeviceBindGatewayOutcome
                 */
                DescribeDeviceBindGatewayOutcome DescribeDeviceBindGateway(const Model::DescribeDeviceBindGatewayRequest &request);
                void DescribeDeviceBindGatewayAsync(const Model::DescribeDeviceBindGatewayRequest& request, const DescribeDeviceBindGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceBindGatewayOutcomeCallable DescribeDeviceBindGatewayCallable(const Model::DescribeDeviceBindGatewayRequest& request);

                /**
                 *根据设备产品ID、设备名称，获取设备上报的属性数据。
                 * @param req DescribeDeviceDataRequest
                 * @return DescribeDeviceDataOutcome
                 */
                DescribeDeviceDataOutcome DescribeDeviceData(const Model::DescribeDeviceDataRequest &request);
                void DescribeDeviceDataAsync(const Model::DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataOutcomeCallable DescribeDeviceDataCallable(const Model::DescribeDeviceDataRequest& request);

                /**
                 *获取设备在指定时间范围内上报的历史数据。
                 * @param req DescribeDeviceDataHistoryRequest
                 * @return DescribeDeviceDataHistoryOutcome
                 */
                DescribeDeviceDataHistoryOutcome DescribeDeviceDataHistory(const Model::DescribeDeviceDataHistoryRequest &request);
                void DescribeDeviceDataHistoryAsync(const Model::DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataHistoryOutcomeCallable DescribeDeviceDataHistoryCallable(const Model::DescribeDeviceDataHistoryRequest& request);

                /**
                 *获取实时位置解析
                 * @param req DescribeDeviceLocationSolveRequest
                 * @return DescribeDeviceLocationSolveOutcome
                 */
                DescribeDeviceLocationSolveOutcome DescribeDeviceLocationSolve(const Model::DescribeDeviceLocationSolveRequest &request);
                void DescribeDeviceLocationSolveAsync(const Model::DescribeDeviceLocationSolveRequest& request, const DescribeDeviceLocationSolveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceLocationSolveOutcomeCallable DescribeDeviceLocationSolveCallable(const Model::DescribeDeviceLocationSolveRequest& request);

                /**
                 *获取设备位置列表
                 * @param req DescribeDevicePositionListRequest
                 * @return DescribeDevicePositionListOutcome
                 */
                DescribeDevicePositionListOutcome DescribeDevicePositionList(const Model::DescribeDevicePositionListRequest &request);
                void DescribeDevicePositionListAsync(const Model::DescribeDevicePositionListRequest& request, const DescribeDevicePositionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePositionListOutcomeCallable DescribeDevicePositionListCallable(const Model::DescribeDevicePositionListRequest& request);

                /**
                 *获取围栏绑定信息列表
                 * @param req DescribeFenceBindListRequest
                 * @return DescribeFenceBindListOutcome
                 */
                DescribeFenceBindListOutcome DescribeFenceBindList(const Model::DescribeFenceBindListRequest &request);
                void DescribeFenceBindListAsync(const Model::DescribeFenceBindListRequest& request, const DescribeFenceBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFenceBindListOutcomeCallable DescribeFenceBindListCallable(const Model::DescribeFenceBindListRequest& request);

                /**
                 *获取围栏告警事件列表
                 * @param req DescribeFenceEventListRequest
                 * @return DescribeFenceEventListOutcome
                 */
                DescribeFenceEventListOutcome DescribeFenceEventList(const Model::DescribeFenceEventListRequest &request);
                void DescribeFenceEventListAsync(const Model::DescribeFenceEventListRequest& request, const DescribeFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFenceEventListOutcomeCallable DescribeFenceEventListCallable(const Model::DescribeFenceEventListRequest& request);

                /**
                 *查询固件升级任务列表
                 * @param req DescribeFirmwareTaskRequest
                 * @return DescribeFirmwareTaskOutcome
                 */
                DescribeFirmwareTaskOutcome DescribeFirmwareTask(const Model::DescribeFirmwareTaskRequest &request);
                void DescribeFirmwareTaskAsync(const Model::DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskOutcomeCallable DescribeFirmwareTaskCallable(const Model::DescribeFirmwareTaskRequest& request);

                /**
                 *获取网关绑定的子设备列表
                 * @param req DescribeGatewayBindDevicesRequest
                 * @return DescribeGatewayBindDevicesOutcome
                 */
                DescribeGatewayBindDevicesOutcome DescribeGatewayBindDevices(const Model::DescribeGatewayBindDevicesRequest &request);
                void DescribeGatewayBindDevicesAsync(const Model::DescribeGatewayBindDevicesRequest& request, const DescribeGatewayBindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayBindDevicesOutcomeCallable DescribeGatewayBindDevicesCallable(const Model::DescribeGatewayBindDevicesRequest& request);

                /**
                 *查询绑定到家庭的网关设备的子设备列表
                 * @param req DescribeGatewaySubDeviceListRequest
                 * @return DescribeGatewaySubDeviceListOutcome
                 */
                DescribeGatewaySubDeviceListOutcome DescribeGatewaySubDeviceList(const Model::DescribeGatewaySubDeviceListRequest &request);
                void DescribeGatewaySubDeviceListAsync(const Model::DescribeGatewaySubDeviceListRequest& request, const DescribeGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewaySubDeviceListOutcomeCallable DescribeGatewaySubDeviceListCallable(const Model::DescribeGatewaySubDeviceListRequest& request);

                /**
                 *用于获取网关可绑定或解绑的子产品
                 * @param req DescribeGatewaySubProductsRequest
                 * @return DescribeGatewaySubProductsOutcome
                 */
                DescribeGatewaySubProductsOutcome DescribeGatewaySubProducts(const Model::DescribeGatewaySubProductsRequest &request);
                void DescribeGatewaySubProductsAsync(const Model::DescribeGatewaySubProductsRequest& request, const DescribeGatewaySubProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewaySubProductsOutcomeCallable DescribeGatewaySubProductsCallable(const Model::DescribeGatewaySubProductsRequest& request);

                /**
                 *提供查询LoRa自定义频点详情的能力
                 * @param req DescribeLoRaFrequencyRequest
                 * @return DescribeLoRaFrequencyOutcome
                 */
                DescribeLoRaFrequencyOutcome DescribeLoRaFrequency(const Model::DescribeLoRaFrequencyRequest &request);
                void DescribeLoRaFrequencyAsync(const Model::DescribeLoRaFrequencyRequest& request, const DescribeLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoRaFrequencyOutcomeCallable DescribeLoRaFrequencyCallable(const Model::DescribeLoRaFrequencyRequest& request);

                /**
                 *查询产品配置的数据模板信息
                 * @param req DescribeModelDefinitionRequest
                 * @return DescribeModelDefinitionOutcome
                 */
                DescribeModelDefinitionOutcome DescribeModelDefinition(const Model::DescribeModelDefinitionRequest &request);
                void DescribeModelDefinitionAsync(const Model::DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelDefinitionOutcomeCallable DescribeModelDefinitionCallable(const Model::DescribeModelDefinitionRequest& request);

                /**
                 *获取围栏列表
                 * @param req DescribePositionFenceListRequest
                 * @return DescribePositionFenceListOutcome
                 */
                DescribePositionFenceListOutcome DescribePositionFenceList(const Model::DescribePositionFenceListRequest &request);
                void DescribePositionFenceListAsync(const Model::DescribePositionFenceListRequest& request, const DescribePositionFenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePositionFenceListOutcomeCallable DescribePositionFenceListCallable(const Model::DescribePositionFenceListRequest& request);

                /**
                 *查询项目详情
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *获取位置空间中围栏告警事件列表
                 * @param req DescribeSpaceFenceEventListRequest
                 * @return DescribeSpaceFenceEventListOutcome
                 */
                DescribeSpaceFenceEventListOutcome DescribeSpaceFenceEventList(const Model::DescribeSpaceFenceEventListRequest &request);
                void DescribeSpaceFenceEventListAsync(const Model::DescribeSpaceFenceEventListRequest& request, const DescribeSpaceFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceFenceEventListOutcomeCallable DescribeSpaceFenceEventListCallable(const Model::DescribeSpaceFenceEventListRequest& request);

                /**
                 *提供查看产品详细信息的能力，包括产品的ID、数据协议、认证类型等重要参数
                 * @param req DescribeStudioProductRequest
                 * @return DescribeStudioProductOutcome
                 */
                DescribeStudioProductOutcome DescribeStudioProduct(const Model::DescribeStudioProductRequest &request);
                void DescribeStudioProductAsync(const Model::DescribeStudioProductRequest& request, const DescribeStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStudioProductOutcomeCallable DescribeStudioProductCallable(const Model::DescribeStudioProductRequest& request);

                /**
                 *本接口（DescribeTopicPolicy）用于查看Topic详细信息 
                 * @param req DescribeTopicPolicyRequest
                 * @return DescribeTopicPolicyOutcome
                 */
                DescribeTopicPolicyOutcome DescribeTopicPolicy(const Model::DescribeTopicPolicyRequest &request);
                void DescribeTopicPolicyAsync(const Model::DescribeTopicPolicyRequest& request, const DescribeTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicPolicyOutcomeCallable DescribeTopicPolicyCallable(const Model::DescribeTopicPolicyRequest& request);

                /**
                 *获取规则信息
                 * @param req DescribeTopicRuleRequest
                 * @return DescribeTopicRuleOutcome
                 */
                DescribeTopicRuleOutcome DescribeTopicRule(const Model::DescribeTopicRuleRequest &request);
                void DescribeTopicRuleAsync(const Model::DescribeTopicRuleRequest& request, const DescribeTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicRuleOutcomeCallable DescribeTopicRuleCallable(const Model::DescribeTopicRuleRequest& request);

                /**
                 *直接绑定设备和家庭
                 * @param req DirectBindDeviceInFamilyRequest
                 * @return DirectBindDeviceInFamilyOutcome
                 */
                DirectBindDeviceInFamilyOutcome DirectBindDeviceInFamily(const Model::DirectBindDeviceInFamilyRequest &request);
                void DirectBindDeviceInFamilyAsync(const Model::DirectBindDeviceInFamilyRequest& request, const DirectBindDeviceInFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DirectBindDeviceInFamilyOutcomeCallable DirectBindDeviceInFamilyCallable(const Model::DirectBindDeviceInFamilyRequest& request);

                /**
                 *禁用规则
                 * @param req DisableTopicRuleRequest
                 * @return DisableTopicRuleOutcome
                 */
                DisableTopicRuleOutcome DisableTopicRule(const Model::DisableTopicRuleRequest &request);
                void DisableTopicRuleAsync(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const Model::DisableTopicRuleRequest& request);

                /**
                 *启用规则
                 * @param req EnableTopicRuleRequest
                 * @return EnableTopicRuleOutcome
                 */
                EnableTopicRuleOutcome EnableTopicRule(const Model::EnableTopicRuleRequest &request);
                void EnableTopicRuleAsync(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const Model::EnableTopicRuleRequest& request);

                /**
                 *无
                 * @param req GenSingleDeviceSignatureOfPublicRequest
                 * @return GenSingleDeviceSignatureOfPublicOutcome
                 */
                GenSingleDeviceSignatureOfPublicOutcome GenSingleDeviceSignatureOfPublic(const Model::GenSingleDeviceSignatureOfPublicRequest &request);
                void GenSingleDeviceSignatureOfPublicAsync(const Model::GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenSingleDeviceSignatureOfPublicOutcomeCallable GenSingleDeviceSignatureOfPublicCallable(const Model::GenSingleDeviceSignatureOfPublicRequest& request);

                /**
                 *列出量产数据列表信息。
                 * @param req GetBatchProductionsListRequest
                 * @return GetBatchProductionsListOutcome
                 */
                GetBatchProductionsListOutcome GetBatchProductionsList(const Model::GetBatchProductionsListRequest &request);
                void GetBatchProductionsListAsync(const Model::GetBatchProductionsListRequest& request, const GetBatchProductionsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBatchProductionsListOutcomeCallable GetBatchProductionsListCallable(const Model::GetBatchProductionsListRequest& request);

                /**
                 *本接口（GetCOSURL）用于获取固件COS存储的上传请求URL地址
                 * @param req GetCOSURLRequest
                 * @return GetCOSURLOutcome
                 */
                GetCOSURLOutcome GetCOSURL(const Model::GetCOSURLRequest &request);
                void GetCOSURLAsync(const Model::GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCOSURLOutcomeCallable GetCOSURLCallable(const Model::GetCOSURLRequest& request);

                /**
                 *用于查询某个产品下的设备列表
                 * @param req GetDeviceListRequest
                 * @return GetDeviceListOutcome
                 */
                GetDeviceListOutcome GetDeviceList(const Model::GetDeviceListRequest &request);
                void GetDeviceListAsync(const Model::GetDeviceListRequest& request, const GetDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceListOutcomeCallable GetDeviceListCallable(const Model::GetDeviceListRequest& request);

                /**
                 *获取设备历史位置
                 * @param req GetDeviceLocationHistoryRequest
                 * @return GetDeviceLocationHistoryOutcome
                 */
                GetDeviceLocationHistoryOutcome GetDeviceLocationHistory(const Model::GetDeviceLocationHistoryRequest &request);
                void GetDeviceLocationHistoryAsync(const Model::GetDeviceLocationHistoryRequest& request, const GetDeviceLocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceLocationHistoryOutcomeCallable GetDeviceLocationHistoryCallable(const Model::GetDeviceLocationHistoryRequest& request);

                /**
                 *用于获取设备绑定的用户列表
                 * @param req GetFamilyDeviceUserListRequest
                 * @return GetFamilyDeviceUserListOutcome
                 */
                GetFamilyDeviceUserListOutcome GetFamilyDeviceUserList(const Model::GetFamilyDeviceUserListRequest &request);
                void GetFamilyDeviceUserListAsync(const Model::GetFamilyDeviceUserListRequest& request, const GetFamilyDeviceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFamilyDeviceUserListOutcomeCallable GetFamilyDeviceUserListCallable(const Model::GetFamilyDeviceUserListRequest& request);

                /**
                 *获取指定网关设备的子设备列表
                 * @param req GetGatewaySubDeviceListRequest
                 * @return GetGatewaySubDeviceListOutcome
                 */
                GetGatewaySubDeviceListOutcome GetGatewaySubDeviceList(const Model::GetGatewaySubDeviceListRequest &request);
                void GetGatewaySubDeviceListAsync(const Model::GetGatewaySubDeviceListRequest& request, const GetGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGatewaySubDeviceListOutcomeCallable GetGatewaySubDeviceListCallable(const Model::GetGatewaySubDeviceListRequest& request);

                /**
                 *获取 LoRa 网关列表接口
                 * @param req GetLoRaGatewayListRequest
                 * @return GetLoRaGatewayListOutcome
                 */
                GetLoRaGatewayListOutcome GetLoRaGatewayList(const Model::GetLoRaGatewayListRequest &request);
                void GetLoRaGatewayListAsync(const Model::GetLoRaGatewayListRequest& request, const GetLoRaGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLoRaGatewayListOutcomeCallable GetLoRaGatewayListCallable(const Model::GetLoRaGatewayListRequest& request);

                /**
                 *获取位置空间列表
                 * @param req GetPositionSpaceListRequest
                 * @return GetPositionSpaceListOutcome
                 */
                GetPositionSpaceListOutcome GetPositionSpaceList(const Model::GetPositionSpaceListRequest &request);
                void GetPositionSpaceListAsync(const Model::GetPositionSpaceListRequest& request, const GetPositionSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPositionSpaceListOutcomeCallable GetPositionSpaceListCallable(const Model::GetPositionSpaceListRequest& request);

                /**
                 *提供查询用户所创建的项目列表查询功能。
                 * @param req GetProjectListRequest
                 * @return GetProjectListOutcome
                 */
                GetProjectListOutcome GetProjectList(const Model::GetProjectListRequest &request);
                void GetProjectListAsync(const Model::GetProjectListRequest& request, const GetProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProjectListOutcomeCallable GetProjectListCallable(const Model::GetProjectListRequest& request);

                /**
                 *提供查询某个项目下所有产品信息的能力。
                 * @param req GetStudioProductListRequest
                 * @return GetStudioProductListOutcome
                 */
                GetStudioProductListOutcome GetStudioProductList(const Model::GetStudioProductListRequest &request);
                void GetStudioProductListAsync(const Model::GetStudioProductListRequest& request, const GetStudioProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStudioProductListOutcomeCallable GetStudioProductListCallable(const Model::GetStudioProductListRequest& request);

                /**
                 *获取规则列表
                 * @param req GetTopicRuleListRequest
                 * @return GetTopicRuleListOutcome
                 */
                GetTopicRuleListOutcome GetTopicRuleList(const Model::GetTopicRuleListRequest &request);
                void GetTopicRuleListAsync(const Model::GetTopicRuleListRequest& request, const GetTopicRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTopicRuleListOutcomeCallable GetTopicRuleListCallable(const Model::GetTopicRuleListRequest& request);

                /**
                 *获取设备的历史事件
                 * @param req ListEventHistoryRequest
                 * @return ListEventHistoryOutcome
                 */
                ListEventHistoryOutcome ListEventHistory(const Model::ListEventHistoryRequest &request);
                void ListEventHistoryAsync(const Model::ListEventHistoryRequest& request, const ListEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEventHistoryOutcomeCallable ListEventHistoryCallable(const Model::ListEventHistoryRequest& request);

                /**
                 *本接口（ListFirmwares）用于获取固件列表
                 * @param req ListFirmwaresRequest
                 * @return ListFirmwaresOutcome
                 */
                ListFirmwaresOutcome ListFirmwares(const Model::ListFirmwaresRequest &request);
                void ListFirmwaresAsync(const Model::ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFirmwaresOutcomeCallable ListFirmwaresCallable(const Model::ListFirmwaresRequest& request);

                /**
                 *本接口（ListTopicPolicy）用于获取Topic列表
                 * @param req ListTopicPolicyRequest
                 * @return ListTopicPolicyOutcome
                 */
                ListTopicPolicyOutcome ListTopicPolicy(const Model::ListTopicPolicyRequest &request);
                void ListTopicPolicyAsync(const Model::ListTopicPolicyRequest& request, const ListTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopicPolicyOutcomeCallable ListTopicPolicyCallable(const Model::ListTopicPolicyRequest& request);

                /**
                 *更新围栏绑定信息
                 * @param req ModifyFenceBindRequest
                 * @return ModifyFenceBindOutcome
                 */
                ModifyFenceBindOutcome ModifyFenceBind(const Model::ModifyFenceBindRequest &request);
                void ModifyFenceBindAsync(const Model::ModifyFenceBindRequest& request, const ModifyFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFenceBindOutcomeCallable ModifyFenceBindCallable(const Model::ModifyFenceBindRequest& request);

                /**
                 *修改LoRa自定义频点
                 * @param req ModifyLoRaFrequencyRequest
                 * @return ModifyLoRaFrequencyOutcome
                 */
                ModifyLoRaFrequencyOutcome ModifyLoRaFrequency(const Model::ModifyLoRaFrequencyRequest &request);
                void ModifyLoRaFrequencyAsync(const Model::ModifyLoRaFrequencyRequest& request, const ModifyLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoRaFrequencyOutcomeCallable ModifyLoRaFrequencyCallable(const Model::ModifyLoRaFrequencyRequest& request);

                /**
                 *修改 LoRa 网关信息
                 * @param req ModifyLoRaGatewayRequest
                 * @return ModifyLoRaGatewayOutcome
                 */
                ModifyLoRaGatewayOutcome ModifyLoRaGateway(const Model::ModifyLoRaGatewayRequest &request);
                void ModifyLoRaGatewayAsync(const Model::ModifyLoRaGatewayRequest& request, const ModifyLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoRaGatewayOutcomeCallable ModifyLoRaGatewayCallable(const Model::ModifyLoRaGatewayRequest& request);

                /**
                 *提供修改产品的数据模板的能力
                 * @param req ModifyModelDefinitionRequest
                 * @return ModifyModelDefinitionOutcome
                 */
                ModifyModelDefinitionOutcome ModifyModelDefinition(const Model::ModifyModelDefinitionRequest &request);
                void ModifyModelDefinitionAsync(const Model::ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelDefinitionOutcomeCallable ModifyModelDefinitionCallable(const Model::ModifyModelDefinitionRequest& request);

                /**
                 *更新围栏
                 * @param req ModifyPositionFenceRequest
                 * @return ModifyPositionFenceOutcome
                 */
                ModifyPositionFenceOutcome ModifyPositionFence(const Model::ModifyPositionFenceRequest &request);
                void ModifyPositionFenceAsync(const Model::ModifyPositionFenceRequest& request, const ModifyPositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPositionFenceOutcomeCallable ModifyPositionFenceCallable(const Model::ModifyPositionFenceRequest& request);

                /**
                 *更新位置空间
                 * @param req ModifyPositionSpaceRequest
                 * @return ModifyPositionSpaceOutcome
                 */
                ModifyPositionSpaceOutcome ModifyPositionSpace(const Model::ModifyPositionSpaceRequest &request);
                void ModifyPositionSpaceAsync(const Model::ModifyPositionSpaceRequest& request, const ModifyPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPositionSpaceOutcomeCallable ModifyPositionSpaceCallable(const Model::ModifyPositionSpaceRequest& request);

                /**
                 *修改项目
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *更新位置空间产品属性
                 * @param req ModifySpacePropertyRequest
                 * @return ModifySpacePropertyOutcome
                 */
                ModifySpacePropertyOutcome ModifySpaceProperty(const Model::ModifySpacePropertyRequest &request);
                void ModifySpacePropertyAsync(const Model::ModifySpacePropertyRequest& request, const ModifySpacePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpacePropertyOutcomeCallable ModifySpacePropertyCallable(const Model::ModifySpacePropertyRequest& request);

                /**
                 *提供修改产品的名称和描述等信息的能力，对于已发布产品不允许进行修改。
                 * @param req ModifyStudioProductRequest
                 * @return ModifyStudioProductOutcome
                 */
                ModifyStudioProductOutcome ModifyStudioProduct(const Model::ModifyStudioProductRequest &request);
                void ModifyStudioProductAsync(const Model::ModifyStudioProductRequest& request, const ModifyStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStudioProductOutcomeCallable ModifyStudioProductCallable(const Model::ModifyStudioProductRequest& request);

                /**
                 *本接口（UpdateTopicPolicy）用于更新Topic信息 
                 * @param req ModifyTopicPolicyRequest
                 * @return ModifyTopicPolicyOutcome
                 */
                ModifyTopicPolicyOutcome ModifyTopicPolicy(const Model::ModifyTopicPolicyRequest &request);
                void ModifyTopicPolicyAsync(const Model::ModifyTopicPolicyRequest& request, const ModifyTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicPolicyOutcomeCallable ModifyTopicPolicyCallable(const Model::ModifyTopicPolicyRequest& request);

                /**
                 *修改规则
                 * @param req ModifyTopicRuleRequest
                 * @return ModifyTopicRuleOutcome
                 */
                ModifyTopicRuleOutcome ModifyTopicRule(const Model::ModifyTopicRuleRequest &request);
                void ModifyTopicRuleAsync(const Model::ModifyTopicRuleRequest& request, const ModifyTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicRuleOutcomeCallable ModifyTopicRuleCallable(const Model::ModifyTopicRuleRequest& request);

                /**
                 *发布广播消息
                 * @param req PublishBroadcastMessageRequest
                 * @return PublishBroadcastMessageOutcome
                 */
                PublishBroadcastMessageOutcome PublishBroadcastMessage(const Model::PublishBroadcastMessageRequest &request);
                void PublishBroadcastMessageAsync(const Model::PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishBroadcastMessageOutcomeCallable PublishBroadcastMessageCallable(const Model::PublishBroadcastMessageRequest& request);

                /**
                 *本接口（PublishMessage）用于使用自定义透传协议进行设备远控
                 * @param req PublishMessageRequest
                 * @return PublishMessageOutcome
                 */
                PublishMessageOutcome PublishMessage(const Model::PublishMessageRequest &request);
                void PublishMessageAsync(const Model::PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishMessageOutcomeCallable PublishMessageCallable(const Model::PublishMessageRequest& request);

                /**
                 *下发RRPC消息
                 * @param req PublishRRPCMessageRequest
                 * @return PublishRRPCMessageOutcome
                 */
                PublishRRPCMessageOutcome PublishRRPCMessage(const Model::PublishRRPCMessageRequest &request);
                void PublishRRPCMessageAsync(const Model::PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishRRPCMessageOutcomeCallable PublishRRPCMessageCallable(const Model::PublishRRPCMessageRequest& request);

                /**
                 *产品开发完成并测试通过后，通过发布产品将产品设置为发布状态
                 * @param req ReleaseStudioProductRequest
                 * @return ReleaseStudioProductOutcome
                 */
                ReleaseStudioProductOutcome ReleaseStudioProduct(const Model::ReleaseStudioProductRequest &request);
                void ReleaseStudioProductAsync(const Model::ReleaseStudioProductRequest& request, const ReleaseStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseStudioProductOutcomeCallable ReleaseStudioProductCallable(const Model::ReleaseStudioProductRequest& request);

                /**
                 *搜索位置空间
                 * @param req SearchPositionSpaceRequest
                 * @return SearchPositionSpaceOutcome
                 */
                SearchPositionSpaceOutcome SearchPositionSpace(const Model::SearchPositionSpaceRequest &request);
                void SearchPositionSpaceAsync(const Model::SearchPositionSpaceRequest& request, const SearchPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchPositionSpaceOutcomeCallable SearchPositionSpaceCallable(const Model::SearchPositionSpaceRequest& request);

                /**
                 *提供根据产品名称查找产品的能力
                 * @param req SearchStudioProductRequest
                 * @return SearchStudioProductOutcome
                 */
                SearchStudioProductOutcome SearchStudioProduct(const Model::SearchStudioProductRequest &request);
                void SearchStudioProductAsync(const Model::SearchStudioProductRequest& request, const SearchStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchStudioProductOutcomeCallable SearchStudioProductCallable(const Model::SearchStudioProductRequest& request);

                /**
                 *搜索规则
                 * @param req SearchTopicRuleRequest
                 * @return SearchTopicRuleOutcome
                 */
                SearchTopicRuleOutcome SearchTopicRule(const Model::SearchTopicRuleRequest &request);
                void SearchTopicRuleAsync(const Model::SearchTopicRuleRequest& request, const SearchTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchTopicRuleOutcomeCallable SearchTopicRuleCallable(const Model::SearchTopicRuleRequest& request);

                /**
                 *批量解绑子设备
                 * @param req UnbindDevicesRequest
                 * @return UnbindDevicesOutcome
                 */
                UnbindDevicesOutcome UnbindDevices(const Model::UnbindDevicesRequest &request);
                void UnbindDevicesAsync(const Model::UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDevicesOutcomeCallable UnbindDevicesCallable(const Model::UnbindDevicesRequest& request);

                /**
                 *批量解绑子产品
                 * @param req UnbindProductsRequest
                 * @return UnbindProductsOutcome
                 */
                UnbindProductsOutcome UnbindProducts(const Model::UnbindProductsRequest &request);
                void UnbindProductsAsync(const Model::UnbindProductsRequest& request, const UnbindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindProductsOutcomeCallable UnbindProductsCallable(const Model::UnbindProductsRequest& request);

                /**
                 *批量禁用启用设备
                 * @param req UpdateDevicesEnableStateRequest
                 * @return UpdateDevicesEnableStateOutcome
                 */
                UpdateDevicesEnableStateOutcome UpdateDevicesEnableState(const Model::UpdateDevicesEnableStateRequest &request);
                void UpdateDevicesEnableStateAsync(const Model::UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicesEnableStateOutcomeCallable UpdateDevicesEnableStateCallable(const Model::UpdateDevicesEnableStateRequest& request);

                /**
                 *本接口（UpdateFirmware）用于对指定设备发起固件升级请求 
                 * @param req UpdateFirmwareRequest
                 * @return UpdateFirmwareOutcome
                 */
                UpdateFirmwareOutcome UpdateFirmware(const Model::UpdateFirmwareRequest &request);
                void UpdateFirmwareAsync(const Model::UpdateFirmwareRequest& request, const UpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFirmwareOutcomeCallable UpdateFirmwareCallable(const Model::UpdateFirmwareRequest& request);

                /**
                 *本接口（UploadFirmware）用于创建设备固件版本信息，在平台用于固件版本升级、固件资源下发等。
                 * @param req UploadFirmwareRequest
                 * @return UploadFirmwareOutcome
                 */
                UploadFirmwareOutcome UploadFirmware(const Model::UploadFirmwareRequest &request);
                void UploadFirmwareAsync(const Model::UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFirmwareOutcomeCallable UploadFirmwareCallable(const Model::UploadFirmwareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_IOTEXPLORERCLIENT_H_
