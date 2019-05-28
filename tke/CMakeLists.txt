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

set(tke_public_header
  include/tencentcloud/tke/v20180525/TkeClient.h
  )

set(tke_public_header_model
  include/tencentcloud/tke/v20180525/model/DescribeClustersRequest.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/LoginSettings.h
  include/tencentcloud/tke/v20180525/model/AddExistedInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/Instance.h
  include/tencentcloud/tke/v20180525/model/EnhancedService.h
  include/tencentcloud/tke/v20180525/model/ExistedInstancesForNode.h
  include/tencentcloud/tke/v20180525/model/CreateClusterResponse.h
  include/tencentcloud/tke/v20180525/model/RunSecurityServiceEnabled.h
  include/tencentcloud/tke/v20180525/model/ClusterBasicSettings.h
  include/tencentcloud/tke/v20180525/model/CreateClusterRequest.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/ClusterCIDRSettings.h
  include/tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h
  include/tencentcloud/tke/v20180525/model/RunInstancesForNode.h
  include/tencentcloud/tke/v20180525/model/ExistedInstancesPara.h
  include/tencentcloud/tke/v20180525/model/Filter.h
  include/tencentcloud/tke/v20180525/model/ClusterNetworkSettings.h
  include/tencentcloud/tke/v20180525/model/RunMonitorServiceEnabled.h
  include/tencentcloud/tke/v20180525/model/ClusterAdvancedSettings.h
  include/tencentcloud/tke/v20180525/model/Cluster.h
  include/tencentcloud/tke/v20180525/model/DescribeClustersResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/AddExistedInstancesResponse.h
  )

set(tke_src
  src/v20180525/TkeClient.cpp
  src/v20180525/model/DescribeClustersRequest.cpp
  src/v20180525/model/DeleteClusterInstancesResponse.cpp
  src/v20180525/model/LoginSettings.cpp
  src/v20180525/model/AddExistedInstancesRequest.cpp
  src/v20180525/model/Instance.cpp
  src/v20180525/model/EnhancedService.cpp
  src/v20180525/model/ExistedInstancesForNode.cpp
  src/v20180525/model/CreateClusterResponse.cpp
  src/v20180525/model/RunSecurityServiceEnabled.cpp
  src/v20180525/model/ClusterBasicSettings.cpp
  src/v20180525/model/CreateClusterRequest.cpp
  src/v20180525/model/DeleteClusterInstancesRequest.cpp
  src/v20180525/model/DescribeClusterInstancesRequest.cpp
  src/v20180525/model/ClusterCIDRSettings.cpp
  src/v20180525/model/InstanceAdvancedSettings.cpp
  src/v20180525/model/RunInstancesForNode.cpp
  src/v20180525/model/ExistedInstancesPara.cpp
  src/v20180525/model/Filter.cpp
  src/v20180525/model/ClusterNetworkSettings.cpp
  src/v20180525/model/RunMonitorServiceEnabled.cpp
  src/v20180525/model/ClusterAdvancedSettings.cpp
  src/v20180525/model/Cluster.cpp
  src/v20180525/model/DescribeClustersResponse.cpp
  src/v20180525/model/DescribeClusterInstancesResponse.cpp
  src/v20180525/model/AddExistedInstancesResponse.cpp
  )

set(tke_include
    include/tencentcloud/tke
  )

add_library(tke ${LIB_TYPE}
  ${tke_public_header}
  ${tke_public_header_model}
  ${tke_src})

set_target_properties(tke
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tke
  )

target_include_directories(tke
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tke
  core)

#install(FILES ${tke_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tke/v20180525)
#install(FILES ${tke_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tke/v20180525/model)
install(DIRECTORY ${tke_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tke
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
