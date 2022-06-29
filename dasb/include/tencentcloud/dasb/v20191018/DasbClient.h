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

#ifndef TENCENTCLOUD_DASB_V20191018_DASBCLIENT_H_
#define TENCENTCLOUD_DASB_V20191018_DASBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dasb/v20191018/model/AddDeviceGroupMembersRequest.h>
#include <tencentcloud/dasb/v20191018/model/AddDeviceGroupMembersResponse.h>
#include <tencentcloud/dasb/v20191018/model/AddUserGroupMembersRequest.h>
#include <tencentcloud/dasb/v20191018/model/AddUserGroupMembersResponse.h>
#include <tencentcloud/dasb/v20191018/model/BindDeviceResourceRequest.h>
#include <tencentcloud/dasb/v20191018/model/BindDeviceResourceResponse.h>
#include <tencentcloud/dasb/v20191018/model/CreateAclRequest.h>
#include <tencentcloud/dasb/v20191018/model/CreateAclResponse.h>
#include <tencentcloud/dasb/v20191018/model/CreateDeviceGroupRequest.h>
#include <tencentcloud/dasb/v20191018/model/CreateDeviceGroupResponse.h>
#include <tencentcloud/dasb/v20191018/model/CreateUserRequest.h>
#include <tencentcloud/dasb/v20191018/model/CreateUserResponse.h>
#include <tencentcloud/dasb/v20191018/model/CreateUserGroupRequest.h>
#include <tencentcloud/dasb/v20191018/model/CreateUserGroupResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteAclsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteAclsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteDeviceGroupMembersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteDeviceGroupMembersResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteDeviceGroupsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteDeviceGroupsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUserGroupsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUserGroupsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUsersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DeleteUsersResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeAclsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeAclsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDeviceGroupMembersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDeviceGroupMembersResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDeviceGroupsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDeviceGroupsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDevicesRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeDevicesResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeResourcesRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeResourcesResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUserGroupMembersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUserGroupMembersResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUserGroupsRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUserGroupsResponse.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUsersRequest.h>
#include <tencentcloud/dasb/v20191018/model/DescribeUsersResponse.h>
#include <tencentcloud/dasb/v20191018/model/ModifyAclRequest.h>
#include <tencentcloud/dasb/v20191018/model/ModifyAclResponse.h>
#include <tencentcloud/dasb/v20191018/model/ModifyUserRequest.h>
#include <tencentcloud/dasb/v20191018/model/ModifyUserResponse.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            class DasbClient : public AbstractClient
            {
            public:
                DasbClient(const Credential &credential, const std::string &region);
                DasbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDeviceGroupMembersResponse> AddDeviceGroupMembersOutcome;
                typedef std::future<AddDeviceGroupMembersOutcome> AddDeviceGroupMembersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::AddDeviceGroupMembersRequest&, AddDeviceGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserGroupMembersResponse> AddUserGroupMembersOutcome;
                typedef std::future<AddUserGroupMembersOutcome> AddUserGroupMembersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::AddUserGroupMembersRequest&, AddUserGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDeviceResourceResponse> BindDeviceResourceOutcome;
                typedef std::future<BindDeviceResourceOutcome> BindDeviceResourceOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::BindDeviceResourceRequest&, BindDeviceResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDeviceResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAclResponse> CreateAclOutcome;
                typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::CreateAclRequest&, CreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceGroupResponse> CreateDeviceGroupOutcome;
                typedef std::future<CreateDeviceGroupOutcome> CreateDeviceGroupOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::CreateDeviceGroupRequest&, CreateDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserGroupResponse> CreateUserGroupOutcome;
                typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::CreateUserGroupRequest&, CreateUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAclsResponse> DeleteAclsOutcome;
                typedef std::future<DeleteAclsOutcome> DeleteAclsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteAclsRequest&, DeleteAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceGroupMembersResponse> DeleteDeviceGroupMembersOutcome;
                typedef std::future<DeleteDeviceGroupMembersOutcome> DeleteDeviceGroupMembersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteDeviceGroupMembersRequest&, DeleteDeviceGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceGroupsResponse> DeleteDeviceGroupsOutcome;
                typedef std::future<DeleteDeviceGroupsOutcome> DeleteDeviceGroupsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteDeviceGroupsRequest&, DeleteDeviceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupMembersResponse> DeleteUserGroupMembersOutcome;
                typedef std::future<DeleteUserGroupMembersOutcome> DeleteUserGroupMembersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteUserGroupMembersRequest&, DeleteUserGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupsResponse> DeleteUserGroupsOutcome;
                typedef std::future<DeleteUserGroupsOutcome> DeleteUserGroupsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteUserGroupsRequest&, DeleteUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAclsResponse> DescribeAclsOutcome;
                typedef std::future<DescribeAclsOutcome> DescribeAclsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeAclsRequest&, DescribeAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDasbImageIdsResponse> DescribeDasbImageIdsOutcome;
                typedef std::future<DescribeDasbImageIdsOutcome> DescribeDasbImageIdsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeDasbImageIdsRequest&, DescribeDasbImageIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDasbImageIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceGroupMembersResponse> DescribeDeviceGroupMembersOutcome;
                typedef std::future<DescribeDeviceGroupMembersOutcome> DescribeDeviceGroupMembersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeDeviceGroupMembersRequest&, DescribeDeviceGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceGroupsResponse> DescribeDeviceGroupsOutcome;
                typedef std::future<DescribeDeviceGroupsOutcome> DescribeDeviceGroupsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeDeviceGroupsRequest&, DescribeDeviceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesResponse> DescribeResourcesOutcome;
                typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeResourcesRequest&, DescribeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupMembersResponse> DescribeUserGroupMembersOutcome;
                typedef std::future<DescribeUserGroupMembersOutcome> DescribeUserGroupMembersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeUserGroupMembersRequest&, DescribeUserGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupsResponse> DescribeUserGroupsOutcome;
                typedef std::future<DescribeUserGroupsOutcome> DescribeUserGroupsOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeUserGroupsRequest&, DescribeUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAclResponse> ModifyAclOutcome;
                typedef std::future<ModifyAclOutcome> ModifyAclOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::ModifyAclRequest&, ModifyAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAclAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const DasbClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;



                /**
                 *添加资产组成员
                 * @param req AddDeviceGroupMembersRequest
                 * @return AddDeviceGroupMembersOutcome
                 */
                AddDeviceGroupMembersOutcome AddDeviceGroupMembers(const Model::AddDeviceGroupMembersRequest &request);
                void AddDeviceGroupMembersAsync(const Model::AddDeviceGroupMembersRequest& request, const AddDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDeviceGroupMembersOutcomeCallable AddDeviceGroupMembersCallable(const Model::AddDeviceGroupMembersRequest& request);

                /**
                 *添加用户组成员
                 * @param req AddUserGroupMembersRequest
                 * @return AddUserGroupMembersOutcome
                 */
                AddUserGroupMembersOutcome AddUserGroupMembers(const Model::AddUserGroupMembersRequest &request);
                void AddUserGroupMembersAsync(const Model::AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserGroupMembersOutcomeCallable AddUserGroupMembersCallable(const Model::AddUserGroupMembersRequest& request);

                /**
                 *修改资产绑定的堡垒机服务
                 * @param req BindDeviceResourceRequest
                 * @return BindDeviceResourceOutcome
                 */
                BindDeviceResourceOutcome BindDeviceResource(const Model::BindDeviceResourceRequest &request);
                void BindDeviceResourceAsync(const Model::BindDeviceResourceRequest& request, const BindDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDeviceResourceOutcomeCallable BindDeviceResourceCallable(const Model::BindDeviceResourceRequest& request);

                /**
                 *新建访问权限
                 * @param req CreateAclRequest
                 * @return CreateAclOutcome
                 */
                CreateAclOutcome CreateAcl(const Model::CreateAclRequest &request);
                void CreateAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclOutcomeCallable CreateAclCallable(const Model::CreateAclRequest& request);

                /**
                 *新建资产组
                 * @param req CreateDeviceGroupRequest
                 * @return CreateDeviceGroupOutcome
                 */
                CreateDeviceGroupOutcome CreateDeviceGroup(const Model::CreateDeviceGroupRequest &request);
                void CreateDeviceGroupAsync(const Model::CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceGroupOutcomeCallable CreateDeviceGroupCallable(const Model::CreateDeviceGroupRequest& request);

                /**
                 *新建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *新建用户组
                 * @param req CreateUserGroupRequest
                 * @return CreateUserGroupOutcome
                 */
                CreateUserGroupOutcome CreateUserGroup(const Model::CreateUserGroupRequest &request);
                void CreateUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserGroupOutcomeCallable CreateUserGroupCallable(const Model::CreateUserGroupRequest& request);

                /**
                 *删除访问权限
                 * @param req DeleteAclsRequest
                 * @return DeleteAclsOutcome
                 */
                DeleteAclsOutcome DeleteAcls(const Model::DeleteAclsRequest &request);
                void DeleteAclsAsync(const Model::DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAclsOutcomeCallable DeleteAclsCallable(const Model::DeleteAclsRequest& request);

                /**
                 *删除资产组成员
                 * @param req DeleteDeviceGroupMembersRequest
                 * @return DeleteDeviceGroupMembersOutcome
                 */
                DeleteDeviceGroupMembersOutcome DeleteDeviceGroupMembers(const Model::DeleteDeviceGroupMembersRequest &request);
                void DeleteDeviceGroupMembersAsync(const Model::DeleteDeviceGroupMembersRequest& request, const DeleteDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceGroupMembersOutcomeCallable DeleteDeviceGroupMembersCallable(const Model::DeleteDeviceGroupMembersRequest& request);

                /**
                 *删除资产组
                 * @param req DeleteDeviceGroupsRequest
                 * @return DeleteDeviceGroupsOutcome
                 */
                DeleteDeviceGroupsOutcome DeleteDeviceGroups(const Model::DeleteDeviceGroupsRequest &request);
                void DeleteDeviceGroupsAsync(const Model::DeleteDeviceGroupsRequest& request, const DeleteDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceGroupsOutcomeCallable DeleteDeviceGroupsCallable(const Model::DeleteDeviceGroupsRequest& request);

                /**
                 *删除用户组成员
                 * @param req DeleteUserGroupMembersRequest
                 * @return DeleteUserGroupMembersOutcome
                 */
                DeleteUserGroupMembersOutcome DeleteUserGroupMembers(const Model::DeleteUserGroupMembersRequest &request);
                void DeleteUserGroupMembersAsync(const Model::DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupMembersOutcomeCallable DeleteUserGroupMembersCallable(const Model::DeleteUserGroupMembersRequest& request);

                /**
                 *删除用户组
                 * @param req DeleteUserGroupsRequest
                 * @return DeleteUserGroupsOutcome
                 */
                DeleteUserGroupsOutcome DeleteUserGroups(const Model::DeleteUserGroupsRequest &request);
                void DeleteUserGroupsAsync(const Model::DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupsOutcomeCallable DeleteUserGroupsCallable(const Model::DeleteUserGroupsRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *查询访问权限列表
                 * @param req DescribeAclsRequest
                 * @return DescribeAclsOutcome
                 */
                DescribeAclsOutcome DescribeAcls(const Model::DescribeAclsRequest &request);
                void DescribeAclsAsync(const Model::DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAclsOutcomeCallable DescribeAclsCallable(const Model::DescribeAclsRequest& request);

                /**
                 *获取镜像列表
                 * @param req DescribeDasbImageIdsRequest
                 * @return DescribeDasbImageIdsOutcome
                 */
                DescribeDasbImageIdsOutcome DescribeDasbImageIds(const Model::DescribeDasbImageIdsRequest &request);
                void DescribeDasbImageIdsAsync(const Model::DescribeDasbImageIdsRequest& request, const DescribeDasbImageIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDasbImageIdsOutcomeCallable DescribeDasbImageIdsCallable(const Model::DescribeDasbImageIdsRequest& request);

                /**
                 *查询资产组成员列表
                 * @param req DescribeDeviceGroupMembersRequest
                 * @return DescribeDeviceGroupMembersOutcome
                 */
                DescribeDeviceGroupMembersOutcome DescribeDeviceGroupMembers(const Model::DescribeDeviceGroupMembersRequest &request);
                void DescribeDeviceGroupMembersAsync(const Model::DescribeDeviceGroupMembersRequest& request, const DescribeDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceGroupMembersOutcomeCallable DescribeDeviceGroupMembersCallable(const Model::DescribeDeviceGroupMembersRequest& request);

                /**
                 *查询资产组列表
                 * @param req DescribeDeviceGroupsRequest
                 * @return DescribeDeviceGroupsOutcome
                 */
                DescribeDeviceGroupsOutcome DescribeDeviceGroups(const Model::DescribeDeviceGroupsRequest &request);
                void DescribeDeviceGroupsAsync(const Model::DescribeDeviceGroupsRequest& request, const DescribeDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceGroupsOutcomeCallable DescribeDeviceGroupsCallable(const Model::DescribeDeviceGroupsRequest& request);

                /**
                 *查询资产列表
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *查询用户购买的堡垒机服务信息，包括资源ID、授权点数、VPC、过期时间等。
                 * @param req DescribeResourcesRequest
                 * @return DescribeResourcesOutcome
                 */
                DescribeResourcesOutcome DescribeResources(const Model::DescribeResourcesRequest &request);
                void DescribeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesOutcomeCallable DescribeResourcesCallable(const Model::DescribeResourcesRequest& request);

                /**
                 *查询用户组成员列表
                 * @param req DescribeUserGroupMembersRequest
                 * @return DescribeUserGroupMembersOutcome
                 */
                DescribeUserGroupMembersOutcome DescribeUserGroupMembers(const Model::DescribeUserGroupMembersRequest &request);
                void DescribeUserGroupMembersAsync(const Model::DescribeUserGroupMembersRequest& request, const DescribeUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupMembersOutcomeCallable DescribeUserGroupMembersCallable(const Model::DescribeUserGroupMembersRequest& request);

                /**
                 *查询用户组列表
                 * @param req DescribeUserGroupsRequest
                 * @return DescribeUserGroupsOutcome
                 */
                DescribeUserGroupsOutcome DescribeUserGroups(const Model::DescribeUserGroupsRequest &request);
                void DescribeUserGroupsAsync(const Model::DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupsOutcomeCallable DescribeUserGroupsCallable(const Model::DescribeUserGroupsRequest& request);

                /**
                 *查询用户列表
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *修改访问权限
                 * @param req ModifyAclRequest
                 * @return ModifyAclOutcome
                 */
                ModifyAclOutcome ModifyAcl(const Model::ModifyAclRequest &request);
                void ModifyAclAsync(const Model::ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAclOutcomeCallable ModifyAclCallable(const Model::ModifyAclRequest& request);

                /**
                 *修改用户信息
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_DASBCLIENT_H_
