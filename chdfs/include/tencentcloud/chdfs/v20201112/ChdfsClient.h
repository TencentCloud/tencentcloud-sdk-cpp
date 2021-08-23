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

#ifndef TENCENTCLOUD_CHDFS_V20201112_CHDFSCLIENT_H_
#define TENCENTCLOUD_CHDFS_V20201112_CHDFSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/chdfs/v20201112/model/AssociateAccessGroupsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/AssociateAccessGroupsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateFileSystemRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateFileSystemResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateLifeCycleRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateLifeCycleRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateMountPointRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateMountPointResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateRestoreTasksRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateRestoreTasksResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteFileSystemRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteFileSystemResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteLifeCycleRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteLifeCycleRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteMountPointRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DeleteMountPointResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeAccessGroupsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeAccessGroupsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeFileSystemRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeFileSystemResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeFileSystemsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeFileSystemsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeLifeCycleRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeLifeCycleRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeResourceTagsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeResourceTagsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeRestoreTasksRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeRestoreTasksResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DisassociateAccessGroupsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DisassociateAccessGroupsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyFileSystemRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyFileSystemResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyLifeCycleRulesRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyLifeCycleRulesResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyMountPointRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyMountPointResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyResourceTagsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyResourceTagsResponse.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            class ChdfsClient : public AbstractClient
            {
            public:
                ChdfsClient(const Credential &credential, const std::string &region);
                ChdfsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateAccessGroupsResponse> AssociateAccessGroupsOutcome;
                typedef std::future<AssociateAccessGroupsOutcome> AssociateAccessGroupsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::AssociateAccessGroupsRequest&, AssociateAccessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAccessGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessGroupResponse> CreateAccessGroupOutcome;
                typedef std::future<CreateAccessGroupOutcome> CreateAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateAccessGroupRequest&, CreateAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessRulesResponse> CreateAccessRulesOutcome;
                typedef std::future<CreateAccessRulesOutcome> CreateAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateAccessRulesRequest&, CreateAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileSystemResponse> CreateFileSystemOutcome;
                typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateFileSystemRequest&, CreateFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLifeCycleRulesResponse> CreateLifeCycleRulesOutcome;
                typedef std::future<CreateLifeCycleRulesOutcome> CreateLifeCycleRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateLifeCycleRulesRequest&, CreateLifeCycleRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifeCycleRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMountPointResponse> CreateMountPointOutcome;
                typedef std::future<CreateMountPointOutcome> CreateMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateMountPointRequest&, CreateMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMountPointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRestoreTasksResponse> CreateRestoreTasksOutcome;
                typedef std::future<CreateRestoreTasksOutcome> CreateRestoreTasksOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateRestoreTasksRequest&, CreateRestoreTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRestoreTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessGroupResponse> DeleteAccessGroupOutcome;
                typedef std::future<DeleteAccessGroupOutcome> DeleteAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteAccessGroupRequest&, DeleteAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessRulesResponse> DeleteAccessRulesOutcome;
                typedef std::future<DeleteAccessRulesOutcome> DeleteAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteAccessRulesRequest&, DeleteAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileSystemResponse> DeleteFileSystemOutcome;
                typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteFileSystemRequest&, DeleteFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLifeCycleRulesResponse> DeleteLifeCycleRulesOutcome;
                typedef std::future<DeleteLifeCycleRulesOutcome> DeleteLifeCycleRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteLifeCycleRulesRequest&, DeleteLifeCycleRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifeCycleRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMountPointResponse> DeleteMountPointOutcome;
                typedef std::future<DeleteMountPointOutcome> DeleteMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteMountPointRequest&, DeleteMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessGroupResponse> DescribeAccessGroupOutcome;
                typedef std::future<DescribeAccessGroupOutcome> DescribeAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeAccessGroupRequest&, DescribeAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessGroupsResponse> DescribeAccessGroupsOutcome;
                typedef std::future<DescribeAccessGroupsOutcome> DescribeAccessGroupsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeAccessGroupsRequest&, DescribeAccessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessRulesResponse> DescribeAccessRulesOutcome;
                typedef std::future<DescribeAccessRulesOutcome> DescribeAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeAccessRulesRequest&, DescribeAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileSystemResponse> DescribeFileSystemOutcome;
                typedef std::future<DescribeFileSystemOutcome> DescribeFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeFileSystemRequest&, DescribeFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileSystemsResponse> DescribeFileSystemsOutcome;
                typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeFileSystemsRequest&, DescribeFileSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLifeCycleRulesResponse> DescribeLifeCycleRulesOutcome;
                typedef std::future<DescribeLifeCycleRulesOutcome> DescribeLifeCycleRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeLifeCycleRulesRequest&, DescribeLifeCycleRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifeCycleRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountPointResponse> DescribeMountPointOutcome;
                typedef std::future<DescribeMountPointOutcome> DescribeMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeMountPointRequest&, DescribeMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountPointsResponse> DescribeMountPointsOutcome;
                typedef std::future<DescribeMountPointsOutcome> DescribeMountPointsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeMountPointsRequest&, DescribeMountPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountPointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTagsResponse> DescribeResourceTagsOutcome;
                typedef std::future<DescribeResourceTagsOutcome> DescribeResourceTagsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeResourceTagsRequest&, DescribeResourceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRestoreTasksResponse> DescribeRestoreTasksOutcome;
                typedef std::future<DescribeRestoreTasksOutcome> DescribeRestoreTasksOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeRestoreTasksRequest&, DescribeRestoreTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateAccessGroupsResponse> DisassociateAccessGroupsOutcome;
                typedef std::future<DisassociateAccessGroupsOutcome> DisassociateAccessGroupsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DisassociateAccessGroupsRequest&, DisassociateAccessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAccessGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessGroupResponse> ModifyAccessGroupOutcome;
                typedef std::future<ModifyAccessGroupOutcome> ModifyAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyAccessGroupRequest&, ModifyAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessRulesResponse> ModifyAccessRulesOutcome;
                typedef std::future<ModifyAccessRulesOutcome> ModifyAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyAccessRulesRequest&, ModifyAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileSystemResponse> ModifyFileSystemOutcome;
                typedef std::future<ModifyFileSystemOutcome> ModifyFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyFileSystemRequest&, ModifyFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLifeCycleRulesResponse> ModifyLifeCycleRulesOutcome;
                typedef std::future<ModifyLifeCycleRulesOutcome> ModifyLifeCycleRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyLifeCycleRulesRequest&, ModifyLifeCycleRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLifeCycleRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMountPointResponse> ModifyMountPointOutcome;
                typedef std::future<ModifyMountPointOutcome> ModifyMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyMountPointRequest&, ModifyMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMountPointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceTagsResponse> ModifyResourceTagsOutcome;
                typedef std::future<ModifyResourceTagsOutcome> ModifyResourceTagsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyResourceTagsRequest&, ModifyResourceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceTagsAsyncHandler;



                /**
                 *给挂载点绑定多个权限组。
                 * @param req AssociateAccessGroupsRequest
                 * @return AssociateAccessGroupsOutcome
                 */
                AssociateAccessGroupsOutcome AssociateAccessGroups(const Model::AssociateAccessGroupsRequest &request);
                void AssociateAccessGroupsAsync(const Model::AssociateAccessGroupsRequest& request, const AssociateAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateAccessGroupsOutcomeCallable AssociateAccessGroupsCallable(const Model::AssociateAccessGroupsRequest& request);

                /**
                 *创建权限组。
                 * @param req CreateAccessGroupRequest
                 * @return CreateAccessGroupOutcome
                 */
                CreateAccessGroupOutcome CreateAccessGroup(const Model::CreateAccessGroupRequest &request);
                void CreateAccessGroupAsync(const Model::CreateAccessGroupRequest& request, const CreateAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessGroupOutcomeCallable CreateAccessGroupCallable(const Model::CreateAccessGroupRequest& request);

                /**
                 *批量创建权限规则，权限规则ID和创建时间无需填写。
                 * @param req CreateAccessRulesRequest
                 * @return CreateAccessRulesOutcome
                 */
                CreateAccessRulesOutcome CreateAccessRules(const Model::CreateAccessRulesRequest &request);
                void CreateAccessRulesAsync(const Model::CreateAccessRulesRequest& request, const CreateAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessRulesOutcomeCallable CreateAccessRulesCallable(const Model::CreateAccessRulesRequest& request);

                /**
                 *创建文件系统（异步）。
                 * @param req CreateFileSystemRequest
                 * @return CreateFileSystemOutcome
                 */
                CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest &request);
                void CreateFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileSystemOutcomeCallable CreateFileSystemCallable(const Model::CreateFileSystemRequest& request);

                /**
                 *批量创建生命周期规则，生命周期规则ID和创建时间无需填写。
                 * @param req CreateLifeCycleRulesRequest
                 * @return CreateLifeCycleRulesOutcome
                 */
                CreateLifeCycleRulesOutcome CreateLifeCycleRules(const Model::CreateLifeCycleRulesRequest &request);
                void CreateLifeCycleRulesAsync(const Model::CreateLifeCycleRulesRequest& request, const CreateLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLifeCycleRulesOutcomeCallable CreateLifeCycleRulesCallable(const Model::CreateLifeCycleRulesRequest& request);

                /**
                 *创建文件系统挂载点，仅限于创建成功的文件系统。
                 * @param req CreateMountPointRequest
                 * @return CreateMountPointOutcome
                 */
                CreateMountPointOutcome CreateMountPoint(const Model::CreateMountPointRequest &request);
                void CreateMountPointAsync(const Model::CreateMountPointRequest& request, const CreateMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMountPointOutcomeCallable CreateMountPointCallable(const Model::CreateMountPointRequest& request);

                /**
                 *批量创建回热任务，回热任务ID、状态和创建时间无需填写。
                 * @param req CreateRestoreTasksRequest
                 * @return CreateRestoreTasksOutcome
                 */
                CreateRestoreTasksOutcome CreateRestoreTasks(const Model::CreateRestoreTasksRequest &request);
                void CreateRestoreTasksAsync(const Model::CreateRestoreTasksRequest& request, const CreateRestoreTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRestoreTasksOutcomeCallable CreateRestoreTasksCallable(const Model::CreateRestoreTasksRequest& request);

                /**
                 *删除权限组。
                 * @param req DeleteAccessGroupRequest
                 * @return DeleteAccessGroupOutcome
                 */
                DeleteAccessGroupOutcome DeleteAccessGroup(const Model::DeleteAccessGroupRequest &request);
                void DeleteAccessGroupAsync(const Model::DeleteAccessGroupRequest& request, const DeleteAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessGroupOutcomeCallable DeleteAccessGroupCallable(const Model::DeleteAccessGroupRequest& request);

                /**
                 *批量删除权限规则。
                 * @param req DeleteAccessRulesRequest
                 * @return DeleteAccessRulesOutcome
                 */
                DeleteAccessRulesOutcome DeleteAccessRules(const Model::DeleteAccessRulesRequest &request);
                void DeleteAccessRulesAsync(const Model::DeleteAccessRulesRequest& request, const DeleteAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessRulesOutcomeCallable DeleteAccessRulesCallable(const Model::DeleteAccessRulesRequest& request);

                /**
                 *删除文件系统，不允许删除非空文件系统。
                 * @param req DeleteFileSystemRequest
                 * @return DeleteFileSystemOutcome
                 */
                DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest &request);
                void DeleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const Model::DeleteFileSystemRequest& request);

                /**
                 *批量删除生命周期规则。
                 * @param req DeleteLifeCycleRulesRequest
                 * @return DeleteLifeCycleRulesOutcome
                 */
                DeleteLifeCycleRulesOutcome DeleteLifeCycleRules(const Model::DeleteLifeCycleRulesRequest &request);
                void DeleteLifeCycleRulesAsync(const Model::DeleteLifeCycleRulesRequest& request, const DeleteLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLifeCycleRulesOutcomeCallable DeleteLifeCycleRulesCallable(const Model::DeleteLifeCycleRulesRequest& request);

                /**
                 *删除挂载点。
                 * @param req DeleteMountPointRequest
                 * @return DeleteMountPointOutcome
                 */
                DeleteMountPointOutcome DeleteMountPoint(const Model::DeleteMountPointRequest &request);
                void DeleteMountPointAsync(const Model::DeleteMountPointRequest& request, const DeleteMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMountPointOutcomeCallable DeleteMountPointCallable(const Model::DeleteMountPointRequest& request);

                /**
                 *查看权限组详细信息。
                 * @param req DescribeAccessGroupRequest
                 * @return DescribeAccessGroupOutcome
                 */
                DescribeAccessGroupOutcome DescribeAccessGroup(const Model::DescribeAccessGroupRequest &request);
                void DescribeAccessGroupAsync(const Model::DescribeAccessGroupRequest& request, const DescribeAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessGroupOutcomeCallable DescribeAccessGroupCallable(const Model::DescribeAccessGroupRequest& request);

                /**
                 *查看权限组列表。
                 * @param req DescribeAccessGroupsRequest
                 * @return DescribeAccessGroupsOutcome
                 */
                DescribeAccessGroupsOutcome DescribeAccessGroups(const Model::DescribeAccessGroupsRequest &request);
                void DescribeAccessGroupsAsync(const Model::DescribeAccessGroupsRequest& request, const DescribeAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessGroupsOutcomeCallable DescribeAccessGroupsCallable(const Model::DescribeAccessGroupsRequest& request);

                /**
                 *通过权限组ID查看权限规则列表。
                 * @param req DescribeAccessRulesRequest
                 * @return DescribeAccessRulesOutcome
                 */
                DescribeAccessRulesOutcome DescribeAccessRules(const Model::DescribeAccessRulesRequest &request);
                void DescribeAccessRulesAsync(const Model::DescribeAccessRulesRequest& request, const DescribeAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessRulesOutcomeCallable DescribeAccessRulesCallable(const Model::DescribeAccessRulesRequest& request);

                /**
                 *查看文件系统详细信息。
                 * @param req DescribeFileSystemRequest
                 * @return DescribeFileSystemOutcome
                 */
                DescribeFileSystemOutcome DescribeFileSystem(const Model::DescribeFileSystemRequest &request);
                void DescribeFileSystemAsync(const Model::DescribeFileSystemRequest& request, const DescribeFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileSystemOutcomeCallable DescribeFileSystemCallable(const Model::DescribeFileSystemRequest& request);

                /**
                 *查看文件系统列表。
                 * @param req DescribeFileSystemsRequest
                 * @return DescribeFileSystemsOutcome
                 */
                DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest &request);
                void DescribeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request);

                /**
                 *通过文件系统ID查看生命周期规则列表。
                 * @param req DescribeLifeCycleRulesRequest
                 * @return DescribeLifeCycleRulesOutcome
                 */
                DescribeLifeCycleRulesOutcome DescribeLifeCycleRules(const Model::DescribeLifeCycleRulesRequest &request);
                void DescribeLifeCycleRulesAsync(const Model::DescribeLifeCycleRulesRequest& request, const DescribeLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLifeCycleRulesOutcomeCallable DescribeLifeCycleRulesCallable(const Model::DescribeLifeCycleRulesRequest& request);

                /**
                 *查看挂载点详细信息。
                 * @param req DescribeMountPointRequest
                 * @return DescribeMountPointOutcome
                 */
                DescribeMountPointOutcome DescribeMountPoint(const Model::DescribeMountPointRequest &request);
                void DescribeMountPointAsync(const Model::DescribeMountPointRequest& request, const DescribeMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountPointOutcomeCallable DescribeMountPointCallable(const Model::DescribeMountPointRequest& request);

                /**
                 *查看挂载点列表。
                 * @param req DescribeMountPointsRequest
                 * @return DescribeMountPointsOutcome
                 */
                DescribeMountPointsOutcome DescribeMountPoints(const Model::DescribeMountPointsRequest &request);
                void DescribeMountPointsAsync(const Model::DescribeMountPointsRequest& request, const DescribeMountPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountPointsOutcomeCallable DescribeMountPointsCallable(const Model::DescribeMountPointsRequest& request);

                /**
                 *通过文件系统ID查看资源标签列表。
                 * @param req DescribeResourceTagsRequest
                 * @return DescribeResourceTagsOutcome
                 */
                DescribeResourceTagsOutcome DescribeResourceTags(const Model::DescribeResourceTagsRequest &request);
                void DescribeResourceTagsAsync(const Model::DescribeResourceTagsRequest& request, const DescribeResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTagsOutcomeCallable DescribeResourceTagsCallable(const Model::DescribeResourceTagsRequest& request);

                /**
                 *通过文件系统ID查看回热任务列表。
                 * @param req DescribeRestoreTasksRequest
                 * @return DescribeRestoreTasksOutcome
                 */
                DescribeRestoreTasksOutcome DescribeRestoreTasks(const Model::DescribeRestoreTasksRequest &request);
                void DescribeRestoreTasksAsync(const Model::DescribeRestoreTasksRequest& request, const DescribeRestoreTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRestoreTasksOutcomeCallable DescribeRestoreTasksCallable(const Model::DescribeRestoreTasksRequest& request);

                /**
                 *给挂载点解绑多个权限组。
                 * @param req DisassociateAccessGroupsRequest
                 * @return DisassociateAccessGroupsOutcome
                 */
                DisassociateAccessGroupsOutcome DisassociateAccessGroups(const Model::DisassociateAccessGroupsRequest &request);
                void DisassociateAccessGroupsAsync(const Model::DisassociateAccessGroupsRequest& request, const DisassociateAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAccessGroupsOutcomeCallable DisassociateAccessGroupsCallable(const Model::DisassociateAccessGroupsRequest& request);

                /**
                 *修改权限组属性。
                 * @param req ModifyAccessGroupRequest
                 * @return ModifyAccessGroupOutcome
                 */
                ModifyAccessGroupOutcome ModifyAccessGroup(const Model::ModifyAccessGroupRequest &request);
                void ModifyAccessGroupAsync(const Model::ModifyAccessGroupRequest& request, const ModifyAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessGroupOutcomeCallable ModifyAccessGroupCallable(const Model::ModifyAccessGroupRequest& request);

                /**
                 *批量修改权限规则属性，需要指定权限规则ID，支持修改权限规则地址、访问模式和优先级。
                 * @param req ModifyAccessRulesRequest
                 * @return ModifyAccessRulesOutcome
                 */
                ModifyAccessRulesOutcome ModifyAccessRules(const Model::ModifyAccessRulesRequest &request);
                void ModifyAccessRulesAsync(const Model::ModifyAccessRulesRequest& request, const ModifyAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessRulesOutcomeCallable ModifyAccessRulesCallable(const Model::ModifyAccessRulesRequest& request);

                /**
                 *修改文件系统属性，仅限于创建成功的文件系统。
                 * @param req ModifyFileSystemRequest
                 * @return ModifyFileSystemOutcome
                 */
                ModifyFileSystemOutcome ModifyFileSystem(const Model::ModifyFileSystemRequest &request);
                void ModifyFileSystemAsync(const Model::ModifyFileSystemRequest& request, const ModifyFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileSystemOutcomeCallable ModifyFileSystemCallable(const Model::ModifyFileSystemRequest& request);

                /**
                 *批量修改生命周期规则属性，需要指定生命周期规则ID，支持修改生命周期规则名称、路径、转换列表和状态。
                 * @param req ModifyLifeCycleRulesRequest
                 * @return ModifyLifeCycleRulesOutcome
                 */
                ModifyLifeCycleRulesOutcome ModifyLifeCycleRules(const Model::ModifyLifeCycleRulesRequest &request);
                void ModifyLifeCycleRulesAsync(const Model::ModifyLifeCycleRulesRequest& request, const ModifyLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLifeCycleRulesOutcomeCallable ModifyLifeCycleRulesCallable(const Model::ModifyLifeCycleRulesRequest& request);

                /**
                 *修改挂载点属性。
                 * @param req ModifyMountPointRequest
                 * @return ModifyMountPointOutcome
                 */
                ModifyMountPointOutcome ModifyMountPoint(const Model::ModifyMountPointRequest &request);
                void ModifyMountPointAsync(const Model::ModifyMountPointRequest& request, const ModifyMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMountPointOutcomeCallable ModifyMountPointCallable(const Model::ModifyMountPointRequest& request);

                /**
                 *修改资源标签列表，全量覆盖。
                 * @param req ModifyResourceTagsRequest
                 * @return ModifyResourceTagsOutcome
                 */
                ModifyResourceTagsOutcome ModifyResourceTags(const Model::ModifyResourceTagsRequest &request);
                void ModifyResourceTagsAsync(const Model::ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceTagsOutcomeCallable ModifyResourceTagsCallable(const Model::ModifyResourceTagsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_CHDFSCLIENT_H_
