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

set(dnspod_public_header
  include/tencentcloud/dnspod/v20210323/DnspodClient.h
  )

set(dnspod_public_header_model
  include/tencentcloud/dnspod/v20210323/model/CreateRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeBatchTaskDetail.h
  include/tencentcloud/dnspod/v20210323/model/DeleteDomainAliasResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifySubdomainStatusRequest.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordBatchResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainBatchRecord.h
  include/tencentcloud/dnspod/v20210323/model/DomainAnalyticsInfo.h
  include/tencentcloud/dnspod/v20210323/model/DescribeBatchTaskRequest.h
  include/tencentcloud/dnspod/v20210323/model/DomainAnalyticsDetail.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordLineListResponse.h
  include/tencentcloud/dnspod/v20210323/model/DomainInfo.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainBatchRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainShareInfoRequest.h
  include/tencentcloud/dnspod/v20210323/model/DomainListItem.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordTypeResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainAliasListResponse.h
  include/tencentcloud/dnspod/v20210323/model/RecordCountInfo.h
  include/tencentcloud/dnspod/v20210323/model/DeleteShareDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/BatchRecordInfo.h
  include/tencentcloud/dnspod/v20210323/model/LineGroupInfo.h
  include/tencentcloud/dnspod/v20210323/model/DeleteDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainOwnerRequest.h
  include/tencentcloud/dnspod/v20210323/model/DomainShareInfo.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordLineListRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordListResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordBatchRequest.h
  include/tencentcloud/dnspod/v20210323/model/DeleteDomainAliasRequest.h
  include/tencentcloud/dnspod/v20210323/model/DomainAliasInfo.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainLockRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainStatusRequest.h
  include/tencentcloud/dnspod/v20210323/model/SubdomainAliasAnalyticsItem.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainStatusResponse.h
  include/tencentcloud/dnspod/v20210323/model/AddRecordBatch.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainGroupResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeSubdomainAnalyticsRequest.h
  include/tencentcloud/dnspod/v20210323/model/DeleteRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordStatusRequest.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/RecordInfo.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordBatchDetail.h
  include/tencentcloud/dnspod/v20210323/model/DescribeSubdomainAnalyticsResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainUnlockResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainLogListRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainListResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordBatchRequest.h
  include/tencentcloud/dnspod/v20210323/model/DeleteRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordBatchRecord.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/DomainCountInfo.h
  include/tencentcloud/dnspod/v20210323/model/UserInfo.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordBatchResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainLogListResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordTypeRequest.h
  include/tencentcloud/dnspod/v20210323/model/RecordListItem.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainBatchResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainOwnerResponse.h
  include/tencentcloud/dnspod/v20210323/model/SubdomainAnalyticsInfo.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordBatchDetail.h
  include/tencentcloud/dnspod/v20210323/model/DescribeUserDetailResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/DomainAliasAnalyticsItem.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainShareInfoResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkRequest.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainAliasResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordListRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainPurviewResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifySubdomainStatusResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainAnalyticsResponse.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordStatusResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainGroupRequest.h
  include/tencentcloud/dnspod/v20210323/model/LineInfo.h
  include/tencentcloud/dnspod/v20210323/model/DeleteDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainAliasListRequest.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainAliasRequest.h
  include/tencentcloud/dnspod/v20210323/model/DeleteShareDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDynamicDNSRequest.h
  include/tencentcloud/dnspod/v20210323/model/PurviewInfo.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordRemarkRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeUserDetailRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordRemarkResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainListRequest.h
  include/tencentcloud/dnspod/v20210323/model/DomainCreateInfo.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainPurviewRequest.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainBatchDetail.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainUnlockRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainLockResponse.h
  include/tencentcloud/dnspod/v20210323/model/LockInfo.h
  include/tencentcloud/dnspod/v20210323/model/DescribeBatchTaskResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainAnalyticsRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDynamicDNSResponse.h
  )

set(dnspod_src
  src/v20210323/DnspodClient.cpp
  src/v20210323/model/CreateRecordRequest.cpp
  src/v20210323/model/DescribeBatchTaskDetail.cpp
  src/v20210323/model/DeleteDomainAliasResponse.cpp
  src/v20210323/model/ModifySubdomainStatusRequest.cpp
  src/v20210323/model/CreateRecordBatchResponse.cpp
  src/v20210323/model/CreateDomainBatchRecord.cpp
  src/v20210323/model/DomainAnalyticsInfo.cpp
  src/v20210323/model/DescribeBatchTaskRequest.cpp
  src/v20210323/model/DomainAnalyticsDetail.cpp
  src/v20210323/model/DescribeDomainResponse.cpp
  src/v20210323/model/DescribeRecordLineListResponse.cpp
  src/v20210323/model/DomainInfo.cpp
  src/v20210323/model/CreateDomainBatchRequest.cpp
  src/v20210323/model/DescribeDomainShareInfoRequest.cpp
  src/v20210323/model/DomainListItem.cpp
  src/v20210323/model/DescribeRecordTypeResponse.cpp
  src/v20210323/model/ModifyDomainRemarkResponse.cpp
  src/v20210323/model/DescribeDomainAliasListResponse.cpp
  src/v20210323/model/RecordCountInfo.cpp
  src/v20210323/model/DeleteShareDomainResponse.cpp
  src/v20210323/model/ModifyRecordRequest.cpp
  src/v20210323/model/BatchRecordInfo.cpp
  src/v20210323/model/LineGroupInfo.cpp
  src/v20210323/model/DeleteDomainRequest.cpp
  src/v20210323/model/ModifyDomainOwnerRequest.cpp
  src/v20210323/model/DomainShareInfo.cpp
  src/v20210323/model/DescribeRecordLineListRequest.cpp
  src/v20210323/model/DescribeRecordListResponse.cpp
  src/v20210323/model/CreateRecordBatchRequest.cpp
  src/v20210323/model/DeleteDomainAliasRequest.cpp
  src/v20210323/model/DomainAliasInfo.cpp
  src/v20210323/model/ModifyDomainLockRequest.cpp
  src/v20210323/model/ModifyDomainStatusRequest.cpp
  src/v20210323/model/SubdomainAliasAnalyticsItem.cpp
  src/v20210323/model/ModifyDomainStatusResponse.cpp
  src/v20210323/model/AddRecordBatch.cpp
  src/v20210323/model/DescribeRecordRequest.cpp
  src/v20210323/model/CreateDomainGroupResponse.cpp
  src/v20210323/model/DescribeSubdomainAnalyticsRequest.cpp
  src/v20210323/model/DeleteRecordRequest.cpp
  src/v20210323/model/DescribeDomainRequest.cpp
  src/v20210323/model/ModifyRecordStatusRequest.cpp
  src/v20210323/model/CreateRecordResponse.cpp
  src/v20210323/model/DescribeRecordResponse.cpp
  src/v20210323/model/RecordInfo.cpp
  src/v20210323/model/CreateRecordBatchDetail.cpp
  src/v20210323/model/DescribeSubdomainAnalyticsResponse.cpp
  src/v20210323/model/ModifyRecordResponse.cpp
  src/v20210323/model/ModifyDomainUnlockResponse.cpp
  src/v20210323/model/DescribeDomainLogListRequest.cpp
  src/v20210323/model/DescribeDomainListResponse.cpp
  src/v20210323/model/ModifyRecordBatchRequest.cpp
  src/v20210323/model/DeleteRecordResponse.cpp
  src/v20210323/model/CreateRecordBatchRecord.cpp
  src/v20210323/model/CreateDomainResponse.cpp
  src/v20210323/model/DomainCountInfo.cpp
  src/v20210323/model/UserInfo.cpp
  src/v20210323/model/ModifyRecordBatchResponse.cpp
  src/v20210323/model/DescribeDomainLogListResponse.cpp
  src/v20210323/model/DescribeRecordTypeRequest.cpp
  src/v20210323/model/RecordListItem.cpp
  src/v20210323/model/CreateDomainBatchResponse.cpp
  src/v20210323/model/ModifyDomainOwnerResponse.cpp
  src/v20210323/model/SubdomainAnalyticsInfo.cpp
  src/v20210323/model/ModifyRecordBatchDetail.cpp
  src/v20210323/model/DescribeUserDetailResponse.cpp
  src/v20210323/model/CreateDomainRequest.cpp
  src/v20210323/model/DomainAliasAnalyticsItem.cpp
  src/v20210323/model/DescribeDomainShareInfoResponse.cpp
  src/v20210323/model/ModifyDomainRemarkRequest.cpp
  src/v20210323/model/CreateDomainAliasResponse.cpp
  src/v20210323/model/DescribeRecordListRequest.cpp
  src/v20210323/model/DescribeDomainPurviewResponse.cpp
  src/v20210323/model/ModifySubdomainStatusResponse.cpp
  src/v20210323/model/DescribeDomainAnalyticsResponse.cpp
  src/v20210323/model/ModifyRecordStatusResponse.cpp
  src/v20210323/model/CreateDomainGroupRequest.cpp
  src/v20210323/model/LineInfo.cpp
  src/v20210323/model/DeleteDomainResponse.cpp
  src/v20210323/model/DescribeDomainAliasListRequest.cpp
  src/v20210323/model/CreateDomainAliasRequest.cpp
  src/v20210323/model/DeleteShareDomainRequest.cpp
  src/v20210323/model/ModifyDynamicDNSRequest.cpp
  src/v20210323/model/PurviewInfo.cpp
  src/v20210323/model/ModifyRecordRemarkRequest.cpp
  src/v20210323/model/DescribeUserDetailRequest.cpp
  src/v20210323/model/ModifyRecordRemarkResponse.cpp
  src/v20210323/model/DescribeDomainListRequest.cpp
  src/v20210323/model/DomainCreateInfo.cpp
  src/v20210323/model/DescribeDomainPurviewRequest.cpp
  src/v20210323/model/CreateDomainBatchDetail.cpp
  src/v20210323/model/ModifyDomainUnlockRequest.cpp
  src/v20210323/model/ModifyDomainLockResponse.cpp
  src/v20210323/model/LockInfo.cpp
  src/v20210323/model/DescribeBatchTaskResponse.cpp
  src/v20210323/model/DescribeDomainAnalyticsRequest.cpp
  src/v20210323/model/ModifyDynamicDNSResponse.cpp
  )

set(dnspod_include
    include/tencentcloud/dnspod
  )

add_library(dnspod ${LIB_TYPE}
  ${dnspod_public_header}
  ${dnspod_public_header_model}
  ${dnspod_src})

set_target_properties(dnspod
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dnspod
  )

target_include_directories(dnspod
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dnspod
  core)

#install(FILES ${dnspod_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dnspod/v20210323)
#install(FILES ${dnspod_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dnspod/v20210323/model)
install(DIRECTORY ${dnspod_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dnspod
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
