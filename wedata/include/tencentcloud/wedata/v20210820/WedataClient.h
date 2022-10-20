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

#ifndef TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceWithoutInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceWithoutInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/RerunInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RerunInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/TriggerEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/TriggerEventResponse.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            class WedataClient : public AbstractClient
            {
            public:
                WedataClient(const Credential &credential, const std::string &region);
                WedataClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchDeleteTasksNewResponse> BatchDeleteTasksNewOutcome;
                typedef std::future<BatchDeleteTasksNewOutcome> BatchDeleteTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteTasksNewRequest&, BatchDeleteTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyOwnersNewResponse> BatchModifyOwnersNewOutcome;
                typedef std::future<BatchModifyOwnersNewOutcome> BatchModifyOwnersNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchModifyOwnersNewRequest&, BatchModifyOwnersNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyOwnersNewAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopTasksNewResponse> BatchStopTasksNewOutcome;
                typedef std::future<BatchStopTasksNewOutcome> BatchStopTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopTasksNewRequest&, BatchStopTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomFunctionResponse> CreateCustomFunctionOutcome;
                typedef std::future<CreateCustomFunctionOutcome> CreateCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCustomFunctionRequest&, CreateCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataSourceResponse> CreateDataSourceOutcome;
                typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataSourceRequest&, CreateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFolderResponse> CreateFolderOutcome;
                typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateFolderRequest&, CreateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrUpdateResourceResponse> CreateOrUpdateResourceOutcome;
                typedef std::future<CreateOrUpdateResourceOutcome> CreateOrUpdateResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateOrUpdateResourceRequest&, CreateOrUpdateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomFunctionResponse> DeleteCustomFunctionOutcome;
                typedef std::future<DeleteCustomFunctionOutcome> DeleteCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCustomFunctionRequest&, DeleteCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataSourcesResponse> DeleteDataSourcesOutcome;
                typedef std::future<DeleteDataSourcesOutcome> DeleteDataSourcesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDataSourcesRequest&, DeleteDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFolderResponse> DeleteFolderOutcome;
                typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteFolderRequest&, DeleteFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceResponse> DeleteResourceOutcome;
                typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceRequest&, DeleteResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowNewResponse> DeleteWorkflowNewOutcome;
                typedef std::future<DeleteWorkflowNewOutcome> DeleteWorkflowNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowNewRequest&, DeleteWorkflowNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceListResponse> DescribeDataSourceListOutcome;
                typedef std::future<DescribeDataSourceListOutcome> DescribeDataSourceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceListRequest&, DescribeDataSourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceWithoutInfoResponse> DescribeDataSourceWithoutInfoOutcome;
                typedef std::future<DescribeDataSourceWithoutInfoOutcome> DescribeDataSourceWithoutInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceWithoutInfoRequest&, DescribeDataSourceWithoutInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceWithoutInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasourceResponse> DescribeDatasourceOutcome;
                typedef std::future<DescribeDatasourceOutcome> DescribeDatasourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatasourceRequest&, DescribeDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependTasksNewResponse> DescribeDependTasksNewOutcome;
                typedef std::future<DescribeDependTasksNewOutcome> DescribeDependTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependTasksNewRequest&, DescribeDependTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFolderListResponse> DescribeFolderListOutcome;
                typedef std::future<DescribeFolderListOutcome> DescribeFolderListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFolderListRequest&, DescribeFolderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFolderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFolderWorkflowListResponse> DescribeFolderWorkflowListOutcome;
                typedef std::future<DescribeFolderWorkflowListOutcome> DescribeFolderWorkflowListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFolderWorkflowListRequest&, DescribeFolderWorkflowListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFolderWorkflowListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionKindsResponse> DescribeFunctionKindsOutcome;
                typedef std::future<DescribeFunctionKindsOutcome> DescribeFunctionKindsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFunctionKindsRequest&, DescribeFunctionKindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionKindsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionTypesResponse> DescribeFunctionTypesOutcome;
                typedef std::future<DescribeFunctionTypesOutcome> DescribeFunctionTypesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFunctionTypesRequest&, DescribeFunctionTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogsResponse> DescribeInstanceLogsOutcome;
                typedef std::future<DescribeInstanceLogsOutcome> DescribeInstanceLogsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogsRequest&, DescribeInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationalFunctionsResponse> DescribeOrganizationalFunctionsOutcome;
                typedef std::future<DescribeOrganizationalFunctionsOutcome> DescribeOrganizationalFunctionsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOrganizationalFunctionsRequest&, DescribeOrganizationalFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationalFunctionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedInstancesResponse> DescribeRelatedInstancesOutcome;
                typedef std::future<DescribeRelatedInstancesOutcome> DescribeRelatedInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRelatedInstancesRequest&, DescribeRelatedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceManagePathTreesResponse> DescribeResourceManagePathTreesOutcome;
                typedef std::future<DescribeResourceManagePathTreesOutcome> DescribeResourceManagePathTreesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeResourceManagePathTreesRequest&, DescribeResourceManagePathTreesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceManagePathTreesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstancesResponse> DescribeTaskInstancesOutcome;
                typedef std::future<DescribeTaskInstancesOutcome> DescribeTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstancesRequest&, DescribeTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskScriptResponse> DescribeTaskScriptOutcome;
                typedef std::future<DescribeTaskScriptOutcome> DescribeTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskScriptRequest&, DescribeTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksByPageResponse> DescribeTasksByPageOutcome;
                typedef std::future<DescribeTasksByPageOutcome> DescribeTasksByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTasksByPageRequest&, DescribeTasksByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceSucInstancesResponse> ForceSucInstancesOutcome;
                typedef std::future<ForceSucInstancesOutcome> ForceSucInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ForceSucInstancesRequest&, ForceSucInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceSucInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksResponse> FreezeTasksOutcome;
                typedef std::future<FreezeTasksOutcome> FreezeTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksRequest&, FreezeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksByMultiWorkflowResponse> FreezeTasksByMultiWorkflowOutcome;
                typedef std::future<FreezeTasksByMultiWorkflowOutcome> FreezeTasksByMultiWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksByMultiWorkflowRequest&, FreezeTasksByMultiWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksByMultiWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::KillInstancesResponse> KillInstancesOutcome;
                typedef std::future<KillInstancesOutcome> KillInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillInstancesRequest&, KillInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpTasksNewResponse> MakeUpTasksNewOutcome;
                typedef std::future<MakeUpTasksNewOutcome> MakeUpTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpTasksNewRequest&, MakeUpTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpWorkflowNewResponse> MakeUpWorkflowNewOutcome;
                typedef std::future<MakeUpWorkflowNewOutcome> MakeUpWorkflowNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpWorkflowNewRequest&, MakeUpWorkflowNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpWorkflowNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataSourceResponse> ModifyDataSourceOutcome;
                typedef std::future<ModifyDataSourceOutcome> ModifyDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyDataSourceRequest&, ModifyDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFolderResponse> ModifyFolderOutcome;
                typedef std::future<ModifyFolderOutcome> ModifyFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyFolderRequest&, ModifyFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskInfoResponse> ModifyTaskInfoOutcome;
                typedef std::future<ModifyTaskInfoOutcome> ModifyTaskInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskInfoRequest&, ModifyTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskLinksResponse> ModifyTaskLinksOutcome;
                typedef std::future<ModifyTaskLinksOutcome> ModifyTaskLinksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskLinksRequest&, ModifyTaskLinksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskLinksAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskScriptResponse> ModifyTaskScriptOutcome;
                typedef std::future<ModifyTaskScriptOutcome> ModifyTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskScriptRequest&, ModifyTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkflowInfoResponse> ModifyWorkflowInfoOutcome;
                typedef std::future<ModifyWorkflowInfoOutcome> ModifyWorkflowInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyWorkflowInfoRequest&, ModifyWorkflowInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkflowInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkflowScheduleResponse> ModifyWorkflowScheduleOutcome;
                typedef std::future<ModifyWorkflowScheduleOutcome> ModifyWorkflowScheduleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyWorkflowScheduleRequest&, ModifyWorkflowScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkflowScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventResponse> RegisterEventOutcome;
                typedef std::future<RegisterEventOutcome> RegisterEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventRequest&, RegisterEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventListenerResponse> RegisterEventListenerOutcome;
                typedef std::future<RegisterEventListenerOutcome> RegisterEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventListenerRequest&, RegisterEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunInstancesResponse> RerunInstancesOutcome;
                typedef std::future<RerunInstancesOutcome> RerunInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RerunInstancesRequest&, RerunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunTaskResponse> RunTaskOutcome;
                typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunTaskRequest&, RunTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveCustomFunctionResponse> SaveCustomFunctionOutcome;
                typedef std::future<SaveCustomFunctionOutcome> SaveCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SaveCustomFunctionRequest&, SaveCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTaskAlarmNewResponse> SetTaskAlarmNewOutcome;
                typedef std::future<SetTaskAlarmNewOutcome> SetTaskAlarmNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SetTaskAlarmNewRequest&, SetTaskAlarmNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTaskAlarmNewAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitCustomFunctionResponse> SubmitCustomFunctionOutcome;
                typedef std::future<SubmitCustomFunctionOutcome> SubmitCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitCustomFunctionRequest&, SubmitCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTaskResponse> SubmitTaskOutcome;
                typedef std::future<SubmitTaskOutcome> SubmitTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitTaskRequest&, SubmitTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitWorkflowResponse> SubmitWorkflowOutcome;
                typedef std::future<SubmitWorkflowOutcome> SubmitWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitWorkflowRequest&, SubmitWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerEventResponse> TriggerEventOutcome;
                typedef std::future<TriggerEventOutcome> TriggerEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TriggerEventRequest&, TriggerEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerEventAsyncHandler;



                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
批量删除任务，仅对任务状态为”已停止“有效；

                 * @param req BatchDeleteTasksNewRequest
                 * @return BatchDeleteTasksNewOutcome
                 */
                BatchDeleteTasksNewOutcome BatchDeleteTasksNew(const Model::BatchDeleteTasksNewRequest &request);
                void BatchDeleteTasksNewAsync(const Model::BatchDeleteTasksNewRequest& request, const BatchDeleteTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteTasksNewOutcomeCallable BatchDeleteTasksNewCallable(const Model::BatchDeleteTasksNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
批量修改任务责任人
                 * @param req BatchModifyOwnersNewRequest
                 * @return BatchModifyOwnersNewOutcome
                 */
                BatchModifyOwnersNewOutcome BatchModifyOwnersNew(const Model::BatchModifyOwnersNewRequest &request);
                void BatchModifyOwnersNewAsync(const Model::BatchModifyOwnersNewRequest& request, const BatchModifyOwnersNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyOwnersNewOutcomeCallable BatchModifyOwnersNewCallable(const Model::BatchModifyOwnersNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
仅对任务状态为”调度中“和”已暂停“有效，对所选任务的任务实例进行终止，并停止调度
                 * @param req BatchStopTasksNewRequest
                 * @return BatchStopTasksNewOutcome
                 */
                BatchStopTasksNewOutcome BatchStopTasksNew(const Model::BatchStopTasksNewRequest &request);
                void BatchStopTasksNewAsync(const Model::BatchStopTasksNewRequest& request, const BatchStopTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopTasksNewOutcomeCallable BatchStopTasksNewCallable(const Model::BatchStopTasksNewRequest& request);

                /**
                 * 创建用户自定义函数
                 * @param req CreateCustomFunctionRequest
                 * @return CreateCustomFunctionOutcome
                 */
                CreateCustomFunctionOutcome CreateCustomFunction(const Model::CreateCustomFunctionRequest &request);
                void CreateCustomFunctionAsync(const Model::CreateCustomFunctionRequest& request, const CreateCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomFunctionOutcomeCallable CreateCustomFunctionCallable(const Model::CreateCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建数据源
                 * @param req CreateDataSourceRequest
                 * @return CreateDataSourceOutcome
                 */
                CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest &request);
                void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建文件夹
                 * @param req CreateFolderRequest
                 * @return CreateFolderOutcome
                 */
                CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest &request);
                void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request);

                /**
                 *资源管理需要先将资源上传到cos中，然后调用该接口，将cos资源绑定到wedata
                 * @param req CreateOrUpdateResourceRequest
                 * @return CreateOrUpdateResourceOutcome
                 */
                CreateOrUpdateResourceOutcome CreateOrUpdateResource(const Model::CreateOrUpdateResourceRequest &request);
                void CreateOrUpdateResourceAsync(const Model::CreateOrUpdateResourceRequest& request, const CreateOrUpdateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrUpdateResourceOutcomeCallable CreateOrUpdateResourceCallable(const Model::CreateOrUpdateResourceRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建任务
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建工作流
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *删除用户自定义函数
                 * @param req DeleteCustomFunctionRequest
                 * @return DeleteCustomFunctionOutcome
                 */
                DeleteCustomFunctionOutcome DeleteCustomFunction(const Model::DeleteCustomFunctionRequest &request);
                void DeleteCustomFunctionAsync(const Model::DeleteCustomFunctionRequest& request, const DeleteCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomFunctionOutcomeCallable DeleteCustomFunctionCallable(const Model::DeleteCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
删除数据源
                 * @param req DeleteDataSourcesRequest
                 * @return DeleteDataSourcesOutcome
                 */
                DeleteDataSourcesOutcome DeleteDataSources(const Model::DeleteDataSourcesRequest &request);
                void DeleteDataSourcesAsync(const Model::DeleteDataSourcesRequest& request, const DeleteDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataSourcesOutcomeCallable DeleteDataSourcesCallable(const Model::DeleteDataSourcesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
删除文件夹
                 * @param req DeleteFolderRequest
                 * @return DeleteFolderOutcome
                 */
                DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest &request);
                void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request);

                /**
                 *资源管理删除资源
                 * @param req DeleteResourceRequest
                 * @return DeleteResourceOutcome
                 */
                DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest &request);
                void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
删除工作流
                 * @param req DeleteWorkflowNewRequest
                 * @return DeleteWorkflowNewOutcome
                 */
                DeleteWorkflowNewOutcome DeleteWorkflowNew(const Model::DeleteWorkflowNewRequest &request);
                void DeleteWorkflowNewAsync(const Model::DeleteWorkflowNewRequest& request, const DeleteWorkflowNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowNewOutcomeCallable DeleteWorkflowNewCallable(const Model::DeleteWorkflowNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源详情
                 * @param req DescribeDataSourceListRequest
                 * @return DescribeDataSourceListOutcome
                 */
                DescribeDataSourceListOutcome DescribeDataSourceList(const Model::DescribeDataSourceListRequest &request);
                void DescribeDataSourceListAsync(const Model::DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceListOutcomeCallable DescribeDataSourceListCallable(const Model::DescribeDataSourceListRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源列表
                 * @param req DescribeDataSourceWithoutInfoRequest
                 * @return DescribeDataSourceWithoutInfoOutcome
                 */
                DescribeDataSourceWithoutInfoOutcome DescribeDataSourceWithoutInfo(const Model::DescribeDataSourceWithoutInfoRequest &request);
                void DescribeDataSourceWithoutInfoAsync(const Model::DescribeDataSourceWithoutInfoRequest& request, const DescribeDataSourceWithoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceWithoutInfoOutcomeCallable DescribeDataSourceWithoutInfoCallable(const Model::DescribeDataSourceWithoutInfoRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源详情
                 * @param req DescribeDatasourceRequest
                 * @return DescribeDatasourceOutcome
                 */
                DescribeDatasourceOutcome DescribeDatasource(const Model::DescribeDatasourceRequest &request);
                void DescribeDatasourceAsync(const Model::DescribeDatasourceRequest& request, const DescribeDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceOutcomeCallable DescribeDatasourceCallable(const Model::DescribeDatasourceRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
根据层级查找上/下游任务节点
                 * @param req DescribeDependTasksNewRequest
                 * @return DescribeDependTasksNewOutcome
                 */
                DescribeDependTasksNewOutcome DescribeDependTasksNew(const Model::DescribeDependTasksNewRequest &request);
                void DescribeDependTasksNewAsync(const Model::DescribeDependTasksNewRequest& request, const DescribeDependTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependTasksNewOutcomeCallable DescribeDependTasksNewCallable(const Model::DescribeDependTasksNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
拉取文件夹目录
                 * @param req DescribeFolderListRequest
                 * @return DescribeFolderListOutcome
                 */
                DescribeFolderListOutcome DescribeFolderList(const Model::DescribeFolderListRequest &request);
                void DescribeFolderListAsync(const Model::DescribeFolderListRequest& request, const DescribeFolderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFolderListOutcomeCallable DescribeFolderListCallable(const Model::DescribeFolderListRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
拉取文件夹下的工作流
                 * @param req DescribeFolderWorkflowListRequest
                 * @return DescribeFolderWorkflowListOutcome
                 */
                DescribeFolderWorkflowListOutcome DescribeFolderWorkflowList(const Model::DescribeFolderWorkflowListRequest &request);
                void DescribeFolderWorkflowListAsync(const Model::DescribeFolderWorkflowListRequest& request, const DescribeFolderWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFolderWorkflowListOutcomeCallable DescribeFolderWorkflowListCallable(const Model::DescribeFolderWorkflowListRequest& request);

                /**
                 *查询函数分类
                 * @param req DescribeFunctionKindsRequest
                 * @return DescribeFunctionKindsOutcome
                 */
                DescribeFunctionKindsOutcome DescribeFunctionKinds(const Model::DescribeFunctionKindsRequest &request);
                void DescribeFunctionKindsAsync(const Model::DescribeFunctionKindsRequest& request, const DescribeFunctionKindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionKindsOutcomeCallable DescribeFunctionKindsCallable(const Model::DescribeFunctionKindsRequest& request);

                /**
                 *查询函数类型
                 * @param req DescribeFunctionTypesRequest
                 * @return DescribeFunctionTypesOutcome
                 */
                DescribeFunctionTypesOutcome DescribeFunctionTypes(const Model::DescribeFunctionTypesRequest &request);
                void DescribeFunctionTypesAsync(const Model::DescribeFunctionTypesRequest& request, const DescribeFunctionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionTypesOutcomeCallable DescribeFunctionTypesCallable(const Model::DescribeFunctionTypesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
获取实例日志列表
                 * @param req DescribeInstanceLogsRequest
                 * @return DescribeInstanceLogsOutcome
                 */
                DescribeInstanceLogsOutcome DescribeInstanceLogs(const Model::DescribeInstanceLogsRequest &request);
                void DescribeInstanceLogsAsync(const Model::DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogsOutcomeCallable DescribeInstanceLogsCallable(const Model::DescribeInstanceLogsRequest& request);

                /**
                 *查询全量函数
                 * @param req DescribeOrganizationalFunctionsRequest
                 * @return DescribeOrganizationalFunctionsOutcome
                 */
                DescribeOrganizationalFunctionsOutcome DescribeOrganizationalFunctions(const Model::DescribeOrganizationalFunctionsRequest &request);
                void DescribeOrganizationalFunctionsAsync(const Model::DescribeOrganizationalFunctionsRequest& request, const DescribeOrganizationalFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationalFunctionsOutcomeCallable DescribeOrganizationalFunctionsCallable(const Model::DescribeOrganizationalFunctionsRequest& request);

                /**
                 *获取项目信息
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *查询任务实例的关联实例列表
                 * @param req DescribeRelatedInstancesRequest
                 * @return DescribeRelatedInstancesOutcome
                 */
                DescribeRelatedInstancesOutcome DescribeRelatedInstances(const Model::DescribeRelatedInstancesRequest &request);
                void DescribeRelatedInstancesAsync(const Model::DescribeRelatedInstancesRequest& request, const DescribeRelatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedInstancesOutcomeCallable DescribeRelatedInstancesCallable(const Model::DescribeRelatedInstancesRequest& request);

                /**
                 *获取资源管理目录树
                 * @param req DescribeResourceManagePathTreesRequest
                 * @return DescribeResourceManagePathTreesOutcome
                 */
                DescribeResourceManagePathTreesOutcome DescribeResourceManagePathTrees(const Model::DescribeResourceManagePathTreesRequest &request);
                void DescribeResourceManagePathTreesAsync(const Model::DescribeResourceManagePathTreesRequest& request, const DescribeResourceManagePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceManagePathTreesOutcomeCallable DescribeResourceManagePathTreesCallable(const Model::DescribeResourceManagePathTreesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
查询任务具体详情
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *查询任务实例列表
                 * @param req DescribeTaskInstancesRequest
                 * @return DescribeTaskInstancesOutcome
                 */
                DescribeTaskInstancesOutcome DescribeTaskInstances(const Model::DescribeTaskInstancesRequest &request);
                void DescribeTaskInstancesAsync(const Model::DescribeTaskInstancesRequest& request, const DescribeTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInstancesOutcomeCallable DescribeTaskInstancesCallable(const Model::DescribeTaskInstancesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
查询任务脚本
                 * @param req DescribeTaskScriptRequest
                 * @return DescribeTaskScriptOutcome
                 */
                DescribeTaskScriptOutcome DescribeTaskScript(const Model::DescribeTaskScriptRequest &request);
                void DescribeTaskScriptAsync(const Model::DescribeTaskScriptRequest& request, const DescribeTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskScriptOutcomeCallable DescribeTaskScriptCallable(const Model::DescribeTaskScriptRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
根据工作流分页查询任务
                 * @param req DescribeTasksByPageRequest
                 * @return DescribeTasksByPageOutcome
                 */
                DescribeTasksByPageOutcome DescribeTasksByPage(const Model::DescribeTasksByPageRequest &request);
                void DescribeTasksByPageAsync(const Model::DescribeTasksByPageRequest& request, const DescribeTasksByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksByPageOutcomeCallable DescribeTasksByPageCallable(const Model::DescribeTasksByPageRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量置成功
                 * @param req ForceSucInstancesRequest
                 * @return ForceSucInstancesOutcome
                 */
                ForceSucInstancesOutcome ForceSucInstances(const Model::ForceSucInstancesRequest &request);
                void ForceSucInstancesAsync(const Model::ForceSucInstancesRequest& request, const ForceSucInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForceSucInstancesOutcomeCallable ForceSucInstancesCallable(const Model::ForceSucInstancesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
批量冻结任务
                 * @param req FreezeTasksRequest
                 * @return FreezeTasksOutcome
                 */
                FreezeTasksOutcome FreezeTasks(const Model::FreezeTasksRequest &request);
                void FreezeTasksAsync(const Model::FreezeTasksRequest& request, const FreezeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeTasksOutcomeCallable FreezeTasksCallable(const Model::FreezeTasksRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
基于多个工作流进行批量冻结任务操作
                 * @param req FreezeTasksByMultiWorkflowRequest
                 * @return FreezeTasksByMultiWorkflowOutcome
                 */
                FreezeTasksByMultiWorkflowOutcome FreezeTasksByMultiWorkflow(const Model::FreezeTasksByMultiWorkflowRequest &request);
                void FreezeTasksByMultiWorkflowAsync(const Model::FreezeTasksByMultiWorkflowRequest& request, const FreezeTasksByMultiWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeTasksByMultiWorkflowOutcomeCallable FreezeTasksByMultiWorkflowCallable(const Model::FreezeTasksByMultiWorkflowRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量终止操作
                 * @param req KillInstancesRequest
                 * @return KillInstancesOutcome
                 */
                KillInstancesOutcome KillInstances(const Model::KillInstancesRequest &request);
                void KillInstancesAsync(const Model::KillInstancesRequest& request, const KillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillInstancesOutcomeCallable KillInstancesCallable(const Model::KillInstancesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
任务批量补录，调度状态任务才可以补录；



                 * @param req MakeUpTasksNewRequest
                 * @return MakeUpTasksNewOutcome
                 */
                MakeUpTasksNewOutcome MakeUpTasksNew(const Model::MakeUpTasksNewRequest &request);
                void MakeUpTasksNewAsync(const Model::MakeUpTasksNewRequest& request, const MakeUpTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MakeUpTasksNewOutcomeCallable MakeUpTasksNewCallable(const Model::MakeUpTasksNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
工作流下所有任务的补录
                 * @param req MakeUpWorkflowNewRequest
                 * @return MakeUpWorkflowNewOutcome
                 */
                MakeUpWorkflowNewOutcome MakeUpWorkflowNew(const Model::MakeUpWorkflowNewRequest &request);
                void MakeUpWorkflowNewAsync(const Model::MakeUpWorkflowNewRequest& request, const MakeUpWorkflowNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MakeUpWorkflowNewOutcomeCallable MakeUpWorkflowNewCallable(const Model::MakeUpWorkflowNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
修改数据源
                 * @param req ModifyDataSourceRequest
                 * @return ModifyDataSourceOutcome
                 */
                ModifyDataSourceOutcome ModifyDataSource(const Model::ModifyDataSourceRequest &request);
                void ModifyDataSourceAsync(const Model::ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataSourceOutcomeCallable ModifyDataSourceCallable(const Model::ModifyDataSourceRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
文件夹更新
                 * @param req ModifyFolderRequest
                 * @return ModifyFolderOutcome
                 */
                ModifyFolderOutcome ModifyFolder(const Model::ModifyFolderRequest &request);
                void ModifyFolderAsync(const Model::ModifyFolderRequest& request, const ModifyFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFolderOutcomeCallable ModifyFolderCallable(const Model::ModifyFolderRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
更新任务
                 * @param req ModifyTaskInfoRequest
                 * @return ModifyTaskInfoOutcome
                 */
                ModifyTaskInfoOutcome ModifyTaskInfo(const Model::ModifyTaskInfoRequest &request);
                void ModifyTaskInfoAsync(const Model::ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskInfoOutcomeCallable ModifyTaskInfoCallable(const Model::ModifyTaskInfoRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
添加父任务依赖
                 * @param req ModifyTaskLinksRequest
                 * @return ModifyTaskLinksOutcome
                 */
                ModifyTaskLinksOutcome ModifyTaskLinks(const Model::ModifyTaskLinksRequest &request);
                void ModifyTaskLinksAsync(const Model::ModifyTaskLinksRequest& request, const ModifyTaskLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskLinksOutcomeCallable ModifyTaskLinksCallable(const Model::ModifyTaskLinksRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
修改任务脚本
                 * @param req ModifyTaskScriptRequest
                 * @return ModifyTaskScriptOutcome
                 */
                ModifyTaskScriptOutcome ModifyTaskScript(const Model::ModifyTaskScriptRequest &request);
                void ModifyTaskScriptAsync(const Model::ModifyTaskScriptRequest& request, const ModifyTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskScriptOutcomeCallable ModifyTaskScriptCallable(const Model::ModifyTaskScriptRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
更新工作流
                 * @param req ModifyWorkflowInfoRequest
                 * @return ModifyWorkflowInfoOutcome
                 */
                ModifyWorkflowInfoOutcome ModifyWorkflowInfo(const Model::ModifyWorkflowInfoRequest &request);
                void ModifyWorkflowInfoAsync(const Model::ModifyWorkflowInfoRequest& request, const ModifyWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkflowInfoOutcomeCallable ModifyWorkflowInfoCallable(const Model::ModifyWorkflowInfoRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
更新工作流调度
                 * @param req ModifyWorkflowScheduleRequest
                 * @return ModifyWorkflowScheduleOutcome
                 */
                ModifyWorkflowScheduleOutcome ModifyWorkflowSchedule(const Model::ModifyWorkflowScheduleRequest &request);
                void ModifyWorkflowScheduleAsync(const Model::ModifyWorkflowScheduleRequest& request, const ModifyWorkflowScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkflowScheduleOutcomeCallable ModifyWorkflowScheduleCallable(const Model::ModifyWorkflowScheduleRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
注册事件
                 * @param req RegisterEventRequest
                 * @return RegisterEventOutcome
                 */
                RegisterEventOutcome RegisterEvent(const Model::RegisterEventRequest &request);
                void RegisterEventAsync(const Model::RegisterEventRequest& request, const RegisterEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterEventOutcomeCallable RegisterEventCallable(const Model::RegisterEventRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
注册事件监听器
                 * @param req RegisterEventListenerRequest
                 * @return RegisterEventListenerOutcome
                 */
                RegisterEventListenerOutcome RegisterEventListener(const Model::RegisterEventListenerRequest &request);
                void RegisterEventListenerAsync(const Model::RegisterEventListenerRequest& request, const RegisterEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterEventListenerOutcomeCallable RegisterEventListenerCallable(const Model::RegisterEventListenerRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量重跑
                 * @param req RerunInstancesRequest
                 * @return RerunInstancesOutcome
                 */
                RerunInstancesOutcome RerunInstances(const Model::RerunInstancesRequest &request);
                void RerunInstancesAsync(const Model::RerunInstancesRequest& request, const RerunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunInstancesOutcomeCallable RerunInstancesCallable(const Model::RerunInstancesRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
运行任务
                 * @param req RunTaskRequest
                 * @return RunTaskOutcome
                 */
                RunTaskOutcome RunTask(const Model::RunTaskRequest &request);
                void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request);

                /**
                 *保存用户自定义函数
                 * @param req SaveCustomFunctionRequest
                 * @return SaveCustomFunctionOutcome
                 */
                SaveCustomFunctionOutcome SaveCustomFunction(const Model::SaveCustomFunctionRequest &request);
                void SaveCustomFunctionAsync(const Model::SaveCustomFunctionRequest& request, const SaveCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveCustomFunctionOutcomeCallable SaveCustomFunctionCallable(const Model::SaveCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
设置任务告警，新建/更新告警信息（最新）
                 * @param req SetTaskAlarmNewRequest
                 * @return SetTaskAlarmNewOutcome
                 */
                SetTaskAlarmNewOutcome SetTaskAlarmNew(const Model::SetTaskAlarmNewRequest &request);
                void SetTaskAlarmNewAsync(const Model::SetTaskAlarmNewRequest& request, const SetTaskAlarmNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTaskAlarmNewOutcomeCallable SetTaskAlarmNewCallable(const Model::SetTaskAlarmNewRequest& request);

                /**
                 *提交自定义函数
                 * @param req SubmitCustomFunctionRequest
                 * @return SubmitCustomFunctionOutcome
                 */
                SubmitCustomFunctionOutcome SubmitCustomFunction(const Model::SubmitCustomFunctionRequest &request);
                void SubmitCustomFunctionAsync(const Model::SubmitCustomFunctionRequest& request, const SubmitCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCustomFunctionOutcomeCallable SubmitCustomFunctionCallable(const Model::SubmitCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
提交任务
                 * @param req SubmitTaskRequest
                 * @return SubmitTaskOutcome
                 */
                SubmitTaskOutcome SubmitTask(const Model::SubmitTaskRequest &request);
                void SubmitTaskAsync(const Model::SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTaskOutcomeCallable SubmitTaskCallable(const Model::SubmitTaskRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
提交工作流
                 * @param req SubmitWorkflowRequest
                 * @return SubmitWorkflowOutcome
                 */
                SubmitWorkflowOutcome SubmitWorkflow(const Model::SubmitWorkflowRequest &request);
                void SubmitWorkflowAsync(const Model::SubmitWorkflowRequest& request, const SubmitWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitWorkflowOutcomeCallable SubmitWorkflowCallable(const Model::SubmitWorkflowRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
触发事件
                 * @param req TriggerEventRequest
                 * @return TriggerEventOutcome
                 */
                TriggerEventOutcome TriggerEvent(const Model::TriggerEventRequest &request);
                void TriggerEventAsync(const Model::TriggerEventRequest& request, const TriggerEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerEventOutcomeCallable TriggerEventCallable(const Model::TriggerEventRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
