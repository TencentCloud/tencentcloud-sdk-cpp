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

#ifndef TENCENTCLOUD_ASW_V20200722_ASWCLIENT_H_
#define TENCENTCLOUD_ASW_V20200722_ASWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/asw/v20200722/model/CreateFlowServiceRequest.h>
#include <tencentcloud/asw/v20200722/model/CreateFlowServiceResponse.h>
#include <tencentcloud/asw/v20200722/model/DescribeExecutionRequest.h>
#include <tencentcloud/asw/v20200722/model/DescribeExecutionResponse.h>
#include <tencentcloud/asw/v20200722/model/DescribeExecutionHistoryRequest.h>
#include <tencentcloud/asw/v20200722/model/DescribeExecutionHistoryResponse.h>
#include <tencentcloud/asw/v20200722/model/DescribeExecutionsRequest.h>
#include <tencentcloud/asw/v20200722/model/DescribeExecutionsResponse.h>
#include <tencentcloud/asw/v20200722/model/DescribeFlowServiceDetailRequest.h>
#include <tencentcloud/asw/v20200722/model/DescribeFlowServiceDetailResponse.h>
#include <tencentcloud/asw/v20200722/model/DescribeFlowServicesRequest.h>
#include <tencentcloud/asw/v20200722/model/DescribeFlowServicesResponse.h>
#include <tencentcloud/asw/v20200722/model/ModifyFlowServiceRequest.h>
#include <tencentcloud/asw/v20200722/model/ModifyFlowServiceResponse.h>
#include <tencentcloud/asw/v20200722/model/StartExecutionRequest.h>
#include <tencentcloud/asw/v20200722/model/StartExecutionResponse.h>
#include <tencentcloud/asw/v20200722/model/StopExecutionRequest.h>
#include <tencentcloud/asw/v20200722/model/StopExecutionResponse.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            class AswClient : public AbstractClient
            {
            public:
                AswClient(const Credential &credential, const std::string &region);
                AswClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateFlowServiceResponse> CreateFlowServiceOutcome;
                typedef std::future<CreateFlowServiceOutcome> CreateFlowServiceOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::CreateFlowServiceRequest&, CreateFlowServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExecutionResponse> DescribeExecutionOutcome;
                typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::DescribeExecutionRequest&, DescribeExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExecutionHistoryResponse> DescribeExecutionHistoryOutcome;
                typedef std::future<DescribeExecutionHistoryOutcome> DescribeExecutionHistoryOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::DescribeExecutionHistoryRequest&, DescribeExecutionHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutionHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExecutionsResponse> DescribeExecutionsOutcome;
                typedef std::future<DescribeExecutionsOutcome> DescribeExecutionsOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::DescribeExecutionsRequest&, DescribeExecutionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowServiceDetailResponse> DescribeFlowServiceDetailOutcome;
                typedef std::future<DescribeFlowServiceDetailOutcome> DescribeFlowServiceDetailOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::DescribeFlowServiceDetailRequest&, DescribeFlowServiceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowServiceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowServicesResponse> DescribeFlowServicesOutcome;
                typedef std::future<DescribeFlowServicesOutcome> DescribeFlowServicesOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::DescribeFlowServicesRequest&, DescribeFlowServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFlowServiceResponse> ModifyFlowServiceOutcome;
                typedef std::future<ModifyFlowServiceOutcome> ModifyFlowServiceOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::ModifyFlowServiceRequest&, ModifyFlowServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::StartExecutionResponse> StartExecutionOutcome;
                typedef std::future<StartExecutionOutcome> StartExecutionOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::StartExecutionRequest&, StartExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::StopExecutionResponse> StopExecutionOutcome;
                typedef std::future<StopExecutionOutcome> StopExecutionOutcomeCallable;
                typedef std::function<void(const AswClient*, const Model::StopExecutionRequest&, StopExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopExecutionAsyncHandler;



                /**
                 *该接口用于生成状态机服务
                 * @param req CreateFlowServiceRequest
                 * @return CreateFlowServiceOutcome
                 */
                CreateFlowServiceOutcome CreateFlowService(const Model::CreateFlowServiceRequest &request);
                void CreateFlowServiceAsync(const Model::CreateFlowServiceRequest& request, const CreateFlowServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowServiceOutcomeCallable CreateFlowServiceCallable(const Model::CreateFlowServiceRequest& request);

                /**
                 *查询执行详细信息
                 * @param req DescribeExecutionRequest
                 * @return DescribeExecutionOutcome
                 */
                DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest &request);
                void DescribeExecutionAsync(const Model::DescribeExecutionRequest& request, const DescribeExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExecutionOutcomeCallable DescribeExecutionCallable(const Model::DescribeExecutionRequest& request);

                /**
                 *一次执行会有很多步骤，经过很多节点，这个接口描述某一次执行的事件的历史
                 * @param req DescribeExecutionHistoryRequest
                 * @return DescribeExecutionHistoryOutcome
                 */
                DescribeExecutionHistoryOutcome DescribeExecutionHistory(const Model::DescribeExecutionHistoryRequest &request);
                void DescribeExecutionHistoryAsync(const Model::DescribeExecutionHistoryRequest& request, const DescribeExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExecutionHistoryOutcomeCallable DescribeExecutionHistoryCallable(const Model::DescribeExecutionHistoryRequest& request);

                /**
                 *对状态机的执行历史进行描述.
                 * @param req DescribeExecutionsRequest
                 * @return DescribeExecutionsOutcome
                 */
                DescribeExecutionsOutcome DescribeExecutions(const Model::DescribeExecutionsRequest &request);
                void DescribeExecutionsAsync(const Model::DescribeExecutionsRequest& request, const DescribeExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExecutionsOutcomeCallable DescribeExecutionsCallable(const Model::DescribeExecutionsRequest& request);

                /**
                 *查询该用户指定状态机下的详情数据。
                 * @param req DescribeFlowServiceDetailRequest
                 * @return DescribeFlowServiceDetailOutcome
                 */
                DescribeFlowServiceDetailOutcome DescribeFlowServiceDetail(const Model::DescribeFlowServiceDetailRequest &request);
                void DescribeFlowServiceDetailAsync(const Model::DescribeFlowServiceDetailRequest& request, const DescribeFlowServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowServiceDetailOutcomeCallable DescribeFlowServiceDetailCallable(const Model::DescribeFlowServiceDetailRequest& request);

                /**
                 *查询指定用户下所有状态机，以列表形式返回
                 * @param req DescribeFlowServicesRequest
                 * @return DescribeFlowServicesOutcome
                 */
                DescribeFlowServicesOutcome DescribeFlowServices(const Model::DescribeFlowServicesRequest &request);
                void DescribeFlowServicesAsync(const Model::DescribeFlowServicesRequest& request, const DescribeFlowServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowServicesOutcomeCallable DescribeFlowServicesCallable(const Model::DescribeFlowServicesRequest& request);

                /**
                 *该接口用于修改状态机
                 * @param req ModifyFlowServiceRequest
                 * @return ModifyFlowServiceOutcome
                 */
                ModifyFlowServiceOutcome ModifyFlowService(const Model::ModifyFlowServiceRequest &request);
                void ModifyFlowServiceAsync(const Model::ModifyFlowServiceRequest& request, const ModifyFlowServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFlowServiceOutcomeCallable ModifyFlowServiceCallable(const Model::ModifyFlowServiceRequest& request);

                /**
                 *为指定的状态机启动一次执行
                 * @param req StartExecutionRequest
                 * @return StartExecutionOutcome
                 */
                StartExecutionOutcome StartExecution(const Model::StartExecutionRequest &request);
                void StartExecutionAsync(const Model::StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartExecutionOutcomeCallable StartExecutionCallable(const Model::StartExecutionRequest& request);

                /**
                 *终止某个状态机
                 * @param req StopExecutionRequest
                 * @return StopExecutionOutcome
                 */
                StopExecutionOutcome StopExecution(const Model::StopExecutionRequest &request);
                void StopExecutionAsync(const Model::StopExecutionRequest& request, const StopExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopExecutionOutcomeCallable StopExecutionCallable(const Model::StopExecutionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_ASWCLIENT_H_
