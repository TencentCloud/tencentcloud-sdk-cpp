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

#ifndef TENCENTCLOUD_CAM_V20190116_CAMCLIENT_H_
#define TENCENTCLOUD_CAM_V20190116_CAMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cam/v20190116/model/AddUserRequest.h>
#include <tencentcloud/cam/v20190116/model/AddUserResponse.h>
#include <tencentcloud/cam/v20190116/model/AddUserToGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/AddUserToGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/AttachGroupPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/AttachGroupPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/AttachRolePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/AttachRolePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/AttachUserPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/AttachUserPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenRequest.h>
#include <tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteRolePermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteRolePermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteServiceLinkedRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteServiceLinkedRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserPermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserPermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeRoleListRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeRoleListResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagCollRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagCollResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagIntlRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagIntlResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSubAccountsRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSubAccountsResponse.h>
#include <tencentcloud/cam/v20190116/model/DetachGroupPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DetachGroupPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DetachRolePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DetachRolePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DetachUserPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DetachUserPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/GetAccountSummaryRequest.h>
#include <tencentcloud/cam/v20190116/model/GetAccountSummaryResponse.h>
#include <tencentcloud/cam/v20190116/model/GetCustomMFATokenInfoRequest.h>
#include <tencentcloud/cam/v20190116/model/GetCustomMFATokenInfoResponse.h>
#include <tencentcloud/cam/v20190116/model/GetGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/GetGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/GetRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/GetRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/GetSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/GetSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/GetSecurityLastUsedRequest.h>
#include <tencentcloud/cam/v20190116/model/GetSecurityLastUsedResponse.h>
#include <tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusRequest.h>
#include <tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusResponse.h>
#include <tencentcloud/cam/v20190116/model/GetUserRequest.h>
#include <tencentcloud/cam/v20190116/model/GetUserResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAccessKeysRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAccessKeysResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedUserPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedUserPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListCollaboratorsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListCollaboratorsResponse.h>
#include <tencentcloud/cam/v20190116/model/ListEntitiesForPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/ListEntitiesForPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsResponse.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsForUserRequest.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsForUserResponse.h>
#include <tencentcloud/cam/v20190116/model/ListPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListPoliciesGrantingServiceAccessRequest.h>
#include <tencentcloud/cam/v20190116/model/ListPoliciesGrantingServiceAccessResponse.h>
#include <tencentcloud/cam/v20190116/model/ListPolicyVersionsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListPolicyVersionsResponse.h>
#include <tencentcloud/cam/v20190116/model/ListSAMLProvidersRequest.h>
#include <tencentcloud/cam/v20190116/model/ListSAMLProvidersResponse.h>
#include <tencentcloud/cam/v20190116/model/ListUsersRequest.h>
#include <tencentcloud/cam/v20190116/model/ListUsersResponse.h>
#include <tencentcloud/cam/v20190116/model/ListUsersForGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/ListUsersForGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/ListWeChatWorkSubAccountsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListWeChatWorkSubAccountsResponse.h>
#include <tencentcloud/cam/v20190116/model/PutRolePermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/PutRolePermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/PutUserPermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/PutUserPermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/RemoveUserFromGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/RemoveUserFromGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/SetDefaultPolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/SetDefaultPolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/SetMfaFlagRequest.h>
#include <tencentcloud/cam/v20190116/model/SetMfaFlagResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateAssumeRolePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateAssumeRolePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdatePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdatePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleConsoleLoginRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleConsoleLoginResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleDescriptionRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleDescriptionResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserResponse.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            class CamClient : public AbstractClient
            {
            public:
                CamClient(const Credential &credential, const std::string &region);
                CamClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUserResponse> AddUserOutcome;
                typedef std::future<AddUserOutcome> AddUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AddUserRequest&, AddUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserToGroupResponse> AddUserToGroupOutcome;
                typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AddUserToGroupRequest&, AddUserToGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachGroupPolicyResponse> AttachGroupPolicyOutcome;
                typedef std::future<AttachGroupPolicyOutcome> AttachGroupPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AttachGroupPolicyRequest&, AttachGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachRolePolicyResponse> AttachRolePolicyOutcome;
                typedef std::future<AttachRolePolicyOutcome> AttachRolePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AttachRolePolicyRequest&, AttachRolePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachRolePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachUserPolicyResponse> AttachUserPolicyOutcome;
                typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AttachUserPolicyRequest&, AttachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ConsumeCustomMFATokenResponse> ConsumeCustomMFATokenOutcome;
                typedef std::future<ConsumeCustomMFATokenOutcome> ConsumeCustomMFATokenOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ConsumeCustomMFATokenRequest&, ConsumeCustomMFATokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConsumeCustomMFATokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyResponse> CreatePolicyOutcome;
                typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreatePolicyRequest&, CreatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyVersionResponse> CreatePolicyVersionOutcome;
                typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreatePolicyVersionRequest&, CreatePolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleResponse> CreateRoleOutcome;
                typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateRoleRequest&, CreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSAMLProviderResponse> CreateSAMLProviderOutcome;
                typedef std::future<CreateSAMLProviderOutcome> CreateSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateSAMLProviderRequest&, CreateSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceLinkedRoleResponse> CreateServiceLinkedRoleOutcome;
                typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateServiceLinkedRoleRequest&, CreateServiceLinkedRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyResponse> DeletePolicyOutcome;
                typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeletePolicyRequest&, DeletePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyVersionResponse> DeletePolicyVersionOutcome;
                typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeletePolicyVersionRequest&, DeletePolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleResponse> DeleteRoleOutcome;
                typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteRoleRequest&, DeleteRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRolePermissionsBoundaryResponse> DeleteRolePermissionsBoundaryOutcome;
                typedef std::future<DeleteRolePermissionsBoundaryOutcome> DeleteRolePermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteRolePermissionsBoundaryRequest&, DeleteRolePermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRolePermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSAMLProviderResponse> DeleteSAMLProviderOutcome;
                typedef std::future<DeleteSAMLProviderOutcome> DeleteSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteSAMLProviderRequest&, DeleteSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceLinkedRoleResponse> DeleteServiceLinkedRoleOutcome;
                typedef std::future<DeleteServiceLinkedRoleOutcome> DeleteServiceLinkedRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteServiceLinkedRoleRequest&, DeleteServiceLinkedRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceLinkedRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserPermissionsBoundaryResponse> DeleteUserPermissionsBoundaryOutcome;
                typedef std::future<DeleteUserPermissionsBoundaryOutcome> DeleteUserPermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteUserPermissionsBoundaryRequest&, DeleteUserPermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserPermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeAuthFlagResponse> DescribeSafeAuthFlagOutcome;
                typedef std::future<DescribeSafeAuthFlagOutcome> DescribeSafeAuthFlagOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSafeAuthFlagRequest&, DescribeSafeAuthFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeAuthFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeAuthFlagCollResponse> DescribeSafeAuthFlagCollOutcome;
                typedef std::future<DescribeSafeAuthFlagCollOutcome> DescribeSafeAuthFlagCollOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSafeAuthFlagCollRequest&, DescribeSafeAuthFlagCollOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeAuthFlagCollAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeAuthFlagIntlResponse> DescribeSafeAuthFlagIntlOutcome;
                typedef std::future<DescribeSafeAuthFlagIntlOutcome> DescribeSafeAuthFlagIntlOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSafeAuthFlagIntlRequest&, DescribeSafeAuthFlagIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeAuthFlagIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubAccountsResponse> DescribeSubAccountsOutcome;
                typedef std::future<DescribeSubAccountsOutcome> DescribeSubAccountsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSubAccountsRequest&, DescribeSubAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachGroupPolicyResponse> DetachGroupPolicyOutcome;
                typedef std::future<DetachGroupPolicyOutcome> DetachGroupPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DetachGroupPolicyRequest&, DetachGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachRolePolicyResponse> DetachRolePolicyOutcome;
                typedef std::future<DetachRolePolicyOutcome> DetachRolePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DetachRolePolicyRequest&, DetachRolePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachRolePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachUserPolicyResponse> DetachUserPolicyOutcome;
                typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DetachUserPolicyRequest&, DetachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAccountSummaryResponse> GetAccountSummaryOutcome;
                typedef std::future<GetAccountSummaryOutcome> GetAccountSummaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetAccountSummaryRequest&, GetAccountSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCustomMFATokenInfoResponse> GetCustomMFATokenInfoOutcome;
                typedef std::future<GetCustomMFATokenInfoOutcome> GetCustomMFATokenInfoOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetCustomMFATokenInfoRequest&, GetCustomMFATokenInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomMFATokenInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupResponse> GetGroupOutcome;
                typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetGroupRequest&, GetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPolicyResponse> GetPolicyOutcome;
                typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetPolicyRequest&, GetPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPolicyVersionResponse> GetPolicyVersionOutcome;
                typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetPolicyVersionRequest&, GetPolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoleResponse> GetRoleOutcome;
                typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetRoleRequest&, GetRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSAMLProviderResponse> GetSAMLProviderOutcome;
                typedef std::future<GetSAMLProviderOutcome> GetSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetSAMLProviderRequest&, GetSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSecurityLastUsedResponse> GetSecurityLastUsedOutcome;
                typedef std::future<GetSecurityLastUsedOutcome> GetSecurityLastUsedOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetSecurityLastUsedRequest&, GetSecurityLastUsedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSecurityLastUsedAsyncHandler;
                typedef Outcome<Core::Error, Model::GetServiceLinkedRoleDeletionStatusResponse> GetServiceLinkedRoleDeletionStatusOutcome;
                typedef std::future<GetServiceLinkedRoleDeletionStatusOutcome> GetServiceLinkedRoleDeletionStatusOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetServiceLinkedRoleDeletionStatusRequest&, GetServiceLinkedRoleDeletionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceLinkedRoleDeletionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserResponse> GetUserOutcome;
                typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetUserRequest&, GetUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAccessKeysResponse> ListAccessKeysOutcome;
                typedef std::future<ListAccessKeysOutcome> ListAccessKeysOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAccessKeysRequest&, ListAccessKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedGroupPoliciesResponse> ListAttachedGroupPoliciesOutcome;
                typedef std::future<ListAttachedGroupPoliciesOutcome> ListAttachedGroupPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedGroupPoliciesRequest&, ListAttachedGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedRolePoliciesResponse> ListAttachedRolePoliciesOutcome;
                typedef std::future<ListAttachedRolePoliciesOutcome> ListAttachedRolePoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedRolePoliciesRequest&, ListAttachedRolePoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedRolePoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedUserPoliciesResponse> ListAttachedUserPoliciesOutcome;
                typedef std::future<ListAttachedUserPoliciesOutcome> ListAttachedUserPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedUserPoliciesRequest&, ListAttachedUserPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedUserPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCollaboratorsResponse> ListCollaboratorsOutcome;
                typedef std::future<ListCollaboratorsOutcome> ListCollaboratorsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListCollaboratorsRequest&, ListCollaboratorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCollaboratorsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEntitiesForPolicyResponse> ListEntitiesForPolicyOutcome;
                typedef std::future<ListEntitiesForPolicyOutcome> ListEntitiesForPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListEntitiesForPolicyRequest&, ListEntitiesForPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEntitiesForPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupsResponse> ListGroupsOutcome;
                typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListGroupsRequest&, ListGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupsForUserResponse> ListGroupsForUserOutcome;
                typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListGroupsForUserRequest&, ListGroupsForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsForUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesResponse> ListPoliciesOutcome;
                typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListPoliciesRequest&, ListPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesGrantingServiceAccessResponse> ListPoliciesGrantingServiceAccessOutcome;
                typedef std::future<ListPoliciesGrantingServiceAccessOutcome> ListPoliciesGrantingServiceAccessOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListPoliciesGrantingServiceAccessRequest&, ListPoliciesGrantingServiceAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesGrantingServiceAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPolicyVersionsResponse> ListPolicyVersionsOutcome;
                typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListPolicyVersionsRequest&, ListPolicyVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicyVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSAMLProvidersResponse> ListSAMLProvidersOutcome;
                typedef std::future<ListSAMLProvidersOutcome> ListSAMLProvidersOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListSAMLProvidersRequest&, ListSAMLProvidersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSAMLProvidersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersResponse> ListUsersOutcome;
                typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListUsersRequest&, ListUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersForGroupResponse> ListUsersForGroupOutcome;
                typedef std::future<ListUsersForGroupOutcome> ListUsersForGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListUsersForGroupRequest&, ListUsersForGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersForGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWeChatWorkSubAccountsResponse> ListWeChatWorkSubAccountsOutcome;
                typedef std::future<ListWeChatWorkSubAccountsOutcome> ListWeChatWorkSubAccountsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListWeChatWorkSubAccountsRequest&, ListWeChatWorkSubAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWeChatWorkSubAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::PutRolePermissionsBoundaryResponse> PutRolePermissionsBoundaryOutcome;
                typedef std::future<PutRolePermissionsBoundaryOutcome> PutRolePermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::PutRolePermissionsBoundaryRequest&, PutRolePermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutRolePermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::PutUserPermissionsBoundaryResponse> PutUserPermissionsBoundaryOutcome;
                typedef std::future<PutUserPermissionsBoundaryOutcome> PutUserPermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::PutUserPermissionsBoundaryRequest&, PutUserPermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutUserPermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserFromGroupResponse> RemoveUserFromGroupOutcome;
                typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::RemoveUserFromGroupRequest&, RemoveUserFromGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDefaultPolicyVersionResponse> SetDefaultPolicyVersionOutcome;
                typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::SetDefaultPolicyVersionRequest&, SetDefaultPolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultPolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::SetMfaFlagResponse> SetMfaFlagOutcome;
                typedef std::future<SetMfaFlagOutcome> SetMfaFlagOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::SetMfaFlagRequest&, SetMfaFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetMfaFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAssumeRolePolicyResponse> UpdateAssumeRolePolicyOutcome;
                typedef std::future<UpdateAssumeRolePolicyOutcome> UpdateAssumeRolePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateAssumeRolePolicyRequest&, UpdateAssumeRolePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssumeRolePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGroupResponse> UpdateGroupOutcome;
                typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateGroupRequest&, UpdateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePolicyResponse> UpdatePolicyOutcome;
                typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdatePolicyRequest&, UpdatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRoleConsoleLoginResponse> UpdateRoleConsoleLoginOutcome;
                typedef std::future<UpdateRoleConsoleLoginOutcome> UpdateRoleConsoleLoginOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateRoleConsoleLoginRequest&, UpdateRoleConsoleLoginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleConsoleLoginAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRoleDescriptionResponse> UpdateRoleDescriptionOutcome;
                typedef std::future<UpdateRoleDescriptionOutcome> UpdateRoleDescriptionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateRoleDescriptionRequest&, UpdateRoleDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSAMLProviderResponse> UpdateSAMLProviderOutcome;
                typedef std::future<UpdateSAMLProviderOutcome> UpdateSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateSAMLProviderRequest&, UpdateSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserResponse> UpdateUserOutcome;
                typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateUserRequest&, UpdateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;



                /**
                 *添加子用户
                 * @param req AddUserRequest
                 * @return AddUserOutcome
                 */
                AddUserOutcome AddUser(const Model::AddUserRequest &request);
                void AddUserAsync(const Model::AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserOutcomeCallable AddUserCallable(const Model::AddUserRequest& request);

                /**
                 *用户加入到用户组
                 * @param req AddUserToGroupRequest
                 * @return AddUserToGroupOutcome
                 */
                AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest &request);
                void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request);

                /**
                 *本接口（AttachGroupPolicy）可用于绑定策略到用户组。
                 * @param req AttachGroupPolicyRequest
                 * @return AttachGroupPolicyOutcome
                 */
                AttachGroupPolicyOutcome AttachGroupPolicy(const Model::AttachGroupPolicyRequest &request);
                void AttachGroupPolicyAsync(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachGroupPolicyOutcomeCallable AttachGroupPolicyCallable(const Model::AttachGroupPolicyRequest& request);

                /**
                 *本接口（AttachRolePolicy）用于绑定策略到角色。
                 * @param req AttachRolePolicyRequest
                 * @return AttachRolePolicyOutcome
                 */
                AttachRolePolicyOutcome AttachRolePolicy(const Model::AttachRolePolicyRequest &request);
                void AttachRolePolicyAsync(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachRolePolicyOutcomeCallable AttachRolePolicyCallable(const Model::AttachRolePolicyRequest& request);

                /**
                 *本接口（AttachUserPolicy）可用于绑定到用户的策略。
                 * @param req AttachUserPolicyRequest
                 * @return AttachUserPolicyOutcome
                 */
                AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest &request);
                void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request);

                /**
                 *验证自定义多因子Token
                 * @param req ConsumeCustomMFATokenRequest
                 * @return ConsumeCustomMFATokenOutcome
                 */
                ConsumeCustomMFATokenOutcome ConsumeCustomMFAToken(const Model::ConsumeCustomMFATokenRequest &request);
                void ConsumeCustomMFATokenAsync(const Model::ConsumeCustomMFATokenRequest& request, const ConsumeCustomMFATokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConsumeCustomMFATokenOutcomeCallable ConsumeCustomMFATokenCallable(const Model::ConsumeCustomMFATokenRequest& request);

                /**
                 *创建用户组
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *本接口（CreatePolicy）可用于创建策略。
                 * @param req CreatePolicyRequest
                 * @return CreatePolicyOutcome
                 */
                CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest &request);
                void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request);

                /**
                 *该接口（CreatePolicyVersion）用于新增策略版本，用户创建了一个策略版本之后可以方便的通过变更策略版本的方式来变更策略。
                 * @param req CreatePolicyVersionRequest
                 * @return CreatePolicyVersionOutcome
                 */
                CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest &request);
                void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request);

                /**
                 *本接口（CreateRole）用于创建角色。
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

                /**
                 *创建SAML身份提供商
                 * @param req CreateSAMLProviderRequest
                 * @return CreateSAMLProviderOutcome
                 */
                CreateSAMLProviderOutcome CreateSAMLProvider(const Model::CreateSAMLProviderRequest &request);
                void CreateSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSAMLProviderOutcomeCallable CreateSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request);

                /**
                 *创建服务相关角色
                 * @param req CreateServiceLinkedRoleRequest
                 * @return CreateServiceLinkedRoleOutcome
                 */
                CreateServiceLinkedRoleOutcome CreateServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request);
                void CreateServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceLinkedRoleOutcomeCallable CreateServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request);

                /**
                 *删除用户组
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *本接口（DeletePolicy）可用于删除策略。
                 * @param req DeletePolicyRequest
                 * @return DeletePolicyOutcome
                 */
                DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest &request);
                void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request);

                /**
                 *本接口（DeletePolicyVersion）可用于删除一个策略的策略版本。
                 * @param req DeletePolicyVersionRequest
                 * @return DeletePolicyVersionOutcome
                 */
                DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest &request);
                void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request);

                /**
                 *本接口（DeleteRole）用于删除指定角色。
                 * @param req DeleteRoleRequest
                 * @return DeleteRoleOutcome
                 */
                DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest &request);
                void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request);

                /**
                 *删除角色权限边界
                 * @param req DeleteRolePermissionsBoundaryRequest
                 * @return DeleteRolePermissionsBoundaryOutcome
                 */
                DeleteRolePermissionsBoundaryOutcome DeleteRolePermissionsBoundary(const Model::DeleteRolePermissionsBoundaryRequest &request);
                void DeleteRolePermissionsBoundaryAsync(const Model::DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRolePermissionsBoundaryOutcomeCallable DeleteRolePermissionsBoundaryCallable(const Model::DeleteRolePermissionsBoundaryRequest& request);

                /**
                 *删除SAML身份提供商
                 * @param req DeleteSAMLProviderRequest
                 * @return DeleteSAMLProviderOutcome
                 */
                DeleteSAMLProviderOutcome DeleteSAMLProvider(const Model::DeleteSAMLProviderRequest &request);
                void DeleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSAMLProviderOutcomeCallable DeleteSAMLProviderCallable(const Model::DeleteSAMLProviderRequest& request);

                /**
                 *删除服务相关角色
                 * @param req DeleteServiceLinkedRoleRequest
                 * @return DeleteServiceLinkedRoleOutcome
                 */
                DeleteServiceLinkedRoleOutcome DeleteServiceLinkedRole(const Model::DeleteServiceLinkedRoleRequest &request);
                void DeleteServiceLinkedRoleAsync(const Model::DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceLinkedRoleOutcomeCallable DeleteServiceLinkedRoleCallable(const Model::DeleteServiceLinkedRoleRequest& request);

                /**
                 *删除子用户
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *删除用户权限边界
                 * @param req DeleteUserPermissionsBoundaryRequest
                 * @return DeleteUserPermissionsBoundaryOutcome
                 */
                DeleteUserPermissionsBoundaryOutcome DeleteUserPermissionsBoundary(const Model::DeleteUserPermissionsBoundaryRequest &request);
                void DeleteUserPermissionsBoundaryAsync(const Model::DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserPermissionsBoundaryOutcomeCallable DeleteUserPermissionsBoundaryCallable(const Model::DeleteUserPermissionsBoundaryRequest& request);

                /**
                 *本接口（DescribeRoleList）用于获取账号下的角色列表。
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *查询安全设置
                 * @param req DescribeSafeAuthFlagRequest
                 * @return DescribeSafeAuthFlagOutcome
                 */
                DescribeSafeAuthFlagOutcome DescribeSafeAuthFlag(const Model::DescribeSafeAuthFlagRequest &request);
                void DescribeSafeAuthFlagAsync(const Model::DescribeSafeAuthFlagRequest& request, const DescribeSafeAuthFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeAuthFlagOutcomeCallable DescribeSafeAuthFlagCallable(const Model::DescribeSafeAuthFlagRequest& request);

                /**
                 *查询安全设置
                 * @param req DescribeSafeAuthFlagCollRequest
                 * @return DescribeSafeAuthFlagCollOutcome
                 */
                DescribeSafeAuthFlagCollOutcome DescribeSafeAuthFlagColl(const Model::DescribeSafeAuthFlagCollRequest &request);
                void DescribeSafeAuthFlagCollAsync(const Model::DescribeSafeAuthFlagCollRequest& request, const DescribeSafeAuthFlagCollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeAuthFlagCollOutcomeCallable DescribeSafeAuthFlagCollCallable(const Model::DescribeSafeAuthFlagCollRequest& request);

                /**
                 *查询安全设置(国际站)
                 * @param req DescribeSafeAuthFlagIntlRequest
                 * @return DescribeSafeAuthFlagIntlOutcome
                 */
                DescribeSafeAuthFlagIntlOutcome DescribeSafeAuthFlagIntl(const Model::DescribeSafeAuthFlagIntlRequest &request);
                void DescribeSafeAuthFlagIntlAsync(const Model::DescribeSafeAuthFlagIntlRequest& request, const DescribeSafeAuthFlagIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeAuthFlagIntlOutcomeCallable DescribeSafeAuthFlagIntlCallable(const Model::DescribeSafeAuthFlagIntlRequest& request);

                /**
                 *通过子用户UIN列表查询子用户
                 * @param req DescribeSubAccountsRequest
                 * @return DescribeSubAccountsOutcome
                 */
                DescribeSubAccountsOutcome DescribeSubAccounts(const Model::DescribeSubAccountsRequest &request);
                void DescribeSubAccountsAsync(const Model::DescribeSubAccountsRequest& request, const DescribeSubAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAccountsOutcomeCallable DescribeSubAccountsCallable(const Model::DescribeSubAccountsRequest& request);

                /**
                 *本接口（DetachGroupPolicy）可用于解除绑定到用户组的策略。
                 * @param req DetachGroupPolicyRequest
                 * @return DetachGroupPolicyOutcome
                 */
                DetachGroupPolicyOutcome DetachGroupPolicy(const Model::DetachGroupPolicyRequest &request);
                void DetachGroupPolicyAsync(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachGroupPolicyOutcomeCallable DetachGroupPolicyCallable(const Model::DetachGroupPolicyRequest& request);

                /**
                 *本接口（DetachRolePolicy）用于解除绑定角色的策略。
                 * @param req DetachRolePolicyRequest
                 * @return DetachRolePolicyOutcome
                 */
                DetachRolePolicyOutcome DetachRolePolicy(const Model::DetachRolePolicyRequest &request);
                void DetachRolePolicyAsync(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachRolePolicyOutcomeCallable DetachRolePolicyCallable(const Model::DetachRolePolicyRequest& request);

                /**
                 *本接口（DetachUserPolicy）可用于解除绑定到用户的策略。
                 * @param req DetachUserPolicyRequest
                 * @return DetachUserPolicyOutcome
                 */
                DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest &request);
                void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request);

                /**
                 *查询账户摘要 
                 * @param req GetAccountSummaryRequest
                 * @return GetAccountSummaryOutcome
                 */
                GetAccountSummaryOutcome GetAccountSummary(const Model::GetAccountSummaryRequest &request);
                void GetAccountSummaryAsync(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAccountSummaryOutcomeCallable GetAccountSummaryCallable(const Model::GetAccountSummaryRequest& request);

                /**
                 *获取自定义多因子Token关联信息
                 * @param req GetCustomMFATokenInfoRequest
                 * @return GetCustomMFATokenInfoOutcome
                 */
                GetCustomMFATokenInfoOutcome GetCustomMFATokenInfo(const Model::GetCustomMFATokenInfoRequest &request);
                void GetCustomMFATokenInfoAsync(const Model::GetCustomMFATokenInfoRequest& request, const GetCustomMFATokenInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCustomMFATokenInfoOutcomeCallable GetCustomMFATokenInfoCallable(const Model::GetCustomMFATokenInfoRequest& request);

                /**
                 *查询用户组详情
                 * @param req GetGroupRequest
                 * @return GetGroupOutcome
                 */
                GetGroupOutcome GetGroup(const Model::GetGroupRequest &request);
                void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request);

                /**
                 *本接口（GetPolicy）可用于查询查看策略详情。
                 * @param req GetPolicyRequest
                 * @return GetPolicyOutcome
                 */
                GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest &request);
                void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request);

                /**
                 *该接口（GetPolicyVersion）用于查询策略版本详情
                 * @param req GetPolicyVersionRequest
                 * @return GetPolicyVersionOutcome
                 */
                GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest &request);
                void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request);

                /**
                 *本接口（GetRole）用于获取指定角色的详细信息。
                 * @param req GetRoleRequest
                 * @return GetRoleOutcome
                 */
                GetRoleOutcome GetRole(const Model::GetRoleRequest &request);
                void GetRoleAsync(const Model::GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoleOutcomeCallable GetRoleCallable(const Model::GetRoleRequest& request);

                /**
                 *查询SAML身份提供商详情
                 * @param req GetSAMLProviderRequest
                 * @return GetSAMLProviderOutcome
                 */
                GetSAMLProviderOutcome GetSAMLProvider(const Model::GetSAMLProviderRequest &request);
                void GetSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSAMLProviderOutcomeCallable GetSAMLProviderCallable(const Model::GetSAMLProviderRequest& request);

                /**
                 *获取密钥最近使用情况
                 * @param req GetSecurityLastUsedRequest
                 * @return GetSecurityLastUsedOutcome
                 */
                GetSecurityLastUsedOutcome GetSecurityLastUsed(const Model::GetSecurityLastUsedRequest &request);
                void GetSecurityLastUsedAsync(const Model::GetSecurityLastUsedRequest& request, const GetSecurityLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSecurityLastUsedOutcomeCallable GetSecurityLastUsedCallable(const Model::GetSecurityLastUsedRequest& request);

                /**
                 *根据删除TaskId获取服务相关角色删除状态
                 * @param req GetServiceLinkedRoleDeletionStatusRequest
                 * @return GetServiceLinkedRoleDeletionStatusOutcome
                 */
                GetServiceLinkedRoleDeletionStatusOutcome GetServiceLinkedRoleDeletionStatus(const Model::GetServiceLinkedRoleDeletionStatusRequest &request);
                void GetServiceLinkedRoleDeletionStatusAsync(const Model::GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetServiceLinkedRoleDeletionStatusOutcomeCallable GetServiceLinkedRoleDeletionStatusCallable(const Model::GetServiceLinkedRoleDeletionStatusRequest& request);

                /**
                 *查询子用户
                 * @param req GetUserRequest
                 * @return GetUserOutcome
                 */
                GetUserOutcome GetUser(const Model::GetUserRequest &request);
                void GetUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request);

                /**
                 *列出指定CAM用户的访问密钥
                 * @param req ListAccessKeysRequest
                 * @return ListAccessKeysOutcome
                 */
                ListAccessKeysOutcome ListAccessKeys(const Model::ListAccessKeysRequest &request);
                void ListAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAccessKeysOutcomeCallable ListAccessKeysCallable(const Model::ListAccessKeysRequest& request);

                /**
                 *本接口（ListAttachedGroupPolicies）可用于查询用户组关联的策略列表。
                 * @param req ListAttachedGroupPoliciesRequest
                 * @return ListAttachedGroupPoliciesOutcome
                 */
                ListAttachedGroupPoliciesOutcome ListAttachedGroupPolicies(const Model::ListAttachedGroupPoliciesRequest &request);
                void ListAttachedGroupPoliciesAsync(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedGroupPoliciesOutcomeCallable ListAttachedGroupPoliciesCallable(const Model::ListAttachedGroupPoliciesRequest& request);

                /**
                 *本接口（ListAttachedRolePolicies）用于获取角色绑定的策略列表。
                 * @param req ListAttachedRolePoliciesRequest
                 * @return ListAttachedRolePoliciesOutcome
                 */
                ListAttachedRolePoliciesOutcome ListAttachedRolePolicies(const Model::ListAttachedRolePoliciesRequest &request);
                void ListAttachedRolePoliciesAsync(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedRolePoliciesOutcomeCallable ListAttachedRolePoliciesCallable(const Model::ListAttachedRolePoliciesRequest& request);

                /**
                 *本接口（ListAttachedUserPolicies）可用于查询子账号关联的策略列表。
                 * @param req ListAttachedUserPoliciesRequest
                 * @return ListAttachedUserPoliciesOutcome
                 */
                ListAttachedUserPoliciesOutcome ListAttachedUserPolicies(const Model::ListAttachedUserPoliciesRequest &request);
                void ListAttachedUserPoliciesAsync(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedUserPoliciesOutcomeCallable ListAttachedUserPoliciesCallable(const Model::ListAttachedUserPoliciesRequest& request);

                /**
                 *获取协作者列表
                 * @param req ListCollaboratorsRequest
                 * @return ListCollaboratorsOutcome
                 */
                ListCollaboratorsOutcome ListCollaborators(const Model::ListCollaboratorsRequest &request);
                void ListCollaboratorsAsync(const Model::ListCollaboratorsRequest& request, const ListCollaboratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCollaboratorsOutcomeCallable ListCollaboratorsCallable(const Model::ListCollaboratorsRequest& request);

                /**
                 *本接口（ListEntitiesForPolicy）可用于查询策略关联的实体列表。
                 * @param req ListEntitiesForPolicyRequest
                 * @return ListEntitiesForPolicyOutcome
                 */
                ListEntitiesForPolicyOutcome ListEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest &request);
                void ListEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEntitiesForPolicyOutcomeCallable ListEntitiesForPolicyCallable(const Model::ListEntitiesForPolicyRequest& request);

                /**
                 *查询用户组列表
                 * @param req ListGroupsRequest
                 * @return ListGroupsOutcome
                 */
                ListGroupsOutcome ListGroups(const Model::ListGroupsRequest &request);
                void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request);

                /**
                 *列出用户关联的用户组
                 * @param req ListGroupsForUserRequest
                 * @return ListGroupsForUserOutcome
                 */
                ListGroupsForUserOutcome ListGroupsForUser(const Model::ListGroupsForUserRequest &request);
                void ListGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupsForUserOutcomeCallable ListGroupsForUserCallable(const Model::ListGroupsForUserRequest& request);

                /**
                 *本接口（ListPolicies）可用于查询策略列表。
                 * @param req ListPoliciesRequest
                 * @return ListPoliciesOutcome
                 */
                ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest &request);
                void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request);

                /**
                 *获取所有已授权服务
                 * @param req ListPoliciesGrantingServiceAccessRequest
                 * @return ListPoliciesGrantingServiceAccessOutcome
                 */
                ListPoliciesGrantingServiceAccessOutcome ListPoliciesGrantingServiceAccess(const Model::ListPoliciesGrantingServiceAccessRequest &request);
                void ListPoliciesGrantingServiceAccessAsync(const Model::ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesGrantingServiceAccessOutcomeCallable ListPoliciesGrantingServiceAccessCallable(const Model::ListPoliciesGrantingServiceAccessRequest& request);

                /**
                 *该接口（ListPolicyVersions）用于获取策略版本列表
                 * @param req ListPolicyVersionsRequest
                 * @return ListPolicyVersionsOutcome
                 */
                ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest &request);
                void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request);

                /**
                 *查询SAML身份提供商列表
                 * @param req ListSAMLProvidersRequest
                 * @return ListSAMLProvidersOutcome
                 */
                ListSAMLProvidersOutcome ListSAMLProviders(const Model::ListSAMLProvidersRequest &request);
                void ListSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSAMLProvidersOutcomeCallable ListSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request);

                /**
                 *拉取子用户
                 * @param req ListUsersRequest
                 * @return ListUsersOutcome
                 */
                ListUsersOutcome ListUsers(const Model::ListUsersRequest &request);
                void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request);

                /**
                 *查询用户组关联的用户列表
                 * @param req ListUsersForGroupRequest
                 * @return ListUsersForGroupOutcome
                 */
                ListUsersForGroupOutcome ListUsersForGroup(const Model::ListUsersForGroupRequest &request);
                void ListUsersForGroupAsync(const Model::ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersForGroupOutcomeCallable ListUsersForGroupCallable(const Model::ListUsersForGroupRequest& request);

                /**
                 *获取企业微信子用户列表
                 * @param req ListWeChatWorkSubAccountsRequest
                 * @return ListWeChatWorkSubAccountsOutcome
                 */
                ListWeChatWorkSubAccountsOutcome ListWeChatWorkSubAccounts(const Model::ListWeChatWorkSubAccountsRequest &request);
                void ListWeChatWorkSubAccountsAsync(const Model::ListWeChatWorkSubAccountsRequest& request, const ListWeChatWorkSubAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWeChatWorkSubAccountsOutcomeCallable ListWeChatWorkSubAccountsCallable(const Model::ListWeChatWorkSubAccountsRequest& request);

                /**
                 *设置角色权限边界
                 * @param req PutRolePermissionsBoundaryRequest
                 * @return PutRolePermissionsBoundaryOutcome
                 */
                PutRolePermissionsBoundaryOutcome PutRolePermissionsBoundary(const Model::PutRolePermissionsBoundaryRequest &request);
                void PutRolePermissionsBoundaryAsync(const Model::PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutRolePermissionsBoundaryOutcomeCallable PutRolePermissionsBoundaryCallable(const Model::PutRolePermissionsBoundaryRequest& request);

                /**
                 *设置用户权限边界
                 * @param req PutUserPermissionsBoundaryRequest
                 * @return PutUserPermissionsBoundaryOutcome
                 */
                PutUserPermissionsBoundaryOutcome PutUserPermissionsBoundary(const Model::PutUserPermissionsBoundaryRequest &request);
                void PutUserPermissionsBoundaryAsync(const Model::PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutUserPermissionsBoundaryOutcomeCallable PutUserPermissionsBoundaryCallable(const Model::PutUserPermissionsBoundaryRequest& request);

                /**
                 *从用户组删除用户
                 * @param req RemoveUserFromGroupRequest
                 * @return RemoveUserFromGroupOutcome
                 */
                RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest &request);
                void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request);

                /**
                 *本接口（SetDefaultPolicyVersion）可用于设置生效的策略版本。
                 * @param req SetDefaultPolicyVersionRequest
                 * @return SetDefaultPolicyVersionOutcome
                 */
                SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest &request);
                void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request);

                /**
                 *设置子用户的登录保护和敏感操作校验方式
                 * @param req SetMfaFlagRequest
                 * @return SetMfaFlagOutcome
                 */
                SetMfaFlagOutcome SetMfaFlag(const Model::SetMfaFlagRequest &request);
                void SetMfaFlagAsync(const Model::SetMfaFlagRequest& request, const SetMfaFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetMfaFlagOutcomeCallable SetMfaFlagCallable(const Model::SetMfaFlagRequest& request);

                /**
                 *本接口（UpdateAssumeRolePolicy）用于修改角色信任策略的策略文档。
                 * @param req UpdateAssumeRolePolicyRequest
                 * @return UpdateAssumeRolePolicyOutcome
                 */
                UpdateAssumeRolePolicyOutcome UpdateAssumeRolePolicy(const Model::UpdateAssumeRolePolicyRequest &request);
                void UpdateAssumeRolePolicyAsync(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAssumeRolePolicyOutcomeCallable UpdateAssumeRolePolicyCallable(const Model::UpdateAssumeRolePolicyRequest& request);

                /**
                 *更新用户组
                 * @param req UpdateGroupRequest
                 * @return UpdateGroupOutcome
                 */
                UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest &request);
                void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request);

                /**
                 *本接口（UpdatePolicy ）可用于更新策略。
如果已存在策略版本，本接口会直接更新策略的默认版本，不会创建新版本，如果不存在任何策略版本，则直接创建一个默认版本。
                 * @param req UpdatePolicyRequest
                 * @return UpdatePolicyOutcome
                 */
                UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest &request);
                void UpdatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePolicyOutcomeCallable UpdatePolicyCallable(const Model::UpdatePolicyRequest& request);

                /**
                 *本接口（UpdateRoleConsoleLogin）用于修改角色是否可登录。
                 * @param req UpdateRoleConsoleLoginRequest
                 * @return UpdateRoleConsoleLoginOutcome
                 */
                UpdateRoleConsoleLoginOutcome UpdateRoleConsoleLogin(const Model::UpdateRoleConsoleLoginRequest &request);
                void UpdateRoleConsoleLoginAsync(const Model::UpdateRoleConsoleLoginRequest& request, const UpdateRoleConsoleLoginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRoleConsoleLoginOutcomeCallable UpdateRoleConsoleLoginCallable(const Model::UpdateRoleConsoleLoginRequest& request);

                /**
                 *本接口（UpdateRoleDescription）用于修改角色的描述信息。
                 * @param req UpdateRoleDescriptionRequest
                 * @return UpdateRoleDescriptionOutcome
                 */
                UpdateRoleDescriptionOutcome UpdateRoleDescription(const Model::UpdateRoleDescriptionRequest &request);
                void UpdateRoleDescriptionAsync(const Model::UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRoleDescriptionOutcomeCallable UpdateRoleDescriptionCallable(const Model::UpdateRoleDescriptionRequest& request);

                /**
                 *更新SAML身份提供商信息
                 * @param req UpdateSAMLProviderRequest
                 * @return UpdateSAMLProviderOutcome
                 */
                UpdateSAMLProviderOutcome UpdateSAMLProvider(const Model::UpdateSAMLProviderRequest &request);
                void UpdateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSAMLProviderOutcomeCallable UpdateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request);

                /**
                 *更新子用户
                 * @param req UpdateUserRequest
                 * @return UpdateUserOutcome
                 */
                UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest &request);
                void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_CAMCLIENT_H_
