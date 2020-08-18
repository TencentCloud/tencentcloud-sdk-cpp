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

set(cfs_public_header
  include/tencentcloud/cfs/v20190719/CfsClient.h
  )

set(cfs_public_header_model
  include/tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemResponse.h
  include/tencentcloud/cfs/v20190719/model/AvailableZone.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteMountTargetRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/PGroup.h
  include/tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteMountTargetResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeMountTargetsResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/MountInfo.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/FileSystemClient.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsResponse.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsFileSystemResponse.h
  include/tencentcloud/cfs/v20190719/model/FileSystemInfo.h
  include/tencentcloud/cfs/v20190719/model/TagInfo.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoRequest.h
  include/tencentcloud/cfs/v20190719/model/AvailableRegion.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsFileSystemRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeMountTargetsRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/SignUpCfsServiceRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusRequest.h
  include/tencentcloud/cfs/v20190719/model/PGroupInfo.h
  include/tencentcloud/cfs/v20190719/model/SignUpCfsServiceResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusResponse.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/AvailableProtoStatus.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsRulesRequest.h
  include/tencentcloud/cfs/v20190719/model/PGroupRuleInfo.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/AvailableType.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsRulesResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupResponse.h
  )

set(cfs_src
  src/v20190719/CfsClient.cpp
  src/v20190719/model/DeleteCfsFileSystemResponse.cpp
  src/v20190719/model/AvailableZone.cpp
  src/v20190719/model/UpdateCfsRuleRequest.cpp
  src/v20190719/model/DescribeCfsFileSystemsRequest.cpp
  src/v20190719/model/DeleteMountTargetRequest.cpp
  src/v20190719/model/CreateCfsRuleRequest.cpp
  src/v20190719/model/PGroup.cpp
  src/v20190719/model/DescribeAvailableZoneInfoResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemNameResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemNameRequest.cpp
  src/v20190719/model/DescribeCfsPGroupsResponse.cpp
  src/v20190719/model/DescribeCfsFileSystemClientsResponse.cpp
  src/v20190719/model/DeleteMountTargetResponse.cpp
  src/v20190719/model/DescribeMountTargetsResponse.cpp
  src/v20190719/model/DeleteCfsRuleResponse.cpp
  src/v20190719/model/DeleteCfsRuleRequest.cpp
  src/v20190719/model/UpdateCfsPGroupRequest.cpp
  src/v20190719/model/MountInfo.cpp
  src/v20190719/model/UpdateCfsRuleResponse.cpp
  src/v20190719/model/FileSystemClient.cpp
  src/v20190719/model/DescribeCfsFileSystemsResponse.cpp
  src/v20190719/model/CreateCfsFileSystemResponse.cpp
  src/v20190719/model/FileSystemInfo.cpp
  src/v20190719/model/TagInfo.cpp
  src/v20190719/model/DescribeCfsPGroupsRequest.cpp
  src/v20190719/model/DescribeCfsFileSystemClientsRequest.cpp
  src/v20190719/model/CreateCfsPGroupRequest.cpp
  src/v20190719/model/DeleteCfsPGroupResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemSizeLimitResponse.cpp
  src/v20190719/model/DescribeAvailableZoneInfoRequest.cpp
  src/v20190719/model/AvailableRegion.cpp
  src/v20190719/model/CreateCfsFileSystemRequest.cpp
  src/v20190719/model/DescribeMountTargetsRequest.cpp
  src/v20190719/model/CreateCfsPGroupResponse.cpp
  src/v20190719/model/SignUpCfsServiceRequest.cpp
  src/v20190719/model/DescribeCfsServiceStatusRequest.cpp
  src/v20190719/model/PGroupInfo.cpp
  src/v20190719/model/SignUpCfsServiceResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemPGroupRequest.cpp
  src/v20190719/model/DescribeCfsServiceStatusResponse.cpp
  src/v20190719/model/CreateCfsRuleResponse.cpp
  src/v20190719/model/AvailableProtoStatus.cpp
  src/v20190719/model/DescribeCfsRulesRequest.cpp
  src/v20190719/model/PGroupRuleInfo.cpp
  src/v20190719/model/DeleteCfsPGroupRequest.cpp
  src/v20190719/model/AvailableType.cpp
  src/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.cpp
  src/v20190719/model/DeleteCfsFileSystemRequest.cpp
  src/v20190719/model/UpdateCfsPGroupResponse.cpp
  src/v20190719/model/DescribeCfsRulesResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemPGroupResponse.cpp
  )

set(cfs_include
    include/tencentcloud/cfs
  )

add_library(cfs ${LIB_TYPE}
  ${cfs_public_header}
  ${cfs_public_header_model}
  ${cfs_src})

set_target_properties(cfs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cfs
  )

target_include_directories(cfs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cfs
  core)

#install(FILES ${cfs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfs/v20190719)
#install(FILES ${cfs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfs/v20190719/model)
install(DIRECTORY ${cfs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cfs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
