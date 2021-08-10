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

set(waf_public_header
  include/tencentcloud/waf/v20180125/WafClient.h
  )

set(waf_public_header_model
  include/tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisResponse.h
  include/tencentcloud/waf/v20180125/model/CreateAccessExportRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomRulesRspRuleListItem.h
  include/tencentcloud/waf/v20180125/model/AccessFullTextInfo.h
  include/tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusResponse.h
  include/tencentcloud/waf/v20180125/model/ResponseCode.h
  include/tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordResponse.h
  include/tencentcloud/waf/v20180125/model/ModifyAccessPeriodResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessExportsResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeFlowTrendRequest.h
  include/tencentcloud/waf/v20180125/model/AccessLogItems.h
  include/tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h
  include/tencentcloud/waf/v20180125/model/AccessRuleKeyValueInfo.h
  include/tencentcloud/waf/v20180125/model/SearchAccessLogResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteDownloadRecordResponse.h
  include/tencentcloud/waf/v20180125/model/DeleteAccessExportRequest.h
  include/tencentcloud/waf/v20180125/model/ModifyAccessPeriodRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsRequest.h
  include/tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordRequest.h
  include/tencentcloud/waf/v20180125/model/AccessRuleTagInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessIndexRequest.h
  include/tencentcloud/waf/v20180125/model/AccessRuleInfo.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisRequest.h
  include/tencentcloud/waf/v20180125/model/AccessValueInfo.h
  include/tencentcloud/waf/v20180125/model/DeleteSessionResponse.h
  include/tencentcloud/waf/v20180125/model/AccessLogItem.h
  include/tencentcloud/waf/v20180125/model/AccessLogInfo.h
  include/tencentcloud/waf/v20180125/model/DeleteSessionRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessExportsRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeAccessIndexResponse.h
  include/tencentcloud/waf/v20180125/model/CreateAttackDownloadTaskResponse.h
  include/tencentcloud/waf/v20180125/model/CreateAccessExportResponse.h
  include/tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h
  include/tencentcloud/waf/v20180125/model/AccessKeyValueInfo.h
  include/tencentcloud/waf/v20180125/model/BotStatPointItem.h
  include/tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomRulesResponse.h
  include/tencentcloud/waf/v20180125/model/DescribeFlowTrendResponse.h
  include/tencentcloud/waf/v20180125/model/Strategy.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomRulesRequest.h
  include/tencentcloud/waf/v20180125/model/DescribeCustomRulesPagingInfo.h
  include/tencentcloud/waf/v20180125/model/DeleteDownloadRecordRequest.h
  include/tencentcloud/waf/v20180125/model/ExportAccessInfo.h
  include/tencentcloud/waf/v20180125/model/DeleteAccessExportResponse.h
  include/tencentcloud/waf/v20180125/model/CreateAttackDownloadTaskRequest.h
  include/tencentcloud/waf/v20180125/model/SearchAccessLogRequest.h
  )

set(waf_src
  src/v20180125/WafClient.cpp
  src/v20180125/model/DescribeAccessFastAnalysisResponse.cpp
  src/v20180125/model/CreateAccessExportRequest.cpp
  src/v20180125/model/DescribeCustomRulesRspRuleListItem.cpp
  src/v20180125/model/AccessFullTextInfo.cpp
  src/v20180125/model/ModifyCustomRuleStatusResponse.cpp
  src/v20180125/model/ResponseCode.cpp
  src/v20180125/model/DescribeUserClbWafRegionsResponse.cpp
  src/v20180125/model/DeleteAttackDownloadRecordResponse.cpp
  src/v20180125/model/ModifyAccessPeriodResponse.cpp
  src/v20180125/model/DescribeAccessExportsResponse.cpp
  src/v20180125/model/DescribeFlowTrendRequest.cpp
  src/v20180125/model/AccessLogItems.cpp
  src/v20180125/model/ModifyCustomRuleStatusRequest.cpp
  src/v20180125/model/AccessRuleKeyValueInfo.cpp
  src/v20180125/model/SearchAccessLogResponse.cpp
  src/v20180125/model/DeleteDownloadRecordResponse.cpp
  src/v20180125/model/DeleteAccessExportRequest.cpp
  src/v20180125/model/ModifyAccessPeriodRequest.cpp
  src/v20180125/model/DescribeUserClbWafRegionsRequest.cpp
  src/v20180125/model/DeleteAttackDownloadRecordRequest.cpp
  src/v20180125/model/AccessRuleTagInfo.cpp
  src/v20180125/model/DescribeAccessIndexRequest.cpp
  src/v20180125/model/AccessRuleInfo.cpp
  src/v20180125/model/DescribeAccessFastAnalysisRequest.cpp
  src/v20180125/model/AccessValueInfo.cpp
  src/v20180125/model/DeleteSessionResponse.cpp
  src/v20180125/model/AccessLogItem.cpp
  src/v20180125/model/AccessLogInfo.cpp
  src/v20180125/model/DeleteSessionRequest.cpp
  src/v20180125/model/DescribeAccessExportsRequest.cpp
  src/v20180125/model/DescribeAccessIndexResponse.cpp
  src/v20180125/model/CreateAttackDownloadTaskResponse.cpp
  src/v20180125/model/CreateAccessExportResponse.cpp
  src/v20180125/model/AddCustomRuleResponse.cpp
  src/v20180125/model/AccessKeyValueInfo.cpp
  src/v20180125/model/BotStatPointItem.cpp
  src/v20180125/model/AddCustomRuleRequest.cpp
  src/v20180125/model/DescribeCustomRulesResponse.cpp
  src/v20180125/model/DescribeFlowTrendResponse.cpp
  src/v20180125/model/Strategy.cpp
  src/v20180125/model/DescribeCustomRulesRequest.cpp
  src/v20180125/model/DescribeCustomRulesPagingInfo.cpp
  src/v20180125/model/DeleteDownloadRecordRequest.cpp
  src/v20180125/model/ExportAccessInfo.cpp
  src/v20180125/model/DeleteAccessExportResponse.cpp
  src/v20180125/model/CreateAttackDownloadTaskRequest.cpp
  src/v20180125/model/SearchAccessLogRequest.cpp
  )

set(waf_include
    include/tencentcloud/waf
  )

add_library(waf ${LIB_TYPE}
  ${waf_public_header}
  ${waf_public_header_model}
  ${waf_src})

set_target_properties(waf
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}waf
  )

target_include_directories(waf
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(waf
  core)

#install(FILES ${waf_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/waf/v20180125)
#install(FILES ${waf_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/waf/v20180125/model)
install(DIRECTORY ${waf_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS waf
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
