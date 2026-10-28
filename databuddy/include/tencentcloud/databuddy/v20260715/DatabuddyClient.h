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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/databuddy/v20260715/model/AddConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/AddConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateConsoleGroupRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateConsoleGroupResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateLocationRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateLocationResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateModelRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateModelResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateModelVersionRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateModelVersionResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateSchemaRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateSchemaResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateVolumeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateVolumeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRoleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRoleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteConsoleGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteConsoleGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteLocationRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteLocationResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteModelRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteModelResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteSchemaRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteSchemaResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteTableRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteTableResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteViewRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteViewResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteVolumeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteVolumeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceRoleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceRoleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetLocationRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetLocationResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetModelRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetModelResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetModelVersionRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetModelVersionResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetSchemaRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetSchemaResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetTableRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetTableResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetTablesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetTablesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetViewRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetViewResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetVolumeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetVolumeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListCatalogNamesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListCatalogNamesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListCatalogsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListCatalogsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleRolesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleRolesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListFeatureTablesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListFeatureTablesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListFilesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListFilesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListLocationsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListLocationsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListModelsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListModelsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListSchemaNamesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListSchemaNamesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListSchemasRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListSchemasResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListTableNamesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListTableNamesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListTablesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListTablesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListViewNamesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListViewNamesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListViewsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListViewsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListVolumesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListVolumesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspacesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspacesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveWorkspaceGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveWorkspaceGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveWorkspaceUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveWorkspaceUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RerunWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RerunWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RunWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RunWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/SearchAssetRequest.h>
#include <tencentcloud/databuddy/v20260715/model/SearchAssetResponse.h>
#include <tencentcloud/databuddy/v20260715/model/StartComputeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/StartComputeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/StopComputeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/StopComputeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleGroupRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleGroupResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFunctionRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFunctionResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateLocationRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateLocationResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateModelRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateModelResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateModelVersionRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateModelVersionResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateSchemaRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateSchemaResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateTableRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateTableResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateTableColumnRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateTableColumnResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateViewRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateViewResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateVolumeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateVolumeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceGroupsRolesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceGroupsRolesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceGroupsTagsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceGroupsTagsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRoleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRoleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceUsersRolesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceUsersRolesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceUsersTagsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceUsersTagsResponse.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            class DatabuddyClient : public AbstractClient
            {
            public:
                DatabuddyClient(const Credential &credential, const std::string &region);
                DatabuddyClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddConsoleUsersResponse> AddConsoleUsersOutcome;
                typedef std::future<AddConsoleUsersOutcome> AddConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::AddConsoleUsersRequest&, AddConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::AddWorkspaceGroupsResponse> AddWorkspaceGroupsOutcome;
                typedef std::future<AddWorkspaceGroupsOutcome> AddWorkspaceGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::AddWorkspaceGroupsRequest&, AddWorkspaceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddWorkspaceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddWorkspaceUsersResponse> AddWorkspaceUsersOutcome;
                typedef std::future<AddWorkspaceUsersOutcome> AddWorkspaceUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::AddWorkspaceUsersRequest&, AddWorkspaceUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddWorkspaceUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCatalogResponse> CreateCatalogOutcome;
                typedef std::future<CreateCatalogOutcome> CreateCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateCatalogRequest&, CreateCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleGroupResponse> CreateConsoleGroupOutcome;
                typedef std::future<CreateConsoleGroupOutcome> CreateConsoleGroupOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateConsoleGroupRequest&, CreateConsoleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileResponse> CreateFileOutcome;
                typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateFileRequest&, CreateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFolderResponse> CreateFolderOutcome;
                typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateFolderRequest&, CreateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLocationResponse> CreateLocationOutcome;
                typedef std::future<CreateLocationOutcome> CreateLocationOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateLocationRequest&, CreateLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelResponse> CreateModelOutcome;
                typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateModelRequest&, CreateModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelVersionResponse> CreateModelVersionOutcome;
                typedef std::future<CreateModelVersionOutcome> CreateModelVersionOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateModelVersionRequest&, CreateModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchemaResponse> CreateSchemaOutcome;
                typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateSchemaRequest&, CreateSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVolumeResponse> CreateVolumeOutcome;
                typedef std::future<CreateVolumeOutcome> CreateVolumeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateVolumeRequest&, CreateVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceResponse> CreateWorkspaceOutcome;
                typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkspaceRequest&, CreateWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceRoleResponse> CreateWorkspaceRoleOutcome;
                typedef std::future<CreateWorkspaceRoleOutcome> CreateWorkspaceRoleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkspaceRoleRequest&, CreateWorkspaceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCatalogResponse> DeleteCatalogOutcome;
                typedef std::future<DeleteCatalogOutcome> DeleteCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteCatalogRequest&, DeleteCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsoleGroupsResponse> DeleteConsoleGroupsOutcome;
                typedef std::future<DeleteConsoleGroupsOutcome> DeleteConsoleGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteConsoleGroupsRequest&, DeleteConsoleGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsoleGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileResponse> DeleteFileOutcome;
                typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteFileRequest&, DeleteFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFolderResponse> DeleteFolderOutcome;
                typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteFolderRequest&, DeleteFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLocationResponse> DeleteLocationOutcome;
                typedef std::future<DeleteLocationOutcome> DeleteLocationOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteLocationRequest&, DeleteLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelResponse> DeleteModelOutcome;
                typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteModelRequest&, DeleteModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSchemaResponse> DeleteSchemaOutcome;
                typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteSchemaRequest&, DeleteSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableResponse> DeleteTableOutcome;
                typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteTableRequest&, DeleteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteViewResponse> DeleteViewOutcome;
                typedef std::future<DeleteViewOutcome> DeleteViewOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteViewRequest&, DeleteViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteViewAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVolumeResponse> DeleteVolumeOutcome;
                typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteVolumeRequest&, DeleteVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkspaceResponse> DeleteWorkspaceOutcome;
                typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkspaceRequest&, DeleteWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkspaceRoleResponse> DeleteWorkspaceRoleOutcome;
                typedef std::future<DeleteWorkspaceRoleOutcome> DeleteWorkspaceRoleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkspaceRoleRequest&, DeleteWorkspaceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkspaceRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCatalogResponse> GetCatalogOutcome;
                typedef std::future<GetCatalogOutcome> GetCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetCatalogRequest&, GetCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFileResponse> GetFileOutcome;
                typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetFileRequest&, GetFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFolderResponse> GetFolderOutcome;
                typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetFolderRequest&, GetFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLocationResponse> GetLocationOutcome;
                typedef std::future<GetLocationOutcome> GetLocationOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetLocationRequest&, GetLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetModelResponse> GetModelOutcome;
                typedef std::future<GetModelOutcome> GetModelOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetModelRequest&, GetModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetModelAsyncHandler;
                typedef Outcome<Core::Error, Model::GetModelVersionResponse> GetModelVersionOutcome;
                typedef std::future<GetModelVersionOutcome> GetModelVersionOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetModelVersionRequest&, GetModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSchemaResponse> GetSchemaOutcome;
                typedef std::future<GetSchemaOutcome> GetSchemaOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetSchemaRequest&, GetSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTableResponse> GetTableOutcome;
                typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetTableRequest&, GetTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTablesResponse> GetTablesOutcome;
                typedef std::future<GetTablesOutcome> GetTablesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetTablesRequest&, GetTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetViewResponse> GetViewOutcome;
                typedef std::future<GetViewOutcome> GetViewOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetViewRequest&, GetViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetViewAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVolumeResponse> GetVolumeOutcome;
                typedef std::future<GetVolumeOutcome> GetVolumeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetVolumeRequest&, GetVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowResponse> GetWorkflowOutcome;
                typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowRequest&, GetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowRunResponse> GetWorkflowRunOutcome;
                typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowRunRequest&, GetWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowTaskRunResponse> GetWorkflowTaskRunOutcome;
                typedef std::future<GetWorkflowTaskRunOutcome> GetWorkflowTaskRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowTaskRunRequest&, GetWorkflowTaskRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowTaskRunAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkspaceResponse> GetWorkspaceOutcome;
                typedef std::future<GetWorkspaceOutcome> GetWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkspaceRequest&, GetWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillWorkflowRunResponse> KillWorkflowRunOutcome;
                typedef std::future<KillWorkflowRunOutcome> KillWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::KillWorkflowRunRequest&, KillWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCatalogNamesResponse> ListCatalogNamesOutcome;
                typedef std::future<ListCatalogNamesOutcome> ListCatalogNamesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListCatalogNamesRequest&, ListCatalogNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCatalogNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCatalogsResponse> ListCatalogsOutcome;
                typedef std::future<ListCatalogsOutcome> ListCatalogsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListCatalogsRequest&, ListCatalogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCatalogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleGroupUsersResponse> ListConsoleGroupUsersOutcome;
                typedef std::future<ListConsoleGroupUsersOutcome> ListConsoleGroupUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleGroupUsersRequest&, ListConsoleGroupUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleGroupUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleGroupsResponse> ListConsoleGroupsOutcome;
                typedef std::future<ListConsoleGroupsOutcome> ListConsoleGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleGroupsRequest&, ListConsoleGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleRolesResponse> ListConsoleRolesOutcome;
                typedef std::future<ListConsoleRolesOutcome> ListConsoleRolesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleRolesRequest&, ListConsoleRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleUsersResponse> ListConsoleUsersOutcome;
                typedef std::future<ListConsoleUsersOutcome> ListConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleUsersRequest&, ListConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFeatureTablesResponse> ListFeatureTablesOutcome;
                typedef std::future<ListFeatureTablesOutcome> ListFeatureTablesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListFeatureTablesRequest&, ListFeatureTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFeatureTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFilesResponse> ListFilesOutcome;
                typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListFilesRequest&, ListFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLocationsResponse> ListLocationsOutcome;
                typedef std::future<ListLocationsOutcome> ListLocationsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListLocationsRequest&, ListLocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListModelsResponse> ListModelsOutcome;
                typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListModelsRequest&, ListModelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListModelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSchemaNamesResponse> ListSchemaNamesOutcome;
                typedef std::future<ListSchemaNamesOutcome> ListSchemaNamesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListSchemaNamesRequest&, ListSchemaNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSchemaNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSchemasResponse> ListSchemasOutcome;
                typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListSchemasRequest&, ListSchemasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSchemasAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTableNamesResponse> ListTableNamesOutcome;
                typedef std::future<ListTableNamesOutcome> ListTableNamesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListTableNamesRequest&, ListTableNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTableNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTablesResponse> ListTablesOutcome;
                typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListTablesRequest&, ListTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListViewNamesResponse> ListViewNamesOutcome;
                typedef std::future<ListViewNamesOutcome> ListViewNamesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListViewNamesRequest&, ListViewNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListViewNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListViewsResponse> ListViewsOutcome;
                typedef std::future<ListViewsOutcome> ListViewsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListViewsRequest&, ListViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListVolumesResponse> ListVolumesOutcome;
                typedef std::future<ListVolumesOutcome> ListVolumesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListVolumesRequest&, ListVolumesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListVolumesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowRunsResponse> ListWorkflowRunsOutcome;
                typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowRunsRequest&, ListWorkflowRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowTaskRunsResponse> ListWorkflowTaskRunsOutcome;
                typedef std::future<ListWorkflowTaskRunsOutcome> ListWorkflowTaskRunsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowTaskRunsRequest&, ListWorkflowTaskRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowTaskRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowsResponse> ListWorkflowsOutcome;
                typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowsRequest&, ListWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspaceGroupUsersResponse> ListWorkspaceGroupUsersOutcome;
                typedef std::future<ListWorkspaceGroupUsersOutcome> ListWorkspaceGroupUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspaceGroupUsersRequest&, ListWorkspaceGroupUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceGroupUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspaceGroupsResponse> ListWorkspaceGroupsOutcome;
                typedef std::future<ListWorkspaceGroupsOutcome> ListWorkspaceGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspaceGroupsRequest&, ListWorkspaceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspaceUsersResponse> ListWorkspaceUsersOutcome;
                typedef std::future<ListWorkspaceUsersOutcome> ListWorkspaceUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspaceUsersRequest&, ListWorkspaceUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspacesResponse> ListWorkspacesOutcome;
                typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspacesRequest&, ListWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveConsoleUsersResponse> RemoveConsoleUsersOutcome;
                typedef std::future<RemoveConsoleUsersOutcome> RemoveConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RemoveConsoleUsersRequest&, RemoveConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWorkspaceGroupsResponse> RemoveWorkspaceGroupsOutcome;
                typedef std::future<RemoveWorkspaceGroupsOutcome> RemoveWorkspaceGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RemoveWorkspaceGroupsRequest&, RemoveWorkspaceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkspaceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWorkspaceUsersResponse> RemoveWorkspaceUsersOutcome;
                typedef std::future<RemoveWorkspaceUsersOutcome> RemoveWorkspaceUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RemoveWorkspaceUsersRequest&, RemoveWorkspaceUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkspaceUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunWorkflowRunResponse> RerunWorkflowRunOutcome;
                typedef std::future<RerunWorkflowRunOutcome> RerunWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RerunWorkflowRunRequest&, RerunWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::RunWorkflowResponse> RunWorkflowOutcome;
                typedef std::future<RunWorkflowOutcome> RunWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RunWorkflowRequest&, RunWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchAssetResponse> SearchAssetOutcome;
                typedef std::future<SearchAssetOutcome> SearchAssetOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::SearchAssetRequest&, SearchAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::StartComputeResponse> StartComputeOutcome;
                typedef std::future<StartComputeOutcome> StartComputeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::StartComputeRequest&, StartComputeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartComputeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopComputeResponse> StopComputeOutcome;
                typedef std::future<StopComputeOutcome> StopComputeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::StopComputeRequest&, StopComputeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopComputeAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkflowBundleResponse> UnbindWorkflowBundleOutcome;
                typedef std::future<UnbindWorkflowBundleOutcome> UnbindWorkflowBundleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UnbindWorkflowBundleRequest&, UnbindWorkflowBundleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkflowBundleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCatalogResponse> UpdateCatalogOutcome;
                typedef std::future<UpdateCatalogOutcome> UpdateCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateCatalogRequest&, UpdateCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConsoleGroupResponse> UpdateConsoleGroupOutcome;
                typedef std::future<UpdateConsoleGroupOutcome> UpdateConsoleGroupOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateConsoleGroupRequest&, UpdateConsoleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsoleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConsoleUsersResponse> UpdateConsoleUsersOutcome;
                typedef std::future<UpdateConsoleUsersOutcome> UpdateConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateConsoleUsersRequest&, UpdateConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFileResponse> UpdateFileOutcome;
                typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateFileRequest&, UpdateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFolderResponse> UpdateFolderOutcome;
                typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateFolderRequest&, UpdateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFunctionResponse> UpdateFunctionOutcome;
                typedef std::future<UpdateFunctionOutcome> UpdateFunctionOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateFunctionRequest&, UpdateFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateLocationResponse> UpdateLocationOutcome;
                typedef std::future<UpdateLocationOutcome> UpdateLocationOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateLocationRequest&, UpdateLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateModelResponse> UpdateModelOutcome;
                typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateModelRequest&, UpdateModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateModelAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateModelVersionResponse> UpdateModelVersionOutcome;
                typedef std::future<UpdateModelVersionOutcome> UpdateModelVersionOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateModelVersionRequest&, UpdateModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSchemaResponse> UpdateSchemaOutcome;
                typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateSchemaRequest&, UpdateSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTableResponse> UpdateTableOutcome;
                typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateTableRequest&, UpdateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTableColumnResponse> UpdateTableColumnOutcome;
                typedef std::future<UpdateTableColumnOutcome> UpdateTableColumnOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateTableColumnRequest&, UpdateTableColumnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableColumnAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateViewResponse> UpdateViewOutcome;
                typedef std::future<UpdateViewOutcome> UpdateViewOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateViewRequest&, UpdateViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateViewAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateVolumeResponse> UpdateVolumeOutcome;
                typedef std::future<UpdateVolumeOutcome> UpdateVolumeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateVolumeRequest&, UpdateVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowResponse> UpdateWorkflowOutcome;
                typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkflowRequest&, UpdateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceResponse> UpdateWorkspaceOutcome;
                typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceRequest&, UpdateWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceGroupsRolesResponse> UpdateWorkspaceGroupsRolesOutcome;
                typedef std::future<UpdateWorkspaceGroupsRolesOutcome> UpdateWorkspaceGroupsRolesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceGroupsRolesRequest&, UpdateWorkspaceGroupsRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceGroupsRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceGroupsTagsResponse> UpdateWorkspaceGroupsTagsOutcome;
                typedef std::future<UpdateWorkspaceGroupsTagsOutcome> UpdateWorkspaceGroupsTagsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceGroupsTagsRequest&, UpdateWorkspaceGroupsTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceGroupsTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceRoleResponse> UpdateWorkspaceRoleOutcome;
                typedef std::future<UpdateWorkspaceRoleOutcome> UpdateWorkspaceRoleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceRoleRequest&, UpdateWorkspaceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceUsersRolesResponse> UpdateWorkspaceUsersRolesOutcome;
                typedef std::future<UpdateWorkspaceUsersRolesOutcome> UpdateWorkspaceUsersRolesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceUsersRolesRequest&, UpdateWorkspaceUsersRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceUsersRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceUsersTagsResponse> UpdateWorkspaceUsersTagsOutcome;
                typedef std::future<UpdateWorkspaceUsersTagsOutcome> UpdateWorkspaceUsersTagsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceUsersTagsRequest&, UpdateWorkspaceUsersTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceUsersTagsAsyncHandler;



                /**
                 *添加控制台用户，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req AddConsoleUsersRequest
                 * @return AddConsoleUsersOutcome
                 */
                AddConsoleUsersOutcome AddConsoleUsers(const Model::AddConsoleUsersRequest &request);
                void AddConsoleUsersAsync(const Model::AddConsoleUsersRequest& request, const AddConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddConsoleUsersOutcomeCallable AddConsoleUsersCallable(const Model::AddConsoleUsersRequest& request);

                /**
                 *添加工作空间用户组
                 * @param req AddWorkspaceGroupsRequest
                 * @return AddWorkspaceGroupsOutcome
                 */
                AddWorkspaceGroupsOutcome AddWorkspaceGroups(const Model::AddWorkspaceGroupsRequest &request);
                void AddWorkspaceGroupsAsync(const Model::AddWorkspaceGroupsRequest& request, const AddWorkspaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddWorkspaceGroupsOutcomeCallable AddWorkspaceGroupsCallable(const Model::AddWorkspaceGroupsRequest& request);

                /**
                 *创建用户组
                 * @param req AddWorkspaceUsersRequest
                 * @return AddWorkspaceUsersOutcome
                 */
                AddWorkspaceUsersOutcome AddWorkspaceUsers(const Model::AddWorkspaceUsersRequest &request);
                void AddWorkspaceUsersAsync(const Model::AddWorkspaceUsersRequest& request, const AddWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddWorkspaceUsersOutcomeCallable AddWorkspaceUsersCallable(const Model::AddWorkspaceUsersRequest& request);

                /**
                 *创建数据目录接口
                 * @param req CreateCatalogRequest
                 * @return CreateCatalogOutcome
                 */
                CreateCatalogOutcome CreateCatalog(const Model::CreateCatalogRequest &request);
                void CreateCatalogAsync(const Model::CreateCatalogRequest& request, const CreateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCatalogOutcomeCallable CreateCatalogCallable(const Model::CreateCatalogRequest& request);

                /**
                 *创建控制台用户组，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req CreateConsoleGroupRequest
                 * @return CreateConsoleGroupOutcome
                 */
                CreateConsoleGroupOutcome CreateConsoleGroup(const Model::CreateConsoleGroupRequest &request);
                void CreateConsoleGroupAsync(const Model::CreateConsoleGroupRequest& request, const CreateConsoleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleGroupOutcomeCallable CreateConsoleGroupCallable(const Model::CreateConsoleGroupRequest& request);

                /**
                 *在Studio（统一开发 IDE）的工作空间文件树中新建一个文件（Notebook/SQL/Python等），创建成功后返回文件的完整元信息。

**前置条件**
1. WorkspaceId 对应工作空间存在，且调用方为该工作空间成员；
2. ParentFolderPath 对应的父文件夹必须存在，且调用方对其有写权限（根目录传 `/`）；
3. FileName 在同一父文件夹下不能重名（含后缀比较）；
4. FileName 后缀必须与 FileType 匹配（`.ipynb`↔`NOTEBOOK_FILE`、`.sql`↔`SQL_FILE`）；
5. 需带文件内容创建时通过 Storage 传入（大文件走 COS 中转，小文件放 Storage.Content）。
                 * @param req CreateFileRequest
                 * @return CreateFileOutcome
                 */
                CreateFileOutcome CreateFile(const Model::CreateFileRequest &request);
                void CreateFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileOutcomeCallable CreateFileCallable(const Model::CreateFileRequest& request);

                /**
                 *创建文件夹
                 * @param req CreateFolderRequest
                 * @return CreateFolderOutcome
                 */
                CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest &request);
                void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request);

                /**
                 *创建存储位置
使用场景：在数据湖仓库中创建新的存储位置
                 * @param req CreateLocationRequest
                 * @return CreateLocationOutcome
                 */
                CreateLocationOutcome CreateLocation(const Model::CreateLocationRequest &request);
                void CreateLocationAsync(const Model::CreateLocationRequest& request, const CreateLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLocationOutcomeCallable CreateLocationCallable(const Model::CreateLocationRequest& request);

                /**
                 *创建模型接口
                 * @param req CreateModelRequest
                 * @return CreateModelOutcome
                 */
                CreateModelOutcome CreateModel(const Model::CreateModelRequest &request);
                void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request);

                /**
                 *创建模型版本
                 * @param req CreateModelVersionRequest
                 * @return CreateModelVersionOutcome
                 */
                CreateModelVersionOutcome CreateModelVersion(const Model::CreateModelVersionRequest &request);
                void CreateModelVersionAsync(const Model::CreateModelVersionRequest& request, const CreateModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelVersionOutcomeCallable CreateModelVersionCallable(const Model::CreateModelVersionRequest& request);

                /**
                 *创建schema
                 * @param req CreateSchemaRequest
                 * @return CreateSchemaOutcome
                 */
                CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest &request);
                void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request);

                /**
                 *创建数据卷接口
                 * @param req CreateVolumeRequest
                 * @return CreateVolumeOutcome
                 */
                CreateVolumeOutcome CreateVolume(const Model::CreateVolumeRequest &request);
                void CreateVolumeAsync(const Model::CreateVolumeRequest& request, const CreateVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVolumeOutcomeCallable CreateVolumeCallable(const Model::CreateVolumeRequest& request);

                /**
                 *创建工作流
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *创建工作空间，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req CreateWorkspaceRequest
                 * @return CreateWorkspaceOutcome
                 */
                CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest &request);
                void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request);

                /**
                 *创建工作空间角色
                 * @param req CreateWorkspaceRoleRequest
                 * @return CreateWorkspaceRoleOutcome
                 */
                CreateWorkspaceRoleOutcome CreateWorkspaceRole(const Model::CreateWorkspaceRoleRequest &request);
                void CreateWorkspaceRoleAsync(const Model::CreateWorkspaceRoleRequest& request, const CreateWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceRoleOutcomeCallable CreateWorkspaceRoleCallable(const Model::CreateWorkspaceRoleRequest& request);

                /**
                 *删除catalog
                 * @param req DeleteCatalogRequest
                 * @return DeleteCatalogOutcome
                 */
                DeleteCatalogOutcome DeleteCatalog(const Model::DeleteCatalogRequest &request);
                void DeleteCatalogAsync(const Model::DeleteCatalogRequest& request, const DeleteCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCatalogOutcomeCallable DeleteCatalogCallable(const Model::DeleteCatalogRequest& request);

                /**
                 *删除控制台用户组，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req DeleteConsoleGroupsRequest
                 * @return DeleteConsoleGroupsOutcome
                 */
                DeleteConsoleGroupsOutcome DeleteConsoleGroups(const Model::DeleteConsoleGroupsRequest &request);
                void DeleteConsoleGroupsAsync(const Model::DeleteConsoleGroupsRequest& request, const DeleteConsoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsoleGroupsOutcomeCallable DeleteConsoleGroupsCallable(const Model::DeleteConsoleGroupsRequest& request);

                /**
                 *将文件移入回收站（软删除），同时清理该文件的版本记录与执行结果快照。

**前置条件**
1. FileId 对应文件必须存在且为活跃状态；
2. 调用方对该文件有删除权限；
3. 文件未被工作流任务引用。

**错误码（Module 均为 `Studio`）**

| 错误码（Code） | InnerCode | 描述 | 处理建议 |
| --- | --- | --- | --- |
| `MissingParameter.WorkspaceId` | 1030001 | 缺少 WorkspaceId | 请传入 WorkspaceId |
| `MissingParameter.FileId` | 1030003 | 缺少 FileId | 请传入 FileId  |
| `InvalidParameterValue.FileType` | 1030102 | FileType 取值不支持 | FileType 取 FILE/NOTEBOOK_FILE/SQL_FILE |
| `ResourceNotFound.FileNotFound` | 1030203 | 文件不存在或已删除 | 请确认 FileId |
| `ResourceInUse.FileReferencedByTask` | 1030204 | 文件被工作流任务引用，不允许删除 | 请先解除任务引用后再删除 |
| `UnauthorizedOperation.FileDeleteDenied` | 1030303 | 对该文件无删除权限 | 请联系文件负责人或空间管理员授权 |
| `InternalError` | 1030900 | 服务内部异常 | 请携带 RequestId 联系支持 |
                 * @param req DeleteFileRequest
                 * @return DeleteFileOutcome
                 */
                DeleteFileOutcome DeleteFile(const Model::DeleteFileRequest &request);
                void DeleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileOutcomeCallable DeleteFileCallable(const Model::DeleteFileRequest& request);

                /**
                 *删除文件夹
                 * @param req DeleteFolderRequest
                 * @return DeleteFolderOutcome
                 */
                DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest &request);
                void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request);

                /**
                 *删除存储位置
使用场景：删除指定的存储位置
前置条件：存储位置名称必须存在
错误码：MetaLakeNotFound - 存储位置不存在
                 * @param req DeleteLocationRequest
                 * @return DeleteLocationOutcome
                 */
                DeleteLocationOutcome DeleteLocation(const Model::DeleteLocationRequest &request);
                void DeleteLocationAsync(const Model::DeleteLocationRequest& request, const DeleteLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLocationOutcomeCallable DeleteLocationCallable(const Model::DeleteLocationRequest& request);

                /**
                 *删除模型
                 * @param req DeleteModelRequest
                 * @return DeleteModelOutcome
                 */
                DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest &request);
                void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request);

                /**
                 *删除schema
                 * @param req DeleteSchemaRequest
                 * @return DeleteSchemaOutcome
                 */
                DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest &request);
                void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request);

                /**
                 *删除table
                 * @param req DeleteTableRequest
                 * @return DeleteTableOutcome
                 */
                DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest &request);
                void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request);

                /**
                 *删除view
                 * @param req DeleteViewRequest
                 * @return DeleteViewOutcome
                 */
                DeleteViewOutcome DeleteView(const Model::DeleteViewRequest &request);
                void DeleteViewAsync(const Model::DeleteViewRequest& request, const DeleteViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteViewOutcomeCallable DeleteViewCallable(const Model::DeleteViewRequest& request);

                /**
                 *删除数据卷
                 * @param req DeleteVolumeRequest
                 * @return DeleteVolumeOutcome
                 */
                DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest &request);
                void DeleteVolumeAsync(const Model::DeleteVolumeRequest& request, const DeleteVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVolumeOutcomeCallable DeleteVolumeCallable(const Model::DeleteVolumeRequest& request);

                /**
                 *删除工作流
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *删除工作空间
                 * @param req DeleteWorkspaceRequest
                 * @return DeleteWorkspaceOutcome
                 */
                DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest &request);
                void DeleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request);

                /**
                 *删除工作空间角色
                 * @param req DeleteWorkspaceRoleRequest
                 * @return DeleteWorkspaceRoleOutcome
                 */
                DeleteWorkspaceRoleOutcome DeleteWorkspaceRole(const Model::DeleteWorkspaceRoleRequest &request);
                void DeleteWorkspaceRoleAsync(const Model::DeleteWorkspaceRoleRequest& request, const DeleteWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkspaceRoleOutcomeCallable DeleteWorkspaceRoleCallable(const Model::DeleteWorkspaceRoleRequest& request);

                /**
                 *查询catalog详情
                 * @param req GetCatalogRequest
                 * @return GetCatalogOutcome
                 */
                GetCatalogOutcome GetCatalog(const Model::GetCatalogRequest &request);
                void GetCatalogAsync(const Model::GetCatalogRequest& request, const GetCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCatalogOutcomeCallable GetCatalogCallable(const Model::GetCatalogRequest& request);

                /**
                 *获取文件的元信息，可选包含文件内容，支持按版本读取历史快照。

**前置条件**
1. FileId 与 FilePath 二选一，至少传一个；同时传时以 FileId 为准；
2. 对应文件必须存在，且调用方对该文件有读权限；
3. 传 VersionId 时该版本必须存在。

**错误码（Module 均为 `Studio`）**

| 错误码（Code） | InnerCode | 描述 | 处理建议 |
| --- | --- | --- | --- |
| `MissingParameter.WorkspaceId` | 1030001 | 缺少 WorkspaceId | 请传入 WorkspaceId |
| `MissingParameter.FileId` | 1030003 | FileId 与 FilePath 同时为空 | FileId 与 FilePath 二选一，至少传一个 |
| `InvalidParameterValue.FileType` | 1030102 | FileType 取值不支持 | FileType 取 FILE/NOTEBOOK_FILE/SQL_FILE |
| `ResourceNotFound.FileNotFound` | 1030203 | 文件不存在或已删除 | 请确认 FileId 或 FilePath |
| `ResourceNotFound.FileVersionNotFound` | 1030205 | 指定的文件版本不存在 | 请确认 VersionId，或调用 ListFileVersions 获取 |
| `UnauthorizedOperation.FileReadDenied` | 1030304 | 对该文件无读权限 | 请联系文件负责人或空间管理员授权 |
| `InternalError` | 1030900 | 服务内部异常 | 请携带 RequestId 联系支持 |
                 * @param req GetFileRequest
                 * @return GetFileOutcome
                 */
                GetFileOutcome GetFile(const Model::GetFileRequest &request);
                void GetFileAsync(const Model::GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFileOutcomeCallable GetFileCallable(const Model::GetFileRequest& request);

                /**
                 *获取文件夹详情
                 * @param req GetFolderRequest
                 * @return GetFolderOutcome
                 */
                GetFolderOutcome GetFolder(const Model::GetFolderRequest &request);
                void GetFolderAsync(const Model::GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFolderOutcomeCallable GetFolderCallable(const Model::GetFolderRequest& request);

                /**
                 *查询存储位置详情
使用场景：根据存储位置名获取单个存储位置的详细信息
前置条件：存储位置名称必须存在
错误码：MetaLakeNotFound - 存储位置不存在
                 * @param req GetLocationRequest
                 * @return GetLocationOutcome
                 */
                GetLocationOutcome GetLocation(const Model::GetLocationRequest &request);
                void GetLocationAsync(const Model::GetLocationRequest& request, const GetLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLocationOutcomeCallable GetLocationCallable(const Model::GetLocationRequest& request);

                /**
                 *获取模型详情
                 * @param req GetModelRequest
                 * @return GetModelOutcome
                 */
                GetModelOutcome GetModel(const Model::GetModelRequest &request);
                void GetModelAsync(const Model::GetModelRequest& request, const GetModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetModelOutcomeCallable GetModelCallable(const Model::GetModelRequest& request);

                /**
                 *获取模型版本详情
                 * @param req GetModelVersionRequest
                 * @return GetModelVersionOutcome
                 */
                GetModelVersionOutcome GetModelVersion(const Model::GetModelVersionRequest &request);
                void GetModelVersionAsync(const Model::GetModelVersionRequest& request, const GetModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetModelVersionOutcomeCallable GetModelVersionCallable(const Model::GetModelVersionRequest& request);

                /**
                 *查询schema详情
                 * @param req GetSchemaRequest
                 * @return GetSchemaOutcome
                 */
                GetSchemaOutcome GetSchema(const Model::GetSchemaRequest &request);
                void GetSchemaAsync(const Model::GetSchemaRequest& request, const GetSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSchemaOutcomeCallable GetSchemaCallable(const Model::GetSchemaRequest& request);

                /**
                 *查询table详情
                 * @param req GetTableRequest
                 * @return GetTableOutcome
                 */
                GetTableOutcome GetTable(const Model::GetTableRequest &request);
                void GetTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTableOutcomeCallable GetTableCallable(const Model::GetTableRequest& request);

                /**
                 *批量获取表的元数据。使用场景：根据表的全名列表（catalogName.schemaName.tableName）批量获取表的详细元数据信息。前置条件：需要有对应workspace的读权限，仅返回当前workspace有权限的catalog下的表。权限校验：通过getAuthedCatalogNames获取有权限的catalogName进行过滤，不在权限范围内的表会被静默跳过。限制：FullNames最大支持20个表全名
                 * @param req GetTablesRequest
                 * @return GetTablesOutcome
                 */
                GetTablesOutcome GetTables(const Model::GetTablesRequest &request);
                void GetTablesAsync(const Model::GetTablesRequest& request, const GetTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTablesOutcomeCallable GetTablesCallable(const Model::GetTablesRequest& request);

                /**
                 *查询view详情
                 * @param req GetViewRequest
                 * @return GetViewOutcome
                 */
                GetViewOutcome GetView(const Model::GetViewRequest &request);
                void GetViewAsync(const Model::GetViewRequest& request, const GetViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetViewOutcomeCallable GetViewCallable(const Model::GetViewRequest& request);

                /**
                 *获取模型详情
                 * @param req GetVolumeRequest
                 * @return GetVolumeOutcome
                 */
                GetVolumeOutcome GetVolume(const Model::GetVolumeRequest &request);
                void GetVolumeAsync(const Model::GetVolumeRequest& request, const GetVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVolumeOutcomeCallable GetVolumeCallable(const Model::GetVolumeRequest& request);

                /**
                 *获取工作流详细信息
                 * @param req GetWorkflowRequest
                 * @return GetWorkflowOutcome
                 */
                GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest &request);
                void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request);

                /**
                 *查询工作流运行详情
                 * @param req GetWorkflowRunRequest
                 * @return GetWorkflowRunOutcome
                 */
                GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest &request);
                void GetWorkflowRunAsync(const Model::GetWorkflowRunRequest& request, const GetWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const Model::GetWorkflowRunRequest& request);

                /**
                 *查询任务运行详情
                 * @param req GetWorkflowTaskRunRequest
                 * @return GetWorkflowTaskRunOutcome
                 */
                GetWorkflowTaskRunOutcome GetWorkflowTaskRun(const Model::GetWorkflowTaskRunRequest &request);
                void GetWorkflowTaskRunAsync(const Model::GetWorkflowTaskRunRequest& request, const GetWorkflowTaskRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowTaskRunOutcomeCallable GetWorkflowTaskRunCallable(const Model::GetWorkflowTaskRunRequest& request);

                /**
                 *查询工作空间详情
                 * @param req GetWorkspaceRequest
                 * @return GetWorkspaceOutcome
                 */
                GetWorkspaceOutcome GetWorkspace(const Model::GetWorkspaceRequest &request);
                void GetWorkspaceAsync(const Model::GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkspaceOutcomeCallable GetWorkspaceCallable(const Model::GetWorkspaceRequest& request);

                /**
                 *终止工作流的运行
                 * @param req KillWorkflowRunRequest
                 * @return KillWorkflowRunOutcome
                 */
                KillWorkflowRunOutcome KillWorkflowRun(const Model::KillWorkflowRunRequest &request);
                void KillWorkflowRunAsync(const Model::KillWorkflowRunRequest& request, const KillWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillWorkflowRunOutcomeCallable KillWorkflowRunCallable(const Model::KillWorkflowRunRequest& request);

                /**
                 *分页查询数据目录名称列表
                 * @param req ListCatalogNamesRequest
                 * @return ListCatalogNamesOutcome
                 */
                ListCatalogNamesOutcome ListCatalogNames(const Model::ListCatalogNamesRequest &request);
                void ListCatalogNamesAsync(const Model::ListCatalogNamesRequest& request, const ListCatalogNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCatalogNamesOutcomeCallable ListCatalogNamesCallable(const Model::ListCatalogNamesRequest& request);

                /**
                 *分页获取数据目录列表
                 * @param req ListCatalogsRequest
                 * @return ListCatalogsOutcome
                 */
                ListCatalogsOutcome ListCatalogs(const Model::ListCatalogsRequest &request);
                void ListCatalogsAsync(const Model::ListCatalogsRequest& request, const ListCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCatalogsOutcomeCallable ListCatalogsCallable(const Model::ListCatalogsRequest& request);

                /**
                 *查询控制台用户组成员列表，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req ListConsoleGroupUsersRequest
                 * @return ListConsoleGroupUsersOutcome
                 */
                ListConsoleGroupUsersOutcome ListConsoleGroupUsers(const Model::ListConsoleGroupUsersRequest &request);
                void ListConsoleGroupUsersAsync(const Model::ListConsoleGroupUsersRequest& request, const ListConsoleGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleGroupUsersOutcomeCallable ListConsoleGroupUsersCallable(const Model::ListConsoleGroupUsersRequest& request);

                /**
                 *查询控制台用户组列表，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req ListConsoleGroupsRequest
                 * @return ListConsoleGroupsOutcome
                 */
                ListConsoleGroupsOutcome ListConsoleGroups(const Model::ListConsoleGroupsRequest &request);
                void ListConsoleGroupsAsync(const Model::ListConsoleGroupsRequest& request, const ListConsoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleGroupsOutcomeCallable ListConsoleGroupsCallable(const Model::ListConsoleGroupsRequest& request);

                /**
                 *查询控制台角色列表，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req ListConsoleRolesRequest
                 * @return ListConsoleRolesOutcome
                 */
                ListConsoleRolesOutcome ListConsoleRoles(const Model::ListConsoleRolesRequest &request);
                void ListConsoleRolesAsync(const Model::ListConsoleRolesRequest& request, const ListConsoleRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleRolesOutcomeCallable ListConsoleRolesCallable(const Model::ListConsoleRolesRequest& request);

                /**
                 *查询控制台用户列表，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req ListConsoleUsersRequest
                 * @return ListConsoleUsersOutcome
                 */
                ListConsoleUsersOutcome ListConsoleUsers(const Model::ListConsoleUsersRequest &request);
                void ListConsoleUsersAsync(const Model::ListConsoleUsersRequest& request, const ListConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleUsersOutcomeCallable ListConsoleUsersCallable(const Model::ListConsoleUsersRequest& request);

                /**
                 *查询特征表列表
                 * @param req ListFeatureTablesRequest
                 * @return ListFeatureTablesOutcome
                 */
                ListFeatureTablesOutcome ListFeatureTables(const Model::ListFeatureTablesRequest &request);
                void ListFeatureTablesAsync(const Model::ListFeatureTablesRequest& request, const ListFeatureTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFeatureTablesOutcomeCallable ListFeatureTablesCallable(const Model::ListFeatureTablesRequest& request);

                /**
                 *获取文件夹和文件列表
                 * @param req ListFilesRequest
                 * @return ListFilesOutcome
                 */
                ListFilesOutcome ListFiles(const Model::ListFilesRequest &request);
                void ListFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFilesOutcomeCallable ListFilesCallable(const Model::ListFilesRequest& request);

                /**
                 *分页查询存储位置列表
使用场景：分页查询数据湖仓库中的存储位置详情列表，支持模式匹配和快照分页
                 * @param req ListLocationsRequest
                 * @return ListLocationsOutcome
                 */
                ListLocationsOutcome ListLocations(const Model::ListLocationsRequest &request);
                void ListLocationsAsync(const Model::ListLocationsRequest& request, const ListLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLocationsOutcomeCallable ListLocationsCallable(const Model::ListLocationsRequest& request);

                /**
                 *分页获取模型信息
                 * @param req ListModelsRequest
                 * @return ListModelsOutcome
                 */
                ListModelsOutcome ListModels(const Model::ListModelsRequest &request);
                void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request);

                /**
                 *分页查询数据库名称列表
                 * @param req ListSchemaNamesRequest
                 * @return ListSchemaNamesOutcome
                 */
                ListSchemaNamesOutcome ListSchemaNames(const Model::ListSchemaNamesRequest &request);
                void ListSchemaNamesAsync(const Model::ListSchemaNamesRequest& request, const ListSchemaNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSchemaNamesOutcomeCallable ListSchemaNamesCallable(const Model::ListSchemaNamesRequest& request);

                /**
                 *获取schema列表
                 * @param req ListSchemasRequest
                 * @return ListSchemasOutcome
                 */
                ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest &request);
                void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request);

                /**
                 *分页查询数据表名称列表
                 * @param req ListTableNamesRequest
                 * @return ListTableNamesOutcome
                 */
                ListTableNamesOutcome ListTableNames(const Model::ListTableNamesRequest &request);
                void ListTableNamesAsync(const Model::ListTableNamesRequest& request, const ListTableNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTableNamesOutcomeCallable ListTableNamesCallable(const Model::ListTableNamesRequest& request);

                /**
                 *获取table列表
                 * @param req ListTablesRequest
                 * @return ListTablesOutcome
                 */
                ListTablesOutcome ListTables(const Model::ListTablesRequest &request);
                void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request);

                /**
                 *分页查询视图名称列表
                 * @param req ListViewNamesRequest
                 * @return ListViewNamesOutcome
                 */
                ListViewNamesOutcome ListViewNames(const Model::ListViewNamesRequest &request);
                void ListViewNamesAsync(const Model::ListViewNamesRequest& request, const ListViewNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListViewNamesOutcomeCallable ListViewNamesCallable(const Model::ListViewNamesRequest& request);

                /**
                 *获取view列表
                 * @param req ListViewsRequest
                 * @return ListViewsOutcome
                 */
                ListViewsOutcome ListViews(const Model::ListViewsRequest &request);
                void ListViewsAsync(const Model::ListViewsRequest& request, const ListViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListViewsOutcomeCallable ListViewsCallable(const Model::ListViewsRequest& request);

                /**
                 *分页获取数据卷信息
                 * @param req ListVolumesRequest
                 * @return ListVolumesOutcome
                 */
                ListVolumesOutcome ListVolumes(const Model::ListVolumesRequest &request);
                void ListVolumesAsync(const Model::ListVolumesRequest& request, const ListVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListVolumesOutcomeCallable ListVolumesCallable(const Model::ListVolumesRequest& request);

                /**
                 *工作流运行列表
                 * @param req ListWorkflowRunsRequest
                 * @return ListWorkflowRunsOutcome
                 */
                ListWorkflowRunsOutcome ListWorkflowRuns(const Model::ListWorkflowRunsRequest &request);
                void ListWorkflowRunsAsync(const Model::ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowRunsOutcomeCallable ListWorkflowRunsCallable(const Model::ListWorkflowRunsRequest& request);

                /**
                 *查询工作流任务历史运行列表
                 * @param req ListWorkflowTaskRunsRequest
                 * @return ListWorkflowTaskRunsOutcome
                 */
                ListWorkflowTaskRunsOutcome ListWorkflowTaskRuns(const Model::ListWorkflowTaskRunsRequest &request);
                void ListWorkflowTaskRunsAsync(const Model::ListWorkflowTaskRunsRequest& request, const ListWorkflowTaskRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowTaskRunsOutcomeCallable ListWorkflowTaskRunsCallable(const Model::ListWorkflowTaskRunsRequest& request);

                /**
                 *查询工作流列表
                 * @param req ListWorkflowsRequest
                 * @return ListWorkflowsOutcome
                 */
                ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest &request);
                void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request);

                /**
                 *查询工作空间用户组用户列表
                 * @param req ListWorkspaceGroupUsersRequest
                 * @return ListWorkspaceGroupUsersOutcome
                 */
                ListWorkspaceGroupUsersOutcome ListWorkspaceGroupUsers(const Model::ListWorkspaceGroupUsersRequest &request);
                void ListWorkspaceGroupUsersAsync(const Model::ListWorkspaceGroupUsersRequest& request, const ListWorkspaceGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspaceGroupUsersOutcomeCallable ListWorkspaceGroupUsersCallable(const Model::ListWorkspaceGroupUsersRequest& request);

                /**
                 *查询工作空间用户组列表
                 * @param req ListWorkspaceGroupsRequest
                 * @return ListWorkspaceGroupsOutcome
                 */
                ListWorkspaceGroupsOutcome ListWorkspaceGroups(const Model::ListWorkspaceGroupsRequest &request);
                void ListWorkspaceGroupsAsync(const Model::ListWorkspaceGroupsRequest& request, const ListWorkspaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspaceGroupsOutcomeCallable ListWorkspaceGroupsCallable(const Model::ListWorkspaceGroupsRequest& request);

                /**
                 *查询工作空间用户列表
                 * @param req ListWorkspaceUsersRequest
                 * @return ListWorkspaceUsersOutcome
                 */
                ListWorkspaceUsersOutcome ListWorkspaceUsers(const Model::ListWorkspaceUsersRequest &request);
                void ListWorkspaceUsersAsync(const Model::ListWorkspaceUsersRequest& request, const ListWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspaceUsersOutcomeCallable ListWorkspaceUsersCallable(const Model::ListWorkspaceUsersRequest& request);

                /**
                 *查询工作空间列表，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req ListWorkspacesRequest
                 * @return ListWorkspacesOutcome
                 */
                ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest &request);
                void ListWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspacesOutcomeCallable ListWorkspacesCallable(const Model::ListWorkspacesRequest& request);

                /**
                 *<p>批量移除控制台用户（单次最多10个；前置校验任一不满足整体拒绝；执行阶段单个失败不中断后续删除，成败以 SuccessUins/FailItems 为准），该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。</p>
                 * @param req RemoveConsoleUsersRequest
                 * @return RemoveConsoleUsersOutcome
                 */
                RemoveConsoleUsersOutcome RemoveConsoleUsers(const Model::RemoveConsoleUsersRequest &request);
                void RemoveConsoleUsersAsync(const Model::RemoveConsoleUsersRequest& request, const RemoveConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveConsoleUsersOutcomeCallable RemoveConsoleUsersCallable(const Model::RemoveConsoleUsersRequest& request);

                /**
                 *移除工作空间用户组
                 * @param req RemoveWorkspaceGroupsRequest
                 * @return RemoveWorkspaceGroupsOutcome
                 */
                RemoveWorkspaceGroupsOutcome RemoveWorkspaceGroups(const Model::RemoveWorkspaceGroupsRequest &request);
                void RemoveWorkspaceGroupsAsync(const Model::RemoveWorkspaceGroupsRequest& request, const RemoveWorkspaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWorkspaceGroupsOutcomeCallable RemoveWorkspaceGroupsCallable(const Model::RemoveWorkspaceGroupsRequest& request);

                /**
                 *<p>批量移除工作空间用户（单次最多10个；单个 UIN 失败不影响其他 UIN 移除，成败以 SuccessUins/FailItems 为准）</p>
                 * @param req RemoveWorkspaceUsersRequest
                 * @return RemoveWorkspaceUsersOutcome
                 */
                RemoveWorkspaceUsersOutcome RemoveWorkspaceUsers(const Model::RemoveWorkspaceUsersRequest &request);
                void RemoveWorkspaceUsersAsync(const Model::RemoveWorkspaceUsersRequest& request, const RemoveWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWorkspaceUsersOutcomeCallable RemoveWorkspaceUsersCallable(const Model::RemoveWorkspaceUsersRequest& request);

                /**
                 *重跑工作流
                 * @param req RerunWorkflowRunRequest
                 * @return RerunWorkflowRunOutcome
                 */
                RerunWorkflowRunOutcome RerunWorkflowRun(const Model::RerunWorkflowRunRequest &request);
                void RerunWorkflowRunAsync(const Model::RerunWorkflowRunRequest& request, const RerunWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunWorkflowRunOutcomeCallable RerunWorkflowRunCallable(const Model::RerunWorkflowRunRequest& request);

                /**
                 *运行工作流
                 * @param req RunWorkflowRequest
                 * @return RunWorkflowOutcome
                 */
                RunWorkflowOutcome RunWorkflow(const Model::RunWorkflowRequest &request);
                void RunWorkflowAsync(const Model::RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunWorkflowOutcomeCallable RunWorkflowCallable(const Model::RunWorkflowRequest& request);

                /**
                 *资产统一搜索
                 * @param req SearchAssetRequest
                 * @return SearchAssetOutcome
                 */
                SearchAssetOutcome SearchAsset(const Model::SearchAssetRequest &request);
                void SearchAssetAsync(const Model::SearchAssetRequest& request, const SearchAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchAssetOutcomeCallable SearchAssetCallable(const Model::SearchAssetRequest& request);

                /**
                 *启动计算资源
                 * @param req StartComputeRequest
                 * @return StartComputeOutcome
                 */
                StartComputeOutcome StartCompute(const Model::StartComputeRequest &request);
                void StartComputeAsync(const Model::StartComputeRequest& request, const StartComputeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartComputeOutcomeCallable StartComputeCallable(const Model::StartComputeRequest& request);

                /**
                 *停止计算资源
                 * @param req StopComputeRequest
                 * @return StopComputeOutcome
                 */
                StopComputeOutcome StopCompute(const Model::StopComputeRequest &request);
                void StopComputeAsync(const Model::StopComputeRequest& request, const StopComputeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopComputeOutcomeCallable StopComputeCallable(const Model::StopComputeRequest& request);

                /**
                 *解绑工作流Bundle信息
说明：本接口语义等同于规范动词清单中的 Detach，因兼容既有产品形态保留 Unbind 命名
                 * @param req UnbindWorkflowBundleRequest
                 * @return UnbindWorkflowBundleOutcome
                 */
                UnbindWorkflowBundleOutcome UnbindWorkflowBundle(const Model::UnbindWorkflowBundleRequest &request);
                void UnbindWorkflowBundleAsync(const Model::UnbindWorkflowBundleRequest& request, const UnbindWorkflowBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkflowBundleOutcomeCallable UnbindWorkflowBundleCallable(const Model::UnbindWorkflowBundleRequest& request);

                /**
                 *修改数据目录信息
使用场景：修改数据目录的注释，按需传入NewComment字段
前置条件：数据目录必须存在
                 * @param req UpdateCatalogRequest
                 * @return UpdateCatalogOutcome
                 */
                UpdateCatalogOutcome UpdateCatalog(const Model::UpdateCatalogRequest &request);
                void UpdateCatalogAsync(const Model::UpdateCatalogRequest& request, const UpdateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCatalogOutcomeCallable UpdateCatalogCallable(const Model::UpdateCatalogRequest& request);

                /**
                 *修改控制台用户组，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req UpdateConsoleGroupRequest
                 * @return UpdateConsoleGroupOutcome
                 */
                UpdateConsoleGroupOutcome UpdateConsoleGroup(const Model::UpdateConsoleGroupRequest &request);
                void UpdateConsoleGroupAsync(const Model::UpdateConsoleGroupRequest& request, const UpdateConsoleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConsoleGroupOutcomeCallable UpdateConsoleGroupCallable(const Model::UpdateConsoleGroupRequest& request);

                /**
                 *修改控制台用户角色，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req UpdateConsoleUsersRequest
                 * @return UpdateConsoleUsersOutcome
                 */
                UpdateConsoleUsersOutcome UpdateConsoleUsers(const Model::UpdateConsoleUsersRequest &request);
                void UpdateConsoleUsersAsync(const Model::UpdateConsoleUsersRequest& request, const UpdateConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConsoleUsersOutcomeCallable UpdateConsoleUsersCallable(const Model::UpdateConsoleUsersRequest& request);

                /**
                 *更新文件内容与运行配置（计算资源、默认 catalog/schema、参数等），返回更新后的文件元信息。

**前置条件**
1. FileId 对应文件必须存在且为活跃状态；
2. 调用方对该文件有写权限；
3. 仅更新配置时不传 Storage；仅更新内容时不传 FileConfig；
4. FileConfig.ResourceId 非空时会校验资源类型与文件类型的匹配性。

**错误码（Module 均为 `Studio`）**

| 错误码（Code） | InnerCode | 描述 | 处理建议 |
| --- | --- | --- | --- |
| `MissingParameter.WorkspaceId` | 1030001 | 缺少 WorkspaceId | 请传入 WorkspaceId |
| `MissingParameter.FileId` | 1030003 | 缺少 FileId | 请传入 FileId |
| `InvalidParameterValue.FileType` | 1030102 | FileType 取值不支持 | FileType 取 FILE/NOTEBOOK_FILE/SQL_FILE |
| `InvalidParameterValue.ResourceId` | 1030104 | 计算资源类型与文件类型不匹配 | Python/Notebook 选数据计算资源，SQL 选数据分析资源 |
| `ResourceNotFound.FileNotFound` | 1030203 | 文件不存在或已删除 | 请确认 FileId，或调用 GetFile 校验文件状态 |
| `UnauthorizedOperation.FileWriteDenied` | 1030302 | 对该文件无写权限 | 请联系文件负责人或空间管理员授权 |
| `FailedOperation.FileStorageUpdateFailed` | 1030401 | 文件内容写入存储失败 | 请稍后重试，持续失败请携带 RequestId 联系支持 |
| `InternalError` | 1030900 | 服务内部异常 | 请携带 RequestId 联系支持 |
                 * @param req UpdateFileRequest
                 * @return UpdateFileOutcome
                 */
                UpdateFileOutcome UpdateFile(const Model::UpdateFileRequest &request);
                void UpdateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFileOutcomeCallable UpdateFileCallable(const Model::UpdateFileRequest& request);

                /**
                 *更新文件夹（支持重命名+移动）
                 * @param req UpdateFolderRequest
                 * @return UpdateFolderOutcome
                 */
                UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest &request);
                void UpdateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFolderOutcomeCallable UpdateFolderCallable(const Model::UpdateFolderRequest& request);

                /**
                 *修改函数信息
使用场景：修改函数的注释，按需传入NewComment字段
前置条件：函数必须存在
                 * @param req UpdateFunctionRequest
                 * @return UpdateFunctionOutcome
                 */
                UpdateFunctionOutcome UpdateFunction(const Model::UpdateFunctionRequest &request);
                void UpdateFunctionAsync(const Model::UpdateFunctionRequest& request, const UpdateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFunctionOutcomeCallable UpdateFunctionCallable(const Model::UpdateFunctionRequest& request);

                /**
                 *修改存储位置
使用场景：修改存储位置的名称、描述或属性信息
前置条件：存储位置名称必须存在
错误码：MetaLakeNotFound - 存储位置不存在
                 * @param req UpdateLocationRequest
                 * @return UpdateLocationOutcome
                 */
                UpdateLocationOutcome UpdateLocation(const Model::UpdateLocationRequest &request);
                void UpdateLocationAsync(const Model::UpdateLocationRequest& request, const UpdateLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateLocationOutcomeCallable UpdateLocationCallable(const Model::UpdateLocationRequest& request);

                /**
                 *修改模型信息
使用场景：修改模型的名称或注释，按需传入NewName/NewComment字段
前置条件：模型必须存在
                 * @param req UpdateModelRequest
                 * @return UpdateModelOutcome
                 */
                UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest &request);
                void UpdateModelAsync(const Model::UpdateModelRequest& request, const UpdateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateModelOutcomeCallable UpdateModelCallable(const Model::UpdateModelRequest& request);

                /**
                 *修改模型版本信息
使用场景：修改模型版本的别名或注释，按需传入对应字段
前置条件：模型版本必须存在
                 * @param req UpdateModelVersionRequest
                 * @return UpdateModelVersionOutcome
                 */
                UpdateModelVersionOutcome UpdateModelVersion(const Model::UpdateModelVersionRequest &request);
                void UpdateModelVersionAsync(const Model::UpdateModelVersionRequest& request, const UpdateModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateModelVersionOutcomeCallable UpdateModelVersionCallable(const Model::UpdateModelVersionRequest& request);

                /**
                 *修改schema信息
使用场景：修改schema的注释，按需传入NewComment字段
前置条件：schema必须存在
                 * @param req UpdateSchemaRequest
                 * @return UpdateSchemaOutcome
                 */
                UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest &request);
                void UpdateSchemaAsync(const Model::UpdateSchemaRequest& request, const UpdateSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request);

                /**
                 *修改表信息
使用场景：修改表的名称或注释，按需传入NewName/NewComment字段
前置条件：表必须存在
                 * @param req UpdateTableRequest
                 * @return UpdateTableOutcome
                 */
                UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest &request);
                void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request);

                /**
                 *修改表字段描述
使用场景：修改表中一个或多个字段的注释
前置条件：用户需对目标表有写权限；字段名必须存在于目标表中
                 * @param req UpdateTableColumnRequest
                 * @return UpdateTableColumnOutcome
                 */
                UpdateTableColumnOutcome UpdateTableColumn(const Model::UpdateTableColumnRequest &request);
                void UpdateTableColumnAsync(const Model::UpdateTableColumnRequest& request, const UpdateTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTableColumnOutcomeCallable UpdateTableColumnCallable(const Model::UpdateTableColumnRequest& request);

                /**
                 *修改视图信息
使用场景：修改视图的名称或注释，按需传入NewName/NewComment字段
前置条件：视图必须存在
                 * @param req UpdateViewRequest
                 * @return UpdateViewOutcome
                 */
                UpdateViewOutcome UpdateView(const Model::UpdateViewRequest &request);
                void UpdateViewAsync(const Model::UpdateViewRequest& request, const UpdateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateViewOutcomeCallable UpdateViewCallable(const Model::UpdateViewRequest& request);

                /**
                 *修改数据卷信息
使用场景：修改数据卷的名称或注释，按需传入NewName/NewComment字段
前置条件：数据卷必须存在
                 * @param req UpdateVolumeRequest
                 * @return UpdateVolumeOutcome
                 */
                UpdateVolumeOutcome UpdateVolume(const Model::UpdateVolumeRequest &request);
                void UpdateVolumeAsync(const Model::UpdateVolumeRequest& request, const UpdateVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateVolumeOutcomeCallable UpdateVolumeCallable(const Model::UpdateVolumeRequest& request);

                /**
                 *更新工作流
                 * @param req UpdateWorkflowRequest
                 * @return UpdateWorkflowOutcome
                 */
                UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest &request);
                void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request);

                /**
                 *修改工作空间，该接口为控制台级接口，仅支持在中心地域调用：国内站请传入 ap-guangzhou，国际站请传入 ap-singapore；其他地域调用将返回 UnsupportedRegion。
                 * @param req UpdateWorkspaceRequest
                 * @return UpdateWorkspaceOutcome
                 */
                UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest &request);
                void UpdateWorkspaceAsync(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const Model::UpdateWorkspaceRequest& request);

                /**
                 *更新工作空间用户组角色
                 * @param req UpdateWorkspaceGroupsRolesRequest
                 * @return UpdateWorkspaceGroupsRolesOutcome
                 */
                UpdateWorkspaceGroupsRolesOutcome UpdateWorkspaceGroupsRoles(const Model::UpdateWorkspaceGroupsRolesRequest &request);
                void UpdateWorkspaceGroupsRolesAsync(const Model::UpdateWorkspaceGroupsRolesRequest& request, const UpdateWorkspaceGroupsRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceGroupsRolesOutcomeCallable UpdateWorkspaceGroupsRolesCallable(const Model::UpdateWorkspaceGroupsRolesRequest& request);

                /**
                 *修改工作空间用户组标签
                 * @param req UpdateWorkspaceGroupsTagsRequest
                 * @return UpdateWorkspaceGroupsTagsOutcome
                 */
                UpdateWorkspaceGroupsTagsOutcome UpdateWorkspaceGroupsTags(const Model::UpdateWorkspaceGroupsTagsRequest &request);
                void UpdateWorkspaceGroupsTagsAsync(const Model::UpdateWorkspaceGroupsTagsRequest& request, const UpdateWorkspaceGroupsTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceGroupsTagsOutcomeCallable UpdateWorkspaceGroupsTagsCallable(const Model::UpdateWorkspaceGroupsTagsRequest& request);

                /**
                 *更新工作空间角色
                 * @param req UpdateWorkspaceRoleRequest
                 * @return UpdateWorkspaceRoleOutcome
                 */
                UpdateWorkspaceRoleOutcome UpdateWorkspaceRole(const Model::UpdateWorkspaceRoleRequest &request);
                void UpdateWorkspaceRoleAsync(const Model::UpdateWorkspaceRoleRequest& request, const UpdateWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceRoleOutcomeCallable UpdateWorkspaceRoleCallable(const Model::UpdateWorkspaceRoleRequest& request);

                /**
                 *修改工作空间用户角色
                 * @param req UpdateWorkspaceUsersRolesRequest
                 * @return UpdateWorkspaceUsersRolesOutcome
                 */
                UpdateWorkspaceUsersRolesOutcome UpdateWorkspaceUsersRoles(const Model::UpdateWorkspaceUsersRolesRequest &request);
                void UpdateWorkspaceUsersRolesAsync(const Model::UpdateWorkspaceUsersRolesRequest& request, const UpdateWorkspaceUsersRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceUsersRolesOutcomeCallable UpdateWorkspaceUsersRolesCallable(const Model::UpdateWorkspaceUsersRolesRequest& request);

                /**
                 *修改工作空间用户标签
本接口为整体覆盖式修改：每次调用以请求中的 Tags 为准，替换指定用户的全部直绑标签，而非增量追加。
1、传入 Tags（含 TagId/TagValueId）：替换为该批标签
2、不传 Tags 或传入空数组（"Tags": []）：将清除 UserUins 中所有用户的全部直绑标签，且操作不可逆，请谨慎调用
3、多个用户将共享同一批 Tags；仅修改单个用户时，UserUins 请只传该用户
4、仅清除用户直绑（Source=1）的标签，用户从用户组继承的标签（Source=2）不受影响
                 * @param req UpdateWorkspaceUsersTagsRequest
                 * @return UpdateWorkspaceUsersTagsOutcome
                 */
                UpdateWorkspaceUsersTagsOutcome UpdateWorkspaceUsersTags(const Model::UpdateWorkspaceUsersTagsRequest &request);
                void UpdateWorkspaceUsersTagsAsync(const Model::UpdateWorkspaceUsersTagsRequest& request, const UpdateWorkspaceUsersTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceUsersTagsOutcomeCallable UpdateWorkspaceUsersTagsCallable(const Model::UpdateWorkspaceUsersTagsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_
