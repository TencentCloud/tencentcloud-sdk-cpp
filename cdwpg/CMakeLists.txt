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

set(cdwpg_public_header
  include/tencentcloud/cdwpg/v20201230/CdwpgClient.h
  )

set(cdwpg_public_header_model
  include/tencentcloud/cdwpg/v20201230/model/ConfigParams.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceInfoRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeUserHbaConfigResponse.h
  include/tencentcloud/cdwpg/v20201230/model/AccessInfo.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeUserHbaConfigRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyDBParametersResponse.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceStateInfo.h
  include/tencentcloud/cdwpg/v20201230/model/NormQueryItem.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateRequest.h
  include/tencentcloud/cdwpg/v20201230/model/AccountInfo.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeAccountsRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ScaleOutInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceNodesRequest.h
  include/tencentcloud/cdwpg/v20201230/model/RestartInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ChargeProperties.h
  include/tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiRequest.h
  include/tencentcloud/cdwpg/v20201230/model/UpgradeItem.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeDBConfigHistoryResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ResourceSpecNew.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceNode.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeDBConfigHistoryRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ErrorLogDetail.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeDBParamsRequest.h
  include/tencentcloud/cdwpg/v20201230/model/CBSSpec.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceNodesResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesResponse.h
  include/tencentcloud/cdwpg/v20201230/model/UpgradeInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeSlowLogResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyUserHbaResponse.h
  include/tencentcloud/cdwpg/v20201230/model/NodeConfigParams.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceInfo.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeDBParamsResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ParamDetail.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstancesResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ConfigHistory.h
  include/tencentcloud/cdwpg/v20201230/model/ResetAccountPasswordResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DiskSpecPlus.h
  include/tencentcloud/cdwpg/v20201230/model/ResetAccountPasswordRequest.h
  include/tencentcloud/cdwpg/v20201230/model/RestartInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeUpgradeListRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ResourceInfo.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstancesRequest.h
  include/tencentcloud/cdwpg/v20201230/model/UpgradeInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceOperationsResponse.h
  include/tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeSlowLogRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeUpgradeListResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ScaleOutInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeAccountsResponse.h
  include/tencentcloud/cdwpg/v20201230/model/SearchTags.h
  include/tencentcloud/cdwpg/v20201230/model/Range.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceNodeGroup.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyDBParametersRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeErrorLogResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyUserHbaRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ScaleUpInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/CNResourceSpec.h
  include/tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ParamItem.h
  include/tencentcloud/cdwpg/v20201230/model/CBSSpecInfo.h
  include/tencentcloud/cdwpg/v20201230/model/HbaConfig.h
  include/tencentcloud/cdwpg/v20201230/model/SimpleInstanceInfo.h
  include/tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceOperationsRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/SlowLogDetail.h
  include/tencentcloud/cdwpg/v20201230/model/ValueRange.h
  include/tencentcloud/cdwpg/v20201230/model/Tag.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateResponse.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceOperation.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceSimpleInfoNew.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesRequest.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeErrorLogRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ScaleUpInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceInfoResponse.h
  )

set(cdwpg_src
  src/v20201230/CdwpgClient.cpp
  src/v20201230/model/ConfigParams.cpp
  src/v20201230/model/ModifyInstanceResponse.cpp
  src/v20201230/model/DescribeInstanceInfoRequest.cpp
  src/v20201230/model/DescribeUserHbaConfigResponse.cpp
  src/v20201230/model/AccessInfo.cpp
  src/v20201230/model/DescribeUserHbaConfigRequest.cpp
  src/v20201230/model/ModifyDBParametersResponse.cpp
  src/v20201230/model/InstanceStateInfo.cpp
  src/v20201230/model/NormQueryItem.cpp
  src/v20201230/model/DescribeInstanceStateRequest.cpp
  src/v20201230/model/AccountInfo.cpp
  src/v20201230/model/DescribeAccountsRequest.cpp
  src/v20201230/model/ScaleOutInstanceResponse.cpp
  src/v20201230/model/DescribeInstanceNodesRequest.cpp
  src/v20201230/model/RestartInstanceResponse.cpp
  src/v20201230/model/ChargeProperties.cpp
  src/v20201230/model/DestroyInstanceByApiRequest.cpp
  src/v20201230/model/UpgradeItem.cpp
  src/v20201230/model/DescribeDBConfigHistoryResponse.cpp
  src/v20201230/model/ResourceSpecNew.cpp
  src/v20201230/model/InstanceNode.cpp
  src/v20201230/model/DescribeDBConfigHistoryRequest.cpp
  src/v20201230/model/ErrorLogDetail.cpp
  src/v20201230/model/DescribeDBParamsRequest.cpp
  src/v20201230/model/CBSSpec.cpp
  src/v20201230/model/DescribeInstanceNodesResponse.cpp
  src/v20201230/model/ModifyInstanceRequest.cpp
  src/v20201230/model/DescribeSimpleInstancesResponse.cpp
  src/v20201230/model/UpgradeInstanceRequest.cpp
  src/v20201230/model/DescribeSlowLogResponse.cpp
  src/v20201230/model/ModifyUserHbaResponse.cpp
  src/v20201230/model/NodeConfigParams.cpp
  src/v20201230/model/InstanceInfo.cpp
  src/v20201230/model/DescribeDBParamsResponse.cpp
  src/v20201230/model/ParamDetail.cpp
  src/v20201230/model/DescribeInstancesResponse.cpp
  src/v20201230/model/ConfigHistory.cpp
  src/v20201230/model/ResetAccountPasswordResponse.cpp
  src/v20201230/model/DiskSpecPlus.cpp
  src/v20201230/model/ResetAccountPasswordRequest.cpp
  src/v20201230/model/RestartInstanceRequest.cpp
  src/v20201230/model/DescribeUpgradeListRequest.cpp
  src/v20201230/model/ResourceInfo.cpp
  src/v20201230/model/DescribeInstancesRequest.cpp
  src/v20201230/model/UpgradeInstanceResponse.cpp
  src/v20201230/model/DescribeInstanceOperationsResponse.cpp
  src/v20201230/model/CreateInstanceByApiResponse.cpp
  src/v20201230/model/DescribeSlowLogRequest.cpp
  src/v20201230/model/DescribeUpgradeListResponse.cpp
  src/v20201230/model/ScaleOutInstanceRequest.cpp
  src/v20201230/model/DescribeAccountsResponse.cpp
  src/v20201230/model/SearchTags.cpp
  src/v20201230/model/Range.cpp
  src/v20201230/model/InstanceNodeGroup.cpp
  src/v20201230/model/DescribeInstanceResponse.cpp
  src/v20201230/model/ModifyDBParametersRequest.cpp
  src/v20201230/model/DescribeErrorLogResponse.cpp
  src/v20201230/model/ModifyUserHbaRequest.cpp
  src/v20201230/model/ScaleUpInstanceRequest.cpp
  src/v20201230/model/CNResourceSpec.cpp
  src/v20201230/model/DestroyInstanceByApiResponse.cpp
  src/v20201230/model/ParamItem.cpp
  src/v20201230/model/CBSSpecInfo.cpp
  src/v20201230/model/HbaConfig.cpp
  src/v20201230/model/SimpleInstanceInfo.cpp
  src/v20201230/model/CreateInstanceByApiRequest.cpp
  src/v20201230/model/DescribeInstanceOperationsRequest.cpp
  src/v20201230/model/DescribeInstanceRequest.cpp
  src/v20201230/model/SlowLogDetail.cpp
  src/v20201230/model/ValueRange.cpp
  src/v20201230/model/Tag.cpp
  src/v20201230/model/DescribeInstanceStateResponse.cpp
  src/v20201230/model/InstanceOperation.cpp
  src/v20201230/model/InstanceSimpleInfoNew.cpp
  src/v20201230/model/DescribeSimpleInstancesRequest.cpp
  src/v20201230/model/DescribeErrorLogRequest.cpp
  src/v20201230/model/ScaleUpInstanceResponse.cpp
  src/v20201230/model/DescribeInstanceInfoResponse.cpp
  )

set(cdwpg_include
    include/tencentcloud/cdwpg
  )

add_library(cdwpg ${LIB_TYPE}
  ${cdwpg_public_header}
  ${cdwpg_public_header_model}
  ${cdwpg_src})

set_target_properties(cdwpg
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdwpg
  )

target_include_directories(cdwpg
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdwpg
  core)

#install(FILES ${cdwpg_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwpg/v20201230)
#install(FILES ${cdwpg_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwpg/v20201230/model)
install(DIRECTORY ${cdwpg_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdwpg
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
