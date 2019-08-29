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

set(chdfs_public_header
  include/tencentcloud/chdfs/v20190718/ChdfsClient.h
  )

set(chdfs_public_header_model
  include/tencentcloud/chdfs/v20190718/model/CreateFileSystemResponse.h
  include/tencentcloud/chdfs/v20190718/model/AccessRule.h
  include/tencentcloud/chdfs/v20190718/model/DescribeFileSystemResponse.h
  include/tencentcloud/chdfs/v20190718/model/AccessGroup.h
  include/tencentcloud/chdfs/v20190718/model/ModifyFileSystemResponse.h
  include/tencentcloud/chdfs/v20190718/model/ModifyAccessGroupRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeFileSystemsResponse.h
  include/tencentcloud/chdfs/v20190718/model/DescribeFileSystemRequest.h
  include/tencentcloud/chdfs/v20190718/model/CreateMountPointRequest.h
  include/tencentcloud/chdfs/v20190718/model/DeleteAccessGroupRequest.h
  include/tencentcloud/chdfs/v20190718/model/DeleteFileSystemRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeMountPointRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeAccessGroupsRequest.h
  include/tencentcloud/chdfs/v20190718/model/DeleteAccessGroupResponse.h
  include/tencentcloud/chdfs/v20190718/model/DeleteMountPointResponse.h
  include/tencentcloud/chdfs/v20190718/model/CreateMountPointResponse.h
  include/tencentcloud/chdfs/v20190718/model/CreateFileSystemRequest.h
  include/tencentcloud/chdfs/v20190718/model/ModifyFileSystemRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeMountPointsResponse.h
  include/tencentcloud/chdfs/v20190718/model/DeleteMountPointRequest.h
  include/tencentcloud/chdfs/v20190718/model/DeleteFileSystemResponse.h
  include/tencentcloud/chdfs/v20190718/model/Filter.h
  include/tencentcloud/chdfs/v20190718/model/CreateAccessGroupResponse.h
  include/tencentcloud/chdfs/v20190718/model/FileSystem.h
  include/tencentcloud/chdfs/v20190718/model/ModifyMountPointRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeAccessGroupsResponse.h
  include/tencentcloud/chdfs/v20190718/model/CreateAccessRulesResponse.h
  include/tencentcloud/chdfs/v20190718/model/DeleteAccessRulesRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeAccessRulesResponse.h
  include/tencentcloud/chdfs/v20190718/model/DescribeFileSystemsRequest.h
  include/tencentcloud/chdfs/v20190718/model/CreateAccessRulesRequest.h
  include/tencentcloud/chdfs/v20190718/model/DeleteAccessRulesResponse.h
  include/tencentcloud/chdfs/v20190718/model/MountPoint.h
  include/tencentcloud/chdfs/v20190718/model/DescribeAccessRulesRequest.h
  include/tencentcloud/chdfs/v20190718/model/ModifyAccessRulesResponse.h
  include/tencentcloud/chdfs/v20190718/model/DescribeMountPointsRequest.h
  include/tencentcloud/chdfs/v20190718/model/ModifyAccessGroupResponse.h
  include/tencentcloud/chdfs/v20190718/model/ModifyMountPointResponse.h
  include/tencentcloud/chdfs/v20190718/model/ModifyAccessRulesRequest.h
  include/tencentcloud/chdfs/v20190718/model/CreateAccessGroupRequest.h
  include/tencentcloud/chdfs/v20190718/model/DescribeMountPointResponse.h
  )

set(chdfs_src
  src/v20190718/ChdfsClient.cpp
  src/v20190718/model/CreateFileSystemResponse.cpp
  src/v20190718/model/AccessRule.cpp
  src/v20190718/model/DescribeFileSystemResponse.cpp
  src/v20190718/model/AccessGroup.cpp
  src/v20190718/model/ModifyFileSystemResponse.cpp
  src/v20190718/model/ModifyAccessGroupRequest.cpp
  src/v20190718/model/DescribeFileSystemsResponse.cpp
  src/v20190718/model/DescribeFileSystemRequest.cpp
  src/v20190718/model/CreateMountPointRequest.cpp
  src/v20190718/model/DeleteAccessGroupRequest.cpp
  src/v20190718/model/DeleteFileSystemRequest.cpp
  src/v20190718/model/DescribeMountPointRequest.cpp
  src/v20190718/model/DescribeAccessGroupsRequest.cpp
  src/v20190718/model/DeleteAccessGroupResponse.cpp
  src/v20190718/model/DeleteMountPointResponse.cpp
  src/v20190718/model/CreateMountPointResponse.cpp
  src/v20190718/model/CreateFileSystemRequest.cpp
  src/v20190718/model/ModifyFileSystemRequest.cpp
  src/v20190718/model/DescribeMountPointsResponse.cpp
  src/v20190718/model/DeleteMountPointRequest.cpp
  src/v20190718/model/DeleteFileSystemResponse.cpp
  src/v20190718/model/Filter.cpp
  src/v20190718/model/CreateAccessGroupResponse.cpp
  src/v20190718/model/FileSystem.cpp
  src/v20190718/model/ModifyMountPointRequest.cpp
  src/v20190718/model/DescribeAccessGroupsResponse.cpp
  src/v20190718/model/CreateAccessRulesResponse.cpp
  src/v20190718/model/DeleteAccessRulesRequest.cpp
  src/v20190718/model/DescribeAccessRulesResponse.cpp
  src/v20190718/model/DescribeFileSystemsRequest.cpp
  src/v20190718/model/CreateAccessRulesRequest.cpp
  src/v20190718/model/DeleteAccessRulesResponse.cpp
  src/v20190718/model/MountPoint.cpp
  src/v20190718/model/DescribeAccessRulesRequest.cpp
  src/v20190718/model/ModifyAccessRulesResponse.cpp
  src/v20190718/model/DescribeMountPointsRequest.cpp
  src/v20190718/model/ModifyAccessGroupResponse.cpp
  src/v20190718/model/ModifyMountPointResponse.cpp
  src/v20190718/model/ModifyAccessRulesRequest.cpp
  src/v20190718/model/CreateAccessGroupRequest.cpp
  src/v20190718/model/DescribeMountPointResponse.cpp
  )

set(chdfs_include
    include/tencentcloud/chdfs
  )

add_library(chdfs ${LIB_TYPE}
  ${chdfs_public_header}
  ${chdfs_public_header_model}
  ${chdfs_src})

set_target_properties(chdfs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}chdfs
  )

target_include_directories(chdfs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(chdfs
  core)

#install(FILES ${chdfs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/chdfs/v20190718)
#install(FILES ${chdfs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/chdfs/v20190718/model)
install(DIRECTORY ${chdfs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS chdfs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
