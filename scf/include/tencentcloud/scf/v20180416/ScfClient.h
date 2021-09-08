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

#ifndef TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_
#define TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/scf/v20180416/model/CopyFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/CopyFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateNamespaceRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateNamespaceResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteNamespaceRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteNamespaceResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteProvisionedConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteProvisionedConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteReservedConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteReservedConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/GetAccountRequest.h>
#include <tencentcloud/scf/v20180416/model/GetAccountResponse.h>
#include <tencentcloud/scf/v20180416/model/GetAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/GetAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionAddressRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionAddressResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionEventInvokeConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionEventInvokeConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsResponse.h>
#include <tencentcloud/scf/v20180416/model/GetLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/GetProvisionedConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/GetProvisionedConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/GetReservedConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/GetReservedConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/InvokeRequest.h>
#include <tencentcloud/scf/v20180416/model/InvokeResponse.h>
#include <tencentcloud/scf/v20180416/model/InvokeFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/InvokeFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/ListAliasesRequest.h>
#include <tencentcloud/scf/v20180416/model/ListAliasesResponse.h>
#include <tencentcloud/scf/v20180416/model/ListAsyncEventsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListAsyncEventsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListLayerVersionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListLayerVersionsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListLayersRequest.h>
#include <tencentcloud/scf/v20180416/model/ListLayersResponse.h>
#include <tencentcloud/scf/v20180416/model/ListNamespacesRequest.h>
#include <tencentcloud/scf/v20180416/model/ListNamespacesResponse.h>
#include <tencentcloud/scf/v20180416/model/ListTriggersRequest.h>
#include <tencentcloud/scf/v20180416/model/ListTriggersResponse.h>
#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/PublishLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/PublishLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/PublishVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/PublishVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/PutProvisionedConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/PutProvisionedConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/PutReservedConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/PutReservedConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/PutTotalConcurrencyConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/PutTotalConcurrencyConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/TerminateAsyncEventRequest.h>
#include <tencentcloud/scf/v20180416/model/TerminateAsyncEventResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionEventInvokeConfigRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionEventInvokeConfigResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateNamespaceRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateNamespaceResponse.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            class ScfClient : public AbstractClient
            {
            public:
                ScfClient(const Credential &credential, const std::string &region);
                ScfClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CopyFunctionResponse> CopyFunctionOutcome;
                typedef std::future<CopyFunctionOutcome> CopyFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CopyFunctionRequest&, CopyFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAliasResponse> CreateAliasOutcome;
                typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateAliasRequest&, CreateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFunctionResponse> CreateFunctionOutcome;
                typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateFunctionRequest&, CreateFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTriggerResponse> CreateTriggerOutcome;
                typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateTriggerRequest&, CreateTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAliasResponse> DeleteAliasOutcome;
                typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteAliasRequest&, DeleteAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFunctionResponse> DeleteFunctionOutcome;
                typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteFunctionRequest&, DeleteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLayerVersionResponse> DeleteLayerVersionOutcome;
                typedef std::future<DeleteLayerVersionOutcome> DeleteLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteLayerVersionRequest&, DeleteLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProvisionedConcurrencyConfigResponse> DeleteProvisionedConcurrencyConfigOutcome;
                typedef std::future<DeleteProvisionedConcurrencyConfigOutcome> DeleteProvisionedConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteProvisionedConcurrencyConfigRequest&, DeleteProvisionedConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProvisionedConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReservedConcurrencyConfigResponse> DeleteReservedConcurrencyConfigOutcome;
                typedef std::future<DeleteReservedConcurrencyConfigOutcome> DeleteReservedConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteReservedConcurrencyConfigRequest&, DeleteReservedConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReservedConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTriggerResponse> DeleteTriggerOutcome;
                typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteTriggerRequest&, DeleteTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAccountResponse> GetAccountOutcome;
                typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetAccountRequest&, GetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAliasResponse> GetAliasOutcome;
                typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetAliasRequest&, GetAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFunctionResponse> GetFunctionOutcome;
                typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionRequest&, GetFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFunctionAddressResponse> GetFunctionAddressOutcome;
                typedef std::future<GetFunctionAddressOutcome> GetFunctionAddressOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionAddressRequest&, GetFunctionAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFunctionEventInvokeConfigResponse> GetFunctionEventInvokeConfigOutcome;
                typedef std::future<GetFunctionEventInvokeConfigOutcome> GetFunctionEventInvokeConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionEventInvokeConfigRequest&, GetFunctionEventInvokeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionEventInvokeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFunctionLogsResponse> GetFunctionLogsOutcome;
                typedef std::future<GetFunctionLogsOutcome> GetFunctionLogsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionLogsRequest&, GetFunctionLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLayerVersionResponse> GetLayerVersionOutcome;
                typedef std::future<GetLayerVersionOutcome> GetLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetLayerVersionRequest&, GetLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLayerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProvisionedConcurrencyConfigResponse> GetProvisionedConcurrencyConfigOutcome;
                typedef std::future<GetProvisionedConcurrencyConfigOutcome> GetProvisionedConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetProvisionedConcurrencyConfigRequest&, GetProvisionedConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProvisionedConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::GetReservedConcurrencyConfigResponse> GetReservedConcurrencyConfigOutcome;
                typedef std::future<GetReservedConcurrencyConfigOutcome> GetReservedConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetReservedConcurrencyConfigRequest&, GetReservedConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetReservedConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeFunctionResponse> InvokeFunctionOutcome;
                typedef std::future<InvokeFunctionOutcome> InvokeFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::InvokeFunctionRequest&, InvokeFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAliasesResponse> ListAliasesOutcome;
                typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListAliasesRequest&, ListAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAsyncEventsResponse> ListAsyncEventsOutcome;
                typedef std::future<ListAsyncEventsOutcome> ListAsyncEventsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListAsyncEventsRequest&, ListAsyncEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAsyncEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFunctionsResponse> ListFunctionsOutcome;
                typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListFunctionsRequest&, ListFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLayerVersionsResponse> ListLayerVersionsOutcome;
                typedef std::future<ListLayerVersionsOutcome> ListLayerVersionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListLayerVersionsRequest&, ListLayerVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLayerVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLayersResponse> ListLayersOutcome;
                typedef std::future<ListLayersOutcome> ListLayersOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListLayersRequest&, ListLayersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLayersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListNamespacesResponse> ListNamespacesOutcome;
                typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListNamespacesRequest&, ListNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTriggersResponse> ListTriggersOutcome;
                typedef std::future<ListTriggersOutcome> ListTriggersOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListTriggersRequest&, ListTriggersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTriggersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListVersionByFunctionResponse> ListVersionByFunctionOutcome;
                typedef std::future<ListVersionByFunctionOutcome> ListVersionByFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListVersionByFunctionRequest&, ListVersionByFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListVersionByFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishLayerVersionResponse> PublishLayerVersionOutcome;
                typedef std::future<PublishLayerVersionOutcome> PublishLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PublishLayerVersionRequest&, PublishLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishLayerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishVersionResponse> PublishVersionOutcome;
                typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PublishVersionRequest&, PublishVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::PutProvisionedConcurrencyConfigResponse> PutProvisionedConcurrencyConfigOutcome;
                typedef std::future<PutProvisionedConcurrencyConfigOutcome> PutProvisionedConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PutProvisionedConcurrencyConfigRequest&, PutProvisionedConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutProvisionedConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::PutReservedConcurrencyConfigResponse> PutReservedConcurrencyConfigOutcome;
                typedef std::future<PutReservedConcurrencyConfigOutcome> PutReservedConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PutReservedConcurrencyConfigRequest&, PutReservedConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutReservedConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::PutTotalConcurrencyConfigResponse> PutTotalConcurrencyConfigOutcome;
                typedef std::future<PutTotalConcurrencyConfigOutcome> PutTotalConcurrencyConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PutTotalConcurrencyConfigRequest&, PutTotalConcurrencyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutTotalConcurrencyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateAsyncEventResponse> TerminateAsyncEventOutcome;
                typedef std::future<TerminateAsyncEventOutcome> TerminateAsyncEventOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::TerminateAsyncEventRequest&, TerminateAsyncEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateAsyncEventAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAliasResponse> UpdateAliasOutcome;
                typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateAliasRequest&, UpdateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFunctionCodeResponse> UpdateFunctionCodeOutcome;
                typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionCodeRequest&, UpdateFunctionCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFunctionConfigurationResponse> UpdateFunctionConfigurationOutcome;
                typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionConfigurationRequest&, UpdateFunctionConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFunctionEventInvokeConfigResponse> UpdateFunctionEventInvokeConfigOutcome;
                typedef std::future<UpdateFunctionEventInvokeConfigOutcome> UpdateFunctionEventInvokeConfigOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionEventInvokeConfigRequest&, UpdateFunctionEventInvokeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionEventInvokeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateNamespaceResponse> UpdateNamespaceOutcome;
                typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateNamespaceRequest&, UpdateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;



                /**
                 *复制一个函数，您可以选择将复制出的新函数放置在特定的Region和Namespace。
注：本接口**不会**复制函数的以下对象或属性：
1. 函数的触发器
2. 除了$LATEST以外的其它版本
3. 函数配置的日志投递到的CLS目标。

如有需要，您可以在复制后手动配置新函数。
                 * @param req CopyFunctionRequest
                 * @return CopyFunctionOutcome
                 */
                CopyFunctionOutcome CopyFunction(const Model::CopyFunctionRequest &request);
                void CopyFunctionAsync(const Model::CopyFunctionRequest& request, const CopyFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyFunctionOutcomeCallable CopyFunctionCallable(const Model::CopyFunctionRequest& request);

                /**
                 *为某个函数版本创建一个别名，您可以使用别名来标记特定的函数版本，如DEV/RELEASE版本，也可以随时修改别名指向的版本。
一个别名必须指向一个主版本，此外还可以同时指向一个附加版本。调用函数时指定特定的别名，则请求会被发送到别名指向的版本上，您可以配置请求发送到主版本和附加版本的比例。
                 * @param req CreateAliasRequest
                 * @return CreateAliasOutcome
                 */
                CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest &request);
                void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request);

                /**
                 *该接口根据传入参数创建新的函数。
                 * @param req CreateFunctionRequest
                 * @return CreateFunctionOutcome
                 */
                CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest &request);
                void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request);

                /**
                 *该接口根据传入的参数创建命名空间。
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *该接口根据参数输入设置新的触发方式。
                 * @param req CreateTriggerRequest
                 * @return CreateTriggerOutcome
                 */
                CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest &request);
                void CreateTriggerAsync(const Model::CreateTriggerRequest& request, const CreateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTriggerOutcomeCallable CreateTriggerCallable(const Model::CreateTriggerRequest& request);

                /**
                 *删除一个函数版本的别名
                 * @param req DeleteAliasRequest
                 * @return DeleteAliasOutcome
                 */
                DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest &request);
                void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request);

                /**
                 *该接口根据传入参数删除函数。
                 * @param req DeleteFunctionRequest
                 * @return DeleteFunctionOutcome
                 */
                DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest &request);
                void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request);

                /**
                 *删除指定层的指定版本，被删除的版本无法再关联到函数上，但不会影响正在引用这个层的函数。
                 * @param req DeleteLayerVersionRequest
                 * @return DeleteLayerVersionOutcome
                 */
                DeleteLayerVersionOutcome DeleteLayerVersion(const Model::DeleteLayerVersionRequest &request);
                void DeleteLayerVersionAsync(const Model::DeleteLayerVersionRequest& request, const DeleteLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLayerVersionOutcomeCallable DeleteLayerVersionCallable(const Model::DeleteLayerVersionRequest& request);

                /**
                 *该接口根据传入的参数删除命名空间。
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *删除函数版本的预置并发配置。
                 * @param req DeleteProvisionedConcurrencyConfigRequest
                 * @return DeleteProvisionedConcurrencyConfigOutcome
                 */
                DeleteProvisionedConcurrencyConfigOutcome DeleteProvisionedConcurrencyConfig(const Model::DeleteProvisionedConcurrencyConfigRequest &request);
                void DeleteProvisionedConcurrencyConfigAsync(const Model::DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProvisionedConcurrencyConfigOutcomeCallable DeleteProvisionedConcurrencyConfigCallable(const Model::DeleteProvisionedConcurrencyConfigRequest& request);

                /**
                 *删除函数的最大独占配额配置。
                 * @param req DeleteReservedConcurrencyConfigRequest
                 * @return DeleteReservedConcurrencyConfigOutcome
                 */
                DeleteReservedConcurrencyConfigOutcome DeleteReservedConcurrencyConfig(const Model::DeleteReservedConcurrencyConfigRequest &request);
                void DeleteReservedConcurrencyConfigAsync(const Model::DeleteReservedConcurrencyConfigRequest& request, const DeleteReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReservedConcurrencyConfigOutcomeCallable DeleteReservedConcurrencyConfigCallable(const Model::DeleteReservedConcurrencyConfigRequest& request);

                /**
                 *该接口根据参数传入删除已有的触发方式。
                 * @param req DeleteTriggerRequest
                 * @return DeleteTriggerOutcome
                 */
                DeleteTriggerOutcome DeleteTrigger(const Model::DeleteTriggerRequest &request);
                void DeleteTriggerAsync(const Model::DeleteTriggerRequest& request, const DeleteTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTriggerOutcomeCallable DeleteTriggerCallable(const Model::DeleteTriggerRequest& request);

                /**
                 *获取账户信息
                 * @param req GetAccountRequest
                 * @return GetAccountOutcome
                 */
                GetAccountOutcome GetAccount(const Model::GetAccountRequest &request);
                void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request);

                /**
                 *获取别名的详细信息，包括名称、描述、版本、路由信息等。
                 * @param req GetAliasRequest
                 * @return GetAliasOutcome
                 */
                GetAliasOutcome GetAlias(const Model::GetAliasRequest &request);
                void GetAliasAsync(const Model::GetAliasRequest& request, const GetAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAliasOutcomeCallable GetAliasCallable(const Model::GetAliasRequest& request);

                /**
                 *该接口获取某个函数的详细信息，包括名称、代码、处理方法、关联触发器和超时时间等字段。
                 * @param req GetFunctionRequest
                 * @return GetFunctionOutcome
                 */
                GetFunctionOutcome GetFunction(const Model::GetFunctionRequest &request);
                void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request);

                /**
                 *该接口用于获取函数代码包的下载地址。
                 * @param req GetFunctionAddressRequest
                 * @return GetFunctionAddressOutcome
                 */
                GetFunctionAddressOutcome GetFunctionAddress(const Model::GetFunctionAddressRequest &request);
                void GetFunctionAddressAsync(const Model::GetFunctionAddressRequest& request, const GetFunctionAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionAddressOutcomeCallable GetFunctionAddressCallable(const Model::GetFunctionAddressRequest& request);

                /**
                 *获取函数异步重试配置，包括重试次数和消息保留时间
                 * @param req GetFunctionEventInvokeConfigRequest
                 * @return GetFunctionEventInvokeConfigOutcome
                 */
                GetFunctionEventInvokeConfigOutcome GetFunctionEventInvokeConfig(const Model::GetFunctionEventInvokeConfigRequest &request);
                void GetFunctionEventInvokeConfigAsync(const Model::GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionEventInvokeConfigOutcomeCallable GetFunctionEventInvokeConfigCallable(const Model::GetFunctionEventInvokeConfigRequest& request);

                /**
                 *该接口根据指定的日志查询条件返回函数运行日志。
                 * @param req GetFunctionLogsRequest
                 * @return GetFunctionLogsOutcome
                 */
                GetFunctionLogsOutcome GetFunctionLogs(const Model::GetFunctionLogsRequest &request);
                void GetFunctionLogsAsync(const Model::GetFunctionLogsRequest& request, const GetFunctionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionLogsOutcomeCallable GetFunctionLogsCallable(const Model::GetFunctionLogsRequest& request);

                /**
                 *获取层版本详细信息，包括用于下载层中文件的链接。
                 * @param req GetLayerVersionRequest
                 * @return GetLayerVersionOutcome
                 */
                GetLayerVersionOutcome GetLayerVersion(const Model::GetLayerVersionRequest &request);
                void GetLayerVersionAsync(const Model::GetLayerVersionRequest& request, const GetLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLayerVersionOutcomeCallable GetLayerVersionCallable(const Model::GetLayerVersionRequest& request);

                /**
                 *获取函数或函数某一版本的预置并发详情。
                 * @param req GetProvisionedConcurrencyConfigRequest
                 * @return GetProvisionedConcurrencyConfigOutcome
                 */
                GetProvisionedConcurrencyConfigOutcome GetProvisionedConcurrencyConfig(const Model::GetProvisionedConcurrencyConfigRequest &request);
                void GetProvisionedConcurrencyConfigAsync(const Model::GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProvisionedConcurrencyConfigOutcomeCallable GetProvisionedConcurrencyConfigCallable(const Model::GetProvisionedConcurrencyConfigRequest& request);

                /**
                 *获取函数的最大独占配额详情。
                 * @param req GetReservedConcurrencyConfigRequest
                 * @return GetReservedConcurrencyConfigOutcome
                 */
                GetReservedConcurrencyConfigOutcome GetReservedConcurrencyConfig(const Model::GetReservedConcurrencyConfigRequest &request);
                void GetReservedConcurrencyConfigAsync(const Model::GetReservedConcurrencyConfigRequest& request, const GetReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetReservedConcurrencyConfigOutcomeCallable GetReservedConcurrencyConfigCallable(const Model::GetReservedConcurrencyConfigRequest& request);

                /**
                 *该接口用于运行函数。
                 * @param req InvokeRequest
                 * @return InvokeOutcome
                 */
                InvokeOutcome Invoke(const Model::InvokeRequest &request);
                void InvokeAsync(const Model::InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request);

                /**
                 * SCF同步调用函数接口
                 * @param req InvokeFunctionRequest
                 * @return InvokeFunctionOutcome
                 */
                InvokeFunctionOutcome InvokeFunction(const Model::InvokeFunctionRequest &request);
                void InvokeFunctionAsync(const Model::InvokeFunctionRequest& request, const InvokeFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeFunctionOutcomeCallable InvokeFunctionCallable(const Model::InvokeFunctionRequest& request);

                /**
                 *返回一个函数下的全部别名，可以根据特定函数版本过滤。
                 * @param req ListAliasesRequest
                 * @return ListAliasesOutcome
                 */
                ListAliasesOutcome ListAliases(const Model::ListAliasesRequest &request);
                void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request);

                /**
                 *拉取函数异步事件列表
                 * @param req ListAsyncEventsRequest
                 * @return ListAsyncEventsOutcome
                 */
                ListAsyncEventsOutcome ListAsyncEvents(const Model::ListAsyncEventsRequest &request);
                void ListAsyncEventsAsync(const Model::ListAsyncEventsRequest& request, const ListAsyncEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAsyncEventsOutcomeCallable ListAsyncEventsCallable(const Model::ListAsyncEventsRequest& request);

                /**
                 *该接口根据传入的查询参数返回相关函数信息。
                 * @param req ListFunctionsRequest
                 * @return ListFunctionsOutcome
                 */
                ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest &request);
                void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request);

                /**
                 *返回指定层的全部版本的信息
                 * @param req ListLayerVersionsRequest
                 * @return ListLayerVersionsOutcome
                 */
                ListLayerVersionsOutcome ListLayerVersions(const Model::ListLayerVersionsRequest &request);
                void ListLayerVersionsAsync(const Model::ListLayerVersionsRequest& request, const ListLayerVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLayerVersionsOutcomeCallable ListLayerVersionsCallable(const Model::ListLayerVersionsRequest& request);

                /**
                 *返回全部层的列表，其中包含了每个层最新版本的信息，可以通过适配运行时进行过滤。
                 * @param req ListLayersRequest
                 * @return ListLayersOutcome
                 */
                ListLayersOutcome ListLayers(const Model::ListLayersRequest &request);
                void ListLayersAsync(const Model::ListLayersRequest& request, const ListLayersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLayersOutcomeCallable ListLayersCallable(const Model::ListLayersRequest& request);

                /**
                 *列出命名空间列表
                 * @param req ListNamespacesRequest
                 * @return ListNamespacesOutcome
                 */
                ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest &request);
                void ListNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListNamespacesOutcomeCallable ListNamespacesCallable(const Model::ListNamespacesRequest& request);

                /**
                 *获取函数触发器列表
                 * @param req ListTriggersRequest
                 * @return ListTriggersOutcome
                 */
                ListTriggersOutcome ListTriggers(const Model::ListTriggersRequest &request);
                void ListTriggersAsync(const Model::ListTriggersRequest& request, const ListTriggersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTriggersOutcomeCallable ListTriggersCallable(const Model::ListTriggersRequest& request);

                /**
                 *该接口根据传入的参数查询函数的版本。
                 * @param req ListVersionByFunctionRequest
                 * @return ListVersionByFunctionOutcome
                 */
                ListVersionByFunctionOutcome ListVersionByFunction(const Model::ListVersionByFunctionRequest &request);
                void ListVersionByFunctionAsync(const Model::ListVersionByFunctionRequest& request, const ListVersionByFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListVersionByFunctionOutcomeCallable ListVersionByFunctionCallable(const Model::ListVersionByFunctionRequest& request);

                /**
                 *使用给定的zip文件或cos对象创建一个层的新版本，每次使用相同的层的名称调用本接口，都会生成一个新版本。
                 * @param req PublishLayerVersionRequest
                 * @return PublishLayerVersionOutcome
                 */
                PublishLayerVersionOutcome PublishLayerVersion(const Model::PublishLayerVersionRequest &request);
                void PublishLayerVersionAsync(const Model::PublishLayerVersionRequest& request, const PublishLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishLayerVersionOutcomeCallable PublishLayerVersionCallable(const Model::PublishLayerVersionRequest& request);

                /**
                 *该接口用于用户发布新版本函数。
                 * @param req PublishVersionRequest
                 * @return PublishVersionOutcome
                 */
                PublishVersionOutcome PublishVersion(const Model::PublishVersionRequest &request);
                void PublishVersionAsync(const Model::PublishVersionRequest& request, const PublishVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishVersionOutcomeCallable PublishVersionCallable(const Model::PublishVersionRequest& request);

                /**
                 *设置函数某一非$LATEST版本的预置并发。
                 * @param req PutProvisionedConcurrencyConfigRequest
                 * @return PutProvisionedConcurrencyConfigOutcome
                 */
                PutProvisionedConcurrencyConfigOutcome PutProvisionedConcurrencyConfig(const Model::PutProvisionedConcurrencyConfigRequest &request);
                void PutProvisionedConcurrencyConfigAsync(const Model::PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutProvisionedConcurrencyConfigOutcomeCallable PutProvisionedConcurrencyConfigCallable(const Model::PutProvisionedConcurrencyConfigRequest& request);

                /**
                 *设置函数最大独占配额
                 * @param req PutReservedConcurrencyConfigRequest
                 * @return PutReservedConcurrencyConfigOutcome
                 */
                PutReservedConcurrencyConfigOutcome PutReservedConcurrencyConfig(const Model::PutReservedConcurrencyConfigRequest &request);
                void PutReservedConcurrencyConfigAsync(const Model::PutReservedConcurrencyConfigRequest& request, const PutReservedConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutReservedConcurrencyConfigOutcomeCallable PutReservedConcurrencyConfigCallable(const Model::PutReservedConcurrencyConfigRequest& request);

                /**
                 *修改账号并发限制配额
                 * @param req PutTotalConcurrencyConfigRequest
                 * @return PutTotalConcurrencyConfigOutcome
                 */
                PutTotalConcurrencyConfigOutcome PutTotalConcurrencyConfig(const Model::PutTotalConcurrencyConfigRequest &request);
                void PutTotalConcurrencyConfigAsync(const Model::PutTotalConcurrencyConfigRequest& request, const PutTotalConcurrencyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutTotalConcurrencyConfigOutcomeCallable PutTotalConcurrencyConfigCallable(const Model::PutTotalConcurrencyConfigRequest& request);

                /**
                 *终止正在运行中的函数异步事件
                 * @param req TerminateAsyncEventRequest
                 * @return TerminateAsyncEventOutcome
                 */
                TerminateAsyncEventOutcome TerminateAsyncEvent(const Model::TerminateAsyncEventRequest &request);
                void TerminateAsyncEventAsync(const Model::TerminateAsyncEventRequest& request, const TerminateAsyncEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateAsyncEventOutcomeCallable TerminateAsyncEventCallable(const Model::TerminateAsyncEventRequest& request);

                /**
                 *更新别名的配置
                 * @param req UpdateAliasRequest
                 * @return UpdateAliasOutcome
                 */
                UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest &request);
                void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request);

                /**
                 *该接口根据传入参数更新函数代码。
                 * @param req UpdateFunctionCodeRequest
                 * @return UpdateFunctionCodeOutcome
                 */
                UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest &request);
                void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request);

                /**
                 *该接口根据传入参数更新函数配置。
                 * @param req UpdateFunctionConfigurationRequest
                 * @return UpdateFunctionConfigurationOutcome
                 */
                UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest &request);
                void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request);

                /**
                 *更新函数的异步重试配置，包括重试次数和消息保留时间
                 * @param req UpdateFunctionEventInvokeConfigRequest
                 * @return UpdateFunctionEventInvokeConfigOutcome
                 */
                UpdateFunctionEventInvokeConfigOutcome UpdateFunctionEventInvokeConfig(const Model::UpdateFunctionEventInvokeConfigRequest &request);
                void UpdateFunctionEventInvokeConfigAsync(const Model::UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFunctionEventInvokeConfigOutcomeCallable UpdateFunctionEventInvokeConfigCallable(const Model::UpdateFunctionEventInvokeConfigRequest& request);

                /**
                 *更新命名空间
                 * @param req UpdateNamespaceRequest
                 * @return UpdateNamespaceOutcome
                 */
                UpdateNamespaceOutcome UpdateNamespace(const Model::UpdateNamespaceRequest &request);
                void UpdateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateNamespaceOutcomeCallable UpdateNamespaceCallable(const Model::UpdateNamespaceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_
