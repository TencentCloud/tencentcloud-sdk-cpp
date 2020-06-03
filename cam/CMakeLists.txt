#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(cam_public_header
  include/tencentcloud/cam/v20190116/CamClient.h
  )

set(cam_public_header_model
  include/tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesResponse.h
  include/tencentcloud/cam/v20190116/model/ListAccessKeysRequest.h
  include/tencentcloud/cam/v20190116/model/SetMfaFlagResponse.h
  include/tencentcloud/cam/v20190116/model/DeleteUserRequest.h
  include/tencentcloud/cam/v20190116/model/DetachGroupPolicyRequest.h
  include/tencentcloud/cam/v20190116/model/DescribeRoleListResponse.h
  include/tencentcloud/cam/v20190116/model/CreatePolicyResponse.h
  include/tencentcloud/cam/v20190116/model/GetRoleRequest.h
  include/tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleRequest.h
  include/tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesRequest.h
  include/tencentcloud/cam/v20190116/model/ListGroupsForUserRequest.h
  include/tencentcloud/cam/v20190116/model/AttachRolePolicyResponse.h
  include/tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusResponse.h
  include/tencentcloud/cam/v20190116/model/AttachGroupPolicyResponse.h
  include/tencentcloud/cam/v20190116/model/ListUsersResponse.h
  include/tencentcloud/cam/v20190116/model/UpdateRoleDescriptionResponse.h
  include/tencentcloud/cam/v20190116/model/DetachUserPolicyRequest.h
  include/tencentcloud/cam/v20190116/model/ListGroupsResponse.h
  include/tencentcloud/cam/v20190116/model/ListPolicyVersionsRequest.h
  include/tencentcloud/cam/v20190116/model/GetCustomMFATokenInfoRequest.h
  include/tencentcloud/cam/v20190116/model/DescribeRoleListRequest.h
  include/tencentcloud/cam/v20190116/model/GetGroupRequest.h
  include/tencentcloud/cam/v20190116/model/DeleteRoleResponse.h
  include/tencentcloud/cam/v20190116/model/PolicyVersionItem.h
  include/tencentcloud/cam/v20190116/model/ListSAMLProvidersRequest.h
  include/tencentcloud/cam/v20190116/model/ListGroupsRequest.h
  include/tencentcloud/cam/v20190116/model/DeletePolicyVersionResponse.h
  include/tencentcloud/cam/v20190116/model/UpdateSAMLProviderRequest.h
  include/tencentcloud/cam/v20190116/model/UpdateAssumeRolePolicyRequest.h
  include/tencentcloud/cam/v20190116/model/ListGroupsForUserResponse.h
  include/tencentcloud/cam/v20190116/model/ListUsersForGroupRequest.h
  include/tencentcloud/cam/v20190116/model/RemoveUserFromGroupRequest.h
  include/tencentcloud/cam/v20190116/model/CreatePolicyVersionResponse.h
  include/tencentcloud/cam/v20190116/model/ListPoliciesResponse.h
  include/tencentcloud/cam/v20190116/model/GroupIdOfUidInfo.h
  include/tencentcloud/cam/v20190116/model/UpdateRoleDescriptionRequest.h
  include/tencentcloud/cam/v20190116/model/SetDefaultPolicyVersionRequest.h
  include/tencentcloud/cam/v20190116/model/RoleInfo.h
  include/tencentcloud/cam/v20190116/model/CreatePolicyVersionRequest.h
  include/tencentcloud/cam/v20190116/model/DeleteGroupRequest.h
  include/tencentcloud/cam/v20190116/model/GetUserResponse.h
  include/tencentcloud/cam/v20190116/model/DeleteUserResponse.h
  include/tencentcloud/cam/v20190116/model/DetachRolePolicyRequest.h
  include/tencentcloud/cam/v20190116/model/StrategyInfo.h
  include/tencentcloud/cam/v20190116/model/DeletePolicyRequest.h
  include/tencentcloud/cam/v20190116/model/GroupInfo.h
  include/tencentcloud/cam/v20190116/model/AddUserRequest.h
  include/tencentcloud/cam/v20190116/model/DeleteRoleRequest.h
  include/tencentcloud/cam/v20190116/model/UpdateRoleConsoleLoginRequest.h
  include/tencentcloud/cam/v20190116/model/GetCustomMFATokenInfoResponse.h
  include/tencentcloud/cam/v20190116/model/UpdateAssumeRolePolicyResponse.h
  include/tencentcloud/cam/v20190116/model/ListAttachedUserPoliciesResponse.h
  include/tencentcloud/cam/v20190116/model/CreateSAMLProviderResponse.h
  include/tencentcloud/cam/v20190116/model/GetUserRequest.h
  include/tencentcloud/cam/v20190116/model/LoginActionMfaFlag.h
  include/tencentcloud/cam/v20190116/model/SubAccountInfo.h
  include/tencentcloud/cam/v20190116/model/SAMLProviderInfo.h
  include/tencentcloud/cam/v20190116/model/UpdateSAMLProviderResponse.h
  include/tencentcloud/cam/v20190116/model/UpdateUserRequest.h
  include/tencentcloud/cam/v20190116/model/CreateSAMLProviderRequest.h
  include/tencentcloud/cam/v20190116/model/AttachPolicyInfo.h
  include/tencentcloud/cam/v20190116/model/UpdateRoleConsoleLoginResponse.h
  include/tencentcloud/cam/v20190116/model/AttachRolePolicyRequest.h
  include/tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenResponse.h
  include/tencentcloud/cam/v20190116/model/AttachUserPolicyRequest.h
  include/tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesResponse.h
  include/tencentcloud/cam/v20190116/model/GetPolicyVersionRequest.h
  include/tencentcloud/cam/v20190116/model/DeletePolicyResponse.h
  include/tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenRequest.h
  include/tencentcloud/cam/v20190116/model/AccessKey.h
  include/tencentcloud/cam/v20190116/model/GetGroupResponse.h
  include/tencentcloud/cam/v20190116/model/DeleteSAMLProviderRequest.h
  include/tencentcloud/cam/v20190116/model/DeleteSAMLProviderResponse.h
  include/tencentcloud/cam/v20190116/model/UpdateUserResponse.h
  include/tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleResponse.h
  include/tencentcloud/cam/v20190116/model/ListUsersRequest.h
  include/tencentcloud/cam/v20190116/model/ListCollaboratorsRequest.h
  include/tencentcloud/cam/v20190116/model/UpdatePolicyResponse.h
  include/tencentcloud/cam/v20190116/model/CreateGroupRequest.h
  include/tencentcloud/cam/v20190116/model/UpdateGroupResponse.h
  include/tencentcloud/cam/v20190116/model/ListEntitiesForPolicyRequest.h
  include/tencentcloud/cam/v20190116/model/ListPoliciesRequest.h
  include/tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusRequest.h
  include/tencentcloud/cam/v20190116/model/DetachGroupPolicyResponse.h
  include/tencentcloud/cam/v20190116/model/CreatePolicyRequest.h
  include/tencentcloud/cam/v20190116/model/DeletePolicyVersionRequest.h
  include/tencentcloud/cam/v20190116/model/UpdateGroupRequest.h
  include/tencentcloud/cam/v20190116/model/GetPolicyVersionResponse.h
  include/tencentcloud/cam/v20190116/model/CreateRoleResponse.h
  include/tencentcloud/cam/v20190116/model/GetSAMLProviderResponse.h
  include/tencentcloud/cam/v20190116/model/ListPolicyVersionsResponse.h
  include/tencentcloud/cam/v20190116/model/GetPolicyRequest.h
  include/tencentcloud/cam/v20190116/model/AddUserToGroupRequest.h
  include/tencentcloud/cam/v20190116/model/RemoveUserFromGroupResponse.h
  include/tencentcloud/cam/v20190116/model/DetachRolePolicyResponse.h
  include/tencentcloud/cam/v20190116/model/AttachedPolicyOfRole.h
  include/tencentcloud/cam/v20190116/model/ListSAMLProvidersResponse.h
  include/tencentcloud/cam/v20190116/model/SetDefaultPolicyVersionResponse.h
  include/tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesRequest.h
  include/tencentcloud/cam/v20190116/model/GetSAMLProviderRequest.h
  include/tencentcloud/cam/v20190116/model/DetachUserPolicyResponse.h
  include/tencentcloud/cam/v20190116/model/GetRoleResponse.h
  include/tencentcloud/cam/v20190116/model/CreateRoleRequest.h
  include/tencentcloud/cam/v20190116/model/DeleteServiceLinkedRoleResponse.h
  include/tencentcloud/cam/v20190116/model/GetPolicyResponse.h
  include/tencentcloud/cam/v20190116/model/DeleteGroupResponse.h
  include/tencentcloud/cam/v20190116/model/AttachGroupPolicyRequest.h
  include/tencentcloud/cam/v20190116/model/DeleteServiceLinkedRoleRequest.h
  include/tencentcloud/cam/v20190116/model/AttachEntityOfPolicy.h
  include/tencentcloud/cam/v20190116/model/ListUsersForGroupResponse.h
  include/tencentcloud/cam/v20190116/model/PolicyVersionDetail.h
  include/tencentcloud/cam/v20190116/model/AddUserResponse.h
  include/tencentcloud/cam/v20190116/model/ListEntitiesForPolicyResponse.h
  include/tencentcloud/cam/v20190116/model/AddUserToGroupResponse.h
  include/tencentcloud/cam/v20190116/model/AttachUserPolicyResponse.h
  include/tencentcloud/cam/v20190116/model/SetMfaFlagRequest.h
  include/tencentcloud/cam/v20190116/model/ListCollaboratorsResponse.h
  include/tencentcloud/cam/v20190116/model/ListAccessKeysResponse.h
  include/tencentcloud/cam/v20190116/model/ListAttachedUserPoliciesRequest.h
  include/tencentcloud/cam/v20190116/model/UpdatePolicyRequest.h
  include/tencentcloud/cam/v20190116/model/GroupMemberInfo.h
  include/tencentcloud/cam/v20190116/model/CreateGroupResponse.h
  )

set(cam_src
  src/v20190116/CamClient.cpp
  src/v20190116/model/ListAttachedRolePoliciesResponse.cpp
  src/v20190116/model/ListAccessKeysRequest.cpp
  src/v20190116/model/SetMfaFlagResponse.cpp
  src/v20190116/model/DeleteUserRequest.cpp
  src/v20190116/model/DetachGroupPolicyRequest.cpp
  src/v20190116/model/DescribeRoleListResponse.cpp
  src/v20190116/model/CreatePolicyResponse.cpp
  src/v20190116/model/GetRoleRequest.cpp
  src/v20190116/model/CreateServiceLinkedRoleRequest.cpp
  src/v20190116/model/ListAttachedGroupPoliciesRequest.cpp
  src/v20190116/model/ListGroupsForUserRequest.cpp
  src/v20190116/model/AttachRolePolicyResponse.cpp
  src/v20190116/model/GetServiceLinkedRoleDeletionStatusResponse.cpp
  src/v20190116/model/AttachGroupPolicyResponse.cpp
  src/v20190116/model/ListUsersResponse.cpp
  src/v20190116/model/UpdateRoleDescriptionResponse.cpp
  src/v20190116/model/DetachUserPolicyRequest.cpp
  src/v20190116/model/ListGroupsResponse.cpp
  src/v20190116/model/ListPolicyVersionsRequest.cpp
  src/v20190116/model/GetCustomMFATokenInfoRequest.cpp
  src/v20190116/model/DescribeRoleListRequest.cpp
  src/v20190116/model/GetGroupRequest.cpp
  src/v20190116/model/DeleteRoleResponse.cpp
  src/v20190116/model/PolicyVersionItem.cpp
  src/v20190116/model/ListSAMLProvidersRequest.cpp
  src/v20190116/model/ListGroupsRequest.cpp
  src/v20190116/model/DeletePolicyVersionResponse.cpp
  src/v20190116/model/UpdateSAMLProviderRequest.cpp
  src/v20190116/model/UpdateAssumeRolePolicyRequest.cpp
  src/v20190116/model/ListGroupsForUserResponse.cpp
  src/v20190116/model/ListUsersForGroupRequest.cpp
  src/v20190116/model/RemoveUserFromGroupRequest.cpp
  src/v20190116/model/CreatePolicyVersionResponse.cpp
  src/v20190116/model/ListPoliciesResponse.cpp
  src/v20190116/model/GroupIdOfUidInfo.cpp
  src/v20190116/model/UpdateRoleDescriptionRequest.cpp
  src/v20190116/model/SetDefaultPolicyVersionRequest.cpp
  src/v20190116/model/RoleInfo.cpp
  src/v20190116/model/CreatePolicyVersionRequest.cpp
  src/v20190116/model/DeleteGroupRequest.cpp
  src/v20190116/model/GetUserResponse.cpp
  src/v20190116/model/DeleteUserResponse.cpp
  src/v20190116/model/DetachRolePolicyRequest.cpp
  src/v20190116/model/StrategyInfo.cpp
  src/v20190116/model/DeletePolicyRequest.cpp
  src/v20190116/model/GroupInfo.cpp
  src/v20190116/model/AddUserRequest.cpp
  src/v20190116/model/DeleteRoleRequest.cpp
  src/v20190116/model/UpdateRoleConsoleLoginRequest.cpp
  src/v20190116/model/GetCustomMFATokenInfoResponse.cpp
  src/v20190116/model/UpdateAssumeRolePolicyResponse.cpp
  src/v20190116/model/ListAttachedUserPoliciesResponse.cpp
  src/v20190116/model/CreateSAMLProviderResponse.cpp
  src/v20190116/model/GetUserRequest.cpp
  src/v20190116/model/LoginActionMfaFlag.cpp
  src/v20190116/model/SubAccountInfo.cpp
  src/v20190116/model/SAMLProviderInfo.cpp
  src/v20190116/model/UpdateSAMLProviderResponse.cpp
  src/v20190116/model/UpdateUserRequest.cpp
  src/v20190116/model/CreateSAMLProviderRequest.cpp
  src/v20190116/model/AttachPolicyInfo.cpp
  src/v20190116/model/UpdateRoleConsoleLoginResponse.cpp
  src/v20190116/model/AttachRolePolicyRequest.cpp
  src/v20190116/model/ConsumeCustomMFATokenResponse.cpp
  src/v20190116/model/AttachUserPolicyRequest.cpp
  src/v20190116/model/ListAttachedGroupPoliciesResponse.cpp
  src/v20190116/model/GetPolicyVersionRequest.cpp
  src/v20190116/model/DeletePolicyResponse.cpp
  src/v20190116/model/ConsumeCustomMFATokenRequest.cpp
  src/v20190116/model/AccessKey.cpp
  src/v20190116/model/GetGroupResponse.cpp
  src/v20190116/model/DeleteSAMLProviderRequest.cpp
  src/v20190116/model/DeleteSAMLProviderResponse.cpp
  src/v20190116/model/UpdateUserResponse.cpp
  src/v20190116/model/CreateServiceLinkedRoleResponse.cpp
  src/v20190116/model/ListUsersRequest.cpp
  src/v20190116/model/ListCollaboratorsRequest.cpp
  src/v20190116/model/UpdatePolicyResponse.cpp
  src/v20190116/model/CreateGroupRequest.cpp
  src/v20190116/model/UpdateGroupResponse.cpp
  src/v20190116/model/ListEntitiesForPolicyRequest.cpp
  src/v20190116/model/ListPoliciesRequest.cpp
  src/v20190116/model/GetServiceLinkedRoleDeletionStatusRequest.cpp
  src/v20190116/model/DetachGroupPolicyResponse.cpp
  src/v20190116/model/CreatePolicyRequest.cpp
  src/v20190116/model/DeletePolicyVersionRequest.cpp
  src/v20190116/model/UpdateGroupRequest.cpp
  src/v20190116/model/GetPolicyVersionResponse.cpp
  src/v20190116/model/CreateRoleResponse.cpp
  src/v20190116/model/GetSAMLProviderResponse.cpp
  src/v20190116/model/ListPolicyVersionsResponse.cpp
  src/v20190116/model/GetPolicyRequest.cpp
  src/v20190116/model/AddUserToGroupRequest.cpp
  src/v20190116/model/RemoveUserFromGroupResponse.cpp
  src/v20190116/model/DetachRolePolicyResponse.cpp
  src/v20190116/model/AttachedPolicyOfRole.cpp
  src/v20190116/model/ListSAMLProvidersResponse.cpp
  src/v20190116/model/SetDefaultPolicyVersionResponse.cpp
  src/v20190116/model/ListAttachedRolePoliciesRequest.cpp
  src/v20190116/model/GetSAMLProviderRequest.cpp
  src/v20190116/model/DetachUserPolicyResponse.cpp
  src/v20190116/model/GetRoleResponse.cpp
  src/v20190116/model/CreateRoleRequest.cpp
  src/v20190116/model/DeleteServiceLinkedRoleResponse.cpp
  src/v20190116/model/GetPolicyResponse.cpp
  src/v20190116/model/DeleteGroupResponse.cpp
  src/v20190116/model/AttachGroupPolicyRequest.cpp
  src/v20190116/model/DeleteServiceLinkedRoleRequest.cpp
  src/v20190116/model/AttachEntityOfPolicy.cpp
  src/v20190116/model/ListUsersForGroupResponse.cpp
  src/v20190116/model/PolicyVersionDetail.cpp
  src/v20190116/model/AddUserResponse.cpp
  src/v20190116/model/ListEntitiesForPolicyResponse.cpp
  src/v20190116/model/AddUserToGroupResponse.cpp
  src/v20190116/model/AttachUserPolicyResponse.cpp
  src/v20190116/model/SetMfaFlagRequest.cpp
  src/v20190116/model/ListCollaboratorsResponse.cpp
  src/v20190116/model/ListAccessKeysResponse.cpp
  src/v20190116/model/ListAttachedUserPoliciesRequest.cpp
  src/v20190116/model/UpdatePolicyRequest.cpp
  src/v20190116/model/GroupMemberInfo.cpp
  src/v20190116/model/CreateGroupResponse.cpp
  )

set(cam_include
    include/tencentcloud/cam
  )

add_library(cam ${LIB_TYPE}
  ${cam_public_header}
  ${cam_public_header_model}
  ${cam_src})

set_target_properties(cam
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cam
  )

target_include_directories(cam
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cam
  core)

#install(FILES ${cam_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cam/v20190116)
#install(FILES ${cam_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cam/v20190116/model)
install(DIRECTORY ${cam_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cam
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
