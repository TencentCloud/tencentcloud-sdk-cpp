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

set(ioa_public_header
  include/tencentcloud/ioa/v20220601/IoaClient.h
  )

set(ioa_public_header_model
  include/tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeRequest.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListRspData.h
  include/tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultRequest.h
  include/tencentcloud/ioa/v20220601/model/RuleItem.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceData.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountAccountGroupsData.h
  include/tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupResponse.h
  include/tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskData.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationResponse.h
  include/tencentcloud/ioa/v20220601/model/ComplexRule.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListResponse.h
  include/tencentcloud/ioa/v20220601/model/Sort.h
  include/tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoItem.h
  include/tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultData.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceInfoResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeDevicesResponse.h
  include/tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeRspData.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceInfoRequest.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsData.h
  include/tencentcloud/ioa/v20220601/model/RuleExpression.h
  include/tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupRequest.h
  include/tencentcloud/ioa/v20220601/model/SoftwareInformationData.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsPageResp.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsRequest.h
  include/tencentcloud/ioa/v20220601/model/DescribeAccountGroupsResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeDevicesPageRsp.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceResponse.h
  include/tencentcloud/ioa/v20220601/model/FilterGroup.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDevicePageData.h
  include/tencentcloud/ioa/v20220601/model/DeviceNetworkInfo.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsRequest.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationRequest.h
  include/tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupRequest.h
  include/tencentcloud/ioa/v20220601/model/DescribeDevicesRequest.h
  include/tencentcloud/ioa/v20220601/model/Paging.h
  include/tencentcloud/ioa/v20220601/model/CreateDeviceTaskRequest.h
  include/tencentcloud/ioa/v20220601/model/DeviceDetail.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsData.h
  include/tencentcloud/ioa/v20220601/model/DeviceServiceInfo.h
  include/tencentcloud/ioa/v20220601/model/GetAccountGroupData.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceRequest.h
  include/tencentcloud/ioa/v20220601/model/Filter.h
  include/tencentcloud/ioa/v20220601/model/DeviceProcessInfo.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceInfoRspData.h
  include/tencentcloud/ioa/v20220601/model/CreateDeviceTaskResponse.h
  include/tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeLocalAccountsPage.h
  include/tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationPageData.h
  include/tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultResponse.h
  include/tencentcloud/ioa/v20220601/model/Condition.h
  include/tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskRequest.h
  include/tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeResponse.h
  include/tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListRequest.h
  include/tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupRspData.h
  include/tencentcloud/ioa/v20220601/model/SimpleRule.h
  )

set(ioa_src
  src/v20220601/IoaClient.cpp
  src/v20220601/model/CreatePrivilegeCodeRequest.cpp
  src/v20220601/model/DescribeDeviceHardwareInfoListRspData.cpp
  src/v20220601/model/DescribeDLPFileDetectResultRequest.cpp
  src/v20220601/model/RuleItem.cpp
  src/v20220601/model/DescribeSoftCensusListByDeviceData.cpp
  src/v20220601/model/DescribeLocalAccountAccountGroupsData.cpp
  src/v20220601/model/CreateDeviceVirtualGroupResponse.cpp
  src/v20220601/model/CreateDLPFileDetectionTaskData.cpp
  src/v20220601/model/DescribeSoftwareInformationResponse.cpp
  src/v20220601/model/ComplexRule.cpp
  src/v20220601/model/DescribeDeviceHardwareInfoListResponse.cpp
  src/v20220601/model/Sort.cpp
  src/v20220601/model/DescribeRootAccountGroupResponse.cpp
  src/v20220601/model/DescribeDeviceHardwareInfoItem.cpp
  src/v20220601/model/DescribeDLPFileDetectResultData.cpp
  src/v20220601/model/DescribeDeviceInfoResponse.cpp
  src/v20220601/model/DescribeDevicesResponse.cpp
  src/v20220601/model/CreatePrivilegeCodeRspData.cpp
  src/v20220601/model/DescribeDeviceInfoRequest.cpp
  src/v20220601/model/DescribeLocalAccountsResponse.cpp
  src/v20220601/model/DescribeAccountGroupsData.cpp
  src/v20220601/model/RuleExpression.cpp
  src/v20220601/model/DescribeRootAccountGroupRequest.cpp
  src/v20220601/model/SoftwareInformationData.cpp
  src/v20220601/model/DescribeAccountGroupsPageResp.cpp
  src/v20220601/model/DescribeAccountGroupsRequest.cpp
  src/v20220601/model/DescribeAccountGroupsResponse.cpp
  src/v20220601/model/DescribeDevicesPageRsp.cpp
  src/v20220601/model/DescribeSoftCensusListByDeviceResponse.cpp
  src/v20220601/model/FilterGroup.cpp
  src/v20220601/model/DescribeSoftCensusListByDevicePageData.cpp
  src/v20220601/model/DeviceNetworkInfo.cpp
  src/v20220601/model/DescribeLocalAccountsRequest.cpp
  src/v20220601/model/DescribeSoftwareInformationRequest.cpp
  src/v20220601/model/CreateDeviceVirtualGroupRequest.cpp
  src/v20220601/model/DescribeDevicesRequest.cpp
  src/v20220601/model/Paging.cpp
  src/v20220601/model/CreateDeviceTaskRequest.cpp
  src/v20220601/model/DeviceDetail.cpp
  src/v20220601/model/DescribeLocalAccountsData.cpp
  src/v20220601/model/DeviceServiceInfo.cpp
  src/v20220601/model/GetAccountGroupData.cpp
  src/v20220601/model/DescribeSoftCensusListByDeviceRequest.cpp
  src/v20220601/model/Filter.cpp
  src/v20220601/model/DeviceProcessInfo.cpp
  src/v20220601/model/DescribeDeviceInfoRspData.cpp
  src/v20220601/model/CreateDeviceTaskResponse.cpp
  src/v20220601/model/CreateDLPFileDetectionTaskResponse.cpp
  src/v20220601/model/DescribeLocalAccountsPage.cpp
  src/v20220601/model/DescribeSoftwareInformationPageData.cpp
  src/v20220601/model/DescribeDLPFileDetectResultResponse.cpp
  src/v20220601/model/Condition.cpp
  src/v20220601/model/CreateDLPFileDetectionTaskRequest.cpp
  src/v20220601/model/CreatePrivilegeCodeResponse.cpp
  src/v20220601/model/DescribeDeviceHardwareInfoListRequest.cpp
  src/v20220601/model/CreateDeviceVirtualGroupRspData.cpp
  src/v20220601/model/SimpleRule.cpp
  )

set(ioa_include
    include/tencentcloud/ioa
  )

add_library(ioa ${LIB_TYPE}
  ${ioa_public_header}
  ${ioa_public_header_model}
  ${ioa_src})

set_target_properties(ioa
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ioa
  )

target_include_directories(ioa
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ioa
  core)

#install(FILES ${ioa_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ioa/v20220601)
#install(FILES ${ioa_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ioa/v20220601/model)
install(DIRECTORY ${ioa_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ioa
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
