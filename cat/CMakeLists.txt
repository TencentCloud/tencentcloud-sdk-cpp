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

set(cat_public_header
  include/tencentcloud/cat/v20180409/CatClient.h
  )

set(cat_public_header_model
  include/tencentcloud/cat/v20180409/model/NodeTree.h
  include/tencentcloud/cat/v20180409/model/DescribeNodesRequest.h
  include/tencentcloud/cat/v20180409/model/Label.h
  include/tencentcloud/cat/v20180409/model/Field.h
  include/tencentcloud/cat/v20180409/model/DescribeNodeGroupsResponse.h
  include/tencentcloud/cat/v20180409/model/TaskResult.h
  include/tencentcloud/cat/v20180409/model/SuspendProbeTaskResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeNodesResponse.h
  include/tencentcloud/cat/v20180409/model/ProbeTaskBasicConfiguration.h
  include/tencentcloud/cat/v20180409/model/ProbeTask.h
  include/tencentcloud/cat/v20180409/model/DescribeInstantTasksResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeTasksResponse.h
  include/tencentcloud/cat/v20180409/model/UpdateProbeTaskAttributesResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeMetricTagValuesRequest.h
  include/tencentcloud/cat/v20180409/model/SingleInstantTask.h
  include/tencentcloud/cat/v20180409/model/NodeInfoBase.h
  include/tencentcloud/cat/v20180409/model/DeleteProbeTaskRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataResponse.h
  include/tencentcloud/cat/v20180409/model/SuspendProbeTaskRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeMetricDataRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeMetricTagValuesResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeTasksRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeInstantTasksRequest.h
  include/tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListRequest.h
  include/tencentcloud/cat/v20180409/model/CreateProbeTasksRequest.h
  include/tencentcloud/cat/v20180409/model/UpdateProbeTaskAttributesRequest.h
  include/tencentcloud/cat/v20180409/model/NodeLeaf.h
  include/tencentcloud/cat/v20180409/model/DescribeNodeGroupsRequest.h
  include/tencentcloud/cat/v20180409/model/ResumeProbeTaskResponse.h
  include/tencentcloud/cat/v20180409/model/DeleteProbeTaskResponse.h
  include/tencentcloud/cat/v20180409/model/CreateProbeTasksResponse.h
  include/tencentcloud/cat/v20180409/model/ResumeProbeTaskRequest.h
  include/tencentcloud/cat/v20180409/model/NodeDefineExt.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeNodesRequest.h
  include/tencentcloud/cat/v20180409/model/NodeDefine.h
  include/tencentcloud/cat/v20180409/model/Tag.h
  include/tencentcloud/cat/v20180409/model/DistinctOrNetServiceInfo.h
  include/tencentcloud/cat/v20180409/model/DescribeNodesResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeMetricDataResponse.h
  include/tencentcloud/cat/v20180409/model/KeyValuePair.h
  include/tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListResponse.h
  include/tencentcloud/cat/v20180409/model/DetailedSingleDataDefine.h
  )

set(cat_src
  src/v20180409/CatClient.cpp
  src/v20180409/model/NodeTree.cpp
  src/v20180409/model/DescribeNodesRequest.cpp
  src/v20180409/model/Label.cpp
  src/v20180409/model/Field.cpp
  src/v20180409/model/DescribeNodeGroupsResponse.cpp
  src/v20180409/model/TaskResult.cpp
  src/v20180409/model/SuspendProbeTaskResponse.cpp
  src/v20180409/model/DescribeProbeNodesResponse.cpp
  src/v20180409/model/ProbeTaskBasicConfiguration.cpp
  src/v20180409/model/ProbeTask.cpp
  src/v20180409/model/DescribeInstantTasksResponse.cpp
  src/v20180409/model/DescribeDetailedSingleProbeDataRequest.cpp
  src/v20180409/model/DescribeProbeTasksResponse.cpp
  src/v20180409/model/UpdateProbeTaskAttributesResponse.cpp
  src/v20180409/model/DescribeProbeMetricTagValuesRequest.cpp
  src/v20180409/model/SingleInstantTask.cpp
  src/v20180409/model/NodeInfoBase.cpp
  src/v20180409/model/DeleteProbeTaskRequest.cpp
  src/v20180409/model/DescribeDetailedSingleProbeDataResponse.cpp
  src/v20180409/model/SuspendProbeTaskRequest.cpp
  src/v20180409/model/DescribeProbeMetricDataRequest.cpp
  src/v20180409/model/DescribeProbeMetricTagValuesResponse.cpp
  src/v20180409/model/DescribeProbeTasksRequest.cpp
  src/v20180409/model/DescribeInstantTasksRequest.cpp
  src/v20180409/model/UpdateProbeTaskConfigurationListRequest.cpp
  src/v20180409/model/CreateProbeTasksRequest.cpp
  src/v20180409/model/UpdateProbeTaskAttributesRequest.cpp
  src/v20180409/model/NodeLeaf.cpp
  src/v20180409/model/DescribeNodeGroupsRequest.cpp
  src/v20180409/model/ResumeProbeTaskResponse.cpp
  src/v20180409/model/DeleteProbeTaskResponse.cpp
  src/v20180409/model/CreateProbeTasksResponse.cpp
  src/v20180409/model/ResumeProbeTaskRequest.cpp
  src/v20180409/model/NodeDefineExt.cpp
  src/v20180409/model/DescribeProbeNodesRequest.cpp
  src/v20180409/model/NodeDefine.cpp
  src/v20180409/model/Tag.cpp
  src/v20180409/model/DistinctOrNetServiceInfo.cpp
  src/v20180409/model/DescribeNodesResponse.cpp
  src/v20180409/model/DescribeProbeMetricDataResponse.cpp
  src/v20180409/model/KeyValuePair.cpp
  src/v20180409/model/UpdateProbeTaskConfigurationListResponse.cpp
  src/v20180409/model/DetailedSingleDataDefine.cpp
  )

set(cat_include
    include/tencentcloud/cat
  )

add_library(cat ${LIB_TYPE}
  ${cat_public_header}
  ${cat_public_header_model}
  ${cat_src})

set_target_properties(cat
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cat
  )

target_include_directories(cat
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cat
  core)

#install(FILES ${cat_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cat/v20180409)
#install(FILES ${cat_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cat/v20180409/model)
install(DIRECTORY ${cat_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cat
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
