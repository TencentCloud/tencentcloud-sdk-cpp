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

#ifndef TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_
#define TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tione/v20211111/model/CreateBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateDatasetRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateDatasetResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingModelRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingModelResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteDatasetRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteDatasetResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskInstancesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskInstancesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTasksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTasksResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsPriceRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsPriceResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailStructuredRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailStructuredResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailUnstructuredRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetDetailUnstructuredResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeInferTemplatesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeInferTemplatesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeLatestTrainingMetricsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeLatestTrainingMetricsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeLogsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeLogsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingFrameworksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingFrameworksResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingMetricsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingMetricsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskPodsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskPodsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTasksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTasksResponse.h>
#include <tencentcloud/tione/v20211111/model/PushTrainingMetricsRequest.h>
#include <tencentcloud/tione/v20211111/model/PushTrainingMetricsResponse.h>
#include <tencentcloud/tione/v20211111/model/StartTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StartTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StopBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StopTrainingTaskResponse.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            class TioneClient : public AbstractClient
            {
            public:
                TioneClient(const Credential &credential, const std::string &region);
                TioneClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateBatchTaskResponse> CreateBatchTaskOutcome;
                typedef std::future<CreateBatchTaskOutcome> CreateBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateBatchTaskRequest&, CreateBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasetResponse> CreateDatasetOutcome;
                typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateDatasetRequest&, CreateDatasetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrainingModelResponse> CreateTrainingModelOutcome;
                typedef std::future<CreateTrainingModelOutcome> CreateTrainingModelOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateTrainingModelRequest&, CreateTrainingModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainingModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrainingTaskResponse> CreateTrainingTaskOutcome;
                typedef std::future<CreateTrainingTaskOutcome> CreateTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateTrainingTaskRequest&, CreateTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBatchTaskResponse> DeleteBatchTaskOutcome;
                typedef std::future<DeleteBatchTaskOutcome> DeleteBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteBatchTaskRequest&, DeleteBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatasetResponse> DeleteDatasetOutcome;
                typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteDatasetRequest&, DeleteDatasetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingModelResponse> DeleteTrainingModelOutcome;
                typedef std::future<DeleteTrainingModelOutcome> DeleteTrainingModelOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingModelRequest&, DeleteTrainingModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingModelVersionResponse> DeleteTrainingModelVersionOutcome;
                typedef std::future<DeleteTrainingModelVersionOutcome> DeleteTrainingModelVersionOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingModelVersionRequest&, DeleteTrainingModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingTaskResponse> DeleteTrainingTaskOutcome;
                typedef std::future<DeleteTrainingTaskOutcome> DeleteTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingTaskRequest&, DeleteTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskResponse> DescribeBatchTaskOutcome;
                typedef std::future<DescribeBatchTaskOutcome> DescribeBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBatchTaskRequest&, DescribeBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskInstancesResponse> DescribeBatchTaskInstancesOutcome;
                typedef std::future<DescribeBatchTaskInstancesOutcome> DescribeBatchTaskInstancesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBatchTaskInstancesRequest&, DescribeBatchTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTasksResponse> DescribeBatchTasksOutcome;
                typedef std::future<DescribeBatchTasksOutcome> DescribeBatchTasksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBatchTasksRequest&, DescribeBatchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingResourceGroupsResponse> DescribeBillingResourceGroupsOutcome;
                typedef std::future<DescribeBillingResourceGroupsOutcome> DescribeBillingResourceGroupsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingResourceGroupsRequest&, DescribeBillingResourceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingResourceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingSpecsResponse> DescribeBillingSpecsOutcome;
                typedef std::future<DescribeBillingSpecsOutcome> DescribeBillingSpecsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingSpecsRequest&, DescribeBillingSpecsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingSpecsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingSpecsPriceResponse> DescribeBillingSpecsPriceOutcome;
                typedef std::future<DescribeBillingSpecsPriceOutcome> DescribeBillingSpecsPriceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingSpecsPriceRequest&, DescribeBillingSpecsPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingSpecsPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasetDetailStructuredResponse> DescribeDatasetDetailStructuredOutcome;
                typedef std::future<DescribeDatasetDetailStructuredOutcome> DescribeDatasetDetailStructuredOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeDatasetDetailStructuredRequest&, DescribeDatasetDetailStructuredOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetDetailStructuredAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasetDetailUnstructuredResponse> DescribeDatasetDetailUnstructuredOutcome;
                typedef std::future<DescribeDatasetDetailUnstructuredOutcome> DescribeDatasetDetailUnstructuredOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeDatasetDetailUnstructuredRequest&, DescribeDatasetDetailUnstructuredOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetDetailUnstructuredAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasetsResponse> DescribeDatasetsOutcome;
                typedef std::future<DescribeDatasetsOutcome> DescribeDatasetsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeDatasetsRequest&, DescribeDatasetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInferTemplatesResponse> DescribeInferTemplatesOutcome;
                typedef std::future<DescribeInferTemplatesOutcome> DescribeInferTemplatesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeInferTemplatesRequest&, DescribeInferTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInferTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLatestTrainingMetricsResponse> DescribeLatestTrainingMetricsOutcome;
                typedef std::future<DescribeLatestTrainingMetricsOutcome> DescribeLatestTrainingMetricsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeLatestTrainingMetricsRequest&, DescribeLatestTrainingMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestTrainingMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsResponse> DescribeLogsOutcome;
                typedef std::future<DescribeLogsOutcome> DescribeLogsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeLogsRequest&, DescribeLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingFrameworksResponse> DescribeTrainingFrameworksOutcome;
                typedef std::future<DescribeTrainingFrameworksOutcome> DescribeTrainingFrameworksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingFrameworksRequest&, DescribeTrainingFrameworksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingFrameworksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingMetricsResponse> DescribeTrainingMetricsOutcome;
                typedef std::future<DescribeTrainingMetricsOutcome> DescribeTrainingMetricsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingMetricsRequest&, DescribeTrainingMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingModelVersionResponse> DescribeTrainingModelVersionOutcome;
                typedef std::future<DescribeTrainingModelVersionOutcome> DescribeTrainingModelVersionOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingModelVersionRequest&, DescribeTrainingModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingModelVersionsResponse> DescribeTrainingModelVersionsOutcome;
                typedef std::future<DescribeTrainingModelVersionsOutcome> DescribeTrainingModelVersionsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingModelVersionsRequest&, DescribeTrainingModelVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingModelVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingModelsResponse> DescribeTrainingModelsOutcome;
                typedef std::future<DescribeTrainingModelsOutcome> DescribeTrainingModelsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingModelsRequest&, DescribeTrainingModelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingModelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTaskResponse> DescribeTrainingTaskOutcome;
                typedef std::future<DescribeTrainingTaskOutcome> DescribeTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTaskRequest&, DescribeTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTaskPodsResponse> DescribeTrainingTaskPodsOutcome;
                typedef std::future<DescribeTrainingTaskPodsOutcome> DescribeTrainingTaskPodsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTaskPodsRequest&, DescribeTrainingTaskPodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTaskPodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTasksResponse> DescribeTrainingTasksOutcome;
                typedef std::future<DescribeTrainingTasksOutcome> DescribeTrainingTasksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTasksRequest&, DescribeTrainingTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::PushTrainingMetricsResponse> PushTrainingMetricsOutcome;
                typedef std::future<PushTrainingMetricsOutcome> PushTrainingMetricsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::PushTrainingMetricsRequest&, PushTrainingMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushTrainingMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::StartTrainingTaskResponse> StartTrainingTaskOutcome;
                typedef std::future<StartTrainingTaskOutcome> StartTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StartTrainingTaskRequest&, StartTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBatchTaskResponse> StopBatchTaskOutcome;
                typedef std::future<StopBatchTaskOutcome> StopBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopBatchTaskRequest&, StopBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTrainingTaskResponse> StopTrainingTaskOutcome;
                typedef std::future<StopTrainingTaskOutcome> StopTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopTrainingTaskRequest&, StopTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTrainingTaskAsyncHandler;



                /**
                 *创建跑批任务
                 * @param req CreateBatchTaskRequest
                 * @return CreateBatchTaskOutcome
                 */
                CreateBatchTaskOutcome CreateBatchTask(const Model::CreateBatchTaskRequest &request);
                void CreateBatchTaskAsync(const Model::CreateBatchTaskRequest& request, const CreateBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchTaskOutcomeCallable CreateBatchTaskCallable(const Model::CreateBatchTaskRequest& request);

                /**
                 *创建数据集
                 * @param req CreateDatasetRequest
                 * @return CreateDatasetOutcome
                 */
                CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest &request);
                void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request);

                /**
                 *导入模型
                 * @param req CreateTrainingModelRequest
                 * @return CreateTrainingModelOutcome
                 */
                CreateTrainingModelOutcome CreateTrainingModel(const Model::CreateTrainingModelRequest &request);
                void CreateTrainingModelAsync(const Model::CreateTrainingModelRequest& request, const CreateTrainingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrainingModelOutcomeCallable CreateTrainingModelCallable(const Model::CreateTrainingModelRequest& request);

                /**
                 *创建模型训练任务
                 * @param req CreateTrainingTaskRequest
                 * @return CreateTrainingTaskOutcome
                 */
                CreateTrainingTaskOutcome CreateTrainingTask(const Model::CreateTrainingTaskRequest &request);
                void CreateTrainingTaskAsync(const Model::CreateTrainingTaskRequest& request, const CreateTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrainingTaskOutcomeCallable CreateTrainingTaskCallable(const Model::CreateTrainingTaskRequest& request);

                /**
                 *删除跑批任务
                 * @param req DeleteBatchTaskRequest
                 * @return DeleteBatchTaskOutcome
                 */
                DeleteBatchTaskOutcome DeleteBatchTask(const Model::DeleteBatchTaskRequest &request);
                void DeleteBatchTaskAsync(const Model::DeleteBatchTaskRequest& request, const DeleteBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBatchTaskOutcomeCallable DeleteBatchTaskCallable(const Model::DeleteBatchTaskRequest& request);

                /**
                 *删除数据集
                 * @param req DeleteDatasetRequest
                 * @return DeleteDatasetOutcome
                 */
                DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest &request);
                void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request);

                /**
                 *删除模型
                 * @param req DeleteTrainingModelRequest
                 * @return DeleteTrainingModelOutcome
                 */
                DeleteTrainingModelOutcome DeleteTrainingModel(const Model::DeleteTrainingModelRequest &request);
                void DeleteTrainingModelAsync(const Model::DeleteTrainingModelRequest& request, const DeleteTrainingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrainingModelOutcomeCallable DeleteTrainingModelCallable(const Model::DeleteTrainingModelRequest& request);

                /**
                 *删除模型版本
                 * @param req DeleteTrainingModelVersionRequest
                 * @return DeleteTrainingModelVersionOutcome
                 */
                DeleteTrainingModelVersionOutcome DeleteTrainingModelVersion(const Model::DeleteTrainingModelVersionRequest &request);
                void DeleteTrainingModelVersionAsync(const Model::DeleteTrainingModelVersionRequest& request, const DeleteTrainingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrainingModelVersionOutcomeCallable DeleteTrainingModelVersionCallable(const Model::DeleteTrainingModelVersionRequest& request);

                /**
                 *删除训练任务
                 * @param req DeleteTrainingTaskRequest
                 * @return DeleteTrainingTaskOutcome
                 */
                DeleteTrainingTaskOutcome DeleteTrainingTask(const Model::DeleteTrainingTaskRequest &request);
                void DeleteTrainingTaskAsync(const Model::DeleteTrainingTaskRequest& request, const DeleteTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrainingTaskOutcomeCallable DeleteTrainingTaskCallable(const Model::DeleteTrainingTaskRequest& request);

                /**
                 *查询跑批任务
                 * @param req DescribeBatchTaskRequest
                 * @return DescribeBatchTaskOutcome
                 */
                DescribeBatchTaskOutcome DescribeBatchTask(const Model::DescribeBatchTaskRequest &request);
                void DescribeBatchTaskAsync(const Model::DescribeBatchTaskRequest& request, const DescribeBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchTaskOutcomeCallable DescribeBatchTaskCallable(const Model::DescribeBatchTaskRequest& request);

                /**
                 *查询跑批实例列表
                 * @param req DescribeBatchTaskInstancesRequest
                 * @return DescribeBatchTaskInstancesOutcome
                 */
                DescribeBatchTaskInstancesOutcome DescribeBatchTaskInstances(const Model::DescribeBatchTaskInstancesRequest &request);
                void DescribeBatchTaskInstancesAsync(const Model::DescribeBatchTaskInstancesRequest& request, const DescribeBatchTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchTaskInstancesOutcomeCallable DescribeBatchTaskInstancesCallable(const Model::DescribeBatchTaskInstancesRequest& request);

                /**
                 *批量预测任务列表信息
                 * @param req DescribeBatchTasksRequest
                 * @return DescribeBatchTasksOutcome
                 */
                DescribeBatchTasksOutcome DescribeBatchTasks(const Model::DescribeBatchTasksRequest &request);
                void DescribeBatchTasksAsync(const Model::DescribeBatchTasksRequest& request, const DescribeBatchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchTasksOutcomeCallable DescribeBatchTasksCallable(const Model::DescribeBatchTasksRequest& request);

                /**
                 *查询资源组详情
                 * @param req DescribeBillingResourceGroupsRequest
                 * @return DescribeBillingResourceGroupsOutcome
                 */
                DescribeBillingResourceGroupsOutcome DescribeBillingResourceGroups(const Model::DescribeBillingResourceGroupsRequest &request);
                void DescribeBillingResourceGroupsAsync(const Model::DescribeBillingResourceGroupsRequest& request, const DescribeBillingResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingResourceGroupsOutcomeCallable DescribeBillingResourceGroupsCallable(const Model::DescribeBillingResourceGroupsRequest& request);

                /**
                 *本接口(DescribeBillingSpecs)用于查询计费项列表
                 * @param req DescribeBillingSpecsRequest
                 * @return DescribeBillingSpecsOutcome
                 */
                DescribeBillingSpecsOutcome DescribeBillingSpecs(const Model::DescribeBillingSpecsRequest &request);
                void DescribeBillingSpecsAsync(const Model::DescribeBillingSpecsRequest& request, const DescribeBillingSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingSpecsOutcomeCallable DescribeBillingSpecsCallable(const Model::DescribeBillingSpecsRequest& request);

                /**
                 *本接口(DescribeBillingSpecsPrice)用于查询计费项价格。
                 * @param req DescribeBillingSpecsPriceRequest
                 * @return DescribeBillingSpecsPriceOutcome
                 */
                DescribeBillingSpecsPriceOutcome DescribeBillingSpecsPrice(const Model::DescribeBillingSpecsPriceRequest &request);
                void DescribeBillingSpecsPriceAsync(const Model::DescribeBillingSpecsPriceRequest& request, const DescribeBillingSpecsPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingSpecsPriceOutcomeCallable DescribeBillingSpecsPriceCallable(const Model::DescribeBillingSpecsPriceRequest& request);

                /**
                 *查询结构化数据集详情
                 * @param req DescribeDatasetDetailStructuredRequest
                 * @return DescribeDatasetDetailStructuredOutcome
                 */
                DescribeDatasetDetailStructuredOutcome DescribeDatasetDetailStructured(const Model::DescribeDatasetDetailStructuredRequest &request);
                void DescribeDatasetDetailStructuredAsync(const Model::DescribeDatasetDetailStructuredRequest& request, const DescribeDatasetDetailStructuredAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasetDetailStructuredOutcomeCallable DescribeDatasetDetailStructuredCallable(const Model::DescribeDatasetDetailStructuredRequest& request);

                /**
                 *查询非结构化数据集详情
                 * @param req DescribeDatasetDetailUnstructuredRequest
                 * @return DescribeDatasetDetailUnstructuredOutcome
                 */
                DescribeDatasetDetailUnstructuredOutcome DescribeDatasetDetailUnstructured(const Model::DescribeDatasetDetailUnstructuredRequest &request);
                void DescribeDatasetDetailUnstructuredAsync(const Model::DescribeDatasetDetailUnstructuredRequest& request, const DescribeDatasetDetailUnstructuredAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasetDetailUnstructuredOutcomeCallable DescribeDatasetDetailUnstructuredCallable(const Model::DescribeDatasetDetailUnstructuredRequest& request);

                /**
                 *查询数据集列表
                 * @param req DescribeDatasetsRequest
                 * @return DescribeDatasetsOutcome
                 */
                DescribeDatasetsOutcome DescribeDatasets(const Model::DescribeDatasetsRequest &request);
                void DescribeDatasetsAsync(const Model::DescribeDatasetsRequest& request, const DescribeDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasetsOutcomeCallable DescribeDatasetsCallable(const Model::DescribeDatasetsRequest& request);

                /**
                 *查询推理镜像模板
                 * @param req DescribeInferTemplatesRequest
                 * @return DescribeInferTemplatesOutcome
                 */
                DescribeInferTemplatesOutcome DescribeInferTemplates(const Model::DescribeInferTemplatesRequest &request);
                void DescribeInferTemplatesAsync(const Model::DescribeInferTemplatesRequest& request, const DescribeInferTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInferTemplatesOutcomeCallable DescribeInferTemplatesCallable(const Model::DescribeInferTemplatesRequest& request);

                /**
                 *查询最近上报的训练自定义指标
                 * @param req DescribeLatestTrainingMetricsRequest
                 * @return DescribeLatestTrainingMetricsOutcome
                 */
                DescribeLatestTrainingMetricsOutcome DescribeLatestTrainingMetrics(const Model::DescribeLatestTrainingMetricsRequest &request);
                void DescribeLatestTrainingMetricsAsync(const Model::DescribeLatestTrainingMetricsRequest& request, const DescribeLatestTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLatestTrainingMetricsOutcomeCallable DescribeLatestTrainingMetricsCallable(const Model::DescribeLatestTrainingMetricsRequest& request);

                /**
                 *获取训练、推理、Notebook服务的日志
                 * @param req DescribeLogsRequest
                 * @return DescribeLogsOutcome
                 */
                DescribeLogsOutcome DescribeLogs(const Model::DescribeLogsRequest &request);
                void DescribeLogsAsync(const Model::DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsOutcomeCallable DescribeLogsCallable(const Model::DescribeLogsRequest& request);

                /**
                 *训练框架列表
                 * @param req DescribeTrainingFrameworksRequest
                 * @return DescribeTrainingFrameworksOutcome
                 */
                DescribeTrainingFrameworksOutcome DescribeTrainingFrameworks(const Model::DescribeTrainingFrameworksRequest &request);
                void DescribeTrainingFrameworksAsync(const Model::DescribeTrainingFrameworksRequest& request, const DescribeTrainingFrameworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingFrameworksOutcomeCallable DescribeTrainingFrameworksCallable(const Model::DescribeTrainingFrameworksRequest& request);

                /**
                 *查询训练自定义指标
                 * @param req DescribeTrainingMetricsRequest
                 * @return DescribeTrainingMetricsOutcome
                 */
                DescribeTrainingMetricsOutcome DescribeTrainingMetrics(const Model::DescribeTrainingMetricsRequest &request);
                void DescribeTrainingMetricsAsync(const Model::DescribeTrainingMetricsRequest& request, const DescribeTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingMetricsOutcomeCallable DescribeTrainingMetricsCallable(const Model::DescribeTrainingMetricsRequest& request);

                /**
                 *查询模型版本
                 * @param req DescribeTrainingModelVersionRequest
                 * @return DescribeTrainingModelVersionOutcome
                 */
                DescribeTrainingModelVersionOutcome DescribeTrainingModelVersion(const Model::DescribeTrainingModelVersionRequest &request);
                void DescribeTrainingModelVersionAsync(const Model::DescribeTrainingModelVersionRequest& request, const DescribeTrainingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingModelVersionOutcomeCallable DescribeTrainingModelVersionCallable(const Model::DescribeTrainingModelVersionRequest& request);

                /**
                 *模型版本列表
                 * @param req DescribeTrainingModelVersionsRequest
                 * @return DescribeTrainingModelVersionsOutcome
                 */
                DescribeTrainingModelVersionsOutcome DescribeTrainingModelVersions(const Model::DescribeTrainingModelVersionsRequest &request);
                void DescribeTrainingModelVersionsAsync(const Model::DescribeTrainingModelVersionsRequest& request, const DescribeTrainingModelVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingModelVersionsOutcomeCallable DescribeTrainingModelVersionsCallable(const Model::DescribeTrainingModelVersionsRequest& request);

                /**
                 *模型列表
                 * @param req DescribeTrainingModelsRequest
                 * @return DescribeTrainingModelsOutcome
                 */
                DescribeTrainingModelsOutcome DescribeTrainingModels(const Model::DescribeTrainingModelsRequest &request);
                void DescribeTrainingModelsAsync(const Model::DescribeTrainingModelsRequest& request, const DescribeTrainingModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingModelsOutcomeCallable DescribeTrainingModelsCallable(const Model::DescribeTrainingModelsRequest& request);

                /**
                 *训练任务详情
                 * @param req DescribeTrainingTaskRequest
                 * @return DescribeTrainingTaskOutcome
                 */
                DescribeTrainingTaskOutcome DescribeTrainingTask(const Model::DescribeTrainingTaskRequest &request);
                void DescribeTrainingTaskAsync(const Model::DescribeTrainingTaskRequest& request, const DescribeTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingTaskOutcomeCallable DescribeTrainingTaskCallable(const Model::DescribeTrainingTaskRequest& request);

                /**
                 *训练任务pod列表
                 * @param req DescribeTrainingTaskPodsRequest
                 * @return DescribeTrainingTaskPodsOutcome
                 */
                DescribeTrainingTaskPodsOutcome DescribeTrainingTaskPods(const Model::DescribeTrainingTaskPodsRequest &request);
                void DescribeTrainingTaskPodsAsync(const Model::DescribeTrainingTaskPodsRequest& request, const DescribeTrainingTaskPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingTaskPodsOutcomeCallable DescribeTrainingTaskPodsCallable(const Model::DescribeTrainingTaskPodsRequest& request);

                /**
                 *训练任务列表
                 * @param req DescribeTrainingTasksRequest
                 * @return DescribeTrainingTasksOutcome
                 */
                DescribeTrainingTasksOutcome DescribeTrainingTasks(const Model::DescribeTrainingTasksRequest &request);
                void DescribeTrainingTasksAsync(const Model::DescribeTrainingTasksRequest& request, const DescribeTrainingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingTasksOutcomeCallable DescribeTrainingTasksCallable(const Model::DescribeTrainingTasksRequest& request);

                /**
                 *上报训练自定义指标
                 * @param req PushTrainingMetricsRequest
                 * @return PushTrainingMetricsOutcome
                 */
                PushTrainingMetricsOutcome PushTrainingMetrics(const Model::PushTrainingMetricsRequest &request);
                void PushTrainingMetricsAsync(const Model::PushTrainingMetricsRequest& request, const PushTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushTrainingMetricsOutcomeCallable PushTrainingMetricsCallable(const Model::PushTrainingMetricsRequest& request);

                /**
                 *启动模型训练任务
                 * @param req StartTrainingTaskRequest
                 * @return StartTrainingTaskOutcome
                 */
                StartTrainingTaskOutcome StartTrainingTask(const Model::StartTrainingTaskRequest &request);
                void StartTrainingTaskAsync(const Model::StartTrainingTaskRequest& request, const StartTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartTrainingTaskOutcomeCallable StartTrainingTaskCallable(const Model::StartTrainingTaskRequest& request);

                /**
                 *停止跑批任务
                 * @param req StopBatchTaskRequest
                 * @return StopBatchTaskOutcome
                 */
                StopBatchTaskOutcome StopBatchTask(const Model::StopBatchTaskRequest &request);
                void StopBatchTaskAsync(const Model::StopBatchTaskRequest& request, const StopBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBatchTaskOutcomeCallable StopBatchTaskCallable(const Model::StopBatchTaskRequest& request);

                /**
                 *停止模型训练任务
                 * @param req StopTrainingTaskRequest
                 * @return StopTrainingTaskOutcome
                 */
                StopTrainingTaskOutcome StopTrainingTask(const Model::StopTrainingTaskRequest &request);
                void StopTrainingTaskAsync(const Model::StopTrainingTaskRequest& request, const StopTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTrainingTaskOutcomeCallable StopTrainingTaskCallable(const Model::StopTrainingTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_
