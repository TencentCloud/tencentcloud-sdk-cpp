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

#ifndef TENCENTCLOUD_TIONE_V20191022_TIONECLIENT_H_
#define TENCENTCLOUD_TIONE_V20191022_TIONECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tione/v20191022/model/CreateCodeRepositoryRequest.h>
#include <tencentcloud/tione/v20191022/model/CreateCodeRepositoryResponse.h>
#include <tencentcloud/tione/v20191022/model/CreateNotebookInstanceRequest.h>
#include <tencentcloud/tione/v20191022/model/CreateNotebookInstanceResponse.h>
#include <tencentcloud/tione/v20191022/model/CreateNotebookLifecycleScriptRequest.h>
#include <tencentcloud/tione/v20191022/model/CreateNotebookLifecycleScriptResponse.h>
#include <tencentcloud/tione/v20191022/model/CreatePresignedNotebookInstanceUrlRequest.h>
#include <tencentcloud/tione/v20191022/model/CreatePresignedNotebookInstanceUrlResponse.h>
#include <tencentcloud/tione/v20191022/model/CreateTrainingJobRequest.h>
#include <tencentcloud/tione/v20191022/model/CreateTrainingJobResponse.h>
#include <tencentcloud/tione/v20191022/model/DeleteCodeRepositoryRequest.h>
#include <tencentcloud/tione/v20191022/model/DeleteCodeRepositoryResponse.h>
#include <tencentcloud/tione/v20191022/model/DeleteNotebookInstanceRequest.h>
#include <tencentcloud/tione/v20191022/model/DeleteNotebookInstanceResponse.h>
#include <tencentcloud/tione/v20191022/model/DeleteNotebookLifecycleScriptRequest.h>
#include <tencentcloud/tione/v20191022/model/DeleteNotebookLifecycleScriptResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeCodeRepositoriesRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeCodeRepositoriesResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeCodeRepositoryRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeCodeRepositoryResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookInstanceRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookInstanceResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookInstancesRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookInstancesResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptsRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptsResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookSummaryRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeNotebookSummaryResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeTrainingJobRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeTrainingJobResponse.h>
#include <tencentcloud/tione/v20191022/model/DescribeTrainingJobsRequest.h>
#include <tencentcloud/tione/v20191022/model/DescribeTrainingJobsResponse.h>
#include <tencentcloud/tione/v20191022/model/StartNotebookInstanceRequest.h>
#include <tencentcloud/tione/v20191022/model/StartNotebookInstanceResponse.h>
#include <tencentcloud/tione/v20191022/model/StopNotebookInstanceRequest.h>
#include <tencentcloud/tione/v20191022/model/StopNotebookInstanceResponse.h>
#include <tencentcloud/tione/v20191022/model/StopTrainingJobRequest.h>
#include <tencentcloud/tione/v20191022/model/StopTrainingJobResponse.h>
#include <tencentcloud/tione/v20191022/model/UpdateCodeRepositoryRequest.h>
#include <tencentcloud/tione/v20191022/model/UpdateCodeRepositoryResponse.h>
#include <tencentcloud/tione/v20191022/model/UpdateNotebookInstanceRequest.h>
#include <tencentcloud/tione/v20191022/model/UpdateNotebookInstanceResponse.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            class TioneClient : public AbstractClient
            {
            public:
                TioneClient(const Credential &credential, const std::string &region);
                TioneClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCodeRepositoryResponse> CreateCodeRepositoryOutcome;
                typedef std::future<CreateCodeRepositoryOutcome> CreateCodeRepositoryOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateCodeRepositoryRequest&, CreateCodeRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodeRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookInstanceResponse> CreateNotebookInstanceOutcome;
                typedef std::future<CreateNotebookInstanceOutcome> CreateNotebookInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateNotebookInstanceRequest&, CreateNotebookInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookLifecycleScriptResponse> CreateNotebookLifecycleScriptOutcome;
                typedef std::future<CreateNotebookLifecycleScriptOutcome> CreateNotebookLifecycleScriptOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateNotebookLifecycleScriptRequest&, CreateNotebookLifecycleScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookLifecycleScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePresignedNotebookInstanceUrlResponse> CreatePresignedNotebookInstanceUrlOutcome;
                typedef std::future<CreatePresignedNotebookInstanceUrlOutcome> CreatePresignedNotebookInstanceUrlOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreatePresignedNotebookInstanceUrlRequest&, CreatePresignedNotebookInstanceUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePresignedNotebookInstanceUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrainingJobResponse> CreateTrainingJobOutcome;
                typedef std::future<CreateTrainingJobOutcome> CreateTrainingJobOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateTrainingJobRequest&, CreateTrainingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCodeRepositoryResponse> DeleteCodeRepositoryOutcome;
                typedef std::future<DeleteCodeRepositoryOutcome> DeleteCodeRepositoryOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteCodeRepositoryRequest&, DeleteCodeRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCodeRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotebookInstanceResponse> DeleteNotebookInstanceOutcome;
                typedef std::future<DeleteNotebookInstanceOutcome> DeleteNotebookInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteNotebookInstanceRequest&, DeleteNotebookInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotebookInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotebookLifecycleScriptResponse> DeleteNotebookLifecycleScriptOutcome;
                typedef std::future<DeleteNotebookLifecycleScriptOutcome> DeleteNotebookLifecycleScriptOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteNotebookLifecycleScriptRequest&, DeleteNotebookLifecycleScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotebookLifecycleScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeRepositoriesResponse> DescribeCodeRepositoriesOutcome;
                typedef std::future<DescribeCodeRepositoriesOutcome> DescribeCodeRepositoriesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeCodeRepositoriesRequest&, DescribeCodeRepositoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeRepositoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeRepositoryResponse> DescribeCodeRepositoryOutcome;
                typedef std::future<DescribeCodeRepositoryOutcome> DescribeCodeRepositoryOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeCodeRepositoryRequest&, DescribeCodeRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookInstanceResponse> DescribeNotebookInstanceOutcome;
                typedef std::future<DescribeNotebookInstanceOutcome> DescribeNotebookInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookInstanceRequest&, DescribeNotebookInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookInstancesResponse> DescribeNotebookInstancesOutcome;
                typedef std::future<DescribeNotebookInstancesOutcome> DescribeNotebookInstancesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookInstancesRequest&, DescribeNotebookInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookLifecycleScriptResponse> DescribeNotebookLifecycleScriptOutcome;
                typedef std::future<DescribeNotebookLifecycleScriptOutcome> DescribeNotebookLifecycleScriptOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookLifecycleScriptRequest&, DescribeNotebookLifecycleScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookLifecycleScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookLifecycleScriptsResponse> DescribeNotebookLifecycleScriptsOutcome;
                typedef std::future<DescribeNotebookLifecycleScriptsOutcome> DescribeNotebookLifecycleScriptsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookLifecycleScriptsRequest&, DescribeNotebookLifecycleScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookLifecycleScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSummaryResponse> DescribeNotebookSummaryOutcome;
                typedef std::future<DescribeNotebookSummaryOutcome> DescribeNotebookSummaryOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookSummaryRequest&, DescribeNotebookSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingJobResponse> DescribeTrainingJobOutcome;
                typedef std::future<DescribeTrainingJobOutcome> DescribeTrainingJobOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingJobRequest&, DescribeTrainingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingJobsResponse> DescribeTrainingJobsOutcome;
                typedef std::future<DescribeTrainingJobsOutcome> DescribeTrainingJobsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingJobsRequest&, DescribeTrainingJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::StartNotebookInstanceResponse> StartNotebookInstanceOutcome;
                typedef std::future<StartNotebookInstanceOutcome> StartNotebookInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StartNotebookInstanceRequest&, StartNotebookInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartNotebookInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopNotebookInstanceResponse> StopNotebookInstanceOutcome;
                typedef std::future<StopNotebookInstanceOutcome> StopNotebookInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopNotebookInstanceRequest&, StopNotebookInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopNotebookInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTrainingJobResponse> StopTrainingJobOutcome;
                typedef std::future<StopTrainingJobOutcome> StopTrainingJobOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopTrainingJobRequest&, StopTrainingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTrainingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCodeRepositoryResponse> UpdateCodeRepositoryOutcome;
                typedef std::future<UpdateCodeRepositoryOutcome> UpdateCodeRepositoryOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::UpdateCodeRepositoryRequest&, UpdateCodeRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCodeRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateNotebookInstanceResponse> UpdateNotebookInstanceOutcome;
                typedef std::future<UpdateNotebookInstanceOutcome> UpdateNotebookInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::UpdateNotebookInstanceRequest&, UpdateNotebookInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNotebookInstanceAsyncHandler;



                /**
                 *创建存储库
                 * @param req CreateCodeRepositoryRequest
                 * @return CreateCodeRepositoryOutcome
                 */
                CreateCodeRepositoryOutcome CreateCodeRepository(const Model::CreateCodeRepositoryRequest &request);
                void CreateCodeRepositoryAsync(const Model::CreateCodeRepositoryRequest& request, const CreateCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodeRepositoryOutcomeCallable CreateCodeRepositoryCallable(const Model::CreateCodeRepositoryRequest& request);

                /**
                 *创建Notebook实例
                 * @param req CreateNotebookInstanceRequest
                 * @return CreateNotebookInstanceOutcome
                 */
                CreateNotebookInstanceOutcome CreateNotebookInstance(const Model::CreateNotebookInstanceRequest &request);
                void CreateNotebookInstanceAsync(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookInstanceOutcomeCallable CreateNotebookInstanceCallable(const Model::CreateNotebookInstanceRequest& request);

                /**
                 *创建Notebook生命周期脚本
                 * @param req CreateNotebookLifecycleScriptRequest
                 * @return CreateNotebookLifecycleScriptOutcome
                 */
                CreateNotebookLifecycleScriptOutcome CreateNotebookLifecycleScript(const Model::CreateNotebookLifecycleScriptRequest &request);
                void CreateNotebookLifecycleScriptAsync(const Model::CreateNotebookLifecycleScriptRequest& request, const CreateNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookLifecycleScriptOutcomeCallable CreateNotebookLifecycleScriptCallable(const Model::CreateNotebookLifecycleScriptRequest& request);

                /**
                 *创建Notebook授权Url
                 * @param req CreatePresignedNotebookInstanceUrlRequest
                 * @return CreatePresignedNotebookInstanceUrlOutcome
                 */
                CreatePresignedNotebookInstanceUrlOutcome CreatePresignedNotebookInstanceUrl(const Model::CreatePresignedNotebookInstanceUrlRequest &request);
                void CreatePresignedNotebookInstanceUrlAsync(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePresignedNotebookInstanceUrlOutcomeCallable CreatePresignedNotebookInstanceUrlCallable(const Model::CreatePresignedNotebookInstanceUrlRequest& request);

                /**
                 *创建训练任务
                 * @param req CreateTrainingJobRequest
                 * @return CreateTrainingJobOutcome
                 */
                CreateTrainingJobOutcome CreateTrainingJob(const Model::CreateTrainingJobRequest &request);
                void CreateTrainingJobAsync(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrainingJobOutcomeCallable CreateTrainingJobCallable(const Model::CreateTrainingJobRequest& request);

                /**
                 *删除存储库
                 * @param req DeleteCodeRepositoryRequest
                 * @return DeleteCodeRepositoryOutcome
                 */
                DeleteCodeRepositoryOutcome DeleteCodeRepository(const Model::DeleteCodeRepositoryRequest &request);
                void DeleteCodeRepositoryAsync(const Model::DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCodeRepositoryOutcomeCallable DeleteCodeRepositoryCallable(const Model::DeleteCodeRepositoryRequest& request);

                /**
                 *删除notebook实例
                 * @param req DeleteNotebookInstanceRequest
                 * @return DeleteNotebookInstanceOutcome
                 */
                DeleteNotebookInstanceOutcome DeleteNotebookInstance(const Model::DeleteNotebookInstanceRequest &request);
                void DeleteNotebookInstanceAsync(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotebookInstanceOutcomeCallable DeleteNotebookInstanceCallable(const Model::DeleteNotebookInstanceRequest& request);

                /**
                 *删除Notebook生命周期脚本
                 * @param req DeleteNotebookLifecycleScriptRequest
                 * @return DeleteNotebookLifecycleScriptOutcome
                 */
                DeleteNotebookLifecycleScriptOutcome DeleteNotebookLifecycleScript(const Model::DeleteNotebookLifecycleScriptRequest &request);
                void DeleteNotebookLifecycleScriptAsync(const Model::DeleteNotebookLifecycleScriptRequest& request, const DeleteNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotebookLifecycleScriptOutcomeCallable DeleteNotebookLifecycleScriptCallable(const Model::DeleteNotebookLifecycleScriptRequest& request);

                /**
                 *查询存储库列表
                 * @param req DescribeCodeRepositoriesRequest
                 * @return DescribeCodeRepositoriesOutcome
                 */
                DescribeCodeRepositoriesOutcome DescribeCodeRepositories(const Model::DescribeCodeRepositoriesRequest &request);
                void DescribeCodeRepositoriesAsync(const Model::DescribeCodeRepositoriesRequest& request, const DescribeCodeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeRepositoriesOutcomeCallable DescribeCodeRepositoriesCallable(const Model::DescribeCodeRepositoriesRequest& request);

                /**
                 *查询存储库详情
                 * @param req DescribeCodeRepositoryRequest
                 * @return DescribeCodeRepositoryOutcome
                 */
                DescribeCodeRepositoryOutcome DescribeCodeRepository(const Model::DescribeCodeRepositoryRequest &request);
                void DescribeCodeRepositoryAsync(const Model::DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeRepositoryOutcomeCallable DescribeCodeRepositoryCallable(const Model::DescribeCodeRepositoryRequest& request);

                /**
                 *查询Notebook实例详情
                 * @param req DescribeNotebookInstanceRequest
                 * @return DescribeNotebookInstanceOutcome
                 */
                DescribeNotebookInstanceOutcome DescribeNotebookInstance(const Model::DescribeNotebookInstanceRequest &request);
                void DescribeNotebookInstanceAsync(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookInstanceOutcomeCallable DescribeNotebookInstanceCallable(const Model::DescribeNotebookInstanceRequest& request);

                /**
                 *查询Notebook实例列表
                 * @param req DescribeNotebookInstancesRequest
                 * @return DescribeNotebookInstancesOutcome
                 */
                DescribeNotebookInstancesOutcome DescribeNotebookInstances(const Model::DescribeNotebookInstancesRequest &request);
                void DescribeNotebookInstancesAsync(const Model::DescribeNotebookInstancesRequest& request, const DescribeNotebookInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookInstancesOutcomeCallable DescribeNotebookInstancesCallable(const Model::DescribeNotebookInstancesRequest& request);

                /**
                 *查看notebook生命周期脚本详情
                 * @param req DescribeNotebookLifecycleScriptRequest
                 * @return DescribeNotebookLifecycleScriptOutcome
                 */
                DescribeNotebookLifecycleScriptOutcome DescribeNotebookLifecycleScript(const Model::DescribeNotebookLifecycleScriptRequest &request);
                void DescribeNotebookLifecycleScriptAsync(const Model::DescribeNotebookLifecycleScriptRequest& request, const DescribeNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookLifecycleScriptOutcomeCallable DescribeNotebookLifecycleScriptCallable(const Model::DescribeNotebookLifecycleScriptRequest& request);

                /**
                 *查看notebook生命周期脚本列表
                 * @param req DescribeNotebookLifecycleScriptsRequest
                 * @return DescribeNotebookLifecycleScriptsOutcome
                 */
                DescribeNotebookLifecycleScriptsOutcome DescribeNotebookLifecycleScripts(const Model::DescribeNotebookLifecycleScriptsRequest &request);
                void DescribeNotebookLifecycleScriptsAsync(const Model::DescribeNotebookLifecycleScriptsRequest& request, const DescribeNotebookLifecycleScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookLifecycleScriptsOutcomeCallable DescribeNotebookLifecycleScriptsCallable(const Model::DescribeNotebookLifecycleScriptsRequest& request);

                /**
                 *查询Notebook概览数据
                 * @param req DescribeNotebookSummaryRequest
                 * @return DescribeNotebookSummaryOutcome
                 */
                DescribeNotebookSummaryOutcome DescribeNotebookSummary(const Model::DescribeNotebookSummaryRequest &request);
                void DescribeNotebookSummaryAsync(const Model::DescribeNotebookSummaryRequest& request, const DescribeNotebookSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSummaryOutcomeCallable DescribeNotebookSummaryCallable(const Model::DescribeNotebookSummaryRequest& request);

                /**
                 *查询训练任务
                 * @param req DescribeTrainingJobRequest
                 * @return DescribeTrainingJobOutcome
                 */
                DescribeTrainingJobOutcome DescribeTrainingJob(const Model::DescribeTrainingJobRequest &request);
                void DescribeTrainingJobAsync(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingJobOutcomeCallable DescribeTrainingJobCallable(const Model::DescribeTrainingJobRequest& request);

                /**
                 *查询训练任务列表
                 * @param req DescribeTrainingJobsRequest
                 * @return DescribeTrainingJobsOutcome
                 */
                DescribeTrainingJobsOutcome DescribeTrainingJobs(const Model::DescribeTrainingJobsRequest &request);
                void DescribeTrainingJobsAsync(const Model::DescribeTrainingJobsRequest& request, const DescribeTrainingJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingJobsOutcomeCallable DescribeTrainingJobsCallable(const Model::DescribeTrainingJobsRequest& request);

                /**
                 *启动Notebook实例
                 * @param req StartNotebookInstanceRequest
                 * @return StartNotebookInstanceOutcome
                 */
                StartNotebookInstanceOutcome StartNotebookInstance(const Model::StartNotebookInstanceRequest &request);
                void StartNotebookInstanceAsync(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartNotebookInstanceOutcomeCallable StartNotebookInstanceCallable(const Model::StartNotebookInstanceRequest& request);

                /**
                 *停止Notebook实例
                 * @param req StopNotebookInstanceRequest
                 * @return StopNotebookInstanceOutcome
                 */
                StopNotebookInstanceOutcome StopNotebookInstance(const Model::StopNotebookInstanceRequest &request);
                void StopNotebookInstanceAsync(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopNotebookInstanceOutcomeCallable StopNotebookInstanceCallable(const Model::StopNotebookInstanceRequest& request);

                /**
                 *停止训练任务
                 * @param req StopTrainingJobRequest
                 * @return StopTrainingJobOutcome
                 */
                StopTrainingJobOutcome StopTrainingJob(const Model::StopTrainingJobRequest &request);
                void StopTrainingJobAsync(const Model::StopTrainingJobRequest& request, const StopTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTrainingJobOutcomeCallable StopTrainingJobCallable(const Model::StopTrainingJobRequest& request);

                /**
                 *更新存储库
                 * @param req UpdateCodeRepositoryRequest
                 * @return UpdateCodeRepositoryOutcome
                 */
                UpdateCodeRepositoryOutcome UpdateCodeRepository(const Model::UpdateCodeRepositoryRequest &request);
                void UpdateCodeRepositoryAsync(const Model::UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCodeRepositoryOutcomeCallable UpdateCodeRepositoryCallable(const Model::UpdateCodeRepositoryRequest& request);

                /**
                 *更新Notebook实例
                 * @param req UpdateNotebookInstanceRequest
                 * @return UpdateNotebookInstanceOutcome
                 */
                UpdateNotebookInstanceOutcome UpdateNotebookInstance(const Model::UpdateNotebookInstanceRequest &request);
                void UpdateNotebookInstanceAsync(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateNotebookInstanceOutcomeCallable UpdateNotebookInstanceCallable(const Model::UpdateNotebookInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_TIONECLIENT_H_
