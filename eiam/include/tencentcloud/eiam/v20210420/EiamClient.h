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

#ifndef TENCENTCLOUD_EIAM_V20210420_EIAMCLIENT_H_
#define TENCENTCLOUD_EIAM_V20210420_EIAMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/eiam/v20210420/model/AddUserToUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/AddUserToUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DecribePublicKeyRequest.h>
#include <tencentcloud/eiam/v20210420/model/DecribePublicKeyResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeApplicationRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeApplicationResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserInfoRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserInfoResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/RemoveUserFromUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/RemoveUserFromUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/UpdateOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/UpdateOrgNodeResponse.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            class EiamClient : public AbstractClient
            {
            public:
                EiamClient(const Credential &credential, const std::string &region);
                EiamClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddUserToUserGroupResponse> AddUserToUserGroupOutcome;
                typedef std::future<AddUserToUserGroupOutcome> AddUserToUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::AddUserToUserGroupRequest&, AddUserToUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToUserGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateOrgNodeResponse> CreateOrgNodeOutcome;
                typedef std::future<CreateOrgNodeOutcome> CreateOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateOrgNodeRequest&, CreateOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrgNodeAsyncHandler;
                typedef Outcome<Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Error, Model::CreateUserGroupResponse> CreateUserGroupOutcome;
                typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateUserGroupRequest&, CreateUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
                typedef Outcome<Error, Model::DecribePublicKeyResponse> DecribePublicKeyOutcome;
                typedef std::future<DecribePublicKeyOutcome> DecribePublicKeyOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DecribePublicKeyRequest&, DecribePublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DecribePublicKeyAsyncHandler;
                typedef Outcome<Error, Model::DeleteOrgNodeResponse> DeleteOrgNodeOutcome;
                typedef std::future<DeleteOrgNodeOutcome> DeleteOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteOrgNodeRequest&, DeleteOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrgNodeAsyncHandler;
                typedef Outcome<Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Error, Model::DeleteUserGroupResponse> DeleteUserGroupOutcome;
                typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteUserGroupRequest&, DeleteUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Error, Model::DescribeOrgNodeResponse> DescribeOrgNodeOutcome;
                typedef std::future<DescribeOrgNodeOutcome> DescribeOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeOrgNodeRequest&, DescribeOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrgNodeAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserGroupResponse> DescribeUserGroupOutcome;
                typedef std::future<DescribeUserGroupOutcome> DescribeUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeUserGroupRequest&, DescribeUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Error, Model::ListAuthorizedApplicationsToOrgNodeResponse> ListAuthorizedApplicationsToOrgNodeOutcome;
                typedef std::future<ListAuthorizedApplicationsToOrgNodeOutcome> ListAuthorizedApplicationsToOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAuthorizedApplicationsToOrgNodeRequest&, ListAuthorizedApplicationsToOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizedApplicationsToOrgNodeAsyncHandler;
                typedef Outcome<Error, Model::ListAuthorizedApplicationsToUserResponse> ListAuthorizedApplicationsToUserOutcome;
                typedef std::future<ListAuthorizedApplicationsToUserOutcome> ListAuthorizedApplicationsToUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAuthorizedApplicationsToUserRequest&, ListAuthorizedApplicationsToUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizedApplicationsToUserAsyncHandler;
                typedef Outcome<Error, Model::ListAuthorizedApplicationsToUserGroupResponse> ListAuthorizedApplicationsToUserGroupOutcome;
                typedef std::future<ListAuthorizedApplicationsToUserGroupOutcome> ListAuthorizedApplicationsToUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAuthorizedApplicationsToUserGroupRequest&, ListAuthorizedApplicationsToUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizedApplicationsToUserGroupAsyncHandler;
                typedef Outcome<Error, Model::ListUserGroupsOfUserResponse> ListUserGroupsOfUserOutcome;
                typedef std::future<ListUserGroupsOfUserOutcome> ListUserGroupsOfUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUserGroupsOfUserRequest&, ListUserGroupsOfUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsOfUserAsyncHandler;
                typedef Outcome<Error, Model::ListUsersInOrgNodeResponse> ListUsersInOrgNodeOutcome;
                typedef std::future<ListUsersInOrgNodeOutcome> ListUsersInOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUsersInOrgNodeRequest&, ListUsersInOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersInOrgNodeAsyncHandler;
                typedef Outcome<Error, Model::ListUsersInUserGroupResponse> ListUsersInUserGroupOutcome;
                typedef std::future<ListUsersInUserGroupOutcome> ListUsersInUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUsersInUserGroupRequest&, ListUsersInUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersInUserGroupAsyncHandler;
                typedef Outcome<Error, Model::RemoveUserFromUserGroupResponse> RemoveUserFromUserGroupOutcome;
                typedef std::future<RemoveUserFromUserGroupOutcome> RemoveUserFromUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::RemoveUserFromUserGroupRequest&, RemoveUserFromUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromUserGroupAsyncHandler;
                typedef Outcome<Error, Model::UpdateOrgNodeResponse> UpdateOrgNodeOutcome;
                typedef std::future<UpdateOrgNodeOutcome> UpdateOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::UpdateOrgNodeRequest&, UpdateOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrgNodeAsyncHandler;



                /**
                 *加入用户到用户组
                 * @param req AddUserToUserGroupRequest
                 * @return AddUserToUserGroupOutcome
                 */
                AddUserToUserGroupOutcome AddUserToUserGroup(const Model::AddUserToUserGroupRequest &request);
                void AddUserToUserGroupAsync(const Model::AddUserToUserGroupRequest& request, const AddUserToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserToUserGroupOutcomeCallable AddUserToUserGroupCallable(const Model::AddUserToUserGroupRequest& request);

                /**
                 *新建一个机构节点
                 * @param req CreateOrgNodeRequest
                 * @return CreateOrgNodeOutcome
                 */
                CreateOrgNodeOutcome CreateOrgNode(const Model::CreateOrgNodeRequest &request);
                void CreateOrgNodeAsync(const Model::CreateOrgNodeRequest& request, const CreateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrgNodeOutcomeCallable CreateOrgNodeCallable(const Model::CreateOrgNodeRequest& request);

                /**
                 *新建一个用户
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
                 *获取JWT公钥信息
                 * @param req DecribePublicKeyRequest
                 * @return DecribePublicKeyOutcome
                 */
                DecribePublicKeyOutcome DecribePublicKey(const Model::DecribePublicKeyRequest &request);
                void DecribePublicKeyAsync(const Model::DecribePublicKeyRequest& request, const DecribePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DecribePublicKeyOutcomeCallable DecribePublicKeyCallable(const Model::DecribePublicKeyRequest& request);

                /**
                 *删除一个机构节点
                 * @param req DeleteOrgNodeRequest
                 * @return DeleteOrgNodeOutcome
                 */
                DeleteOrgNodeOutcome DeleteOrgNode(const Model::DeleteOrgNodeRequest &request);
                void DeleteOrgNodeAsync(const Model::DeleteOrgNodeRequest& request, const DeleteOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrgNodeOutcomeCallable DeleteOrgNodeCallable(const Model::DeleteOrgNodeRequest& request);

                /**
                 *通过用户名或用户 id 删除用户。
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *删除一个用户组
                 * @param req DeleteUserGroupRequest
                 * @return DeleteUserGroupOutcome
                 */
                DeleteUserGroupOutcome DeleteUserGroup(const Model::DeleteUserGroupRequest &request);
                void DeleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupOutcomeCallable DeleteUserGroupCallable(const Model::DeleteUserGroupRequest& request);

                /**
                 *获取一个应用的信息。
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *根据机构节点ID读取机构节点信息
                 * @param req DescribeOrgNodeRequest
                 * @return DescribeOrgNodeOutcome
                 */
                DescribeOrgNodeOutcome DescribeOrgNode(const Model::DescribeOrgNodeRequest &request);
                void DescribeOrgNodeAsync(const Model::DescribeOrgNodeRequest& request, const DescribeOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrgNodeOutcomeCallable DescribeOrgNodeCallable(const Model::DescribeOrgNodeRequest& request);

                /**
                 *获取用户组信息
                 * @param req DescribeUserGroupRequest
                 * @return DescribeUserGroupOutcome
                 */
                DescribeUserGroupOutcome DescribeUserGroup(const Model::DescribeUserGroupRequest &request);
                void DescribeUserGroupAsync(const Model::DescribeUserGroupRequest& request, const DescribeUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupOutcomeCallable DescribeUserGroupCallable(const Model::DescribeUserGroupRequest& request);

                /**
                 *通过用户名或用户 id 搜索用户
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *通过机构节点ID获得被授权访问的应用列表。
                 * @param req ListAuthorizedApplicationsToOrgNodeRequest
                 * @return ListAuthorizedApplicationsToOrgNodeOutcome
                 */
                ListAuthorizedApplicationsToOrgNodeOutcome ListAuthorizedApplicationsToOrgNode(const Model::ListAuthorizedApplicationsToOrgNodeRequest &request);
                void ListAuthorizedApplicationsToOrgNodeAsync(const Model::ListAuthorizedApplicationsToOrgNodeRequest& request, const ListAuthorizedApplicationsToOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuthorizedApplicationsToOrgNodeOutcomeCallable ListAuthorizedApplicationsToOrgNodeCallable(const Model::ListAuthorizedApplicationsToOrgNodeRequest& request);

                /**
                 *通过用户ID获得被授权访问的应用列表。
                 * @param req ListAuthorizedApplicationsToUserRequest
                 * @return ListAuthorizedApplicationsToUserOutcome
                 */
                ListAuthorizedApplicationsToUserOutcome ListAuthorizedApplicationsToUser(const Model::ListAuthorizedApplicationsToUserRequest &request);
                void ListAuthorizedApplicationsToUserAsync(const Model::ListAuthorizedApplicationsToUserRequest& request, const ListAuthorizedApplicationsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuthorizedApplicationsToUserOutcomeCallable ListAuthorizedApplicationsToUserCallable(const Model::ListAuthorizedApplicationsToUserRequest& request);

                /**
                 *通过用户组ID获得被授权访问的应用列表。
                 * @param req ListAuthorizedApplicationsToUserGroupRequest
                 * @return ListAuthorizedApplicationsToUserGroupOutcome
                 */
                ListAuthorizedApplicationsToUserGroupOutcome ListAuthorizedApplicationsToUserGroup(const Model::ListAuthorizedApplicationsToUserGroupRequest &request);
                void ListAuthorizedApplicationsToUserGroupAsync(const Model::ListAuthorizedApplicationsToUserGroupRequest& request, const ListAuthorizedApplicationsToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuthorizedApplicationsToUserGroupOutcomeCallable ListAuthorizedApplicationsToUserGroupCallable(const Model::ListAuthorizedApplicationsToUserGroupRequest& request);

                /**
                 *获取用户所在的用户组列表
                 * @param req ListUserGroupsOfUserRequest
                 * @return ListUserGroupsOfUserOutcome
                 */
                ListUserGroupsOfUserOutcome ListUserGroupsOfUser(const Model::ListUserGroupsOfUserRequest &request);
                void ListUserGroupsOfUserAsync(const Model::ListUserGroupsOfUserRequest& request, const ListUserGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserGroupsOfUserOutcomeCallable ListUserGroupsOfUserCallable(const Model::ListUserGroupsOfUserRequest& request);

                /**
                 *根据机构节点ID读取节点下用户
                 * @param req ListUsersInOrgNodeRequest
                 * @return ListUsersInOrgNodeOutcome
                 */
                ListUsersInOrgNodeOutcome ListUsersInOrgNode(const Model::ListUsersInOrgNodeRequest &request);
                void ListUsersInOrgNodeAsync(const Model::ListUsersInOrgNodeRequest& request, const ListUsersInOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersInOrgNodeOutcomeCallable ListUsersInOrgNodeCallable(const Model::ListUsersInOrgNodeRequest& request);

                /**
                 *获取用户组中的用户列表
                 * @param req ListUsersInUserGroupRequest
                 * @return ListUsersInUserGroupOutcome
                 */
                ListUsersInUserGroupOutcome ListUsersInUserGroup(const Model::ListUsersInUserGroupRequest &request);
                void ListUsersInUserGroupAsync(const Model::ListUsersInUserGroupRequest& request, const ListUsersInUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersInUserGroupOutcomeCallable ListUsersInUserGroupCallable(const Model::ListUsersInUserGroupRequest& request);

                /**
                 *从用户组中移除用户
                 * @param req RemoveUserFromUserGroupRequest
                 * @return RemoveUserFromUserGroupOutcome
                 */
                RemoveUserFromUserGroupOutcome RemoveUserFromUserGroup(const Model::RemoveUserFromUserGroupRequest &request);
                void RemoveUserFromUserGroupAsync(const Model::RemoveUserFromUserGroupRequest& request, const RemoveUserFromUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserFromUserGroupOutcomeCallable RemoveUserFromUserGroupCallable(const Model::RemoveUserFromUserGroupRequest& request);

                /**
                 *新建一个机构节点，
                 * @param req UpdateOrgNodeRequest
                 * @return UpdateOrgNodeOutcome
                 */
                UpdateOrgNodeOutcome UpdateOrgNode(const Model::UpdateOrgNodeRequest &request);
                void UpdateOrgNodeAsync(const Model::UpdateOrgNodeRequest& request, const UpdateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrgNodeOutcomeCallable UpdateOrgNodeCallable(const Model::UpdateOrgNodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_EIAMCLIENT_H_
