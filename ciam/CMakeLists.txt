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

set(ciam_public_header
  include/tencentcloud/ciam/v20220331/CiamClient.h
  )

set(ciam_public_header_model
  include/tencentcloud/ciam/v20220331/model/UpdateUserRequest.h
  include/tencentcloud/ciam/v20220331/model/DescribeUserByIdRequest.h
  include/tencentcloud/ciam/v20220331/model/ListUserRequest.h
  include/tencentcloud/ciam/v20220331/model/ResetPasswordRequest.h
  include/tencentcloud/ciam/v20220331/model/ErrorDetails.h
  include/tencentcloud/ciam/v20220331/model/ListJobsRequest.h
  include/tencentcloud/ciam/v20220331/model/DescribeUserRequest.h
  include/tencentcloud/ciam/v20220331/model/UserGroup.h
  include/tencentcloud/ciam/v20220331/model/UserStore.h
  include/tencentcloud/ciam/v20220331/model/DeleteUsersRequest.h
  include/tencentcloud/ciam/v20220331/model/ImportUser.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserStatusResponse.h
  include/tencentcloud/ciam/v20220331/model/FailedUsers.h
  include/tencentcloud/ciam/v20220331/model/ListUserByPropertyRequest.h
  include/tencentcloud/ciam/v20220331/model/CreateUserResponse.h
  include/tencentcloud/ciam/v20220331/model/Pageable.h
  include/tencentcloud/ciam/v20220331/model/Filter.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserGroupRequest.h
  include/tencentcloud/ciam/v20220331/model/ResetPasswordResponse.h
  include/tencentcloud/ciam/v20220331/model/ListUserGroupsRequest.h
  include/tencentcloud/ciam/v20220331/model/Salt.h
  include/tencentcloud/ciam/v20220331/model/ListUserByPropertyResponse.h
  include/tencentcloud/ciam/v20220331/model/ListUserStoreRequest.h
  include/tencentcloud/ciam/v20220331/model/CreateUserGroupResponse.h
  include/tencentcloud/ciam/v20220331/model/CreateUserStoreRequest.h
  include/tencentcloud/ciam/v20220331/model/DescribeUserByIdResponse.h
  include/tencentcloud/ciam/v20220331/model/DeleteUserStoreResponse.h
  include/tencentcloud/ciam/v20220331/model/Job.h
  include/tencentcloud/ciam/v20220331/model/CreateFileExportUserJobRequest.h
  include/tencentcloud/ciam/v20220331/model/DeleteUserGroupsRequest.h
  include/tencentcloud/ciam/v20220331/model/User.h
  include/tencentcloud/ciam/v20220331/model/AppAssociatedUserGroupIds.h
  include/tencentcloud/ciam/v20220331/model/QueryUserFilter.h
  include/tencentcloud/ciam/v20220331/model/UserGroupDeleteResp.h
  include/tencentcloud/ciam/v20220331/model/Sort.h
  include/tencentcloud/ciam/v20220331/model/DeleteUserGroupsResponse.h
  include/tencentcloud/ciam/v20220331/model/ListUserGroupsResponse.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserResponse.h
  include/tencentcloud/ciam/v20220331/model/SetPasswordRequest.h
  include/tencentcloud/ciam/v20220331/model/SaltLocation.h
  include/tencentcloud/ciam/v20220331/model/CreateUserGroupRequest.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserStatusRequest.h
  include/tencentcloud/ciam/v20220331/model/ListJobsResponse.h
  include/tencentcloud/ciam/v20220331/model/ExportPropertyMap.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserStoreResponse.h
  include/tencentcloud/ciam/v20220331/model/LinkAccountResponse.h
  include/tencentcloud/ciam/v20220331/model/CreateUserRequest.h
  include/tencentcloud/ciam/v20220331/model/DeleteUserStoreRequest.h
  include/tencentcloud/ciam/v20220331/model/DeleteUsersResponse.h
  include/tencentcloud/ciam/v20220331/model/CreateApiImportUserJobRequest.h
  include/tencentcloud/ciam/v20220331/model/CreateFileExportUserJobResponse.h
  include/tencentcloud/ciam/v20220331/model/CreateApiImportUserJobResponse.h
  include/tencentcloud/ciam/v20220331/model/LinkAccountRequest.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserStoreRequest.h
  include/tencentcloud/ciam/v20220331/model/ListLogMessageByConditionRequest.h
  include/tencentcloud/ciam/v20220331/model/UpdateUserGroupResponse.h
  include/tencentcloud/ciam/v20220331/model/SaltLocationRule.h
  include/tencentcloud/ciam/v20220331/model/MemberMap.h
  include/tencentcloud/ciam/v20220331/model/SetPasswordResponse.h
  include/tencentcloud/ciam/v20220331/model/CreateUserStoreResponse.h
  include/tencentcloud/ciam/v20220331/model/ListUserStoreResponse.h
  include/tencentcloud/ciam/v20220331/model/DescribeUserResponse.h
  include/tencentcloud/ciam/v20220331/model/ListUserResponse.h
  include/tencentcloud/ciam/v20220331/model/LogMessage.h
  include/tencentcloud/ciam/v20220331/model/ListLogMessageByConditionResponse.h
  )

set(ciam_src
  src/v20220331/CiamClient.cpp
  src/v20220331/model/UpdateUserRequest.cpp
  src/v20220331/model/DescribeUserByIdRequest.cpp
  src/v20220331/model/ListUserRequest.cpp
  src/v20220331/model/ResetPasswordRequest.cpp
  src/v20220331/model/ErrorDetails.cpp
  src/v20220331/model/ListJobsRequest.cpp
  src/v20220331/model/DescribeUserRequest.cpp
  src/v20220331/model/UserGroup.cpp
  src/v20220331/model/UserStore.cpp
  src/v20220331/model/DeleteUsersRequest.cpp
  src/v20220331/model/ImportUser.cpp
  src/v20220331/model/UpdateUserStatusResponse.cpp
  src/v20220331/model/FailedUsers.cpp
  src/v20220331/model/ListUserByPropertyRequest.cpp
  src/v20220331/model/CreateUserResponse.cpp
  src/v20220331/model/Pageable.cpp
  src/v20220331/model/Filter.cpp
  src/v20220331/model/UpdateUserGroupRequest.cpp
  src/v20220331/model/ResetPasswordResponse.cpp
  src/v20220331/model/ListUserGroupsRequest.cpp
  src/v20220331/model/Salt.cpp
  src/v20220331/model/ListUserByPropertyResponse.cpp
  src/v20220331/model/ListUserStoreRequest.cpp
  src/v20220331/model/CreateUserGroupResponse.cpp
  src/v20220331/model/CreateUserStoreRequest.cpp
  src/v20220331/model/DescribeUserByIdResponse.cpp
  src/v20220331/model/DeleteUserStoreResponse.cpp
  src/v20220331/model/Job.cpp
  src/v20220331/model/CreateFileExportUserJobRequest.cpp
  src/v20220331/model/DeleteUserGroupsRequest.cpp
  src/v20220331/model/User.cpp
  src/v20220331/model/AppAssociatedUserGroupIds.cpp
  src/v20220331/model/QueryUserFilter.cpp
  src/v20220331/model/UserGroupDeleteResp.cpp
  src/v20220331/model/Sort.cpp
  src/v20220331/model/DeleteUserGroupsResponse.cpp
  src/v20220331/model/ListUserGroupsResponse.cpp
  src/v20220331/model/UpdateUserResponse.cpp
  src/v20220331/model/SetPasswordRequest.cpp
  src/v20220331/model/SaltLocation.cpp
  src/v20220331/model/CreateUserGroupRequest.cpp
  src/v20220331/model/UpdateUserStatusRequest.cpp
  src/v20220331/model/ListJobsResponse.cpp
  src/v20220331/model/ExportPropertyMap.cpp
  src/v20220331/model/UpdateUserStoreResponse.cpp
  src/v20220331/model/LinkAccountResponse.cpp
  src/v20220331/model/CreateUserRequest.cpp
  src/v20220331/model/DeleteUserStoreRequest.cpp
  src/v20220331/model/DeleteUsersResponse.cpp
  src/v20220331/model/CreateApiImportUserJobRequest.cpp
  src/v20220331/model/CreateFileExportUserJobResponse.cpp
  src/v20220331/model/CreateApiImportUserJobResponse.cpp
  src/v20220331/model/LinkAccountRequest.cpp
  src/v20220331/model/UpdateUserStoreRequest.cpp
  src/v20220331/model/ListLogMessageByConditionRequest.cpp
  src/v20220331/model/UpdateUserGroupResponse.cpp
  src/v20220331/model/SaltLocationRule.cpp
  src/v20220331/model/MemberMap.cpp
  src/v20220331/model/SetPasswordResponse.cpp
  src/v20220331/model/CreateUserStoreResponse.cpp
  src/v20220331/model/ListUserStoreResponse.cpp
  src/v20220331/model/DescribeUserResponse.cpp
  src/v20220331/model/ListUserResponse.cpp
  src/v20220331/model/LogMessage.cpp
  src/v20220331/model/ListLogMessageByConditionResponse.cpp
  )

set(ciam_include
    include/tencentcloud/ciam
  )

add_library(ciam ${LIB_TYPE}
  ${ciam_public_header}
  ${ciam_public_header_model}
  ${ciam_src})

set_target_properties(ciam
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ciam
  )

target_include_directories(ciam
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ciam
  core)

#install(FILES ${ciam_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ciam/v20220331)
#install(FILES ${ciam_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ciam/v20220331/model)
install(DIRECTORY ${ciam_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ciam
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
