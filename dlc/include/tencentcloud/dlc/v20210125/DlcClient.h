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

#ifndef TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
#define TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dlc/v20210125/model/AddDMSPartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddDMSPartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSPartitionRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSPartitionResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckLockMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckLockMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateExportTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateExportTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateImportTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateImportTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksInOrderRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksInOrderResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteScriptResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSPartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSPartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTablesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTablesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUsersRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUsersResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeViewsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeViewsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DetachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DetachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSPartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSPartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogDetailRequest.h>
#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogDetailResponse.h>
#include <tencentcloud/dlc/v20210125/model/LockMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/LockMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/ReportHeartbeatMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/ReportHeartbeatMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/UnlockMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/UnlockMetaDataResponse.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            class DlcClient : public AbstractClient
            {
            public:
                DlcClient(const Credential &credential, const std::string &region);
                DlcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDMSPartitionsResponse> AddDMSPartitionsOutcome;
                typedef std::future<AddDMSPartitionsOutcome> AddDMSPartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddDMSPartitionsRequest&, AddDMSPartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDMSPartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUsersToWorkGroupResponse> AddUsersToWorkGroupOutcome;
                typedef std::future<AddUsersToWorkGroupOutcome> AddUsersToWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddUsersToWorkGroupRequest&, AddUsersToWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersToWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSDatabaseResponse> AlterDMSDatabaseOutcome;
                typedef std::future<AlterDMSDatabaseOutcome> AlterDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSDatabaseRequest&, AlterDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSPartitionResponse> AlterDMSPartitionOutcome;
                typedef std::future<AlterDMSPartitionOutcome> AlterDMSPartitionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSPartitionRequest&, AlterDMSPartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSPartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSTableResponse> AlterDMSTableOutcome;
                typedef std::future<AlterDMSTableOutcome> AlterDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSTableRequest&, AlterDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachUserPolicyResponse> AttachUserPolicyOutcome;
                typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AttachUserPolicyRequest&, AttachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachWorkGroupPolicyResponse> AttachWorkGroupPolicyOutcome;
                typedef std::future<AttachWorkGroupPolicyOutcome> AttachWorkGroupPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AttachWorkGroupPolicyRequest&, AttachWorkGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachWorkGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindWorkGroupsToUserResponse> BindWorkGroupsToUserOutcome;
                typedef std::future<BindWorkGroupsToUserOutcome> BindWorkGroupsToUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::BindWorkGroupsToUserRequest&, BindWorkGroupsToUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindWorkGroupsToUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckLockMetaDataResponse> CheckLockMetaDataOutcome;
                typedef std::future<CheckLockMetaDataOutcome> CheckLockMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckLockMetaDataRequest&, CheckLockMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckLockMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDMSDatabaseResponse> CreateDMSDatabaseOutcome;
                typedef std::future<CreateDMSDatabaseOutcome> CreateDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDMSDatabaseRequest&, CreateDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDMSTableResponse> CreateDMSTableOutcome;
                typedef std::future<CreateDMSTableOutcome> CreateDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDMSTableRequest&, CreateDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportTaskResponse> CreateExportTaskOutcome;
                typedef std::future<CreateExportTaskOutcome> CreateExportTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateExportTaskRequest&, CreateExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImportTaskResponse> CreateImportTaskOutcome;
                typedef std::future<CreateImportTaskOutcome> CreateImportTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateImportTaskRequest&, CreateImportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResultDownloadResponse> CreateResultDownloadOutcome;
                typedef std::future<CreateResultDownloadOutcome> CreateResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateResultDownloadRequest&, CreateResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScriptResponse> CreateScriptOutcome;
                typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateScriptRequest&, CreateScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppResponse> CreateSparkAppOutcome;
                typedef std::future<CreateSparkAppOutcome> CreateSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppRequest&, CreateSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppTaskResponse> CreateSparkAppTaskOutcome;
                typedef std::future<CreateSparkAppTaskOutcome> CreateSparkAppTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppTaskRequest&, CreateSparkAppTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStoreLocationResponse> CreateStoreLocationOutcome;
                typedef std::future<CreateStoreLocationOutcome> CreateStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateStoreLocationRequest&, CreateStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTableResponse> CreateTableOutcome;
                typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTableRequest&, CreateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTasksResponse> CreateTasksOutcome;
                typedef std::future<CreateTasksOutcome> CreateTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTasksRequest&, CreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTasksInOrderResponse> CreateTasksInOrderOutcome;
                typedef std::future<CreateTasksInOrderOutcome> CreateTasksInOrderOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTasksInOrderRequest&, CreateTasksInOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTasksInOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkGroupResponse> CreateWorkGroupOutcome;
                typedef std::future<CreateWorkGroupOutcome> CreateWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateWorkGroupRequest&, CreateWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScriptResponse> DeleteScriptOutcome;
                typedef std::future<DeleteScriptOutcome> DeleteScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteScriptRequest&, DeleteScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSparkAppResponse> DeleteSparkAppOutcome;
                typedef std::future<DeleteSparkAppOutcome> DeleteSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteSparkAppRequest&, DeleteSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersFromWorkGroupResponse> DeleteUsersFromWorkGroupOutcome;
                typedef std::future<DeleteUsersFromWorkGroupOutcome> DeleteUsersFromWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUsersFromWorkGroupRequest&, DeleteUsersFromWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersFromWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkGroupResponse> DeleteWorkGroupOutcome;
                typedef std::future<DeleteWorkGroupOutcome> DeleteWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteWorkGroupRequest&, DeleteWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSDatabaseResponse> DescribeDMSDatabaseOutcome;
                typedef std::future<DescribeDMSDatabaseOutcome> DescribeDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSDatabaseRequest&, DescribeDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSPartitionsResponse> DescribeDMSPartitionsOutcome;
                typedef std::future<DescribeDMSPartitionsOutcome> DescribeDMSPartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSPartitionsRequest&, DescribeDMSPartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSPartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSTableResponse> DescribeDMSTableOutcome;
                typedef std::future<DescribeDMSTableOutcome> DescribeDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSTableRequest&, DescribeDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSTablesResponse> DescribeDMSTablesOutcome;
                typedef std::future<DescribeDMSTablesOutcome> DescribeDMSTablesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSTablesRequest&, DescribeDMSTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResultDownloadResponse> DescribeResultDownloadOutcome;
                typedef std::future<DescribeResultDownloadOutcome> DescribeResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeResultDownloadRequest&, DescribeResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScriptsResponse> DescribeScriptsOutcome;
                typedef std::future<DescribeScriptsOutcome> DescribeScriptsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeScriptsRequest&, DescribeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobResponse> DescribeSparkAppJobOutcome;
                typedef std::future<DescribeSparkAppJobOutcome> DescribeSparkAppJobOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobRequest&, DescribeSparkAppJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobsResponse> DescribeSparkAppJobsOutcome;
                typedef std::future<DescribeSparkAppJobsOutcome> DescribeSparkAppJobsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobsRequest&, DescribeSparkAppJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppTasksResponse> DescribeSparkAppTasksOutcome;
                typedef std::future<DescribeSparkAppTasksOutcome> DescribeSparkAppTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppTasksRequest&, DescribeSparkAppTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStoreLocationResponse> DescribeStoreLocationOutcome;
                typedef std::future<DescribeStoreLocationOutcome> DescribeStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeStoreLocationRequest&, DescribeStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableResponse> DescribeTableOutcome;
                typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTableRequest&, DescribeTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeViewsResponse> DescribeViewsOutcome;
                typedef std::future<DescribeViewsOutcome> DescribeViewsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeViewsRequest&, DescribeViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkGroupsResponse> DescribeWorkGroupsOutcome;
                typedef std::future<DescribeWorkGroupsOutcome> DescribeWorkGroupsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeWorkGroupsRequest&, DescribeWorkGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachUserPolicyResponse> DetachUserPolicyOutcome;
                typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DetachUserPolicyRequest&, DetachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachWorkGroupPolicyResponse> DetachWorkGroupPolicyOutcome;
                typedef std::future<DetachWorkGroupPolicyOutcome> DetachWorkGroupPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DetachWorkGroupPolicyRequest&, DetachWorkGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachWorkGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSDatabaseResponse> DropDMSDatabaseOutcome;
                typedef std::future<DropDMSDatabaseOutcome> DropDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSDatabaseRequest&, DropDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSPartitionsResponse> DropDMSPartitionsOutcome;
                typedef std::future<DropDMSPartitionsOutcome> DropDMSPartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSPartitionsRequest&, DropDMSPartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSPartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSTableResponse> DropDMSTableOutcome;
                typedef std::future<DropDMSTableOutcome> DropDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSTableRequest&, DropDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTaskJobLogDetailResponse> ListTaskJobLogDetailOutcome;
                typedef std::future<ListTaskJobLogDetailOutcome> ListTaskJobLogDetailOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ListTaskJobLogDetailRequest&, ListTaskJobLogDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskJobLogDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::LockMetaDataResponse> LockMetaDataOutcome;
                typedef std::future<LockMetaDataOutcome> LockMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::LockMetaDataRequest&, LockMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppResponse> ModifySparkAppOutcome;
                typedef std::future<ModifySparkAppOutcome> ModifySparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppRequest&, ModifySparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkGroupResponse> ModifyWorkGroupOutcome;
                typedef std::future<ModifyWorkGroupOutcome> ModifyWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyWorkGroupRequest&, ModifyWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportHeartbeatMetaDataResponse> ReportHeartbeatMetaDataOutcome;
                typedef std::future<ReportHeartbeatMetaDataOutcome> ReportHeartbeatMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ReportHeartbeatMetaDataRequest&, ReportHeartbeatMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportHeartbeatMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkGroupsFromUserResponse> UnbindWorkGroupsFromUserOutcome;
                typedef std::future<UnbindWorkGroupsFromUserOutcome> UnbindWorkGroupsFromUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UnbindWorkGroupsFromUserRequest&, UnbindWorkGroupsFromUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkGroupsFromUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockMetaDataResponse> UnlockMetaDataOutcome;
                typedef std::future<UnlockMetaDataOutcome> UnlockMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UnlockMetaDataRequest&, UnlockMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockMetaDataAsyncHandler;



                /**
                 *DMS元数据新增分区
                 * @param req AddDMSPartitionsRequest
                 * @return AddDMSPartitionsOutcome
                 */
                AddDMSPartitionsOutcome AddDMSPartitions(const Model::AddDMSPartitionsRequest &request);
                void AddDMSPartitionsAsync(const Model::AddDMSPartitionsRequest& request, const AddDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDMSPartitionsOutcomeCallable AddDMSPartitionsCallable(const Model::AddDMSPartitionsRequest& request);

                /**
                 *添加用户到工作组
                 * @param req AddUsersToWorkGroupRequest
                 * @return AddUsersToWorkGroupOutcome
                 */
                AddUsersToWorkGroupOutcome AddUsersToWorkGroup(const Model::AddUsersToWorkGroupRequest &request);
                void AddUsersToWorkGroupAsync(const Model::AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersToWorkGroupOutcomeCallable AddUsersToWorkGroupCallable(const Model::AddUsersToWorkGroupRequest& request);

                /**
                 *DMS元数据更新库
                 * @param req AlterDMSDatabaseRequest
                 * @return AlterDMSDatabaseOutcome
                 */
                AlterDMSDatabaseOutcome AlterDMSDatabase(const Model::AlterDMSDatabaseRequest &request);
                void AlterDMSDatabaseAsync(const Model::AlterDMSDatabaseRequest& request, const AlterDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSDatabaseOutcomeCallable AlterDMSDatabaseCallable(const Model::AlterDMSDatabaseRequest& request);

                /**
                 *DMS元数据更新分区
                 * @param req AlterDMSPartitionRequest
                 * @return AlterDMSPartitionOutcome
                 */
                AlterDMSPartitionOutcome AlterDMSPartition(const Model::AlterDMSPartitionRequest &request);
                void AlterDMSPartitionAsync(const Model::AlterDMSPartitionRequest& request, const AlterDMSPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSPartitionOutcomeCallable AlterDMSPartitionCallable(const Model::AlterDMSPartitionRequest& request);

                /**
                 *DMS元数据更新表
                 * @param req AlterDMSTableRequest
                 * @return AlterDMSTableOutcome
                 */
                AlterDMSTableOutcome AlterDMSTable(const Model::AlterDMSTableRequest &request);
                void AlterDMSTableAsync(const Model::AlterDMSTableRequest& request, const AlterDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSTableOutcomeCallable AlterDMSTableCallable(const Model::AlterDMSTableRequest& request);

                /**
                 *绑定鉴权策略到用户
                 * @param req AttachUserPolicyRequest
                 * @return AttachUserPolicyOutcome
                 */
                AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest &request);
                void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request);

                /**
                 *绑定鉴权策略到工作组
                 * @param req AttachWorkGroupPolicyRequest
                 * @return AttachWorkGroupPolicyOutcome
                 */
                AttachWorkGroupPolicyOutcome AttachWorkGroupPolicy(const Model::AttachWorkGroupPolicyRequest &request);
                void AttachWorkGroupPolicyAsync(const Model::AttachWorkGroupPolicyRequest& request, const AttachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachWorkGroupPolicyOutcomeCallable AttachWorkGroupPolicyCallable(const Model::AttachWorkGroupPolicyRequest& request);

                /**
                 *绑定工作组到用户
                 * @param req BindWorkGroupsToUserRequest
                 * @return BindWorkGroupsToUserOutcome
                 */
                BindWorkGroupsToUserOutcome BindWorkGroupsToUser(const Model::BindWorkGroupsToUserRequest &request);
                void BindWorkGroupsToUserAsync(const Model::BindWorkGroupsToUserRequest& request, const BindWorkGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindWorkGroupsToUserOutcomeCallable BindWorkGroupsToUserCallable(const Model::BindWorkGroupsToUserRequest& request);

                /**
                 *本接口（CancelTask），用于取消任务执行
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *元数据锁检查
                 * @param req CheckLockMetaDataRequest
                 * @return CheckLockMetaDataOutcome
                 */
                CheckLockMetaDataOutcome CheckLockMetaData(const Model::CheckLockMetaDataRequest &request);
                void CheckLockMetaDataAsync(const Model::CheckLockMetaDataRequest& request, const CheckLockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckLockMetaDataOutcomeCallable CheckLockMetaDataCallable(const Model::CheckLockMetaDataRequest& request);

                /**
                 *DMS元数据创建库
                 * @param req CreateDMSDatabaseRequest
                 * @return CreateDMSDatabaseOutcome
                 */
                CreateDMSDatabaseOutcome CreateDMSDatabase(const Model::CreateDMSDatabaseRequest &request);
                void CreateDMSDatabaseAsync(const Model::CreateDMSDatabaseRequest& request, const CreateDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDMSDatabaseOutcomeCallable CreateDMSDatabaseCallable(const Model::CreateDMSDatabaseRequest& request);

                /**
                 *DMS元数据创建表
                 * @param req CreateDMSTableRequest
                 * @return CreateDMSTableOutcome
                 */
                CreateDMSTableOutcome CreateDMSTable(const Model::CreateDMSTableRequest &request);
                void CreateDMSTableAsync(const Model::CreateDMSTableRequest& request, const CreateDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDMSTableOutcomeCallable CreateDMSTableCallable(const Model::CreateDMSTableRequest& request);

                /**
                 *本接口（CreateDatabase）用于生成建库SQL语句。
                 * @param req CreateDatabaseRequest
                 * @return CreateDatabaseOutcome
                 */
                CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest &request);
                void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request);

                /**
                 *该接口（CreateExportTask）用于创建导出任务
                 * @param req CreateExportTaskRequest
                 * @return CreateExportTaskOutcome
                 */
                CreateExportTaskOutcome CreateExportTask(const Model::CreateExportTaskRequest &request);
                void CreateExportTaskAsync(const Model::CreateExportTaskRequest& request, const CreateExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportTaskOutcomeCallable CreateExportTaskCallable(const Model::CreateExportTaskRequest& request);

                /**
                 *该接口（CreateImportTask）用于创建导入任务
                 * @param req CreateImportTaskRequest
                 * @return CreateImportTaskOutcome
                 */
                CreateImportTaskOutcome CreateImportTask(const Model::CreateImportTaskRequest &request);
                void CreateImportTaskAsync(const Model::CreateImportTaskRequest& request, const CreateImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImportTaskOutcomeCallable CreateImportTaskCallable(const Model::CreateImportTaskRequest& request);

                /**
                 *创建查询结果下载任务
                 * @param req CreateResultDownloadRequest
                 * @return CreateResultDownloadOutcome
                 */
                CreateResultDownloadOutcome CreateResultDownload(const Model::CreateResultDownloadRequest &request);
                void CreateResultDownloadAsync(const Model::CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResultDownloadOutcomeCallable CreateResultDownloadCallable(const Model::CreateResultDownloadRequest& request);

                /**
                 *该接口（CreateScript）用于创建sql脚本。
                 * @param req CreateScriptRequest
                 * @return CreateScriptOutcome
                 */
                CreateScriptOutcome CreateScript(const Model::CreateScriptRequest &request);
                void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request);

                /**
                 *创建spark应用
                 * @param req CreateSparkAppRequest
                 * @return CreateSparkAppOutcome
                 */
                CreateSparkAppOutcome CreateSparkApp(const Model::CreateSparkAppRequest &request);
                void CreateSparkAppAsync(const Model::CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppOutcomeCallable CreateSparkAppCallable(const Model::CreateSparkAppRequest& request);

                /**
                 *创建spark任务
                 * @param req CreateSparkAppTaskRequest
                 * @return CreateSparkAppTaskOutcome
                 */
                CreateSparkAppTaskOutcome CreateSparkAppTask(const Model::CreateSparkAppTaskRequest &request);
                void CreateSparkAppTaskAsync(const Model::CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppTaskOutcomeCallable CreateSparkAppTaskCallable(const Model::CreateSparkAppTaskRequest& request);

                /**
                 *该接口（CreateStoreLocation）新增或覆盖计算结果存储位置。
                 * @param req CreateStoreLocationRequest
                 * @return CreateStoreLocationOutcome
                 */
                CreateStoreLocationOutcome CreateStoreLocation(const Model::CreateStoreLocationRequest &request);
                void CreateStoreLocationAsync(const Model::CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStoreLocationOutcomeCallable CreateStoreLocationCallable(const Model::CreateStoreLocationRequest& request);

                /**
                 *本接口（CreateTable）用于生成建表SQL。
                 * @param req CreateTableRequest
                 * @return CreateTableOutcome
                 */
                CreateTableOutcome CreateTable(const Model::CreateTableRequest &request);
                void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request);

                /**
                 *本接口（CreateTask）用于创建sql查询任务。（推荐使用CreateTasks接口）
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *本接口（CreateTasks），用于批量创建任务
                 * @param req CreateTasksRequest
                 * @return CreateTasksOutcome
                 */
                CreateTasksOutcome CreateTasks(const Model::CreateTasksRequest &request);
                void CreateTasksAsync(const Model::CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTasksOutcomeCallable CreateTasksCallable(const Model::CreateTasksRequest& request);

                /**
                 *按顺序创建任务（已经废弃，后期不再维护，请使用接口CreateTasks）
                 * @param req CreateTasksInOrderRequest
                 * @return CreateTasksInOrderOutcome
                 */
                CreateTasksInOrderOutcome CreateTasksInOrder(const Model::CreateTasksInOrderRequest &request);
                void CreateTasksInOrderAsync(const Model::CreateTasksInOrderRequest& request, const CreateTasksInOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTasksInOrderOutcomeCallable CreateTasksInOrderCallable(const Model::CreateTasksInOrderRequest& request);

                /**
                 *创建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *创建工作组
                 * @param req CreateWorkGroupRequest
                 * @return CreateWorkGroupOutcome
                 */
                CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest &request);
                void CreateWorkGroupAsync(const Model::CreateWorkGroupRequest& request, const CreateWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkGroupOutcomeCallable CreateWorkGroupCallable(const Model::CreateWorkGroupRequest& request);

                /**
                 *该接口（DeleteScript）用于删除sql脚本。
                 * @param req DeleteScriptRequest
                 * @return DeleteScriptOutcome
                 */
                DeleteScriptOutcome DeleteScript(const Model::DeleteScriptRequest &request);
                void DeleteScriptAsync(const Model::DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScriptOutcomeCallable DeleteScriptCallable(const Model::DeleteScriptRequest& request);

                /**
                 *删除spark应用
                 * @param req DeleteSparkAppRequest
                 * @return DeleteSparkAppOutcome
                 */
                DeleteSparkAppOutcome DeleteSparkApp(const Model::DeleteSparkAppRequest &request);
                void DeleteSparkAppAsync(const Model::DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSparkAppOutcomeCallable DeleteSparkAppCallable(const Model::DeleteSparkAppRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *从工作组中删除用户
                 * @param req DeleteUsersFromWorkGroupRequest
                 * @return DeleteUsersFromWorkGroupOutcome
                 */
                DeleteUsersFromWorkGroupOutcome DeleteUsersFromWorkGroup(const Model::DeleteUsersFromWorkGroupRequest &request);
                void DeleteUsersFromWorkGroupAsync(const Model::DeleteUsersFromWorkGroupRequest& request, const DeleteUsersFromWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersFromWorkGroupOutcomeCallable DeleteUsersFromWorkGroupCallable(const Model::DeleteUsersFromWorkGroupRequest& request);

                /**
                 *删除工作组
                 * @param req DeleteWorkGroupRequest
                 * @return DeleteWorkGroupOutcome
                 */
                DeleteWorkGroupOutcome DeleteWorkGroup(const Model::DeleteWorkGroupRequest &request);
                void DeleteWorkGroupAsync(const Model::DeleteWorkGroupRequest& request, const DeleteWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkGroupOutcomeCallable DeleteWorkGroupCallable(const Model::DeleteWorkGroupRequest& request);

                /**
                 *DMS元数据获取库
                 * @param req DescribeDMSDatabaseRequest
                 * @return DescribeDMSDatabaseOutcome
                 */
                DescribeDMSDatabaseOutcome DescribeDMSDatabase(const Model::DescribeDMSDatabaseRequest &request);
                void DescribeDMSDatabaseAsync(const Model::DescribeDMSDatabaseRequest& request, const DescribeDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSDatabaseOutcomeCallable DescribeDMSDatabaseCallable(const Model::DescribeDMSDatabaseRequest& request);

                /**
                 *DMS元数据获取分区
                 * @param req DescribeDMSPartitionsRequest
                 * @return DescribeDMSPartitionsOutcome
                 */
                DescribeDMSPartitionsOutcome DescribeDMSPartitions(const Model::DescribeDMSPartitionsRequest &request);
                void DescribeDMSPartitionsAsync(const Model::DescribeDMSPartitionsRequest& request, const DescribeDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSPartitionsOutcomeCallable DescribeDMSPartitionsCallable(const Model::DescribeDMSPartitionsRequest& request);

                /**
                 *DMS元数据获取表
                 * @param req DescribeDMSTableRequest
                 * @return DescribeDMSTableOutcome
                 */
                DescribeDMSTableOutcome DescribeDMSTable(const Model::DescribeDMSTableRequest &request);
                void DescribeDMSTableAsync(const Model::DescribeDMSTableRequest& request, const DescribeDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSTableOutcomeCallable DescribeDMSTableCallable(const Model::DescribeDMSTableRequest& request);

                /**
                 *DMS元数据获取表列表
                 * @param req DescribeDMSTablesRequest
                 * @return DescribeDMSTablesOutcome
                 */
                DescribeDMSTablesOutcome DescribeDMSTables(const Model::DescribeDMSTablesRequest &request);
                void DescribeDMSTablesAsync(const Model::DescribeDMSTablesRequest& request, const DescribeDMSTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSTablesOutcomeCallable DescribeDMSTablesCallable(const Model::DescribeDMSTablesRequest& request);

                /**
                 *本接口（DescribeDatabases）用于查询数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *查询结果下载任务
                 * @param req DescribeResultDownloadRequest
                 * @return DescribeResultDownloadOutcome
                 */
                DescribeResultDownloadOutcome DescribeResultDownload(const Model::DescribeResultDownloadRequest &request);
                void DescribeResultDownloadAsync(const Model::DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResultDownloadOutcomeCallable DescribeResultDownloadCallable(const Model::DescribeResultDownloadRequest& request);

                /**
                 *该接口（DescribeScripts）用于获取所有SQL查询。
                 * @param req DescribeScriptsRequest
                 * @return DescribeScriptsOutcome
                 */
                DescribeScriptsOutcome DescribeScripts(const Model::DescribeScriptsRequest &request);
                void DescribeScriptsAsync(const Model::DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScriptsOutcomeCallable DescribeScriptsCallable(const Model::DescribeScriptsRequest& request);

                /**
                 *查询具体的spark应用
                 * @param req DescribeSparkAppJobRequest
                 * @return DescribeSparkAppJobOutcome
                 */
                DescribeSparkAppJobOutcome DescribeSparkAppJob(const Model::DescribeSparkAppJobRequest &request);
                void DescribeSparkAppJobAsync(const Model::DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobOutcomeCallable DescribeSparkAppJobCallable(const Model::DescribeSparkAppJobRequest& request);

                /**
                 *获取spark应用列表
                 * @param req DescribeSparkAppJobsRequest
                 * @return DescribeSparkAppJobsOutcome
                 */
                DescribeSparkAppJobsOutcome DescribeSparkAppJobs(const Model::DescribeSparkAppJobsRequest &request);
                void DescribeSparkAppJobsAsync(const Model::DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobsOutcomeCallable DescribeSparkAppJobsCallable(const Model::DescribeSparkAppJobsRequest& request);

                /**
                 *查询spark应用的运行任务实例列表
                 * @param req DescribeSparkAppTasksRequest
                 * @return DescribeSparkAppTasksOutcome
                 */
                DescribeSparkAppTasksOutcome DescribeSparkAppTasks(const Model::DescribeSparkAppTasksRequest &request);
                void DescribeSparkAppTasksAsync(const Model::DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppTasksOutcomeCallable DescribeSparkAppTasksCallable(const Model::DescribeSparkAppTasksRequest& request);

                /**
                 *查询计算结果存储位置。
                 * @param req DescribeStoreLocationRequest
                 * @return DescribeStoreLocationOutcome
                 */
                DescribeStoreLocationOutcome DescribeStoreLocation(const Model::DescribeStoreLocationRequest &request);
                void DescribeStoreLocationAsync(const Model::DescribeStoreLocationRequest& request, const DescribeStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStoreLocationOutcomeCallable DescribeStoreLocationCallable(const Model::DescribeStoreLocationRequest& request);

                /**
                 *本接口（DescribeTable），用于查询单个表的详细信息。
                 * @param req DescribeTableRequest
                 * @return DescribeTableOutcome
                 */
                DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest &request);
                void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request);

                /**
                 *本接口（DescribeTables）用于查询数据表列表。
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *查询任务结果
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *该接口（DescribleTasks）用于查询任务列表
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *获取用户列表信息
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *本接口（DescribeViews）用于查询数据视图列表。
                 * @param req DescribeViewsRequest
                 * @return DescribeViewsOutcome
                 */
                DescribeViewsOutcome DescribeViews(const Model::DescribeViewsRequest &request);
                void DescribeViewsAsync(const Model::DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeViewsOutcomeCallable DescribeViewsCallable(const Model::DescribeViewsRequest& request);

                /**
                 *获取工作组列表
                 * @param req DescribeWorkGroupsRequest
                 * @return DescribeWorkGroupsOutcome
                 */
                DescribeWorkGroupsOutcome DescribeWorkGroups(const Model::DescribeWorkGroupsRequest &request);
                void DescribeWorkGroupsAsync(const Model::DescribeWorkGroupsRequest& request, const DescribeWorkGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkGroupsOutcomeCallable DescribeWorkGroupsCallable(const Model::DescribeWorkGroupsRequest& request);

                /**
                 *解绑用户鉴权策略
                 * @param req DetachUserPolicyRequest
                 * @return DetachUserPolicyOutcome
                 */
                DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest &request);
                void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request);

                /**
                 *解绑工作组鉴权策略
                 * @param req DetachWorkGroupPolicyRequest
                 * @return DetachWorkGroupPolicyOutcome
                 */
                DetachWorkGroupPolicyOutcome DetachWorkGroupPolicy(const Model::DetachWorkGroupPolicyRequest &request);
                void DetachWorkGroupPolicyAsync(const Model::DetachWorkGroupPolicyRequest& request, const DetachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachWorkGroupPolicyOutcomeCallable DetachWorkGroupPolicyCallable(const Model::DetachWorkGroupPolicyRequest& request);

                /**
                 *DMS元数据删除库
                 * @param req DropDMSDatabaseRequest
                 * @return DropDMSDatabaseOutcome
                 */
                DropDMSDatabaseOutcome DropDMSDatabase(const Model::DropDMSDatabaseRequest &request);
                void DropDMSDatabaseAsync(const Model::DropDMSDatabaseRequest& request, const DropDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSDatabaseOutcomeCallable DropDMSDatabaseCallable(const Model::DropDMSDatabaseRequest& request);

                /**
                 *DMS元数据删除分区
                 * @param req DropDMSPartitionsRequest
                 * @return DropDMSPartitionsOutcome
                 */
                DropDMSPartitionsOutcome DropDMSPartitions(const Model::DropDMSPartitionsRequest &request);
                void DropDMSPartitionsAsync(const Model::DropDMSPartitionsRequest& request, const DropDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSPartitionsOutcomeCallable DropDMSPartitionsCallable(const Model::DropDMSPartitionsRequest& request);

                /**
                 *DMS元数据删除表
                 * @param req DropDMSTableRequest
                 * @return DropDMSTableOutcome
                 */
                DropDMSTableOutcome DropDMSTable(const Model::DropDMSTableRequest &request);
                void DropDMSTableAsync(const Model::DropDMSTableRequest& request, const DropDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSTableOutcomeCallable DropDMSTableCallable(const Model::DropDMSTableRequest& request);

                /**
                 *本接口（ListTaskJobLogDetail）用于获取spark-jar日志列表
                 * @param req ListTaskJobLogDetailRequest
                 * @return ListTaskJobLogDetailOutcome
                 */
                ListTaskJobLogDetailOutcome ListTaskJobLogDetail(const Model::ListTaskJobLogDetailRequest &request);
                void ListTaskJobLogDetailAsync(const Model::ListTaskJobLogDetailRequest& request, const ListTaskJobLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTaskJobLogDetailOutcomeCallable ListTaskJobLogDetailCallable(const Model::ListTaskJobLogDetailRequest& request);

                /**
                 *元数据锁
                 * @param req LockMetaDataRequest
                 * @return LockMetaDataOutcome
                 */
                LockMetaDataOutcome LockMetaData(const Model::LockMetaDataRequest &request);
                void LockMetaDataAsync(const Model::LockMetaDataRequest& request, const LockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockMetaDataOutcomeCallable LockMetaDataCallable(const Model::LockMetaDataRequest& request);

                /**
                 *更新spark应用
                 * @param req ModifySparkAppRequest
                 * @return ModifySparkAppOutcome
                 */
                ModifySparkAppOutcome ModifySparkApp(const Model::ModifySparkAppRequest &request);
                void ModifySparkAppAsync(const Model::ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppOutcomeCallable ModifySparkAppCallable(const Model::ModifySparkAppRequest& request);

                /**
                 *修改用户信息
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *修改工作组信息
                 * @param req ModifyWorkGroupRequest
                 * @return ModifyWorkGroupOutcome
                 */
                ModifyWorkGroupOutcome ModifyWorkGroup(const Model::ModifyWorkGroupRequest &request);
                void ModifyWorkGroupAsync(const Model::ModifyWorkGroupRequest& request, const ModifyWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkGroupOutcomeCallable ModifyWorkGroupCallable(const Model::ModifyWorkGroupRequest& request);

                /**
                 *上报元数据心跳
                 * @param req ReportHeartbeatMetaDataRequest
                 * @return ReportHeartbeatMetaDataOutcome
                 */
                ReportHeartbeatMetaDataOutcome ReportHeartbeatMetaData(const Model::ReportHeartbeatMetaDataRequest &request);
                void ReportHeartbeatMetaDataAsync(const Model::ReportHeartbeatMetaDataRequest& request, const ReportHeartbeatMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportHeartbeatMetaDataOutcomeCallable ReportHeartbeatMetaDataCallable(const Model::ReportHeartbeatMetaDataRequest& request);

                /**
                 *解绑用户上的用户组
                 * @param req UnbindWorkGroupsFromUserRequest
                 * @return UnbindWorkGroupsFromUserOutcome
                 */
                UnbindWorkGroupsFromUserOutcome UnbindWorkGroupsFromUser(const Model::UnbindWorkGroupsFromUserRequest &request);
                void UnbindWorkGroupsFromUserAsync(const Model::UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkGroupsFromUserOutcomeCallable UnbindWorkGroupsFromUserCallable(const Model::UnbindWorkGroupsFromUserRequest& request);

                /**
                 *元数据解锁
                 * @param req UnlockMetaDataRequest
                 * @return UnlockMetaDataOutcome
                 */
                UnlockMetaDataOutcome UnlockMetaData(const Model::UnlockMetaDataRequest &request);
                void UnlockMetaDataAsync(const Model::UnlockMetaDataRequest& request, const UnlockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockMetaDataOutcomeCallable UnlockMetaDataCallable(const Model::UnlockMetaDataRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
