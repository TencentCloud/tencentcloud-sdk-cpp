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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/organization/v20210331/model/AcceptJoinShareUnitInvitationRequest.h>
#include <tencentcloud/organization/v20210331/model/AcceptJoinShareUnitInvitationResponse.h>
#include <tencentcloud/organization/v20210331/model/AddExternalSAMLIdPCertificateRequest.h>
#include <tencentcloud/organization/v20210331/model/AddExternalSAMLIdPCertificateResponse.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationMemberEmailRequest.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationMemberEmailResponse.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/AddPermissionPolicyToRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/AddPermissionPolicyToRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitRequest.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitResponse.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitResourcesRequest.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitResourcesResponse.h>
#include <tencentcloud/organization/v20210331/model/AddUserToGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/AddUserToGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/AttachPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/AttachPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationPolicySubAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationPolicySubAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationPolicySubAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationPolicySubAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CheckAccountDeleteRequest.h>
#include <tencentcloud/organization/v20210331/model/CheckAccountDeleteResponse.h>
#include <tencentcloud/organization/v20210331/model/ClearExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/organization/v20210331/model/ClearExternalSAMLIdentityProviderResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreatePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreatePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleAssignmentRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleAssignmentResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateSCIMCredentialRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateSCIMCredentialResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateUserRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateUserResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrgServiceAssignRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrgServiceAssignResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/DeletePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DeletePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleAssignmentRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleAssignmentResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteSCIMCredentialRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteSCIMCredentialResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResourcesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResourcesResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeEffectivePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeEffectivePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeIdentityCenterRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeIdentityCenterResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationAuthNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationAuthNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMonthRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMonthResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByProductRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByProductResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthAccountsRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthAccountsResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberEmailBindRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberEmailBindResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberPoliciesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberPoliciesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyConfigRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyConfigResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareAreasRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareAreasResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitResourcesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitResourcesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitsRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitsResponse.h>
#include <tencentcloud/organization/v20210331/model/DetachPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DetachPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DisablePolicyTypeRequest.h>
#include <tencentcloud/organization/v20210331/model/DisablePolicyTypeResponse.h>
#include <tencentcloud/organization/v20210331/model/DismantleRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/DismantleRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/EnablePolicyTypeRequest.h>
#include <tencentcloud/organization/v20210331/model/EnablePolicyTypeResponse.h>
#include <tencentcloud/organization/v20210331/model/GetExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/organization/v20210331/model/GetExternalSAMLIdentityProviderResponse.h>
#include <tencentcloud/organization/v20210331/model/GetGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/GetGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/GetProvisioningTaskStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/GetProvisioningTaskStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/GetRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/GetRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/GetSCIMSynchronizationStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/GetSCIMSynchronizationStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/GetTaskStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/GetTaskStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/GetUserRequest.h>
#include <tencentcloud/organization/v20210331/model/GetUserResponse.h>
#include <tencentcloud/organization/v20210331/model/GetUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/GetUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/GetZoneSAMLServiceProviderInfoRequest.h>
#include <tencentcloud/organization/v20210331/model/GetZoneSAMLServiceProviderInfoResponse.h>
#include <tencentcloud/organization/v20210331/model/GetZoneStatisticsRequest.h>
#include <tencentcloud/organization/v20210331/model/GetZoneStatisticsResponse.h>
#include <tencentcloud/organization/v20210331/model/InviteOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/InviteOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/ListExternalSAMLIdPCertificatesRequest.h>
#include <tencentcloud/organization/v20210331/model/ListExternalSAMLIdPCertificatesResponse.h>
#include <tencentcloud/organization/v20210331/model/ListGroupMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/ListGroupMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/ListGroupsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListGroupsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListJoinedGroupsForUserRequest.h>
#include <tencentcloud/organization/v20210331/model/ListJoinedGroupsForUserResponse.h>
#include <tencentcloud/organization/v20210331/model/ListNonCompliantResourceRequest.h>
#include <tencentcloud/organization/v20210331/model/ListNonCompliantResourceResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrgServiceAssignMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrgServiceAssignMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationServiceRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationServiceResponse.h>
#include <tencentcloud/organization/v20210331/model/ListPermissionPoliciesInRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/ListPermissionPoliciesInRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesRequest.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesResponse.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesForTargetRequest.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesForTargetResponse.h>
#include <tencentcloud/organization/v20210331/model/ListRoleAssignmentsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListRoleAssignmentsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationProvisioningsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationProvisioningsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListSCIMCredentialsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListSCIMCredentialsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListTargetsForPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/ListTargetsForPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/ListTasksRequest.h>
#include <tencentcloud/organization/v20210331/model/ListTasksResponse.h>
#include <tencentcloud/organization/v20210331/model/ListUserSyncProvisioningsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListUserSyncProvisioningsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListUsersRequest.h>
#include <tencentcloud/organization/v20210331/model/ListUsersResponse.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/OpenIdentityCenterRequest.h>
#include <tencentcloud/organization/v20210331/model/OpenIdentityCenterResponse.h>
#include <tencentcloud/organization/v20210331/model/ProvisionRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/ProvisionRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/QuitOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/QuitOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/RejectJoinShareUnitInvitationRequest.h>
#include <tencentcloud/organization/v20210331/model/RejectJoinShareUnitInvitationResponse.h>
#include <tencentcloud/organization/v20210331/model/RemoveExternalSAMLIdPCertificateRequest.h>
#include <tencentcloud/organization/v20210331/model/RemoveExternalSAMLIdPCertificateResponse.h>
#include <tencentcloud/organization/v20210331/model/RemovePermissionPolicyFromRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/RemovePermissionPolicyFromRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/RemoveUserFromGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/RemoveUserFromGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/SendOrgMemberAccountBindEmailRequest.h>
#include <tencentcloud/organization/v20210331/model/SendOrgMemberAccountBindEmailResponse.h>
#include <tencentcloud/organization/v20210331/model/SetExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/organization/v20210331/model/SetExternalSAMLIdentityProviderResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateCustomPolicyForRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateCustomPolicyForRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberEmailBindRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberEmailBindResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdatePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdatePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMCredentialStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMCredentialStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMSynchronizationStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMSynchronizationStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateShareUnitRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateShareUnitResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateZoneRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateZoneResponse.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            class OrganizationClient : public AbstractClient
            {
            public:
                OrganizationClient(const Credential &credential, const std::string &region);
                OrganizationClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptJoinShareUnitInvitationResponse> AcceptJoinShareUnitInvitationOutcome;
                typedef std::future<AcceptJoinShareUnitInvitationOutcome> AcceptJoinShareUnitInvitationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AcceptJoinShareUnitInvitationRequest&, AcceptJoinShareUnitInvitationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptJoinShareUnitInvitationAsyncHandler;
                typedef Outcome<Core::Error, Model::AddExternalSAMLIdPCertificateResponse> AddExternalSAMLIdPCertificateOutcome;
                typedef std::future<AddExternalSAMLIdPCertificateOutcome> AddExternalSAMLIdPCertificateOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddExternalSAMLIdPCertificateRequest&, AddExternalSAMLIdPCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddExternalSAMLIdPCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOrganizationMemberEmailResponse> AddOrganizationMemberEmailOutcome;
                typedef std::future<AddOrganizationMemberEmailOutcome> AddOrganizationMemberEmailOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationMemberEmailRequest&, AddOrganizationMemberEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationMemberEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOrganizationNodeResponse> AddOrganizationNodeOutcome;
                typedef std::future<AddOrganizationNodeOutcome> AddOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationNodeRequest&, AddOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::AddPermissionPolicyToRoleConfigurationResponse> AddPermissionPolicyToRoleConfigurationOutcome;
                typedef std::future<AddPermissionPolicyToRoleConfigurationOutcome> AddPermissionPolicyToRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddPermissionPolicyToRoleConfigurationRequest&, AddPermissionPolicyToRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddPermissionPolicyToRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::AddShareUnitResponse> AddShareUnitOutcome;
                typedef std::future<AddShareUnitOutcome> AddShareUnitOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddShareUnitRequest&, AddShareUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShareUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::AddShareUnitMembersResponse> AddShareUnitMembersOutcome;
                typedef std::future<AddShareUnitMembersOutcome> AddShareUnitMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddShareUnitMembersRequest&, AddShareUnitMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShareUnitMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::AddShareUnitResourcesResponse> AddShareUnitResourcesOutcome;
                typedef std::future<AddShareUnitResourcesOutcome> AddShareUnitResourcesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddShareUnitResourcesRequest&, AddShareUnitResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShareUnitResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserToGroupResponse> AddUserToGroupOutcome;
                typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddUserToGroupRequest&, AddUserToGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachPolicyResponse> AttachPolicyOutcome;
                typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AttachPolicyRequest&, AttachPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindOrganizationMemberAuthAccountResponse> BindOrganizationMemberAuthAccountOutcome;
                typedef std::future<BindOrganizationMemberAuthAccountOutcome> BindOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationMemberAuthAccountRequest&, BindOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::BindOrganizationPolicySubAccountResponse> BindOrganizationPolicySubAccountOutcome;
                typedef std::future<BindOrganizationPolicySubAccountOutcome> BindOrganizationPolicySubAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationPolicySubAccountRequest&, BindOrganizationPolicySubAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationPolicySubAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationMemberAuthAccountResponse> CancelOrganizationMemberAuthAccountOutcome;
                typedef std::future<CancelOrganizationMemberAuthAccountOutcome> CancelOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationMemberAuthAccountRequest&, CancelOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationPolicySubAccountResponse> CancelOrganizationPolicySubAccountOutcome;
                typedef std::future<CancelOrganizationPolicySubAccountOutcome> CancelOrganizationPolicySubAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationPolicySubAccountRequest&, CancelOrganizationPolicySubAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationPolicySubAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAccountDeleteResponse> CheckAccountDeleteOutcome;
                typedef std::future<CheckAccountDeleteOutcome> CheckAccountDeleteOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CheckAccountDeleteRequest&, CheckAccountDeleteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountDeleteAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearExternalSAMLIdentityProviderResponse> ClearExternalSAMLIdentityProviderOutcome;
                typedef std::future<ClearExternalSAMLIdentityProviderOutcome> ClearExternalSAMLIdentityProviderOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ClearExternalSAMLIdentityProviderRequest&, ClearExternalSAMLIdentityProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearExternalSAMLIdentityProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrgServiceAssignResponse> CreateOrgServiceAssignOutcome;
                typedef std::future<CreateOrgServiceAssignOutcome> CreateOrgServiceAssignOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrgServiceAssignRequest&, CreateOrgServiceAssignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrgServiceAssignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationResponse> CreateOrganizationOutcome;
                typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationRequest&, CreateOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationIdentityResponse> CreateOrganizationIdentityOutcome;
                typedef std::future<CreateOrganizationIdentityOutcome> CreateOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationIdentityRequest&, CreateOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberResponse> CreateOrganizationMemberOutcome;
                typedef std::future<CreateOrganizationMemberOutcome> CreateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberRequest&, CreateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberAuthIdentityResponse> CreateOrganizationMemberAuthIdentityOutcome;
                typedef std::future<CreateOrganizationMemberAuthIdentityOutcome> CreateOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberAuthIdentityRequest&, CreateOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberPolicyResponse> CreateOrganizationMemberPolicyOutcome;
                typedef std::future<CreateOrganizationMemberPolicyOutcome> CreateOrganizationMemberPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberPolicyRequest&, CreateOrganizationMemberPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMembersPolicyResponse> CreateOrganizationMembersPolicyOutcome;
                typedef std::future<CreateOrganizationMembersPolicyOutcome> CreateOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMembersPolicyRequest&, CreateOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyResponse> CreatePolicyOutcome;
                typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreatePolicyRequest&, CreatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleAssignmentResponse> CreateRoleAssignmentOutcome;
                typedef std::future<CreateRoleAssignmentOutcome> CreateRoleAssignmentOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateRoleAssignmentRequest&, CreateRoleAssignmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAssignmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleConfigurationResponse> CreateRoleConfigurationOutcome;
                typedef std::future<CreateRoleConfigurationOutcome> CreateRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateRoleConfigurationRequest&, CreateRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSCIMCredentialResponse> CreateSCIMCredentialOutcome;
                typedef std::future<CreateSCIMCredentialOutcome> CreateSCIMCredentialOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateSCIMCredentialRequest&, CreateSCIMCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSCIMCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserSyncProvisioningResponse> CreateUserSyncProvisioningOutcome;
                typedef std::future<CreateUserSyncProvisioningOutcome> CreateUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateUserSyncProvisioningRequest&, CreateUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrgServiceAssignResponse> DeleteOrgServiceAssignOutcome;
                typedef std::future<DeleteOrgServiceAssignOutcome> DeleteOrgServiceAssignOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrgServiceAssignRequest&, DeleteOrgServiceAssignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrgServiceAssignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationResponse> DeleteOrganizationOutcome;
                typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationRequest&, DeleteOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationIdentityResponse> DeleteOrganizationIdentityOutcome;
                typedef std::future<DeleteOrganizationIdentityOutcome> DeleteOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationIdentityRequest&, DeleteOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMemberAuthIdentityResponse> DeleteOrganizationMemberAuthIdentityOutcome;
                typedef std::future<DeleteOrganizationMemberAuthIdentityOutcome> DeleteOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMemberAuthIdentityRequest&, DeleteOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersResponse> DeleteOrganizationMembersOutcome;
                typedef std::future<DeleteOrganizationMembersOutcome> DeleteOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersRequest&, DeleteOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersPolicyResponse> DeleteOrganizationMembersPolicyOutcome;
                typedef std::future<DeleteOrganizationMembersPolicyOutcome> DeleteOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersPolicyRequest&, DeleteOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationNodesResponse> DeleteOrganizationNodesOutcome;
                typedef std::future<DeleteOrganizationNodesOutcome> DeleteOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationNodesRequest&, DeleteOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyResponse> DeletePolicyOutcome;
                typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeletePolicyRequest&, DeletePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleAssignmentResponse> DeleteRoleAssignmentOutcome;
                typedef std::future<DeleteRoleAssignmentOutcome> DeleteRoleAssignmentOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteRoleAssignmentRequest&, DeleteRoleAssignmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAssignmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleConfigurationResponse> DeleteRoleConfigurationOutcome;
                typedef std::future<DeleteRoleConfigurationOutcome> DeleteRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteRoleConfigurationRequest&, DeleteRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSCIMCredentialResponse> DeleteSCIMCredentialOutcome;
                typedef std::future<DeleteSCIMCredentialOutcome> DeleteSCIMCredentialOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteSCIMCredentialRequest&, DeleteSCIMCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSCIMCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareUnitResponse> DeleteShareUnitOutcome;
                typedef std::future<DeleteShareUnitOutcome> DeleteShareUnitOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteShareUnitRequest&, DeleteShareUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareUnitMembersResponse> DeleteShareUnitMembersOutcome;
                typedef std::future<DeleteShareUnitMembersOutcome> DeleteShareUnitMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteShareUnitMembersRequest&, DeleteShareUnitMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareUnitMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareUnitResourcesResponse> DeleteShareUnitResourcesOutcome;
                typedef std::future<DeleteShareUnitResourcesOutcome> DeleteShareUnitResourcesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteShareUnitResourcesRequest&, DeleteShareUnitResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareUnitResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserSyncProvisioningResponse> DeleteUserSyncProvisioningOutcome;
                typedef std::future<DeleteUserSyncProvisioningOutcome> DeleteUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteUserSyncProvisioningRequest&, DeleteUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEffectivePolicyResponse> DescribeEffectivePolicyOutcome;
                typedef std::future<DescribeEffectivePolicyOutcome> DescribeEffectivePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeEffectivePolicyRequest&, DescribeEffectivePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEffectivePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentityCenterResponse> DescribeIdentityCenterOutcome;
                typedef std::future<DescribeIdentityCenterOutcome> DescribeIdentityCenterOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeIdentityCenterRequest&, DescribeIdentityCenterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentityCenterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationResponse> DescribeOrganizationOutcome;
                typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationRequest&, DescribeOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationAuthNodeResponse> DescribeOrganizationAuthNodeOutcome;
                typedef std::future<DescribeOrganizationAuthNodeOutcome> DescribeOrganizationAuthNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationAuthNodeRequest&, DescribeOrganizationAuthNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAuthNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationFinancialByMemberResponse> DescribeOrganizationFinancialByMemberOutcome;
                typedef std::future<DescribeOrganizationFinancialByMemberOutcome> DescribeOrganizationFinancialByMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationFinancialByMemberRequest&, DescribeOrganizationFinancialByMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationFinancialByMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationFinancialByMonthResponse> DescribeOrganizationFinancialByMonthOutcome;
                typedef std::future<DescribeOrganizationFinancialByMonthOutcome> DescribeOrganizationFinancialByMonthOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationFinancialByMonthRequest&, DescribeOrganizationFinancialByMonthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationFinancialByMonthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationFinancialByProductResponse> DescribeOrganizationFinancialByProductOutcome;
                typedef std::future<DescribeOrganizationFinancialByProductOutcome> DescribeOrganizationFinancialByProductOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationFinancialByProductRequest&, DescribeOrganizationFinancialByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationFinancialByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberAuthAccountsResponse> DescribeOrganizationMemberAuthAccountsOutcome;
                typedef std::future<DescribeOrganizationMemberAuthAccountsOutcome> DescribeOrganizationMemberAuthAccountsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberAuthAccountsRequest&, DescribeOrganizationMemberAuthAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberAuthAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberAuthIdentitiesResponse> DescribeOrganizationMemberAuthIdentitiesOutcome;
                typedef std::future<DescribeOrganizationMemberAuthIdentitiesOutcome> DescribeOrganizationMemberAuthIdentitiesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberAuthIdentitiesRequest&, DescribeOrganizationMemberAuthIdentitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberAuthIdentitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberEmailBindResponse> DescribeOrganizationMemberEmailBindOutcome;
                typedef std::future<DescribeOrganizationMemberEmailBindOutcome> DescribeOrganizationMemberEmailBindOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberEmailBindRequest&, DescribeOrganizationMemberEmailBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberEmailBindAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberPoliciesResponse> DescribeOrganizationMemberPoliciesOutcome;
                typedef std::future<DescribeOrganizationMemberPoliciesOutcome> DescribeOrganizationMemberPoliciesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberPoliciesRequest&, DescribeOrganizationMemberPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMembersResponse> DescribeOrganizationMembersOutcome;
                typedef std::future<DescribeOrganizationMembersOutcome> DescribeOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMembersRequest&, DescribeOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationNodesResponse> DescribeOrganizationNodesOutcome;
                typedef std::future<DescribeOrganizationNodesOutcome> DescribeOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationNodesRequest&, DescribeOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyResponse> DescribePolicyOutcome;
                typedef std::future<DescribePolicyOutcome> DescribePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribePolicyRequest&, DescribePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyConfigResponse> DescribePolicyConfigOutcome;
                typedef std::future<DescribePolicyConfigOutcome> DescribePolicyConfigOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribePolicyConfigRequest&, DescribePolicyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareAreasResponse> DescribeShareAreasOutcome;
                typedef std::future<DescribeShareAreasOutcome> DescribeShareAreasOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareAreasRequest&, DescribeShareAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareUnitMembersResponse> DescribeShareUnitMembersOutcome;
                typedef std::future<DescribeShareUnitMembersOutcome> DescribeShareUnitMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareUnitMembersRequest&, DescribeShareUnitMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareUnitMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareUnitResourcesResponse> DescribeShareUnitResourcesOutcome;
                typedef std::future<DescribeShareUnitResourcesOutcome> DescribeShareUnitResourcesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareUnitResourcesRequest&, DescribeShareUnitResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareUnitResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareUnitsResponse> DescribeShareUnitsOutcome;
                typedef std::future<DescribeShareUnitsOutcome> DescribeShareUnitsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareUnitsRequest&, DescribeShareUnitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareUnitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachPolicyResponse> DetachPolicyOutcome;
                typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DetachPolicyRequest&, DetachPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisablePolicyTypeResponse> DisablePolicyTypeOutcome;
                typedef std::future<DisablePolicyTypeOutcome> DisablePolicyTypeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DisablePolicyTypeRequest&, DisablePolicyTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisablePolicyTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DismantleRoleConfigurationResponse> DismantleRoleConfigurationOutcome;
                typedef std::future<DismantleRoleConfigurationOutcome> DismantleRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DismantleRoleConfigurationRequest&, DismantleRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismantleRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::EnablePolicyTypeResponse> EnablePolicyTypeOutcome;
                typedef std::future<EnablePolicyTypeOutcome> EnablePolicyTypeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::EnablePolicyTypeRequest&, EnablePolicyTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnablePolicyTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetExternalSAMLIdentityProviderResponse> GetExternalSAMLIdentityProviderOutcome;
                typedef std::future<GetExternalSAMLIdentityProviderOutcome> GetExternalSAMLIdentityProviderOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetExternalSAMLIdentityProviderRequest&, GetExternalSAMLIdentityProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetExternalSAMLIdentityProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupResponse> GetGroupOutcome;
                typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetGroupRequest&, GetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProvisioningTaskStatusResponse> GetProvisioningTaskStatusOutcome;
                typedef std::future<GetProvisioningTaskStatusOutcome> GetProvisioningTaskStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetProvisioningTaskStatusRequest&, GetProvisioningTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProvisioningTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoleConfigurationResponse> GetRoleConfigurationOutcome;
                typedef std::future<GetRoleConfigurationOutcome> GetRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetRoleConfigurationRequest&, GetRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSCIMSynchronizationStatusResponse> GetSCIMSynchronizationStatusOutcome;
                typedef std::future<GetSCIMSynchronizationStatusOutcome> GetSCIMSynchronizationStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetSCIMSynchronizationStatusRequest&, GetSCIMSynchronizationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSCIMSynchronizationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskStatusResponse> GetTaskStatusOutcome;
                typedef std::future<GetTaskStatusOutcome> GetTaskStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetTaskStatusRequest&, GetTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserResponse> GetUserOutcome;
                typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetUserRequest&, GetUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserSyncProvisioningResponse> GetUserSyncProvisioningOutcome;
                typedef std::future<GetUserSyncProvisioningOutcome> GetUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetUserSyncProvisioningRequest&, GetUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::GetZoneSAMLServiceProviderInfoResponse> GetZoneSAMLServiceProviderInfoOutcome;
                typedef std::future<GetZoneSAMLServiceProviderInfoOutcome> GetZoneSAMLServiceProviderInfoOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetZoneSAMLServiceProviderInfoRequest&, GetZoneSAMLServiceProviderInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetZoneSAMLServiceProviderInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetZoneStatisticsResponse> GetZoneStatisticsOutcome;
                typedef std::future<GetZoneStatisticsOutcome> GetZoneStatisticsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetZoneStatisticsRequest&, GetZoneStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetZoneStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::InviteOrganizationMemberResponse> InviteOrganizationMemberOutcome;
                typedef std::future<InviteOrganizationMemberOutcome> InviteOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::InviteOrganizationMemberRequest&, InviteOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InviteOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ListExternalSAMLIdPCertificatesResponse> ListExternalSAMLIdPCertificatesOutcome;
                typedef std::future<ListExternalSAMLIdPCertificatesOutcome> ListExternalSAMLIdPCertificatesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListExternalSAMLIdPCertificatesRequest&, ListExternalSAMLIdPCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListExternalSAMLIdPCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupMembersResponse> ListGroupMembersOutcome;
                typedef std::future<ListGroupMembersOutcome> ListGroupMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListGroupMembersRequest&, ListGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupsResponse> ListGroupsOutcome;
                typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListGroupsRequest&, ListGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListJoinedGroupsForUserResponse> ListJoinedGroupsForUserOutcome;
                typedef std::future<ListJoinedGroupsForUserOutcome> ListJoinedGroupsForUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListJoinedGroupsForUserRequest&, ListJoinedGroupsForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListJoinedGroupsForUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListNonCompliantResourceResponse> ListNonCompliantResourceOutcome;
                typedef std::future<ListNonCompliantResourceOutcome> ListNonCompliantResourceOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListNonCompliantResourceRequest&, ListNonCompliantResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListNonCompliantResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrgServiceAssignMemberResponse> ListOrgServiceAssignMemberOutcome;
                typedef std::future<ListOrgServiceAssignMemberOutcome> ListOrgServiceAssignMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrgServiceAssignMemberRequest&, ListOrgServiceAssignMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrgServiceAssignMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationIdentityResponse> ListOrganizationIdentityOutcome;
                typedef std::future<ListOrganizationIdentityOutcome> ListOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationIdentityRequest&, ListOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationServiceResponse> ListOrganizationServiceOutcome;
                typedef std::future<ListOrganizationServiceOutcome> ListOrganizationServiceOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationServiceRequest&, ListOrganizationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPermissionPoliciesInRoleConfigurationResponse> ListPermissionPoliciesInRoleConfigurationOutcome;
                typedef std::future<ListPermissionPoliciesInRoleConfigurationOutcome> ListPermissionPoliciesInRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListPermissionPoliciesInRoleConfigurationRequest&, ListPermissionPoliciesInRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPermissionPoliciesInRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesResponse> ListPoliciesOutcome;
                typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListPoliciesRequest&, ListPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesForTargetResponse> ListPoliciesForTargetOutcome;
                typedef std::future<ListPoliciesForTargetOutcome> ListPoliciesForTargetOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListPoliciesForTargetRequest&, ListPoliciesForTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesForTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRoleAssignmentsResponse> ListRoleAssignmentsOutcome;
                typedef std::future<ListRoleAssignmentsOutcome> ListRoleAssignmentsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListRoleAssignmentsRequest&, ListRoleAssignmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleAssignmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRoleConfigurationProvisioningsResponse> ListRoleConfigurationProvisioningsOutcome;
                typedef std::future<ListRoleConfigurationProvisioningsOutcome> ListRoleConfigurationProvisioningsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListRoleConfigurationProvisioningsRequest&, ListRoleConfigurationProvisioningsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleConfigurationProvisioningsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRoleConfigurationsResponse> ListRoleConfigurationsOutcome;
                typedef std::future<ListRoleConfigurationsOutcome> ListRoleConfigurationsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListRoleConfigurationsRequest&, ListRoleConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleConfigurationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSCIMCredentialsResponse> ListSCIMCredentialsOutcome;
                typedef std::future<ListSCIMCredentialsOutcome> ListSCIMCredentialsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListSCIMCredentialsRequest&, ListSCIMCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSCIMCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTargetsForPolicyResponse> ListTargetsForPolicyOutcome;
                typedef std::future<ListTargetsForPolicyOutcome> ListTargetsForPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListTargetsForPolicyRequest&, ListTargetsForPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTargetsForPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTasksResponse> ListTasksOutcome;
                typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListTasksRequest&, ListTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUserSyncProvisioningsResponse> ListUserSyncProvisioningsOutcome;
                typedef std::future<ListUserSyncProvisioningsOutcome> ListUserSyncProvisioningsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListUserSyncProvisioningsRequest&, ListUserSyncProvisioningsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserSyncProvisioningsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersResponse> ListUsersOutcome;
                typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListUsersRequest&, ListUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveOrganizationNodeMembersResponse> MoveOrganizationNodeMembersOutcome;
                typedef std::future<MoveOrganizationNodeMembersOutcome> MoveOrganizationNodeMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::MoveOrganizationNodeMembersRequest&, MoveOrganizationNodeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrganizationNodeMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenIdentityCenterResponse> OpenIdentityCenterOutcome;
                typedef std::future<OpenIdentityCenterOutcome> OpenIdentityCenterOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::OpenIdentityCenterRequest&, OpenIdentityCenterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenIdentityCenterAsyncHandler;
                typedef Outcome<Core::Error, Model::ProvisionRoleConfigurationResponse> ProvisionRoleConfigurationOutcome;
                typedef std::future<ProvisionRoleConfigurationOutcome> ProvisionRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ProvisionRoleConfigurationRequest&, ProvisionRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProvisionRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::QuitOrganizationResponse> QuitOrganizationOutcome;
                typedef std::future<QuitOrganizationOutcome> QuitOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::QuitOrganizationRequest&, QuitOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuitOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectJoinShareUnitInvitationResponse> RejectJoinShareUnitInvitationOutcome;
                typedef std::future<RejectJoinShareUnitInvitationOutcome> RejectJoinShareUnitInvitationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RejectJoinShareUnitInvitationRequest&, RejectJoinShareUnitInvitationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectJoinShareUnitInvitationAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveExternalSAMLIdPCertificateResponse> RemoveExternalSAMLIdPCertificateOutcome;
                typedef std::future<RemoveExternalSAMLIdPCertificateOutcome> RemoveExternalSAMLIdPCertificateOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RemoveExternalSAMLIdPCertificateRequest&, RemoveExternalSAMLIdPCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveExternalSAMLIdPCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::RemovePermissionPolicyFromRoleConfigurationResponse> RemovePermissionPolicyFromRoleConfigurationOutcome;
                typedef std::future<RemovePermissionPolicyFromRoleConfigurationOutcome> RemovePermissionPolicyFromRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RemovePermissionPolicyFromRoleConfigurationRequest&, RemovePermissionPolicyFromRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemovePermissionPolicyFromRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserFromGroupResponse> RemoveUserFromGroupOutcome;
                typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RemoveUserFromGroupRequest&, RemoveUserFromGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SendOrgMemberAccountBindEmailResponse> SendOrgMemberAccountBindEmailOutcome;
                typedef std::future<SendOrgMemberAccountBindEmailOutcome> SendOrgMemberAccountBindEmailOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::SendOrgMemberAccountBindEmailRequest&, SendOrgMemberAccountBindEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendOrgMemberAccountBindEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::SetExternalSAMLIdentityProviderResponse> SetExternalSAMLIdentityProviderOutcome;
                typedef std::future<SetExternalSAMLIdentityProviderOutcome> SetExternalSAMLIdentityProviderOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::SetExternalSAMLIdentityProviderRequest&, SetExternalSAMLIdentityProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetExternalSAMLIdentityProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCustomPolicyForRoleConfigurationResponse> UpdateCustomPolicyForRoleConfigurationOutcome;
                typedef std::future<UpdateCustomPolicyForRoleConfigurationOutcome> UpdateCustomPolicyForRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateCustomPolicyForRoleConfigurationRequest&, UpdateCustomPolicyForRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomPolicyForRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGroupResponse> UpdateGroupOutcome;
                typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateGroupRequest&, UpdateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationIdentityResponse> UpdateOrganizationIdentityOutcome;
                typedef std::future<UpdateOrganizationIdentityOutcome> UpdateOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationIdentityRequest&, UpdateOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberResponse> UpdateOrganizationMemberOutcome;
                typedef std::future<UpdateOrganizationMemberOutcome> UpdateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberRequest&, UpdateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberEmailBindResponse> UpdateOrganizationMemberEmailBindOutcome;
                typedef std::future<UpdateOrganizationMemberEmailBindOutcome> UpdateOrganizationMemberEmailBindOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberEmailBindRequest&, UpdateOrganizationMemberEmailBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberEmailBindAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMembersPolicyResponse> UpdateOrganizationMembersPolicyOutcome;
                typedef std::future<UpdateOrganizationMembersPolicyOutcome> UpdateOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMembersPolicyRequest&, UpdateOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationNodeResponse> UpdateOrganizationNodeOutcome;
                typedef std::future<UpdateOrganizationNodeOutcome> UpdateOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationNodeRequest&, UpdateOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePolicyResponse> UpdatePolicyOutcome;
                typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdatePolicyRequest&, UpdatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRoleConfigurationResponse> UpdateRoleConfigurationOutcome;
                typedef std::future<UpdateRoleConfigurationOutcome> UpdateRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateRoleConfigurationRequest&, UpdateRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSCIMCredentialStatusResponse> UpdateSCIMCredentialStatusOutcome;
                typedef std::future<UpdateSCIMCredentialStatusOutcome> UpdateSCIMCredentialStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateSCIMCredentialStatusRequest&, UpdateSCIMCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSCIMCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSCIMSynchronizationStatusResponse> UpdateSCIMSynchronizationStatusOutcome;
                typedef std::future<UpdateSCIMSynchronizationStatusOutcome> UpdateSCIMSynchronizationStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateSCIMSynchronizationStatusRequest&, UpdateSCIMSynchronizationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSCIMSynchronizationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateShareUnitResponse> UpdateShareUnitOutcome;
                typedef std::future<UpdateShareUnitOutcome> UpdateShareUnitOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateShareUnitRequest&, UpdateShareUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateShareUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserResponse> UpdateUserOutcome;
                typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateUserRequest&, UpdateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserStatusResponse> UpdateUserStatusOutcome;
                typedef std::future<UpdateUserStatusOutcome> UpdateUserStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateUserStatusRequest&, UpdateUserStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserSyncProvisioningResponse> UpdateUserSyncProvisioningOutcome;
                typedef std::future<UpdateUserSyncProvisioningOutcome> UpdateUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateUserSyncProvisioningRequest&, UpdateUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateZoneResponse> UpdateZoneOutcome;
                typedef std::future<UpdateZoneOutcome> UpdateZoneOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateZoneRequest&, UpdateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateZoneAsyncHandler;



                /**
                 *接受加入共享单元邀请。
                 * @param req AcceptJoinShareUnitInvitationRequest
                 * @return AcceptJoinShareUnitInvitationOutcome
                 */
                AcceptJoinShareUnitInvitationOutcome AcceptJoinShareUnitInvitation(const Model::AcceptJoinShareUnitInvitationRequest &request);
                void AcceptJoinShareUnitInvitationAsync(const Model::AcceptJoinShareUnitInvitationRequest& request, const AcceptJoinShareUnitInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptJoinShareUnitInvitationOutcomeCallable AcceptJoinShareUnitInvitationCallable(const Model::AcceptJoinShareUnitInvitationRequest& request);

                /**
                 *添加SAML签名证书
                 * @param req AddExternalSAMLIdPCertificateRequest
                 * @return AddExternalSAMLIdPCertificateOutcome
                 */
                AddExternalSAMLIdPCertificateOutcome AddExternalSAMLIdPCertificate(const Model::AddExternalSAMLIdPCertificateRequest &request);
                void AddExternalSAMLIdPCertificateAsync(const Model::AddExternalSAMLIdPCertificateRequest& request, const AddExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddExternalSAMLIdPCertificateOutcomeCallable AddExternalSAMLIdPCertificateCallable(const Model::AddExternalSAMLIdPCertificateRequest& request);

                /**
                 *添加组织成员邮箱
                 * @param req AddOrganizationMemberEmailRequest
                 * @return AddOrganizationMemberEmailOutcome
                 */
                AddOrganizationMemberEmailOutcome AddOrganizationMemberEmail(const Model::AddOrganizationMemberEmailRequest &request);
                void AddOrganizationMemberEmailAsync(const Model::AddOrganizationMemberEmailRequest& request, const AddOrganizationMemberEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationMemberEmailOutcomeCallable AddOrganizationMemberEmailCallable(const Model::AddOrganizationMemberEmailRequest& request);

                /**
                 *添加企业组织节点
                 * @param req AddOrganizationNodeRequest
                 * @return AddOrganizationNodeOutcome
                 */
                AddOrganizationNodeOutcome AddOrganizationNode(const Model::AddOrganizationNodeRequest &request);
                void AddOrganizationNodeAsync(const Model::AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationNodeOutcomeCallable AddOrganizationNodeCallable(const Model::AddOrganizationNodeRequest& request);

                /**
                 *为权限配置添加策略
                 * @param req AddPermissionPolicyToRoleConfigurationRequest
                 * @return AddPermissionPolicyToRoleConfigurationOutcome
                 */
                AddPermissionPolicyToRoleConfigurationOutcome AddPermissionPolicyToRoleConfiguration(const Model::AddPermissionPolicyToRoleConfigurationRequest &request);
                void AddPermissionPolicyToRoleConfigurationAsync(const Model::AddPermissionPolicyToRoleConfigurationRequest& request, const AddPermissionPolicyToRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddPermissionPolicyToRoleConfigurationOutcomeCallable AddPermissionPolicyToRoleConfigurationCallable(const Model::AddPermissionPolicyToRoleConfigurationRequest& request);

                /**
                 *创建共享单元。
                 * @param req AddShareUnitRequest
                 * @return AddShareUnitOutcome
                 */
                AddShareUnitOutcome AddShareUnit(const Model::AddShareUnitRequest &request);
                void AddShareUnitAsync(const Model::AddShareUnitRequest& request, const AddShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShareUnitOutcomeCallable AddShareUnitCallable(const Model::AddShareUnitRequest& request);

                /**
                 *添加共享单元成员
                 * @param req AddShareUnitMembersRequest
                 * @return AddShareUnitMembersOutcome
                 */
                AddShareUnitMembersOutcome AddShareUnitMembers(const Model::AddShareUnitMembersRequest &request);
                void AddShareUnitMembersAsync(const Model::AddShareUnitMembersRequest& request, const AddShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShareUnitMembersOutcomeCallable AddShareUnitMembersCallable(const Model::AddShareUnitMembersRequest& request);

                /**
                 *添加共享单元资源
                 * @param req AddShareUnitResourcesRequest
                 * @return AddShareUnitResourcesOutcome
                 */
                AddShareUnitResourcesOutcome AddShareUnitResources(const Model::AddShareUnitResourcesRequest &request);
                void AddShareUnitResourcesAsync(const Model::AddShareUnitResourcesRequest& request, const AddShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShareUnitResourcesOutcomeCallable AddShareUnitResourcesCallable(const Model::AddShareUnitResourcesRequest& request);

                /**
                 *为用户组添加用户
                 * @param req AddUserToGroupRequest
                 * @return AddUserToGroupOutcome
                 */
                AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest &request);
                void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request);

                /**
                 *绑定策略
                 * @param req AttachPolicyRequest
                 * @return AttachPolicyOutcome
                 */
                AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest &request);
                void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request);

                /**
                 *绑定组织成员和组织管理员子账号的授权关系
                 * @param req BindOrganizationMemberAuthAccountRequest
                 * @return BindOrganizationMemberAuthAccountOutcome
                 */
                BindOrganizationMemberAuthAccountOutcome BindOrganizationMemberAuthAccount(const Model::BindOrganizationMemberAuthAccountRequest &request);
                void BindOrganizationMemberAuthAccountAsync(const Model::BindOrganizationMemberAuthAccountRequest& request, const BindOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindOrganizationMemberAuthAccountOutcomeCallable BindOrganizationMemberAuthAccountCallable(const Model::BindOrganizationMemberAuthAccountRequest& request);

                /**
                 *绑定成员访问授权策略和组织管理员子账号
                 * @param req BindOrganizationPolicySubAccountRequest
                 * @return BindOrganizationPolicySubAccountOutcome
                 */
                BindOrganizationPolicySubAccountOutcome BindOrganizationPolicySubAccount(const Model::BindOrganizationPolicySubAccountRequest &request);
                void BindOrganizationPolicySubAccountAsync(const Model::BindOrganizationPolicySubAccountRequest& request, const BindOrganizationPolicySubAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindOrganizationPolicySubAccountOutcomeCallable BindOrganizationPolicySubAccountCallable(const Model::BindOrganizationPolicySubAccountRequest& request);

                /**
                 *取消组织成员和组织管理员子账号的授权关系
                 * @param req CancelOrganizationMemberAuthAccountRequest
                 * @return CancelOrganizationMemberAuthAccountOutcome
                 */
                CancelOrganizationMemberAuthAccountOutcome CancelOrganizationMemberAuthAccount(const Model::CancelOrganizationMemberAuthAccountRequest &request);
                void CancelOrganizationMemberAuthAccountAsync(const Model::CancelOrganizationMemberAuthAccountRequest& request, const CancelOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelOrganizationMemberAuthAccountOutcomeCallable CancelOrganizationMemberAuthAccountCallable(const Model::CancelOrganizationMemberAuthAccountRequest& request);

                /**
                 *解绑成员访问授权策略和组织管理员子账号
                 * @param req CancelOrganizationPolicySubAccountRequest
                 * @return CancelOrganizationPolicySubAccountOutcome
                 */
                CancelOrganizationPolicySubAccountOutcome CancelOrganizationPolicySubAccount(const Model::CancelOrganizationPolicySubAccountRequest &request);
                void CancelOrganizationPolicySubAccountAsync(const Model::CancelOrganizationPolicySubAccountRequest& request, const CancelOrganizationPolicySubAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelOrganizationPolicySubAccountOutcomeCallable CancelOrganizationPolicySubAccountCallable(const Model::CancelOrganizationPolicySubAccountRequest& request);

                /**
                 *成员账号删除检查
                 * @param req CheckAccountDeleteRequest
                 * @return CheckAccountDeleteOutcome
                 */
                CheckAccountDeleteOutcome CheckAccountDelete(const Model::CheckAccountDeleteRequest &request);
                void CheckAccountDeleteAsync(const Model::CheckAccountDeleteRequest& request, const CheckAccountDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAccountDeleteOutcomeCallable CheckAccountDeleteCallable(const Model::CheckAccountDeleteRequest& request);

                /**
                 *清空SAML身份提供商配置信息
                 * @param req ClearExternalSAMLIdentityProviderRequest
                 * @return ClearExternalSAMLIdentityProviderOutcome
                 */
                ClearExternalSAMLIdentityProviderOutcome ClearExternalSAMLIdentityProvider(const Model::ClearExternalSAMLIdentityProviderRequest &request);
                void ClearExternalSAMLIdentityProviderAsync(const Model::ClearExternalSAMLIdentityProviderRequest& request, const ClearExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearExternalSAMLIdentityProviderOutcomeCallable ClearExternalSAMLIdentityProviderCallable(const Model::ClearExternalSAMLIdentityProviderRequest& request);

                /**
                 *创建用户组
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *添加集团服务委派管理员
                 * @param req CreateOrgServiceAssignRequest
                 * @return CreateOrgServiceAssignOutcome
                 */
                CreateOrgServiceAssignOutcome CreateOrgServiceAssign(const Model::CreateOrgServiceAssignRequest &request);
                void CreateOrgServiceAssignAsync(const Model::CreateOrgServiceAssignRequest& request, const CreateOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrgServiceAssignOutcomeCallable CreateOrgServiceAssignCallable(const Model::CreateOrgServiceAssignRequest& request);

                /**
                 *创建企业组织
                 * @param req CreateOrganizationRequest
                 * @return CreateOrganizationOutcome
                 */
                CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest &request);
                void CreateOrganizationAsync(const Model::CreateOrganizationRequest& request, const CreateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request);

                /**
                 *添加组织身份
                 * @param req CreateOrganizationIdentityRequest
                 * @return CreateOrganizationIdentityOutcome
                 */
                CreateOrganizationIdentityOutcome CreateOrganizationIdentity(const Model::CreateOrganizationIdentityRequest &request);
                void CreateOrganizationIdentityAsync(const Model::CreateOrganizationIdentityRequest& request, const CreateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationIdentityOutcomeCallable CreateOrganizationIdentityCallable(const Model::CreateOrganizationIdentityRequest& request);

                /**
                 *创建组织成员
                 * @param req CreateOrganizationMemberRequest
                 * @return CreateOrganizationMemberOutcome
                 */
                CreateOrganizationMemberOutcome CreateOrganizationMember(const Model::CreateOrganizationMemberRequest &request);
                void CreateOrganizationMemberAsync(const Model::CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberOutcomeCallable CreateOrganizationMemberCallable(const Model::CreateOrganizationMemberRequest& request);

                /**
                 *添加组织成员访问授权
                 * @param req CreateOrganizationMemberAuthIdentityRequest
                 * @return CreateOrganizationMemberAuthIdentityOutcome
                 */
                CreateOrganizationMemberAuthIdentityOutcome CreateOrganizationMemberAuthIdentity(const Model::CreateOrganizationMemberAuthIdentityRequest &request);
                void CreateOrganizationMemberAuthIdentityAsync(const Model::CreateOrganizationMemberAuthIdentityRequest& request, const CreateOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberAuthIdentityOutcomeCallable CreateOrganizationMemberAuthIdentityCallable(const Model::CreateOrganizationMemberAuthIdentityRequest& request);

                /**
                 *创建组织成员访问授权策略
                 * @param req CreateOrganizationMemberPolicyRequest
                 * @return CreateOrganizationMemberPolicyOutcome
                 */
                CreateOrganizationMemberPolicyOutcome CreateOrganizationMemberPolicy(const Model::CreateOrganizationMemberPolicyRequest &request);
                void CreateOrganizationMemberPolicyAsync(const Model::CreateOrganizationMemberPolicyRequest& request, const CreateOrganizationMemberPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberPolicyOutcomeCallable CreateOrganizationMemberPolicyCallable(const Model::CreateOrganizationMemberPolicyRequest& request);

                /**
                 *创建组织成员访问策略
                 * @param req CreateOrganizationMembersPolicyRequest
                 * @return CreateOrganizationMembersPolicyOutcome
                 */
                CreateOrganizationMembersPolicyOutcome CreateOrganizationMembersPolicy(const Model::CreateOrganizationMembersPolicyRequest &request);
                void CreateOrganizationMembersPolicyAsync(const Model::CreateOrganizationMembersPolicyRequest& request, const CreateOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMembersPolicyOutcomeCallable CreateOrganizationMembersPolicyCallable(const Model::CreateOrganizationMembersPolicyRequest& request);

                /**
                 *创建一个特殊类型的策略，您可以关联到企业组织Root节点、企业部门节点或者企业的成员账号。
                 * @param req CreatePolicyRequest
                 * @return CreatePolicyOutcome
                 */
                CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest &request);
                void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request);

                /**
                 *在成员账号上授权
                 * @param req CreateRoleAssignmentRequest
                 * @return CreateRoleAssignmentOutcome
                 */
                CreateRoleAssignmentOutcome CreateRoleAssignment(const Model::CreateRoleAssignmentRequest &request);
                void CreateRoleAssignmentAsync(const Model::CreateRoleAssignmentRequest& request, const CreateRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleAssignmentOutcomeCallable CreateRoleAssignmentCallable(const Model::CreateRoleAssignmentRequest& request);

                /**
                 *创建权限配置
                 * @param req CreateRoleConfigurationRequest
                 * @return CreateRoleConfigurationOutcome
                 */
                CreateRoleConfigurationOutcome CreateRoleConfiguration(const Model::CreateRoleConfigurationRequest &request);
                void CreateRoleConfigurationAsync(const Model::CreateRoleConfigurationRequest& request, const CreateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleConfigurationOutcomeCallable CreateRoleConfigurationCallable(const Model::CreateRoleConfigurationRequest& request);

                /**
                 *创建SCIM密钥
                 * @param req CreateSCIMCredentialRequest
                 * @return CreateSCIMCredentialOutcome
                 */
                CreateSCIMCredentialOutcome CreateSCIMCredential(const Model::CreateSCIMCredentialRequest &request);
                void CreateSCIMCredentialAsync(const Model::CreateSCIMCredentialRequest& request, const CreateSCIMCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSCIMCredentialOutcomeCallable CreateSCIMCredentialCallable(const Model::CreateSCIMCredentialRequest& request);

                /**
                 *创建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *创建子用户同步任务
                 * @param req CreateUserSyncProvisioningRequest
                 * @return CreateUserSyncProvisioningOutcome
                 */
                CreateUserSyncProvisioningOutcome CreateUserSyncProvisioning(const Model::CreateUserSyncProvisioningRequest &request);
                void CreateUserSyncProvisioningAsync(const Model::CreateUserSyncProvisioningRequest& request, const CreateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserSyncProvisioningOutcomeCallable CreateUserSyncProvisioningCallable(const Model::CreateUserSyncProvisioningRequest& request);

                /**
                 *删除成员账号
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *删除用户组
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *删除集团服务委派管理员
                 * @param req DeleteOrgServiceAssignRequest
                 * @return DeleteOrgServiceAssignOutcome
                 */
                DeleteOrgServiceAssignOutcome DeleteOrgServiceAssign(const Model::DeleteOrgServiceAssignRequest &request);
                void DeleteOrgServiceAssignAsync(const Model::DeleteOrgServiceAssignRequest& request, const DeleteOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrgServiceAssignOutcomeCallable DeleteOrgServiceAssignCallable(const Model::DeleteOrgServiceAssignRequest& request);

                /**
                 *删除企业组织
                 * @param req DeleteOrganizationRequest
                 * @return DeleteOrganizationOutcome
                 */
                DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest &request);
                void DeleteOrganizationAsync(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const Model::DeleteOrganizationRequest& request);

                /**
                 *删除组织身份
                 * @param req DeleteOrganizationIdentityRequest
                 * @return DeleteOrganizationIdentityOutcome
                 */
                DeleteOrganizationIdentityOutcome DeleteOrganizationIdentity(const Model::DeleteOrganizationIdentityRequest &request);
                void DeleteOrganizationIdentityAsync(const Model::DeleteOrganizationIdentityRequest& request, const DeleteOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationIdentityOutcomeCallable DeleteOrganizationIdentityCallable(const Model::DeleteOrganizationIdentityRequest& request);

                /**
                 *删除组织成员访问授权
                 * @param req DeleteOrganizationMemberAuthIdentityRequest
                 * @return DeleteOrganizationMemberAuthIdentityOutcome
                 */
                DeleteOrganizationMemberAuthIdentityOutcome DeleteOrganizationMemberAuthIdentity(const Model::DeleteOrganizationMemberAuthIdentityRequest &request);
                void DeleteOrganizationMemberAuthIdentityAsync(const Model::DeleteOrganizationMemberAuthIdentityRequest& request, const DeleteOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMemberAuthIdentityOutcomeCallable DeleteOrganizationMemberAuthIdentityCallable(const Model::DeleteOrganizationMemberAuthIdentityRequest& request);

                /**
                 *从组织中移除成员账号，不会删除账号。
                 * @param req DeleteOrganizationMembersRequest
                 * @return DeleteOrganizationMembersOutcome
                 */
                DeleteOrganizationMembersOutcome DeleteOrganizationMembers(const Model::DeleteOrganizationMembersRequest &request);
                void DeleteOrganizationMembersAsync(const Model::DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersOutcomeCallable DeleteOrganizationMembersCallable(const Model::DeleteOrganizationMembersRequest& request);

                /**
                 *删除组织成员访问策略
                 * @param req DeleteOrganizationMembersPolicyRequest
                 * @return DeleteOrganizationMembersPolicyOutcome
                 */
                DeleteOrganizationMembersPolicyOutcome DeleteOrganizationMembersPolicy(const Model::DeleteOrganizationMembersPolicyRequest &request);
                void DeleteOrganizationMembersPolicyAsync(const Model::DeleteOrganizationMembersPolicyRequest& request, const DeleteOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersPolicyOutcomeCallable DeleteOrganizationMembersPolicyCallable(const Model::DeleteOrganizationMembersPolicyRequest& request);

                /**
                 *批量删除企业组织节点
                 * @param req DeleteOrganizationNodesRequest
                 * @return DeleteOrganizationNodesOutcome
                 */
                DeleteOrganizationNodesOutcome DeleteOrganizationNodes(const Model::DeleteOrganizationNodesRequest &request);
                void DeleteOrganizationNodesAsync(const Model::DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationNodesOutcomeCallable DeleteOrganizationNodesCallable(const Model::DeleteOrganizationNodesRequest& request);

                /**
                 *删除策略
                 * @param req DeletePolicyRequest
                 * @return DeletePolicyOutcome
                 */
                DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest &request);
                void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request);

                /**
                 *移除成员账号上的授权
                 * @param req DeleteRoleAssignmentRequest
                 * @return DeleteRoleAssignmentOutcome
                 */
                DeleteRoleAssignmentOutcome DeleteRoleAssignment(const Model::DeleteRoleAssignmentRequest &request);
                void DeleteRoleAssignmentAsync(const Model::DeleteRoleAssignmentRequest& request, const DeleteRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleAssignmentOutcomeCallable DeleteRoleAssignmentCallable(const Model::DeleteRoleAssignmentRequest& request);

                /**
                 *删除权限配置信息
                 * @param req DeleteRoleConfigurationRequest
                 * @return DeleteRoleConfigurationOutcome
                 */
                DeleteRoleConfigurationOutcome DeleteRoleConfiguration(const Model::DeleteRoleConfigurationRequest &request);
                void DeleteRoleConfigurationAsync(const Model::DeleteRoleConfigurationRequest& request, const DeleteRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleConfigurationOutcomeCallable DeleteRoleConfigurationCallable(const Model::DeleteRoleConfigurationRequest& request);

                /**
                 *删除SCIM密钥
                 * @param req DeleteSCIMCredentialRequest
                 * @return DeleteSCIMCredentialOutcome
                 */
                DeleteSCIMCredentialOutcome DeleteSCIMCredential(const Model::DeleteSCIMCredentialRequest &request);
                void DeleteSCIMCredentialAsync(const Model::DeleteSCIMCredentialRequest& request, const DeleteSCIMCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSCIMCredentialOutcomeCallable DeleteSCIMCredentialCallable(const Model::DeleteSCIMCredentialRequest& request);

                /**
                 *删除共享单元。
                 * @param req DeleteShareUnitRequest
                 * @return DeleteShareUnitOutcome
                 */
                DeleteShareUnitOutcome DeleteShareUnit(const Model::DeleteShareUnitRequest &request);
                void DeleteShareUnitAsync(const Model::DeleteShareUnitRequest& request, const DeleteShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareUnitOutcomeCallable DeleteShareUnitCallable(const Model::DeleteShareUnitRequest& request);

                /**
                 *删除共享单元成员
                 * @param req DeleteShareUnitMembersRequest
                 * @return DeleteShareUnitMembersOutcome
                 */
                DeleteShareUnitMembersOutcome DeleteShareUnitMembers(const Model::DeleteShareUnitMembersRequest &request);
                void DeleteShareUnitMembersAsync(const Model::DeleteShareUnitMembersRequest& request, const DeleteShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareUnitMembersOutcomeCallable DeleteShareUnitMembersCallable(const Model::DeleteShareUnitMembersRequest& request);

                /**
                 *删除共享单元资源
                 * @param req DeleteShareUnitResourcesRequest
                 * @return DeleteShareUnitResourcesOutcome
                 */
                DeleteShareUnitResourcesOutcome DeleteShareUnitResources(const Model::DeleteShareUnitResourcesRequest &request);
                void DeleteShareUnitResourcesAsync(const Model::DeleteShareUnitResourcesRequest& request, const DeleteShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareUnitResourcesOutcomeCallable DeleteShareUnitResourcesCallable(const Model::DeleteShareUnitResourcesRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *删除子用户同步任务
                 * @param req DeleteUserSyncProvisioningRequest
                 * @return DeleteUserSyncProvisioningOutcome
                 */
                DeleteUserSyncProvisioningOutcome DeleteUserSyncProvisioning(const Model::DeleteUserSyncProvisioningRequest &request);
                void DeleteUserSyncProvisioningAsync(const Model::DeleteUserSyncProvisioningRequest& request, const DeleteUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserSyncProvisioningOutcomeCallable DeleteUserSyncProvisioningCallable(const Model::DeleteUserSyncProvisioningRequest& request);

                /**
                 *查询目标关联的有效策略
                 * @param req DescribeEffectivePolicyRequest
                 * @return DescribeEffectivePolicyOutcome
                 */
                DescribeEffectivePolicyOutcome DescribeEffectivePolicy(const Model::DescribeEffectivePolicyRequest &request);
                void DescribeEffectivePolicyAsync(const Model::DescribeEffectivePolicyRequest& request, const DescribeEffectivePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEffectivePolicyOutcomeCallable DescribeEffectivePolicyCallable(const Model::DescribeEffectivePolicyRequest& request);

                /**
                 *获取集团账号身份中心服务信息
                 * @param req DescribeIdentityCenterRequest
                 * @return DescribeIdentityCenterOutcome
                 */
                DescribeIdentityCenterOutcome DescribeIdentityCenter(const Model::DescribeIdentityCenterRequest &request);
                void DescribeIdentityCenterAsync(const Model::DescribeIdentityCenterRequest& request, const DescribeIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentityCenterOutcomeCallable DescribeIdentityCenterCallable(const Model::DescribeIdentityCenterRequest& request);

                /**
                 *获取企业组织信息
                 * @param req DescribeOrganizationRequest
                 * @return DescribeOrganizationOutcome
                 */
                DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest &request);
                void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request);

                /**
                 *获取已设置管理员的互信主体关系列表
                 * @param req DescribeOrganizationAuthNodeRequest
                 * @return DescribeOrganizationAuthNodeOutcome
                 */
                DescribeOrganizationAuthNodeOutcome DescribeOrganizationAuthNode(const Model::DescribeOrganizationAuthNodeRequest &request);
                void DescribeOrganizationAuthNodeAsync(const Model::DescribeOrganizationAuthNodeRequest& request, const DescribeOrganizationAuthNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationAuthNodeOutcomeCallable DescribeOrganizationAuthNodeCallable(const Model::DescribeOrganizationAuthNodeRequest& request);

                /**
                 *以成员维度获取组织财务信息
                 * @param req DescribeOrganizationFinancialByMemberRequest
                 * @return DescribeOrganizationFinancialByMemberOutcome
                 */
                DescribeOrganizationFinancialByMemberOutcome DescribeOrganizationFinancialByMember(const Model::DescribeOrganizationFinancialByMemberRequest &request);
                void DescribeOrganizationFinancialByMemberAsync(const Model::DescribeOrganizationFinancialByMemberRequest& request, const DescribeOrganizationFinancialByMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationFinancialByMemberOutcomeCallable DescribeOrganizationFinancialByMemberCallable(const Model::DescribeOrganizationFinancialByMemberRequest& request);

                /**
                 *以月维度获取组织财务信息趋势
                 * @param req DescribeOrganizationFinancialByMonthRequest
                 * @return DescribeOrganizationFinancialByMonthOutcome
                 */
                DescribeOrganizationFinancialByMonthOutcome DescribeOrganizationFinancialByMonth(const Model::DescribeOrganizationFinancialByMonthRequest &request);
                void DescribeOrganizationFinancialByMonthAsync(const Model::DescribeOrganizationFinancialByMonthRequest& request, const DescribeOrganizationFinancialByMonthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationFinancialByMonthOutcomeCallable DescribeOrganizationFinancialByMonthCallable(const Model::DescribeOrganizationFinancialByMonthRequest& request);

                /**
                 *以产品维度获取组织财务信息
                 * @param req DescribeOrganizationFinancialByProductRequest
                 * @return DescribeOrganizationFinancialByProductOutcome
                 */
                DescribeOrganizationFinancialByProductOutcome DescribeOrganizationFinancialByProduct(const Model::DescribeOrganizationFinancialByProductRequest &request);
                void DescribeOrganizationFinancialByProductAsync(const Model::DescribeOrganizationFinancialByProductRequest& request, const DescribeOrganizationFinancialByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationFinancialByProductOutcomeCallable DescribeOrganizationFinancialByProductCallable(const Model::DescribeOrganizationFinancialByProductRequest& request);

                /**
                 *获取组织成员被绑定授权关系的子账号列表
                 * @param req DescribeOrganizationMemberAuthAccountsRequest
                 * @return DescribeOrganizationMemberAuthAccountsOutcome
                 */
                DescribeOrganizationMemberAuthAccountsOutcome DescribeOrganizationMemberAuthAccounts(const Model::DescribeOrganizationMemberAuthAccountsRequest &request);
                void DescribeOrganizationMemberAuthAccountsAsync(const Model::DescribeOrganizationMemberAuthAccountsRequest& request, const DescribeOrganizationMemberAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberAuthAccountsOutcomeCallable DescribeOrganizationMemberAuthAccountsCallable(const Model::DescribeOrganizationMemberAuthAccountsRequest& request);

                /**
                 *获取组织成员访问授权列表
                 * @param req DescribeOrganizationMemberAuthIdentitiesRequest
                 * @return DescribeOrganizationMemberAuthIdentitiesOutcome
                 */
                DescribeOrganizationMemberAuthIdentitiesOutcome DescribeOrganizationMemberAuthIdentities(const Model::DescribeOrganizationMemberAuthIdentitiesRequest &request);
                void DescribeOrganizationMemberAuthIdentitiesAsync(const Model::DescribeOrganizationMemberAuthIdentitiesRequest& request, const DescribeOrganizationMemberAuthIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberAuthIdentitiesOutcomeCallable DescribeOrganizationMemberAuthIdentitiesCallable(const Model::DescribeOrganizationMemberAuthIdentitiesRequest& request);

                /**
                 *查询成员邮箱绑定详细信息
                 * @param req DescribeOrganizationMemberEmailBindRequest
                 * @return DescribeOrganizationMemberEmailBindOutcome
                 */
                DescribeOrganizationMemberEmailBindOutcome DescribeOrganizationMemberEmailBind(const Model::DescribeOrganizationMemberEmailBindRequest &request);
                void DescribeOrganizationMemberEmailBindAsync(const Model::DescribeOrganizationMemberEmailBindRequest& request, const DescribeOrganizationMemberEmailBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberEmailBindOutcomeCallable DescribeOrganizationMemberEmailBindCallable(const Model::DescribeOrganizationMemberEmailBindRequest& request);

                /**
                 *获取组织成员的授权策略列表
                 * @param req DescribeOrganizationMemberPoliciesRequest
                 * @return DescribeOrganizationMemberPoliciesOutcome
                 */
                DescribeOrganizationMemberPoliciesOutcome DescribeOrganizationMemberPolicies(const Model::DescribeOrganizationMemberPoliciesRequest &request);
                void DescribeOrganizationMemberPoliciesAsync(const Model::DescribeOrganizationMemberPoliciesRequest& request, const DescribeOrganizationMemberPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberPoliciesOutcomeCallable DescribeOrganizationMemberPoliciesCallable(const Model::DescribeOrganizationMemberPoliciesRequest& request);

                /**
                 *获取企业组织成员列表
                 * @param req DescribeOrganizationMembersRequest
                 * @return DescribeOrganizationMembersOutcome
                 */
                DescribeOrganizationMembersOutcome DescribeOrganizationMembers(const Model::DescribeOrganizationMembersRequest &request);
                void DescribeOrganizationMembersAsync(const Model::DescribeOrganizationMembersRequest& request, const DescribeOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMembersOutcomeCallable DescribeOrganizationMembersCallable(const Model::DescribeOrganizationMembersRequest& request);

                /**
                 *获取组织节点列表
                 * @param req DescribeOrganizationNodesRequest
                 * @return DescribeOrganizationNodesOutcome
                 */
                DescribeOrganizationNodesOutcome DescribeOrganizationNodes(const Model::DescribeOrganizationNodesRequest &request);
                void DescribeOrganizationNodesAsync(const Model::DescribeOrganizationNodesRequest& request, const DescribeOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationNodesOutcomeCallable DescribeOrganizationNodesCallable(const Model::DescribeOrganizationNodesRequest& request);

                /**
                 *本接口（DescribePolicy）可用于查询查看策略详情。
                 * @param req DescribePolicyRequest
                 * @return DescribePolicyOutcome
                 */
                DescribePolicyOutcome DescribePolicy(const Model::DescribePolicyRequest &request);
                void DescribePolicyAsync(const Model::DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyOutcomeCallable DescribePolicyCallable(const Model::DescribePolicyRequest& request);

                /**
                 *本接口（DescribePolicyConfig）可用于查询企业组织策略配置
                 * @param req DescribePolicyConfigRequest
                 * @return DescribePolicyConfigOutcome
                 */
                DescribePolicyConfigOutcome DescribePolicyConfig(const Model::DescribePolicyConfigRequest &request);
                void DescribePolicyConfigAsync(const Model::DescribePolicyConfigRequest& request, const DescribePolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConfigOutcomeCallable DescribePolicyConfigCallable(const Model::DescribePolicyConfigRequest& request);

                /**
                 *获取可共享地域列表
                 * @param req DescribeShareAreasRequest
                 * @return DescribeShareAreasOutcome
                 */
                DescribeShareAreasOutcome DescribeShareAreas(const Model::DescribeShareAreasRequest &request);
                void DescribeShareAreasAsync(const Model::DescribeShareAreasRequest& request, const DescribeShareAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareAreasOutcomeCallable DescribeShareAreasCallable(const Model::DescribeShareAreasRequest& request);

                /**
                 *获取共享单元成员列表。
                 * @param req DescribeShareUnitMembersRequest
                 * @return DescribeShareUnitMembersOutcome
                 */
                DescribeShareUnitMembersOutcome DescribeShareUnitMembers(const Model::DescribeShareUnitMembersRequest &request);
                void DescribeShareUnitMembersAsync(const Model::DescribeShareUnitMembersRequest& request, const DescribeShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareUnitMembersOutcomeCallable DescribeShareUnitMembersCallable(const Model::DescribeShareUnitMembersRequest& request);

                /**
                 *获取共享单元资源列表。
                 * @param req DescribeShareUnitResourcesRequest
                 * @return DescribeShareUnitResourcesOutcome
                 */
                DescribeShareUnitResourcesOutcome DescribeShareUnitResources(const Model::DescribeShareUnitResourcesRequest &request);
                void DescribeShareUnitResourcesAsync(const Model::DescribeShareUnitResourcesRequest& request, const DescribeShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareUnitResourcesOutcomeCallable DescribeShareUnitResourcesCallable(const Model::DescribeShareUnitResourcesRequest& request);

                /**
                 *获取共享单元列表。
                 * @param req DescribeShareUnitsRequest
                 * @return DescribeShareUnitsOutcome
                 */
                DescribeShareUnitsOutcome DescribeShareUnits(const Model::DescribeShareUnitsRequest &request);
                void DescribeShareUnitsAsync(const Model::DescribeShareUnitsRequest& request, const DescribeShareUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareUnitsOutcomeCallable DescribeShareUnitsCallable(const Model::DescribeShareUnitsRequest& request);

                /**
                 *解绑策略
                 * @param req DetachPolicyRequest
                 * @return DetachPolicyOutcome
                 */
                DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest &request);
                void DetachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request);

                /**
                 *禁用策略类型
                 * @param req DisablePolicyTypeRequest
                 * @return DisablePolicyTypeOutcome
                 */
                DisablePolicyTypeOutcome DisablePolicyType(const Model::DisablePolicyTypeRequest &request);
                void DisablePolicyTypeAsync(const Model::DisablePolicyTypeRequest& request, const DisablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisablePolicyTypeOutcomeCallable DisablePolicyTypeCallable(const Model::DisablePolicyTypeRequest& request);

                /**
                 *解除权限配置在成员账号上的部署
                 * @param req DismantleRoleConfigurationRequest
                 * @return DismantleRoleConfigurationOutcome
                 */
                DismantleRoleConfigurationOutcome DismantleRoleConfiguration(const Model::DismantleRoleConfigurationRequest &request);
                void DismantleRoleConfigurationAsync(const Model::DismantleRoleConfigurationRequest& request, const DismantleRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismantleRoleConfigurationOutcomeCallable DismantleRoleConfigurationCallable(const Model::DismantleRoleConfigurationRequest& request);

                /**
                 *启用策略类型
                 * @param req EnablePolicyTypeRequest
                 * @return EnablePolicyTypeOutcome
                 */
                EnablePolicyTypeOutcome EnablePolicyType(const Model::EnablePolicyTypeRequest &request);
                void EnablePolicyTypeAsync(const Model::EnablePolicyTypeRequest& request, const EnablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnablePolicyTypeOutcomeCallable EnablePolicyTypeCallable(const Model::EnablePolicyTypeRequest& request);

                /**
                 *查询SAML身份提供商配置信息
                 * @param req GetExternalSAMLIdentityProviderRequest
                 * @return GetExternalSAMLIdentityProviderOutcome
                 */
                GetExternalSAMLIdentityProviderOutcome GetExternalSAMLIdentityProvider(const Model::GetExternalSAMLIdentityProviderRequest &request);
                void GetExternalSAMLIdentityProviderAsync(const Model::GetExternalSAMLIdentityProviderRequest& request, const GetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetExternalSAMLIdentityProviderOutcomeCallable GetExternalSAMLIdentityProviderCallable(const Model::GetExternalSAMLIdentityProviderRequest& request);

                /**
                 *查询用户组信息
                 * @param req GetGroupRequest
                 * @return GetGroupOutcome
                 */
                GetGroupOutcome GetGroup(const Model::GetGroupRequest &request);
                void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request);

                /**
                 *查询用户同步异步任务的状态
                 * @param req GetProvisioningTaskStatusRequest
                 * @return GetProvisioningTaskStatusOutcome
                 */
                GetProvisioningTaskStatusOutcome GetProvisioningTaskStatus(const Model::GetProvisioningTaskStatusRequest &request);
                void GetProvisioningTaskStatusAsync(const Model::GetProvisioningTaskStatusRequest& request, const GetProvisioningTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProvisioningTaskStatusOutcomeCallable GetProvisioningTaskStatusCallable(const Model::GetProvisioningTaskStatusRequest& request);

                /**
                 *查询权限配置信息
                 * @param req GetRoleConfigurationRequest
                 * @return GetRoleConfigurationOutcome
                 */
                GetRoleConfigurationOutcome GetRoleConfiguration(const Model::GetRoleConfigurationRequest &request);
                void GetRoleConfigurationAsync(const Model::GetRoleConfigurationRequest& request, const GetRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoleConfigurationOutcomeCallable GetRoleConfigurationCallable(const Model::GetRoleConfigurationRequest& request);

                /**
                 *获取SCIM同步状态
                 * @param req GetSCIMSynchronizationStatusRequest
                 * @return GetSCIMSynchronizationStatusOutcome
                 */
                GetSCIMSynchronizationStatusOutcome GetSCIMSynchronizationStatus(const Model::GetSCIMSynchronizationStatusRequest &request);
                void GetSCIMSynchronizationStatusAsync(const Model::GetSCIMSynchronizationStatusRequest& request, const GetSCIMSynchronizationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSCIMSynchronizationStatusOutcomeCallable GetSCIMSynchronizationStatusCallable(const Model::GetSCIMSynchronizationStatusRequest& request);

                /**
                 *查询异步任务的状态
                 * @param req GetTaskStatusRequest
                 * @return GetTaskStatusOutcome
                 */
                GetTaskStatusOutcome GetTaskStatus(const Model::GetTaskStatusRequest &request);
                void GetTaskStatusAsync(const Model::GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskStatusOutcomeCallable GetTaskStatusCallable(const Model::GetTaskStatusRequest& request);

                /**
                 *查询用户信息
                 * @param req GetUserRequest
                 * @return GetUserOutcome
                 */
                GetUserOutcome GetUser(const Model::GetUserRequest &request);
                void GetUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request);

                /**
                 *查询CAM用户同步
                 * @param req GetUserSyncProvisioningRequest
                 * @return GetUserSyncProvisioningOutcome
                 */
                GetUserSyncProvisioningOutcome GetUserSyncProvisioning(const Model::GetUserSyncProvisioningRequest &request);
                void GetUserSyncProvisioningAsync(const Model::GetUserSyncProvisioningRequest& request, const GetUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserSyncProvisioningOutcomeCallable GetUserSyncProvisioningCallable(const Model::GetUserSyncProvisioningRequest& request);

                /**
                 *查询SAML服务提供商配置信息
                 * @param req GetZoneSAMLServiceProviderInfoRequest
                 * @return GetZoneSAMLServiceProviderInfoOutcome
                 */
                GetZoneSAMLServiceProviderInfoOutcome GetZoneSAMLServiceProviderInfo(const Model::GetZoneSAMLServiceProviderInfoRequest &request);
                void GetZoneSAMLServiceProviderInfoAsync(const Model::GetZoneSAMLServiceProviderInfoRequest& request, const GetZoneSAMLServiceProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetZoneSAMLServiceProviderInfoOutcomeCallable GetZoneSAMLServiceProviderInfoCallable(const Model::GetZoneSAMLServiceProviderInfoRequest& request);

                /**
                 *查询空间的统计信息
                 * @param req GetZoneStatisticsRequest
                 * @return GetZoneStatisticsOutcome
                 */
                GetZoneStatisticsOutcome GetZoneStatistics(const Model::GetZoneStatisticsRequest &request);
                void GetZoneStatisticsAsync(const Model::GetZoneStatisticsRequest& request, const GetZoneStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetZoneStatisticsOutcomeCallable GetZoneStatisticsCallable(const Model::GetZoneStatisticsRequest& request);

                /**
                 *邀请组织成员
                 * @param req InviteOrganizationMemberRequest
                 * @return InviteOrganizationMemberOutcome
                 */
                InviteOrganizationMemberOutcome InviteOrganizationMember(const Model::InviteOrganizationMemberRequest &request);
                void InviteOrganizationMemberAsync(const Model::InviteOrganizationMemberRequest& request, const InviteOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InviteOrganizationMemberOutcomeCallable InviteOrganizationMemberCallable(const Model::InviteOrganizationMemberRequest& request);

                /**
                 *查询SAML签名证书列表
                 * @param req ListExternalSAMLIdPCertificatesRequest
                 * @return ListExternalSAMLIdPCertificatesOutcome
                 */
                ListExternalSAMLIdPCertificatesOutcome ListExternalSAMLIdPCertificates(const Model::ListExternalSAMLIdPCertificatesRequest &request);
                void ListExternalSAMLIdPCertificatesAsync(const Model::ListExternalSAMLIdPCertificatesRequest& request, const ListExternalSAMLIdPCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListExternalSAMLIdPCertificatesOutcomeCallable ListExternalSAMLIdPCertificatesCallable(const Model::ListExternalSAMLIdPCertificatesRequest& request);

                /**
                 *查询用户组中的用户列表
                 * @param req ListGroupMembersRequest
                 * @return ListGroupMembersOutcome
                 */
                ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest &request);
                void ListGroupMembersAsync(const Model::ListGroupMembersRequest& request, const ListGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupMembersOutcomeCallable ListGroupMembersCallable(const Model::ListGroupMembersRequest& request);

                /**
                 *查询用户组列表
                 * @param req ListGroupsRequest
                 * @return ListGroupsOutcome
                 */
                ListGroupsOutcome ListGroups(const Model::ListGroupsRequest &request);
                void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request);

                /**
                 *查询用户加入的用户组
                 * @param req ListJoinedGroupsForUserRequest
                 * @return ListJoinedGroupsForUserOutcome
                 */
                ListJoinedGroupsForUserOutcome ListJoinedGroupsForUser(const Model::ListJoinedGroupsForUserRequest &request);
                void ListJoinedGroupsForUserAsync(const Model::ListJoinedGroupsForUserRequest& request, const ListJoinedGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListJoinedGroupsForUserOutcomeCallable ListJoinedGroupsForUserCallable(const Model::ListJoinedGroupsForUserRequest& request);

                /**
                 *获取成员标签检测不合规资源列表
                 * @param req ListNonCompliantResourceRequest
                 * @return ListNonCompliantResourceOutcome
                 */
                ListNonCompliantResourceOutcome ListNonCompliantResource(const Model::ListNonCompliantResourceRequest &request);
                void ListNonCompliantResourceAsync(const Model::ListNonCompliantResourceRequest& request, const ListNonCompliantResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListNonCompliantResourceOutcomeCallable ListNonCompliantResourceCallable(const Model::ListNonCompliantResourceRequest& request);

                /**
                 *获取集团服务委派管理员列表
                 * @param req ListOrgServiceAssignMemberRequest
                 * @return ListOrgServiceAssignMemberOutcome
                 */
                ListOrgServiceAssignMemberOutcome ListOrgServiceAssignMember(const Model::ListOrgServiceAssignMemberRequest &request);
                void ListOrgServiceAssignMemberAsync(const Model::ListOrgServiceAssignMemberRequest& request, const ListOrgServiceAssignMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrgServiceAssignMemberOutcomeCallable ListOrgServiceAssignMemberCallable(const Model::ListOrgServiceAssignMemberRequest& request);

                /**
                 *获取组织成员访问身份列表
                 * @param req ListOrganizationIdentityRequest
                 * @return ListOrganizationIdentityOutcome
                 */
                ListOrganizationIdentityOutcome ListOrganizationIdentity(const Model::ListOrganizationIdentityRequest &request);
                void ListOrganizationIdentityAsync(const Model::ListOrganizationIdentityRequest& request, const ListOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationIdentityOutcomeCallable ListOrganizationIdentityCallable(const Model::ListOrganizationIdentityRequest& request);

                /**
                 *获取集团服务设置列表
                 * @param req ListOrganizationServiceRequest
                 * @return ListOrganizationServiceOutcome
                 */
                ListOrganizationServiceOutcome ListOrganizationService(const Model::ListOrganizationServiceRequest &request);
                void ListOrganizationServiceAsync(const Model::ListOrganizationServiceRequest& request, const ListOrganizationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationServiceOutcomeCallable ListOrganizationServiceCallable(const Model::ListOrganizationServiceRequest& request);

                /**
                 *获取权限配置中的策略列表
                 * @param req ListPermissionPoliciesInRoleConfigurationRequest
                 * @return ListPermissionPoliciesInRoleConfigurationOutcome
                 */
                ListPermissionPoliciesInRoleConfigurationOutcome ListPermissionPoliciesInRoleConfiguration(const Model::ListPermissionPoliciesInRoleConfigurationRequest &request);
                void ListPermissionPoliciesInRoleConfigurationAsync(const Model::ListPermissionPoliciesInRoleConfigurationRequest& request, const ListPermissionPoliciesInRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPermissionPoliciesInRoleConfigurationOutcomeCallable ListPermissionPoliciesInRoleConfigurationCallable(const Model::ListPermissionPoliciesInRoleConfigurationRequest& request);

                /**
                 *本接口（ListPolicies）可用于查询查看策略列表数据
                 * @param req ListPoliciesRequest
                 * @return ListPoliciesOutcome
                 */
                ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest &request);
                void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request);

                /**
                 *本接口（ListPoliciesForTarget）查询目标关联的策略列表
                 * @param req ListPoliciesForTargetRequest
                 * @return ListPoliciesForTargetOutcome
                 */
                ListPoliciesForTargetOutcome ListPoliciesForTarget(const Model::ListPoliciesForTargetRequest &request);
                void ListPoliciesForTargetAsync(const Model::ListPoliciesForTargetRequest& request, const ListPoliciesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesForTargetOutcomeCallable ListPoliciesForTargetCallable(const Model::ListPoliciesForTargetRequest& request);

                /**
                 *查询授权列表
                 * @param req ListRoleAssignmentsRequest
                 * @return ListRoleAssignmentsOutcome
                 */
                ListRoleAssignmentsOutcome ListRoleAssignments(const Model::ListRoleAssignmentsRequest &request);
                void ListRoleAssignmentsAsync(const Model::ListRoleAssignmentsRequest& request, const ListRoleAssignmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRoleAssignmentsOutcomeCallable ListRoleAssignmentsCallable(const Model::ListRoleAssignmentsRequest& request);

                /**
                 *查询权限配置部署列表
                 * @param req ListRoleConfigurationProvisioningsRequest
                 * @return ListRoleConfigurationProvisioningsOutcome
                 */
                ListRoleConfigurationProvisioningsOutcome ListRoleConfigurationProvisionings(const Model::ListRoleConfigurationProvisioningsRequest &request);
                void ListRoleConfigurationProvisioningsAsync(const Model::ListRoleConfigurationProvisioningsRequest& request, const ListRoleConfigurationProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRoleConfigurationProvisioningsOutcomeCallable ListRoleConfigurationProvisioningsCallable(const Model::ListRoleConfigurationProvisioningsRequest& request);

                /**
                 *查询权限配置列表
                 * @param req ListRoleConfigurationsRequest
                 * @return ListRoleConfigurationsOutcome
                 */
                ListRoleConfigurationsOutcome ListRoleConfigurations(const Model::ListRoleConfigurationsRequest &request);
                void ListRoleConfigurationsAsync(const Model::ListRoleConfigurationsRequest& request, const ListRoleConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRoleConfigurationsOutcomeCallable ListRoleConfigurationsCallable(const Model::ListRoleConfigurationsRequest& request);

                /**
                 *查询用户SCIM密钥列表
                 * @param req ListSCIMCredentialsRequest
                 * @return ListSCIMCredentialsOutcome
                 */
                ListSCIMCredentialsOutcome ListSCIMCredentials(const Model::ListSCIMCredentialsRequest &request);
                void ListSCIMCredentialsAsync(const Model::ListSCIMCredentialsRequest& request, const ListSCIMCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSCIMCredentialsOutcomeCallable ListSCIMCredentialsCallable(const Model::ListSCIMCredentialsRequest& request);

                /**
                 *本接口（ListTargetsForPolicy）查询某个指定策略关联的目标列表
                 * @param req ListTargetsForPolicyRequest
                 * @return ListTargetsForPolicyOutcome
                 */
                ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest &request);
                void ListTargetsForPolicyAsync(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request);

                /**
                 *查询异步任务列表
                 * @param req ListTasksRequest
                 * @return ListTasksOutcome
                 */
                ListTasksOutcome ListTasks(const Model::ListTasksRequest &request);
                void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request);

                /**
                 *查询CAM用户同步列表
                 * @param req ListUserSyncProvisioningsRequest
                 * @return ListUserSyncProvisioningsOutcome
                 */
                ListUserSyncProvisioningsOutcome ListUserSyncProvisionings(const Model::ListUserSyncProvisioningsRequest &request);
                void ListUserSyncProvisioningsAsync(const Model::ListUserSyncProvisioningsRequest& request, const ListUserSyncProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserSyncProvisioningsOutcomeCallable ListUserSyncProvisioningsCallable(const Model::ListUserSyncProvisioningsRequest& request);

                /**
                 *查询用户列表
                 * @param req ListUsersRequest
                 * @return ListUsersOutcome
                 */
                ListUsersOutcome ListUsers(const Model::ListUsersRequest &request);
                void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request);

                /**
                 *移动成员到指定企业组织节点
                 * @param req MoveOrganizationNodeMembersRequest
                 * @return MoveOrganizationNodeMembersOutcome
                 */
                MoveOrganizationNodeMembersOutcome MoveOrganizationNodeMembers(const Model::MoveOrganizationNodeMembersRequest &request);
                void MoveOrganizationNodeMembersAsync(const Model::MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveOrganizationNodeMembersOutcomeCallable MoveOrganizationNodeMembersCallable(const Model::MoveOrganizationNodeMembersRequest& request);

                /**
                 *开通身份中心服务（CIC）
                 * @param req OpenIdentityCenterRequest
                 * @return OpenIdentityCenterOutcome
                 */
                OpenIdentityCenterOutcome OpenIdentityCenter(const Model::OpenIdentityCenterRequest &request);
                void OpenIdentityCenterAsync(const Model::OpenIdentityCenterRequest& request, const OpenIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenIdentityCenterOutcomeCallable OpenIdentityCenterCallable(const Model::OpenIdentityCenterRequest& request);

                /**
                 *将权限配置部署到成员账号上
                 * @param req ProvisionRoleConfigurationRequest
                 * @return ProvisionRoleConfigurationOutcome
                 */
                ProvisionRoleConfigurationOutcome ProvisionRoleConfiguration(const Model::ProvisionRoleConfigurationRequest &request);
                void ProvisionRoleConfigurationAsync(const Model::ProvisionRoleConfigurationRequest& request, const ProvisionRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProvisionRoleConfigurationOutcomeCallable ProvisionRoleConfigurationCallable(const Model::ProvisionRoleConfigurationRequest& request);

                /**
                 *退出企业组织
                 * @param req QuitOrganizationRequest
                 * @return QuitOrganizationOutcome
                 */
                QuitOrganizationOutcome QuitOrganization(const Model::QuitOrganizationRequest &request);
                void QuitOrganizationAsync(const Model::QuitOrganizationRequest& request, const QuitOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuitOrganizationOutcomeCallable QuitOrganizationCallable(const Model::QuitOrganizationRequest& request);

                /**
                 *拒绝加入共享单元邀请。
                 * @param req RejectJoinShareUnitInvitationRequest
                 * @return RejectJoinShareUnitInvitationOutcome
                 */
                RejectJoinShareUnitInvitationOutcome RejectJoinShareUnitInvitation(const Model::RejectJoinShareUnitInvitationRequest &request);
                void RejectJoinShareUnitInvitationAsync(const Model::RejectJoinShareUnitInvitationRequest& request, const RejectJoinShareUnitInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectJoinShareUnitInvitationOutcomeCallable RejectJoinShareUnitInvitationCallable(const Model::RejectJoinShareUnitInvitationRequest& request);

                /**
                 *移除SAML签名证书
                 * @param req RemoveExternalSAMLIdPCertificateRequest
                 * @return RemoveExternalSAMLIdPCertificateOutcome
                 */
                RemoveExternalSAMLIdPCertificateOutcome RemoveExternalSAMLIdPCertificate(const Model::RemoveExternalSAMLIdPCertificateRequest &request);
                void RemoveExternalSAMLIdPCertificateAsync(const Model::RemoveExternalSAMLIdPCertificateRequest& request, const RemoveExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveExternalSAMLIdPCertificateOutcomeCallable RemoveExternalSAMLIdPCertificateCallable(const Model::RemoveExternalSAMLIdPCertificateRequest& request);

                /**
                 *为权限配置移除策略
                 * @param req RemovePermissionPolicyFromRoleConfigurationRequest
                 * @return RemovePermissionPolicyFromRoleConfigurationOutcome
                 */
                RemovePermissionPolicyFromRoleConfigurationOutcome RemovePermissionPolicyFromRoleConfiguration(const Model::RemovePermissionPolicyFromRoleConfigurationRequest &request);
                void RemovePermissionPolicyFromRoleConfigurationAsync(const Model::RemovePermissionPolicyFromRoleConfigurationRequest& request, const RemovePermissionPolicyFromRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemovePermissionPolicyFromRoleConfigurationOutcomeCallable RemovePermissionPolicyFromRoleConfigurationCallable(const Model::RemovePermissionPolicyFromRoleConfigurationRequest& request);

                /**
                 *从用户组中移除用户
                 * @param req RemoveUserFromGroupRequest
                 * @return RemoveUserFromGroupOutcome
                 */
                RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest &request);
                void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request);

                /**
                 *重新发送成员绑定邮箱激活邮件
                 * @param req SendOrgMemberAccountBindEmailRequest
                 * @return SendOrgMemberAccountBindEmailOutcome
                 */
                SendOrgMemberAccountBindEmailOutcome SendOrgMemberAccountBindEmail(const Model::SendOrgMemberAccountBindEmailRequest &request);
                void SendOrgMemberAccountBindEmailAsync(const Model::SendOrgMemberAccountBindEmailRequest& request, const SendOrgMemberAccountBindEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendOrgMemberAccountBindEmailOutcomeCallable SendOrgMemberAccountBindEmailCallable(const Model::SendOrgMemberAccountBindEmailRequest& request);

                /**
                 *配置SAML身份提供商信息
                 * @param req SetExternalSAMLIdentityProviderRequest
                 * @return SetExternalSAMLIdentityProviderOutcome
                 */
                SetExternalSAMLIdentityProviderOutcome SetExternalSAMLIdentityProvider(const Model::SetExternalSAMLIdentityProviderRequest &request);
                void SetExternalSAMLIdentityProviderAsync(const Model::SetExternalSAMLIdentityProviderRequest& request, const SetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetExternalSAMLIdentityProviderOutcomeCallable SetExternalSAMLIdentityProviderCallable(const Model::SetExternalSAMLIdentityProviderRequest& request);

                /**
                 *为权限配置修改自定义策略
                 * @param req UpdateCustomPolicyForRoleConfigurationRequest
                 * @return UpdateCustomPolicyForRoleConfigurationOutcome
                 */
                UpdateCustomPolicyForRoleConfigurationOutcome UpdateCustomPolicyForRoleConfiguration(const Model::UpdateCustomPolicyForRoleConfigurationRequest &request);
                void UpdateCustomPolicyForRoleConfigurationAsync(const Model::UpdateCustomPolicyForRoleConfigurationRequest& request, const UpdateCustomPolicyForRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCustomPolicyForRoleConfigurationOutcomeCallable UpdateCustomPolicyForRoleConfigurationCallable(const Model::UpdateCustomPolicyForRoleConfigurationRequest& request);

                /**
                 *修改用户组信息
                 * @param req UpdateGroupRequest
                 * @return UpdateGroupOutcome
                 */
                UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest &request);
                void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request);

                /**
                 *更新组织身份
                 * @param req UpdateOrganizationIdentityRequest
                 * @return UpdateOrganizationIdentityOutcome
                 */
                UpdateOrganizationIdentityOutcome UpdateOrganizationIdentity(const Model::UpdateOrganizationIdentityRequest &request);
                void UpdateOrganizationIdentityAsync(const Model::UpdateOrganizationIdentityRequest& request, const UpdateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationIdentityOutcomeCallable UpdateOrganizationIdentityCallable(const Model::UpdateOrganizationIdentityRequest& request);

                /**
                 *更新组织成员信息
                 * @param req UpdateOrganizationMemberRequest
                 * @return UpdateOrganizationMemberOutcome
                 */
                UpdateOrganizationMemberOutcome UpdateOrganizationMember(const Model::UpdateOrganizationMemberRequest &request);
                void UpdateOrganizationMemberAsync(const Model::UpdateOrganizationMemberRequest& request, const UpdateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMemberOutcomeCallable UpdateOrganizationMemberCallable(const Model::UpdateOrganizationMemberRequest& request);

                /**
                 *修改绑定成员邮箱
                 * @param req UpdateOrganizationMemberEmailBindRequest
                 * @return UpdateOrganizationMemberEmailBindOutcome
                 */
                UpdateOrganizationMemberEmailBindOutcome UpdateOrganizationMemberEmailBind(const Model::UpdateOrganizationMemberEmailBindRequest &request);
                void UpdateOrganizationMemberEmailBindAsync(const Model::UpdateOrganizationMemberEmailBindRequest& request, const UpdateOrganizationMemberEmailBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMemberEmailBindOutcomeCallable UpdateOrganizationMemberEmailBindCallable(const Model::UpdateOrganizationMemberEmailBindRequest& request);

                /**
                 *修改组织成员访问策略
                 * @param req UpdateOrganizationMembersPolicyRequest
                 * @return UpdateOrganizationMembersPolicyOutcome
                 */
                UpdateOrganizationMembersPolicyOutcome UpdateOrganizationMembersPolicy(const Model::UpdateOrganizationMembersPolicyRequest &request);
                void UpdateOrganizationMembersPolicyAsync(const Model::UpdateOrganizationMembersPolicyRequest& request, const UpdateOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMembersPolicyOutcomeCallable UpdateOrganizationMembersPolicyCallable(const Model::UpdateOrganizationMembersPolicyRequest& request);

                /**
                 *更新企业组织节点
                 * @param req UpdateOrganizationNodeRequest
                 * @return UpdateOrganizationNodeOutcome
                 */
                UpdateOrganizationNodeOutcome UpdateOrganizationNode(const Model::UpdateOrganizationNodeRequest &request);
                void UpdateOrganizationNodeAsync(const Model::UpdateOrganizationNodeRequest& request, const UpdateOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationNodeOutcomeCallable UpdateOrganizationNodeCallable(const Model::UpdateOrganizationNodeRequest& request);

                /**
                 *编辑策略
                 * @param req UpdatePolicyRequest
                 * @return UpdatePolicyOutcome
                 */
                UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest &request);
                void UpdatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePolicyOutcomeCallable UpdatePolicyCallable(const Model::UpdatePolicyRequest& request);

                /**
                 *修改权限配置信息
                 * @param req UpdateRoleConfigurationRequest
                 * @return UpdateRoleConfigurationOutcome
                 */
                UpdateRoleConfigurationOutcome UpdateRoleConfiguration(const Model::UpdateRoleConfigurationRequest &request);
                void UpdateRoleConfigurationAsync(const Model::UpdateRoleConfigurationRequest& request, const UpdateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRoleConfigurationOutcomeCallable UpdateRoleConfigurationCallable(const Model::UpdateRoleConfigurationRequest& request);

                /**
                 *启用/禁用SCIM密钥
                 * @param req UpdateSCIMCredentialStatusRequest
                 * @return UpdateSCIMCredentialStatusOutcome
                 */
                UpdateSCIMCredentialStatusOutcome UpdateSCIMCredentialStatus(const Model::UpdateSCIMCredentialStatusRequest &request);
                void UpdateSCIMCredentialStatusAsync(const Model::UpdateSCIMCredentialStatusRequest& request, const UpdateSCIMCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSCIMCredentialStatusOutcomeCallable UpdateSCIMCredentialStatusCallable(const Model::UpdateSCIMCredentialStatusRequest& request);

                /**
                 *启用/禁用用户SCIM同步
                 * @param req UpdateSCIMSynchronizationStatusRequest
                 * @return UpdateSCIMSynchronizationStatusOutcome
                 */
                UpdateSCIMSynchronizationStatusOutcome UpdateSCIMSynchronizationStatus(const Model::UpdateSCIMSynchronizationStatusRequest &request);
                void UpdateSCIMSynchronizationStatusAsync(const Model::UpdateSCIMSynchronizationStatusRequest& request, const UpdateSCIMSynchronizationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSCIMSynchronizationStatusOutcomeCallable UpdateSCIMSynchronizationStatusCallable(const Model::UpdateSCIMSynchronizationStatusRequest& request);

                /**
                 *更新共享单元。
                 * @param req UpdateShareUnitRequest
                 * @return UpdateShareUnitOutcome
                 */
                UpdateShareUnitOutcome UpdateShareUnit(const Model::UpdateShareUnitRequest &request);
                void UpdateShareUnitAsync(const Model::UpdateShareUnitRequest& request, const UpdateShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateShareUnitOutcomeCallable UpdateShareUnitCallable(const Model::UpdateShareUnitRequest& request);

                /**
                 *修改用户信息
                 * @param req UpdateUserRequest
                 * @return UpdateUserOutcome
                 */
                UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest &request);
                void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request);

                /**
                 *修改用户状态
                 * @param req UpdateUserStatusRequest
                 * @return UpdateUserStatusOutcome
                 */
                UpdateUserStatusOutcome UpdateUserStatus(const Model::UpdateUserStatusRequest &request);
                void UpdateUserStatusAsync(const Model::UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserStatusOutcomeCallable UpdateUserStatusCallable(const Model::UpdateUserStatusRequest& request);

                /**
                 *创建子用户同步任务
                 * @param req UpdateUserSyncProvisioningRequest
                 * @return UpdateUserSyncProvisioningOutcome
                 */
                UpdateUserSyncProvisioningOutcome UpdateUserSyncProvisioning(const Model::UpdateUserSyncProvisioningRequest &request);
                void UpdateUserSyncProvisioningAsync(const Model::UpdateUserSyncProvisioningRequest& request, const UpdateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserSyncProvisioningOutcomeCallable UpdateUserSyncProvisioningCallable(const Model::UpdateUserSyncProvisioningRequest& request);

                /**
                 *更新用户空间名
                 * @param req UpdateZoneRequest
                 * @return UpdateZoneOutcome
                 */
                UpdateZoneOutcome UpdateZone(const Model::UpdateZoneRequest &request);
                void UpdateZoneAsync(const Model::UpdateZoneRequest& request, const UpdateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateZoneOutcomeCallable UpdateZoneCallable(const Model::UpdateZoneRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
