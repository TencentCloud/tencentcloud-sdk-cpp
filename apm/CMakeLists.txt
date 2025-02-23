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

set(apm_public_header
  include/tencentcloud/apm/v20210622/ApmClient.h
  )

set(apm_public_header_model
  include/tencentcloud/apm/v20210622/model/SpanLog.h
  include/tencentcloud/apm/v20210622/model/ModifyApmInstanceRequest.h
  include/tencentcloud/apm/v20210622/model/ApmInstanceDetail.h
  include/tencentcloud/apm/v20210622/model/CreateApmInstanceRequest.h
  include/tencentcloud/apm/v20210622/model/ModifyGeneralApmApplicationConfigRequest.h
  include/tencentcloud/apm/v20210622/model/DescribeServiceOverviewResponse.h
  include/tencentcloud/apm/v20210622/model/QueryMetricItem.h
  include/tencentcloud/apm/v20210622/model/TerminateApmInstanceRequest.h
  include/tencentcloud/apm/v20210622/model/DescribeApmInstancesResponse.h
  include/tencentcloud/apm/v20210622/model/Instrument.h
  include/tencentcloud/apm/v20210622/model/DescribeTagValuesResponse.h
  include/tencentcloud/apm/v20210622/model/Span.h
  include/tencentcloud/apm/v20210622/model/ApmAgentInfo.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralSpanListResponse.h
  include/tencentcloud/apm/v20210622/model/ApmMetricRecord.h
  include/tencentcloud/apm/v20210622/model/DescribeServiceOverviewRequest.h
  include/tencentcloud/apm/v20210622/model/DescribeApmAgentResponse.h
  include/tencentcloud/apm/v20210622/model/DescribeTagValuesRequest.h
  include/tencentcloud/apm/v20210622/model/ApmField.h
  include/tencentcloud/apm/v20210622/model/Line.h
  include/tencentcloud/apm/v20210622/model/ApmApplicationConfigView.h
  include/tencentcloud/apm/v20210622/model/ApmTag.h
  include/tencentcloud/apm/v20210622/model/APMKVItem.h
  include/tencentcloud/apm/v20210622/model/OrderBy.h
  include/tencentcloud/apm/v20210622/model/DescribeMetricRecordsResponse.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralOTSpanListResponse.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralSpanListRequest.h
  include/tencentcloud/apm/v20210622/model/Filter.h
  include/tencentcloud/apm/v20210622/model/APMKV.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralOTSpanListRequest.h
  include/tencentcloud/apm/v20210622/model/DescribeApmAgentRequest.h
  include/tencentcloud/apm/v20210622/model/DescribeMetricRecordsRequest.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralApmApplicationConfigResponse.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataRequest.h
  include/tencentcloud/apm/v20210622/model/CreateApmInstanceResponse.h
  include/tencentcloud/apm/v20210622/model/SpanReference.h
  include/tencentcloud/apm/v20210622/model/SpanProcess.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralApmApplicationConfigRequest.h
  include/tencentcloud/apm/v20210622/model/ModifyApmInstanceResponse.h
  include/tencentcloud/apm/v20210622/model/GeneralFilter.h
  include/tencentcloud/apm/v20210622/model/DescribeApmInstancesRequest.h
  include/tencentcloud/apm/v20210622/model/SpanTag.h
  include/tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataResponse.h
  include/tencentcloud/apm/v20210622/model/ModifyGeneralApmApplicationConfigResponse.h
  include/tencentcloud/apm/v20210622/model/TerminateApmInstanceResponse.h
  )

set(apm_src
  src/v20210622/ApmClient.cpp
  src/v20210622/model/SpanLog.cpp
  src/v20210622/model/ModifyApmInstanceRequest.cpp
  src/v20210622/model/ApmInstanceDetail.cpp
  src/v20210622/model/CreateApmInstanceRequest.cpp
  src/v20210622/model/ModifyGeneralApmApplicationConfigRequest.cpp
  src/v20210622/model/DescribeServiceOverviewResponse.cpp
  src/v20210622/model/QueryMetricItem.cpp
  src/v20210622/model/TerminateApmInstanceRequest.cpp
  src/v20210622/model/DescribeApmInstancesResponse.cpp
  src/v20210622/model/Instrument.cpp
  src/v20210622/model/DescribeTagValuesResponse.cpp
  src/v20210622/model/Span.cpp
  src/v20210622/model/ApmAgentInfo.cpp
  src/v20210622/model/DescribeGeneralSpanListResponse.cpp
  src/v20210622/model/ApmMetricRecord.cpp
  src/v20210622/model/DescribeServiceOverviewRequest.cpp
  src/v20210622/model/DescribeApmAgentResponse.cpp
  src/v20210622/model/DescribeTagValuesRequest.cpp
  src/v20210622/model/ApmField.cpp
  src/v20210622/model/Line.cpp
  src/v20210622/model/ApmApplicationConfigView.cpp
  src/v20210622/model/ApmTag.cpp
  src/v20210622/model/APMKVItem.cpp
  src/v20210622/model/OrderBy.cpp
  src/v20210622/model/DescribeMetricRecordsResponse.cpp
  src/v20210622/model/DescribeGeneralOTSpanListResponse.cpp
  src/v20210622/model/DescribeGeneralSpanListRequest.cpp
  src/v20210622/model/Filter.cpp
  src/v20210622/model/APMKV.cpp
  src/v20210622/model/DescribeGeneralOTSpanListRequest.cpp
  src/v20210622/model/DescribeApmAgentRequest.cpp
  src/v20210622/model/DescribeMetricRecordsRequest.cpp
  src/v20210622/model/DescribeGeneralApmApplicationConfigResponse.cpp
  src/v20210622/model/DescribeGeneralMetricDataRequest.cpp
  src/v20210622/model/CreateApmInstanceResponse.cpp
  src/v20210622/model/SpanReference.cpp
  src/v20210622/model/SpanProcess.cpp
  src/v20210622/model/DescribeGeneralApmApplicationConfigRequest.cpp
  src/v20210622/model/ModifyApmInstanceResponse.cpp
  src/v20210622/model/GeneralFilter.cpp
  src/v20210622/model/DescribeApmInstancesRequest.cpp
  src/v20210622/model/SpanTag.cpp
  src/v20210622/model/DescribeGeneralMetricDataResponse.cpp
  src/v20210622/model/ModifyGeneralApmApplicationConfigResponse.cpp
  src/v20210622/model/TerminateApmInstanceResponse.cpp
  )

set(apm_include
    include/tencentcloud/apm
  )

add_library(apm ${LIB_TYPE}
  ${apm_public_header}
  ${apm_public_header_model}
  ${apm_src})

set_target_properties(apm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}apm
  )

target_include_directories(apm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(apm
  core)

#install(FILES ${apm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apm/v20210622)
#install(FILES ${apm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apm/v20210622/model)
install(DIRECTORY ${apm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS apm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
