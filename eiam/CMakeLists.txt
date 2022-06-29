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

set(eiam_public_header
  include/tencentcloud/eiam/v20210420/EiamClient.h
  )

set(eiam_public_header_model
  include/tencentcloud/eiam/v20210420/model/DescribeOrgNodeResponse.h
  include/tencentcloud/eiam/v20210420/model/ListApplicationsRequest.h
  include/tencentcloud/eiam/v20210420/model/UserSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/AddAccountToAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DeleteUserRequest.h
  include/tencentcloud/eiam/v20210420/model/AuthorizationUserResouceInfo.h
  include/tencentcloud/eiam/v20210420/model/CreateAppAccountResponse.h
  include/tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/ModifyApplicationResponse.h
  include/tencentcloud/eiam/v20210420/model/OrgNodeChildUserInfo.h
  include/tencentcloud/eiam/v20210420/model/DeleteAccountGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/AddUserToUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/ApplicationInformation.h
  include/tencentcloud/eiam/v20210420/model/ListUsersResponse.h
  include/tencentcloud/eiam/v20210420/model/DeleteAppAccountRequest.h
  include/tencentcloud/eiam/v20210420/model/UserGroupInfo.h
  include/tencentcloud/eiam/v20210420/model/UpdateOrgNodeRequest.h
  include/tencentcloud/eiam/v20210420/model/CreateOrgNodeRequest.h
  include/tencentcloud/eiam/v20210420/model/RemoveUserFromUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/ModifyAppAccountRequest.h
  include/tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DeleteAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/UserGroupInfoSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserInfoRequest.h
  include/tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToOrgNodeRequest.h
  include/tencentcloud/eiam/v20210420/model/DescribePublicKeyResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeOrgNodeRequest.h
  include/tencentcloud/eiam/v20210420/model/CreateAccountGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/CreateOrgNodeResponse.h
  include/tencentcloud/eiam/v20210420/model/UserGroupInformationSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/AuthorizationResourceEntityInfo.h
  include/tencentcloud/eiam/v20210420/model/AccountGroupSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/CreateUserResponse.h
  include/tencentcloud/eiam/v20210420/model/ThirdPartyAccountInfo.h
  include/tencentcloud/eiam/v20210420/model/ModifyAppAccountResponse.h
  include/tencentcloud/eiam/v20210420/model/DeleteUserResponse.h
  include/tencentcloud/eiam/v20210420/model/ListUsersInUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/CreateAppAccountRequest.h
  include/tencentcloud/eiam/v20210420/model/DescribeApplicationResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeAppAccountResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserGroupResourcesAuthorizationResponse.h
  include/tencentcloud/eiam/v20210420/model/UserGroupInformation.h
  include/tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/DescribeAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/CreateUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/DescribeOrgResourcesAuthorizationRequest.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserInfoResponse.h
  include/tencentcloud/eiam/v20210420/model/DeleteOrgNodeRequest.h
  include/tencentcloud/eiam/v20210420/model/DeleteUsersResponse.h
  include/tencentcloud/eiam/v20210420/model/AppAccountInfo.h
  include/tencentcloud/eiam/v20210420/model/DescribeAccountGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/AppAccountSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/DescribeOrgResourcesAuthorizationResponse.h
  include/tencentcloud/eiam/v20210420/model/ListUsersInUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/UserInfo.h
  include/tencentcloud/eiam/v20210420/model/DeleteAppAccountResponse.h
  include/tencentcloud/eiam/v20210420/model/ModifyAccountGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeResponse.h
  include/tencentcloud/eiam/v20210420/model/ListApplicationAuthorizationsRequest.h
  include/tencentcloud/eiam/v20210420/model/ModifyAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DeleteUsersRequest.h
  include/tencentcloud/eiam/v20210420/model/AccountGroupInfo.h
  include/tencentcloud/eiam/v20210420/model/OrgNodeChildInfo.h
  include/tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserRequest.h
  include/tencentcloud/eiam/v20210420/model/DeleteOrgNodeResponse.h
  include/tencentcloud/eiam/v20210420/model/ListAccountInAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserResourcesAuthorizationResponse.h
  include/tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeRequest.h
  include/tencentcloud/eiam/v20210420/model/InheritedForm.h
  include/tencentcloud/eiam/v20210420/model/RemoveAccountFromAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserGroupResourcesAuthorizationRequest.h
  include/tencentcloud/eiam/v20210420/model/ListUserGroupsRequest.h
  include/tencentcloud/eiam/v20210420/model/UpdateOrgNodeResponse.h
  include/tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserResponse.h
  include/tencentcloud/eiam/v20210420/model/ModifyApplicationRequest.h
  include/tencentcloud/eiam/v20210420/model/CreateUserRequest.h
  include/tencentcloud/eiam/v20210420/model/DescribePublicKeyRequest.h
  include/tencentcloud/eiam/v20210420/model/RemoveAccountFromAccountGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/ListApplicationAuthorizationsResponse.h
  include/tencentcloud/eiam/v20210420/model/SortCondition.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserRequest.h
  include/tencentcloud/eiam/v20210420/model/UserInformation.h
  include/tencentcloud/eiam/v20210420/model/DescribeApplicationRequest.h
  include/tencentcloud/eiam/v20210420/model/ModifyUserInfoRequest.h
  include/tencentcloud/eiam/v20210420/model/RemoveUserFromUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserThirdPartyAccountInfoRequest.h
  include/tencentcloud/eiam/v20210420/model/ModifyUserInfoResponse.h
  include/tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToOrgNodeResponse.h
  include/tencentcloud/eiam/v20210420/model/AddUserToUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeAppAccountRequest.h
  include/tencentcloud/eiam/v20210420/model/AuthorizationInfo.h
  include/tencentcloud/eiam/v20210420/model/CreateUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserThirdPartyAccountInfoResponse.h
  include/tencentcloud/eiam/v20210420/model/ApplicationAuthorizationInfo.h
  include/tencentcloud/eiam/v20210420/model/LinkUserInfo.h
  include/tencentcloud/eiam/v20210420/model/ListUserGroupsResponse.h
  include/tencentcloud/eiam/v20210420/model/ListAccountInAccountGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/DeleteUserGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/AuthorizationInfoSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserResponse.h
  include/tencentcloud/eiam/v20210420/model/CreateAccountGroupResponse.h
  include/tencentcloud/eiam/v20210420/model/DescribeUserResourcesAuthorizationRequest.h
  include/tencentcloud/eiam/v20210420/model/ListUsersRequest.h
  include/tencentcloud/eiam/v20210420/model/DeleteUserGroupRequest.h
  include/tencentcloud/eiam/v20210420/model/ApplicationInfoSearchCriteria.h
  include/tencentcloud/eiam/v20210420/model/ListApplicationsResponse.h
  include/tencentcloud/eiam/v20210420/model/AddAccountToAccountGroupRequest.h
  )

set(eiam_src
  src/v20210420/EiamClient.cpp
  src/v20210420/model/DescribeOrgNodeResponse.cpp
  src/v20210420/model/ListApplicationsRequest.cpp
  src/v20210420/model/UserSearchCriteria.cpp
  src/v20210420/model/AddAccountToAccountGroupResponse.cpp
  src/v20210420/model/DeleteUserRequest.cpp
  src/v20210420/model/AuthorizationUserResouceInfo.cpp
  src/v20210420/model/CreateAppAccountResponse.cpp
  src/v20210420/model/ListAuthorizedApplicationsToUserGroupRequest.cpp
  src/v20210420/model/ModifyApplicationResponse.cpp
  src/v20210420/model/OrgNodeChildUserInfo.cpp
  src/v20210420/model/DeleteAccountGroupRequest.cpp
  src/v20210420/model/AddUserToUserGroupRequest.cpp
  src/v20210420/model/ApplicationInformation.cpp
  src/v20210420/model/ListUsersResponse.cpp
  src/v20210420/model/DeleteAppAccountRequest.cpp
  src/v20210420/model/UserGroupInfo.cpp
  src/v20210420/model/UpdateOrgNodeRequest.cpp
  src/v20210420/model/CreateOrgNodeRequest.cpp
  src/v20210420/model/RemoveUserFromUserGroupRequest.cpp
  src/v20210420/model/ModifyAppAccountRequest.cpp
  src/v20210420/model/ListAuthorizedApplicationsToUserGroupResponse.cpp
  src/v20210420/model/DeleteAccountGroupResponse.cpp
  src/v20210420/model/UserGroupInfoSearchCriteria.cpp
  src/v20210420/model/DescribeUserInfoRequest.cpp
  src/v20210420/model/ListAuthorizedApplicationsToOrgNodeRequest.cpp
  src/v20210420/model/DescribePublicKeyResponse.cpp
  src/v20210420/model/DescribeOrgNodeRequest.cpp
  src/v20210420/model/CreateAccountGroupRequest.cpp
  src/v20210420/model/DescribeUserGroupRequest.cpp
  src/v20210420/model/CreateOrgNodeResponse.cpp
  src/v20210420/model/UserGroupInformationSearchCriteria.cpp
  src/v20210420/model/AuthorizationResourceEntityInfo.cpp
  src/v20210420/model/AccountGroupSearchCriteria.cpp
  src/v20210420/model/CreateUserResponse.cpp
  src/v20210420/model/ThirdPartyAccountInfo.cpp
  src/v20210420/model/ModifyAppAccountResponse.cpp
  src/v20210420/model/DeleteUserResponse.cpp
  src/v20210420/model/ListUsersInUserGroupResponse.cpp
  src/v20210420/model/CreateAppAccountRequest.cpp
  src/v20210420/model/DescribeApplicationResponse.cpp
  src/v20210420/model/DescribeAppAccountResponse.cpp
  src/v20210420/model/DescribeUserGroupResourcesAuthorizationResponse.cpp
  src/v20210420/model/UserGroupInformation.cpp
  src/v20210420/model/ListUsersInOrgNodeSearchCriteria.cpp
  src/v20210420/model/DescribeAccountGroupResponse.cpp
  src/v20210420/model/CreateUserGroupRequest.cpp
  src/v20210420/model/DescribeOrgResourcesAuthorizationRequest.cpp
  src/v20210420/model/DescribeUserInfoResponse.cpp
  src/v20210420/model/DeleteOrgNodeRequest.cpp
  src/v20210420/model/DeleteUsersResponse.cpp
  src/v20210420/model/AppAccountInfo.cpp
  src/v20210420/model/DescribeAccountGroupRequest.cpp
  src/v20210420/model/AppAccountSearchCriteria.cpp
  src/v20210420/model/DescribeOrgResourcesAuthorizationResponse.cpp
  src/v20210420/model/ListUsersInUserGroupRequest.cpp
  src/v20210420/model/UserInfo.cpp
  src/v20210420/model/DeleteAppAccountResponse.cpp
  src/v20210420/model/ModifyAccountGroupRequest.cpp
  src/v20210420/model/ListUsersInOrgNodeResponse.cpp
  src/v20210420/model/ListApplicationAuthorizationsRequest.cpp
  src/v20210420/model/ModifyAccountGroupResponse.cpp
  src/v20210420/model/DeleteUsersRequest.cpp
  src/v20210420/model/AccountGroupInfo.cpp
  src/v20210420/model/OrgNodeChildInfo.cpp
  src/v20210420/model/ListAuthorizedApplicationsToUserRequest.cpp
  src/v20210420/model/DeleteOrgNodeResponse.cpp
  src/v20210420/model/ListAccountInAccountGroupResponse.cpp
  src/v20210420/model/DescribeUserResourcesAuthorizationResponse.cpp
  src/v20210420/model/ListUsersInOrgNodeRequest.cpp
  src/v20210420/model/InheritedForm.cpp
  src/v20210420/model/RemoveAccountFromAccountGroupResponse.cpp
  src/v20210420/model/DescribeUserGroupResourcesAuthorizationRequest.cpp
  src/v20210420/model/ListUserGroupsRequest.cpp
  src/v20210420/model/UpdateOrgNodeResponse.cpp
  src/v20210420/model/ListAuthorizedApplicationsToUserResponse.cpp
  src/v20210420/model/ModifyApplicationRequest.cpp
  src/v20210420/model/CreateUserRequest.cpp
  src/v20210420/model/DescribePublicKeyRequest.cpp
  src/v20210420/model/RemoveAccountFromAccountGroupRequest.cpp
  src/v20210420/model/ListApplicationAuthorizationsResponse.cpp
  src/v20210420/model/SortCondition.cpp
  src/v20210420/model/DescribeUserGroupResponse.cpp
  src/v20210420/model/ListUserGroupsOfUserRequest.cpp
  src/v20210420/model/UserInformation.cpp
  src/v20210420/model/DescribeApplicationRequest.cpp
  src/v20210420/model/ModifyUserInfoRequest.cpp
  src/v20210420/model/RemoveUserFromUserGroupResponse.cpp
  src/v20210420/model/DescribeUserThirdPartyAccountInfoRequest.cpp
  src/v20210420/model/ModifyUserInfoResponse.cpp
  src/v20210420/model/ListAuthorizedApplicationsToOrgNodeResponse.cpp
  src/v20210420/model/AddUserToUserGroupResponse.cpp
  src/v20210420/model/DescribeAppAccountRequest.cpp
  src/v20210420/model/AuthorizationInfo.cpp
  src/v20210420/model/CreateUserGroupResponse.cpp
  src/v20210420/model/DescribeUserThirdPartyAccountInfoResponse.cpp
  src/v20210420/model/ApplicationAuthorizationInfo.cpp
  src/v20210420/model/LinkUserInfo.cpp
  src/v20210420/model/ListUserGroupsResponse.cpp
  src/v20210420/model/ListAccountInAccountGroupRequest.cpp
  src/v20210420/model/DeleteUserGroupResponse.cpp
  src/v20210420/model/AuthorizationInfoSearchCriteria.cpp
  src/v20210420/model/ListUserGroupsOfUserResponse.cpp
  src/v20210420/model/CreateAccountGroupResponse.cpp
  src/v20210420/model/DescribeUserResourcesAuthorizationRequest.cpp
  src/v20210420/model/ListUsersRequest.cpp
  src/v20210420/model/DeleteUserGroupRequest.cpp
  src/v20210420/model/ApplicationInfoSearchCriteria.cpp
  src/v20210420/model/ListApplicationsResponse.cpp
  src/v20210420/model/AddAccountToAccountGroupRequest.cpp
  )

set(eiam_include
    include/tencentcloud/eiam
  )

add_library(eiam ${LIB_TYPE}
  ${eiam_public_header}
  ${eiam_public_header_model}
  ${eiam_src})

set_target_properties(eiam
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eiam
  )

target_include_directories(eiam
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(eiam
  core)

#install(FILES ${eiam_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/eiam/v20210420)
#install(FILES ${eiam_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/eiam/v20210420/model)
install(DIRECTORY ${eiam_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS eiam
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
