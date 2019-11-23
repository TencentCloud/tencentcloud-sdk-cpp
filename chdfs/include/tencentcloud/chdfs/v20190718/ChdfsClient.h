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

#ifndef TENCENTCLOUD_CHDFS_V20190718_CHDFSCLIENT_H_
#define TENCENTCLOUD_CHDFS_V20190718_CHDFSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/chdfs/v20190718/model/CreateAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20190718/model/CreateAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20190718/model/CreateAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20190718/model/CreateAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20190718/model/CreateFileSystemRequest.h>
#include <tencentcloud/chdfs/v20190718/model/CreateFileSystemResponse.h>
#include <tencentcloud/chdfs/v20190718/model/CreateMountPointRequest.h>
#include <tencentcloud/chdfs/v20190718/model/CreateMountPointResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteFileSystemRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteFileSystemResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteMountPointRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DeleteMountPointResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeAccessGroupsRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeAccessGroupsResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeFileSystemRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeFileSystemResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeFileSystemsRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeFileSystemsResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeMountPointRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeMountPointResponse.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeMountPointsRequest.h>
#include <tencentcloud/chdfs/v20190718/model/DescribeMountPointsResponse.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyAccessRulesRequest.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyAccessRulesResponse.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyFileSystemRequest.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyFileSystemResponse.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyMountPointRequest.h>
#include <tencentcloud/chdfs/v20190718/model/ModifyMountPointResponse.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            class ChdfsClient : public AbstractClient
            {
            public:
                ChdfsClient(const Credential &credential, const std::string &region);
                ChdfsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateAccessGroupResponse> CreateAccessGroupOutcome;
                typedef std::future<CreateAccessGroupOutcome> CreateAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateAccessGroupRequest&, CreateAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateAccessRulesResponse> CreateAccessRulesOutcome;
                typedef std::future<CreateAccessRulesOutcome> CreateAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateAccessRulesRequest&, CreateAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessRulesAsyncHandler;
                typedef Outcome<Error, Model::CreateFileSystemResponse> CreateFileSystemOutcome;
                typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateFileSystemRequest&, CreateFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSystemAsyncHandler;
                typedef Outcome<Error, Model::CreateMountPointResponse> CreateMountPointOutcome;
                typedef std::future<CreateMountPointOutcome> CreateMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateMountPointRequest&, CreateMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMountPointAsyncHandler;
                typedef Outcome<Error, Model::DeleteAccessGroupResponse> DeleteAccessGroupOutcome;
                typedef std::future<DeleteAccessGroupOutcome> DeleteAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteAccessGroupRequest&, DeleteAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteAccessRulesResponse> DeleteAccessRulesOutcome;
                typedef std::future<DeleteAccessRulesOutcome> DeleteAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteAccessRulesRequest&, DeleteAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessRulesAsyncHandler;
                typedef Outcome<Error, Model::DeleteFileSystemResponse> DeleteFileSystemOutcome;
                typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteFileSystemRequest&, DeleteFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileSystemAsyncHandler;
                typedef Outcome<Error, Model::DeleteMountPointResponse> DeleteMountPointOutcome;
                typedef std::future<DeleteMountPointOutcome> DeleteMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DeleteMountPointRequest&, DeleteMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountPointAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccessGroupsResponse> DescribeAccessGroupsOutcome;
                typedef std::future<DescribeAccessGroupsOutcome> DescribeAccessGroupsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeAccessGroupsRequest&, DescribeAccessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccessRulesResponse> DescribeAccessRulesOutcome;
                typedef std::future<DescribeAccessRulesOutcome> DescribeAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeAccessRulesRequest&, DescribeAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFileSystemResponse> DescribeFileSystemOutcome;
                typedef std::future<DescribeFileSystemOutcome> DescribeFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeFileSystemRequest&, DescribeFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemAsyncHandler;
                typedef Outcome<Error, Model::DescribeFileSystemsResponse> DescribeFileSystemsOutcome;
                typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeFileSystemsRequest&, DescribeFileSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMountPointResponse> DescribeMountPointOutcome;
                typedef std::future<DescribeMountPointOutcome> DescribeMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeMountPointRequest&, DescribeMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountPointAsyncHandler;
                typedef Outcome<Error, Model::DescribeMountPointsResponse> DescribeMountPointsOutcome;
                typedef std::future<DescribeMountPointsOutcome> DescribeMountPointsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeMountPointsRequest&, DescribeMountPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountPointsAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccessGroupResponse> ModifyAccessGroupOutcome;
                typedef std::future<ModifyAccessGroupOutcome> ModifyAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyAccessGroupRequest&, ModifyAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccessRulesResponse> ModifyAccessRulesOutcome;
                typedef std::future<ModifyAccessRulesOutcome> ModifyAccessRulesOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyAccessRulesRequest&, ModifyAccessRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessRulesAsyncHandler;
                typedef Outcome<Error, Model::ModifyFileSystemResponse> ModifyFileSystemOutcome;
                typedef std::future<ModifyFileSystemOutcome> ModifyFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyFileSystemRequest&, ModifyFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileSystemAsyncHandler;
                typedef Outcome<Error, Model::ModifyMountPointResponse> ModifyMountPointOutcome;
                typedef std::future<ModifyMountPointOutcome> ModifyMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyMountPointRequest&, ModifyMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMountPointAsyncHandler;



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
                 *创建文件系统挂载点，仅限于创建成功的文件系统。
                 * @param req CreateMountPointRequest
                 * @return CreateMountPointOutcome
                 */
                CreateMountPointOutcome CreateMountPoint(const Model::CreateMountPointRequest &request);
                void CreateMountPointAsync(const Model::CreateMountPointRequest& request, const CreateMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMountPointOutcomeCallable CreateMountPointCallable(const Model::CreateMountPointRequest& request);

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
                 *删除挂载点。
                 * @param req DeleteMountPointRequest
                 * @return DeleteMountPointOutcome
                 */
                DeleteMountPointOutcome DeleteMountPoint(const Model::DeleteMountPointRequest &request);
                void DeleteMountPointAsync(const Model::DeleteMountPointRequest& request, const DeleteMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMountPointOutcomeCallable DeleteMountPointCallable(const Model::DeleteMountPointRequest& request);

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
                 *查看挂载点详细信息。
                 * @param req DescribeMountPointRequest
                 * @return DescribeMountPointOutcome
                 */
                DescribeMountPointOutcome DescribeMountPoint(const Model::DescribeMountPointRequest &request);
                void DescribeMountPointAsync(const Model::DescribeMountPointRequest& request, const DescribeMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountPointOutcomeCallable DescribeMountPointCallable(const Model::DescribeMountPointRequest& request);

                /**
                 *通过文件系统ID或者权限组ID查看挂载点列表。
                 * @param req DescribeMountPointsRequest
                 * @return DescribeMountPointsOutcome
                 */
                DescribeMountPointsOutcome DescribeMountPoints(const Model::DescribeMountPointsRequest &request);
                void DescribeMountPointsAsync(const Model::DescribeMountPointsRequest& request, const DescribeMountPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountPointsOutcomeCallable DescribeMountPointsCallable(const Model::DescribeMountPointsRequest& request);

                /**
                 *修改权限组属性。
                 * @param req ModifyAccessGroupRequest
                 * @return ModifyAccessGroupOutcome
                 */
                ModifyAccessGroupOutcome ModifyAccessGroup(const Model::ModifyAccessGroupRequest &request);
                void ModifyAccessGroupAsync(const Model::ModifyAccessGroupRequest& request, const ModifyAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessGroupOutcomeCallable ModifyAccessGroupCallable(const Model::ModifyAccessGroupRequest& request);

                /**
                 *批量修改权限规则属性，需要指定权限规则ID。
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
                 *修改挂载点属性。
                 * @param req ModifyMountPointRequest
                 * @return ModifyMountPointOutcome
                 */
                ModifyMountPointOutcome ModifyMountPoint(const Model::ModifyMountPointRequest &request);
                void ModifyMountPointAsync(const Model::ModifyMountPointRequest& request, const ModifyMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMountPointOutcomeCallable ModifyMountPointCallable(const Model::ModifyMountPointRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_CHDFSCLIENT_H_
