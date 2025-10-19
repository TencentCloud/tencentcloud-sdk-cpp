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

#ifndef TENCENTCLOUD_WEDATA_V20250806_WEDATACLIENT_H_
#define TENCENTCLOUD_WEDATA_V20250806_WEDATACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wedata/v20250806/model/AddCalcEnginesToProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/AddCalcEnginesToProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/AssociateResourceGroupToProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/AssociateResourceGroupToProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateCodeFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateCodeFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateCodeFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateCodeFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateDataBackfillPlanRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateDataBackfillPlanResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateDataSourceRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateDataSourceResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateOpsAlarmRuleRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateOpsAlarmRuleResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateProjectMemberRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateProjectMemberResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateResourceFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateResourceFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateResourceFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateResourceFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateResourceGroupRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateResourceGroupResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateSQLFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateSQLFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateSQLScriptRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateSQLScriptResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateTaskRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateTaskResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateWorkflowRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateWorkflowResponse.h>
#include <tencentcloud/wedata/v20250806/model/CreateWorkflowFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/CreateWorkflowFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteCodeFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteCodeFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteCodeFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteCodeFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteDataSourceRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteDataSourceResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteLineageRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteLineageResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteOpsAlarmRuleRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteOpsAlarmRuleResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteProjectMemberRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteProjectMemberResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteResourceFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteResourceFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteResourceFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteResourceFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteResourceGroupRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteResourceGroupResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteSQLFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteSQLFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteSQLScriptRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteSQLScriptResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteTaskRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteTaskResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowResponse.h>
#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/DisableProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/DisableProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/DissociateResourceGroupFromProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/DissociateResourceGroupFromProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/EnableProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/EnableProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetAlarmMessageRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetAlarmMessageResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetCodeFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetCodeFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetCodeFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetCodeFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetDataBackfillPlanRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetDataBackfillPlanResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetDataSourceRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetDataSourceResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetDataSourceRelatedTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetDataSourceRelatedTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsAlarmRuleRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsAlarmRuleResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsAsyncJobRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsAsyncJobResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsTaskRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsTaskResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsTaskCodeRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsTaskCodeResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsWorkflowRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetOpsWorkflowResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetResourceFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetResourceFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetResourceGroupMetricsRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetResourceGroupMetricsResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetSQLFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetSQLFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetSQLScriptRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetSQLScriptResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTableRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTableResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTableColumnsRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTableColumnsResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskCodeRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskCodeResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskInstanceRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskInstanceResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskInstanceLogRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskInstanceLogResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskVersionRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetTaskVersionResponse.h>
#include <tencentcloud/wedata/v20250806/model/GetWorkflowRequest.h>
#include <tencentcloud/wedata/v20250806/model/GetWorkflowResponse.h>
#include <tencentcloud/wedata/v20250806/model/GrantMemberProjectRoleRequest.h>
#include <tencentcloud/wedata/v20250806/model/GrantMemberProjectRoleResponse.h>
#include <tencentcloud/wedata/v20250806/model/KillTaskInstancesAsyncRequest.h>
#include <tencentcloud/wedata/v20250806/model/KillTaskInstancesAsyncResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListAlarmMessagesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListAlarmMessagesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListCatalogRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListCatalogResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListCodeFolderContentsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListCodeFolderContentsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListColumnLineageRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListColumnLineageResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListDataBackfillInstancesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListDataBackfillInstancesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListDataSourcesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListDataSourcesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListDatabaseRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListDatabaseResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListDownstreamOpsTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListDownstreamOpsTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListDownstreamTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListDownstreamTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListDownstreamTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListDownstreamTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListLineageRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListLineageResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListOpsAlarmRulesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListOpsAlarmRulesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListOpsTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListOpsTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListOpsWorkflowsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListOpsWorkflowsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListProcessLineageRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListProcessLineageResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListProjectMembersRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListProjectMembersResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListProjectRolesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListProjectRolesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListProjectsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListProjectsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListResourceFilesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListResourceFilesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListResourceFoldersRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListResourceFoldersResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListResourceGroupsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListResourceGroupsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListSQLFolderContentsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListSQLFolderContentsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListSQLScriptRunsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListSQLScriptRunsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListSchemaRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListSchemaResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListTableRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListTableResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListTaskInstanceExecutionsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListTaskInstanceExecutionsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListTaskVersionsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListTaskVersionsResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListTenantRolesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListTenantRolesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListUpstreamOpsTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListUpstreamOpsTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListUpstreamTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListUpstreamTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListUpstreamTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListUpstreamTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListWorkflowFoldersRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListWorkflowFoldersResponse.h>
#include <tencentcloud/wedata/v20250806/model/ListWorkflowsRequest.h>
#include <tencentcloud/wedata/v20250806/model/ListWorkflowsResponse.h>
#include <tencentcloud/wedata/v20250806/model/PauseOpsTasksAsyncRequest.h>
#include <tencentcloud/wedata/v20250806/model/PauseOpsTasksAsyncResponse.h>
#include <tencentcloud/wedata/v20250806/model/RegisterLineageRequest.h>
#include <tencentcloud/wedata/v20250806/model/RegisterLineageResponse.h>
#include <tencentcloud/wedata/v20250806/model/RemoveMemberProjectRoleRequest.h>
#include <tencentcloud/wedata/v20250806/model/RemoveMemberProjectRoleResponse.h>
#include <tencentcloud/wedata/v20250806/model/RerunTaskInstancesAsyncRequest.h>
#include <tencentcloud/wedata/v20250806/model/RerunTaskInstancesAsyncResponse.h>
#include <tencentcloud/wedata/v20250806/model/RunSQLScriptRequest.h>
#include <tencentcloud/wedata/v20250806/model/RunSQLScriptResponse.h>
#include <tencentcloud/wedata/v20250806/model/SetSuccessTaskInstancesAsyncRequest.h>
#include <tencentcloud/wedata/v20250806/model/SetSuccessTaskInstancesAsyncResponse.h>
#include <tencentcloud/wedata/v20250806/model/StartOpsTasksRequest.h>
#include <tencentcloud/wedata/v20250806/model/StartOpsTasksResponse.h>
#include <tencentcloud/wedata/v20250806/model/StopOpsTasksAsyncRequest.h>
#include <tencentcloud/wedata/v20250806/model/StopOpsTasksAsyncResponse.h>
#include <tencentcloud/wedata/v20250806/model/StopSQLScriptRunRequest.h>
#include <tencentcloud/wedata/v20250806/model/StopSQLScriptRunResponse.h>
#include <tencentcloud/wedata/v20250806/model/SubmitTaskRequest.h>
#include <tencentcloud/wedata/v20250806/model/SubmitTaskResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateCodeFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateCodeFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateCodeFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateCodeFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateDataSourceRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateDataSourceResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateOpsAlarmRuleRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateOpsAlarmRuleResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateOpsTasksOwnerRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateOpsTasksOwnerResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateProjectResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateResourceFileRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateResourceFileResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateResourceFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateResourceFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateResourceGroupRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateResourceGroupResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateSQLFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateSQLFolderResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateSQLScriptRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateSQLScriptResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTaskRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTaskResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateWorkflowRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateWorkflowResponse.h>
#include <tencentcloud/wedata/v20250806/model/UpdateWorkflowFolderRequest.h>
#include <tencentcloud/wedata/v20250806/model/UpdateWorkflowFolderResponse.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            class WedataClient : public AbstractClient
            {
            public:
                WedataClient(const Credential &credential, const std::string &region);
                WedataClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCalcEnginesToProjectResponse> AddCalcEnginesToProjectOutcome;
                typedef std::future<AddCalcEnginesToProjectOutcome> AddCalcEnginesToProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::AddCalcEnginesToProjectRequest&, AddCalcEnginesToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCalcEnginesToProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateResourceGroupToProjectResponse> AssociateResourceGroupToProjectOutcome;
                typedef std::future<AssociateResourceGroupToProjectOutcome> AssociateResourceGroupToProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::AssociateResourceGroupToProjectRequest&, AssociateResourceGroupToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateResourceGroupToProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCodeFileResponse> CreateCodeFileOutcome;
                typedef std::future<CreateCodeFileOutcome> CreateCodeFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCodeFileRequest&, CreateCodeFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodeFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCodeFolderResponse> CreateCodeFolderOutcome;
                typedef std::future<CreateCodeFolderOutcome> CreateCodeFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCodeFolderRequest&, CreateCodeFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodeFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataBackfillPlanResponse> CreateDataBackfillPlanOutcome;
                typedef std::future<CreateDataBackfillPlanOutcome> CreateDataBackfillPlanOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataBackfillPlanRequest&, CreateDataBackfillPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataBackfillPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataSourceResponse> CreateDataSourceOutcome;
                typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataSourceRequest&, CreateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOpsAlarmRuleResponse> CreateOpsAlarmRuleOutcome;
                typedef std::future<CreateOpsAlarmRuleOutcome> CreateOpsAlarmRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateOpsAlarmRuleRequest&, CreateOpsAlarmRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOpsAlarmRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectMemberResponse> CreateProjectMemberOutcome;
                typedef std::future<CreateProjectMemberOutcome> CreateProjectMemberOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateProjectMemberRequest&, CreateProjectMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceFileResponse> CreateResourceFileOutcome;
                typedef std::future<CreateResourceFileOutcome> CreateResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateResourceFileRequest&, CreateResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceFolderResponse> CreateResourceFolderOutcome;
                typedef std::future<CreateResourceFolderOutcome> CreateResourceFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateResourceFolderRequest&, CreateResourceFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceGroupResponse> CreateResourceGroupOutcome;
                typedef std::future<CreateResourceGroupOutcome> CreateResourceGroupOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateResourceGroupRequest&, CreateResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSQLFolderResponse> CreateSQLFolderOutcome;
                typedef std::future<CreateSQLFolderOutcome> CreateSQLFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateSQLFolderRequest&, CreateSQLFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSQLFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSQLScriptResponse> CreateSQLScriptOutcome;
                typedef std::future<CreateSQLScriptOutcome> CreateSQLScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateSQLScriptRequest&, CreateSQLScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSQLScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowFolderResponse> CreateWorkflowFolderOutcome;
                typedef std::future<CreateWorkflowFolderOutcome> CreateWorkflowFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateWorkflowFolderRequest&, CreateWorkflowFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCodeFileResponse> DeleteCodeFileOutcome;
                typedef std::future<DeleteCodeFileOutcome> DeleteCodeFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCodeFileRequest&, DeleteCodeFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCodeFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCodeFolderResponse> DeleteCodeFolderOutcome;
                typedef std::future<DeleteCodeFolderOutcome> DeleteCodeFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCodeFolderRequest&, DeleteCodeFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCodeFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataSourceResponse> DeleteDataSourceOutcome;
                typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDataSourceRequest&, DeleteDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLineageResponse> DeleteLineageOutcome;
                typedef std::future<DeleteLineageOutcome> DeleteLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteLineageRequest&, DeleteLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOpsAlarmRuleResponse> DeleteOpsAlarmRuleOutcome;
                typedef std::future<DeleteOpsAlarmRuleOutcome> DeleteOpsAlarmRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteOpsAlarmRuleRequest&, DeleteOpsAlarmRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOpsAlarmRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectMemberResponse> DeleteProjectMemberOutcome;
                typedef std::future<DeleteProjectMemberOutcome> DeleteProjectMemberOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteProjectMemberRequest&, DeleteProjectMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceFileResponse> DeleteResourceFileOutcome;
                typedef std::future<DeleteResourceFileOutcome> DeleteResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceFileRequest&, DeleteResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceFolderResponse> DeleteResourceFolderOutcome;
                typedef std::future<DeleteResourceFolderOutcome> DeleteResourceFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceFolderRequest&, DeleteResourceFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceGroupResponse> DeleteResourceGroupOutcome;
                typedef std::future<DeleteResourceGroupOutcome> DeleteResourceGroupOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceGroupRequest&, DeleteResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSQLFolderResponse> DeleteSQLFolderOutcome;
                typedef std::future<DeleteSQLFolderOutcome> DeleteSQLFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteSQLFolderRequest&, DeleteSQLFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSQLFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSQLScriptResponse> DeleteSQLScriptOutcome;
                typedef std::future<DeleteSQLScriptOutcome> DeleteSQLScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteSQLScriptRequest&, DeleteSQLScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSQLScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowFolderResponse> DeleteWorkflowFolderOutcome;
                typedef std::future<DeleteWorkflowFolderOutcome> DeleteWorkflowFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowFolderRequest&, DeleteWorkflowFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableProjectResponse> DisableProjectOutcome;
                typedef std::future<DisableProjectOutcome> DisableProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DisableProjectRequest&, DisableProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DissociateResourceGroupFromProjectResponse> DissociateResourceGroupFromProjectOutcome;
                typedef std::future<DissociateResourceGroupFromProjectOutcome> DissociateResourceGroupFromProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DissociateResourceGroupFromProjectRequest&, DissociateResourceGroupFromProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DissociateResourceGroupFromProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableProjectResponse> EnableProjectOutcome;
                typedef std::future<EnableProjectOutcome> EnableProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::EnableProjectRequest&, EnableProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAlarmMessageResponse> GetAlarmMessageOutcome;
                typedef std::future<GetAlarmMessageOutcome> GetAlarmMessageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetAlarmMessageRequest&, GetAlarmMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCodeFileResponse> GetCodeFileOutcome;
                typedef std::future<GetCodeFileOutcome> GetCodeFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetCodeFileRequest&, GetCodeFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCodeFolderResponse> GetCodeFolderOutcome;
                typedef std::future<GetCodeFolderOutcome> GetCodeFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetCodeFolderRequest&, GetCodeFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCodeFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDataBackfillPlanResponse> GetDataBackfillPlanOutcome;
                typedef std::future<GetDataBackfillPlanOutcome> GetDataBackfillPlanOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetDataBackfillPlanRequest&, GetDataBackfillPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDataBackfillPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDataSourceResponse> GetDataSourceOutcome;
                typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetDataSourceRequest&, GetDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDataSourceRelatedTasksResponse> GetDataSourceRelatedTasksOutcome;
                typedef std::future<GetDataSourceRelatedTasksOutcome> GetDataSourceRelatedTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetDataSourceRelatedTasksRequest&, GetDataSourceRelatedTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDataSourceRelatedTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOpsAlarmRuleResponse> GetOpsAlarmRuleOutcome;
                typedef std::future<GetOpsAlarmRuleOutcome> GetOpsAlarmRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOpsAlarmRuleRequest&, GetOpsAlarmRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsAlarmRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOpsAsyncJobResponse> GetOpsAsyncJobOutcome;
                typedef std::future<GetOpsAsyncJobOutcome> GetOpsAsyncJobOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOpsAsyncJobRequest&, GetOpsAsyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsAsyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOpsTaskResponse> GetOpsTaskOutcome;
                typedef std::future<GetOpsTaskOutcome> GetOpsTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOpsTaskRequest&, GetOpsTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOpsTaskCodeResponse> GetOpsTaskCodeOutcome;
                typedef std::future<GetOpsTaskCodeOutcome> GetOpsTaskCodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOpsTaskCodeRequest&, GetOpsTaskCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsTaskCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOpsWorkflowResponse> GetOpsWorkflowOutcome;
                typedef std::future<GetOpsWorkflowOutcome> GetOpsWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOpsWorkflowRequest&, GetOpsWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProjectResponse> GetProjectOutcome;
                typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetProjectRequest&, GetProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::GetResourceFileResponse> GetResourceFileOutcome;
                typedef std::future<GetResourceFileOutcome> GetResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetResourceFileRequest&, GetResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetResourceGroupMetricsResponse> GetResourceGroupMetricsOutcome;
                typedef std::future<GetResourceGroupMetricsOutcome> GetResourceGroupMetricsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetResourceGroupMetricsRequest&, GetResourceGroupMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceGroupMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSQLFolderResponse> GetSQLFolderOutcome;
                typedef std::future<GetSQLFolderOutcome> GetSQLFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetSQLFolderRequest&, GetSQLFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSQLFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSQLScriptResponse> GetSQLScriptOutcome;
                typedef std::future<GetSQLScriptOutcome> GetSQLScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetSQLScriptRequest&, GetSQLScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSQLScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTableResponse> GetTableOutcome;
                typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTableRequest&, GetTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTableColumnsResponse> GetTableColumnsOutcome;
                typedef std::future<GetTableColumnsOutcome> GetTableColumnsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTableColumnsRequest&, GetTableColumnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTableColumnsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskResponse> GetTaskOutcome;
                typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTaskRequest&, GetTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskCodeResponse> GetTaskCodeOutcome;
                typedef std::future<GetTaskCodeOutcome> GetTaskCodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTaskCodeRequest&, GetTaskCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskInstanceResponse> GetTaskInstanceOutcome;
                typedef std::future<GetTaskInstanceOutcome> GetTaskInstanceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTaskInstanceRequest&, GetTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskInstanceLogResponse> GetTaskInstanceLogOutcome;
                typedef std::future<GetTaskInstanceLogOutcome> GetTaskInstanceLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTaskInstanceLogRequest&, GetTaskInstanceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskInstanceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskVersionResponse> GetTaskVersionOutcome;
                typedef std::future<GetTaskVersionOutcome> GetTaskVersionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTaskVersionRequest&, GetTaskVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowResponse> GetWorkflowOutcome;
                typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetWorkflowRequest&, GetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantMemberProjectRoleResponse> GrantMemberProjectRoleOutcome;
                typedef std::future<GrantMemberProjectRoleOutcome> GrantMemberProjectRoleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GrantMemberProjectRoleRequest&, GrantMemberProjectRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantMemberProjectRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::KillTaskInstancesAsyncResponse> KillTaskInstancesAsyncOutcome;
                typedef std::future<KillTaskInstancesAsyncOutcome> KillTaskInstancesAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillTaskInstancesAsyncRequest&, KillTaskInstancesAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillTaskInstancesAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAlarmMessagesResponse> ListAlarmMessagesOutcome;
                typedef std::future<ListAlarmMessagesOutcome> ListAlarmMessagesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListAlarmMessagesRequest&, ListAlarmMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmMessagesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCatalogResponse> ListCatalogOutcome;
                typedef std::future<ListCatalogOutcome> ListCatalogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListCatalogRequest&, ListCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCodeFolderContentsResponse> ListCodeFolderContentsOutcome;
                typedef std::future<ListCodeFolderContentsOutcome> ListCodeFolderContentsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListCodeFolderContentsRequest&, ListCodeFolderContentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCodeFolderContentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListColumnLineageResponse> ListColumnLineageOutcome;
                typedef std::future<ListColumnLineageOutcome> ListColumnLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListColumnLineageRequest&, ListColumnLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListColumnLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDataBackfillInstancesResponse> ListDataBackfillInstancesOutcome;
                typedef std::future<ListDataBackfillInstancesOutcome> ListDataBackfillInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListDataBackfillInstancesRequest&, ListDataBackfillInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDataBackfillInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDataSourcesResponse> ListDataSourcesOutcome;
                typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListDataSourcesRequest&, ListDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDatabaseResponse> ListDatabaseOutcome;
                typedef std::future<ListDatabaseOutcome> ListDatabaseOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListDatabaseRequest&, ListDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDownstreamOpsTasksResponse> ListDownstreamOpsTasksOutcome;
                typedef std::future<ListDownstreamOpsTasksOutcome> ListDownstreamOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListDownstreamOpsTasksRequest&, ListDownstreamOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDownstreamOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDownstreamTaskInstancesResponse> ListDownstreamTaskInstancesOutcome;
                typedef std::future<ListDownstreamTaskInstancesOutcome> ListDownstreamTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListDownstreamTaskInstancesRequest&, ListDownstreamTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDownstreamTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDownstreamTasksResponse> ListDownstreamTasksOutcome;
                typedef std::future<ListDownstreamTasksOutcome> ListDownstreamTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListDownstreamTasksRequest&, ListDownstreamTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDownstreamTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLineageResponse> ListLineageOutcome;
                typedef std::future<ListLineageOutcome> ListLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListLineageRequest&, ListLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOpsAlarmRulesResponse> ListOpsAlarmRulesOutcome;
                typedef std::future<ListOpsAlarmRulesOutcome> ListOpsAlarmRulesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListOpsAlarmRulesRequest&, ListOpsAlarmRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOpsAlarmRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOpsTasksResponse> ListOpsTasksOutcome;
                typedef std::future<ListOpsTasksOutcome> ListOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListOpsTasksRequest&, ListOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOpsWorkflowsResponse> ListOpsWorkflowsOutcome;
                typedef std::future<ListOpsWorkflowsOutcome> ListOpsWorkflowsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListOpsWorkflowsRequest&, ListOpsWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOpsWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListProcessLineageResponse> ListProcessLineageOutcome;
                typedef std::future<ListProcessLineageOutcome> ListProcessLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListProcessLineageRequest&, ListProcessLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListProcessLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::ListProjectMembersResponse> ListProjectMembersOutcome;
                typedef std::future<ListProjectMembersOutcome> ListProjectMembersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListProjectMembersRequest&, ListProjectMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListProjectRolesResponse> ListProjectRolesOutcome;
                typedef std::future<ListProjectRolesOutcome> ListProjectRolesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListProjectRolesRequest&, ListProjectRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListProjectsResponse> ListProjectsOutcome;
                typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListProjectsRequest&, ListProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListResourceFilesResponse> ListResourceFilesOutcome;
                typedef std::future<ListResourceFilesOutcome> ListResourceFilesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListResourceFilesRequest&, ListResourceFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListResourceFoldersResponse> ListResourceFoldersOutcome;
                typedef std::future<ListResourceFoldersOutcome> ListResourceFoldersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListResourceFoldersRequest&, ListResourceFoldersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceFoldersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListResourceGroupsResponse> ListResourceGroupsOutcome;
                typedef std::future<ListResourceGroupsOutcome> ListResourceGroupsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListResourceGroupsRequest&, ListResourceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSQLFolderContentsResponse> ListSQLFolderContentsOutcome;
                typedef std::future<ListSQLFolderContentsOutcome> ListSQLFolderContentsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListSQLFolderContentsRequest&, ListSQLFolderContentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSQLFolderContentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSQLScriptRunsResponse> ListSQLScriptRunsOutcome;
                typedef std::future<ListSQLScriptRunsOutcome> ListSQLScriptRunsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListSQLScriptRunsRequest&, ListSQLScriptRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSQLScriptRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSchemaResponse> ListSchemaOutcome;
                typedef std::future<ListSchemaOutcome> ListSchemaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListSchemaRequest&, ListSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTableResponse> ListTableOutcome;
                typedef std::future<ListTableOutcome> ListTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListTableRequest&, ListTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTableAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTaskInstanceExecutionsResponse> ListTaskInstanceExecutionsOutcome;
                typedef std::future<ListTaskInstanceExecutionsOutcome> ListTaskInstanceExecutionsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListTaskInstanceExecutionsRequest&, ListTaskInstanceExecutionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskInstanceExecutionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTaskInstancesResponse> ListTaskInstancesOutcome;
                typedef std::future<ListTaskInstancesOutcome> ListTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListTaskInstancesRequest&, ListTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTaskVersionsResponse> ListTaskVersionsOutcome;
                typedef std::future<ListTaskVersionsOutcome> ListTaskVersionsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListTaskVersionsRequest&, ListTaskVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTasksResponse> ListTasksOutcome;
                typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListTasksRequest&, ListTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTenantRolesResponse> ListTenantRolesOutcome;
                typedef std::future<ListTenantRolesOutcome> ListTenantRolesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListTenantRolesRequest&, ListTenantRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTenantRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUpstreamOpsTasksResponse> ListUpstreamOpsTasksOutcome;
                typedef std::future<ListUpstreamOpsTasksOutcome> ListUpstreamOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListUpstreamOpsTasksRequest&, ListUpstreamOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUpstreamOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUpstreamTaskInstancesResponse> ListUpstreamTaskInstancesOutcome;
                typedef std::future<ListUpstreamTaskInstancesOutcome> ListUpstreamTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListUpstreamTaskInstancesRequest&, ListUpstreamTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUpstreamTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUpstreamTasksResponse> ListUpstreamTasksOutcome;
                typedef std::future<ListUpstreamTasksOutcome> ListUpstreamTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListUpstreamTasksRequest&, ListUpstreamTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUpstreamTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowFoldersResponse> ListWorkflowFoldersOutcome;
                typedef std::future<ListWorkflowFoldersOutcome> ListWorkflowFoldersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListWorkflowFoldersRequest&, ListWorkflowFoldersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowFoldersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowsResponse> ListWorkflowsOutcome;
                typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListWorkflowsRequest&, ListWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseOpsTasksAsyncResponse> PauseOpsTasksAsyncOutcome;
                typedef std::future<PauseOpsTasksAsyncOutcome> PauseOpsTasksAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::PauseOpsTasksAsyncRequest&, PauseOpsTasksAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseOpsTasksAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterLineageResponse> RegisterLineageOutcome;
                typedef std::future<RegisterLineageOutcome> RegisterLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterLineageRequest&, RegisterLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMemberProjectRoleResponse> RemoveMemberProjectRoleOutcome;
                typedef std::future<RemoveMemberProjectRoleOutcome> RemoveMemberProjectRoleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RemoveMemberProjectRoleRequest&, RemoveMemberProjectRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMemberProjectRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunTaskInstancesAsyncResponse> RerunTaskInstancesAsyncOutcome;
                typedef std::future<RerunTaskInstancesAsyncOutcome> RerunTaskInstancesAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RerunTaskInstancesAsyncRequest&, RerunTaskInstancesAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunTaskInstancesAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::RunSQLScriptResponse> RunSQLScriptOutcome;
                typedef std::future<RunSQLScriptOutcome> RunSQLScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunSQLScriptRequest&, RunSQLScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunSQLScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::SetSuccessTaskInstancesAsyncResponse> SetSuccessTaskInstancesAsyncOutcome;
                typedef std::future<SetSuccessTaskInstancesAsyncOutcome> SetSuccessTaskInstancesAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SetSuccessTaskInstancesAsyncRequest&, SetSuccessTaskInstancesAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetSuccessTaskInstancesAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOpsTasksResponse> StartOpsTasksOutcome;
                typedef std::future<StartOpsTasksOutcome> StartOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StartOpsTasksRequest&, StartOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::StopOpsTasksAsyncResponse> StopOpsTasksAsyncOutcome;
                typedef std::future<StopOpsTasksAsyncOutcome> StopOpsTasksAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StopOpsTasksAsyncRequest&, StopOpsTasksAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopOpsTasksAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSQLScriptRunResponse> StopSQLScriptRunOutcome;
                typedef std::future<StopSQLScriptRunOutcome> StopSQLScriptRunOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StopSQLScriptRunRequest&, StopSQLScriptRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSQLScriptRunAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTaskResponse> SubmitTaskOutcome;
                typedef std::future<SubmitTaskOutcome> SubmitTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitTaskRequest&, SubmitTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCodeFileResponse> UpdateCodeFileOutcome;
                typedef std::future<UpdateCodeFileOutcome> UpdateCodeFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateCodeFileRequest&, UpdateCodeFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCodeFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCodeFolderResponse> UpdateCodeFolderOutcome;
                typedef std::future<UpdateCodeFolderOutcome> UpdateCodeFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateCodeFolderRequest&, UpdateCodeFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCodeFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataSourceResponse> UpdateDataSourceOutcome;
                typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateDataSourceRequest&, UpdateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOpsAlarmRuleResponse> UpdateOpsAlarmRuleOutcome;
                typedef std::future<UpdateOpsAlarmRuleOutcome> UpdateOpsAlarmRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateOpsAlarmRuleRequest&, UpdateOpsAlarmRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOpsAlarmRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOpsTasksOwnerResponse> UpdateOpsTasksOwnerOutcome;
                typedef std::future<UpdateOpsTasksOwnerOutcome> UpdateOpsTasksOwnerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateOpsTasksOwnerRequest&, UpdateOpsTasksOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOpsTasksOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProjectResponse> UpdateProjectOutcome;
                typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateProjectRequest&, UpdateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateResourceFileResponse> UpdateResourceFileOutcome;
                typedef std::future<UpdateResourceFileOutcome> UpdateResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateResourceFileRequest&, UpdateResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateResourceFolderResponse> UpdateResourceFolderOutcome;
                typedef std::future<UpdateResourceFolderOutcome> UpdateResourceFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateResourceFolderRequest&, UpdateResourceFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateResourceGroupResponse> UpdateResourceGroupOutcome;
                typedef std::future<UpdateResourceGroupOutcome> UpdateResourceGroupOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateResourceGroupRequest&, UpdateResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSQLFolderResponse> UpdateSQLFolderOutcome;
                typedef std::future<UpdateSQLFolderOutcome> UpdateSQLFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateSQLFolderRequest&, UpdateSQLFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSQLFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSQLScriptResponse> UpdateSQLScriptOutcome;
                typedef std::future<UpdateSQLScriptOutcome> UpdateSQLScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateSQLScriptRequest&, UpdateSQLScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSQLScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTaskResponse> UpdateTaskOutcome;
                typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateTaskRequest&, UpdateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowResponse> UpdateWorkflowOutcome;
                typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateWorkflowRequest&, UpdateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowFolderResponse> UpdateWorkflowFolderOutcome;
                typedef std::future<UpdateWorkflowFolderOutcome> UpdateWorkflowFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateWorkflowFolderRequest&, UpdateWorkflowFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowFolderAsyncHandler;



                /**
                 *关联项目集群
                 * @param req AddCalcEnginesToProjectRequest
                 * @return AddCalcEnginesToProjectOutcome
                 */
                AddCalcEnginesToProjectOutcome AddCalcEnginesToProject(const Model::AddCalcEnginesToProjectRequest &request);
                void AddCalcEnginesToProjectAsync(const Model::AddCalcEnginesToProjectRequest& request, const AddCalcEnginesToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCalcEnginesToProjectOutcomeCallable AddCalcEnginesToProjectCallable(const Model::AddCalcEnginesToProjectRequest& request);

                /**
                 *该接口用于将指定执行资源组绑定到项目
                 * @param req AssociateResourceGroupToProjectRequest
                 * @return AssociateResourceGroupToProjectOutcome
                 */
                AssociateResourceGroupToProjectOutcome AssociateResourceGroupToProject(const Model::AssociateResourceGroupToProjectRequest &request);
                void AssociateResourceGroupToProjectAsync(const Model::AssociateResourceGroupToProjectRequest& request, const AssociateResourceGroupToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateResourceGroupToProjectOutcomeCallable AssociateResourceGroupToProjectCallable(const Model::AssociateResourceGroupToProjectRequest& request);

                /**
                 *新建代码文件
                 * @param req CreateCodeFileRequest
                 * @return CreateCodeFileOutcome
                 */
                CreateCodeFileOutcome CreateCodeFile(const Model::CreateCodeFileRequest &request);
                void CreateCodeFileAsync(const Model::CreateCodeFileRequest& request, const CreateCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodeFileOutcomeCallable CreateCodeFileCallable(const Model::CreateCodeFileRequest& request);

                /**
                 *新建代码文件夹
                 * @param req CreateCodeFolderRequest
                 * @return CreateCodeFolderOutcome
                 */
                CreateCodeFolderOutcome CreateCodeFolder(const Model::CreateCodeFolderRequest &request);
                void CreateCodeFolderAsync(const Model::CreateCodeFolderRequest& request, const CreateCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodeFolderOutcomeCallable CreateCodeFolderCallable(const Model::CreateCodeFolderRequest& request);

                /**
                 *创建数据补录计划
                 * @param req CreateDataBackfillPlanRequest
                 * @return CreateDataBackfillPlanOutcome
                 */
                CreateDataBackfillPlanOutcome CreateDataBackfillPlan(const Model::CreateDataBackfillPlanRequest &request);
                void CreateDataBackfillPlanAsync(const Model::CreateDataBackfillPlanRequest& request, const CreateDataBackfillPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataBackfillPlanOutcomeCallable CreateDataBackfillPlanCallable(const Model::CreateDataBackfillPlanRequest& request);

                /**
                 *该接口用于在指定项目中创建数据源
                 * @param req CreateDataSourceRequest
                 * @return CreateDataSourceOutcome
                 */
                CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest &request);
                void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request);

                /**
                 *设置告警规则
                 * @param req CreateOpsAlarmRuleRequest
                 * @return CreateOpsAlarmRuleOutcome
                 */
                CreateOpsAlarmRuleOutcome CreateOpsAlarmRule(const Model::CreateOpsAlarmRuleRequest &request);
                void CreateOpsAlarmRuleAsync(const Model::CreateOpsAlarmRuleRequest& request, const CreateOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOpsAlarmRuleOutcomeCallable CreateOpsAlarmRuleCallable(const Model::CreateOpsAlarmRuleRequest& request);

                /**
                 *创建项目，创建时包含集群信息
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *添加项目用户角色
                 * @param req CreateProjectMemberRequest
                 * @return CreateProjectMemberOutcome
                 */
                CreateProjectMemberOutcome CreateProjectMember(const Model::CreateProjectMemberRequest &request);
                void CreateProjectMemberAsync(const Model::CreateProjectMemberRequest& request, const CreateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectMemberOutcomeCallable CreateProjectMemberCallable(const Model::CreateProjectMemberRequest& request);

                /**
                 *创建资源文件
                 * @param req CreateResourceFileRequest
                 * @return CreateResourceFileOutcome
                 */
                CreateResourceFileOutcome CreateResourceFile(const Model::CreateResourceFileRequest &request);
                void CreateResourceFileAsync(const Model::CreateResourceFileRequest& request, const CreateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceFileOutcomeCallable CreateResourceFileCallable(const Model::CreateResourceFileRequest& request);

                /**
                 *创建资源文件文件夹
                 * @param req CreateResourceFolderRequest
                 * @return CreateResourceFolderOutcome
                 */
                CreateResourceFolderOutcome CreateResourceFolder(const Model::CreateResourceFolderRequest &request);
                void CreateResourceFolderAsync(const Model::CreateResourceFolderRequest& request, const CreateResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceFolderOutcomeCallable CreateResourceFolderCallable(const Model::CreateResourceFolderRequest& request);

                /**
                 *该接口用于购买资源
                 * @param req CreateResourceGroupRequest
                 * @return CreateResourceGroupOutcome
                 */
                CreateResourceGroupOutcome CreateResourceGroup(const Model::CreateResourceGroupRequest &request);
                void CreateResourceGroupAsync(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceGroupOutcomeCallable CreateResourceGroupCallable(const Model::CreateResourceGroupRequest& request);

                /**
                 *创建数据探索脚本文件夹
                 * @param req CreateSQLFolderRequest
                 * @return CreateSQLFolderOutcome
                 */
                CreateSQLFolderOutcome CreateSQLFolder(const Model::CreateSQLFolderRequest &request);
                void CreateSQLFolderAsync(const Model::CreateSQLFolderRequest& request, const CreateSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSQLFolderOutcomeCallable CreateSQLFolderCallable(const Model::CreateSQLFolderRequest& request);

                /**
                 *新增SQL脚本
                 * @param req CreateSQLScriptRequest
                 * @return CreateSQLScriptOutcome
                 */
                CreateSQLScriptOutcome CreateSQLScript(const Model::CreateSQLScriptRequest &request);
                void CreateSQLScriptAsync(const Model::CreateSQLScriptRequest& request, const CreateSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSQLScriptOutcomeCallable CreateSQLScriptCallable(const Model::CreateSQLScriptRequest& request);

                /**
                 *创建任务接口
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *创建工作流
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *创建文件夹
                 * @param req CreateWorkflowFolderRequest
                 * @return CreateWorkflowFolderOutcome
                 */
                CreateWorkflowFolderOutcome CreateWorkflowFolder(const Model::CreateWorkflowFolderRequest &request);
                void CreateWorkflowFolderAsync(const Model::CreateWorkflowFolderRequest& request, const CreateWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowFolderOutcomeCallable CreateWorkflowFolderCallable(const Model::CreateWorkflowFolderRequest& request);

                /**
                 *删除代码文件
                 * @param req DeleteCodeFileRequest
                 * @return DeleteCodeFileOutcome
                 */
                DeleteCodeFileOutcome DeleteCodeFile(const Model::DeleteCodeFileRequest &request);
                void DeleteCodeFileAsync(const Model::DeleteCodeFileRequest& request, const DeleteCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCodeFileOutcomeCallable DeleteCodeFileCallable(const Model::DeleteCodeFileRequest& request);

                /**
                 *数据探索删除文件夹
                 * @param req DeleteCodeFolderRequest
                 * @return DeleteCodeFolderOutcome
                 */
                DeleteCodeFolderOutcome DeleteCodeFolder(const Model::DeleteCodeFolderRequest &request);
                void DeleteCodeFolderAsync(const Model::DeleteCodeFolderRequest& request, const DeleteCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCodeFolderOutcomeCallable DeleteCodeFolderCallable(const Model::DeleteCodeFolderRequest& request);

                /**
                 *该接口用于删除数据源
                 * @param req DeleteDataSourceRequest
                 * @return DeleteDataSourceOutcome
                 */
                DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest &request);
                void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request);

                /**
                 *RegisterLineage
                 * @param req DeleteLineageRequest
                 * @return DeleteLineageOutcome
                 */
                DeleteLineageOutcome DeleteLineage(const Model::DeleteLineageRequest &request);
                void DeleteLineageAsync(const Model::DeleteLineageRequest& request, const DeleteLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLineageOutcomeCallable DeleteLineageCallable(const Model::DeleteLineageRequest& request);

                /**
                 *删除告警规则
                 * @param req DeleteOpsAlarmRuleRequest
                 * @return DeleteOpsAlarmRuleOutcome
                 */
                DeleteOpsAlarmRuleOutcome DeleteOpsAlarmRule(const Model::DeleteOpsAlarmRuleRequest &request);
                void DeleteOpsAlarmRuleAsync(const Model::DeleteOpsAlarmRuleRequest& request, const DeleteOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOpsAlarmRuleOutcomeCallable DeleteOpsAlarmRuleCallable(const Model::DeleteOpsAlarmRuleRequest& request);

                /**
                 *删除项目用户
                 * @param req DeleteProjectMemberRequest
                 * @return DeleteProjectMemberOutcome
                 */
                DeleteProjectMemberOutcome DeleteProjectMember(const Model::DeleteProjectMemberRequest &request);
                void DeleteProjectMemberAsync(const Model::DeleteProjectMemberRequest& request, const DeleteProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectMemberOutcomeCallable DeleteProjectMemberCallable(const Model::DeleteProjectMemberRequest& request);

                /**
                 *资源管理-删除资源文件
                 * @param req DeleteResourceFileRequest
                 * @return DeleteResourceFileOutcome
                 */
                DeleteResourceFileOutcome DeleteResourceFile(const Model::DeleteResourceFileRequest &request);
                void DeleteResourceFileAsync(const Model::DeleteResourceFileRequest& request, const DeleteResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceFileOutcomeCallable DeleteResourceFileCallable(const Model::DeleteResourceFileRequest& request);

                /**
                 *删除资源文件文件夹
                 * @param req DeleteResourceFolderRequest
                 * @return DeleteResourceFolderOutcome
                 */
                DeleteResourceFolderOutcome DeleteResourceFolder(const Model::DeleteResourceFolderRequest &request);
                void DeleteResourceFolderAsync(const Model::DeleteResourceFolderRequest& request, const DeleteResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceFolderOutcomeCallable DeleteResourceFolderCallable(const Model::DeleteResourceFolderRequest& request);

                /**
                 *该接口用于销毁资源
                 * @param req DeleteResourceGroupRequest
                 * @return DeleteResourceGroupOutcome
                 */
                DeleteResourceGroupOutcome DeleteResourceGroup(const Model::DeleteResourceGroupRequest &request);
                void DeleteResourceGroupAsync(const Model::DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceGroupOutcomeCallable DeleteResourceGroupCallable(const Model::DeleteResourceGroupRequest& request);

                /**
                 *删除SQL文件夹
                 * @param req DeleteSQLFolderRequest
                 * @return DeleteSQLFolderOutcome
                 */
                DeleteSQLFolderOutcome DeleteSQLFolder(const Model::DeleteSQLFolderRequest &request);
                void DeleteSQLFolderAsync(const Model::DeleteSQLFolderRequest& request, const DeleteSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSQLFolderOutcomeCallable DeleteSQLFolderCallable(const Model::DeleteSQLFolderRequest& request);

                /**
                 *删除探索脚本
                 * @param req DeleteSQLScriptRequest
                 * @return DeleteSQLScriptOutcome
                 */
                DeleteSQLScriptOutcome DeleteSQLScript(const Model::DeleteSQLScriptRequest &request);
                void DeleteSQLScriptAsync(const Model::DeleteSQLScriptRequest& request, const DeleteSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSQLScriptOutcomeCallable DeleteSQLScriptCallable(const Model::DeleteSQLScriptRequest& request);

                /**
                 *删除编排空间任务
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *删除工作流
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *删除数据开发文件夹
                 * @param req DeleteWorkflowFolderRequest
                 * @return DeleteWorkflowFolderOutcome
                 */
                DeleteWorkflowFolderOutcome DeleteWorkflowFolder(const Model::DeleteWorkflowFolderRequest &request);
                void DeleteWorkflowFolderAsync(const Model::DeleteWorkflowFolderRequest& request, const DeleteWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowFolderOutcomeCallable DeleteWorkflowFolderCallable(const Model::DeleteWorkflowFolderRequest& request);

                /**
                 *禁用项目
                 * @param req DisableProjectRequest
                 * @return DisableProjectOutcome
                 */
                DisableProjectOutcome DisableProject(const Model::DisableProjectRequest &request);
                void DisableProjectAsync(const Model::DisableProjectRequest& request, const DisableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableProjectOutcomeCallable DisableProjectCallable(const Model::DisableProjectRequest& request);

                /**
                 *该接口用于将指定执行资源组解除与项目的绑定
                 * @param req DissociateResourceGroupFromProjectRequest
                 * @return DissociateResourceGroupFromProjectOutcome
                 */
                DissociateResourceGroupFromProjectOutcome DissociateResourceGroupFromProject(const Model::DissociateResourceGroupFromProjectRequest &request);
                void DissociateResourceGroupFromProjectAsync(const Model::DissociateResourceGroupFromProjectRequest& request, const DissociateResourceGroupFromProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DissociateResourceGroupFromProjectOutcomeCallable DissociateResourceGroupFromProjectCallable(const Model::DissociateResourceGroupFromProjectRequest& request);

                /**
                 *启用项目
                 * @param req EnableProjectRequest
                 * @return EnableProjectOutcome
                 */
                EnableProjectOutcome EnableProject(const Model::EnableProjectRequest &request);
                void EnableProjectAsync(const Model::EnableProjectRequest& request, const EnableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableProjectOutcomeCallable EnableProjectCallable(const Model::EnableProjectRequest& request);

                /**
                 *查询告警信息详情
                 * @param req GetAlarmMessageRequest
                 * @return GetAlarmMessageOutcome
                 */
                GetAlarmMessageOutcome GetAlarmMessage(const Model::GetAlarmMessageRequest &request);
                void GetAlarmMessageAsync(const Model::GetAlarmMessageRequest& request, const GetAlarmMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAlarmMessageOutcomeCallable GetAlarmMessageCallable(const Model::GetAlarmMessageRequest& request);

                /**
                 *查看代码文件详情
                 * @param req GetCodeFileRequest
                 * @return GetCodeFileOutcome
                 */
                GetCodeFileOutcome GetCodeFile(const Model::GetCodeFileRequest &request);
                void GetCodeFileAsync(const Model::GetCodeFileRequest& request, const GetCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCodeFileOutcomeCallable GetCodeFileCallable(const Model::GetCodeFileRequest& request);

                /**
                 *获取sql文件夹详情
                 * @param req GetCodeFolderRequest
                 * @return GetCodeFolderOutcome
                 */
                GetCodeFolderOutcome GetCodeFolder(const Model::GetCodeFolderRequest &request);
                void GetCodeFolderAsync(const Model::GetCodeFolderRequest& request, const GetCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCodeFolderOutcomeCallable GetCodeFolderCallable(const Model::GetCodeFolderRequest& request);

                /**
                 *获取补录计划详情
                 * @param req GetDataBackfillPlanRequest
                 * @return GetDataBackfillPlanOutcome
                 */
                GetDataBackfillPlanOutcome GetDataBackfillPlan(const Model::GetDataBackfillPlanRequest &request);
                void GetDataBackfillPlanAsync(const Model::GetDataBackfillPlanRequest& request, const GetDataBackfillPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDataBackfillPlanOutcomeCallable GetDataBackfillPlanCallable(const Model::GetDataBackfillPlanRequest& request);

                /**
                 *该接口用于查看指定数据源的详细信息
                 * @param req GetDataSourceRequest
                 * @return GetDataSourceOutcome
                 */
                GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest &request);
                void GetDataSourceAsync(const Model::GetDataSourceRequest& request, const GetDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDataSourceOutcomeCallable GetDataSourceCallable(const Model::GetDataSourceRequest& request);

                /**
                 *数据源关联任务详情
                 * @param req GetDataSourceRelatedTasksRequest
                 * @return GetDataSourceRelatedTasksOutcome
                 */
                GetDataSourceRelatedTasksOutcome GetDataSourceRelatedTasks(const Model::GetDataSourceRelatedTasksRequest &request);
                void GetDataSourceRelatedTasksAsync(const Model::GetDataSourceRelatedTasksRequest& request, const GetDataSourceRelatedTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDataSourceRelatedTasksOutcomeCallable GetDataSourceRelatedTasksCallable(const Model::GetDataSourceRelatedTasksRequest& request);

                /**
                 *根据告警规则id/名称查询单个告警规则信息
                 * @param req GetOpsAlarmRuleRequest
                 * @return GetOpsAlarmRuleOutcome
                 */
                GetOpsAlarmRuleOutcome GetOpsAlarmRule(const Model::GetOpsAlarmRuleRequest &request);
                void GetOpsAlarmRuleAsync(const Model::GetOpsAlarmRuleRequest& request, const GetOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOpsAlarmRuleOutcomeCallable GetOpsAlarmRuleCallable(const Model::GetOpsAlarmRuleRequest& request);

                /**
                 *查询运维中心异步操作详情
                 * @param req GetOpsAsyncJobRequest
                 * @return GetOpsAsyncJobOutcome
                 */
                GetOpsAsyncJobOutcome GetOpsAsyncJob(const Model::GetOpsAsyncJobRequest &request);
                void GetOpsAsyncJobAsync(const Model::GetOpsAsyncJobRequest& request, const GetOpsAsyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOpsAsyncJobOutcomeCallable GetOpsAsyncJobCallable(const Model::GetOpsAsyncJobRequest& request);

                /**
                 *获取任务详情
                 * @param req GetOpsTaskRequest
                 * @return GetOpsTaskOutcome
                 */
                GetOpsTaskOutcome GetOpsTask(const Model::GetOpsTaskRequest &request);
                void GetOpsTaskAsync(const Model::GetOpsTaskRequest& request, const GetOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOpsTaskOutcomeCallable GetOpsTaskCallable(const Model::GetOpsTaskRequest& request);

                /**
                 *获取任务代码
                 * @param req GetOpsTaskCodeRequest
                 * @return GetOpsTaskCodeOutcome
                 */
                GetOpsTaskCodeOutcome GetOpsTaskCode(const Model::GetOpsTaskCodeRequest &request);
                void GetOpsTaskCodeAsync(const Model::GetOpsTaskCodeRequest& request, const GetOpsTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOpsTaskCodeOutcomeCallable GetOpsTaskCodeCallable(const Model::GetOpsTaskCodeRequest& request);

                /**
                 *根据工作流id，获取工作流调度详情。
                 * @param req GetOpsWorkflowRequest
                 * @return GetOpsWorkflowOutcome
                 */
                GetOpsWorkflowOutcome GetOpsWorkflow(const Model::GetOpsWorkflowRequest &request);
                void GetOpsWorkflowAsync(const Model::GetOpsWorkflowRequest& request, const GetOpsWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOpsWorkflowOutcomeCallable GetOpsWorkflowCallable(const Model::GetOpsWorkflowRequest& request);

                /**
                 *获取项目信息
                 * @param req GetProjectRequest
                 * @return GetProjectOutcome
                 */
                GetProjectOutcome GetProject(const Model::GetProjectRequest &request);
                void GetProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProjectOutcomeCallable GetProjectCallable(const Model::GetProjectRequest& request);

                /**
                 *获取资源文件详情
                 * @param req GetResourceFileRequest
                 * @return GetResourceFileOutcome
                 */
                GetResourceFileOutcome GetResourceFile(const Model::GetResourceFileRequest &request);
                void GetResourceFileAsync(const Model::GetResourceFileRequest& request, const GetResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetResourceFileOutcomeCallable GetResourceFileCallable(const Model::GetResourceFileRequest& request);

                /**
                 *该接口用于查看指定执行资源组的监控指标
                 * @param req GetResourceGroupMetricsRequest
                 * @return GetResourceGroupMetricsOutcome
                 */
                GetResourceGroupMetricsOutcome GetResourceGroupMetrics(const Model::GetResourceGroupMetricsRequest &request);
                void GetResourceGroupMetricsAsync(const Model::GetResourceGroupMetricsRequest& request, const GetResourceGroupMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetResourceGroupMetricsOutcomeCallable GetResourceGroupMetricsCallable(const Model::GetResourceGroupMetricsRequest& request);

                /**
                 *获取sql文件夹详情
                 * @param req GetSQLFolderRequest
                 * @return GetSQLFolderOutcome
                 */
                GetSQLFolderOutcome GetSQLFolder(const Model::GetSQLFolderRequest &request);
                void GetSQLFolderAsync(const Model::GetSQLFolderRequest& request, const GetSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSQLFolderOutcomeCallable GetSQLFolderCallable(const Model::GetSQLFolderRequest& request);

                /**
                 *查询脚本详情
                 * @param req GetSQLScriptRequest
                 * @return GetSQLScriptOutcome
                 */
                GetSQLScriptOutcome GetSQLScript(const Model::GetSQLScriptRequest &request);
                void GetSQLScriptAsync(const Model::GetSQLScriptRequest& request, const GetSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSQLScriptOutcomeCallable GetSQLScriptCallable(const Model::GetSQLScriptRequest& request);

                /**
                 *查询表详情
                 * @param req GetTableRequest
                 * @return GetTableOutcome
                 */
                GetTableOutcome GetTable(const Model::GetTableRequest &request);
                void GetTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTableOutcomeCallable GetTableCallable(const Model::GetTableRequest& request);

                /**
                 *查询表所有字段列表
                 * @param req GetTableColumnsRequest
                 * @return GetTableColumnsOutcome
                 */
                GetTableColumnsOutcome GetTableColumns(const Model::GetTableColumnsRequest &request);
                void GetTableColumnsAsync(const Model::GetTableColumnsRequest& request, const GetTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTableColumnsOutcomeCallable GetTableColumnsCallable(const Model::GetTableColumnsRequest& request);

                /**
                 *获取任务详情接口
                 * @param req GetTaskRequest
                 * @return GetTaskOutcome
                 */
                GetTaskOutcome GetTask(const Model::GetTaskRequest &request);
                void GetTaskAsync(const Model::GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskOutcomeCallable GetTaskCallable(const Model::GetTaskRequest& request);

                /**
                 *获取任务代码
                 * @param req GetTaskCodeRequest
                 * @return GetTaskCodeOutcome
                 */
                GetTaskCodeOutcome GetTaskCode(const Model::GetTaskCodeRequest &request);
                void GetTaskCodeAsync(const Model::GetTaskCodeRequest& request, const GetTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskCodeOutcomeCallable GetTaskCodeCallable(const Model::GetTaskCodeRequest& request);

                /**
                 *调度实例详情
                 * @param req GetTaskInstanceRequest
                 * @return GetTaskInstanceOutcome
                 */
                GetTaskInstanceOutcome GetTaskInstance(const Model::GetTaskInstanceRequest &request);
                void GetTaskInstanceAsync(const Model::GetTaskInstanceRequest& request, const GetTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskInstanceOutcomeCallable GetTaskInstanceCallable(const Model::GetTaskInstanceRequest& request);

                /**
                 *获取实例列表
                 * @param req GetTaskInstanceLogRequest
                 * @return GetTaskInstanceLogOutcome
                 */
                GetTaskInstanceLogOutcome GetTaskInstanceLog(const Model::GetTaskInstanceLogRequest &request);
                void GetTaskInstanceLogAsync(const Model::GetTaskInstanceLogRequest& request, const GetTaskInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskInstanceLogOutcomeCallable GetTaskInstanceLogCallable(const Model::GetTaskInstanceLogRequest& request);

                /**
                 *拉取任务版本列表
                 * @param req GetTaskVersionRequest
                 * @return GetTaskVersionOutcome
                 */
                GetTaskVersionOutcome GetTaskVersion(const Model::GetTaskVersionRequest &request);
                void GetTaskVersionAsync(const Model::GetTaskVersionRequest& request, const GetTaskVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskVersionOutcomeCallable GetTaskVersionCallable(const Model::GetTaskVersionRequest& request);

                /**
                 *获取工作流信息
                 * @param req GetWorkflowRequest
                 * @return GetWorkflowOutcome
                 */
                GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest &request);
                void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request);

                /**
                 *修改项目用户角色
                 * @param req GrantMemberProjectRoleRequest
                 * @return GrantMemberProjectRoleOutcome
                 */
                GrantMemberProjectRoleOutcome GrantMemberProjectRole(const Model::GrantMemberProjectRoleRequest &request);
                void GrantMemberProjectRoleAsync(const Model::GrantMemberProjectRoleRequest& request, const GrantMemberProjectRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantMemberProjectRoleOutcomeCallable GrantMemberProjectRoleCallable(const Model::GrantMemberProjectRoleRequest& request);

                /**
                 *实例批量终止操作-异步操作
                 * @param req KillTaskInstancesAsyncRequest
                 * @return KillTaskInstancesAsyncOutcome
                 */
                KillTaskInstancesAsyncOutcome KillTaskInstancesAsync(const Model::KillTaskInstancesAsyncRequest &request);
                void KillTaskInstancesAsyncAsync(const Model::KillTaskInstancesAsyncRequest& request, const KillTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillTaskInstancesAsyncOutcomeCallable KillTaskInstancesAsyncCallable(const Model::KillTaskInstancesAsyncRequest& request);

                /**
                 *获取告警信息列表
                 * @param req ListAlarmMessagesRequest
                 * @return ListAlarmMessagesOutcome
                 */
                ListAlarmMessagesOutcome ListAlarmMessages(const Model::ListAlarmMessagesRequest &request);
                void ListAlarmMessagesAsync(const Model::ListAlarmMessagesRequest& request, const ListAlarmMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAlarmMessagesOutcomeCallable ListAlarmMessagesCallable(const Model::ListAlarmMessagesRequest& request);

                /**
                 *获取资产目录信息
                 * @param req ListCatalogRequest
                 * @return ListCatalogOutcome
                 */
                ListCatalogOutcome ListCatalog(const Model::ListCatalogRequest &request);
                void ListCatalogAsync(const Model::ListCatalogRequest& request, const ListCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCatalogOutcomeCallable ListCatalogCallable(const Model::ListCatalogRequest& request);

                /**
                 *获取文件夹内容
                 * @param req ListCodeFolderContentsRequest
                 * @return ListCodeFolderContentsOutcome
                 */
                ListCodeFolderContentsOutcome ListCodeFolderContents(const Model::ListCodeFolderContentsRequest &request);
                void ListCodeFolderContentsAsync(const Model::ListCodeFolderContentsRequest& request, const ListCodeFolderContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCodeFolderContentsOutcomeCallable ListCodeFolderContentsCallable(const Model::ListCodeFolderContentsRequest& request);

                /**
                 *获取表字段血缘信息
                 * @param req ListColumnLineageRequest
                 * @return ListColumnLineageOutcome
                 */
                ListColumnLineageOutcome ListColumnLineage(const Model::ListColumnLineageRequest &request);
                void ListColumnLineageAsync(const Model::ListColumnLineageRequest& request, const ListColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListColumnLineageOutcomeCallable ListColumnLineageCallable(const Model::ListColumnLineageRequest& request);

                /**
                 *获取单次补录的所有实例详情
                 * @param req ListDataBackfillInstancesRequest
                 * @return ListDataBackfillInstancesOutcome
                 */
                ListDataBackfillInstancesOutcome ListDataBackfillInstances(const Model::ListDataBackfillInstancesRequest &request);
                void ListDataBackfillInstancesAsync(const Model::ListDataBackfillInstancesRequest& request, const ListDataBackfillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDataBackfillInstancesOutcomeCallable ListDataBackfillInstancesCallable(const Model::ListDataBackfillInstancesRequest& request);

                /**
                 *该接口用于查询指定项目中的数据源列表
                 * @param req ListDataSourcesRequest
                 * @return ListDataSourcesOutcome
                 */
                ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest &request);
                void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request);

                /**
                 *获取资产数据库信息
                 * @param req ListDatabaseRequest
                 * @return ListDatabaseOutcome
                 */
                ListDatabaseOutcome ListDatabase(const Model::ListDatabaseRequest &request);
                void ListDatabaseAsync(const Model::ListDatabaseRequest& request, const ListDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDatabaseOutcomeCallable ListDatabaseCallable(const Model::ListDatabaseRequest& request);

                /**
                 *获取任务直接下游详情
                 * @param req ListDownstreamOpsTasksRequest
                 * @return ListDownstreamOpsTasksOutcome
                 */
                ListDownstreamOpsTasksOutcome ListDownstreamOpsTasks(const Model::ListDownstreamOpsTasksRequest &request);
                void ListDownstreamOpsTasksAsync(const Model::ListDownstreamOpsTasksRequest& request, const ListDownstreamOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDownstreamOpsTasksOutcomeCallable ListDownstreamOpsTasksCallable(const Model::ListDownstreamOpsTasksRequest& request);

                /**
                 *获取实例直接上游
                 * @param req ListDownstreamTaskInstancesRequest
                 * @return ListDownstreamTaskInstancesOutcome
                 */
                ListDownstreamTaskInstancesOutcome ListDownstreamTaskInstances(const Model::ListDownstreamTaskInstancesRequest &request);
                void ListDownstreamTaskInstancesAsync(const Model::ListDownstreamTaskInstancesRequest& request, const ListDownstreamTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDownstreamTaskInstancesOutcomeCallable ListDownstreamTaskInstancesCallable(const Model::ListDownstreamTaskInstancesRequest& request);

                /**
                 *获取任务直接下游详情
                 * @param req ListDownstreamTasksRequest
                 * @return ListDownstreamTasksOutcome
                 */
                ListDownstreamTasksOutcome ListDownstreamTasks(const Model::ListDownstreamTasksRequest &request);
                void ListDownstreamTasksAsync(const Model::ListDownstreamTasksRequest& request, const ListDownstreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDownstreamTasksOutcomeCallable ListDownstreamTasksCallable(const Model::ListDownstreamTasksRequest& request);

                /**
                 *获取资产血缘信息
                 * @param req ListLineageRequest
                 * @return ListLineageOutcome
                 */
                ListLineageOutcome ListLineage(const Model::ListLineageRequest &request);
                void ListLineageAsync(const Model::ListLineageRequest& request, const ListLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLineageOutcomeCallable ListLineageCallable(const Model::ListLineageRequest& request);

                /**
                 *查询告警规则列表
                 * @param req ListOpsAlarmRulesRequest
                 * @return ListOpsAlarmRulesOutcome
                 */
                ListOpsAlarmRulesOutcome ListOpsAlarmRules(const Model::ListOpsAlarmRulesRequest &request);
                void ListOpsAlarmRulesAsync(const Model::ListOpsAlarmRulesRequest& request, const ListOpsAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOpsAlarmRulesOutcomeCallable ListOpsAlarmRulesCallable(const Model::ListOpsAlarmRulesRequest& request);

                /**
                 *根据项目id获取任务列表
                 * @param req ListOpsTasksRequest
                 * @return ListOpsTasksOutcome
                 */
                ListOpsTasksOutcome ListOpsTasks(const Model::ListOpsTasksRequest &request);
                void ListOpsTasksAsync(const Model::ListOpsTasksRequest& request, const ListOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOpsTasksOutcomeCallable ListOpsTasksCallable(const Model::ListOpsTasksRequest& request);

                /**
                 *根据项目ID获取项目下工作流
                 * @param req ListOpsWorkflowsRequest
                 * @return ListOpsWorkflowsOutcome
                 */
                ListOpsWorkflowsOutcome ListOpsWorkflows(const Model::ListOpsWorkflowsRequest &request);
                void ListOpsWorkflowsAsync(const Model::ListOpsWorkflowsRequest& request, const ListOpsWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOpsWorkflowsOutcomeCallable ListOpsWorkflowsCallable(const Model::ListOpsWorkflowsRequest& request);

                /**
                 *获取资产血缘信息
                 * @param req ListProcessLineageRequest
                 * @return ListProcessLineageOutcome
                 */
                ListProcessLineageOutcome ListProcessLineage(const Model::ListProcessLineageRequest &request);
                void ListProcessLineageAsync(const Model::ListProcessLineageRequest& request, const ListProcessLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListProcessLineageOutcomeCallable ListProcessLineageCallable(const Model::ListProcessLineageRequest& request);

                /**
                 *获取项目下的用户，分页返回
                 * @param req ListProjectMembersRequest
                 * @return ListProjectMembersOutcome
                 */
                ListProjectMembersOutcome ListProjectMembers(const Model::ListProjectMembersRequest &request);
                void ListProjectMembersAsync(const Model::ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListProjectMembersOutcomeCallable ListProjectMembersCallable(const Model::ListProjectMembersRequest& request);

                /**
                 *获取角色列表信息
                 * @param req ListProjectRolesRequest
                 * @return ListProjectRolesOutcome
                 */
                ListProjectRolesOutcome ListProjectRoles(const Model::ListProjectRolesRequest &request);
                void ListProjectRolesAsync(const Model::ListProjectRolesRequest& request, const ListProjectRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListProjectRolesOutcomeCallable ListProjectRolesCallable(const Model::ListProjectRolesRequest& request);

                /**
                 *租户全局范围的项目列表，与用户查看范围无关.
                 * @param req ListProjectsRequest
                 * @return ListProjectsOutcome
                 */
                ListProjectsOutcome ListProjects(const Model::ListProjectsRequest &request);
                void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request);

                /**
                 *获取资源文件列表
                 * @param req ListResourceFilesRequest
                 * @return ListResourceFilesOutcome
                 */
                ListResourceFilesOutcome ListResourceFiles(const Model::ListResourceFilesRequest &request);
                void ListResourceFilesAsync(const Model::ListResourceFilesRequest& request, const ListResourceFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListResourceFilesOutcomeCallable ListResourceFilesCallable(const Model::ListResourceFilesRequest& request);

                /**
                 *查询资源文件文件夹列表
                 * @param req ListResourceFoldersRequest
                 * @return ListResourceFoldersOutcome
                 */
                ListResourceFoldersOutcome ListResourceFolders(const Model::ListResourceFoldersRequest &request);
                void ListResourceFoldersAsync(const Model::ListResourceFoldersRequest& request, const ListResourceFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListResourceFoldersOutcomeCallable ListResourceFoldersCallable(const Model::ListResourceFoldersRequest& request);

                /**
                 *该接口用于查询执行资源组列表
                 * @param req ListResourceGroupsRequest
                 * @return ListResourceGroupsOutcome
                 */
                ListResourceGroupsOutcome ListResourceGroups(const Model::ListResourceGroupsRequest &request);
                void ListResourceGroupsAsync(const Model::ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListResourceGroupsOutcomeCallable ListResourceGroupsCallable(const Model::ListResourceGroupsRequest& request);

                /**
                 *查询数据探索文件夹树，包括文件夹下的脚本
                 * @param req ListSQLFolderContentsRequest
                 * @return ListSQLFolderContentsOutcome
                 */
                ListSQLFolderContentsOutcome ListSQLFolderContents(const Model::ListSQLFolderContentsRequest &request);
                void ListSQLFolderContentsAsync(const Model::ListSQLFolderContentsRequest& request, const ListSQLFolderContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSQLFolderContentsOutcomeCallable ListSQLFolderContentsCallable(const Model::ListSQLFolderContentsRequest& request);

                /**
                 *查询SQL运行记录
                 * @param req ListSQLScriptRunsRequest
                 * @return ListSQLScriptRunsOutcome
                 */
                ListSQLScriptRunsOutcome ListSQLScriptRuns(const Model::ListSQLScriptRunsRequest &request);
                void ListSQLScriptRunsAsync(const Model::ListSQLScriptRunsRequest& request, const ListSQLScriptRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSQLScriptRunsOutcomeCallable ListSQLScriptRunsCallable(const Model::ListSQLScriptRunsRequest& request);

                /**
                 *获取资产数据库Schema信息
                 * @param req ListSchemaRequest
                 * @return ListSchemaOutcome
                 */
                ListSchemaOutcome ListSchema(const Model::ListSchemaRequest &request);
                void ListSchemaAsync(const Model::ListSchemaRequest& request, const ListSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSchemaOutcomeCallable ListSchemaCallable(const Model::ListSchemaRequest& request);

                /**
                 *获取资产表信息
                 * @param req ListTableRequest
                 * @return ListTableOutcome
                 */
                ListTableOutcome ListTable(const Model::ListTableRequest &request);
                void ListTableAsync(const Model::ListTableRequest& request, const ListTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTableOutcomeCallable ListTableCallable(const Model::ListTableRequest& request);

                /**
                 *调度实例详情
                 * @param req ListTaskInstanceExecutionsRequest
                 * @return ListTaskInstanceExecutionsOutcome
                 */
                ListTaskInstanceExecutionsOutcome ListTaskInstanceExecutions(const Model::ListTaskInstanceExecutionsRequest &request);
                void ListTaskInstanceExecutionsAsync(const Model::ListTaskInstanceExecutionsRequest& request, const ListTaskInstanceExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTaskInstanceExecutionsOutcomeCallable ListTaskInstanceExecutionsCallable(const Model::ListTaskInstanceExecutionsRequest& request);

                /**
                 *获取实例列表
                 * @param req ListTaskInstancesRequest
                 * @return ListTaskInstancesOutcome
                 */
                ListTaskInstancesOutcome ListTaskInstances(const Model::ListTaskInstancesRequest &request);
                void ListTaskInstancesAsync(const Model::ListTaskInstancesRequest& request, const ListTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTaskInstancesOutcomeCallable ListTaskInstancesCallable(const Model::ListTaskInstancesRequest& request);

                /**
                 *任务保存版本列表
                 * @param req ListTaskVersionsRequest
                 * @return ListTaskVersionsOutcome
                 */
                ListTaskVersionsOutcome ListTaskVersions(const Model::ListTaskVersionsRequest &request);
                void ListTaskVersionsAsync(const Model::ListTaskVersionsRequest& request, const ListTaskVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTaskVersionsOutcomeCallable ListTaskVersionsCallable(const Model::ListTaskVersionsRequest& request);

                /**
                 *查询任务分页信息
                 * @param req ListTasksRequest
                 * @return ListTasksOutcome
                 */
                ListTasksOutcome ListTasks(const Model::ListTasksRequest &request);
                void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request);

                /**
                 *获取所有主账号角色列表
                 * @param req ListTenantRolesRequest
                 * @return ListTenantRolesOutcome
                 */
                ListTenantRolesOutcome ListTenantRoles(const Model::ListTenantRolesRequest &request);
                void ListTenantRolesAsync(const Model::ListTenantRolesRequest& request, const ListTenantRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTenantRolesOutcomeCallable ListTenantRolesCallable(const Model::ListTenantRolesRequest& request);

                /**
                 *获取任务直接上游
                 * @param req ListUpstreamOpsTasksRequest
                 * @return ListUpstreamOpsTasksOutcome
                 */
                ListUpstreamOpsTasksOutcome ListUpstreamOpsTasks(const Model::ListUpstreamOpsTasksRequest &request);
                void ListUpstreamOpsTasksAsync(const Model::ListUpstreamOpsTasksRequest& request, const ListUpstreamOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUpstreamOpsTasksOutcomeCallable ListUpstreamOpsTasksCallable(const Model::ListUpstreamOpsTasksRequest& request);

                /**
                 *获取实例直接上游
                 * @param req ListUpstreamTaskInstancesRequest
                 * @return ListUpstreamTaskInstancesOutcome
                 */
                ListUpstreamTaskInstancesOutcome ListUpstreamTaskInstances(const Model::ListUpstreamTaskInstancesRequest &request);
                void ListUpstreamTaskInstancesAsync(const Model::ListUpstreamTaskInstancesRequest& request, const ListUpstreamTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUpstreamTaskInstancesOutcomeCallable ListUpstreamTaskInstancesCallable(const Model::ListUpstreamTaskInstancesRequest& request);

                /**
                 *获取任务直接上游
                 * @param req ListUpstreamTasksRequest
                 * @return ListUpstreamTasksOutcome
                 */
                ListUpstreamTasksOutcome ListUpstreamTasks(const Model::ListUpstreamTasksRequest &request);
                void ListUpstreamTasksAsync(const Model::ListUpstreamTasksRequest& request, const ListUpstreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUpstreamTasksOutcomeCallable ListUpstreamTasksCallable(const Model::ListUpstreamTasksRequest& request);

                /**
                 *查询文件夹列表
                 * @param req ListWorkflowFoldersRequest
                 * @return ListWorkflowFoldersOutcome
                 */
                ListWorkflowFoldersOutcome ListWorkflowFolders(const Model::ListWorkflowFoldersRequest &request);
                void ListWorkflowFoldersAsync(const Model::ListWorkflowFoldersRequest& request, const ListWorkflowFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowFoldersOutcomeCallable ListWorkflowFoldersCallable(const Model::ListWorkflowFoldersRequest& request);

                /**
                 *查询工作流列表
                 * @param req ListWorkflowsRequest
                 * @return ListWorkflowsOutcome
                 */
                ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest &request);
                void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request);

                /**
                 *异步批量暂停任务
                 * @param req PauseOpsTasksAsyncRequest
                 * @return PauseOpsTasksAsyncOutcome
                 */
                PauseOpsTasksAsyncOutcome PauseOpsTasksAsync(const Model::PauseOpsTasksAsyncRequest &request);
                void PauseOpsTasksAsyncAsync(const Model::PauseOpsTasksAsyncRequest& request, const PauseOpsTasksAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseOpsTasksAsyncOutcomeCallable PauseOpsTasksAsyncCallable(const Model::PauseOpsTasksAsyncRequest& request);

                /**
                 *RegisterLineage
                 * @param req RegisterLineageRequest
                 * @return RegisterLineageOutcome
                 */
                RegisterLineageOutcome RegisterLineage(const Model::RegisterLineageRequest &request);
                void RegisterLineageAsync(const Model::RegisterLineageRequest& request, const RegisterLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterLineageOutcomeCallable RegisterLineageCallable(const Model::RegisterLineageRequest& request);

                /**
                 *删除项目用户角色
                 * @param req RemoveMemberProjectRoleRequest
                 * @return RemoveMemberProjectRoleOutcome
                 */
                RemoveMemberProjectRoleOutcome RemoveMemberProjectRole(const Model::RemoveMemberProjectRoleRequest &request);
                void RemoveMemberProjectRoleAsync(const Model::RemoveMemberProjectRoleRequest& request, const RemoveMemberProjectRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMemberProjectRoleOutcomeCallable RemoveMemberProjectRoleCallable(const Model::RemoveMemberProjectRoleRequest& request);

                /**
                 *实例批量重跑-异步
                 * @param req RerunTaskInstancesAsyncRequest
                 * @return RerunTaskInstancesAsyncOutcome
                 */
                RerunTaskInstancesAsyncOutcome RerunTaskInstancesAsync(const Model::RerunTaskInstancesAsyncRequest &request);
                void RerunTaskInstancesAsyncAsync(const Model::RerunTaskInstancesAsyncRequest& request, const RerunTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunTaskInstancesAsyncOutcomeCallable RerunTaskInstancesAsyncCallable(const Model::RerunTaskInstancesAsyncRequest& request);

                /**
                 *运行SQL脚本
                 * @param req RunSQLScriptRequest
                 * @return RunSQLScriptOutcome
                 */
                RunSQLScriptOutcome RunSQLScript(const Model::RunSQLScriptRequest &request);
                void RunSQLScriptAsync(const Model::RunSQLScriptRequest& request, const RunSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunSQLScriptOutcomeCallable RunSQLScriptCallable(const Model::RunSQLScriptRequest& request);

                /**
                 *实例批量置成功-异步
                 * @param req SetSuccessTaskInstancesAsyncRequest
                 * @return SetSuccessTaskInstancesAsyncOutcome
                 */
                SetSuccessTaskInstancesAsyncOutcome SetSuccessTaskInstancesAsync(const Model::SetSuccessTaskInstancesAsyncRequest &request);
                void SetSuccessTaskInstancesAsyncAsync(const Model::SetSuccessTaskInstancesAsyncRequest& request, const SetSuccessTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetSuccessTaskInstancesAsyncOutcomeCallable SetSuccessTaskInstancesAsyncCallable(const Model::SetSuccessTaskInstancesAsyncRequest& request);

                /**
                 *异步批量启动任务
                 * @param req StartOpsTasksRequest
                 * @return StartOpsTasksOutcome
                 */
                StartOpsTasksOutcome StartOpsTasks(const Model::StartOpsTasksRequest &request);
                void StartOpsTasksAsync(const Model::StartOpsTasksRequest& request, const StartOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOpsTasksOutcomeCallable StartOpsTasksCallable(const Model::StartOpsTasksRequest& request);

                /**
                 *异步批量下线任务
                 * @param req StopOpsTasksAsyncRequest
                 * @return StopOpsTasksAsyncOutcome
                 */
                StopOpsTasksAsyncOutcome StopOpsTasksAsync(const Model::StopOpsTasksAsyncRequest &request);
                void StopOpsTasksAsyncAsync(const Model::StopOpsTasksAsyncRequest& request, const StopOpsTasksAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopOpsTasksAsyncOutcomeCallable StopOpsTasksAsyncCallable(const Model::StopOpsTasksAsyncRequest& request);

                /**
                 *停止运行SQL脚本
                 * @param req StopSQLScriptRunRequest
                 * @return StopSQLScriptRunOutcome
                 */
                StopSQLScriptRunOutcome StopSQLScriptRun(const Model::StopSQLScriptRunRequest &request);
                void StopSQLScriptRunAsync(const Model::StopSQLScriptRunRequest& request, const StopSQLScriptRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSQLScriptRunOutcomeCallable StopSQLScriptRunCallable(const Model::StopSQLScriptRunRequest& request);

                /**
                 *提交任务。
                 * @param req SubmitTaskRequest
                 * @return SubmitTaskOutcome
                 */
                SubmitTaskOutcome SubmitTask(const Model::SubmitTaskRequest &request);
                void SubmitTaskAsync(const Model::SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTaskOutcomeCallable SubmitTaskCallable(const Model::SubmitTaskRequest& request);

                /**
                 *更新代码文件
                 * @param req UpdateCodeFileRequest
                 * @return UpdateCodeFileOutcome
                 */
                UpdateCodeFileOutcome UpdateCodeFile(const Model::UpdateCodeFileRequest &request);
                void UpdateCodeFileAsync(const Model::UpdateCodeFileRequest& request, const UpdateCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCodeFileOutcomeCallable UpdateCodeFileCallable(const Model::UpdateCodeFileRequest& request);

                /**
                 *重命名代码文件夹
                 * @param req UpdateCodeFolderRequest
                 * @return UpdateCodeFolderOutcome
                 */
                UpdateCodeFolderOutcome UpdateCodeFolder(const Model::UpdateCodeFolderRequest &request);
                void UpdateCodeFolderAsync(const Model::UpdateCodeFolderRequest& request, const UpdateCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCodeFolderOutcomeCallable UpdateCodeFolderCallable(const Model::UpdateCodeFolderRequest& request);

                /**
                 *该接口用于更新数据源
                 * @param req UpdateDataSourceRequest
                 * @return UpdateDataSourceOutcome
                 */
                UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest &request);
                void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request);

                /**
                 *修改告警规则
                 * @param req UpdateOpsAlarmRuleRequest
                 * @return UpdateOpsAlarmRuleOutcome
                 */
                UpdateOpsAlarmRuleOutcome UpdateOpsAlarmRule(const Model::UpdateOpsAlarmRuleRequest &request);
                void UpdateOpsAlarmRuleAsync(const Model::UpdateOpsAlarmRuleRequest& request, const UpdateOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOpsAlarmRuleOutcomeCallable UpdateOpsAlarmRuleCallable(const Model::UpdateOpsAlarmRuleRequest& request);

                /**
                 *修改任务负责人
                 * @param req UpdateOpsTasksOwnerRequest
                 * @return UpdateOpsTasksOwnerOutcome
                 */
                UpdateOpsTasksOwnerOutcome UpdateOpsTasksOwner(const Model::UpdateOpsTasksOwnerRequest &request);
                void UpdateOpsTasksOwnerAsync(const Model::UpdateOpsTasksOwnerRequest& request, const UpdateOpsTasksOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOpsTasksOwnerOutcomeCallable UpdateOpsTasksOwnerCallable(const Model::UpdateOpsTasksOwnerRequest& request);

                /**
                 *修改项目基础信息。
                 * @param req UpdateProjectRequest
                 * @return UpdateProjectOutcome
                 */
                UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest &request);
                void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request);

                /**
                 *更新资源文件
                 * @param req UpdateResourceFileRequest
                 * @return UpdateResourceFileOutcome
                 */
                UpdateResourceFileOutcome UpdateResourceFile(const Model::UpdateResourceFileRequest &request);
                void UpdateResourceFileAsync(const Model::UpdateResourceFileRequest& request, const UpdateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateResourceFileOutcomeCallable UpdateResourceFileCallable(const Model::UpdateResourceFileRequest& request);

                /**
                 *更新资源文件夹
                 * @param req UpdateResourceFolderRequest
                 * @return UpdateResourceFolderOutcome
                 */
                UpdateResourceFolderOutcome UpdateResourceFolder(const Model::UpdateResourceFolderRequest &request);
                void UpdateResourceFolderAsync(const Model::UpdateResourceFolderRequest& request, const UpdateResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateResourceFolderOutcomeCallable UpdateResourceFolderCallable(const Model::UpdateResourceFolderRequest& request);

                /**
                 *该接口用于变配/续费资源
                 * @param req UpdateResourceGroupRequest
                 * @return UpdateResourceGroupOutcome
                 */
                UpdateResourceGroupOutcome UpdateResourceGroup(const Model::UpdateResourceGroupRequest &request);
                void UpdateResourceGroupAsync(const Model::UpdateResourceGroupRequest& request, const UpdateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateResourceGroupOutcomeCallable UpdateResourceGroupCallable(const Model::UpdateResourceGroupRequest& request);

                /**
                 *重命名SQL文件夹
                 * @param req UpdateSQLFolderRequest
                 * @return UpdateSQLFolderOutcome
                 */
                UpdateSQLFolderOutcome UpdateSQLFolder(const Model::UpdateSQLFolderRequest &request);
                void UpdateSQLFolderAsync(const Model::UpdateSQLFolderRequest& request, const UpdateSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSQLFolderOutcomeCallable UpdateSQLFolderCallable(const Model::UpdateSQLFolderRequest& request);

                /**
                 *保存探索脚本内容
                 * @param req UpdateSQLScriptRequest
                 * @return UpdateSQLScriptOutcome
                 */
                UpdateSQLScriptOutcome UpdateSQLScript(const Model::UpdateSQLScriptRequest &request);
                void UpdateSQLScriptAsync(const Model::UpdateSQLScriptRequest& request, const UpdateSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSQLScriptOutcomeCallable UpdateSQLScriptCallable(const Model::UpdateSQLScriptRequest& request);

                /**
                 *更新任务接口
                 * @param req UpdateTaskRequest
                 * @return UpdateTaskOutcome
                 */
                UpdateTaskOutcome UpdateTask(const Model::UpdateTaskRequest &request);
                void UpdateTaskAsync(const Model::UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTaskOutcomeCallable UpdateTaskCallable(const Model::UpdateTaskRequest& request);

                /**
                 *更新工作流（包括工作流基本信息与工作流参数）
                 * @param req UpdateWorkflowRequest
                 * @return UpdateWorkflowOutcome
                 */
                UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest &request);
                void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request);

                /**
                 *更新工作流文件夹
                 * @param req UpdateWorkflowFolderRequest
                 * @return UpdateWorkflowFolderOutcome
                 */
                UpdateWorkflowFolderOutcome UpdateWorkflowFolder(const Model::UpdateWorkflowFolderRequest &request);
                void UpdateWorkflowFolderAsync(const Model::UpdateWorkflowFolderRequest& request, const UpdateWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowFolderOutcomeCallable UpdateWorkflowFolderCallable(const Model::UpdateWorkflowFolderRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_WEDATACLIENT_H_
