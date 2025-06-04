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

set(privatedns_public_header
  include/tencentcloud/privatedns/v20201028/PrivatednsClient.h
  )

set(privatedns_public_header_model
  include/tencentcloud/privatedns/v20201028/model/DescribeQuotaUsageResponse.h
  include/tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneVpcRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeAuditLogResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateDNSAccountListResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneRecordListRequest.h
  include/tencentcloud/privatedns/v20201028/model/PrivateDNSAccount.h
  include/tencentcloud/privatedns/v20201028/model/QueryAsyncBindVpcStatusResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneRecordListResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneListResponse.h
  include/tencentcloud/privatedns/v20201028/model/AccountVpcInfoOutput.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneRequest.h
  include/tencentcloud/privatedns/v20201028/model/ModifyRecordsStatusResponse.h
  include/tencentcloud/privatedns/v20201028/model/DatePoint.h
  include/tencentcloud/privatedns/v20201028/model/DeleteSpecifyPrivateZoneVpcResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribeAccountVpcListResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneServiceRequest.h
  include/tencentcloud/privatedns/v20201028/model/PrivateZoneRecord.h
  include/tencentcloud/privatedns/v20201028/model/AddSpecifyPrivateZoneVpcResponse.h
  include/tencentcloud/privatedns/v20201028/model/AuditLogInfo.h
  include/tencentcloud/privatedns/v20201028/model/AddSpecifyPrivateZoneVpcRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeRequestDataRequest.h
  include/tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRecordResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribeAccountVpcListRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeRequestDataResponse.h
  include/tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRequest.h
  include/tencentcloud/privatedns/v20201028/model/TagInfo.h
  include/tencentcloud/privatedns/v20201028/model/TldQuota.h
  include/tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRequest.h
  include/tencentcloud/privatedns/v20201028/model/VpcInfo.h
  include/tencentcloud/privatedns/v20201028/model/AccountVpcInfoOut.h
  include/tencentcloud/privatedns/v20201028/model/AccountVpcInfo.h
  include/tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneResponse.h
  include/tencentcloud/privatedns/v20201028/model/DeleteSpecifyPrivateZoneVpcRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeRecordRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeRecordResponse.h
  include/tencentcloud/privatedns/v20201028/model/SubscribePrivateZoneServiceRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneResponse.h
  include/tencentcloud/privatedns/v20201028/model/CreatePrivateZoneResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribeDashboardResponse.h
  include/tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRecordResponse.h
  include/tencentcloud/privatedns/v20201028/model/RecordInfo.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneServiceResponse.h
  include/tencentcloud/privatedns/v20201028/model/CreatePrivateDNSAccountResponse.h
  include/tencentcloud/privatedns/v20201028/model/DescribeAuditLogRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeDashboardRequest.h
  include/tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRequest.h
  include/tencentcloud/privatedns/v20201028/model/AuditLog.h
  include/tencentcloud/privatedns/v20201028/model/SubscribePrivateZoneServiceResponse.h
  include/tencentcloud/privatedns/v20201028/model/DeletePrivateDNSAccountRequest.h
  include/tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRecordRequest.h
  include/tencentcloud/privatedns/v20201028/model/Filter.h
  include/tencentcloud/privatedns/v20201028/model/DeletePrivateZoneResponse.h
  include/tencentcloud/privatedns/v20201028/model/ModifyRecordsStatusRequest.h
  include/tencentcloud/privatedns/v20201028/model/CreatePrivateDNSAccountRequest.h
  include/tencentcloud/privatedns/v20201028/model/QueryAsyncBindVpcStatusRequest.h
  include/tencentcloud/privatedns/v20201028/model/MetricData.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateDNSAccountListRequest.h
  include/tencentcloud/privatedns/v20201028/model/PrivateZone.h
  include/tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRecordRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribeQuotaUsageRequest.h
  include/tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRecordRequest.h
  include/tencentcloud/privatedns/v20201028/model/DescribePrivateZoneListRequest.h
  include/tencentcloud/privatedns/v20201028/model/DeletePrivateDNSAccountResponse.h
  include/tencentcloud/privatedns/v20201028/model/FlowUsage.h
  include/tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRecordResponse.h
  include/tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneVpcResponse.h
  )

set(privatedns_src
  src/v20201028/PrivatednsClient.cpp
  src/v20201028/model/DescribeQuotaUsageResponse.cpp
  src/v20201028/model/ModifyPrivateZoneVpcRequest.cpp
  src/v20201028/model/DescribeAuditLogResponse.cpp
  src/v20201028/model/DescribePrivateDNSAccountListResponse.cpp
  src/v20201028/model/DescribePrivateZoneRecordListRequest.cpp
  src/v20201028/model/PrivateDNSAccount.cpp
  src/v20201028/model/QueryAsyncBindVpcStatusResponse.cpp
  src/v20201028/model/DescribePrivateZoneRecordListResponse.cpp
  src/v20201028/model/DescribePrivateZoneListResponse.cpp
  src/v20201028/model/AccountVpcInfoOutput.cpp
  src/v20201028/model/DescribePrivateZoneRequest.cpp
  src/v20201028/model/ModifyRecordsStatusResponse.cpp
  src/v20201028/model/DatePoint.cpp
  src/v20201028/model/DeleteSpecifyPrivateZoneVpcResponse.cpp
  src/v20201028/model/DescribeAccountVpcListResponse.cpp
  src/v20201028/model/DescribePrivateZoneServiceRequest.cpp
  src/v20201028/model/PrivateZoneRecord.cpp
  src/v20201028/model/AddSpecifyPrivateZoneVpcResponse.cpp
  src/v20201028/model/AuditLogInfo.cpp
  src/v20201028/model/AddSpecifyPrivateZoneVpcRequest.cpp
  src/v20201028/model/DescribeRequestDataRequest.cpp
  src/v20201028/model/ModifyPrivateZoneRecordResponse.cpp
  src/v20201028/model/DescribeAccountVpcListRequest.cpp
  src/v20201028/model/DescribeRequestDataResponse.cpp
  src/v20201028/model/ModifyPrivateZoneRequest.cpp
  src/v20201028/model/TagInfo.cpp
  src/v20201028/model/TldQuota.cpp
  src/v20201028/model/CreatePrivateZoneRequest.cpp
  src/v20201028/model/VpcInfo.cpp
  src/v20201028/model/AccountVpcInfoOut.cpp
  src/v20201028/model/AccountVpcInfo.cpp
  src/v20201028/model/ModifyPrivateZoneResponse.cpp
  src/v20201028/model/DeleteSpecifyPrivateZoneVpcRequest.cpp
  src/v20201028/model/DescribeRecordRequest.cpp
  src/v20201028/model/DescribeRecordResponse.cpp
  src/v20201028/model/SubscribePrivateZoneServiceRequest.cpp
  src/v20201028/model/DescribePrivateZoneResponse.cpp
  src/v20201028/model/CreatePrivateZoneResponse.cpp
  src/v20201028/model/DescribeDashboardResponse.cpp
  src/v20201028/model/CreatePrivateZoneRecordResponse.cpp
  src/v20201028/model/RecordInfo.cpp
  src/v20201028/model/DescribePrivateZoneServiceResponse.cpp
  src/v20201028/model/CreatePrivateDNSAccountResponse.cpp
  src/v20201028/model/DescribeAuditLogRequest.cpp
  src/v20201028/model/DescribeDashboardRequest.cpp
  src/v20201028/model/DeletePrivateZoneRequest.cpp
  src/v20201028/model/AuditLog.cpp
  src/v20201028/model/SubscribePrivateZoneServiceResponse.cpp
  src/v20201028/model/DeletePrivateDNSAccountRequest.cpp
  src/v20201028/model/DeletePrivateZoneRecordRequest.cpp
  src/v20201028/model/Filter.cpp
  src/v20201028/model/DeletePrivateZoneResponse.cpp
  src/v20201028/model/ModifyRecordsStatusRequest.cpp
  src/v20201028/model/CreatePrivateDNSAccountRequest.cpp
  src/v20201028/model/QueryAsyncBindVpcStatusRequest.cpp
  src/v20201028/model/MetricData.cpp
  src/v20201028/model/DescribePrivateDNSAccountListRequest.cpp
  src/v20201028/model/PrivateZone.cpp
  src/v20201028/model/CreatePrivateZoneRecordRequest.cpp
  src/v20201028/model/DescribeQuotaUsageRequest.cpp
  src/v20201028/model/ModifyPrivateZoneRecordRequest.cpp
  src/v20201028/model/DescribePrivateZoneListRequest.cpp
  src/v20201028/model/DeletePrivateDNSAccountResponse.cpp
  src/v20201028/model/FlowUsage.cpp
  src/v20201028/model/DeletePrivateZoneRecordResponse.cpp
  src/v20201028/model/ModifyPrivateZoneVpcResponse.cpp
  )

set(privatedns_include
    include/tencentcloud/privatedns
  )

add_library(privatedns ${LIB_TYPE}
  ${privatedns_public_header}
  ${privatedns_public_header_model}
  ${privatedns_src})

set_target_properties(privatedns
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}privatedns
  )

target_include_directories(privatedns
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(privatedns
  core)

#install(FILES ${privatedns_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/privatedns/v20201028)
#install(FILES ${privatedns_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/privatedns/v20201028/model)
install(DIRECTORY ${privatedns_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS privatedns
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
