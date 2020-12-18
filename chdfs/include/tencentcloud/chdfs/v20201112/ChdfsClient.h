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
#include <tencentcloud/chdfs/v20201112/model/CreateFileSystemRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateFileSystemResponse.h>
#include <tencentcloud/chdfs/v20201112/model/CreateMountPointRequest.h>
#include <tencentcloud/chdfs/v20201112/model/CreateMountPointResponse.h>
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
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/DisassociateAccessGroupsRequest.h>
#include <tencentcloud/chdfs/v20201112/model/DisassociateAccessGroupsResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyAccessGroupRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyAccessGroupResponse.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyFileSystemRequest.h>
#include <tencentcloud/chdfs/v20201112/model/ModifyFileSystemResponse.h>
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

                typedef Outcome<Error, Model::AssociateAccessGroupsResponse> AssociateAccessGroupsOutcome;
                typedef std::future<AssociateAccessGroupsOutcome> AssociateAccessGroupsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::AssociateAccessGroupsRequest&, AssociateAccessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAccessGroupsAsyncHandler;
                typedef Outcome<Error, Model::CreateAccessGroupResponse> CreateAccessGroupOutcome;
                typedef std::future<CreateAccessGroupOutcome> CreateAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateAccessGroupRequest&, CreateAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateFileSystemResponse> CreateFileSystemOutcome;
                typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateFileSystemRequest&, CreateFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSystemAsyncHandler;
                typedef Outcome<Error, Model::CreateMountPointResponse> CreateMountPointOutcome;
                typedef std::future<CreateMountPointOutcome> CreateMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::CreateMountPointRequest&, CreateMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMountPointAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccessGroupResponse> DescribeAccessGroupOutcome;
                typedef std::future<DescribeAccessGroupOutcome> DescribeAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DescribeAccessGroupRequest&, DescribeAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessGroupAsyncHandler;
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
                typedef Outcome<Error, Model::DisassociateAccessGroupsResponse> DisassociateAccessGroupsOutcome;
                typedef std::future<DisassociateAccessGroupsOutcome> DisassociateAccessGroupsOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::DisassociateAccessGroupsRequest&, DisassociateAccessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAccessGroupsAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccessGroupResponse> ModifyAccessGroupOutcome;
                typedef std::future<ModifyAccessGroupOutcome> ModifyAccessGroupOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyAccessGroupRequest&, ModifyAccessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyFileSystemResponse> ModifyFileSystemOutcome;
                typedef std::future<ModifyFileSystemOutcome> ModifyFileSystemOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyFileSystemRequest&, ModifyFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileSystemAsyncHandler;
                typedef Outcome<Error, Model::ModifyMountPointResponse> ModifyMountPointOutcome;
                typedef std::future<ModifyMountPointOutcome> ModifyMountPointOutcomeCallable;
                typedef std::function<void(const ChdfsClient*, const Model::ModifyMountPointRequest&, ModifyMountPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMountPointAsyncHandler;
                typedef Outcome<Error, Model::ModifyResourceTagsResponse> ModifyResourceTagsOutcome;
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
