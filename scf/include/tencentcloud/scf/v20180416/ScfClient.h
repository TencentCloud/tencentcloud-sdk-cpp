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
#include <tencentcloud/scf/v20180416/model/CreateTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsResponse.h>
#include <tencentcloud/scf/v20180416/model/InvokeRequest.h>
#include <tencentcloud/scf/v20180416/model/InvokeResponse.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationResponse.h>


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
                typedef Outcome<Error, Model::CreateTriggerResponse> CreateTriggerOutcome;
                typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateTriggerRequest&, CreateTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTriggerAsyncHandler;
                typedef Outcome<Error, Model::DeleteFunctionResponse> DeleteFunctionOutcome;
                typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteFunctionRequest&, DeleteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionAsyncHandler;
                typedef Outcome<Error, Model::DeleteTriggerResponse> DeleteTriggerOutcome;
                typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteTriggerRequest&, DeleteTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTriggerAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionResponse> GetFunctionOutcome;
                typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionRequest&, GetFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionLogsResponse> GetFunctionLogsOutcome;
                typedef std::future<GetFunctionLogsOutcome> GetFunctionLogsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionLogsRequest&, GetFunctionLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionLogsAsyncHandler;
                typedef Outcome<Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Error, Model::ListFunctionsResponse> ListFunctionsOutcome;
                typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListFunctionsRequest&, ListFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionsAsyncHandler;
                typedef Outcome<Error, Model::UpdateFunctionCodeResponse> UpdateFunctionCodeOutcome;
                typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionCodeRequest&, UpdateFunctionCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionCodeAsyncHandler;
                typedef Outcome<Error, Model::UpdateFunctionConfigurationResponse> UpdateFunctionConfigurationOutcome;
                typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionConfigurationRequest&, UpdateFunctionConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionConfigurationAsyncHandler;



                /**
                 *复制一个函数，可以选择将复制出的新函数放置在同一个namespace或另一个namespace。
注：本接口**不会**复制函数的以下对象或属性：
1. 函数的触发器
2. 除了$LATEST以外的其它版本
3. 函数配置的日志投递到的CLS目标

如有需要，您可以在复制后手动修改新函数。
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
                 *该接口根据参数输入设置新的触发方式。
                 * @param req CreateTriggerRequest
                 * @return CreateTriggerOutcome
                 */
                CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest &request);
                void CreateTriggerAsync(const Model::CreateTriggerRequest& request, const CreateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTriggerOutcomeCallable CreateTriggerCallable(const Model::CreateTriggerRequest& request);

                /**
                 *该接口根据传入参数删除函数。
                 * @param req DeleteFunctionRequest
                 * @return DeleteFunctionOutcome
                 */
                DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest &request);
                void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request);

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
                 *该接口根据指定的日志查询条件返回函数运行日志。
                 * @param req GetFunctionLogsRequest
                 * @return GetFunctionLogsOutcome
                 */
                GetFunctionLogsOutcome GetFunctionLogs(const Model::GetFunctionLogsRequest &request);
                void GetFunctionLogsAsync(const Model::GetFunctionLogsRequest& request, const GetFunctionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionLogsOutcomeCallable GetFunctionLogsCallable(const Model::GetFunctionLogsRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_
