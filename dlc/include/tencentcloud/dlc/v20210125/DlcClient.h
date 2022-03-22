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
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateExportTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateExportTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateImportTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateImportTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptResponse.h>
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
#include <tencentcloud/dlc/v20210125/model/DeleteUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsResponse.h>
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
#include <tencentcloud/dlc/v20210125/model/ModifyUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserResponse.h>


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

                typedef Outcome<Core::Error, Model::AddUsersToWorkGroupResponse> AddUsersToWorkGroupOutcome;
                typedef std::future<AddUsersToWorkGroupOutcome> AddUsersToWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddUsersToWorkGroupRequest&, AddUsersToWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersToWorkGroupAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportTaskResponse> CreateExportTaskOutcome;
                typedef std::future<CreateExportTaskOutcome> CreateExportTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateExportTaskRequest&, CreateExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImportTaskResponse> CreateImportTaskOutcome;
                typedef std::future<CreateImportTaskOutcome> CreateImportTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateImportTaskRequest&, CreateImportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScriptResponse> CreateScriptOutcome;
                typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateScriptRequest&, CreateScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersFromWorkGroupResponse> DeleteUsersFromWorkGroupOutcome;
                typedef std::future<DeleteUsersFromWorkGroupOutcome> DeleteUsersFromWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUsersFromWorkGroupRequest&, DeleteUsersFromWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersFromWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkGroupResponse> DeleteWorkGroupOutcome;
                typedef std::future<DeleteWorkGroupOutcome> DeleteWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteWorkGroupRequest&, DeleteWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScriptsResponse> DescribeScriptsOutcome;
                typedef std::future<DescribeScriptsOutcome> DescribeScriptsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeScriptsRequest&, DescribeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkGroupResponse> ModifyWorkGroupOutcome;
                typedef std::future<ModifyWorkGroupOutcome> ModifyWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyWorkGroupRequest&, ModifyWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkGroupsFromUserResponse> UnbindWorkGroupsFromUserOutcome;
                typedef std::future<UnbindWorkGroupsFromUserOutcome> UnbindWorkGroupsFromUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UnbindWorkGroupsFromUserRequest&, UnbindWorkGroupsFromUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkGroupsFromUserAsyncHandler;



                /**
                 *添加用户到工作组
                 * @param req AddUsersToWorkGroupRequest
                 * @return AddUsersToWorkGroupOutcome
                 */
                AddUsersToWorkGroupOutcome AddUsersToWorkGroup(const Model::AddUsersToWorkGroupRequest &request);
                void AddUsersToWorkGroupAsync(const Model::AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersToWorkGroupOutcomeCallable AddUsersToWorkGroupCallable(const Model::AddUsersToWorkGroupRequest& request);

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
                 *该接口（CreateScript）用于创建sql脚本。
                 * @param req CreateScriptRequest
                 * @return CreateScriptOutcome
                 */
                CreateScriptOutcome CreateScript(const Model::CreateScriptRequest &request);
                void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request);

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
                 *本接口（DescribeDatabases）用于查询数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *该接口（DescribeScripts）用于获取所有SQL查询。
                 * @param req DescribeScriptsRequest
                 * @return DescribeScriptsOutcome
                 */
                DescribeScriptsOutcome DescribeScripts(const Model::DescribeScriptsRequest &request);
                void DescribeScriptsAsync(const Model::DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScriptsOutcomeCallable DescribeScriptsCallable(const Model::DescribeScriptsRequest& request);

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
                 *解绑用户上的用户组
                 * @param req UnbindWorkGroupsFromUserRequest
                 * @return UnbindWorkGroupsFromUserOutcome
                 */
                UnbindWorkGroupsFromUserOutcome UnbindWorkGroupsFromUser(const Model::UnbindWorkGroupsFromUserRequest &request);
                void UnbindWorkGroupsFromUserAsync(const Model::UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkGroupsFromUserOutcomeCallable UnbindWorkGroupsFromUserCallable(const Model::UnbindWorkGroupsFromUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
