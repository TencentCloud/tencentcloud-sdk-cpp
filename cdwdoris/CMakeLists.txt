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

set(cdwdoris_public_header
  include/tencentcloud/cdwdoris/v20211228/CdwdorisClient.h
  )

set(cdwdoris_public_header_model
  include/tencentcloud/cdwdoris/v20211228/model/ModifyInstanceResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DestroyInstanceResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/ResizeDiskRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/NodeInfo.h
  include/tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/SlowQueryRecord.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/ModifyInstanceRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/ChargeProperties.h
  include/tencentcloud/cdwdoris/v20211228/model/ClusterConfigsInfoFromEMR.h
  include/tencentcloud/cdwdoris/v20211228/model/InstanceNode.h
  include/tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DestroyInstanceRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/InstanceInfo.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstancesResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstancesRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/ResizeDiskResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/AttachCBSSpec.h
  include/tencentcloud/cdwdoris/v20211228/model/DataBaseAuditRecord.h
  include/tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/NodesSummary.h
  include/tencentcloud/cdwdoris/v20211228/model/NetworkInfo.h
  include/tencentcloud/cdwdoris/v20211228/model/CreateInstanceSpec.h
  include/tencentcloud/cdwdoris/v20211228/model/SearchTags.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/ConfigKeyValue.h
  include/tencentcloud/cdwdoris/v20211228/model/Tag.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceResponse.h
  )

set(cdwdoris_src
  src/v20211228/CdwdorisClient.cpp
  src/v20211228/model/ModifyInstanceResponse.cpp
  src/v20211228/model/DestroyInstanceResponse.cpp
  src/v20211228/model/DescribeSlowQueryRecordsDownloadRequest.cpp
  src/v20211228/model/ResizeDiskRequest.cpp
  src/v20211228/model/NodeInfo.cpp
  src/v20211228/model/RestartClusterForNodeResponse.cpp
  src/v20211228/model/DescribeInstanceNodesResponse.cpp
  src/v20211228/model/DescribeInstanceStateRequest.cpp
  src/v20211228/model/DescribeClusterConfigsResponse.cpp
  src/v20211228/model/ScaleOutInstanceResponse.cpp
  src/v20211228/model/SlowQueryRecord.cpp
  src/v20211228/model/DescribeInstanceNodesRequest.cpp
  src/v20211228/model/ModifyInstanceRequest.cpp
  src/v20211228/model/ChargeProperties.cpp
  src/v20211228/model/ClusterConfigsInfoFromEMR.cpp
  src/v20211228/model/InstanceNode.cpp
  src/v20211228/model/CreateInstanceNewResponse.cpp
  src/v20211228/model/DescribeSlowQueryRecordsDownloadResponse.cpp
  src/v20211228/model/DestroyInstanceRequest.cpp
  src/v20211228/model/CreateInstanceNewRequest.cpp
  src/v20211228/model/InstanceInfo.cpp
  src/v20211228/model/DescribeInstancesResponse.cpp
  src/v20211228/model/DescribeInstancesRequest.cpp
  src/v20211228/model/DescribeSlowQueryRecordsRequest.cpp
  src/v20211228/model/DescribeClusterConfigsRequest.cpp
  src/v20211228/model/ResizeDiskResponse.cpp
  src/v20211228/model/AttachCBSSpec.cpp
  src/v20211228/model/DataBaseAuditRecord.cpp
  src/v20211228/model/ScaleOutInstanceRequest.cpp
  src/v20211228/model/DescribeSlowQueryRecordsResponse.cpp
  src/v20211228/model/DescribeDatabaseAuditRecordsResponse.cpp
  src/v20211228/model/DescribeInstanceResponse.cpp
  src/v20211228/model/RestartClusterForNodeRequest.cpp
  src/v20211228/model/ScaleUpInstanceRequest.cpp
  src/v20211228/model/NodesSummary.cpp
  src/v20211228/model/NetworkInfo.cpp
  src/v20211228/model/CreateInstanceSpec.cpp
  src/v20211228/model/SearchTags.cpp
  src/v20211228/model/DescribeInstanceRequest.cpp
  src/v20211228/model/ConfigKeyValue.cpp
  src/v20211228/model/Tag.cpp
  src/v20211228/model/DescribeInstanceStateResponse.cpp
  src/v20211228/model/DescribeDatabaseAuditRecordsRequest.cpp
  src/v20211228/model/DescribeInstanceNodesInfoRequest.cpp
  src/v20211228/model/DescribeDatabaseAuditDownloadResponse.cpp
  src/v20211228/model/DescribeDatabaseAuditDownloadRequest.cpp
  src/v20211228/model/DescribeInstanceNodesInfoResponse.cpp
  src/v20211228/model/ScaleUpInstanceResponse.cpp
  )

set(cdwdoris_include
    include/tencentcloud/cdwdoris
  )

add_library(cdwdoris ${LIB_TYPE}
  ${cdwdoris_public_header}
  ${cdwdoris_public_header_model}
  ${cdwdoris_src})

set_target_properties(cdwdoris
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdwdoris
  )

target_include_directories(cdwdoris
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdwdoris
  core)

#install(FILES ${cdwdoris_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwdoris/v20211228)
#install(FILES ${cdwdoris_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwdoris/v20211228/model)
install(DIRECTORY ${cdwdoris_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdwdoris
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
