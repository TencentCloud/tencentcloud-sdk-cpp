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
#include <tencentcloud/tione/v20211111/model/CreateDataSourceRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateDataSourceResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateDatasetRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateDatasetResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateExportRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateExportResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateModelServiceAuthTokenRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateModelServiceAuthTokenResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateMountLimitRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateMountLimitResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookImageRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateNotebookImageResponse.h>
#include <tencentcloud/tione/v20211111/model/CreatePresignedNotebookUrlRequest.h>
#include <tencentcloud/tione/v20211111/model/CreatePresignedNotebookUrlResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateRoleRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateRoleResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingModelRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingModelResponse.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteDataSourceRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteDataSourceResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteDatasetRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteDatasetResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteExportRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteExportResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceAuthTokenRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceAuthTokenResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceGroupRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteModelServiceGroupResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteMountLimitRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteMountLimitResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteRoleRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteRoleResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingModelVersionResponse.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DeleteTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeAccessRulesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeAccessRulesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeAnnotatedTaskListRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeAnnotatedTaskListResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupAttachedWorkspacesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupAttachedWorkspacesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceInstanceRunningJobsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceInstanceRunningJobsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsPriceRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBillingSpecsPriceResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeBuildInImagesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeBuildInImagesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeDataSourceRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeDataSourceResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeDataSourcesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeDataSourcesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeDatasetsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeEventsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeEventsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeExportRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeExportResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeInferTemplatesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeInferTemplatesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeLogsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeLogsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTaskResponse.h>
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
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHotUpdatedRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHotUpdatedResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeMountInstanceRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeMountInstanceResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeMountInstancesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeMountInstancesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeMountLimitsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeMountLimitsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebooksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeNotebooksResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribePlatformImagesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribePlatformImagesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribePresetImageListRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribePresetImageListResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribePublicAlgoVersionListRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribePublicAlgoVersionListResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeRoleRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeRoleResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeRoleUsersRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeRoleUsersResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeRolesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeRolesResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeSubAccountLinuxUserInfosRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeSubAccountLinuxUserInfosResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingModelVersionsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskPodUrlRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskPodUrlResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskPodsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTaskPodsResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTasksRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeTrainingTasksResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceMembersRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceMembersResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceQuotaUsageRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceQuotaUsageResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceQuotasRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceQuotasResponse.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspacesRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeWorkspacesResponse.h>
#include <tencentcloud/tione/v20211111/model/EnableTrainingTaskClsConfigRequest.h>
#include <tencentcloud/tione/v20211111/model/EnableTrainingTaskClsConfigResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceAuthTokenRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceAuthTokenResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceAuthorizationRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyModelServiceAuthorizationResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookTagsRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyNotebookTagsResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyRoleRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyRoleResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyRoleAccessRulesRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyRoleAccessRulesResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyRoleUserGrantRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyRoleUserGrantResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyServiceGroupWeightsRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyServiceGroupWeightsResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyUserGrantRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyUserGrantResponse.h>
#include <tencentcloud/tione/v20211111/model/ModifyWorkspaceMembersRequest.h>
#include <tencentcloud/tione/v20211111/model/ModifyWorkspaceMembersResponse.h>
#include <tencentcloud/tione/v20211111/model/PushTrainingMetricsRequest.h>
#include <tencentcloud/tione/v20211111/model/PushTrainingMetricsResponse.h>
#include <tencentcloud/tione/v20211111/model/StartNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/StartNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/StartTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StartTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopModelAccelerateTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StopModelAccelerateTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/StopNotebookRequest.h>
#include <tencentcloud/tione/v20211111/model/StopNotebookResponse.h>
#include <tencentcloud/tione/v20211111/model/StopTrainingTaskRequest.h>
#include <tencentcloud/tione/v20211111/model/StopTrainingTaskResponse.h>
#include <tencentcloud/tione/v20211111/model/UpdateDataSourceRequest.h>
#include <tencentcloud/tione/v20211111/model/UpdateDataSourceResponse.h>
#include <tencentcloud/tione/v20211111/model/UpdateMountLimitRequest.h>
#include <tencentcloud/tione/v20211111/model/UpdateMountLimitResponse.h>
#include <tencentcloud/tione/v20211111/model/UpdateSubAccountLinuxUserInfoRequest.h>
#include <tencentcloud/tione/v20211111/model/UpdateSubAccountLinuxUserInfoResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateDataSourceResponse> CreateDataSourceOutcome;
                typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateDataSourceRequest&, CreateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasetResponse> CreateDatasetOutcome;
                typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateDatasetRequest&, CreateDatasetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportResponse> CreateExportOutcome;
                typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateExportRequest&, CreateExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelServiceResponse> CreateModelServiceOutcome;
                typedef std::future<CreateModelServiceOutcome> CreateModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateModelServiceRequest&, CreateModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelServiceAuthTokenResponse> CreateModelServiceAuthTokenOutcome;
                typedef std::future<CreateModelServiceAuthTokenOutcome> CreateModelServiceAuthTokenOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateModelServiceAuthTokenRequest&, CreateModelServiceAuthTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelServiceAuthTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMountLimitResponse> CreateMountLimitOutcome;
                typedef std::future<CreateMountLimitOutcome> CreateMountLimitOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateMountLimitRequest&, CreateMountLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMountLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookResponse> CreateNotebookOutcome;
                typedef std::future<CreateNotebookOutcome> CreateNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateNotebookRequest&, CreateNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookImageResponse> CreateNotebookImageOutcome;
                typedef std::future<CreateNotebookImageOutcome> CreateNotebookImageOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateNotebookImageRequest&, CreateNotebookImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePresignedNotebookUrlResponse> CreatePresignedNotebookUrlOutcome;
                typedef std::future<CreatePresignedNotebookUrlOutcome> CreatePresignedNotebookUrlOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreatePresignedNotebookUrlRequest&, CreatePresignedNotebookUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePresignedNotebookUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleResponse> CreateRoleOutcome;
                typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateRoleRequest&, CreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrainingModelResponse> CreateTrainingModelOutcome;
                typedef std::future<CreateTrainingModelOutcome> CreateTrainingModelOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateTrainingModelRequest&, CreateTrainingModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainingModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrainingTaskResponse> CreateTrainingTaskOutcome;
                typedef std::future<CreateTrainingTaskOutcome> CreateTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::CreateTrainingTaskRequest&, CreateTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataSourceResponse> DeleteDataSourceOutcome;
                typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteDataSourceRequest&, DeleteDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatasetResponse> DeleteDatasetOutcome;
                typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteDatasetRequest&, DeleteDatasetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExportResponse> DeleteExportOutcome;
                typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteExportRequest&, DeleteExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelServiceResponse> DeleteModelServiceOutcome;
                typedef std::future<DeleteModelServiceOutcome> DeleteModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteModelServiceRequest&, DeleteModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelServiceAuthTokenResponse> DeleteModelServiceAuthTokenOutcome;
                typedef std::future<DeleteModelServiceAuthTokenOutcome> DeleteModelServiceAuthTokenOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteModelServiceAuthTokenRequest&, DeleteModelServiceAuthTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelServiceAuthTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelServiceGroupResponse> DeleteModelServiceGroupOutcome;
                typedef std::future<DeleteModelServiceGroupOutcome> DeleteModelServiceGroupOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteModelServiceGroupRequest&, DeleteModelServiceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelServiceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMountLimitResponse> DeleteMountLimitOutcome;
                typedef std::future<DeleteMountLimitOutcome> DeleteMountLimitOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteMountLimitRequest&, DeleteMountLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotebookResponse> DeleteNotebookOutcome;
                typedef std::future<DeleteNotebookOutcome> DeleteNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteNotebookRequest&, DeleteNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleResponse> DeleteRoleOutcome;
                typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteRoleRequest&, DeleteRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingModelResponse> DeleteTrainingModelOutcome;
                typedef std::future<DeleteTrainingModelOutcome> DeleteTrainingModelOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingModelRequest&, DeleteTrainingModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingModelVersionResponse> DeleteTrainingModelVersionOutcome;
                typedef std::future<DeleteTrainingModelVersionOutcome> DeleteTrainingModelVersionOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingModelVersionRequest&, DeleteTrainingModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrainingTaskResponse> DeleteTrainingTaskOutcome;
                typedef std::future<DeleteTrainingTaskOutcome> DeleteTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DeleteTrainingTaskRequest&, DeleteTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessRulesResponse> DescribeAccessRulesOutcome;
                typedef std::future<DescribeAccessRulesOutcome> DescribeAccessRulesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeAccessRulesRequest&, DescribeAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnnotatedTaskListResponse> DescribeAnnotatedTaskListOutcome;
                typedef std::future<DescribeAnnotatedTaskListOutcome> DescribeAnnotatedTaskListOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeAnnotatedTaskListRequest&, DescribeAnnotatedTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnnotatedTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingResourceGroupResponse> DescribeBillingResourceGroupOutcome;
                typedef std::future<DescribeBillingResourceGroupOutcome> DescribeBillingResourceGroupOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingResourceGroupRequest&, DescribeBillingResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingResourceGroupAttachedWorkspacesResponse> DescribeBillingResourceGroupAttachedWorkspacesOutcome;
                typedef std::future<DescribeBillingResourceGroupAttachedWorkspacesOutcome> DescribeBillingResourceGroupAttachedWorkspacesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBillingResourceGroupAttachedWorkspacesRequest&, DescribeBillingResourceGroupAttachedWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingResourceGroupAttachedWorkspacesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeBuildInImagesResponse> DescribeBuildInImagesOutcome;
                typedef std::future<DescribeBuildInImagesOutcome> DescribeBuildInImagesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeBuildInImagesRequest&, DescribeBuildInImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBuildInImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceResponse> DescribeDataSourceOutcome;
                typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeDataSourceRequest&, DescribeDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourcesResponse> DescribeDataSourcesOutcome;
                typedef std::future<DescribeDataSourcesOutcome> DescribeDataSourcesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeDataSourcesRequest&, DescribeDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasetsResponse> DescribeDatasetsOutcome;
                typedef std::future<DescribeDatasetsOutcome> DescribeDatasetsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeDatasetsRequest&, DescribeDatasetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportResponse> DescribeExportOutcome;
                typedef std::future<DescribeExportOutcome> DescribeExportOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeExportRequest&, DescribeExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInferTemplatesResponse> DescribeInferTemplatesOutcome;
                typedef std::future<DescribeInferTemplatesOutcome> DescribeInferTemplatesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeInferTemplatesRequest&, DescribeInferTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInferTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsResponse> DescribeLogsOutcome;
                typedef std::future<DescribeLogsOutcome> DescribeLogsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeLogsRequest&, DescribeLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAccelerateTaskResponse> DescribeModelAccelerateTaskOutcome;
                typedef std::future<DescribeModelAccelerateTaskOutcome> DescribeModelAccelerateTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelAccelerateTaskRequest&, DescribeModelAccelerateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAccelerateTaskAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeModelServiceHotUpdatedResponse> DescribeModelServiceHotUpdatedOutcome;
                typedef std::future<DescribeModelServiceHotUpdatedOutcome> DescribeModelServiceHotUpdatedOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceHotUpdatedRequest&, DescribeModelServiceHotUpdatedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceHotUpdatedAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountInstanceResponse> DescribeMountInstanceOutcome;
                typedef std::future<DescribeMountInstanceOutcome> DescribeMountInstanceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeMountInstanceRequest&, DescribeMountInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountInstancesResponse> DescribeMountInstancesOutcome;
                typedef std::future<DescribeMountInstancesOutcome> DescribeMountInstancesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeMountInstancesRequest&, DescribeMountInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountLimitsResponse> DescribeMountLimitsOutcome;
                typedef std::future<DescribeMountLimitsOutcome> DescribeMountLimitsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeMountLimitsRequest&, DescribeMountLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookResponse> DescribeNotebookOutcome;
                typedef std::future<DescribeNotebookOutcome> DescribeNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebookRequest&, DescribeNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebooksResponse> DescribeNotebooksOutcome;
                typedef std::future<DescribeNotebooksOutcome> DescribeNotebooksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeNotebooksRequest&, DescribeNotebooksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebooksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlatformImagesResponse> DescribePlatformImagesOutcome;
                typedef std::future<DescribePlatformImagesOutcome> DescribePlatformImagesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribePlatformImagesRequest&, DescribePlatformImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlatformImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePresetImageListResponse> DescribePresetImageListOutcome;
                typedef std::future<DescribePresetImageListOutcome> DescribePresetImageListOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribePresetImageListRequest&, DescribePresetImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePresetImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicAlgoVersionListResponse> DescribePublicAlgoVersionListOutcome;
                typedef std::future<DescribePublicAlgoVersionListOutcome> DescribePublicAlgoVersionListOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribePublicAlgoVersionListRequest&, DescribePublicAlgoVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicAlgoVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleResponse> DescribeRoleOutcome;
                typedef std::future<DescribeRoleOutcome> DescribeRoleOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeRoleRequest&, DescribeRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleUsersResponse> DescribeRoleUsersOutcome;
                typedef std::future<DescribeRoleUsersOutcome> DescribeRoleUsersOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeRoleUsersRequest&, DescribeRoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRolesResponse> DescribeRolesOutcome;
                typedef std::future<DescribeRolesOutcome> DescribeRolesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeRolesRequest&, DescribeRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubAccountLinuxUserInfosResponse> DescribeSubAccountLinuxUserInfosOutcome;
                typedef std::future<DescribeSubAccountLinuxUserInfosOutcome> DescribeSubAccountLinuxUserInfosOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeSubAccountLinuxUserInfosRequest&, DescribeSubAccountLinuxUserInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubAccountLinuxUserInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingModelVersionResponse> DescribeTrainingModelVersionOutcome;
                typedef std::future<DescribeTrainingModelVersionOutcome> DescribeTrainingModelVersionOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingModelVersionRequest&, DescribeTrainingModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingModelVersionsResponse> DescribeTrainingModelVersionsOutcome;
                typedef std::future<DescribeTrainingModelVersionsOutcome> DescribeTrainingModelVersionsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingModelVersionsRequest&, DescribeTrainingModelVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingModelVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTaskResponse> DescribeTrainingTaskOutcome;
                typedef std::future<DescribeTrainingTaskOutcome> DescribeTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTaskRequest&, DescribeTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTaskPodUrlResponse> DescribeTrainingTaskPodUrlOutcome;
                typedef std::future<DescribeTrainingTaskPodUrlOutcome> DescribeTrainingTaskPodUrlOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTaskPodUrlRequest&, DescribeTrainingTaskPodUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTaskPodUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTaskPodsResponse> DescribeTrainingTaskPodsOutcome;
                typedef std::future<DescribeTrainingTaskPodsOutcome> DescribeTrainingTaskPodsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTaskPodsRequest&, DescribeTrainingTaskPodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTaskPodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrainingTasksResponse> DescribeTrainingTasksOutcome;
                typedef std::future<DescribeTrainingTasksOutcome> DescribeTrainingTasksOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeTrainingTasksRequest&, DescribeTrainingTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrainingTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceResponse> DescribeWorkspaceOutcome;
                typedef std::future<DescribeWorkspaceOutcome> DescribeWorkspaceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeWorkspaceRequest&, DescribeWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceMembersResponse> DescribeWorkspaceMembersOutcome;
                typedef std::future<DescribeWorkspaceMembersOutcome> DescribeWorkspaceMembersOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeWorkspaceMembersRequest&, DescribeWorkspaceMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceQuotaUsageResponse> DescribeWorkspaceQuotaUsageOutcome;
                typedef std::future<DescribeWorkspaceQuotaUsageOutcome> DescribeWorkspaceQuotaUsageOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeWorkspaceQuotaUsageRequest&, DescribeWorkspaceQuotaUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceQuotaUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceQuotasResponse> DescribeWorkspaceQuotasOutcome;
                typedef std::future<DescribeWorkspaceQuotasOutcome> DescribeWorkspaceQuotasOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeWorkspaceQuotasRequest&, DescribeWorkspaceQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspacesResponse> DescribeWorkspacesOutcome;
                typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeWorkspacesRequest&, DescribeWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTrainingTaskClsConfigResponse> EnableTrainingTaskClsConfigOutcome;
                typedef std::future<EnableTrainingTaskClsConfigOutcome> EnableTrainingTaskClsConfigOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::EnableTrainingTaskClsConfigRequest&, EnableTrainingTaskClsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTrainingTaskClsConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelServiceResponse> ModifyModelServiceOutcome;
                typedef std::future<ModifyModelServiceOutcome> ModifyModelServiceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyModelServiceRequest&, ModifyModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelServiceAuthTokenResponse> ModifyModelServiceAuthTokenOutcome;
                typedef std::future<ModifyModelServiceAuthTokenOutcome> ModifyModelServiceAuthTokenOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyModelServiceAuthTokenRequest&, ModifyModelServiceAuthTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelServiceAuthTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelServiceAuthorizationResponse> ModifyModelServiceAuthorizationOutcome;
                typedef std::future<ModifyModelServiceAuthorizationOutcome> ModifyModelServiceAuthorizationOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyModelServiceAuthorizationRequest&, ModifyModelServiceAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelServiceAuthorizationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotebookResponse> ModifyNotebookOutcome;
                typedef std::future<ModifyNotebookOutcome> ModifyNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyNotebookRequest&, ModifyNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotebookTagsResponse> ModifyNotebookTagsOutcome;
                typedef std::future<ModifyNotebookTagsOutcome> ModifyNotebookTagsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyNotebookTagsRequest&, ModifyNotebookTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotebookTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoleResponse> ModifyRoleOutcome;
                typedef std::future<ModifyRoleOutcome> ModifyRoleOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyRoleRequest&, ModifyRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoleAccessRulesResponse> ModifyRoleAccessRulesOutcome;
                typedef std::future<ModifyRoleAccessRulesOutcome> ModifyRoleAccessRulesOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyRoleAccessRulesRequest&, ModifyRoleAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoleAccessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoleUserGrantResponse> ModifyRoleUserGrantOutcome;
                typedef std::future<ModifyRoleUserGrantOutcome> ModifyRoleUserGrantOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyRoleUserGrantRequest&, ModifyRoleUserGrantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoleUserGrantAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceGroupWeightsResponse> ModifyServiceGroupWeightsOutcome;
                typedef std::future<ModifyServiceGroupWeightsOutcome> ModifyServiceGroupWeightsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyServiceGroupWeightsRequest&, ModifyServiceGroupWeightsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceGroupWeightsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserGrantResponse> ModifyUserGrantOutcome;
                typedef std::future<ModifyUserGrantOutcome> ModifyUserGrantOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyUserGrantRequest&, ModifyUserGrantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGrantAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspaceMembersResponse> ModifyWorkspaceMembersOutcome;
                typedef std::future<ModifyWorkspaceMembersOutcome> ModifyWorkspaceMembersOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::ModifyWorkspaceMembersRequest&, ModifyWorkspaceMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspaceMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::PushTrainingMetricsResponse> PushTrainingMetricsOutcome;
                typedef std::future<PushTrainingMetricsOutcome> PushTrainingMetricsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::PushTrainingMetricsRequest&, PushTrainingMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushTrainingMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::StartNotebookResponse> StartNotebookOutcome;
                typedef std::future<StartNotebookOutcome> StartNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StartNotebookRequest&, StartNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::StartTrainingTaskResponse> StartTrainingTaskOutcome;
                typedef std::future<StartTrainingTaskOutcome> StartTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StartTrainingTaskRequest&, StartTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopModelAccelerateTaskResponse> StopModelAccelerateTaskOutcome;
                typedef std::future<StopModelAccelerateTaskOutcome> StopModelAccelerateTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopModelAccelerateTaskRequest&, StopModelAccelerateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopModelAccelerateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopNotebookResponse> StopNotebookOutcome;
                typedef std::future<StopNotebookOutcome> StopNotebookOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopNotebookRequest&, StopNotebookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopNotebookAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTrainingTaskResponse> StopTrainingTaskOutcome;
                typedef std::future<StopTrainingTaskOutcome> StopTrainingTaskOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::StopTrainingTaskRequest&, StopTrainingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTrainingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataSourceResponse> UpdateDataSourceOutcome;
                typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::UpdateDataSourceRequest&, UpdateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateMountLimitResponse> UpdateMountLimitOutcome;
                typedef std::future<UpdateMountLimitOutcome> UpdateMountLimitOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::UpdateMountLimitRequest&, UpdateMountLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMountLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSubAccountLinuxUserInfoResponse> UpdateSubAccountLinuxUserInfoOutcome;
                typedef std::future<UpdateSubAccountLinuxUserInfoOutcome> UpdateSubAccountLinuxUserInfoOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::UpdateSubAccountLinuxUserInfoRequest&, UpdateSubAccountLinuxUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubAccountLinuxUserInfoAsyncHandler;



                /**
                 *该接口支持与自行部署的大模型的聊天。

使用该接口调用时需要携带腾讯云的密钥信息用于身份信息鉴权，建议通过腾讯云的云 API SDK调用，具体可以参考
https://cloud.tencent.com/document/product/1278/85305
                 * @param req ChatCompletionRequest
                 * @return ChatCompletionOutcome
                 */
                ChatCompletionOutcome ChatCompletion(const Model::ChatCompletionRequest &request);
                void ChatCompletionAsync(const Model::ChatCompletionRequest& request, const ChatCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionOutcomeCallable ChatCompletionCallable(const Model::ChatCompletionRequest& request);

                /**
                 *创建数据源
                 * @param req CreateDataSourceRequest
                 * @return CreateDataSourceOutcome
                 */
                CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest &request);
                void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request);

                /**
                 *创建数据集
                 * @param req CreateDatasetRequest
                 * @return CreateDatasetOutcome
                 */
                CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest &request);
                void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request);

                /**
                 *创建任务式建模训练任务，Notebook，在线服务和批量预测任务日志下载任务API
                 * @param req CreateExportRequest
                 * @return CreateExportOutcome
                 */
                CreateExportOutcome CreateExport(const Model::CreateExportRequest &request);
                void CreateExportAsync(const Model::CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportOutcomeCallable CreateExportCallable(const Model::CreateExportRequest& request);

                /**
                 *用于创建、发布一个新的模型服务
                 * @param req CreateModelServiceRequest
                 * @return CreateModelServiceOutcome
                 */
                CreateModelServiceOutcome CreateModelService(const Model::CreateModelServiceRequest &request);
                void CreateModelServiceAsync(const Model::CreateModelServiceRequest& request, const CreateModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelServiceOutcomeCallable CreateModelServiceCallable(const Model::CreateModelServiceRequest& request);

                /**
                 *创建一个 AuthToken
                 * @param req CreateModelServiceAuthTokenRequest
                 * @return CreateModelServiceAuthTokenOutcome
                 */
                CreateModelServiceAuthTokenOutcome CreateModelServiceAuthToken(const Model::CreateModelServiceAuthTokenRequest &request);
                void CreateModelServiceAuthTokenAsync(const Model::CreateModelServiceAuthTokenRequest& request, const CreateModelServiceAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelServiceAuthTokenOutcomeCallable CreateModelServiceAuthTokenCallable(const Model::CreateModelServiceAuthTokenRequest& request);

                /**
                 *创建挂载限制
                 * @param req CreateMountLimitRequest
                 * @return CreateMountLimitOutcome
                 */
                CreateMountLimitOutcome CreateMountLimit(const Model::CreateMountLimitRequest &request);
                void CreateMountLimitAsync(const Model::CreateMountLimitRequest& request, const CreateMountLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMountLimitOutcomeCallable CreateMountLimitCallable(const Model::CreateMountLimitRequest& request);

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
                 *生成Notebook访问链接
                 * @param req CreatePresignedNotebookUrlRequest
                 * @return CreatePresignedNotebookUrlOutcome
                 */
                CreatePresignedNotebookUrlOutcome CreatePresignedNotebookUrl(const Model::CreatePresignedNotebookUrlRequest &request);
                void CreatePresignedNotebookUrlAsync(const Model::CreatePresignedNotebookUrlRequest& request, const CreatePresignedNotebookUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePresignedNotebookUrlOutcomeCallable CreatePresignedNotebookUrlCallable(const Model::CreatePresignedNotebookUrlRequest& request);

                /**
                 *创建自定义角色
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

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
                 *删除数据源
                 * @param req DeleteDataSourceRequest
                 * @return DeleteDataSourceOutcome
                 */
                DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest &request);
                void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request);

                /**
                 *删除数据集
                 * @param req DeleteDatasetRequest
                 * @return DeleteDatasetOutcome
                 */
                DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest &request);
                void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request);

                /**
                 *删除任务式建模训练任务，Notebook，在线服务和批量预测任务日志导出任务API
                 * @param req DeleteExportRequest
                 * @return DeleteExportOutcome
                 */
                DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest &request);
                void DeleteExportAsync(const Model::DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExportOutcomeCallable DeleteExportCallable(const Model::DeleteExportRequest& request);

                /**
                 *根据服务id删除模型服务
                 * @param req DeleteModelServiceRequest
                 * @return DeleteModelServiceOutcome
                 */
                DeleteModelServiceOutcome DeleteModelService(const Model::DeleteModelServiceRequest &request);
                void DeleteModelServiceAsync(const Model::DeleteModelServiceRequest& request, const DeleteModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelServiceOutcomeCallable DeleteModelServiceCallable(const Model::DeleteModelServiceRequest& request);

                /**
                 *删除一个 AuthToken
                 * @param req DeleteModelServiceAuthTokenRequest
                 * @return DeleteModelServiceAuthTokenOutcome
                 */
                DeleteModelServiceAuthTokenOutcome DeleteModelServiceAuthToken(const Model::DeleteModelServiceAuthTokenRequest &request);
                void DeleteModelServiceAuthTokenAsync(const Model::DeleteModelServiceAuthTokenRequest& request, const DeleteModelServiceAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelServiceAuthTokenOutcomeCallable DeleteModelServiceAuthTokenCallable(const Model::DeleteModelServiceAuthTokenRequest& request);

                /**
                 *根据服务组id删除服务组下所有模型服务
                 * @param req DeleteModelServiceGroupRequest
                 * @return DeleteModelServiceGroupOutcome
                 */
                DeleteModelServiceGroupOutcome DeleteModelServiceGroup(const Model::DeleteModelServiceGroupRequest &request);
                void DeleteModelServiceGroupAsync(const Model::DeleteModelServiceGroupRequest& request, const DeleteModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelServiceGroupOutcomeCallable DeleteModelServiceGroupCallable(const Model::DeleteModelServiceGroupRequest& request);

                /**
                 *删除挂载限制。注意：删除挂载限制后，该存储对应的所有数据源也会被删除
                 * @param req DeleteMountLimitRequest
                 * @return DeleteMountLimitOutcome
                 */
                DeleteMountLimitOutcome DeleteMountLimit(const Model::DeleteMountLimitRequest &request);
                void DeleteMountLimitAsync(const Model::DeleteMountLimitRequest& request, const DeleteMountLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMountLimitOutcomeCallable DeleteMountLimitCallable(const Model::DeleteMountLimitRequest& request);

                /**
                 *删除Notebook
                 * @param req DeleteNotebookRequest
                 * @return DeleteNotebookOutcome
                 */
                DeleteNotebookOutcome DeleteNotebook(const Model::DeleteNotebookRequest &request);
                void DeleteNotebookAsync(const Model::DeleteNotebookRequest& request, const DeleteNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotebookOutcomeCallable DeleteNotebookCallable(const Model::DeleteNotebookRequest& request);

                /**
                 *删除权限角色
                 * @param req DeleteRoleRequest
                 * @return DeleteRoleOutcome
                 */
                DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest &request);
                void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request);

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
                 *列取访问权限规则列表
                 * @param req DescribeAccessRulesRequest
                 * @return DescribeAccessRulesOutcome
                 */
                DescribeAccessRulesOutcome DescribeAccessRules(const Model::DescribeAccessRulesRequest &request);
                void DescribeAccessRulesAsync(const Model::DescribeAccessRulesRequest& request, const DescribeAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessRulesOutcomeCallable DescribeAccessRulesCallable(const Model::DescribeAccessRulesRequest& request);

                /**
                 *本接口（DescribeAnnotatedTaskList）用于查询用户标注任务详细信息列表；支持各种过滤条件；
                 * @param req DescribeAnnotatedTaskListRequest
                 * @return DescribeAnnotatedTaskListOutcome
                 */
                DescribeAnnotatedTaskListOutcome DescribeAnnotatedTaskList(const Model::DescribeAnnotatedTaskListRequest &request);
                void DescribeAnnotatedTaskListAsync(const Model::DescribeAnnotatedTaskListRequest& request, const DescribeAnnotatedTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnnotatedTaskListOutcomeCallable DescribeAnnotatedTaskListCallable(const Model::DescribeAnnotatedTaskListRequest& request);

                /**
                 *查询资源组节点列表
                 * @param req DescribeBillingResourceGroupRequest
                 * @return DescribeBillingResourceGroupOutcome
                 */
                DescribeBillingResourceGroupOutcome DescribeBillingResourceGroup(const Model::DescribeBillingResourceGroupRequest &request);
                void DescribeBillingResourceGroupAsync(const Model::DescribeBillingResourceGroupRequest& request, const DescribeBillingResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingResourceGroupOutcomeCallable DescribeBillingResourceGroupCallable(const Model::DescribeBillingResourceGroupRequest& request);

                /**
                 *查询资源组关联的工作空间列表
                 * @param req DescribeBillingResourceGroupAttachedWorkspacesRequest
                 * @return DescribeBillingResourceGroupAttachedWorkspacesOutcome
                 */
                DescribeBillingResourceGroupAttachedWorkspacesOutcome DescribeBillingResourceGroupAttachedWorkspaces(const Model::DescribeBillingResourceGroupAttachedWorkspacesRequest &request);
                void DescribeBillingResourceGroupAttachedWorkspacesAsync(const Model::DescribeBillingResourceGroupAttachedWorkspacesRequest& request, const DescribeBillingResourceGroupAttachedWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingResourceGroupAttachedWorkspacesOutcomeCallable DescribeBillingResourceGroupAttachedWorkspacesCallable(const Model::DescribeBillingResourceGroupAttachedWorkspacesRequest& request);

                /**
                 *查询资源组列表
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
                 *本接口(DescribeBillingSpecs) 提供查询计费项列表
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
                 *获取内置镜像列表
                 * @param req DescribeBuildInImagesRequest
                 * @return DescribeBuildInImagesOutcome
                 */
                DescribeBuildInImagesOutcome DescribeBuildInImages(const Model::DescribeBuildInImagesRequest &request);
                void DescribeBuildInImagesAsync(const Model::DescribeBuildInImagesRequest& request, const DescribeBuildInImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBuildInImagesOutcomeCallable DescribeBuildInImagesCallable(const Model::DescribeBuildInImagesRequest& request);

                /**
                 *获取数据源详情
                 * @param req DescribeDataSourceRequest
                 * @return DescribeDataSourceOutcome
                 */
                DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest &request);
                void DescribeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const Model::DescribeDataSourceRequest& request);

                /**
                 *获取数据源列表
                 * @param req DescribeDataSourcesRequest
                 * @return DescribeDataSourcesOutcome
                 */
                DescribeDataSourcesOutcome DescribeDataSources(const Model::DescribeDataSourcesRequest &request);
                void DescribeDataSourcesAsync(const Model::DescribeDataSourcesRequest& request, const DescribeDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourcesOutcomeCallable DescribeDataSourcesCallable(const Model::DescribeDataSourcesRequest& request);

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
                 *查看任务式建模训练任务，Notebook，在线服务和批量预测任务日志下载任务状态API
                 * @param req DescribeExportRequest
                 * @return DescribeExportOutcome
                 */
                DescribeExportOutcome DescribeExport(const Model::DescribeExportRequest &request);
                void DescribeExportAsync(const Model::DescribeExportRequest& request, const DescribeExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportOutcomeCallable DescribeExportCallable(const Model::DescribeExportRequest& request);

                /**
                 *已废弃，收敛到统一接口

查询推理镜像模板
                 * @param req DescribeInferTemplatesRequest
                 * @return DescribeInferTemplatesOutcome
                 */
                DescribeInferTemplatesOutcome DescribeInferTemplates(const Model::DescribeInferTemplatesRequest &request);
                void DescribeInferTemplatesAsync(const Model::DescribeInferTemplatesRequest& request, const DescribeInferTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInferTemplatesOutcomeCallable DescribeInferTemplatesCallable(const Model::DescribeInferTemplatesRequest& request);

                /**
                 *获取任务式建模训练任务，Notebook，在线服务和批量预测任务的日志API
                 * @param req DescribeLogsRequest
                 * @return DescribeLogsOutcome
                 */
                DescribeLogsOutcome DescribeLogs(const Model::DescribeLogsRequest &request);
                void DescribeLogsAsync(const Model::DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsOutcomeCallable DescribeLogsCallable(const Model::DescribeLogsRequest& request);

                /**
                 *查询模型优化任务详情
                 * @param req DescribeModelAccelerateTaskRequest
                 * @return DescribeModelAccelerateTaskOutcome
                 */
                DescribeModelAccelerateTaskOutcome DescribeModelAccelerateTask(const Model::DescribeModelAccelerateTaskRequest &request);
                void DescribeModelAccelerateTaskAsync(const Model::DescribeModelAccelerateTaskRequest& request, const DescribeModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAccelerateTaskOutcomeCallable DescribeModelAccelerateTaskCallable(const Model::DescribeModelAccelerateTaskRequest& request);

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
                 *用于查询模型服务能否开启热更新
                 * @param req DescribeModelServiceHotUpdatedRequest
                 * @return DescribeModelServiceHotUpdatedOutcome
                 */
                DescribeModelServiceHotUpdatedOutcome DescribeModelServiceHotUpdated(const Model::DescribeModelServiceHotUpdatedRequest &request);
                void DescribeModelServiceHotUpdatedAsync(const Model::DescribeModelServiceHotUpdatedRequest& request, const DescribeModelServiceHotUpdatedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceHotUpdatedOutcomeCallable DescribeModelServiceHotUpdatedCallable(const Model::DescribeModelServiceHotUpdatedRequest& request);

                /**
                 *DescribeMountInstance
                 * @param req DescribeMountInstanceRequest
                 * @return DescribeMountInstanceOutcome
                 */
                DescribeMountInstanceOutcome DescribeMountInstance(const Model::DescribeMountInstanceRequest &request);
                void DescribeMountInstanceAsync(const Model::DescribeMountInstanceRequest& request, const DescribeMountInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountInstanceOutcomeCallable DescribeMountInstanceCallable(const Model::DescribeMountInstanceRequest& request);

                /**
                 *非数据源挂载时获取实例列表
                 * @param req DescribeMountInstancesRequest
                 * @return DescribeMountInstancesOutcome
                 */
                DescribeMountInstancesOutcome DescribeMountInstances(const Model::DescribeMountInstancesRequest &request);
                void DescribeMountInstancesAsync(const Model::DescribeMountInstancesRequest& request, const DescribeMountInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountInstancesOutcomeCallable DescribeMountInstancesCallable(const Model::DescribeMountInstancesRequest& request);

                /**
                 *获取挂载限制列表
                 * @param req DescribeMountLimitsRequest
                 * @return DescribeMountLimitsOutcome
                 */
                DescribeMountLimitsOutcome DescribeMountLimits(const Model::DescribeMountLimitsRequest &request);
                void DescribeMountLimitsAsync(const Model::DescribeMountLimitsRequest& request, const DescribeMountLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountLimitsOutcomeCallable DescribeMountLimitsCallable(const Model::DescribeMountLimitsRequest& request);

                /**
                 *Notebook详情
                 * @param req DescribeNotebookRequest
                 * @return DescribeNotebookOutcome
                 */
                DescribeNotebookOutcome DescribeNotebook(const Model::DescribeNotebookRequest &request);
                void DescribeNotebookAsync(const Model::DescribeNotebookRequest& request, const DescribeNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookOutcomeCallable DescribeNotebookCallable(const Model::DescribeNotebookRequest& request);

                /**
                 *Notebook列表
                 * @param req DescribeNotebooksRequest
                 * @return DescribeNotebooksOutcome
                 */
                DescribeNotebooksOutcome DescribeNotebooks(const Model::DescribeNotebooksRequest &request);
                void DescribeNotebooksAsync(const Model::DescribeNotebooksRequest& request, const DescribeNotebooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebooksOutcomeCallable DescribeNotebooksCallable(const Model::DescribeNotebooksRequest& request);

                /**
                 *查询平台镜像信息
                 * @param req DescribePlatformImagesRequest
                 * @return DescribePlatformImagesOutcome
                 */
                DescribePlatformImagesOutcome DescribePlatformImages(const Model::DescribePlatformImagesRequest &request);
                void DescribePlatformImagesAsync(const Model::DescribePlatformImagesRequest& request, const DescribePlatformImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlatformImagesOutcomeCallable DescribePlatformImagesCallable(const Model::DescribePlatformImagesRequest& request);

                /**
                 *该接口用于查询内置镜像列表
                 * @param req DescribePresetImageListRequest
                 * @return DescribePresetImageListOutcome
                 */
                DescribePresetImageListOutcome DescribePresetImageList(const Model::DescribePresetImageListRequest &request);
                void DescribePresetImageListAsync(const Model::DescribePresetImageListRequest& request, const DescribePresetImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePresetImageListOutcomeCallable DescribePresetImageListCallable(const Model::DescribePresetImageListRequest& request);

                /**
                 *公共算法版本列表
                 * @param req DescribePublicAlgoVersionListRequest
                 * @return DescribePublicAlgoVersionListOutcome
                 */
                DescribePublicAlgoVersionListOutcome DescribePublicAlgoVersionList(const Model::DescribePublicAlgoVersionListRequest &request);
                void DescribePublicAlgoVersionListAsync(const Model::DescribePublicAlgoVersionListRequest& request, const DescribePublicAlgoVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicAlgoVersionListOutcomeCallable DescribePublicAlgoVersionListCallable(const Model::DescribePublicAlgoVersionListRequest& request);

                /**
                 *获取角色详情
                 * @param req DescribeRoleRequest
                 * @return DescribeRoleOutcome
                 */
                DescribeRoleOutcome DescribeRole(const Model::DescribeRoleRequest &request);
                void DescribeRoleAsync(const Model::DescribeRoleRequest& request, const DescribeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleOutcomeCallable DescribeRoleCallable(const Model::DescribeRoleRequest& request);

                /**
                 *获取角色下已授权的用户列表
                 * @param req DescribeRoleUsersRequest
                 * @return DescribeRoleUsersOutcome
                 */
                DescribeRoleUsersOutcome DescribeRoleUsers(const Model::DescribeRoleUsersRequest &request);
                void DescribeRoleUsersAsync(const Model::DescribeRoleUsersRequest& request, const DescribeRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleUsersOutcomeCallable DescribeRoleUsersCallable(const Model::DescribeRoleUsersRequest& request);

                /**
                 *获取角色列表
                 * @param req DescribeRolesRequest
                 * @return DescribeRolesOutcome
                 */
                DescribeRolesOutcome DescribeRoles(const Model::DescribeRolesRequest &request);
                void DescribeRolesAsync(const Model::DescribeRolesRequest& request, const DescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRolesOutcomeCallable DescribeRolesCallable(const Model::DescribeRolesRequest& request);

                /**
                 *批量查询子账号Linux用户信息
                 * @param req DescribeSubAccountLinuxUserInfosRequest
                 * @return DescribeSubAccountLinuxUserInfosOutcome
                 */
                DescribeSubAccountLinuxUserInfosOutcome DescribeSubAccountLinuxUserInfos(const Model::DescribeSubAccountLinuxUserInfosRequest &request);
                void DescribeSubAccountLinuxUserInfosAsync(const Model::DescribeSubAccountLinuxUserInfosRequest& request, const DescribeSubAccountLinuxUserInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAccountLinuxUserInfosOutcomeCallable DescribeSubAccountLinuxUserInfosCallable(const Model::DescribeSubAccountLinuxUserInfosRequest& request);

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
                 *训练任务详情
                 * @param req DescribeTrainingTaskRequest
                 * @return DescribeTrainingTaskOutcome
                 */
                DescribeTrainingTaskOutcome DescribeTrainingTask(const Model::DescribeTrainingTaskRequest &request);
                void DescribeTrainingTaskAsync(const Model::DescribeTrainingTaskRequest& request, const DescribeTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingTaskOutcomeCallable DescribeTrainingTaskCallable(const Model::DescribeTrainingTaskRequest& request);

                /**
                 *获取单个训练任务实例的登录链接
                 * @param req DescribeTrainingTaskPodUrlRequest
                 * @return DescribeTrainingTaskPodUrlOutcome
                 */
                DescribeTrainingTaskPodUrlOutcome DescribeTrainingTaskPodUrl(const Model::DescribeTrainingTaskPodUrlRequest &request);
                void DescribeTrainingTaskPodUrlAsync(const Model::DescribeTrainingTaskPodUrlRequest& request, const DescribeTrainingTaskPodUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrainingTaskPodUrlOutcomeCallable DescribeTrainingTaskPodUrlCallable(const Model::DescribeTrainingTaskPodUrlRequest& request);

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
                 *查询工作空间详情
                 * @param req DescribeWorkspaceRequest
                 * @return DescribeWorkspaceOutcome
                 */
                DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest &request);
                void DescribeWorkspaceAsync(const Model::DescribeWorkspaceRequest& request, const DescribeWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const Model::DescribeWorkspaceRequest& request);

                /**
                 *查询空间成员列表
                 * @param req DescribeWorkspaceMembersRequest
                 * @return DescribeWorkspaceMembersOutcome
                 */
                DescribeWorkspaceMembersOutcome DescribeWorkspaceMembers(const Model::DescribeWorkspaceMembersRequest &request);
                void DescribeWorkspaceMembersAsync(const Model::DescribeWorkspaceMembersRequest& request, const DescribeWorkspaceMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceMembersOutcomeCallable DescribeWorkspaceMembersCallable(const Model::DescribeWorkspaceMembersRequest& request);

                /**
                 *## DescribeWorkspaceQuotaUsage 接口文档

### 接口描述
查询工作空间配额用量信息。该接口用于查询指定工作空间下某个子账号的配额使用情况，支持多种配额类型（CBS存储配额、Notebook开发机数量配额、托管按量资源规格限制）。

### 错误码

| 错误码 | 说明 |
|--------|------|
| InvalidParameterValue | 参数值无效（如必填参数为空、QuotaType不在枚举范围内） |
| FailedOperation.QueryDatabaseFail | 数据库查询失败 |

### 示例

**请求示例**：
```json
{
  "QuotaType": "Notebook",
  "SupervisorUin": "100012345678",
  "SupervisorSubUin": "100012345679",
  "TiProjectId": "ti-proj-123456"
}
```

**响应示例**：
```json
{
  "QuotaType": "Notebook",
  "QuotaEnabled": true,
  "TotalQuota": 10,
  "UsedQuota": 3,
}
```
                 * @param req DescribeWorkspaceQuotaUsageRequest
                 * @return DescribeWorkspaceQuotaUsageOutcome
                 */
                DescribeWorkspaceQuotaUsageOutcome DescribeWorkspaceQuotaUsage(const Model::DescribeWorkspaceQuotaUsageRequest &request);
                void DescribeWorkspaceQuotaUsageAsync(const Model::DescribeWorkspaceQuotaUsageRequest& request, const DescribeWorkspaceQuotaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceQuotaUsageOutcomeCallable DescribeWorkspaceQuotaUsageCallable(const Model::DescribeWorkspaceQuotaUsageRequest& request);

                /**
                 *# DescribeWorkspaceQuotas 接口文档

## 接口描述

查询指定工作空间下的配额配置和配额列表。该接口用于获取主账号在某个工作空间下的配额管理配置，包括是否启用配额管理、默认配额值以及针对子账号或用户组的具体配额分配情况。

支持三种配额类型：
- **CBS**：CBS存储配额管理
- **Notebook**：开发机数量配额管理
- **PostPaySpec**：托管按量资源规格限制



## 请求参数

### 公共参数（HTTP Header）
| 参数名 | 类型 | 必填 | 描述 |
|--------|------|------|------|
| X-TC-Uin | string | 是 | 主账号Uin |
| X-TC-ProjectId | uint32 | 是 | 工作空间ID |

### 请求体参数
| 参数名 | 类型 | 必填 | 描述 |
|--------|------|------|------|
| QuotaType | string | 是 | 配额类型，可选值：<br>- `CBS`：CBS存储配额<br>- `Notebook`：开发机数量配额<br>- `PostPaySpec`：托管按量资源规格限制 |

## 响应参数

| 参数名 | 类型 | 描述 |
|--------|------|------|
| QuotaType | string | 配额类型 |
| QuotaEnabled | bool | 是否启用配额管理功能 |
| DefaultQuota | WorkspaceQuota | 默认配额配置（当QuotaEnabled为false时为空对象） |
| Quotas | ][WorkspaceQuota | 配额列表，包含所有子账号或用户组的配额配置（仅当QuotaEnabled为true时返回） |

### WorkspaceQuota

| 参数名 | 类型 | 描述 |
|--------|------|------|
| Id | string | 配额ID，格式：<br>- 用户配额：`{quota_type}-{uin}-{subuin}-{TiProjectId}`<br>- 用户组配额：`{quota_type}-{uin}-{groupid}-{TiProjectId}`<br>- 默认配额：`{quota_type}-{uin}-default-{TiProjectId}` |
| QuotaType | string | 配额类型 |
| Uin | string | 主账号Uin |
| SubUin | string | 子账号Uin（当TargetType为USER时有值） |
| SubUinName | string | 子账号名称（当TargetType为USER时有值） |
| QuotaValue | uint32 | 配额值：<br>- CBS：容量（GiB），默认100，范围10-10000<br>- Notebook：数量（个），默认1，范围1-999<br>- PostPaySpec：无意义，关注QuotaData字段 |
| QuotaData | []string | 配额数据（JSON数组格式）：<br>- 当QuotaType为PostPaySpec时，存储允许使用的规格ID列表 |
| TargetType | string | 配额目标类型：<br>- `USER`：用户配额<br>- `USER_GROUP`：用户组配额 |
| GroupId | string | 用户组ID（当TargetType为USER_GROUP时有值） |
| GroupName | string | 用户组名称（当TargetType为USER_GROUP时有值） |
| TiProjectId | string | 工作空间ID |

## 业务逻辑

1. **参数校验**：验证QuotaType参数是否合法
2. **查询配额配置**：根据主账号Uin、工作空间ID和配额类型查询配额配置
3. **配置不存在**：
   - 返回系统默认的配额启用状态和默认配额值
   - CBS默认启用，默认值100GiB
   - Notebook默认启用，默认值1个
   - PostPaySpec默认不启用
4. **配置存在但未启用**：
   - QuotaEnabled返回false
   - DefaultQuota返回空对象
   - Quotas不返回
5. **配置存在且已启用**：
   - QuotaEnabled返回true
   - DefaultQuota返回配置的默认配额值
   - Quotas返回所有子账号或用户组的配额列表
   - 自动反序列化QuotaData字段（JSON数组）

## 使用场景

1. **配额管理页面初始化**：获取当前工作空间的配额配置状态
2. **配额列表展示**：展示所有子账号或用户组的配额分配情况
3. **配额编辑前查询**：在修改配额前获取当前配置
4. **权限控制判断**：判断是否启用了配额管理功能

## 错误码

| 错误码 | 描述 | 解决方案 |
|--------|------|----------|
| InvalidParameterValue | 参数值错误 | 检查QuotaType参数是否为合法值（CBS/Notebook/PostPaySpec） |
| FailedOperation.QueryDatabaseFail | 数据库查询失败 | 稍后重试或联系管理员 |

## 请求示例

```json
{
  "QuotaType": "CBS"
}
```

**HTTP Header:**
```
X-TC-Uin: 100012345678
X-TC-ProjectId: 123456
```

## 响应示例

### 示例1：配额已启用且有配额列表

```json
{
  "QuotaType": "CBS",
  "QuotaEnabled": true,
  "DefaultQuota": {
    "Id": "CBS-100012345678-default-123456",
    "QuotaType": "CBS",
    "Uin": "100012345678",
    "SubUin": "",
    "SubUinName": "",
    "QuotaValue": 100,
    "QuotaData": [],
    "TargetType": "",
    "GroupId": "",
    "GroupName": "",
    "TiProjectId": "123456"
  },
  "Quotas": [
    {
      "Id": "CBS-100012345678-100012345679-123456",
      "QuotaType": "CBS",
      "Uin": "100012345678",
      "SubUin": "100012345679",
      "SubUinName": "张三",
      "QuotaValue": 200,
      "QuotaData": [],
      "TargetType": "USER",
      "GroupId": "",
      "GroupName": "",
      "TiProjectId": "123456"
    },
    {
      "Id": "CBS-100012345678-group001-123456",
      "QuotaType": "CBS",
      "Uin": "100012345678",
      "SubUin": "",
      "SubUinName": "",
      "QuotaValue": 500,
      "QuotaData": [],
      "TargetType": "USER_GROUP",
      "GroupId": "group001",
      "GroupName": "开发组",
      "TiProjectId": "123456"
    }
  ]
}
```

### 示例2：配额未启用

```json
{
  "QuotaType": "PostPaySpec",
  "QuotaEnabled": false,
  "DefaultQuota": {},
  "Quotas": []
}
```

### 示例3：PostPaySpec类型配额（带QuotaData）

```json
{
  "QuotaType": "PostPaySpec",
  "QuotaEnabled": true,
  "DefaultQuota": {
    "Id": "PostPaySpec-100012345678-default-123456",
    "QuotaType": "PostPaySpec",
    "Uin": "100012345678",
    "SubUin": "",
    "SubUinName": "",
    "QuotaValue": 0,
    "QuotaData": ["spec-001", "spec-002", "spec-003"],
    "TargetType": "",
    "GroupId": "",
    "GroupName": "",
    "TiProjectId": "123456"
  },
  "Quotas": [
    {
      "Id": "PostPaySpec-100012345678-100012345679-123456",
      "QuotaType": "PostPaySpec",
      "Uin": "100012345678",
      "SubUin": "100012345679",
      "SubUinName": "李四",
      "QuotaValue": 0,
      "QuotaData": ["spec-001", "spec-002"],
      "TargetType": "USER",
      "GroupId": "",
      "GroupName": "",
      "TiProjectId": "123456"
    }
  ]
}
```

## 注意事项

1. **配额继承规则**：
   - 如果子账号或用户组没有单独配置配额，则使用DefaultQuota的值
   - 用户组配额优先级高于默认配额，用户配额优先级最高

2. **QuotaData字段**：
   - 仅在QuotaType为PostPaySpec时有实际意义
   - 存储的是允许使用的规格ID列表
   - 其他类型的配额该字段为空数组

3. **TargetType字段**：
   - DefaultQuota的TargetType为空字符串
   - Quotas列表中的每个配额都有明确的TargetType

4. **配额值单位**：
   - CBS配额：GiB（1 GiB = 1024 MiB）
   - Notebook配额：个数

5. **性能优化**：
   - 接口会一次性返回所有配额列表，避免多次查询
   - 建议前端做好缓存，减少重复请求
                 * @param req DescribeWorkspaceQuotasRequest
                 * @return DescribeWorkspaceQuotasOutcome
                 */
                DescribeWorkspaceQuotasOutcome DescribeWorkspaceQuotas(const Model::DescribeWorkspaceQuotasRequest &request);
                void DescribeWorkspaceQuotasAsync(const Model::DescribeWorkspaceQuotasRequest& request, const DescribeWorkspaceQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceQuotasOutcomeCallable DescribeWorkspaceQuotasCallable(const Model::DescribeWorkspaceQuotasRequest& request);

                /**
                 *查询工作空间列表
                 * @param req DescribeWorkspacesRequest
                 * @return DescribeWorkspacesOutcome
                 */
                DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest &request);
                void DescribeWorkspacesAsync(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspacesOutcomeCallable DescribeWorkspacesCallable(const Model::DescribeWorkspacesRequest& request);

                /**
                 *开启CLS日志投递
                 * @param req EnableTrainingTaskClsConfigRequest
                 * @return EnableTrainingTaskClsConfigOutcome
                 */
                EnableTrainingTaskClsConfigOutcome EnableTrainingTaskClsConfig(const Model::EnableTrainingTaskClsConfigRequest &request);
                void EnableTrainingTaskClsConfigAsync(const Model::EnableTrainingTaskClsConfigRequest& request, const EnableTrainingTaskClsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTrainingTaskClsConfigOutcomeCallable EnableTrainingTaskClsConfigCallable(const Model::EnableTrainingTaskClsConfigRequest& request);

                /**
                 *用于更新模型服务
                 * @param req ModifyModelServiceRequest
                 * @return ModifyModelServiceOutcome
                 */
                ModifyModelServiceOutcome ModifyModelService(const Model::ModifyModelServiceRequest &request);
                void ModifyModelServiceAsync(const Model::ModifyModelServiceRequest& request, const ModifyModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelServiceOutcomeCallable ModifyModelServiceCallable(const Model::ModifyModelServiceRequest& request);

                /**
                 *修改一个 AuthToken
                 * @param req ModifyModelServiceAuthTokenRequest
                 * @return ModifyModelServiceAuthTokenOutcome
                 */
                ModifyModelServiceAuthTokenOutcome ModifyModelServiceAuthToken(const Model::ModifyModelServiceAuthTokenRequest &request);
                void ModifyModelServiceAuthTokenAsync(const Model::ModifyModelServiceAuthTokenRequest& request, const ModifyModelServiceAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelServiceAuthTokenOutcomeCallable ModifyModelServiceAuthTokenCallable(const Model::ModifyModelServiceAuthTokenRequest& request);

                /**
                 *修改服务鉴权配置
                 * @param req ModifyModelServiceAuthorizationRequest
                 * @return ModifyModelServiceAuthorizationOutcome
                 */
                ModifyModelServiceAuthorizationOutcome ModifyModelServiceAuthorization(const Model::ModifyModelServiceAuthorizationRequest &request);
                void ModifyModelServiceAuthorizationAsync(const Model::ModifyModelServiceAuthorizationRequest& request, const ModifyModelServiceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelServiceAuthorizationOutcomeCallable ModifyModelServiceAuthorizationCallable(const Model::ModifyModelServiceAuthorizationRequest& request);

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
                 *修改自定义角色
                 * @param req ModifyRoleRequest
                 * @return ModifyRoleOutcome
                 */
                ModifyRoleOutcome ModifyRole(const Model::ModifyRoleRequest &request);
                void ModifyRoleAsync(const Model::ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleOutcomeCallable ModifyRoleCallable(const Model::ModifyRoleRequest& request);

                /**
                 *修改自定义角色的权限规则
                 * @param req ModifyRoleAccessRulesRequest
                 * @return ModifyRoleAccessRulesOutcome
                 */
                ModifyRoleAccessRulesOutcome ModifyRoleAccessRules(const Model::ModifyRoleAccessRulesRequest &request);
                void ModifyRoleAccessRulesAsync(const Model::ModifyRoleAccessRulesRequest& request, const ModifyRoleAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleAccessRulesOutcomeCallable ModifyRoleAccessRulesCallable(const Model::ModifyRoleAccessRulesRequest& request);

                /**
                 *修改角色下用户的授权状态
                 * @param req ModifyRoleUserGrantRequest
                 * @return ModifyRoleUserGrantOutcome
                 */
                ModifyRoleUserGrantOutcome ModifyRoleUserGrant(const Model::ModifyRoleUserGrantRequest &request);
                void ModifyRoleUserGrantAsync(const Model::ModifyRoleUserGrantRequest& request, const ModifyRoleUserGrantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleUserGrantOutcomeCallable ModifyRoleUserGrantCallable(const Model::ModifyRoleUserGrantRequest& request);

                /**
                 *更新推理服务组流量分配
                 * @param req ModifyServiceGroupWeightsRequest
                 * @return ModifyServiceGroupWeightsOutcome
                 */
                ModifyServiceGroupWeightsOutcome ModifyServiceGroupWeights(const Model::ModifyServiceGroupWeightsRequest &request);
                void ModifyServiceGroupWeightsAsync(const Model::ModifyServiceGroupWeightsRequest& request, const ModifyServiceGroupWeightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceGroupWeightsOutcomeCallable ModifyServiceGroupWeightsCallable(const Model::ModifyServiceGroupWeightsRequest& request);

                /**
                 *更新用户授权
                 * @param req ModifyUserGrantRequest
                 * @return ModifyUserGrantOutcome
                 */
                ModifyUserGrantOutcome ModifyUserGrant(const Model::ModifyUserGrantRequest &request);
                void ModifyUserGrantAsync(const Model::ModifyUserGrantRequest& request, const ModifyUserGrantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserGrantOutcomeCallable ModifyUserGrantCallable(const Model::ModifyUserGrantRequest& request);

                /**
                 *更新空间用户列表
                 * @param req ModifyWorkspaceMembersRequest
                 * @return ModifyWorkspaceMembersOutcome
                 */
                ModifyWorkspaceMembersOutcome ModifyWorkspaceMembers(const Model::ModifyWorkspaceMembersRequest &request);
                void ModifyWorkspaceMembersAsync(const Model::ModifyWorkspaceMembersRequest& request, const ModifyWorkspaceMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspaceMembersOutcomeCallable ModifyWorkspaceMembersCallable(const Model::ModifyWorkspaceMembersRequest& request);

                /**
                 *上报训练自定义指标
                 * @param req PushTrainingMetricsRequest
                 * @return PushTrainingMetricsOutcome
                 */
                PushTrainingMetricsOutcome PushTrainingMetrics(const Model::PushTrainingMetricsRequest &request);
                void PushTrainingMetricsAsync(const Model::PushTrainingMetricsRequest& request, const PushTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushTrainingMetricsOutcomeCallable PushTrainingMetricsCallable(const Model::PushTrainingMetricsRequest& request);

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

                /**
                 *更新数据源
                 * @param req UpdateDataSourceRequest
                 * @return UpdateDataSourceOutcome
                 */
                UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest &request);
                void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request);

                /**
                 *创建挂载限制
                 * @param req UpdateMountLimitRequest
                 * @return UpdateMountLimitOutcome
                 */
                UpdateMountLimitOutcome UpdateMountLimit(const Model::UpdateMountLimitRequest &request);
                void UpdateMountLimitAsync(const Model::UpdateMountLimitRequest& request, const UpdateMountLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateMountLimitOutcomeCallable UpdateMountLimitCallable(const Model::UpdateMountLimitRequest& request);

                /**
                 *更新子账号Linux用户信息
                 * @param req UpdateSubAccountLinuxUserInfoRequest
                 * @return UpdateSubAccountLinuxUserInfoOutcome
                 */
                UpdateSubAccountLinuxUserInfoOutcome UpdateSubAccountLinuxUserInfo(const Model::UpdateSubAccountLinuxUserInfoRequest &request);
                void UpdateSubAccountLinuxUserInfoAsync(const Model::UpdateSubAccountLinuxUserInfoRequest& request, const UpdateSubAccountLinuxUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSubAccountLinuxUserInfoOutcomeCallable UpdateSubAccountLinuxUserInfoCallable(const Model::UpdateSubAccountLinuxUserInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_
