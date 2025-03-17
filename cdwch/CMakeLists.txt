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

set(cdwch_public_header
  include/tencentcloud/cdwch/v20200915/CdwchClient.h
  )

set(cdwch_public_header_model
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsRequest.h
  include/tencentcloud/cdwch/v20200915/model/ScaleOutInstanceRequest.h
  include/tencentcloud/cdwch/v20200915/model/ScaleOutInstanceResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstancesNewResponse.h
  include/tencentcloud/cdwch/v20200915/model/SecondaryZoneInfo.h
  include/tencentcloud/cdwch/v20200915/model/DatabasePrivilegeInfo.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceKeyValConfigsRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceNodesRequest.h
  include/tencentcloud/cdwch/v20200915/model/Charge.h
  include/tencentcloud/cdwch/v20200915/model/DescribeClusterConfigsResponse.h
  include/tencentcloud/cdwch/v20200915/model/ActionAlterCkUserRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisRequest.h
  include/tencentcloud/cdwch/v20200915/model/CkUserAlterInfo.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpScheduleRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeSpecResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeSpecRequest.h
  include/tencentcloud/cdwch/v20200915/model/ScaleCNOutUpInstanceResponse.h
  include/tencentcloud/cdwch/v20200915/model/DestroyInstanceRequest.h
  include/tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpTablesResponse.h
  include/tencentcloud/cdwch/v20200915/model/ClusterConfigsInfoFromEMR.h
  include/tencentcloud/cdwch/v20200915/model/ClusterInfo.h
  include/tencentcloud/cdwch/v20200915/model/OpenBackUpRequest.h
  include/tencentcloud/cdwch/v20200915/model/ModifyInstanceKeyValConfigsResponse.h
  include/tencentcloud/cdwch/v20200915/model/BackupTableContent.h
  include/tencentcloud/cdwch/v20200915/model/OpenBackUpResponse.h
  include/tencentcloud/cdwch/v20200915/model/CreateInstanceNewResponse.h
  include/tencentcloud/cdwch/v20200915/model/ConfigSubmitContext.h
  include/tencentcloud/cdwch/v20200915/model/InstanceStateInfo.h
  include/tencentcloud/cdwch/v20200915/model/TablePrivilegeInfo.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceClustersResponse.h
  include/tencentcloud/cdwch/v20200915/model/CreateInstanceNewRequest.h
  include/tencentcloud/cdwch/v20200915/model/InstanceInfo.h
  include/tencentcloud/cdwch/v20200915/model/NodeSpec.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpJobDetailResponse.h
  include/tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsRequest.h
  include/tencentcloud/cdwch/v20200915/model/ScaleUpInstanceRequest.h
  include/tencentcloud/cdwch/v20200915/model/GroupInfo.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceKeyValConfigsResponse.h
  include/tencentcloud/cdwch/v20200915/model/ServiceInfo.h
  include/tencentcloud/cdwch/v20200915/model/MapConfigItem.h
  include/tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsResponse.h
  include/tencentcloud/cdwch/v20200915/model/RecoverBackUpJobRequest.h
  include/tencentcloud/cdwch/v20200915/model/DiskSpec.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstancesNewRequest.h
  include/tencentcloud/cdwch/v20200915/model/DeleteBackUpDataResponse.h
  include/tencentcloud/cdwch/v20200915/model/ModifyInstanceKeyValConfigsRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceNodesResponse.h
  include/tencentcloud/cdwch/v20200915/model/Tag.h
  include/tencentcloud/cdwch/v20200915/model/BackUpJobDisplay.h
  include/tencentcloud/cdwch/v20200915/model/DescribeClusterConfigsRequest.h
  include/tencentcloud/cdwch/v20200915/model/ResourceSpec.h
  include/tencentcloud/cdwch/v20200915/model/SearchTags.h
  include/tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleResponse.h
  include/tencentcloud/cdwch/v20200915/model/InstanceConfigItem.h
  include/tencentcloud/cdwch/v20200915/model/RecoverBackUpJobResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpJobResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceClustersRequest.h
  include/tencentcloud/cdwch/v20200915/model/ResizeDiskRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceStateRequest.h
  include/tencentcloud/cdwch/v20200915/model/NodesSummary.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsResponse.h
  include/tencentcloud/cdwch/v20200915/model/InstanceNode.h
  include/tencentcloud/cdwch/v20200915/model/InstanceConfigInfo.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpJobDetailRequest.h
  include/tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleRequest.h
  include/tencentcloud/cdwch/v20200915/model/DeleteBackUpDataRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceRequest.h
  include/tencentcloud/cdwch/v20200915/model/InstanceDetail.h
  include/tencentcloud/cdwch/v20200915/model/ActionAlterCkUserResponse.h
  include/tencentcloud/cdwch/v20200915/model/AttachCBSSpec.h
  include/tencentcloud/cdwch/v20200915/model/ScheduleStrategy.h
  include/tencentcloud/cdwch/v20200915/model/DescribeInstanceStateResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpTablesRequest.h
  include/tencentcloud/cdwch/v20200915/model/DestroyInstanceResponse.h
  include/tencentcloud/cdwch/v20200915/model/ResizeDiskResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpScheduleResponse.h
  include/tencentcloud/cdwch/v20200915/model/ScaleCNOutUpInstanceRequest.h
  include/tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisResponse.h
  include/tencentcloud/cdwch/v20200915/model/DescribeBackUpJobRequest.h
  include/tencentcloud/cdwch/v20200915/model/ScaleUpInstanceResponse.h
  include/tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeResponse.h
  )

set(cdwch_src
  src/v20200915/CdwchClient.cpp
  src/v20200915/model/DescribeInstanceShardsRequest.cpp
  src/v20200915/model/ScaleOutInstanceRequest.cpp
  src/v20200915/model/ScaleOutInstanceResponse.cpp
  src/v20200915/model/DescribeInstancesNewResponse.cpp
  src/v20200915/model/SecondaryZoneInfo.cpp
  src/v20200915/model/DatabasePrivilegeInfo.cpp
  src/v20200915/model/DescribeInstanceKeyValConfigsRequest.cpp
  src/v20200915/model/DescribeInstanceNodesRequest.cpp
  src/v20200915/model/Charge.cpp
  src/v20200915/model/DescribeClusterConfigsResponse.cpp
  src/v20200915/model/ActionAlterCkUserRequest.cpp
  src/v20200915/model/DescribeCkSqlApisRequest.cpp
  src/v20200915/model/CkUserAlterInfo.cpp
  src/v20200915/model/DescribeBackUpScheduleRequest.cpp
  src/v20200915/model/DescribeSpecResponse.cpp
  src/v20200915/model/DescribeSpecRequest.cpp
  src/v20200915/model/ScaleCNOutUpInstanceResponse.cpp
  src/v20200915/model/DestroyInstanceRequest.cpp
  src/v20200915/model/ModifyUserNewPrivilegeRequest.cpp
  src/v20200915/model/DescribeBackUpTablesResponse.cpp
  src/v20200915/model/ClusterConfigsInfoFromEMR.cpp
  src/v20200915/model/ClusterInfo.cpp
  src/v20200915/model/OpenBackUpRequest.cpp
  src/v20200915/model/ModifyInstanceKeyValConfigsResponse.cpp
  src/v20200915/model/BackupTableContent.cpp
  src/v20200915/model/OpenBackUpResponse.cpp
  src/v20200915/model/CreateInstanceNewResponse.cpp
  src/v20200915/model/ConfigSubmitContext.cpp
  src/v20200915/model/InstanceStateInfo.cpp
  src/v20200915/model/TablePrivilegeInfo.cpp
  src/v20200915/model/DescribeInstanceClustersResponse.cpp
  src/v20200915/model/CreateInstanceNewRequest.cpp
  src/v20200915/model/InstanceInfo.cpp
  src/v20200915/model/NodeSpec.cpp
  src/v20200915/model/DescribeBackUpJobDetailResponse.cpp
  src/v20200915/model/ModifyClusterConfigsRequest.cpp
  src/v20200915/model/ScaleUpInstanceRequest.cpp
  src/v20200915/model/GroupInfo.cpp
  src/v20200915/model/DescribeInstanceKeyValConfigsResponse.cpp
  src/v20200915/model/ServiceInfo.cpp
  src/v20200915/model/MapConfigItem.cpp
  src/v20200915/model/ModifyClusterConfigsResponse.cpp
  src/v20200915/model/RecoverBackUpJobRequest.cpp
  src/v20200915/model/DiskSpec.cpp
  src/v20200915/model/DescribeInstancesNewRequest.cpp
  src/v20200915/model/DeleteBackUpDataResponse.cpp
  src/v20200915/model/ModifyInstanceKeyValConfigsRequest.cpp
  src/v20200915/model/DescribeInstanceNodesResponse.cpp
  src/v20200915/model/Tag.cpp
  src/v20200915/model/BackUpJobDisplay.cpp
  src/v20200915/model/DescribeClusterConfigsRequest.cpp
  src/v20200915/model/ResourceSpec.cpp
  src/v20200915/model/SearchTags.cpp
  src/v20200915/model/CreateBackUpScheduleResponse.cpp
  src/v20200915/model/InstanceConfigItem.cpp
  src/v20200915/model/RecoverBackUpJobResponse.cpp
  src/v20200915/model/DescribeInstanceResponse.cpp
  src/v20200915/model/DescribeBackUpJobResponse.cpp
  src/v20200915/model/DescribeInstanceClustersRequest.cpp
  src/v20200915/model/ResizeDiskRequest.cpp
  src/v20200915/model/DescribeInstanceStateRequest.cpp
  src/v20200915/model/NodesSummary.cpp
  src/v20200915/model/DescribeInstanceShardsResponse.cpp
  src/v20200915/model/InstanceNode.cpp
  src/v20200915/model/InstanceConfigInfo.cpp
  src/v20200915/model/DescribeBackUpJobDetailRequest.cpp
  src/v20200915/model/CreateBackUpScheduleRequest.cpp
  src/v20200915/model/DeleteBackUpDataRequest.cpp
  src/v20200915/model/DescribeInstanceRequest.cpp
  src/v20200915/model/InstanceDetail.cpp
  src/v20200915/model/ActionAlterCkUserResponse.cpp
  src/v20200915/model/AttachCBSSpec.cpp
  src/v20200915/model/ScheduleStrategy.cpp
  src/v20200915/model/DescribeInstanceStateResponse.cpp
  src/v20200915/model/DescribeBackUpTablesRequest.cpp
  src/v20200915/model/DestroyInstanceResponse.cpp
  src/v20200915/model/ResizeDiskResponse.cpp
  src/v20200915/model/DescribeBackUpScheduleResponse.cpp
  src/v20200915/model/ScaleCNOutUpInstanceRequest.cpp
  src/v20200915/model/DescribeCkSqlApisResponse.cpp
  src/v20200915/model/DescribeBackUpJobRequest.cpp
  src/v20200915/model/ScaleUpInstanceResponse.cpp
  src/v20200915/model/ModifyUserNewPrivilegeResponse.cpp
  )

set(cdwch_include
    include/tencentcloud/cdwch
  )

add_library(cdwch ${LIB_TYPE}
  ${cdwch_public_header}
  ${cdwch_public_header_model}
  ${cdwch_src})

set_target_properties(cdwch
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdwch
  )

target_include_directories(cdwch
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdwch
  core)

#install(FILES ${cdwch_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwch/v20200915)
#install(FILES ${cdwch_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwch/v20200915/model)
install(DIRECTORY ${cdwch_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdwch
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
