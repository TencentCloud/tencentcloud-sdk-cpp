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

set(ecm_public_header
  include/tencentcloud/ecm/v20190719/EcmClient.h
  )

set(ecm_public_header_model
  include/tencentcloud/ecm/v20190719/model/City.h
  include/tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNameResponse.h
  include/tencentcloud/ecm/v20190719/model/Area.h
  include/tencentcloud/ecm/v20190719/model/DescribeNodeRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeConfigRequest.h
  include/tencentcloud/ecm/v20190719/model/SimpleModule.h
  include/tencentcloud/ecm/v20190719/model/ISP.h
  include/tencentcloud/ecm/v20190719/model/ISPCounter.h
  include/tencentcloud/ecm/v20190719/model/RunSecurityServiceEnabled.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewRequest.h
  include/tencentcloud/ecm/v20190719/model/EnhancedService.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsRequest.h
  include/tencentcloud/ecm/v20190719/model/Internet.h
  include/tencentcloud/ecm/v20190719/model/DeleteModuleResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigRequest.h
  include/tencentcloud/ecm/v20190719/model/RebootInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleDetailRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsResponse.h
  include/tencentcloud/ecm/v20190719/model/PeakFamilyInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewResponse.h
  include/tencentcloud/ecm/v20190719/model/OperatorAction.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewResponse.h
  include/tencentcloud/ecm/v20190719/model/ImportImageResponse.h
  include/tencentcloud/ecm/v20190719/model/TerminateInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/RegionInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribeImageResponse.h
  include/tencentcloud/ecm/v20190719/model/ModuleCounter.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewRequest.h
  include/tencentcloud/ecm/v20190719/model/PeakNetworkRegionInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribeBaseOverviewRequest.h
  include/tencentcloud/ecm/v20190719/model/DeleteImageResponse.h
  include/tencentcloud/ecm/v20190719/model/DiskInfo.h
  include/tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthResponse.h
  include/tencentcloud/ecm/v20190719/model/NodeInstanceNum.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h
  include/tencentcloud/ecm/v20190719/model/Node.h
  include/tencentcloud/ecm/v20190719/model/NetworkStorageRange.h
  include/tencentcloud/ecm/v20190719/model/CreateModuleRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNameRequest.h
  include/tencentcloud/ecm/v20190719/model/InstanceFamilyConfig.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/Country.h
  include/tencentcloud/ecm/v20190719/model/DescribeNodeResponse.h
  include/tencentcloud/ecm/v20190719/model/ImportImageRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleImageResponse.h
  include/tencentcloud/ecm/v20190719/model/Filter.h
  include/tencentcloud/ecm/v20190719/model/Tag.h
  include/tencentcloud/ecm/v20190719/model/ZoneInfo.h
  include/tencentcloud/ecm/v20190719/model/TerminateInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleImageRequest.h
  include/tencentcloud/ecm/v20190719/model/Position.h
  include/tencentcloud/ecm/v20190719/model/DeleteModuleRequest.h
  include/tencentcloud/ecm/v20190719/model/CreateModuleResponse.h
  include/tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/Province.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h
  include/tencentcloud/ecm/v20190719/model/SrcImage.h
  include/tencentcloud/ecm/v20190719/model/PeakBase.h
  include/tencentcloud/ecm/v20190719/model/ZoneInstanceInfo.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNetworkResponse.h
  include/tencentcloud/ecm/v20190719/model/ModuleItem.h
  include/tencentcloud/ecm/v20190719/model/Instance.h
  include/tencentcloud/ecm/v20190719/model/DeleteImageRequest.h
  include/tencentcloud/ecm/v20190719/model/Image.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h
  include/tencentcloud/ecm/v20190719/model/PeakNetwork.h
  include/tencentcloud/ecm/v20190719/model/DescribeConfigResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeBaseOverviewResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/InstanceFamilyTypeConfig.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeImageRequest.h
  include/tencentcloud/ecm/v20190719/model/InstanceOperator.h
  include/tencentcloud/ecm/v20190719/model/Module.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleDetailResponse.h
  include/tencentcloud/ecm/v20190719/model/RunMonitorServiceEnabled.h
  )

set(ecm_src
  src/v20190719/EcmClient.cpp
  src/v20190719/model/City.cpp
  src/v20190719/model/PrivateIPAddressInfo.cpp
  src/v20190719/model/ResetInstancesRequest.cpp
  src/v20190719/model/ModifyModuleNameResponse.cpp
  src/v20190719/model/Area.cpp
  src/v20190719/model/DescribeNodeRequest.cpp
  src/v20190719/model/DescribeConfigRequest.cpp
  src/v20190719/model/SimpleModule.cpp
  src/v20190719/model/ISP.cpp
  src/v20190719/model/ISPCounter.cpp
  src/v20190719/model/RunSecurityServiceEnabled.cpp
  src/v20190719/model/DescribeModuleResponse.cpp
  src/v20190719/model/DescribePeakNetworkOverviewRequest.cpp
  src/v20190719/model/EnhancedService.cpp
  src/v20190719/model/DescribeInstancesDeniedActionsRequest.cpp
  src/v20190719/model/Internet.cpp
  src/v20190719/model/DeleteModuleResponse.cpp
  src/v20190719/model/DescribeInstanceTypeConfigRequest.cpp
  src/v20190719/model/RebootInstancesResponse.cpp
  src/v20190719/model/ModifyInstancesAttributeResponse.cpp
  src/v20190719/model/DescribeModuleDetailRequest.cpp
  src/v20190719/model/DescribeInstancesDeniedActionsResponse.cpp
  src/v20190719/model/PeakFamilyInfo.cpp
  src/v20190719/model/DescribePeakNetworkOverviewResponse.cpp
  src/v20190719/model/OperatorAction.cpp
  src/v20190719/model/DescribePeakBaseOverviewResponse.cpp
  src/v20190719/model/ImportImageResponse.cpp
  src/v20190719/model/TerminateInstancesRequest.cpp
  src/v20190719/model/RegionInfo.cpp
  src/v20190719/model/DescribeImageResponse.cpp
  src/v20190719/model/ModuleCounter.cpp
  src/v20190719/model/DescribePeakBaseOverviewRequest.cpp
  src/v20190719/model/PeakNetworkRegionInfo.cpp
  src/v20190719/model/DescribeBaseOverviewRequest.cpp
  src/v20190719/model/DeleteImageResponse.cpp
  src/v20190719/model/DiskInfo.cpp
  src/v20190719/model/InstanceTypeConfig.cpp
  src/v20190719/model/ResetInstancesMaxBandwidthResponse.cpp
  src/v20190719/model/NodeInstanceNum.cpp
  src/v20190719/model/DescribeInstancesResponse.cpp
  src/v20190719/model/PublicIPAddressInfo.cpp
  src/v20190719/model/Node.cpp
  src/v20190719/model/NetworkStorageRange.cpp
  src/v20190719/model/CreateModuleRequest.cpp
  src/v20190719/model/ModifyModuleNameRequest.cpp
  src/v20190719/model/InstanceFamilyConfig.cpp
  src/v20190719/model/DescribeInstanceTypeConfigResponse.cpp
  src/v20190719/model/DescribeInstancesRequest.cpp
  src/v20190719/model/Country.cpp
  src/v20190719/model/DescribeNodeResponse.cpp
  src/v20190719/model/ImportImageRequest.cpp
  src/v20190719/model/ModifyModuleImageResponse.cpp
  src/v20190719/model/Filter.cpp
  src/v20190719/model/Tag.cpp
  src/v20190719/model/ZoneInfo.cpp
  src/v20190719/model/TerminateInstancesResponse.cpp
  src/v20190719/model/DescribeModuleRequest.cpp
  src/v20190719/model/ModifyModuleImageRequest.cpp
  src/v20190719/model/Position.cpp
  src/v20190719/model/DeleteModuleRequest.cpp
  src/v20190719/model/CreateModuleResponse.cpp
  src/v20190719/model/RebootInstancesRequest.cpp
  src/v20190719/model/Province.cpp
  src/v20190719/model/ResetInstancesMaxBandwidthRequest.cpp
  src/v20190719/model/SrcImage.cpp
  src/v20190719/model/PeakBase.cpp
  src/v20190719/model/ZoneInstanceInfo.cpp
  src/v20190719/model/ModifyModuleNetworkResponse.cpp
  src/v20190719/model/ModuleItem.cpp
  src/v20190719/model/Instance.cpp
  src/v20190719/model/DeleteImageRequest.cpp
  src/v20190719/model/Image.cpp
  src/v20190719/model/ModifyModuleNetworkRequest.cpp
  src/v20190719/model/PeakNetwork.cpp
  src/v20190719/model/DescribeConfigResponse.cpp
  src/v20190719/model/DescribeBaseOverviewResponse.cpp
  src/v20190719/model/ModifyInstancesAttributeRequest.cpp
  src/v20190719/model/InstanceFamilyTypeConfig.cpp
  src/v20190719/model/ResetInstancesResponse.cpp
  src/v20190719/model/DescribeImageRequest.cpp
  src/v20190719/model/InstanceOperator.cpp
  src/v20190719/model/Module.cpp
  src/v20190719/model/DescribeModuleDetailResponse.cpp
  src/v20190719/model/RunMonitorServiceEnabled.cpp
  )

set(ecm_include
    include/tencentcloud/ecm
  )

add_library(ecm ${LIB_TYPE}
  ${ecm_public_header}
  ${ecm_public_header_model}
  ${ecm_src})

set_target_properties(ecm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecm
  )

target_include_directories(ecm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ecm
  core)

#install(FILES ${ecm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecm/v20190719)
#install(FILES ${ecm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecm/v20190719/model)
install(DIRECTORY ${ecm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ecm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
