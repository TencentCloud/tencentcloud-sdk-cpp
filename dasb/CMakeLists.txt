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

set(dasb_public_header
  include/tencentcloud/dasb/v20191018/DasbClient.h
  )

set(dasb_public_header_model
  include/tencentcloud/dasb/v20191018/model/Group.h
  include/tencentcloud/dasb/v20191018/model/CreateDeviceGroupResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteAclsRequest.h
  include/tencentcloud/dasb/v20191018/model/AddDeviceGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyUserRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteUsersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/Department.h
  include/tencentcloud/dasb/v20191018/model/AddUserGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateUserResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyUserResponse.h
  include/tencentcloud/dasb/v20191018/model/AddUserGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateUserGroupResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDevicesResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateAclRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/User.h
  include/tencentcloud/dasb/v20191018/model/ModifyAclResponse.h
  include/tencentcloud/dasb/v20191018/model/Device.h
  include/tencentcloud/dasb/v20191018/model/DescribeAclsRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/Resource.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceResourceRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateDeviceGroupRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateAclResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeAclsResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUsersResponse.h
  include/tencentcloud/dasb/v20191018/model/Acl.h
  include/tencentcloud/dasb/v20191018/model/DescribeDevicesRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/ModifyAclRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeResourcesRequest.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceResourceResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateUserRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteUsersResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeResourcesResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUsersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/CmdTemplate.h
  include/tencentcloud/dasb/v20191018/model/DeleteAclsResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateUserGroupRequest.h
  include/tencentcloud/dasb/v20191018/model/AddDeviceGroupMembersRequest.h
  )

set(dasb_src
  src/v20191018/DasbClient.cpp
  src/v20191018/model/Group.cpp
  src/v20191018/model/CreateDeviceGroupResponse.cpp
  src/v20191018/model/DeleteAclsRequest.cpp
  src/v20191018/model/AddDeviceGroupMembersResponse.cpp
  src/v20191018/model/ModifyUserRequest.cpp
  src/v20191018/model/DeleteUsersRequest.cpp
  src/v20191018/model/DeleteDeviceGroupMembersResponse.cpp
  src/v20191018/model/Department.cpp
  src/v20191018/model/AddUserGroupMembersResponse.cpp
  src/v20191018/model/DescribeDasbImageIdsResponse.cpp
  src/v20191018/model/CreateUserResponse.cpp
  src/v20191018/model/ModifyUserResponse.cpp
  src/v20191018/model/AddUserGroupMembersRequest.cpp
  src/v20191018/model/DescribeUserGroupsRequest.cpp
  src/v20191018/model/DescribeUserGroupMembersResponse.cpp
  src/v20191018/model/CreateUserGroupResponse.cpp
  src/v20191018/model/DescribeDevicesResponse.cpp
  src/v20191018/model/DescribeUserGroupMembersRequest.cpp
  src/v20191018/model/CreateAclRequest.cpp
  src/v20191018/model/DeleteUserGroupsRequest.cpp
  src/v20191018/model/User.cpp
  src/v20191018/model/ModifyAclResponse.cpp
  src/v20191018/model/Device.cpp
  src/v20191018/model/DescribeAclsRequest.cpp
  src/v20191018/model/DeleteDeviceGroupsRequest.cpp
  src/v20191018/model/DeleteUserGroupMembersRequest.cpp
  src/v20191018/model/DescribeDasbImageIdsRequest.cpp
  src/v20191018/model/DeleteDeviceGroupMembersRequest.cpp
  src/v20191018/model/Resource.cpp
  src/v20191018/model/DeleteUserGroupsResponse.cpp
  src/v20191018/model/BindDeviceResourceRequest.cpp
  src/v20191018/model/CreateDeviceGroupRequest.cpp
  src/v20191018/model/CreateAclResponse.cpp
  src/v20191018/model/DescribeAclsResponse.cpp
  src/v20191018/model/DescribeUsersResponse.cpp
  src/v20191018/model/Acl.cpp
  src/v20191018/model/DescribeDevicesRequest.cpp
  src/v20191018/model/DescribeDeviceGroupsRequest.cpp
  src/v20191018/model/ModifyAclRequest.cpp
  src/v20191018/model/DescribeResourcesRequest.cpp
  src/v20191018/model/BindDeviceResourceResponse.cpp
  src/v20191018/model/CreateUserRequest.cpp
  src/v20191018/model/DeleteUsersResponse.cpp
  src/v20191018/model/DescribeDeviceGroupsResponse.cpp
  src/v20191018/model/DescribeResourcesResponse.cpp
  src/v20191018/model/DescribeUsersRequest.cpp
  src/v20191018/model/DeleteUserGroupMembersResponse.cpp
  src/v20191018/model/DescribeUserGroupsResponse.cpp
  src/v20191018/model/DescribeDeviceGroupMembersResponse.cpp
  src/v20191018/model/CmdTemplate.cpp
  src/v20191018/model/DeleteAclsResponse.cpp
  src/v20191018/model/DescribeDeviceGroupMembersRequest.cpp
  src/v20191018/model/DeleteDeviceGroupsResponse.cpp
  src/v20191018/model/CreateUserGroupRequest.cpp
  src/v20191018/model/AddDeviceGroupMembersRequest.cpp
  )

set(dasb_include
    include/tencentcloud/dasb
  )

add_library(dasb ${LIB_TYPE}
  ${dasb_public_header}
  ${dasb_public_header_model}
  ${dasb_src})

set_target_properties(dasb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dasb
  )

target_include_directories(dasb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dasb
  core)

#install(FILES ${dasb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dasb/v20191018)
#install(FILES ${dasb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dasb/v20191018/model)
install(DIRECTORY ${dasb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dasb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
