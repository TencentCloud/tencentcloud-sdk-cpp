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

set(omics_public_header
  include/tencentcloud/omics/v20221128/OmicsClient.h
  )

set(omics_public_header_model
  include/tencentcloud/omics/v20221128/model/DeleteVolumeDataRequest.h
  include/tencentcloud/omics/v20221128/model/RetryRunsResponse.h
  include/tencentcloud/omics/v20221128/model/RunApplicationResponse.h
  include/tencentcloud/omics/v20221128/model/ExecutionTime.h
  include/tencentcloud/omics/v20221128/model/RunStatusCount.h
  include/tencentcloud/omics/v20221128/model/GetRunStatusRequest.h
  include/tencentcloud/omics/v20221128/model/DescribeRunsResponse.h
  include/tencentcloud/omics/v20221128/model/ImportTableFileResponse.h
  include/tencentcloud/omics/v20221128/model/RunApplicationRequest.h
  include/tencentcloud/omics/v20221128/model/GetRunMetadataFileResponse.h
  include/tencentcloud/omics/v20221128/model/CreateVolumeResponse.h
  include/tencentcloud/omics/v20221128/model/DeleteEnvironmentResponse.h
  include/tencentcloud/omics/v20221128/model/Environment.h
  include/tencentcloud/omics/v20221128/model/GetRunCallsRequest.h
  include/tencentcloud/omics/v20221128/model/RunWorkflowRequest.h
  include/tencentcloud/omics/v20221128/model/DescribeRunsRequest.h
  include/tencentcloud/omics/v20221128/model/Run.h
  include/tencentcloud/omics/v20221128/model/TableColumn.h
  include/tencentcloud/omics/v20221128/model/CreateVolumeRequest.h
  include/tencentcloud/omics/v20221128/model/SecurityGroupOption.h
  include/tencentcloud/omics/v20221128/model/DescribeTablesRowsRequest.h
  include/tencentcloud/omics/v20221128/model/DescribeEnvironmentsResponse.h
  include/tencentcloud/omics/v20221128/model/ModifyVolumeResponse.h
  include/tencentcloud/omics/v20221128/model/LimitRange.h
  include/tencentcloud/omics/v20221128/model/DescribeTablesResponse.h
  include/tencentcloud/omics/v20221128/model/CosFileInfo.h
  include/tencentcloud/omics/v20221128/model/VPCOption.h
  include/tencentcloud/omics/v20221128/model/ResourceQuota.h
  include/tencentcloud/omics/v20221128/model/RetryRunsRequest.h
  include/tencentcloud/omics/v20221128/model/ImportTableFileRequest.h
  include/tencentcloud/omics/v20221128/model/DeleteVolumeResponse.h
  include/tencentcloud/omics/v20221128/model/CacheInfo.h
  include/tencentcloud/omics/v20221128/model/ClusterOption.h
  include/tencentcloud/omics/v20221128/model/TerminateRunGroupResponse.h
  include/tencentcloud/omics/v20221128/model/DescribeVolumesResponse.h
  include/tencentcloud/omics/v20221128/model/GitInfo.h
  include/tencentcloud/omics/v20221128/model/ApplicationVersion.h
  include/tencentcloud/omics/v20221128/model/DeleteVolumeRequest.h
  include/tencentcloud/omics/v20221128/model/DeleteEnvironmentRequest.h
  include/tencentcloud/omics/v20221128/model/RunGroup.h
  include/tencentcloud/omics/v20221128/model/DatabaseOption.h
  include/tencentcloud/omics/v20221128/model/GetRunCallsResponse.h
  include/tencentcloud/omics/v20221128/model/Filter.h
  include/tencentcloud/omics/v20221128/model/ResourceIds.h
  include/tencentcloud/omics/v20221128/model/DescribeRunGroupsResponse.h
  include/tencentcloud/omics/v20221128/model/Volume.h
  include/tencentcloud/omics/v20221128/model/VolumeInfo.h
  include/tencentcloud/omics/v20221128/model/TerminateRunGroupRequest.h
  include/tencentcloud/omics/v20221128/model/EnvironmentConfig.h
  include/tencentcloud/omics/v20221128/model/DescribeTablesRowsResponse.h
  include/tencentcloud/omics/v20221128/model/CreateEnvironmentResponse.h
  include/tencentcloud/omics/v20221128/model/GetRunMetadataFileRequest.h
  include/tencentcloud/omics/v20221128/model/RunWorkflowResponse.h
  include/tencentcloud/omics/v20221128/model/ModifyVolumeRequest.h
  include/tencentcloud/omics/v20221128/model/DescribeRunGroupsRequest.h
  include/tencentcloud/omics/v20221128/model/GetRunStatusResponse.h
  include/tencentcloud/omics/v20221128/model/StorageOption.h
  include/tencentcloud/omics/v20221128/model/DescribeTablesRequest.h
  include/tencentcloud/omics/v20221128/model/TableRow.h
  include/tencentcloud/omics/v20221128/model/DeleteVolumeDataResponse.h
  include/tencentcloud/omics/v20221128/model/DescribeEnvironmentsRequest.h
  include/tencentcloud/omics/v20221128/model/RunOption.h
  include/tencentcloud/omics/v20221128/model/NFOption.h
  include/tencentcloud/omics/v20221128/model/Table.h
  include/tencentcloud/omics/v20221128/model/CVMOption.h
  include/tencentcloud/omics/v20221128/model/RunMetadata.h
  include/tencentcloud/omics/v20221128/model/DescribeVolumesRequest.h
  include/tencentcloud/omics/v20221128/model/CreateEnvironmentRequest.h
  )

set(omics_src
  src/v20221128/OmicsClient.cpp
  src/v20221128/model/DeleteVolumeDataRequest.cpp
  src/v20221128/model/RetryRunsResponse.cpp
  src/v20221128/model/RunApplicationResponse.cpp
  src/v20221128/model/ExecutionTime.cpp
  src/v20221128/model/RunStatusCount.cpp
  src/v20221128/model/GetRunStatusRequest.cpp
  src/v20221128/model/DescribeRunsResponse.cpp
  src/v20221128/model/ImportTableFileResponse.cpp
  src/v20221128/model/RunApplicationRequest.cpp
  src/v20221128/model/GetRunMetadataFileResponse.cpp
  src/v20221128/model/CreateVolumeResponse.cpp
  src/v20221128/model/DeleteEnvironmentResponse.cpp
  src/v20221128/model/Environment.cpp
  src/v20221128/model/GetRunCallsRequest.cpp
  src/v20221128/model/RunWorkflowRequest.cpp
  src/v20221128/model/DescribeRunsRequest.cpp
  src/v20221128/model/Run.cpp
  src/v20221128/model/TableColumn.cpp
  src/v20221128/model/CreateVolumeRequest.cpp
  src/v20221128/model/SecurityGroupOption.cpp
  src/v20221128/model/DescribeTablesRowsRequest.cpp
  src/v20221128/model/DescribeEnvironmentsResponse.cpp
  src/v20221128/model/ModifyVolumeResponse.cpp
  src/v20221128/model/LimitRange.cpp
  src/v20221128/model/DescribeTablesResponse.cpp
  src/v20221128/model/CosFileInfo.cpp
  src/v20221128/model/VPCOption.cpp
  src/v20221128/model/ResourceQuota.cpp
  src/v20221128/model/RetryRunsRequest.cpp
  src/v20221128/model/ImportTableFileRequest.cpp
  src/v20221128/model/DeleteVolumeResponse.cpp
  src/v20221128/model/CacheInfo.cpp
  src/v20221128/model/ClusterOption.cpp
  src/v20221128/model/TerminateRunGroupResponse.cpp
  src/v20221128/model/DescribeVolumesResponse.cpp
  src/v20221128/model/GitInfo.cpp
  src/v20221128/model/ApplicationVersion.cpp
  src/v20221128/model/DeleteVolumeRequest.cpp
  src/v20221128/model/DeleteEnvironmentRequest.cpp
  src/v20221128/model/RunGroup.cpp
  src/v20221128/model/DatabaseOption.cpp
  src/v20221128/model/GetRunCallsResponse.cpp
  src/v20221128/model/Filter.cpp
  src/v20221128/model/ResourceIds.cpp
  src/v20221128/model/DescribeRunGroupsResponse.cpp
  src/v20221128/model/Volume.cpp
  src/v20221128/model/VolumeInfo.cpp
  src/v20221128/model/TerminateRunGroupRequest.cpp
  src/v20221128/model/EnvironmentConfig.cpp
  src/v20221128/model/DescribeTablesRowsResponse.cpp
  src/v20221128/model/CreateEnvironmentResponse.cpp
  src/v20221128/model/GetRunMetadataFileRequest.cpp
  src/v20221128/model/RunWorkflowResponse.cpp
  src/v20221128/model/ModifyVolumeRequest.cpp
  src/v20221128/model/DescribeRunGroupsRequest.cpp
  src/v20221128/model/GetRunStatusResponse.cpp
  src/v20221128/model/StorageOption.cpp
  src/v20221128/model/DescribeTablesRequest.cpp
  src/v20221128/model/TableRow.cpp
  src/v20221128/model/DeleteVolumeDataResponse.cpp
  src/v20221128/model/DescribeEnvironmentsRequest.cpp
  src/v20221128/model/RunOption.cpp
  src/v20221128/model/NFOption.cpp
  src/v20221128/model/Table.cpp
  src/v20221128/model/CVMOption.cpp
  src/v20221128/model/RunMetadata.cpp
  src/v20221128/model/DescribeVolumesRequest.cpp
  src/v20221128/model/CreateEnvironmentRequest.cpp
  )

set(omics_include
    include/tencentcloud/omics
  )

add_library(omics ${LIB_TYPE}
  ${omics_public_header}
  ${omics_public_header_model}
  ${omics_src})

set_target_properties(omics
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}omics
  )

target_include_directories(omics
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(omics
  core)

#install(FILES ${omics_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/omics/v20221128)
#install(FILES ${omics_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/omics/v20221128/model)
install(DIRECTORY ${omics_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS omics
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
