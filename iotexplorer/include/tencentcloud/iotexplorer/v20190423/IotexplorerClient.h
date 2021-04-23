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
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DisableTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DisableTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/EnableTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/EnableTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetCOSURLRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetCOSURLResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetLoRaGatewayListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetLoRaGatewayListResponse.h>
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
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchTopicRuleResponse.h>
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

                typedef Outcome<Error, Model::CallDeviceActionAsyncResponse> CallDeviceActionAsyncOutcome;
                typedef std::future<CallDeviceActionAsyncOutcome> CallDeviceActionAsyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CallDeviceActionAsyncRequest&, CallDeviceActionAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionAsyncAsyncHandler;
                typedef Outcome<Error, Model::CallDeviceActionSyncResponse> CallDeviceActionSyncOutcome;
                typedef std::future<CallDeviceActionSyncOutcome> CallDeviceActionSyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CallDeviceActionSyncRequest&, CallDeviceActionSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionSyncAsyncHandler;
                typedef Outcome<Error, Model::ControlDeviceDataResponse> ControlDeviceDataOutcome;
                typedef std::future<ControlDeviceDataOutcome> ControlDeviceDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ControlDeviceDataRequest&, ControlDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDeviceDataAsyncHandler;
                typedef Outcome<Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Error, Model::CreateLoRaFrequencyResponse> CreateLoRaFrequencyOutcome;
                typedef std::future<CreateLoRaFrequencyOutcome> CreateLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateLoRaFrequencyRequest&, CreateLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaFrequencyAsyncHandler;
                typedef Outcome<Error, Model::CreateLoRaGatewayResponse> CreateLoRaGatewayOutcome;
                typedef std::future<CreateLoRaGatewayOutcome> CreateLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateLoRaGatewayRequest&, CreateLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Error, Model::CreateStudioProductResponse> CreateStudioProductOutcome;
                typedef std::future<CreateStudioProductOutcome> CreateStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateStudioProductRequest&, CreateStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStudioProductAsyncHandler;
                typedef Outcome<Error, Model::CreateTopicRuleResponse> CreateTopicRuleOutcome;
                typedef std::future<CreateTopicRuleOutcome> CreateTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTopicRuleRequest&, CreateTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoRaFrequencyResponse> DeleteLoRaFrequencyOutcome;
                typedef std::future<DeleteLoRaFrequencyOutcome> DeleteLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteLoRaFrequencyRequest&, DeleteLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoRaFrequencyAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoRaGatewayResponse> DeleteLoRaGatewayOutcome;
                typedef std::future<DeleteLoRaGatewayOutcome> DeleteLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteLoRaGatewayRequest&, DeleteLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoRaGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Error, Model::DeleteStudioProductResponse> DeleteStudioProductOutcome;
                typedef std::future<DeleteStudioProductOutcome> DeleteStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteStudioProductRequest&, DeleteStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStudioProductAsyncHandler;
                typedef Outcome<Error, Model::DeleteTopicRuleResponse> DeleteTopicRuleOutcome;
                typedef std::future<DeleteTopicRuleOutcome> DeleteTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTopicRuleRequest&, DeleteTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceDataResponse> DescribeDeviceDataOutcome;
                typedef std::future<DescribeDeviceDataOutcome> DescribeDeviceDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceDataRequest&, DescribeDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceDataHistoryResponse> DescribeDeviceDataHistoryOutcome;
                typedef std::future<DescribeDeviceDataHistoryOutcome> DescribeDeviceDataHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceDataHistoryRequest&, DescribeDeviceDataHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareTaskResponse> DescribeFirmwareTaskOutcome;
                typedef std::future<DescribeFirmwareTaskOutcome> DescribeFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareTaskRequest&, DescribeFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoRaFrequencyResponse> DescribeLoRaFrequencyOutcome;
                typedef std::future<DescribeLoRaFrequencyOutcome> DescribeLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeLoRaFrequencyRequest&, DescribeLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoRaFrequencyAsyncHandler;
                typedef Outcome<Error, Model::DescribeModelDefinitionResponse> DescribeModelDefinitionOutcome;
                typedef std::future<DescribeModelDefinitionOutcome> DescribeModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeModelDefinitionRequest&, DescribeModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Error, Model::DescribeStudioProductResponse> DescribeStudioProductOutcome;
                typedef std::future<DescribeStudioProductOutcome> DescribeStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeStudioProductRequest&, DescribeStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStudioProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopicRuleResponse> DescribeTopicRuleOutcome;
                typedef std::future<DescribeTopicRuleOutcome> DescribeTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTopicRuleRequest&, DescribeTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::DisableTopicRuleResponse> DisableTopicRuleOutcome;
                typedef std::future<DisableTopicRuleOutcome> DisableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DisableTopicRuleRequest&, DisableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::EnableTopicRuleResponse> EnableTopicRuleOutcome;
                typedef std::future<EnableTopicRuleOutcome> EnableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::EnableTopicRuleRequest&, EnableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::GetCOSURLResponse> GetCOSURLOutcome;
                typedef std::future<GetCOSURLOutcome> GetCOSURLOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetCOSURLRequest&, GetCOSURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCOSURLAsyncHandler;
                typedef Outcome<Error, Model::GetDeviceListResponse> GetDeviceListOutcome;
                typedef std::future<GetDeviceListOutcome> GetDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetDeviceListRequest&, GetDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceListAsyncHandler;
                typedef Outcome<Error, Model::GetLoRaGatewayListResponse> GetLoRaGatewayListOutcome;
                typedef std::future<GetLoRaGatewayListOutcome> GetLoRaGatewayListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetLoRaGatewayListRequest&, GetLoRaGatewayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLoRaGatewayListAsyncHandler;
                typedef Outcome<Error, Model::GetProjectListResponse> GetProjectListOutcome;
                typedef std::future<GetProjectListOutcome> GetProjectListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetProjectListRequest&, GetProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectListAsyncHandler;
                typedef Outcome<Error, Model::GetStudioProductListResponse> GetStudioProductListOutcome;
                typedef std::future<GetStudioProductListOutcome> GetStudioProductListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetStudioProductListRequest&, GetStudioProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStudioProductListAsyncHandler;
                typedef Outcome<Error, Model::GetTopicRuleListResponse> GetTopicRuleListOutcome;
                typedef std::future<GetTopicRuleListOutcome> GetTopicRuleListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTopicRuleListRequest&, GetTopicRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicRuleListAsyncHandler;
                typedef Outcome<Error, Model::ListEventHistoryResponse> ListEventHistoryOutcome;
                typedef std::future<ListEventHistoryOutcome> ListEventHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListEventHistoryRequest&, ListEventHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEventHistoryAsyncHandler;
                typedef Outcome<Error, Model::ListFirmwaresResponse> ListFirmwaresOutcome;
                typedef std::future<ListFirmwaresOutcome> ListFirmwaresOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListFirmwaresRequest&, ListFirmwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFirmwaresAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoRaFrequencyResponse> ModifyLoRaFrequencyOutcome;
                typedef std::future<ModifyLoRaFrequencyOutcome> ModifyLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyLoRaFrequencyRequest&, ModifyLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoRaFrequencyAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoRaGatewayResponse> ModifyLoRaGatewayOutcome;
                typedef std::future<ModifyLoRaGatewayOutcome> ModifyLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyLoRaGatewayRequest&, ModifyLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoRaGatewayAsyncHandler;
                typedef Outcome<Error, Model::ModifyModelDefinitionResponse> ModifyModelDefinitionOutcome;
                typedef std::future<ModifyModelDefinitionOutcome> ModifyModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyModelDefinitionRequest&, ModifyModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyStudioProductResponse> ModifyStudioProductOutcome;
                typedef std::future<ModifyStudioProductOutcome> ModifyStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyStudioProductRequest&, ModifyStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStudioProductAsyncHandler;
                typedef Outcome<Error, Model::ModifyTopicRuleResponse> ModifyTopicRuleOutcome;
                typedef std::future<ModifyTopicRuleOutcome> ModifyTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTopicRuleRequest&, ModifyTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::PublishMessageResponse> PublishMessageOutcome;
                typedef std::future<PublishMessageOutcome> PublishMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishMessageRequest&, PublishMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishMessageAsyncHandler;
                typedef Outcome<Error, Model::ReleaseStudioProductResponse> ReleaseStudioProductOutcome;
                typedef std::future<ReleaseStudioProductOutcome> ReleaseStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ReleaseStudioProductRequest&, ReleaseStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseStudioProductAsyncHandler;
                typedef Outcome<Error, Model::SearchStudioProductResponse> SearchStudioProductOutcome;
                typedef std::future<SearchStudioProductOutcome> SearchStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchStudioProductRequest&, SearchStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchStudioProductAsyncHandler;
                typedef Outcome<Error, Model::SearchTopicRuleResponse> SearchTopicRuleOutcome;
                typedef std::future<SearchTopicRuleOutcome> SearchTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchTopicRuleRequest&, SearchTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchTopicRuleAsyncHandler;
                typedef Outcome<Error, Model::UpdateFirmwareResponse> UpdateFirmwareOutcome;
                typedef std::future<UpdateFirmwareOutcome> UpdateFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateFirmwareRequest&, UpdateFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFirmwareAsyncHandler;
                typedef Outcome<Error, Model::UploadFirmwareResponse> UploadFirmwareOutcome;
                typedef std::future<UploadFirmwareOutcome> UploadFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UploadFirmwareRequest&, UploadFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFirmwareAsyncHandler;



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
                 *创建设备
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

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
                 *删除规则
                 * @param req DeleteTopicRuleRequest
                 * @return DeleteTopicRuleOutcome
                 */
                DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest &request);
                void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request);

                /**
                 *用于查看某个设备的详细信息
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

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
                 *查询固件升级任务列表
                 * @param req DescribeFirmwareTaskRequest
                 * @return DescribeFirmwareTaskOutcome
                 */
                DescribeFirmwareTaskOutcome DescribeFirmwareTask(const Model::DescribeFirmwareTaskRequest &request);
                void DescribeFirmwareTaskAsync(const Model::DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskOutcomeCallable DescribeFirmwareTaskCallable(const Model::DescribeFirmwareTaskRequest& request);

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
                 *查询项目详情
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *提供查看产品详细信息的能力，包括产品的ID、数据协议、认证类型等重要参数
                 * @param req DescribeStudioProductRequest
                 * @return DescribeStudioProductOutcome
                 */
                DescribeStudioProductOutcome DescribeStudioProduct(const Model::DescribeStudioProductRequest &request);
                void DescribeStudioProductAsync(const Model::DescribeStudioProductRequest& request, const DescribeStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStudioProductOutcomeCallable DescribeStudioProductCallable(const Model::DescribeStudioProductRequest& request);

                /**
                 *获取规则信息
                 * @param req DescribeTopicRuleRequest
                 * @return DescribeTopicRuleOutcome
                 */
                DescribeTopicRuleOutcome DescribeTopicRule(const Model::DescribeTopicRuleRequest &request);
                void DescribeTopicRuleAsync(const Model::DescribeTopicRuleRequest& request, const DescribeTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicRuleOutcomeCallable DescribeTopicRuleCallable(const Model::DescribeTopicRuleRequest& request);

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
                 *本接口（GetCOSURL）用于获取固件存储在COS的URL 
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
                 *获取 LoRa 网关列表接口
                 * @param req GetLoRaGatewayListRequest
                 * @return GetLoRaGatewayListOutcome
                 */
                GetLoRaGatewayListOutcome GetLoRaGatewayList(const Model::GetLoRaGatewayListRequest &request);
                void GetLoRaGatewayListAsync(const Model::GetLoRaGatewayListRequest& request, const GetLoRaGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLoRaGatewayListOutcomeCallable GetLoRaGatewayListCallable(const Model::GetLoRaGatewayListRequest& request);

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
                 *修改项目
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *提供修改产品的名称和描述等信息的能力，对于已发布产品不允许进行修改。
                 * @param req ModifyStudioProductRequest
                 * @return ModifyStudioProductOutcome
                 */
                ModifyStudioProductOutcome ModifyStudioProduct(const Model::ModifyStudioProductRequest &request);
                void ModifyStudioProductAsync(const Model::ModifyStudioProductRequest& request, const ModifyStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStudioProductOutcomeCallable ModifyStudioProductCallable(const Model::ModifyStudioProductRequest& request);

                /**
                 *修改规则
                 * @param req ModifyTopicRuleRequest
                 * @return ModifyTopicRuleOutcome
                 */
                ModifyTopicRuleOutcome ModifyTopicRule(const Model::ModifyTopicRuleRequest &request);
                void ModifyTopicRuleAsync(const Model::ModifyTopicRuleRequest& request, const ModifyTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicRuleOutcomeCallable ModifyTopicRuleCallable(const Model::ModifyTopicRuleRequest& request);

                /**
                 *本接口（PublishMessage）用于使用自定义透传协议进行设备远控
                 * @param req PublishMessageRequest
                 * @return PublishMessageOutcome
                 */
                PublishMessageOutcome PublishMessage(const Model::PublishMessageRequest &request);
                void PublishMessageAsync(const Model::PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishMessageOutcomeCallable PublishMessageCallable(const Model::PublishMessageRequest& request);

                /**
                 *产品开发完成并测试通过后，通过发布产品将产品设置为发布状态
                 * @param req ReleaseStudioProductRequest
                 * @return ReleaseStudioProductOutcome
                 */
                ReleaseStudioProductOutcome ReleaseStudioProduct(const Model::ReleaseStudioProductRequest &request);
                void ReleaseStudioProductAsync(const Model::ReleaseStudioProductRequest& request, const ReleaseStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseStudioProductOutcomeCallable ReleaseStudioProductCallable(const Model::ReleaseStudioProductRequest& request);

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
                 *本接口（UpdateFirmware）用于对指定设备发起固件升级请求 
                 * @param req UpdateFirmwareRequest
                 * @return UpdateFirmwareOutcome
                 */
                UpdateFirmwareOutcome UpdateFirmware(const Model::UpdateFirmwareRequest &request);
                void UpdateFirmwareAsync(const Model::UpdateFirmwareRequest& request, const UpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFirmwareOutcomeCallable UpdateFirmwareCallable(const Model::UpdateFirmwareRequest& request);

                /**
                 *本接口（UploadFirmware）用于上传设备固件至平台
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
