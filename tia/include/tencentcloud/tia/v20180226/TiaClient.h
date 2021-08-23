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

#ifndef TENCENTCLOUD_TIA_V20180226_TIACLIENT_H_
#define TENCENTCLOUD_TIA_V20180226_TIACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tia/v20180226/model/CreateJobRequest.h>
#include <tencentcloud/tia/v20180226/model/CreateJobResponse.h>
#include <tencentcloud/tia/v20180226/model/CreateModelRequest.h>
#include <tencentcloud/tia/v20180226/model/CreateModelResponse.h>
#include <tencentcloud/tia/v20180226/model/DeleteJobRequest.h>
#include <tencentcloud/tia/v20180226/model/DeleteJobResponse.h>
#include <tencentcloud/tia/v20180226/model/DeleteModelRequest.h>
#include <tencentcloud/tia/v20180226/model/DeleteModelResponse.h>
#include <tencentcloud/tia/v20180226/model/DescribeJobRequest.h>
#include <tencentcloud/tia/v20180226/model/DescribeJobResponse.h>
#include <tencentcloud/tia/v20180226/model/DescribeModelRequest.h>
#include <tencentcloud/tia/v20180226/model/DescribeModelResponse.h>
#include <tencentcloud/tia/v20180226/model/InstallAgentRequest.h>
#include <tencentcloud/tia/v20180226/model/InstallAgentResponse.h>
#include <tencentcloud/tia/v20180226/model/ListJobsRequest.h>
#include <tencentcloud/tia/v20180226/model/ListJobsResponse.h>
#include <tencentcloud/tia/v20180226/model/ListModelsRequest.h>
#include <tencentcloud/tia/v20180226/model/ListModelsResponse.h>
#include <tencentcloud/tia/v20180226/model/QueryLogsRequest.h>
#include <tencentcloud/tia/v20180226/model/QueryLogsResponse.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            class TiaClient : public AbstractClient
            {
            public:
                TiaClient(const Credential &credential, const std::string &region);
                TiaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateJobResponse> CreateJobOutcome;
                typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::CreateJobRequest&, CreateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelResponse> CreateModelOutcome;
                typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::CreateModelRequest&, CreateModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobResponse> DeleteJobOutcome;
                typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::DeleteJobRequest&, DeleteJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelResponse> DeleteModelOutcome;
                typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::DeleteModelRequest&, DeleteModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobResponse> DescribeJobOutcome;
                typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::DescribeJobRequest&, DescribeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelResponse> DescribeModelOutcome;
                typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::DescribeModelRequest&, DescribeModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallAgentResponse> InstallAgentOutcome;
                typedef std::future<InstallAgentOutcome> InstallAgentOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::InstallAgentRequest&, InstallAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ListJobsResponse> ListJobsOutcome;
                typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::ListJobsRequest&, ListJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListModelsResponse> ListModelsOutcome;
                typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::ListModelsRequest&, ListModelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListModelsAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryLogsResponse> QueryLogsOutcome;
                typedef std::future<QueryLogsOutcome> QueryLogsOutcomeCallable;
                typedef std::function<void(const TiaClient*, const Model::QueryLogsRequest&, QueryLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryLogsAsyncHandler;



                /**
                 *创建训练任务
                 * @param req CreateJobRequest
                 * @return CreateJobOutcome
                 */
                CreateJobOutcome CreateJob(const Model::CreateJobRequest &request);
                void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request);

                /**
                 *部署模型，用以对外提供服务。有两种部署模式：`无服务器模式` 和 `集群模式`。`无服务器模式` 下，模型文件被部署到无服务器云函数，即 [SCF](https://cloud.tencent.com/product/scf)，用户可以在其控制台上进一步操作。`集群模式` 下，模型文件被部署到 TI-A 的计算集群中。
                 * @param req CreateModelRequest
                 * @return CreateModelOutcome
                 */
                CreateModelOutcome CreateModel(const Model::CreateModelRequest &request);
                void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request);

                /**
                 *删除训练任务
                 * @param req DeleteJobRequest
                 * @return DeleteJobOutcome
                 */
                DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest &request);
                void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request);

                /**
                 *删除指定的部署模型。模型有两种部署模式：`无服务器模式` 和 `集群模式`。`无服务器模式` 下，模型文件被部署到无服务器云函数，即 [SCF](https://cloud.tencent.com/product/scf)，用户可以在其控制台上进一步操作。`集群模式` 下，模型文件被部署到 TI-A 的计算集群中。
                 * @param req DeleteModelRequest
                 * @return DeleteModelOutcome
                 */
                DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest &request);
                void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request);

                /**
                 *获取训练任务详情
                 * @param req DescribeJobRequest
                 * @return DescribeJobOutcome
                 */
                DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest &request);
                void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request);

                /**
                 *描述已经部署的某个模型。而模型部署有两种模式：`无服务器模式` 和 `集群模式`。`无服务器模式` 下，模型文件被部署到无服务器云函数，即 [SCF](https://cloud.tencent.com/product/scf)，用户可以在其控制台上进一步操作。`集群模式` 下，模型文件被部署到 TI-A 的计算集群中。
                 * @param req DescribeModelRequest
                 * @return DescribeModelOutcome
                 */
                DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest &request);
                void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request);

                /**
                 *安装agent
                 * @param req InstallAgentRequest
                 * @return InstallAgentOutcome
                 */
                InstallAgentOutcome InstallAgent(const Model::InstallAgentRequest &request);
                void InstallAgentAsync(const Model::InstallAgentRequest& request, const InstallAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallAgentOutcomeCallable InstallAgentCallable(const Model::InstallAgentRequest& request);

                /**
                 *列举训练任务
                 * @param req ListJobsRequest
                 * @return ListJobsOutcome
                 */
                ListJobsOutcome ListJobs(const Model::ListJobsRequest &request);
                void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request);

                /**
                 *用以列举已经部署的模型。而部署有两种模式：`无服务器模式` 和 `集群模式`。`无服务器模式` 下，模型文件被部署到无服务器云函数，即 [SCF](https://cloud.tencent.com/product/scf)，用户可以在其控制台上进一步操作。`集群模式` 下，模型文件被部署到 TI-A 的计算集群中。不同部署模式下的模型分开列出。
                 * @param req ListModelsRequest
                 * @return ListModelsOutcome
                 */
                ListModelsOutcome ListModels(const Model::ListModelsRequest &request);
                void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request);

                /**
                 *查询 TI-A 训练任务的日志
                 * @param req QueryLogsRequest
                 * @return QueryLogsOutcome
                 */
                QueryLogsOutcome QueryLogs(const Model::QueryLogsRequest &request);
                void QueryLogsAsync(const Model::QueryLogsRequest& request, const QueryLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryLogsOutcomeCallable QueryLogsCallable(const Model::QueryLogsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_TIACLIENT_H_
