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

#ifndef TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_
#define TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/batch/v20170312/model/CreateComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/CreateComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/CreateCpmComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/CreateCpmComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/CreateTaskTemplateRequest.h>
#include <tencentcloud/batch/v20170312/model/CreateTaskTemplateResponse.h>
#include <tencentcloud/batch/v20170312/model/DeleteComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/DeleteComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/DeleteJobRequest.h>
#include <tencentcloud/batch/v20170312/model/DeleteJobResponse.h>
#include <tencentcloud/batch/v20170312/model/DeleteTaskTemplatesRequest.h>
#include <tencentcloud/batch/v20170312/model/DeleteTaskTemplatesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvActivitiesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvActivitiesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfosRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfosResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvsRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvsResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeCpmOsInfoRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeCpmOsInfoResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobsRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobsResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskLogsRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskLogsResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskTemplatesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskTemplatesResponse.h>
#include <tencentcloud/batch/v20170312/model/ModifyComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/ModifyComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/ModifyTaskTemplateRequest.h>
#include <tencentcloud/batch/v20170312/model/ModifyTaskTemplateResponse.h>
#include <tencentcloud/batch/v20170312/model/RetryJobsRequest.h>
#include <tencentcloud/batch/v20170312/model/RetryJobsResponse.h>
#include <tencentcloud/batch/v20170312/model/SubmitJobRequest.h>
#include <tencentcloud/batch/v20170312/model/SubmitJobResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodeRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodeResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodesRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodesResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateJobRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateJobResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateTaskInstanceRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateTaskInstanceResponse.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            class BatchClient : public AbstractClient
            {
            public:
                BatchClient(const Credential &credential, const std::string &region);
                BatchClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateComputeEnvResponse> CreateComputeEnvOutcome;
                typedef std::future<CreateComputeEnvOutcome> CreateComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::CreateComputeEnvRequest&, CreateComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComputeEnvAsyncHandler;
                typedef Outcome<Error, Model::CreateCpmComputeEnvResponse> CreateCpmComputeEnvOutcome;
                typedef std::future<CreateCpmComputeEnvOutcome> CreateCpmComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::CreateCpmComputeEnvRequest&, CreateCpmComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCpmComputeEnvAsyncHandler;
                typedef Outcome<Error, Model::CreateTaskTemplateResponse> CreateTaskTemplateOutcome;
                typedef std::future<CreateTaskTemplateOutcome> CreateTaskTemplateOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::CreateTaskTemplateRequest&, CreateTaskTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteComputeEnvResponse> DeleteComputeEnvOutcome;
                typedef std::future<DeleteComputeEnvOutcome> DeleteComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DeleteComputeEnvRequest&, DeleteComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteComputeEnvAsyncHandler;
                typedef Outcome<Error, Model::DeleteJobResponse> DeleteJobOutcome;
                typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DeleteJobRequest&, DeleteJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
                typedef Outcome<Error, Model::DeleteTaskTemplatesResponse> DeleteTaskTemplatesOutcome;
                typedef std::future<DeleteTaskTemplatesOutcome> DeleteTaskTemplatesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DeleteTaskTemplatesRequest&, DeleteTaskTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAvailableCvmInstanceTypesResponse> DescribeAvailableCvmInstanceTypesOutcome;
                typedef std::future<DescribeAvailableCvmInstanceTypesOutcome> DescribeAvailableCvmInstanceTypesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeAvailableCvmInstanceTypesRequest&, DescribeAvailableCvmInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCvmInstanceTypesAsyncHandler;
                typedef Outcome<Error, Model::DescribeComputeEnvResponse> DescribeComputeEnvOutcome;
                typedef std::future<DescribeComputeEnvOutcome> DescribeComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvRequest&, DescribeComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvAsyncHandler;
                typedef Outcome<Error, Model::DescribeComputeEnvActivitiesResponse> DescribeComputeEnvActivitiesOutcome;
                typedef std::future<DescribeComputeEnvActivitiesOutcome> DescribeComputeEnvActivitiesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvActivitiesRequest&, DescribeComputeEnvActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvActivitiesAsyncHandler;
                typedef Outcome<Error, Model::DescribeComputeEnvCreateInfoResponse> DescribeComputeEnvCreateInfoOutcome;
                typedef std::future<DescribeComputeEnvCreateInfoOutcome> DescribeComputeEnvCreateInfoOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvCreateInfoRequest&, DescribeComputeEnvCreateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvCreateInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeComputeEnvCreateInfosResponse> DescribeComputeEnvCreateInfosOutcome;
                typedef std::future<DescribeComputeEnvCreateInfosOutcome> DescribeComputeEnvCreateInfosOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvCreateInfosRequest&, DescribeComputeEnvCreateInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvCreateInfosAsyncHandler;
                typedef Outcome<Error, Model::DescribeComputeEnvsResponse> DescribeComputeEnvsOutcome;
                typedef std::future<DescribeComputeEnvsOutcome> DescribeComputeEnvsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvsRequest&, DescribeComputeEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCpmOsInfoResponse> DescribeCpmOsInfoOutcome;
                typedef std::future<DescribeCpmOsInfoOutcome> DescribeCpmOsInfoOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeCpmOsInfoRequest&, DescribeCpmOsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCpmOsInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeCvmZoneInstanceConfigInfosResponse> DescribeCvmZoneInstanceConfigInfosOutcome;
                typedef std::future<DescribeCvmZoneInstanceConfigInfosOutcome> DescribeCvmZoneInstanceConfigInfosOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeCvmZoneInstanceConfigInfosRequest&, DescribeCvmZoneInstanceConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCvmZoneInstanceConfigInfosAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceCategoriesResponse> DescribeInstanceCategoriesOutcome;
                typedef std::future<DescribeInstanceCategoriesOutcome> DescribeInstanceCategoriesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeInstanceCategoriesRequest&, DescribeInstanceCategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCategoriesAsyncHandler;
                typedef Outcome<Error, Model::DescribeJobResponse> DescribeJobOutcome;
                typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeJobRequest&, DescribeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeJobSubmitInfoResponse> DescribeJobSubmitInfoOutcome;
                typedef std::future<DescribeJobSubmitInfoOutcome> DescribeJobSubmitInfoOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeJobSubmitInfoRequest&, DescribeJobSubmitInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobSubmitInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskLogsResponse> DescribeTaskLogsOutcome;
                typedef std::future<DescribeTaskLogsOutcome> DescribeTaskLogsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeTaskLogsRequest&, DescribeTaskLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskTemplatesResponse> DescribeTaskTemplatesOutcome;
                typedef std::future<DescribeTaskTemplatesOutcome> DescribeTaskTemplatesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeTaskTemplatesRequest&, DescribeTaskTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskTemplatesAsyncHandler;
                typedef Outcome<Error, Model::ModifyComputeEnvResponse> ModifyComputeEnvOutcome;
                typedef std::future<ModifyComputeEnvOutcome> ModifyComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::ModifyComputeEnvRequest&, ModifyComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyComputeEnvAsyncHandler;
                typedef Outcome<Error, Model::ModifyTaskTemplateResponse> ModifyTaskTemplateOutcome;
                typedef std::future<ModifyTaskTemplateOutcome> ModifyTaskTemplateOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::ModifyTaskTemplateRequest&, ModifyTaskTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskTemplateAsyncHandler;
                typedef Outcome<Error, Model::RetryJobsResponse> RetryJobsOutcome;
                typedef std::future<RetryJobsOutcome> RetryJobsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::RetryJobsRequest&, RetryJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryJobsAsyncHandler;
                typedef Outcome<Error, Model::SubmitJobResponse> SubmitJobOutcome;
                typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::SubmitJobRequest&, SubmitJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobAsyncHandler;
                typedef Outcome<Error, Model::TerminateComputeNodeResponse> TerminateComputeNodeOutcome;
                typedef std::future<TerminateComputeNodeOutcome> TerminateComputeNodeOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateComputeNodeRequest&, TerminateComputeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateComputeNodeAsyncHandler;
                typedef Outcome<Error, Model::TerminateComputeNodesResponse> TerminateComputeNodesOutcome;
                typedef std::future<TerminateComputeNodesOutcome> TerminateComputeNodesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateComputeNodesRequest&, TerminateComputeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateComputeNodesAsyncHandler;
                typedef Outcome<Error, Model::TerminateJobResponse> TerminateJobOutcome;
                typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateJobRequest&, TerminateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateJobAsyncHandler;
                typedef Outcome<Error, Model::TerminateTaskInstanceResponse> TerminateTaskInstanceOutcome;
                typedef std::future<TerminateTaskInstanceOutcome> TerminateTaskInstanceOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateTaskInstanceRequest&, TerminateTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTaskInstanceAsyncHandler;



                /**
                 *用于创建计算环境
                 * @param req CreateComputeEnvRequest
                 * @return CreateComputeEnvOutcome
                 */
                CreateComputeEnvOutcome CreateComputeEnv(const Model::CreateComputeEnvRequest &request);
                void CreateComputeEnvAsync(const Model::CreateComputeEnvRequest& request, const CreateComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComputeEnvOutcomeCallable CreateComputeEnvCallable(const Model::CreateComputeEnvRequest& request);

                /**
                 *创建黑石计算环境
                 * @param req CreateCpmComputeEnvRequest
                 * @return CreateCpmComputeEnvOutcome
                 */
                CreateCpmComputeEnvOutcome CreateCpmComputeEnv(const Model::CreateCpmComputeEnvRequest &request);
                void CreateCpmComputeEnvAsync(const Model::CreateCpmComputeEnvRequest& request, const CreateCpmComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCpmComputeEnvOutcomeCallable CreateCpmComputeEnvCallable(const Model::CreateCpmComputeEnvRequest& request);

                /**
                 *用于创建任务模板
                 * @param req CreateTaskTemplateRequest
                 * @return CreateTaskTemplateOutcome
                 */
                CreateTaskTemplateOutcome CreateTaskTemplate(const Model::CreateTaskTemplateRequest &request);
                void CreateTaskTemplateAsync(const Model::CreateTaskTemplateRequest& request, const CreateTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskTemplateOutcomeCallable CreateTaskTemplateCallable(const Model::CreateTaskTemplateRequest& request);

                /**
                 *用于删除计算环境
                 * @param req DeleteComputeEnvRequest
                 * @return DeleteComputeEnvOutcome
                 */
                DeleteComputeEnvOutcome DeleteComputeEnv(const Model::DeleteComputeEnvRequest &request);
                void DeleteComputeEnvAsync(const Model::DeleteComputeEnvRequest& request, const DeleteComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteComputeEnvOutcomeCallable DeleteComputeEnvCallable(const Model::DeleteComputeEnvRequest& request);

                /**
                 *用于删除作业记录。
删除作业的效果相当于删除作业相关的所有信息。删除成功后，作业相关的所有信息都无法查询。
待删除的作业必须处于完结状态，且其内部包含的所有任务实例也必须处于完结状态，否则会禁止操作。完结状态，是指处于 SUCCEED 或 FAILED 状态。
                 * @param req DeleteJobRequest
                 * @return DeleteJobOutcome
                 */
                DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest &request);
                void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request);

                /**
                 *用于删除任务模板信息
                 * @param req DeleteTaskTemplatesRequest
                 * @return DeleteTaskTemplatesOutcome
                 */
                DeleteTaskTemplatesOutcome DeleteTaskTemplates(const Model::DeleteTaskTemplatesRequest &request);
                void DeleteTaskTemplatesAsync(const Model::DeleteTaskTemplatesRequest& request, const DeleteTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskTemplatesOutcomeCallable DeleteTaskTemplatesCallable(const Model::DeleteTaskTemplatesRequest& request);

                /**
                 *查看可用的CVM机型配置信息
                 * @param req DescribeAvailableCvmInstanceTypesRequest
                 * @return DescribeAvailableCvmInstanceTypesOutcome
                 */
                DescribeAvailableCvmInstanceTypesOutcome DescribeAvailableCvmInstanceTypes(const Model::DescribeAvailableCvmInstanceTypesRequest &request);
                void DescribeAvailableCvmInstanceTypesAsync(const Model::DescribeAvailableCvmInstanceTypesRequest& request, const DescribeAvailableCvmInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableCvmInstanceTypesOutcomeCallable DescribeAvailableCvmInstanceTypesCallable(const Model::DescribeAvailableCvmInstanceTypesRequest& request);

                /**
                 *用于查询计算环境的详细信息
                 * @param req DescribeComputeEnvRequest
                 * @return DescribeComputeEnvOutcome
                 */
                DescribeComputeEnvOutcome DescribeComputeEnv(const Model::DescribeComputeEnvRequest &request);
                void DescribeComputeEnvAsync(const Model::DescribeComputeEnvRequest& request, const DescribeComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvOutcomeCallable DescribeComputeEnvCallable(const Model::DescribeComputeEnvRequest& request);

                /**
                 *用于查询计算环境的活动信息
                 * @param req DescribeComputeEnvActivitiesRequest
                 * @return DescribeComputeEnvActivitiesOutcome
                 */
                DescribeComputeEnvActivitiesOutcome DescribeComputeEnvActivities(const Model::DescribeComputeEnvActivitiesRequest &request);
                void DescribeComputeEnvActivitiesAsync(const Model::DescribeComputeEnvActivitiesRequest& request, const DescribeComputeEnvActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvActivitiesOutcomeCallable DescribeComputeEnvActivitiesCallable(const Model::DescribeComputeEnvActivitiesRequest& request);

                /**
                 *查看计算环境的创建信息。
                 * @param req DescribeComputeEnvCreateInfoRequest
                 * @return DescribeComputeEnvCreateInfoOutcome
                 */
                DescribeComputeEnvCreateInfoOutcome DescribeComputeEnvCreateInfo(const Model::DescribeComputeEnvCreateInfoRequest &request);
                void DescribeComputeEnvCreateInfoAsync(const Model::DescribeComputeEnvCreateInfoRequest& request, const DescribeComputeEnvCreateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvCreateInfoOutcomeCallable DescribeComputeEnvCreateInfoCallable(const Model::DescribeComputeEnvCreateInfoRequest& request);

                /**
                 *用于查看计算环境创建信息列表，包括名称、描述、类型、环境参数、通知及期望节点数等。
                 * @param req DescribeComputeEnvCreateInfosRequest
                 * @return DescribeComputeEnvCreateInfosOutcome
                 */
                DescribeComputeEnvCreateInfosOutcome DescribeComputeEnvCreateInfos(const Model::DescribeComputeEnvCreateInfosRequest &request);
                void DescribeComputeEnvCreateInfosAsync(const Model::DescribeComputeEnvCreateInfosRequest& request, const DescribeComputeEnvCreateInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvCreateInfosOutcomeCallable DescribeComputeEnvCreateInfosCallable(const Model::DescribeComputeEnvCreateInfosRequest& request);

                /**
                 *用于查看计算环境列表
                 * @param req DescribeComputeEnvsRequest
                 * @return DescribeComputeEnvsOutcome
                 */
                DescribeComputeEnvsOutcome DescribeComputeEnvs(const Model::DescribeComputeEnvsRequest &request);
                void DescribeComputeEnvsAsync(const Model::DescribeComputeEnvsRequest& request, const DescribeComputeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvsOutcomeCallable DescribeComputeEnvsCallable(const Model::DescribeComputeEnvsRequest& request);

                /**
                 *创建黑石计算环境时，查询批量计算环境支持的黑石操作系统信息
                 * @param req DescribeCpmOsInfoRequest
                 * @return DescribeCpmOsInfoOutcome
                 */
                DescribeCpmOsInfoOutcome DescribeCpmOsInfo(const Model::DescribeCpmOsInfoRequest &request);
                void DescribeCpmOsInfoAsync(const Model::DescribeCpmOsInfoRequest& request, const DescribeCpmOsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCpmOsInfoOutcomeCallable DescribeCpmOsInfoCallable(const Model::DescribeCpmOsInfoRequest& request);

                /**
                 *获取批量计算可用区机型配置信息
                 * @param req DescribeCvmZoneInstanceConfigInfosRequest
                 * @return DescribeCvmZoneInstanceConfigInfosOutcome
                 */
                DescribeCvmZoneInstanceConfigInfosOutcome DescribeCvmZoneInstanceConfigInfos(const Model::DescribeCvmZoneInstanceConfigInfosRequest &request);
                void DescribeCvmZoneInstanceConfigInfosAsync(const Model::DescribeCvmZoneInstanceConfigInfosRequest& request, const DescribeCvmZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCvmZoneInstanceConfigInfosOutcomeCallable DescribeCvmZoneInstanceConfigInfosCallable(const Model::DescribeCvmZoneInstanceConfigInfosRequest& request);

                /**
                 *目前对CVM现有实例族分类，每一类包含若干实例族。该接口用于查询实例分类信息。
                 * @param req DescribeInstanceCategoriesRequest
                 * @return DescribeInstanceCategoriesOutcome
                 */
                DescribeInstanceCategoriesOutcome DescribeInstanceCategories(const Model::DescribeInstanceCategoriesRequest &request);
                void DescribeInstanceCategoriesAsync(const Model::DescribeInstanceCategoriesRequest& request, const DescribeInstanceCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceCategoriesOutcomeCallable DescribeInstanceCategoriesCallable(const Model::DescribeInstanceCategoriesRequest& request);

                /**
                 *用于查看一个作业的详细信息，包括内部任务（Task）和依赖（Dependence）信息。
                 * @param req DescribeJobRequest
                 * @return DescribeJobOutcome
                 */
                DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest &request);
                void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request);

                /**
                 *用于查询指定作业的提交信息，其返回内容包括 JobId 和 SubmitJob 接口中作为输入参数的作业提交信息
                 * @param req DescribeJobSubmitInfoRequest
                 * @return DescribeJobSubmitInfoOutcome
                 */
                DescribeJobSubmitInfoOutcome DescribeJobSubmitInfo(const Model::DescribeJobSubmitInfoRequest &request);
                void DescribeJobSubmitInfoAsync(const Model::DescribeJobSubmitInfoRequest& request, const DescribeJobSubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobSubmitInfoOutcomeCallable DescribeJobSubmitInfoCallable(const Model::DescribeJobSubmitInfoRequest& request);

                /**
                 *用于查询若干个作业的概览信息
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *用于查询指定任务的详细信息，包括任务内部的任务实例信息。
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *用于获取任务多个实例标准输出和标准错误日志。
                 * @param req DescribeTaskLogsRequest
                 * @return DescribeTaskLogsOutcome
                 */
                DescribeTaskLogsOutcome DescribeTaskLogs(const Model::DescribeTaskLogsRequest &request);
                void DescribeTaskLogsAsync(const Model::DescribeTaskLogsRequest& request, const DescribeTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogsOutcomeCallable DescribeTaskLogsCallable(const Model::DescribeTaskLogsRequest& request);

                /**
                 *用于查询任务模板信息
                 * @param req DescribeTaskTemplatesRequest
                 * @return DescribeTaskTemplatesOutcome
                 */
                DescribeTaskTemplatesOutcome DescribeTaskTemplates(const Model::DescribeTaskTemplatesRequest &request);
                void DescribeTaskTemplatesAsync(const Model::DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskTemplatesOutcomeCallable DescribeTaskTemplatesCallable(const Model::DescribeTaskTemplatesRequest& request);

                /**
                 *用于修改计算环境属性
                 * @param req ModifyComputeEnvRequest
                 * @return ModifyComputeEnvOutcome
                 */
                ModifyComputeEnvOutcome ModifyComputeEnv(const Model::ModifyComputeEnvRequest &request);
                void ModifyComputeEnvAsync(const Model::ModifyComputeEnvRequest& request, const ModifyComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyComputeEnvOutcomeCallable ModifyComputeEnvCallable(const Model::ModifyComputeEnvRequest& request);

                /**
                 *用于修改任务模板
                 * @param req ModifyTaskTemplateRequest
                 * @return ModifyTaskTemplateOutcome
                 */
                ModifyTaskTemplateOutcome ModifyTaskTemplate(const Model::ModifyTaskTemplateRequest &request);
                void ModifyTaskTemplateAsync(const Model::ModifyTaskTemplateRequest& request, const ModifyTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskTemplateOutcomeCallable ModifyTaskTemplateCallable(const Model::ModifyTaskTemplateRequest& request);

                /**
                 *用于重试作业中失败的任务实例。
当且仅当作业处于“FAILED”状态，支持重试操作。重试操作成功后，作业会按照“DAG”中指定的任务依赖关系，依次重试各个任务中失败的任务实例。任务实例的历史信息将被重置，如同首次运行一样，参与后续的调度和执行。
                 * @param req RetryJobsRequest
                 * @return RetryJobsOutcome
                 */
                RetryJobsOutcome RetryJobs(const Model::RetryJobsRequest &request);
                void RetryJobsAsync(const Model::RetryJobsRequest& request, const RetryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryJobsOutcomeCallable RetryJobsCallable(const Model::RetryJobsRequest& request);

                /**
                 *用于提交一个作业
                 * @param req SubmitJobRequest
                 * @return SubmitJobOutcome
                 */
                SubmitJobOutcome SubmitJob(const Model::SubmitJobRequest &request);
                void SubmitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitJobOutcomeCallable SubmitJobCallable(const Model::SubmitJobRequest& request);

                /**
                 *用于销毁计算节点。
对于状态为CREATED、CREATION_FAILED、RUNNING和ABNORMAL的节点，允许销毁处理。
                 * @param req TerminateComputeNodeRequest
                 * @return TerminateComputeNodeOutcome
                 */
                TerminateComputeNodeOutcome TerminateComputeNode(const Model::TerminateComputeNodeRequest &request);
                void TerminateComputeNodeAsync(const Model::TerminateComputeNodeRequest& request, const TerminateComputeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateComputeNodeOutcomeCallable TerminateComputeNodeCallable(const Model::TerminateComputeNodeRequest& request);

                /**
                 *用于批量销毁计算节点，不允许重复销毁同一个节点。
                 * @param req TerminateComputeNodesRequest
                 * @return TerminateComputeNodesOutcome
                 */
                TerminateComputeNodesOutcome TerminateComputeNodes(const Model::TerminateComputeNodesRequest &request);
                void TerminateComputeNodesAsync(const Model::TerminateComputeNodesRequest& request, const TerminateComputeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateComputeNodesOutcomeCallable TerminateComputeNodesCallable(const Model::TerminateComputeNodesRequest& request);

                /**
                 *用于终止作业。
当作业处于“SUBMITTED”状态时，禁止终止操作；当作业处于“SUCCEED”状态时，终止操作不会生效。
终止作业是一个异步过程。整个终止过程的耗时和任务总数成正比。终止的效果相当于所含的所有任务实例进行TerminateTaskInstance操作。具体效果和用法可参考TerminateTaskInstance。
                 * @param req TerminateJobRequest
                 * @return TerminateJobOutcome
                 */
                TerminateJobOutcome TerminateJob(const Model::TerminateJobRequest &request);
                void TerminateJobAsync(const Model::TerminateJobRequest& request, const TerminateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateJobOutcomeCallable TerminateJobCallable(const Model::TerminateJobRequest& request);

                /**
                 *用于终止任务实例。
对于状态已经为“SUCCEED”和“FAILED”的任务实例，不做处理。
对于状态为“SUBMITTED”、“PENDING”、“RUNNABLE”的任务实例，状态将置为“FAILED”状态。
对于状态为“STARTING”、“RUNNING”、“FAILED_INTERRUPTED”的任务实例，分区两种情况：如果未显示指定计算环境，会先销毁CVM服务器，然后将状态置为“FAILED”，具有一定耗时；如果指定了计算环境EnvId，任务实例状态置为“FAILED”，并重启执行该任务的CVM服务器，具有一定的耗时。
对于状态为“FAILED_INTERRUPTED”的任务实例，终止操作实际成功之后，相关资源和配额才会释放。
                 * @param req TerminateTaskInstanceRequest
                 * @return TerminateTaskInstanceOutcome
                 */
                TerminateTaskInstanceOutcome TerminateTaskInstance(const Model::TerminateTaskInstanceRequest &request);
                void TerminateTaskInstanceAsync(const Model::TerminateTaskInstanceRequest& request, const TerminateTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTaskInstanceOutcomeCallable TerminateTaskInstanceCallable(const Model::TerminateTaskInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_
