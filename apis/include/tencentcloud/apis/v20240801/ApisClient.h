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

#ifndef TENCENTCLOUD_APIS_V20240801_APISCLIENT_H_
#define TENCENTCLOUD_APIS_V20240801_APISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentAppRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentAppResponse.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentAppMcpServersRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentAppMcpServersResponse.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentAppModelServicesRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentAppModelServicesResponse.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentCredentialRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateAgentCredentialResponse.h>
#include <tencentcloud/apis/v20240801/model/CreateMcpServerRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateMcpServerResponse.h>
#include <tencentcloud/apis/v20240801/model/CreateModelRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateModelResponse.h>
#include <tencentcloud/apis/v20240801/model/CreateModelServiceRequest.h>
#include <tencentcloud/apis/v20240801/model/CreateModelServiceResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentAppRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentAppResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentAppMcpServersRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentAppMcpServersResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentAppModelServicesRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentAppModelServicesResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentCredentialRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteAgentCredentialResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteMcpServerRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteMcpServerResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteModelRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteModelResponse.h>
#include <tencentcloud/apis/v20240801/model/DeleteModelServiceRequest.h>
#include <tencentcloud/apis/v20240801/model/DeleteModelServiceResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppMcpServersRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppMcpServersResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppModelServicesRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppModelServicesResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppsRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppsResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialsRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialsResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeMcpServerRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeMcpServerResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeMcpServersRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeMcpServersResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelServiceRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelServiceResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelServicesRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelServicesResponse.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelsRequest.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelsResponse.h>
#include <tencentcloud/apis/v20240801/model/ModifyAgentAppRequest.h>
#include <tencentcloud/apis/v20240801/model/ModifyAgentAppResponse.h>
#include <tencentcloud/apis/v20240801/model/ModifyAgentAppModelServicesRequest.h>
#include <tencentcloud/apis/v20240801/model/ModifyAgentAppModelServicesResponse.h>
#include <tencentcloud/apis/v20240801/model/ModifyAgentCredentialRequest.h>
#include <tencentcloud/apis/v20240801/model/ModifyAgentCredentialResponse.h>
#include <tencentcloud/apis/v20240801/model/ModifyMcpServerRequest.h>
#include <tencentcloud/apis/v20240801/model/ModifyMcpServerResponse.h>
#include <tencentcloud/apis/v20240801/model/ModifyModelRequest.h>
#include <tencentcloud/apis/v20240801/model/ModifyModelResponse.h>
#include <tencentcloud/apis/v20240801/model/ModifyModelServiceRequest.h>
#include <tencentcloud/apis/v20240801/model/ModifyModelServiceResponse.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            class ApisClient : public AbstractClient
            {
            public:
                ApisClient(const Credential &credential, const std::string &region);
                ApisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAgentAppResponse> CreateAgentAppOutcome;
                typedef std::future<CreateAgentAppOutcome> CreateAgentAppOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateAgentAppRequest&, CreateAgentAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentAppMcpServersResponse> CreateAgentAppMcpServersOutcome;
                typedef std::future<CreateAgentAppMcpServersOutcome> CreateAgentAppMcpServersOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateAgentAppMcpServersRequest&, CreateAgentAppMcpServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAppMcpServersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentAppModelServicesResponse> CreateAgentAppModelServicesOutcome;
                typedef std::future<CreateAgentAppModelServicesOutcome> CreateAgentAppModelServicesOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateAgentAppModelServicesRequest&, CreateAgentAppModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAppModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentCredentialResponse> CreateAgentCredentialOutcome;
                typedef std::future<CreateAgentCredentialOutcome> CreateAgentCredentialOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateAgentCredentialRequest&, CreateAgentCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMcpServerResponse> CreateMcpServerOutcome;
                typedef std::future<CreateMcpServerOutcome> CreateMcpServerOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateMcpServerRequest&, CreateMcpServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMcpServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelResponse> CreateModelOutcome;
                typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateModelRequest&, CreateModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelServiceResponse> CreateModelServiceOutcome;
                typedef std::future<CreateModelServiceOutcome> CreateModelServiceOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::CreateModelServiceRequest&, CreateModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentAppResponse> DeleteAgentAppOutcome;
                typedef std::future<DeleteAgentAppOutcome> DeleteAgentAppOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteAgentAppRequest&, DeleteAgentAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentAppMcpServersResponse> DeleteAgentAppMcpServersOutcome;
                typedef std::future<DeleteAgentAppMcpServersOutcome> DeleteAgentAppMcpServersOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteAgentAppMcpServersRequest&, DeleteAgentAppMcpServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAppMcpServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentAppModelServicesResponse> DeleteAgentAppModelServicesOutcome;
                typedef std::future<DeleteAgentAppModelServicesOutcome> DeleteAgentAppModelServicesOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteAgentAppModelServicesRequest&, DeleteAgentAppModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAppModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentCredentialResponse> DeleteAgentCredentialOutcome;
                typedef std::future<DeleteAgentCredentialOutcome> DeleteAgentCredentialOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteAgentCredentialRequest&, DeleteAgentCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMcpServerResponse> DeleteMcpServerOutcome;
                typedef std::future<DeleteMcpServerOutcome> DeleteMcpServerOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteMcpServerRequest&, DeleteMcpServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMcpServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelResponse> DeleteModelOutcome;
                typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteModelRequest&, DeleteModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelServiceResponse> DeleteModelServiceOutcome;
                typedef std::future<DeleteModelServiceOutcome> DeleteModelServiceOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DeleteModelServiceRequest&, DeleteModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentAppResponse> DescribeAgentAppOutcome;
                typedef std::future<DescribeAgentAppOutcome> DescribeAgentAppOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeAgentAppRequest&, DescribeAgentAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentAppMcpServersResponse> DescribeAgentAppMcpServersOutcome;
                typedef std::future<DescribeAgentAppMcpServersOutcome> DescribeAgentAppMcpServersOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeAgentAppMcpServersRequest&, DescribeAgentAppMcpServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentAppMcpServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentAppModelServicesResponse> DescribeAgentAppModelServicesOutcome;
                typedef std::future<DescribeAgentAppModelServicesOutcome> DescribeAgentAppModelServicesOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeAgentAppModelServicesRequest&, DescribeAgentAppModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentAppModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentAppsResponse> DescribeAgentAppsOutcome;
                typedef std::future<DescribeAgentAppsOutcome> DescribeAgentAppsOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeAgentAppsRequest&, DescribeAgentAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentCredentialResponse> DescribeAgentCredentialOutcome;
                typedef std::future<DescribeAgentCredentialOutcome> DescribeAgentCredentialOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeAgentCredentialRequest&, DescribeAgentCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentCredentialsResponse> DescribeAgentCredentialsOutcome;
                typedef std::future<DescribeAgentCredentialsOutcome> DescribeAgentCredentialsOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeAgentCredentialsRequest&, DescribeAgentCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMcpServerResponse> DescribeMcpServerOutcome;
                typedef std::future<DescribeMcpServerOutcome> DescribeMcpServerOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeMcpServerRequest&, DescribeMcpServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMcpServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMcpServersResponse> DescribeMcpServersOutcome;
                typedef std::future<DescribeMcpServersOutcome> DescribeMcpServersOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeMcpServersRequest&, DescribeMcpServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMcpServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelResponse> DescribeModelOutcome;
                typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeModelRequest&, DescribeModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceResponse> DescribeModelServiceOutcome;
                typedef std::future<DescribeModelServiceOutcome> DescribeModelServiceOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeModelServiceRequest&, DescribeModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServicesResponse> DescribeModelServicesOutcome;
                typedef std::future<DescribeModelServicesOutcome> DescribeModelServicesOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeModelServicesRequest&, DescribeModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelsResponse> DescribeModelsOutcome;
                typedef std::future<DescribeModelsOutcome> DescribeModelsOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::DescribeModelsRequest&, DescribeModelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentAppResponse> ModifyAgentAppOutcome;
                typedef std::future<ModifyAgentAppOutcome> ModifyAgentAppOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::ModifyAgentAppRequest&, ModifyAgentAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentAppModelServicesResponse> ModifyAgentAppModelServicesOutcome;
                typedef std::future<ModifyAgentAppModelServicesOutcome> ModifyAgentAppModelServicesOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::ModifyAgentAppModelServicesRequest&, ModifyAgentAppModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentAppModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentCredentialResponse> ModifyAgentCredentialOutcome;
                typedef std::future<ModifyAgentCredentialOutcome> ModifyAgentCredentialOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::ModifyAgentCredentialRequest&, ModifyAgentCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMcpServerResponse> ModifyMcpServerOutcome;
                typedef std::future<ModifyMcpServerOutcome> ModifyMcpServerOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::ModifyMcpServerRequest&, ModifyMcpServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMcpServerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelResponse> ModifyModelOutcome;
                typedef std::future<ModifyModelOutcome> ModifyModelOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::ModifyModelRequest&, ModifyModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelServiceResponse> ModifyModelServiceOutcome;
                typedef std::future<ModifyModelServiceOutcome> ModifyModelServiceOutcomeCallable;
                typedef std::function<void(const ApisClient*, const Model::ModifyModelServiceRequest&, ModifyModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelServiceAsyncHandler;



                /**
                 *创建app
                 * @param req CreateAgentAppRequest
                 * @return CreateAgentAppOutcome
                 */
                CreateAgentAppOutcome CreateAgentApp(const Model::CreateAgentAppRequest &request);
                void CreateAgentAppAsync(const Model::CreateAgentAppRequest& request, const CreateAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentAppOutcomeCallable CreateAgentAppCallable(const Model::CreateAgentAppRequest& request);

                /**
                 *创建app的mcp server关联
                 * @param req CreateAgentAppMcpServersRequest
                 * @return CreateAgentAppMcpServersOutcome
                 */
                CreateAgentAppMcpServersOutcome CreateAgentAppMcpServers(const Model::CreateAgentAppMcpServersRequest &request);
                void CreateAgentAppMcpServersAsync(const Model::CreateAgentAppMcpServersRequest& request, const CreateAgentAppMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentAppMcpServersOutcomeCallable CreateAgentAppMcpServersCallable(const Model::CreateAgentAppMcpServersRequest& request);

                /**
                 *创建app的model service关联
                 * @param req CreateAgentAppModelServicesRequest
                 * @return CreateAgentAppModelServicesOutcome
                 */
                CreateAgentAppModelServicesOutcome CreateAgentAppModelServices(const Model::CreateAgentAppModelServicesRequest &request);
                void CreateAgentAppModelServicesAsync(const Model::CreateAgentAppModelServicesRequest& request, const CreateAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentAppModelServicesOutcomeCallable CreateAgentAppModelServicesCallable(const Model::CreateAgentAppModelServicesRequest& request);

                /**
                 *创建Credential
                 * @param req CreateAgentCredentialRequest
                 * @return CreateAgentCredentialOutcome
                 */
                CreateAgentCredentialOutcome CreateAgentCredential(const Model::CreateAgentCredentialRequest &request);
                void CreateAgentCredentialAsync(const Model::CreateAgentCredentialRequest& request, const CreateAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentCredentialOutcomeCallable CreateAgentCredentialCallable(const Model::CreateAgentCredentialRequest& request);

                /**
                 *创建mcp server
                 * @param req CreateMcpServerRequest
                 * @return CreateMcpServerOutcome
                 */
                CreateMcpServerOutcome CreateMcpServer(const Model::CreateMcpServerRequest &request);
                void CreateMcpServerAsync(const Model::CreateMcpServerRequest& request, const CreateMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMcpServerOutcomeCallable CreateMcpServerCallable(const Model::CreateMcpServerRequest& request);

                /**
                 *创建模型
                 * @param req CreateModelRequest
                 * @return CreateModelOutcome
                 */
                CreateModelOutcome CreateModel(const Model::CreateModelRequest &request);
                void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request);

                /**
                 *创建模型服务
                 * @param req CreateModelServiceRequest
                 * @return CreateModelServiceOutcome
                 */
                CreateModelServiceOutcome CreateModelService(const Model::CreateModelServiceRequest &request);
                void CreateModelServiceAsync(const Model::CreateModelServiceRequest& request, const CreateModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelServiceOutcomeCallable CreateModelServiceCallable(const Model::CreateModelServiceRequest& request);

                /**
                 *删除app
                 * @param req DeleteAgentAppRequest
                 * @return DeleteAgentAppOutcome
                 */
                DeleteAgentAppOutcome DeleteAgentApp(const Model::DeleteAgentAppRequest &request);
                void DeleteAgentAppAsync(const Model::DeleteAgentAppRequest& request, const DeleteAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentAppOutcomeCallable DeleteAgentAppCallable(const Model::DeleteAgentAppRequest& request);

                /**
                 *删除app的mcp server
                 * @param req DeleteAgentAppMcpServersRequest
                 * @return DeleteAgentAppMcpServersOutcome
                 */
                DeleteAgentAppMcpServersOutcome DeleteAgentAppMcpServers(const Model::DeleteAgentAppMcpServersRequest &request);
                void DeleteAgentAppMcpServersAsync(const Model::DeleteAgentAppMcpServersRequest& request, const DeleteAgentAppMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentAppMcpServersOutcomeCallable DeleteAgentAppMcpServersCallable(const Model::DeleteAgentAppMcpServersRequest& request);

                /**
                 *删除app的model service关联
                 * @param req DeleteAgentAppModelServicesRequest
                 * @return DeleteAgentAppModelServicesOutcome
                 */
                DeleteAgentAppModelServicesOutcome DeleteAgentAppModelServices(const Model::DeleteAgentAppModelServicesRequest &request);
                void DeleteAgentAppModelServicesAsync(const Model::DeleteAgentAppModelServicesRequest& request, const DeleteAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentAppModelServicesOutcomeCallable DeleteAgentAppModelServicesCallable(const Model::DeleteAgentAppModelServicesRequest& request);

                /**
                 *删除Credential
                 * @param req DeleteAgentCredentialRequest
                 * @return DeleteAgentCredentialOutcome
                 */
                DeleteAgentCredentialOutcome DeleteAgentCredential(const Model::DeleteAgentCredentialRequest &request);
                void DeleteAgentCredentialAsync(const Model::DeleteAgentCredentialRequest& request, const DeleteAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentCredentialOutcomeCallable DeleteAgentCredentialCallable(const Model::DeleteAgentCredentialRequest& request);

                /**
                 *删除mcp server
                 * @param req DeleteMcpServerRequest
                 * @return DeleteMcpServerOutcome
                 */
                DeleteMcpServerOutcome DeleteMcpServer(const Model::DeleteMcpServerRequest &request);
                void DeleteMcpServerAsync(const Model::DeleteMcpServerRequest& request, const DeleteMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMcpServerOutcomeCallable DeleteMcpServerCallable(const Model::DeleteMcpServerRequest& request);

                /**
                 *删除模型
                 * @param req DeleteModelRequest
                 * @return DeleteModelOutcome
                 */
                DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest &request);
                void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request);

                /**
                 *删除模型服务
                 * @param req DeleteModelServiceRequest
                 * @return DeleteModelServiceOutcome
                 */
                DeleteModelServiceOutcome DeleteModelService(const Model::DeleteModelServiceRequest &request);
                void DeleteModelServiceAsync(const Model::DeleteModelServiceRequest& request, const DeleteModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelServiceOutcomeCallable DeleteModelServiceCallable(const Model::DeleteModelServiceRequest& request);

                /**
                 *查询app详情
                 * @param req DescribeAgentAppRequest
                 * @return DescribeAgentAppOutcome
                 */
                DescribeAgentAppOutcome DescribeAgentApp(const Model::DescribeAgentAppRequest &request);
                void DescribeAgentAppAsync(const Model::DescribeAgentAppRequest& request, const DescribeAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentAppOutcomeCallable DescribeAgentAppCallable(const Model::DescribeAgentAppRequest& request);

                /**
                 *查询app mcpServer关联列表
                 * @param req DescribeAgentAppMcpServersRequest
                 * @return DescribeAgentAppMcpServersOutcome
                 */
                DescribeAgentAppMcpServersOutcome DescribeAgentAppMcpServers(const Model::DescribeAgentAppMcpServersRequest &request);
                void DescribeAgentAppMcpServersAsync(const Model::DescribeAgentAppMcpServersRequest& request, const DescribeAgentAppMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentAppMcpServersOutcomeCallable DescribeAgentAppMcpServersCallable(const Model::DescribeAgentAppMcpServersRequest& request);

                /**
                 *查询app modelService关联列表
                 * @param req DescribeAgentAppModelServicesRequest
                 * @return DescribeAgentAppModelServicesOutcome
                 */
                DescribeAgentAppModelServicesOutcome DescribeAgentAppModelServices(const Model::DescribeAgentAppModelServicesRequest &request);
                void DescribeAgentAppModelServicesAsync(const Model::DescribeAgentAppModelServicesRequest& request, const DescribeAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentAppModelServicesOutcomeCallable DescribeAgentAppModelServicesCallable(const Model::DescribeAgentAppModelServicesRequest& request);

                /**
                 *查询app列表
                 * @param req DescribeAgentAppsRequest
                 * @return DescribeAgentAppsOutcome
                 */
                DescribeAgentAppsOutcome DescribeAgentApps(const Model::DescribeAgentAppsRequest &request);
                void DescribeAgentAppsAsync(const Model::DescribeAgentAppsRequest& request, const DescribeAgentAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentAppsOutcomeCallable DescribeAgentAppsCallable(const Model::DescribeAgentAppsRequest& request);

                /**
                 *查询Credential详情
                 * @param req DescribeAgentCredentialRequest
                 * @return DescribeAgentCredentialOutcome
                 */
                DescribeAgentCredentialOutcome DescribeAgentCredential(const Model::DescribeAgentCredentialRequest &request);
                void DescribeAgentCredentialAsync(const Model::DescribeAgentCredentialRequest& request, const DescribeAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentCredentialOutcomeCallable DescribeAgentCredentialCallable(const Model::DescribeAgentCredentialRequest& request);

                /**
                 *查询Credential列表
                 * @param req DescribeAgentCredentialsRequest
                 * @return DescribeAgentCredentialsOutcome
                 */
                DescribeAgentCredentialsOutcome DescribeAgentCredentials(const Model::DescribeAgentCredentialsRequest &request);
                void DescribeAgentCredentialsAsync(const Model::DescribeAgentCredentialsRequest& request, const DescribeAgentCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentCredentialsOutcomeCallable DescribeAgentCredentialsCallable(const Model::DescribeAgentCredentialsRequest& request);

                /**
                 *查询mcp server详情
                 * @param req DescribeMcpServerRequest
                 * @return DescribeMcpServerOutcome
                 */
                DescribeMcpServerOutcome DescribeMcpServer(const Model::DescribeMcpServerRequest &request);
                void DescribeMcpServerAsync(const Model::DescribeMcpServerRequest& request, const DescribeMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMcpServerOutcomeCallable DescribeMcpServerCallable(const Model::DescribeMcpServerRequest& request);

                /**
                 *查询mcp server列表
                 * @param req DescribeMcpServersRequest
                 * @return DescribeMcpServersOutcome
                 */
                DescribeMcpServersOutcome DescribeMcpServers(const Model::DescribeMcpServersRequest &request);
                void DescribeMcpServersAsync(const Model::DescribeMcpServersRequest& request, const DescribeMcpServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMcpServersOutcomeCallable DescribeMcpServersCallable(const Model::DescribeMcpServersRequest& request);

                /**
                 *查询模型详情
                 * @param req DescribeModelRequest
                 * @return DescribeModelOutcome
                 */
                DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest &request);
                void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request);

                /**
                 *查询模型服务详情
                 * @param req DescribeModelServiceRequest
                 * @return DescribeModelServiceOutcome
                 */
                DescribeModelServiceOutcome DescribeModelService(const Model::DescribeModelServiceRequest &request);
                void DescribeModelServiceAsync(const Model::DescribeModelServiceRequest& request, const DescribeModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceOutcomeCallable DescribeModelServiceCallable(const Model::DescribeModelServiceRequest& request);

                /**
                 *查询模型服务列表
                 * @param req DescribeModelServicesRequest
                 * @return DescribeModelServicesOutcome
                 */
                DescribeModelServicesOutcome DescribeModelServices(const Model::DescribeModelServicesRequest &request);
                void DescribeModelServicesAsync(const Model::DescribeModelServicesRequest& request, const DescribeModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServicesOutcomeCallable DescribeModelServicesCallable(const Model::DescribeModelServicesRequest& request);

                /**
                 *查询模型列表
                 * @param req DescribeModelsRequest
                 * @return DescribeModelsOutcome
                 */
                DescribeModelsOutcome DescribeModels(const Model::DescribeModelsRequest &request);
                void DescribeModelsAsync(const Model::DescribeModelsRequest& request, const DescribeModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelsOutcomeCallable DescribeModelsCallable(const Model::DescribeModelsRequest& request);

                /**
                 *修改app
                 * @param req ModifyAgentAppRequest
                 * @return ModifyAgentAppOutcome
                 */
                ModifyAgentAppOutcome ModifyAgentApp(const Model::ModifyAgentAppRequest &request);
                void ModifyAgentAppAsync(const Model::ModifyAgentAppRequest& request, const ModifyAgentAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentAppOutcomeCallable ModifyAgentAppCallable(const Model::ModifyAgentAppRequest& request);

                /**
                 *编辑app的model service关联
                 * @param req ModifyAgentAppModelServicesRequest
                 * @return ModifyAgentAppModelServicesOutcome
                 */
                ModifyAgentAppModelServicesOutcome ModifyAgentAppModelServices(const Model::ModifyAgentAppModelServicesRequest &request);
                void ModifyAgentAppModelServicesAsync(const Model::ModifyAgentAppModelServicesRequest& request, const ModifyAgentAppModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentAppModelServicesOutcomeCallable ModifyAgentAppModelServicesCallable(const Model::ModifyAgentAppModelServicesRequest& request);

                /**
                 *修改Credential
                 * @param req ModifyAgentCredentialRequest
                 * @return ModifyAgentCredentialOutcome
                 */
                ModifyAgentCredentialOutcome ModifyAgentCredential(const Model::ModifyAgentCredentialRequest &request);
                void ModifyAgentCredentialAsync(const Model::ModifyAgentCredentialRequest& request, const ModifyAgentCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentCredentialOutcomeCallable ModifyAgentCredentialCallable(const Model::ModifyAgentCredentialRequest& request);

                /**
                 *修改mcp server
                 * @param req ModifyMcpServerRequest
                 * @return ModifyMcpServerOutcome
                 */
                ModifyMcpServerOutcome ModifyMcpServer(const Model::ModifyMcpServerRequest &request);
                void ModifyMcpServerAsync(const Model::ModifyMcpServerRequest& request, const ModifyMcpServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMcpServerOutcomeCallable ModifyMcpServerCallable(const Model::ModifyMcpServerRequest& request);

                /**
                 *修改模型
                 * @param req ModifyModelRequest
                 * @return ModifyModelOutcome
                 */
                ModifyModelOutcome ModifyModel(const Model::ModifyModelRequest &request);
                void ModifyModelAsync(const Model::ModifyModelRequest& request, const ModifyModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelOutcomeCallable ModifyModelCallable(const Model::ModifyModelRequest& request);

                /**
                 *修改模型服务
                 * @param req ModifyModelServiceRequest
                 * @return ModifyModelServiceOutcome
                 */
                ModifyModelServiceOutcome ModifyModelService(const Model::ModifyModelServiceRequest &request);
                void ModifyModelServiceAsync(const Model::ModifyModelServiceRequest& request, const ModifyModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelServiceOutcomeCallable ModifyModelServiceCallable(const Model::ModifyModelServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_APISCLIENT_H_
