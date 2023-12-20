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
#include <tencentcloud/tione/v20211111/model/ChatCompletionRequest.h>
#include <tencentcloud/tione/v20211111/model/ChatCompletionResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateBatchModelAccTasksRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateBatchModelAccTasksResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateDatasetRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateDatasetResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookImageRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookImageResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateOptimizedModelRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateOptimizedModelResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingModelRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingModelResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteDatasetRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteDatasetResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelAccelerateTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelAccelerateTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceGroupRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceGroupResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteNotebookImageRecordRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteNotebookImageRecordResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeAPIConfigsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeAPIConfigsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskInstancesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTaskInstancesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTasksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBatchTasksResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceInstanceRunningJobsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceInstanceRunningJobsResponse.h>
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
#include <tencentcloud/tione/v20211111/model/DescribeEventsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeEventsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeInferTemplatesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeInferTemplatesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeLatestTrainingMetricsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeLatestTrainingMetricsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeLogsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeLogsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccEngineVersionsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccEngineVersionsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTasksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTasksResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateVersionsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateVersionsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceCallInfoRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceCallInfoResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceGroupRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceGroupResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceGroupsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceGroupsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHistoryRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHistoryResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHotUpdatedRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHotUpdatedResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServicesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServicesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookImageKernelsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookImageKernelsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookImageRecordsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookImageRecordsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebooksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebooksResponse.h>
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
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServicePartialConfigRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServicePartialConfigResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookTagsRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookTagsResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyServiceGroupWeightsRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyServiceGroupWeightsResponse.h>
#include <tencentcloud/tione/v20211111/model/PushTrainingMetricsRequest.h>
#include <tencentcloud/tione/v20211111/model/PushTrainingMetricsResponse.h>
#include <tencentcloud/tione/v20211111/model/RestartModelAccelerateTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/RestartModelAccelerateTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/SendChatMessageRequest.h>
#include <tencentcloud/tione/v20211111/model/SendChatMessageResponse.h>
#include <tencentcloud/tione/v20211111/model/StartNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/StartNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/StartTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StartTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopBatchTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StopBatchTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopCreatingImageRequest.h>
#include <tencentcloud/tione/v20211111/model/StopCreatingImageResponse.h>
#include <tencentcloud/tione/v20211111/model/StopModelAccelerateTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StopModelAccelerateTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/StopNotebookResponse.h>
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

                typedef Outcome<Core::Error, Model::ChatCompletionResponse> ChatCompletionOutcome;
                typedef std::future<ChatCompletionOutcome> ChatCompletionOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ChatCompletionRequest&, ChatCompletionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatCompletionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchModelAccTasksResponse> CreateBatchModelAccTasksOutcome;
                typedef std::future<CreateBatchModelAccTasksOutcome> CreateBatchModelAccTasksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateBatchModelAccTasksRequest&, CreateBatchModelAccTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchModelAccTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchTaskResponse> CreateBatchTaskOutcome;
                typedef std::future<CreateBatchTaskOutcome> CreateBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateBatchTaskRequest&, CreateBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasetResponse> CreateDatasetOutcome;
                typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateDatasetRequest&, CreateDatasetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelServiceResponse> CreateModelServiceOutcome;
                typedef std::future<CreateModelServiceOutcome> CreateModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateModelServiceRequest&, CreateModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookResponse> CreateNotebookOutcome;
                typedef std::future<CreateNotebookOutcome> CreateNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateNotebookRequest&, CreateNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookImageResponse> CreateNotebookImageOutcome;
                typedef std::future<CreateNotebookImageOutcome> CreateNotebookImageOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateNotebookImageRequest&, CreateNotebookImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOptimizedModelResponse> CreateOptimizedModelOutcome;
                typedef std::future<CreateOptimizedModelOutcome> CreateOptimizedModelOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateOptimizedModelRequest&, CreateOptimizedModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOptimizedModelAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteModelAccelerateTaskResponse> DeleteModelAccelerateTaskOutcome;
                typedef std::future<DeleteModelAccelerateTaskOutcome> DeleteModelAccelerateTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteModelAccelerateTaskRequest&, DeleteModelAccelerateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAccelerateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelServiceResponse> DeleteModelServiceOutcome;
                typedef std::future<DeleteModelServiceOutcome> DeleteModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteModelServiceRequest&, DeleteModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelServiceGroupResponse> DeleteModelServiceGroupOutcome;
                typedef std::future<DeleteModelServiceGroupOutcome> DeleteModelServiceGroupOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteModelServiceGroupRequest&, DeleteModelServiceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelServiceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotebookResponse> DeleteNotebookOutcome;
                typedef std::future<DeleteNotebookOutcome> DeleteNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteNotebookRequest&, DeleteNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotebookImageRecordResponse> DeleteNotebookImageRecordOutcome;
                typedef std::future<DeleteNotebookImageRecordOutcome> DeleteNotebookImageRecordOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteNotebookImageRecordRequest&, DeleteNotebookImageRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotebookImageRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingModelResponse> DeleteTrainingModelOutcome;
                typedef std::future<DeleteTrainingModelOutcome> DeleteTrainingModelOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingModelRequest&, DeleteTrainingModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingModelVersionResponse> DeleteTrainingModelVersionOutcome;
                typedef std::future<DeleteTrainingModelVersionOutcome> DeleteTrainingModelVersionOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingModelVersionRequest&, DeleteTrainingModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingTaskResponse> DeleteTrainingTaskOutcome;
                typedef std::future<DeleteTrainingTaskOutcome> DeleteTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingTaskRequest&, DeleteTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIConfigsResponse> DescribeAPIConfigsOutcome;
                typedef std::future<DescribeAPIConfigsOutcome> DescribeAPIConfigsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeAPIConfigsRequest&, DescribeAPIConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskResponse> DescribeBatchTaskOutcome;
                typedef std::future<DescribeBatchTaskOutcome> DescribeBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBatchTaskRequest&, DescribeBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskInstancesResponse> DescribeBatchTaskInstancesOutcome;
                typedef std::future<DescribeBatchTaskInstancesOutcome> DescribeBatchTaskInstancesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBatchTaskInstancesRequest&, DescribeBatchTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTasksResponse> DescribeBatchTasksOutcome;
                typedef std::future<DescribeBatchTasksOutcome> DescribeBatchTasksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBatchTasksRequest&, DescribeBatchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingResourceGroupResponse> DescribeBillingResourceGroupOutcome;
                typedef std::future<DescribeBillingResourceGroupOutcome> DescribeBillingResourceGroupOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingResourceGroupRequest&, DescribeBillingResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingResourceGroupsResponse> DescribeBillingResourceGroupsOutcome;
                typedef std::future<DescribeBillingResourceGroupsOutcome> DescribeBillingResourceGroupsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingResourceGroupsRequest&, DescribeBillingResourceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingResourceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingResourceInstanceRunningJobsResponse> DescribeBillingResourceInstanceRunningJobsOutcome;
                typedef std::future<DescribeBillingResourceInstanceRunningJobsOutcome> DescribeBillingResourceInstanceRunningJobsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingResourceInstanceRunningJobsRequest&, DescribeBillingResourceInstanceRunningJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingResourceInstanceRunningJobsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInferTemplatesResponse> DescribeInferTemplatesOutcome;
                typedef std::future<DescribeInferTemplatesOutcome> DescribeInferTemplatesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeInferTemplatesRequest&, DescribeInferTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInferTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLatestTrainingMetricsResponse> DescribeLatestTrainingMetricsOutcome;
                typedef std::future<DescribeLatestTrainingMetricsOutcome> DescribeLatestTrainingMetricsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeLatestTrainingMetricsRequest&, DescribeLatestTrainingMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestTrainingMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsResponse> DescribeLogsOutcome;
                typedef std::future<DescribeLogsOutcome> DescribeLogsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeLogsRequest&, DescribeLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAccEngineVersionsResponse> DescribeModelAccEngineVersionsOutcome;
                typedef std::future<DescribeModelAccEngineVersionsOutcome> DescribeModelAccEngineVersionsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelAccEngineVersionsRequest&, DescribeModelAccEngineVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAccEngineVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAccelerateTaskResponse> DescribeModelAccelerateTaskOutcome;
                typedef std::future<DescribeModelAccelerateTaskOutcome> DescribeModelAccelerateTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelAccelerateTaskRequest&, DescribeModelAccelerateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAccelerateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAccelerateTasksResponse> DescribeModelAccelerateTasksOutcome;
                typedef std::future<DescribeModelAccelerateTasksOutcome> DescribeModelAccelerateTasksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelAccelerateTasksRequest&, DescribeModelAccelerateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAccelerateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAccelerateVersionsResponse> DescribeModelAccelerateVersionsOutcome;
                typedef std::future<DescribeModelAccelerateVersionsOutcome> DescribeModelAccelerateVersionsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelAccelerateVersionsRequest&, DescribeModelAccelerateVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAccelerateVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceResponse> DescribeModelServiceOutcome;
                typedef std::future<DescribeModelServiceOutcome> DescribeModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceRequest&, DescribeModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceCallInfoResponse> DescribeModelServiceCallInfoOutcome;
                typedef std::future<DescribeModelServiceCallInfoOutcome> DescribeModelServiceCallInfoOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceCallInfoRequest&, DescribeModelServiceCallInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceCallInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceGroupResponse> DescribeModelServiceGroupOutcome;
                typedef std::future<DescribeModelServiceGroupOutcome> DescribeModelServiceGroupOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceGroupRequest&, DescribeModelServiceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceGroupsResponse> DescribeModelServiceGroupsOutcome;
                typedef std::future<DescribeModelServiceGroupsOutcome> DescribeModelServiceGroupsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceGroupsRequest&, DescribeModelServiceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceHistoryResponse> DescribeModelServiceHistoryOutcome;
                typedef std::future<DescribeModelServiceHistoryOutcome> DescribeModelServiceHistoryOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceHistoryRequest&, DescribeModelServiceHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServiceHotUpdatedResponse> DescribeModelServiceHotUpdatedOutcome;
                typedef std::future<DescribeModelServiceHotUpdatedOutcome> DescribeModelServiceHotUpdatedOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceHotUpdatedRequest&, DescribeModelServiceHotUpdatedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceHotUpdatedAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelServicesResponse> DescribeModelServicesOutcome;
                typedef std::future<DescribeModelServicesOutcome> DescribeModelServicesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServicesRequest&, DescribeModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookResponse> DescribeNotebookOutcome;
                typedef std::future<DescribeNotebookOutcome> DescribeNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookRequest&, DescribeNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookImageKernelsResponse> DescribeNotebookImageKernelsOutcome;
                typedef std::future<DescribeNotebookImageKernelsOutcome> DescribeNotebookImageKernelsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookImageKernelsRequest&, DescribeNotebookImageKernelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookImageKernelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookImageRecordsResponse> DescribeNotebookImageRecordsOutcome;
                typedef std::future<DescribeNotebookImageRecordsOutcome> DescribeNotebookImageRecordsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookImageRecordsRequest&, DescribeNotebookImageRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookImageRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebooksResponse> DescribeNotebooksOutcome;
                typedef std::future<DescribeNotebooksOutcome> DescribeNotebooksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebooksRequest&, DescribeNotebooksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebooksAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyModelServiceResponse> ModifyModelServiceOutcome;
                typedef std::future<ModifyModelServiceOutcome> ModifyModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyModelServiceRequest&, ModifyModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelServicePartialConfigResponse> ModifyModelServicePartialConfigOutcome;
                typedef std::future<ModifyModelServicePartialConfigOutcome> ModifyModelServicePartialConfigOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyModelServicePartialConfigRequest&, ModifyModelServicePartialConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelServicePartialConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotebookResponse> ModifyNotebookOutcome;
                typedef std::future<ModifyNotebookOutcome> ModifyNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyNotebookRequest&, ModifyNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotebookTagsResponse> ModifyNotebookTagsOutcome;
                typedef std::future<ModifyNotebookTagsOutcome> ModifyNotebookTagsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyNotebookTagsRequest&, ModifyNotebookTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotebookTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceGroupWeightsResponse> ModifyServiceGroupWeightsOutcome;
                typedef std::future<ModifyServiceGroupWeightsOutcome> ModifyServiceGroupWeightsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyServiceGroupWeightsRequest&, ModifyServiceGroupWeightsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceGroupWeightsAsyncHandler;
                typedef Outcome<Core::Error, Model::PushTrainingMetricsResponse> PushTrainingMetricsOutcome;
                typedef std::future<PushTrainingMetricsOutcome> PushTrainingMetricsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::PushTrainingMetricsRequest&, PushTrainingMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushTrainingMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartModelAccelerateTaskResponse> RestartModelAccelerateTaskOutcome;
                typedef std::future<RestartModelAccelerateTaskOutcome> RestartModelAccelerateTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::RestartModelAccelerateTaskRequest&, RestartModelAccelerateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartModelAccelerateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SendChatMessageResponse> SendChatMessageOutcome;
                typedef std::future<SendChatMessageOutcome> SendChatMessageOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::SendChatMessageRequest&, SendChatMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendChatMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::StartNotebookResponse> StartNotebookOutcome;
                typedef std::future<StartNotebookOutcome> StartNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StartNotebookRequest&, StartNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::StartTrainingTaskResponse> StartTrainingTaskOutcome;
                typedef std::future<StartTrainingTaskOutcome> StartTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StartTrainingTaskRequest&, StartTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBatchTaskResponse> StopBatchTaskOutcome;
                typedef std::future<StopBatchTaskOutcome> StopBatchTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopBatchTaskRequest&, StopBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCreatingImageResponse> StopCreatingImageOutcome;
                typedef std::future<StopCreatingImageOutcome> StopCreatingImageOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopCreatingImageRequest&, StopCreatingImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCreatingImageAsyncHandler;
                typedef Outcome<Core::Error, Model::StopModelAccelerateTaskResponse> StopModelAccelerateTaskOutcome;
                typedef std::future<StopModelAccelerateTaskOutcome> StopModelAccelerateTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopModelAccelerateTaskRequest&, StopModelAccelerateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopModelAccelerateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopNotebookResponse> StopNotebookOutcome;
                typedef std::future<StopNotebookOutcome> StopNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopNotebookRequest&, StopNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTrainingTaskResponse> StopTrainingTaskOutcome;
                typedef std::future<StopTrainingTaskOutcome> StopTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopTrainingTaskRequest&, StopTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTrainingTaskAsyncHandler;



                /**
                 *该接口支持与自行部署的大模型的聊天。
                 * @param req ChatCompletionRequest
                 * @return ChatCompletionOutcome
                 */
                ChatCompletionOutcome ChatCompletion(const Model::ChatCompletionRequest &request);
                void ChatCompletionAsync(const Model::ChatCompletionRequest& request, const ChatCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionOutcomeCallable ChatCompletionCallable(const Model::ChatCompletionRequest& request);

                /**
                 *批量创建模型加速任务
                 * @param req CreateBatchModelAccTasksRequest
                 * @return CreateBatchModelAccTasksOutcome
                 */
                CreateBatchModelAccTasksOutcome CreateBatchModelAccTasks(const Model::CreateBatchModelAccTasksRequest &request);
                void CreateBatchModelAccTasksAsync(const Model::CreateBatchModelAccTasksRequest& request, const CreateBatchModelAccTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchModelAccTasksOutcomeCallable CreateBatchModelAccTasksCallable(const Model::CreateBatchModelAccTasksRequest& request);

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
                 *用于创建、发布一个新的模型服务
                 * @param req CreateModelServiceRequest
                 * @return CreateModelServiceOutcome
                 */
                CreateModelServiceOutcome CreateModelService(const Model::CreateModelServiceRequest &request);
                void CreateModelServiceAsync(const Model::CreateModelServiceRequest& request, const CreateModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelServiceOutcomeCallable CreateModelServiceCallable(const Model::CreateModelServiceRequest& request);

                /**
                 *创建Notebook
                 * @param req CreateNotebookRequest
                 * @return CreateNotebookOutcome
                 */
                CreateNotebookOutcome CreateNotebook(const Model::CreateNotebookRequest &request);
                void CreateNotebookAsync(const Model::CreateNotebookRequest& request, const CreateNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookOutcomeCallable CreateNotebookCallable(const Model::CreateNotebookRequest& request);

                /**
                 *保存镜像
                 * @param req CreateNotebookImageRequest
                 * @return CreateNotebookImageOutcome
                 */
                CreateNotebookImageOutcome CreateNotebookImage(const Model::CreateNotebookImageRequest &request);
                void CreateNotebookImageAsync(const Model::CreateNotebookImageRequest& request, const CreateNotebookImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookImageOutcomeCallable CreateNotebookImageCallable(const Model::CreateNotebookImageRequest& request);

                /**
                 *保存优化模型
                 * @param req CreateOptimizedModelRequest
                 * @return CreateOptimizedModelOutcome
                 */
                CreateOptimizedModelOutcome CreateOptimizedModel(const Model::CreateOptimizedModelRequest &request);
                void CreateOptimizedModelAsync(const Model::CreateOptimizedModelRequest& request, const CreateOptimizedModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOptimizedModelOutcomeCallable CreateOptimizedModelCallable(const Model::CreateOptimizedModelRequest& request);

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
                 *删除模型加速任务
                 * @param req DeleteModelAccelerateTaskRequest
                 * @return DeleteModelAccelerateTaskOutcome
                 */
                DeleteModelAccelerateTaskOutcome DeleteModelAccelerateTask(const Model::DeleteModelAccelerateTaskRequest &request);
                void DeleteModelAccelerateTaskAsync(const Model::DeleteModelAccelerateTaskRequest& request, const DeleteModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelAccelerateTaskOutcomeCallable DeleteModelAccelerateTaskCallable(const Model::DeleteModelAccelerateTaskRequest& request);

                /**
                 *根据服务id删除模型服务
                 * @param req DeleteModelServiceRequest
                 * @return DeleteModelServiceOutcome
                 */
                DeleteModelServiceOutcome DeleteModelService(const Model::DeleteModelServiceRequest &request);
                void DeleteModelServiceAsync(const Model::DeleteModelServiceRequest& request, const DeleteModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelServiceOutcomeCallable DeleteModelServiceCallable(const Model::DeleteModelServiceRequest& request);

                /**
                 *根据服务组id删除服务组下所有模型服务
                 * @param req DeleteModelServiceGroupRequest
                 * @return DeleteModelServiceGroupOutcome
                 */
                DeleteModelServiceGroupOutcome DeleteModelServiceGroup(const Model::DeleteModelServiceGroupRequest &request);
                void DeleteModelServiceGroupAsync(const Model::DeleteModelServiceGroupRequest& request, const DeleteModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelServiceGroupOutcomeCallable DeleteModelServiceGroupCallable(const Model::DeleteModelServiceGroupRequest& request);

                /**
                 *删除Notebook
                 * @param req DeleteNotebookRequest
                 * @return DeleteNotebookOutcome
                 */
                DeleteNotebookOutcome DeleteNotebook(const Model::DeleteNotebookRequest &request);
                void DeleteNotebookAsync(const Model::DeleteNotebookRequest& request, const DeleteNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotebookOutcomeCallable DeleteNotebookCallable(const Model::DeleteNotebookRequest& request);

                /**
                 *删除notebook镜像保存记录
                 * @param req DeleteNotebookImageRecordRequest
                 * @return DeleteNotebookImageRecordOutcome
                 */
                DeleteNotebookImageRecordOutcome DeleteNotebookImageRecord(const Model::DeleteNotebookImageRecordRequest &request);
                void DeleteNotebookImageRecordAsync(const Model::DeleteNotebookImageRecordRequest& request, const DeleteNotebookImageRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotebookImageRecordOutcomeCallable DeleteNotebookImageRecordCallable(const Model::DeleteNotebookImageRecordRequest& request);

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
                 *列举API
                 * @param req DescribeAPIConfigsRequest
                 * @return DescribeAPIConfigsOutcome
                 */
                DescribeAPIConfigsOutcome DescribeAPIConfigs(const Model::DescribeAPIConfigsRequest &request);
                void DescribeAPIConfigsAsync(const Model::DescribeAPIConfigsRequest& request, const DescribeAPIConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIConfigsOutcomeCallable DescribeAPIConfigsCallable(const Model::DescribeAPIConfigsRequest& request);

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
                 *查询资源组节点列表
                 * @param req DescribeBillingResourceGroupRequest
                 * @return DescribeBillingResourceGroupOutcome
                 */
                DescribeBillingResourceGroupOutcome DescribeBillingResourceGroup(const Model::DescribeBillingResourceGroupRequest &request);
                void DescribeBillingResourceGroupAsync(const Model::DescribeBillingResourceGroupRequest& request, const DescribeBillingResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingResourceGroupOutcomeCallable DescribeBillingResourceGroupCallable(const Model::DescribeBillingResourceGroupRequest& request);

                /**
                 *查询资源组详情
                 * @param req DescribeBillingResourceGroupsRequest
                 * @return DescribeBillingResourceGroupsOutcome
                 */
                DescribeBillingResourceGroupsOutcome DescribeBillingResourceGroups(const Model::DescribeBillingResourceGroupsRequest &request);
                void DescribeBillingResourceGroupsAsync(const Model::DescribeBillingResourceGroupsRequest& request, const DescribeBillingResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingResourceGroupsOutcomeCallable DescribeBillingResourceGroupsCallable(const Model::DescribeBillingResourceGroupsRequest& request);

                /**
                 *查询资源组节点运行中的任务
                 * @param req DescribeBillingResourceInstanceRunningJobsRequest
                 * @return DescribeBillingResourceInstanceRunningJobsOutcome
                 */
                DescribeBillingResourceInstanceRunningJobsOutcome DescribeBillingResourceInstanceRunningJobs(const Model::DescribeBillingResourceInstanceRunningJobsRequest &request);
                void DescribeBillingResourceInstanceRunningJobsAsync(const Model::DescribeBillingResourceInstanceRunningJobsRequest& request, const DescribeBillingResourceInstanceRunningJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingResourceInstanceRunningJobsOutcomeCallable DescribeBillingResourceInstanceRunningJobsCallable(const Model::DescribeBillingResourceInstanceRunningJobsRequest& request);

                /**
                 *本接口(DescribeBillingSpecs)用于查询计费项列表
                 * @param req DescribeBillingSpecsRequest
                 * @return DescribeBillingSpecsOutcome
                 */
                DescribeBillingSpecsOutcome DescribeBillingSpecs(const Model::DescribeBillingSpecsRequest &request);
                void DescribeBillingSpecsAsync(const Model::DescribeBillingSpecsRequest& request, const DescribeBillingSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingSpecsOutcomeCallable DescribeBillingSpecsCallable(const Model::DescribeBillingSpecsRequest& request);

                /**
                 *本接口(DescribeBillingSpecsPrice)用于查询按量计费计费项价格。
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
                 *获取任务式建模训练任务，Notebook，在线服务和批量预测任务的事件API
                 * @param req DescribeEventsRequest
                 * @return DescribeEventsOutcome
                 */
                DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest &request);
                void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request);

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
                 *获取任务式建模训练任务，Notebook，在线服务和批量预测任务的日志API
                 * @param req DescribeLogsRequest
                 * @return DescribeLogsOutcome
                 */
                DescribeLogsOutcome DescribeLogs(const Model::DescribeLogsRequest &request);
                void DescribeLogsAsync(const Model::DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsOutcomeCallable DescribeLogsCallable(const Model::DescribeLogsRequest& request);

                /**
                 *查询模型加速引擎版本列表
                 * @param req DescribeModelAccEngineVersionsRequest
                 * @return DescribeModelAccEngineVersionsOutcome
                 */
                DescribeModelAccEngineVersionsOutcome DescribeModelAccEngineVersions(const Model::DescribeModelAccEngineVersionsRequest &request);
                void DescribeModelAccEngineVersionsAsync(const Model::DescribeModelAccEngineVersionsRequest& request, const DescribeModelAccEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAccEngineVersionsOutcomeCallable DescribeModelAccEngineVersionsCallable(const Model::DescribeModelAccEngineVersionsRequest& request);

                /**
                 *查询模型优化任务详情
                 * @param req DescribeModelAccelerateTaskRequest
                 * @return DescribeModelAccelerateTaskOutcome
                 */
                DescribeModelAccelerateTaskOutcome DescribeModelAccelerateTask(const Model::DescribeModelAccelerateTaskRequest &request);
                void DescribeModelAccelerateTaskAsync(const Model::DescribeModelAccelerateTaskRequest& request, const DescribeModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAccelerateTaskOutcomeCallable DescribeModelAccelerateTaskCallable(const Model::DescribeModelAccelerateTaskRequest& request);

                /**
                 *查询模型加速任务列表
                 * @param req DescribeModelAccelerateTasksRequest
                 * @return DescribeModelAccelerateTasksOutcome
                 */
                DescribeModelAccelerateTasksOutcome DescribeModelAccelerateTasks(const Model::DescribeModelAccelerateTasksRequest &request);
                void DescribeModelAccelerateTasksAsync(const Model::DescribeModelAccelerateTasksRequest& request, const DescribeModelAccelerateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAccelerateTasksOutcomeCallable DescribeModelAccelerateTasksCallable(const Model::DescribeModelAccelerateTasksRequest& request);

                /**
                 *模型加速之后的模型版本列表
                 * @param req DescribeModelAccelerateVersionsRequest
                 * @return DescribeModelAccelerateVersionsOutcome
                 */
                DescribeModelAccelerateVersionsOutcome DescribeModelAccelerateVersions(const Model::DescribeModelAccelerateVersionsRequest &request);
                void DescribeModelAccelerateVersionsAsync(const Model::DescribeModelAccelerateVersionsRequest& request, const DescribeModelAccelerateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAccelerateVersionsOutcomeCallable DescribeModelAccelerateVersionsCallable(const Model::DescribeModelAccelerateVersionsRequest& request);

                /**
                 *查询单个服务
                 * @param req DescribeModelServiceRequest
                 * @return DescribeModelServiceOutcome
                 */
                DescribeModelServiceOutcome DescribeModelService(const Model::DescribeModelServiceRequest &request);
                void DescribeModelServiceAsync(const Model::DescribeModelServiceRequest& request, const DescribeModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceOutcomeCallable DescribeModelServiceCallable(const Model::DescribeModelServiceRequest& request);

                /**
                 *展示服务的调用信息
                 * @param req DescribeModelServiceCallInfoRequest
                 * @return DescribeModelServiceCallInfoOutcome
                 */
                DescribeModelServiceCallInfoOutcome DescribeModelServiceCallInfo(const Model::DescribeModelServiceCallInfoRequest &request);
                void DescribeModelServiceCallInfoAsync(const Model::DescribeModelServiceCallInfoRequest& request, const DescribeModelServiceCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceCallInfoOutcomeCallable DescribeModelServiceCallInfoCallable(const Model::DescribeModelServiceCallInfoRequest& request);

                /**
                 *查询单个服务组
                 * @param req DescribeModelServiceGroupRequest
                 * @return DescribeModelServiceGroupOutcome
                 */
                DescribeModelServiceGroupOutcome DescribeModelServiceGroup(const Model::DescribeModelServiceGroupRequest &request);
                void DescribeModelServiceGroupAsync(const Model::DescribeModelServiceGroupRequest& request, const DescribeModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceGroupOutcomeCallable DescribeModelServiceGroupCallable(const Model::DescribeModelServiceGroupRequest& request);

                /**
                 *列举在线推理服务组
                 * @param req DescribeModelServiceGroupsRequest
                 * @return DescribeModelServiceGroupsOutcome
                 */
                DescribeModelServiceGroupsOutcome DescribeModelServiceGroups(const Model::DescribeModelServiceGroupsRequest &request);
                void DescribeModelServiceGroupsAsync(const Model::DescribeModelServiceGroupsRequest& request, const DescribeModelServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceGroupsOutcomeCallable DescribeModelServiceGroupsCallable(const Model::DescribeModelServiceGroupsRequest& request);

                /**
                 *展示服务的历史版本
                 * @param req DescribeModelServiceHistoryRequest
                 * @return DescribeModelServiceHistoryOutcome
                 */
                DescribeModelServiceHistoryOutcome DescribeModelServiceHistory(const Model::DescribeModelServiceHistoryRequest &request);
                void DescribeModelServiceHistoryAsync(const Model::DescribeModelServiceHistoryRequest& request, const DescribeModelServiceHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceHistoryOutcomeCallable DescribeModelServiceHistoryCallable(const Model::DescribeModelServiceHistoryRequest& request);

                /**
                 *用于查询模型服务能否开启热更新
                 * @param req DescribeModelServiceHotUpdatedRequest
                 * @return DescribeModelServiceHotUpdatedOutcome
                 */
                DescribeModelServiceHotUpdatedOutcome DescribeModelServiceHotUpdated(const Model::DescribeModelServiceHotUpdatedRequest &request);
                void DescribeModelServiceHotUpdatedAsync(const Model::DescribeModelServiceHotUpdatedRequest& request, const DescribeModelServiceHotUpdatedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceHotUpdatedOutcomeCallable DescribeModelServiceHotUpdatedCallable(const Model::DescribeModelServiceHotUpdatedRequest& request);

                /**
                 *查询多个服务
                 * @param req DescribeModelServicesRequest
                 * @return DescribeModelServicesOutcome
                 */
                DescribeModelServicesOutcome DescribeModelServices(const Model::DescribeModelServicesRequest &request);
                void DescribeModelServicesAsync(const Model::DescribeModelServicesRequest& request, const DescribeModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServicesOutcomeCallable DescribeModelServicesCallable(const Model::DescribeModelServicesRequest& request);

                /**
                 *Notebook详情
                 * @param req DescribeNotebookRequest
                 * @return DescribeNotebookOutcome
                 */
                DescribeNotebookOutcome DescribeNotebook(const Model::DescribeNotebookRequest &request);
                void DescribeNotebookAsync(const Model::DescribeNotebookRequest& request, const DescribeNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookOutcomeCallable DescribeNotebookCallable(const Model::DescribeNotebookRequest& request);

                /**
                 *查询镜像kernel
                 * @param req DescribeNotebookImageKernelsRequest
                 * @return DescribeNotebookImageKernelsOutcome
                 */
                DescribeNotebookImageKernelsOutcome DescribeNotebookImageKernels(const Model::DescribeNotebookImageKernelsRequest &request);
                void DescribeNotebookImageKernelsAsync(const Model::DescribeNotebookImageKernelsRequest& request, const DescribeNotebookImageKernelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookImageKernelsOutcomeCallable DescribeNotebookImageKernelsCallable(const Model::DescribeNotebookImageKernelsRequest& request);

                /**
                 *查看notebook镜像保存记录
                 * @param req DescribeNotebookImageRecordsRequest
                 * @return DescribeNotebookImageRecordsOutcome
                 */
                DescribeNotebookImageRecordsOutcome DescribeNotebookImageRecords(const Model::DescribeNotebookImageRecordsRequest &request);
                void DescribeNotebookImageRecordsAsync(const Model::DescribeNotebookImageRecordsRequest& request, const DescribeNotebookImageRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookImageRecordsOutcomeCallable DescribeNotebookImageRecordsCallable(const Model::DescribeNotebookImageRecordsRequest& request);

                /**
                 *Notebook列表
                 * @param req DescribeNotebooksRequest
                 * @return DescribeNotebooksOutcome
                 */
                DescribeNotebooksOutcome DescribeNotebooks(const Model::DescribeNotebooksRequest &request);
                void DescribeNotebooksAsync(const Model::DescribeNotebooksRequest& request, const DescribeNotebooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebooksOutcomeCallable DescribeNotebooksCallable(const Model::DescribeNotebooksRequest& request);

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
                 *用于更新模型服务
                 * @param req ModifyModelServiceRequest
                 * @return ModifyModelServiceOutcome
                 */
                ModifyModelServiceOutcome ModifyModelService(const Model::ModifyModelServiceRequest &request);
                void ModifyModelServiceAsync(const Model::ModifyModelServiceRequest& request, const ModifyModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelServiceOutcomeCallable ModifyModelServiceCallable(const Model::ModifyModelServiceRequest& request);

                /**
                 *增量更新在线推理服务的部分配置，不更新的配置项不需要传入
                 * @param req ModifyModelServicePartialConfigRequest
                 * @return ModifyModelServicePartialConfigOutcome
                 */
                ModifyModelServicePartialConfigOutcome ModifyModelServicePartialConfig(const Model::ModifyModelServicePartialConfigRequest &request);
                void ModifyModelServicePartialConfigAsync(const Model::ModifyModelServicePartialConfigRequest& request, const ModifyModelServicePartialConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelServicePartialConfigOutcomeCallable ModifyModelServicePartialConfigCallable(const Model::ModifyModelServicePartialConfigRequest& request);

                /**
                 *修改Notebook
                 * @param req ModifyNotebookRequest
                 * @return ModifyNotebookOutcome
                 */
                ModifyNotebookOutcome ModifyNotebook(const Model::ModifyNotebookRequest &request);
                void ModifyNotebookAsync(const Model::ModifyNotebookRequest& request, const ModifyNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotebookOutcomeCallable ModifyNotebookCallable(const Model::ModifyNotebookRequest& request);

                /**
                 *修改Notebook标签
                 * @param req ModifyNotebookTagsRequest
                 * @return ModifyNotebookTagsOutcome
                 */
                ModifyNotebookTagsOutcome ModifyNotebookTags(const Model::ModifyNotebookTagsRequest &request);
                void ModifyNotebookTagsAsync(const Model::ModifyNotebookTagsRequest& request, const ModifyNotebookTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotebookTagsOutcomeCallable ModifyNotebookTagsCallable(const Model::ModifyNotebookTagsRequest& request);

                /**
                 *更新推理服务组流量分配
                 * @param req ModifyServiceGroupWeightsRequest
                 * @return ModifyServiceGroupWeightsOutcome
                 */
                ModifyServiceGroupWeightsOutcome ModifyServiceGroupWeights(const Model::ModifyServiceGroupWeightsRequest &request);
                void ModifyServiceGroupWeightsAsync(const Model::ModifyServiceGroupWeightsRequest& request, const ModifyServiceGroupWeightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceGroupWeightsOutcomeCallable ModifyServiceGroupWeightsCallable(const Model::ModifyServiceGroupWeightsRequest& request);

                /**
                 *上报训练自定义指标
                 * @param req PushTrainingMetricsRequest
                 * @return PushTrainingMetricsOutcome
                 */
                PushTrainingMetricsOutcome PushTrainingMetrics(const Model::PushTrainingMetricsRequest &request);
                void PushTrainingMetricsAsync(const Model::PushTrainingMetricsRequest& request, const PushTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushTrainingMetricsOutcomeCallable PushTrainingMetricsCallable(const Model::PushTrainingMetricsRequest& request);

                /**
                 *重启模型加速任务
                 * @param req RestartModelAccelerateTaskRequest
                 * @return RestartModelAccelerateTaskOutcome
                 */
                RestartModelAccelerateTaskOutcome RestartModelAccelerateTask(const Model::RestartModelAccelerateTaskRequest &request);
                void RestartModelAccelerateTaskAsync(const Model::RestartModelAccelerateTaskRequest& request, const RestartModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartModelAccelerateTaskOutcomeCallable RestartModelAccelerateTaskCallable(const Model::RestartModelAccelerateTaskRequest& request);

                /**
                 *这是一个供您体验大模型聊天的接口。
                 * @param req SendChatMessageRequest
                 * @return SendChatMessageOutcome
                 */
                SendChatMessageOutcome SendChatMessage(const Model::SendChatMessageRequest &request);
                void SendChatMessageAsync(const Model::SendChatMessageRequest& request, const SendChatMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendChatMessageOutcomeCallable SendChatMessageCallable(const Model::SendChatMessageRequest& request);

                /**
                 *启动Notebook
                 * @param req StartNotebookRequest
                 * @return StartNotebookOutcome
                 */
                StartNotebookOutcome StartNotebook(const Model::StartNotebookRequest &request);
                void StartNotebookAsync(const Model::StartNotebookRequest& request, const StartNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartNotebookOutcomeCallable StartNotebookCallable(const Model::StartNotebookRequest& request);

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
                 *停止保存镜像
                 * @param req StopCreatingImageRequest
                 * @return StopCreatingImageOutcome
                 */
                StopCreatingImageOutcome StopCreatingImage(const Model::StopCreatingImageRequest &request);
                void StopCreatingImageAsync(const Model::StopCreatingImageRequest& request, const StopCreatingImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCreatingImageOutcomeCallable StopCreatingImageCallable(const Model::StopCreatingImageRequest& request);

                /**
                 *停止模型加速任务
                 * @param req StopModelAccelerateTaskRequest
                 * @return StopModelAccelerateTaskOutcome
                 */
                StopModelAccelerateTaskOutcome StopModelAccelerateTask(const Model::StopModelAccelerateTaskRequest &request);
                void StopModelAccelerateTaskAsync(const Model::StopModelAccelerateTaskRequest& request, const StopModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopModelAccelerateTaskOutcomeCallable StopModelAccelerateTaskCallable(const Model::StopModelAccelerateTaskRequest& request);

                /**
                 *停止Notebook
                 * @param req StopNotebookRequest
                 * @return StopNotebookOutcome
                 */
                StopNotebookOutcome StopNotebook(const Model::StopNotebookRequest &request);
                void StopNotebookAsync(const Model::StopNotebookRequest& request, const StopNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopNotebookOutcomeCallable StopNotebookCallable(const Model::StopNotebookRequest& request);

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
