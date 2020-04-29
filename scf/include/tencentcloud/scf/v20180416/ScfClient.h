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
#include <tencentcloud/scf/v20180416/model/DeleteTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionAddressRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionAddressResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsResponse.h>
#include <tencentcloud/scf/v20180416/model/GetLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/InvokeRequest.h>
#include <tencentcloud/scf/v20180416/model/InvokeResponse.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListLayerVersionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListLayerVersionsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListLayersRequest.h>
#include <tencentcloud/scf/v20180416/model/ListLayersResponse.h>
#include <tencentcloud/scf/v20180416/model/ListNamespacesRequest.h>
#include <tencentcloud/scf/v20180416/model/ListNamespacesResponse.h>
#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/PublishLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/PublishLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/PublishVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/PublishVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationResponse.h>
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

                typedef Outcome<Error, Model::CopyFunctionResponse> CopyFunctionOutcome;
                typedef std::future<CopyFunctionOutcome> CopyFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CopyFunctionRequest&, CopyFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyFunctionAsyncHandler;
                typedef Outcome<Error, Model::CreateFunctionResponse> CreateFunctionOutcome;
                typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateFunctionRequest&, CreateFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFunctionAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Error, Model::CreateTriggerResponse> CreateTriggerOutcome;
                typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateTriggerRequest&, CreateTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTriggerAsyncHandler;
                typedef Outcome<Error, Model::DeleteAliasResponse> DeleteAliasOutcome;
                typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteAliasRequest&, DeleteAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
                typedef Outcome<Error, Model::DeleteFunctionResponse> DeleteFunctionOutcome;
                typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteFunctionRequest&, DeleteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionAsyncHandler;
                typedef Outcome<Error, Model::DeleteLayerVersionResponse> DeleteLayerVersionOutcome;
                typedef std::future<DeleteLayerVersionOutcome> DeleteLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteLayerVersionRequest&, DeleteLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayerVersionAsyncHandler;
                typedef Outcome<Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteTriggerResponse> DeleteTriggerOutcome;
                typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteTriggerRequest&, DeleteTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTriggerAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionResponse> GetFunctionOutcome;
                typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionRequest&, GetFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionAddressResponse> GetFunctionAddressOutcome;
                typedef std::future<GetFunctionAddressOutcome> GetFunctionAddressOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionAddressRequest&, GetFunctionAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAddressAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionLogsResponse> GetFunctionLogsOutcome;
                typedef std::future<GetFunctionLogsOutcome> GetFunctionLogsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionLogsRequest&, GetFunctionLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionLogsAsyncHandler;
                typedef Outcome<Error, Model::GetLayerVersionResponse> GetLayerVersionOutcome;
                typedef std::future<GetLayerVersionOutcome> GetLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetLayerVersionRequest&, GetLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLayerVersionAsyncHandler;
                typedef Outcome<Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Error, Model::ListFunctionsResponse> ListFunctionsOutcome;
                typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListFunctionsRequest&, ListFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionsAsyncHandler;
                typedef Outcome<Error, Model::ListLayerVersionsResponse> ListLayerVersionsOutcome;
                typedef std::future<ListLayerVersionsOutcome> ListLayerVersionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListLayerVersionsRequest&, ListLayerVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLayerVersionsAsyncHandler;
                typedef Outcome<Error, Model::ListLayersResponse> ListLayersOutcome;
                typedef std::future<ListLayersOutcome> ListLayersOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListLayersRequest&, ListLayersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLayersAsyncHandler;
                typedef Outcome<Error, Model::ListNamespacesResponse> ListNamespacesOutcome;
                typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListNamespacesRequest&, ListNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
                typedef Outcome<Error, Model::ListVersionByFunctionResponse> ListVersionByFunctionOutcome;
                typedef std::future<ListVersionByFunctionOutcome> ListVersionByFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListVersionByFunctionRequest&, ListVersionByFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListVersionByFunctionAsyncHandler;
                typedef Outcome<Error, Model::PublishLayerVersionResponse> PublishLayerVersionOutcome;
                typedef std::future<PublishLayerVersionOutcome> PublishLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PublishLayerVersionRequest&, PublishLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishLayerVersionAsyncHandler;
                typedef Outcome<Error, Model::PublishVersionResponse> PublishVersionOutcome;
                typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PublishVersionRequest&, PublishVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishVersionAsyncHandler;
                typedef Outcome<Error, Model::UpdateFunctionCodeResponse> UpdateFunctionCodeOutcome;
                typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionCodeRequest&, UpdateFunctionCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionCodeAsyncHandler;
                typedef Outcome<Error, Model::UpdateFunctionConfigurationResponse> UpdateFunctionConfigurationOutcome;
                typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionConfigurationRequest&, UpdateFunctionConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionConfigurationAsyncHandler;
                typedef Outcome<Error, Model::UpdateNamespaceResponse> UpdateNamespaceOutcome;
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
                 *该接口根据传入的参数创建命名空间。
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *该接口根据参数传入删除已有的触发方式。
                 * @param req DeleteTriggerRequest
                 * @return DeleteTriggerOutcome
                 */
                DeleteTriggerOutcome DeleteTrigger(const Model::DeleteTriggerRequest &request);
                void DeleteTriggerAsync(const Model::DeleteTriggerRequest& request, const DeleteTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTriggerOutcomeCallable DeleteTriggerCallable(const Model::DeleteTriggerRequest& request);

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
                 *该接口用于运行函数。
                 * @param req InvokeRequest
                 * @return InvokeOutcome
                 */
                InvokeOutcome Invoke(const Model::InvokeRequest &request);
                void InvokeAsync(const Model::InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request);

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
