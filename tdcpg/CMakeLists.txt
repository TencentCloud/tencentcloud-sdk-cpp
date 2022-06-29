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

set(tdcpg_public_header
  include/tencentcloud/tdcpg/v20211118/TdcpgClient.h
  )

set(tdcpg_public_header_model
  include/tencentcloud/tdcpg/v20211118/model/ResetAccountPasswordResponse.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClusterNameRequest.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClustersAutoRenewFlagResponse.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClustersRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DeleteClusterInstancesResponse.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClusterInstancesSpecRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterBackupsRequest.h
  include/tencentcloud/tdcpg/v20211118/model/AvailableRecoveryTimeRange.h
  include/tencentcloud/tdcpg/v20211118/model/ResetAccountPasswordRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterInstancesResponse.h
  include/tencentcloud/tdcpg/v20211118/model/DeleteClusterResponse.h
  include/tencentcloud/tdcpg/v20211118/model/CreateClusterInstancesResponse.h
  include/tencentcloud/tdcpg/v20211118/model/RestartClusterInstancesRequest.h
  include/tencentcloud/tdcpg/v20211118/model/CreateClusterResponse.h
  include/tencentcloud/tdcpg/v20211118/model/RecoverClusterInstancesRequest.h
  include/tencentcloud/tdcpg/v20211118/model/CloneClusterToPointInTimeResponse.h
  include/tencentcloud/tdcpg/v20211118/model/CreateClusterRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DeleteClusterInstancesRequest.h
  include/tencentcloud/tdcpg/v20211118/model/RestartClusterInstancesResponse.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClusterInstancesSpecResponse.h
  include/tencentcloud/tdcpg/v20211118/model/CreateClusterInstancesRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterRecoveryTimeRangeResponse.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterEndpointsResponse.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeResourcesByDealNameRequest.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClusterEndpointWanStatusResponse.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClusterEndpointWanStatusRequest.h
  include/tencentcloud/tdcpg/v20211118/model/RecoverClusterRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterInstancesRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DeleteClusterRequest.h
  include/tencentcloud/tdcpg/v20211118/model/Account.h
  include/tencentcloud/tdcpg/v20211118/model/Endpoint.h
  include/tencentcloud/tdcpg/v20211118/model/RecoverClusterInstancesResponse.h
  include/tencentcloud/tdcpg/v20211118/model/ResourceIdInfo.h
  include/tencentcloud/tdcpg/v20211118/model/RecoverClusterResponse.h
  include/tencentcloud/tdcpg/v20211118/model/Filter.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterBackupsResponse.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeAccountsResponse.h
  include/tencentcloud/tdcpg/v20211118/model/TransformClusterPayModeRequest.h
  include/tencentcloud/tdcpg/v20211118/model/Backup.h
  include/tencentcloud/tdcpg/v20211118/model/RenewClusterRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterEndpointsRequest.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClusterNameResponse.h
  include/tencentcloud/tdcpg/v20211118/model/IsolateClusterInstancesResponse.h
  include/tencentcloud/tdcpg/v20211118/model/RenewClusterResponse.h
  include/tencentcloud/tdcpg/v20211118/model/IsolateClusterInstancesRequest.h
  include/tencentcloud/tdcpg/v20211118/model/Instance.h
  include/tencentcloud/tdcpg/v20211118/model/IsolateClusterResponse.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyAccountDescriptionRequest.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyAccountDescriptionResponse.h
  include/tencentcloud/tdcpg/v20211118/model/IsolateClusterRequest.h
  include/tencentcloud/tdcpg/v20211118/model/ModifyClustersAutoRenewFlagRequest.h
  include/tencentcloud/tdcpg/v20211118/model/TransformClusterPayModeResponse.h
  include/tencentcloud/tdcpg/v20211118/model/Cluster.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClustersResponse.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeResourcesByDealNameResponse.h
  include/tencentcloud/tdcpg/v20211118/model/CloneClusterToPointInTimeRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeClusterRecoveryTimeRangeRequest.h
  include/tencentcloud/tdcpg/v20211118/model/DescribeAccountsRequest.h
  )

set(tdcpg_src
  src/v20211118/TdcpgClient.cpp
  src/v20211118/model/ResetAccountPasswordResponse.cpp
  src/v20211118/model/ModifyClusterNameRequest.cpp
  src/v20211118/model/ModifyClustersAutoRenewFlagResponse.cpp
  src/v20211118/model/DescribeClustersRequest.cpp
  src/v20211118/model/DeleteClusterInstancesResponse.cpp
  src/v20211118/model/ModifyClusterInstancesSpecRequest.cpp
  src/v20211118/model/DescribeClusterBackupsRequest.cpp
  src/v20211118/model/AvailableRecoveryTimeRange.cpp
  src/v20211118/model/ResetAccountPasswordRequest.cpp
  src/v20211118/model/DescribeClusterInstancesResponse.cpp
  src/v20211118/model/DeleteClusterResponse.cpp
  src/v20211118/model/CreateClusterInstancesResponse.cpp
  src/v20211118/model/RestartClusterInstancesRequest.cpp
  src/v20211118/model/CreateClusterResponse.cpp
  src/v20211118/model/RecoverClusterInstancesRequest.cpp
  src/v20211118/model/CloneClusterToPointInTimeResponse.cpp
  src/v20211118/model/CreateClusterRequest.cpp
  src/v20211118/model/DeleteClusterInstancesRequest.cpp
  src/v20211118/model/RestartClusterInstancesResponse.cpp
  src/v20211118/model/ModifyClusterInstancesSpecResponse.cpp
  src/v20211118/model/CreateClusterInstancesRequest.cpp
  src/v20211118/model/DescribeClusterRecoveryTimeRangeResponse.cpp
  src/v20211118/model/DescribeClusterEndpointsResponse.cpp
  src/v20211118/model/DescribeResourcesByDealNameRequest.cpp
  src/v20211118/model/ModifyClusterEndpointWanStatusResponse.cpp
  src/v20211118/model/ModifyClusterEndpointWanStatusRequest.cpp
  src/v20211118/model/RecoverClusterRequest.cpp
  src/v20211118/model/DescribeClusterInstancesRequest.cpp
  src/v20211118/model/DeleteClusterRequest.cpp
  src/v20211118/model/Account.cpp
  src/v20211118/model/Endpoint.cpp
  src/v20211118/model/RecoverClusterInstancesResponse.cpp
  src/v20211118/model/ResourceIdInfo.cpp
  src/v20211118/model/RecoverClusterResponse.cpp
  src/v20211118/model/Filter.cpp
  src/v20211118/model/DescribeClusterBackupsResponse.cpp
  src/v20211118/model/DescribeAccountsResponse.cpp
  src/v20211118/model/TransformClusterPayModeRequest.cpp
  src/v20211118/model/Backup.cpp
  src/v20211118/model/RenewClusterRequest.cpp
  src/v20211118/model/DescribeClusterEndpointsRequest.cpp
  src/v20211118/model/ModifyClusterNameResponse.cpp
  src/v20211118/model/IsolateClusterInstancesResponse.cpp
  src/v20211118/model/RenewClusterResponse.cpp
  src/v20211118/model/IsolateClusterInstancesRequest.cpp
  src/v20211118/model/Instance.cpp
  src/v20211118/model/IsolateClusterResponse.cpp
  src/v20211118/model/ModifyAccountDescriptionRequest.cpp
  src/v20211118/model/ModifyAccountDescriptionResponse.cpp
  src/v20211118/model/IsolateClusterRequest.cpp
  src/v20211118/model/ModifyClustersAutoRenewFlagRequest.cpp
  src/v20211118/model/TransformClusterPayModeResponse.cpp
  src/v20211118/model/Cluster.cpp
  src/v20211118/model/DescribeClustersResponse.cpp
  src/v20211118/model/DescribeResourcesByDealNameResponse.cpp
  src/v20211118/model/CloneClusterToPointInTimeRequest.cpp
  src/v20211118/model/DescribeClusterRecoveryTimeRangeRequest.cpp
  src/v20211118/model/DescribeAccountsRequest.cpp
  )

set(tdcpg_include
    include/tencentcloud/tdcpg
  )

add_library(tdcpg ${LIB_TYPE}
  ${tdcpg_public_header}
  ${tdcpg_public_header_model}
  ${tdcpg_src})

set_target_properties(tdcpg
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdcpg
  )

target_include_directories(tdcpg
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tdcpg
  core)

#install(FILES ${tdcpg_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdcpg/v20211118)
#install(FILES ${tdcpg_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdcpg/v20211118/model)
install(DIRECTORY ${tdcpg_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tdcpg
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
