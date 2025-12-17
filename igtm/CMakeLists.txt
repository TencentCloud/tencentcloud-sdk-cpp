#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(igtm_public_header
  include/tencentcloud/igtm/v20231024/IgtmClient.h
  )

set(igtm_public_header_model
  include/tencentcloud/igtm/v20231024/model/AddressPool.h
  include/tencentcloud/igtm/v20231024/model/AddressPoolDetail.h
  include/tencentcloud/igtm/v20231024/model/DescribeMonitorsResponse.h
  include/tencentcloud/igtm/v20231024/model/ModifyPackageAutoRenewRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeDetectorsResponse.h
  include/tencentcloud/igtm/v20231024/model/DeleteAddressPoolResponse.h
  include/tencentcloud/igtm/v20231024/model/CreatePackageAndPayRequest.h
  include/tencentcloud/igtm/v20231024/model/Strategy.h
  include/tencentcloud/igtm/v20231024/model/CreateStrategyResponse.h
  include/tencentcloud/igtm/v20231024/model/DeleteAddressPoolRequest.h
  include/tencentcloud/igtm/v20231024/model/ModifyInstanceConfigResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeStrategyDetailRequest.h
  include/tencentcloud/igtm/v20231024/model/DeleteMonitorRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeAddressPoolListRequest.h
  include/tencentcloud/igtm/v20231024/model/ModifyStrategyResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeDnsLineListRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeInstanceListRequest.h
  include/tencentcloud/igtm/v20231024/model/Source.h
  include/tencentcloud/igtm/v20231024/model/InstanceDetail.h
  include/tencentcloud/igtm/v20231024/model/AddressLocation.h
  include/tencentcloud/igtm/v20231024/model/DetectTaskPackage.h
  include/tencentcloud/igtm/v20231024/model/CreateAddressPoolRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeDetectTaskPackageListResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeAddressPoolDetailResponse.h
  include/tencentcloud/igtm/v20231024/model/ModifyPackageAutoRenewResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeQuotasRequest.h
  include/tencentcloud/igtm/v20231024/model/MainAddressPool.h
  include/tencentcloud/igtm/v20231024/model/Quota.h
  include/tencentcloud/igtm/v20231024/model/ModifyMonitorRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeInstancePackageListResponse.h
  include/tencentcloud/igtm/v20231024/model/Instance.h
  include/tencentcloud/igtm/v20231024/model/ModifyStrategyRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeDetectorsRequest.h
  include/tencentcloud/igtm/v20231024/model/DeleteStrategyRequest.h
  include/tencentcloud/igtm/v20231024/model/CreateInstanceRequest.h
  include/tencentcloud/igtm/v20231024/model/Address.h
  include/tencentcloud/igtm/v20231024/model/CreateMonitorRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeDetectTaskPackageListRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeStrategyListResponse.h
  include/tencentcloud/igtm/v20231024/model/CreateStrategyRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeDnsLineListResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeInstanceDetailResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeMonitorDetailResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeInstanceDetailRequest.h
  include/tencentcloud/igtm/v20231024/model/GroupLine.h
  include/tencentcloud/igtm/v20231024/model/DescribeAddressPoolDetailRequest.h
  include/tencentcloud/igtm/v20231024/model/CreateInstanceResponse.h
  include/tencentcloud/igtm/v20231024/model/DetectorGroup.h
  include/tencentcloud/igtm/v20231024/model/DescribeDetectPackageDetailRequest.h
  include/tencentcloud/igtm/v20231024/model/MainPoolWeight.h
  include/tencentcloud/igtm/v20231024/model/CreatePackageAndPayResponse.h
  include/tencentcloud/igtm/v20231024/model/CreateAddressPoolResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeInstancePackageListRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeStrategyDetailResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeMonitorsRequest.h
  include/tencentcloud/igtm/v20231024/model/ModifyMonitorResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeAddressLocationResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeAddressLocationRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeStrategyListRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeMonitorDetailRequest.h
  include/tencentcloud/igtm/v20231024/model/DescribeDetectPackageDetailResponse.h
  include/tencentcloud/igtm/v20231024/model/MonitorDetail.h
  include/tencentcloud/igtm/v20231024/model/DescribeAddressPoolListResponse.h
  include/tencentcloud/igtm/v20231024/model/CreateMonitorResponse.h
  include/tencentcloud/igtm/v20231024/model/InstanceInfo.h
  include/tencentcloud/igtm/v20231024/model/InstancePackage.h
  include/tencentcloud/igtm/v20231024/model/DeleteStrategyResponse.h
  include/tencentcloud/igtm/v20231024/model/ModifyAddressPoolRequest.h
  include/tencentcloud/igtm/v20231024/model/InstanceConfig.h
  include/tencentcloud/igtm/v20231024/model/StrategyDetail.h
  include/tencentcloud/igtm/v20231024/model/ModifyAddressPoolResponse.h
  include/tencentcloud/igtm/v20231024/model/DescribeQuotasResponse.h
  include/tencentcloud/igtm/v20231024/model/ModifyInstanceConfigRequest.h
  include/tencentcloud/igtm/v20231024/model/CostItem.h
  include/tencentcloud/igtm/v20231024/model/DescribeInstanceListResponse.h
  include/tencentcloud/igtm/v20231024/model/ResourceFilter.h
  include/tencentcloud/igtm/v20231024/model/DeleteMonitorResponse.h
  )

set(igtm_src
  src/v20231024/IgtmClient.cpp
  src/v20231024/model/AddressPool.cpp
  src/v20231024/model/AddressPoolDetail.cpp
  src/v20231024/model/DescribeMonitorsResponse.cpp
  src/v20231024/model/ModifyPackageAutoRenewRequest.cpp
  src/v20231024/model/DescribeDetectorsResponse.cpp
  src/v20231024/model/DeleteAddressPoolResponse.cpp
  src/v20231024/model/CreatePackageAndPayRequest.cpp
  src/v20231024/model/Strategy.cpp
  src/v20231024/model/CreateStrategyResponse.cpp
  src/v20231024/model/DeleteAddressPoolRequest.cpp
  src/v20231024/model/ModifyInstanceConfigResponse.cpp
  src/v20231024/model/DescribeStrategyDetailRequest.cpp
  src/v20231024/model/DeleteMonitorRequest.cpp
  src/v20231024/model/DescribeAddressPoolListRequest.cpp
  src/v20231024/model/ModifyStrategyResponse.cpp
  src/v20231024/model/DescribeDnsLineListRequest.cpp
  src/v20231024/model/DescribeInstanceListRequest.cpp
  src/v20231024/model/Source.cpp
  src/v20231024/model/InstanceDetail.cpp
  src/v20231024/model/AddressLocation.cpp
  src/v20231024/model/DetectTaskPackage.cpp
  src/v20231024/model/CreateAddressPoolRequest.cpp
  src/v20231024/model/DescribeDetectTaskPackageListResponse.cpp
  src/v20231024/model/DescribeAddressPoolDetailResponse.cpp
  src/v20231024/model/ModifyPackageAutoRenewResponse.cpp
  src/v20231024/model/DescribeQuotasRequest.cpp
  src/v20231024/model/MainAddressPool.cpp
  src/v20231024/model/Quota.cpp
  src/v20231024/model/ModifyMonitorRequest.cpp
  src/v20231024/model/DescribeInstancePackageListResponse.cpp
  src/v20231024/model/Instance.cpp
  src/v20231024/model/ModifyStrategyRequest.cpp
  src/v20231024/model/DescribeDetectorsRequest.cpp
  src/v20231024/model/DeleteStrategyRequest.cpp
  src/v20231024/model/CreateInstanceRequest.cpp
  src/v20231024/model/Address.cpp
  src/v20231024/model/CreateMonitorRequest.cpp
  src/v20231024/model/DescribeDetectTaskPackageListRequest.cpp
  src/v20231024/model/DescribeStrategyListResponse.cpp
  src/v20231024/model/CreateStrategyRequest.cpp
  src/v20231024/model/DescribeDnsLineListResponse.cpp
  src/v20231024/model/DescribeInstanceDetailResponse.cpp
  src/v20231024/model/DescribeMonitorDetailResponse.cpp
  src/v20231024/model/DescribeInstanceDetailRequest.cpp
  src/v20231024/model/GroupLine.cpp
  src/v20231024/model/DescribeAddressPoolDetailRequest.cpp
  src/v20231024/model/CreateInstanceResponse.cpp
  src/v20231024/model/DetectorGroup.cpp
  src/v20231024/model/DescribeDetectPackageDetailRequest.cpp
  src/v20231024/model/MainPoolWeight.cpp
  src/v20231024/model/CreatePackageAndPayResponse.cpp
  src/v20231024/model/CreateAddressPoolResponse.cpp
  src/v20231024/model/DescribeInstancePackageListRequest.cpp
  src/v20231024/model/DescribeStrategyDetailResponse.cpp
  src/v20231024/model/DescribeMonitorsRequest.cpp
  src/v20231024/model/ModifyMonitorResponse.cpp
  src/v20231024/model/DescribeAddressLocationResponse.cpp
  src/v20231024/model/DescribeAddressLocationRequest.cpp
  src/v20231024/model/DescribeStrategyListRequest.cpp
  src/v20231024/model/DescribeMonitorDetailRequest.cpp
  src/v20231024/model/DescribeDetectPackageDetailResponse.cpp
  src/v20231024/model/MonitorDetail.cpp
  src/v20231024/model/DescribeAddressPoolListResponse.cpp
  src/v20231024/model/CreateMonitorResponse.cpp
  src/v20231024/model/InstanceInfo.cpp
  src/v20231024/model/InstancePackage.cpp
  src/v20231024/model/DeleteStrategyResponse.cpp
  src/v20231024/model/ModifyAddressPoolRequest.cpp
  src/v20231024/model/InstanceConfig.cpp
  src/v20231024/model/StrategyDetail.cpp
  src/v20231024/model/ModifyAddressPoolResponse.cpp
  src/v20231024/model/DescribeQuotasResponse.cpp
  src/v20231024/model/ModifyInstanceConfigRequest.cpp
  src/v20231024/model/CostItem.cpp
  src/v20231024/model/DescribeInstanceListResponse.cpp
  src/v20231024/model/ResourceFilter.cpp
  src/v20231024/model/DeleteMonitorResponse.cpp
  )

set(igtm_include
    include/tencentcloud/igtm
  )

add_library(igtm ${LIB_TYPE}
  ${igtm_public_header}
  ${igtm_public_header_model}
  ${igtm_src})

set_target_properties(igtm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}igtm
  )

target_include_directories(igtm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(igtm
  core)

#install(FILES ${igtm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/igtm/v20231024)
#install(FILES ${igtm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/igtm/v20231024/model)
install(DIRECTORY ${igtm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS igtm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
