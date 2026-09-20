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
#include <tencentcloud/databuddy/v20260715/model/CreateFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RerunWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RerunWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RunWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RunWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateFileResponse> CreateFileOutcome;
                typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateFileRequest&, CreateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileResponse> DeleteFileOutcome;
                typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteFileRequest&, DeleteFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFileResponse> GetFileOutcome;
                typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetFileRequest&, GetFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowResponse> GetWorkflowOutcome;
                typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowRequest&, GetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowRunResponse> GetWorkflowRunOutcome;
                typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowRunRequest&, GetWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowTaskRunResponse> GetWorkflowTaskRunOutcome;
                typedef std::future<GetWorkflowTaskRunOutcome> GetWorkflowTaskRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowTaskRunRequest&, GetWorkflowTaskRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowTaskRunAsyncHandler;
                typedef Outcome<Core::Error, Model::KillWorkflowRunResponse> KillWorkflowRunOutcome;
                typedef std::future<KillWorkflowRunOutcome> KillWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::KillWorkflowRunRequest&, KillWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleUsersResponse> ListConsoleUsersOutcome;
                typedef std::future<ListConsoleUsersOutcome> ListConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleUsersRequest&, ListConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowRunsResponse> ListWorkflowRunsOutcome;
                typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowRunsRequest&, ListWorkflowRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowTaskRunsResponse> ListWorkflowTaskRunsOutcome;
                typedef std::future<ListWorkflowTaskRunsOutcome> ListWorkflowTaskRunsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowTaskRunsRequest&, ListWorkflowTaskRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowTaskRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowsResponse> ListWorkflowsOutcome;
                typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowsRequest&, ListWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveConsoleUsersResponse> RemoveConsoleUsersOutcome;
                typedef std::future<RemoveConsoleUsersOutcome> RemoveConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RemoveConsoleUsersRequest&, RemoveConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunWorkflowRunResponse> RerunWorkflowRunOutcome;
                typedef std::future<RerunWorkflowRunOutcome> RerunWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RerunWorkflowRunRequest&, RerunWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::RunWorkflowResponse> RunWorkflowOutcome;
                typedef std::future<RunWorkflowOutcome> RunWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RunWorkflowRequest&, RunWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkflowBundleResponse> UnbindWorkflowBundleOutcome;
                typedef std::future<UnbindWorkflowBundleOutcome> UnbindWorkflowBundleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UnbindWorkflowBundleRequest&, UnbindWorkflowBundleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkflowBundleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConsoleUsersResponse> UpdateConsoleUsersOutcome;
                typedef std::future<UpdateConsoleUsersOutcome> UpdateConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateConsoleUsersRequest&, UpdateConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFileResponse> UpdateFileOutcome;
                typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateFileRequest&, UpdateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowResponse> UpdateWorkflowOutcome;
                typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkflowRequest&, UpdateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowAsyncHandler;



                /**
                 *添加控制台用户
                 * @param req AddConsoleUsersRequest
                 * @return AddConsoleUsersOutcome
                 */
                AddConsoleUsersOutcome AddConsoleUsers(const Model::AddConsoleUsersRequest &request);
                void AddConsoleUsersAsync(const Model::AddConsoleUsersRequest& request, const AddConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddConsoleUsersOutcomeCallable AddConsoleUsersCallable(const Model::AddConsoleUsersRequest& request);

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
                 *创建工作流
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

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
                 *删除工作流
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

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
                 *终止工作流的运行
                 * @param req KillWorkflowRunRequest
                 * @return KillWorkflowRunOutcome
                 */
                KillWorkflowRunOutcome KillWorkflowRun(const Model::KillWorkflowRunRequest &request);
                void KillWorkflowRunAsync(const Model::KillWorkflowRunRequest& request, const KillWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillWorkflowRunOutcomeCallable KillWorkflowRunCallable(const Model::KillWorkflowRunRequest& request);

                /**
                 *查询控制台用户列表
                 * @param req ListConsoleUsersRequest
                 * @return ListConsoleUsersOutcome
                 */
                ListConsoleUsersOutcome ListConsoleUsers(const Model::ListConsoleUsersRequest &request);
                void ListConsoleUsersAsync(const Model::ListConsoleUsersRequest& request, const ListConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleUsersOutcomeCallable ListConsoleUsersCallable(const Model::ListConsoleUsersRequest& request);

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
                 *<p>批量移除控制台用户（单次最多10个；前置校验任一不满足整体拒绝；执行阶段单个失败不中断后续删除，成败以 SuccessUins/FailItems 为准）</p>
                 * @param req RemoveConsoleUsersRequest
                 * @return RemoveConsoleUsersOutcome
                 */
                RemoveConsoleUsersOutcome RemoveConsoleUsers(const Model::RemoveConsoleUsersRequest &request);
                void RemoveConsoleUsersAsync(const Model::RemoveConsoleUsersRequest& request, const RemoveConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveConsoleUsersOutcomeCallable RemoveConsoleUsersCallable(const Model::RemoveConsoleUsersRequest& request);

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
                 *解绑工作流Bundle信息
说明：本接口语义等同于规范动词清单中的 Detach，因兼容既有产品形态保留 Unbind 命名
                 * @param req UnbindWorkflowBundleRequest
                 * @return UnbindWorkflowBundleOutcome
                 */
                UnbindWorkflowBundleOutcome UnbindWorkflowBundle(const Model::UnbindWorkflowBundleRequest &request);
                void UnbindWorkflowBundleAsync(const Model::UnbindWorkflowBundleRequest& request, const UnbindWorkflowBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkflowBundleOutcomeCallable UnbindWorkflowBundleCallable(const Model::UnbindWorkflowBundleRequest& request);

                /**
                 *修改控制台用户角色
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
                 *更新工作流
                 * @param req UpdateWorkflowRequest
                 * @return UpdateWorkflowOutcome
                 */
                UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest &request);
                void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_
