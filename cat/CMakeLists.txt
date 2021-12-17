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

set(cat_public_header
  include/tencentcloud/cat/v20180409/CatClient.h
  )

set(cat_public_header_model
  include/tencentcloud/cat/v20180409/model/ModifyAgentGroupRequest.h
  include/tencentcloud/cat/v20180409/model/AlarmInfo.h
  include/tencentcloud/cat/v20180409/model/CreateTaskExResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeNodesResponse.h
  include/tencentcloud/cat/v20180409/model/RunTaskRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeTaskDetailResponse.h
  include/tencentcloud/cat/v20180409/model/DeleteTasksResponse.h
  include/tencentcloud/cat/v20180409/model/CatTaskDetail.h
  include/tencentcloud/cat/v20180409/model/BindAlarmPolicyRequest.h
  include/tencentcloud/cat/v20180409/model/DeleteProbeTaskRequest.h
  include/tencentcloud/cat/v20180409/model/ResultSummary.h
  include/tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeAlarmsByTaskRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeAlarmsRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeUserLimitResponse.h
  include/tencentcloud/cat/v20180409/model/CreateTaskExRequest.h
  include/tencentcloud/cat/v20180409/model/PauseTaskRequest.h
  include/tencentcloud/cat/v20180409/model/GetResultSummaryRequest.h
  include/tencentcloud/cat/v20180409/model/ProbeTask.h
  include/tencentcloud/cat/v20180409/model/DataPoint.h
  include/tencentcloud/cat/v20180409/model/DescribeAlarmTopicResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeUserLimitRequest.h
  include/tencentcloud/cat/v20180409/model/Label.h
  include/tencentcloud/cat/v20180409/model/DescribeAgentsRequest.h
  include/tencentcloud/cat/v20180409/model/CatReturnDetail.h
  include/tencentcloud/cat/v20180409/model/IspDetail.h
  include/tencentcloud/cat/v20180409/model/GetReturnCodeInfoRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeAgentsResponse.h
  include/tencentcloud/cat/v20180409/model/CreateAgentGroupResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataRequest.h
  include/tencentcloud/cat/v20180409/model/DeleteAgentGroupResponse.h
  include/tencentcloud/cat/v20180409/model/AgentGroup.h
  include/tencentcloud/cat/v20180409/model/GetReturnCodeHistoryRequest.h
  include/tencentcloud/cat/v20180409/model/ProvinceDetail.h
  include/tencentcloud/cat/v20180409/model/GetRealAvailRatioResponse.h
  include/tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListResponse.h
  include/tencentcloud/cat/v20180409/model/CreateAgentGroupRequest.h
  include/tencentcloud/cat/v20180409/model/ResumeProbeTaskResponse.h
  include/tencentcloud/cat/v20180409/model/ModifyTaskExResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeAlarmsByTaskResponse.h
  include/tencentcloud/cat/v20180409/model/ModifyTaskExRequest.h
  include/tencentcloud/cat/v20180409/model/ResumeProbeTaskRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeTasksByTypeRequest.h
  include/tencentcloud/cat/v20180409/model/NodeDefine.h
  include/tencentcloud/cat/v20180409/model/GetReturnCodeHistoryResponse.h
  include/tencentcloud/cat/v20180409/model/GetAvailRatioHistoryRequest.h
  include/tencentcloud/cat/v20180409/model/GetTaskTotalNumberResponse.h
  include/tencentcloud/cat/v20180409/model/DimensionsDetail.h
  include/tencentcloud/cat/v20180409/model/GetDailyAvailRatioRequest.h
  include/tencentcloud/cat/v20180409/model/CatReturnSummary.h
  include/tencentcloud/cat/v20180409/model/TaskResult.h
  include/tencentcloud/cat/v20180409/model/SuspendProbeTaskResponse.h
  include/tencentcloud/cat/v20180409/model/GetRespTimeTrendExResponse.h
  include/tencentcloud/cat/v20180409/model/DataPointMetric.h
  include/tencentcloud/cat/v20180409/model/DescribeCatLogsRequest.h
  include/tencentcloud/cat/v20180409/model/GetAvailRatioHistoryResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeTasksResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeAlarmsResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeTasksByTypeResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeAlarmTopicRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeAgentGroupsResponse.h
  include/tencentcloud/cat/v20180409/model/SuspendProbeTaskRequest.h
  include/tencentcloud/cat/v20180409/model/GetRespTimeTrendExRequest.h
  include/tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListRequest.h
  include/tencentcloud/cat/v20180409/model/CreateProbeTasksRequest.h
  include/tencentcloud/cat/v20180409/model/CatLog.h
  include/tencentcloud/cat/v20180409/model/DescribeAgentGroupsRequest.h
  include/tencentcloud/cat/v20180409/model/TaskAlarm.h
  include/tencentcloud/cat/v20180409/model/DescribeCatLogsResponse.h
  include/tencentcloud/cat/v20180409/model/DetailedSingleDataDefine.h
  include/tencentcloud/cat/v20180409/model/GetReturnCodeInfoResponse.h
  include/tencentcloud/cat/v20180409/model/BindAlarmPolicyResponse.h
  include/tencentcloud/cat/v20180409/model/RunTaskResponse.h
  include/tencentcloud/cat/v20180409/model/Field.h
  include/tencentcloud/cat/v20180409/model/ProbeTaskBasicConfiguration.h
  include/tencentcloud/cat/v20180409/model/VerifyResultRequest.h
  include/tencentcloud/cat/v20180409/model/GetTaskTotalNumberRequest.h
  include/tencentcloud/cat/v20180409/model/ModifyAgentGroupResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeTaskDetailRequest.h
  include/tencentcloud/cat/v20180409/model/GetResultSummaryResponse.h
  include/tencentcloud/cat/v20180409/model/VerifyResultResponse.h
  include/tencentcloud/cat/v20180409/model/AlarmTopic.h
  include/tencentcloud/cat/v20180409/model/DeleteTasksRequest.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeTasksRequest.h
  include/tencentcloud/cat/v20180409/model/PauseTaskResponse.h
  include/tencentcloud/cat/v20180409/model/GetDailyAvailRatioResponse.h
  include/tencentcloud/cat/v20180409/model/DeleteAgentGroupRequest.h
  include/tencentcloud/cat/v20180409/model/GetRealAvailRatioRequest.h
  include/tencentcloud/cat/v20180409/model/DeleteProbeTaskResponse.h
  include/tencentcloud/cat/v20180409/model/CreateProbeTasksResponse.h
  include/tencentcloud/cat/v20180409/model/DescribeProbeNodesRequest.h
  include/tencentcloud/cat/v20180409/model/CatAgent.h
  )

set(cat_src
  src/v20180409/CatClient.cpp
  src/v20180409/model/ModifyAgentGroupRequest.cpp
  src/v20180409/model/AlarmInfo.cpp
  src/v20180409/model/CreateTaskExResponse.cpp
  src/v20180409/model/DescribeProbeNodesResponse.cpp
  src/v20180409/model/RunTaskRequest.cpp
  src/v20180409/model/DescribeTaskDetailResponse.cpp
  src/v20180409/model/DeleteTasksResponse.cpp
  src/v20180409/model/CatTaskDetail.cpp
  src/v20180409/model/BindAlarmPolicyRequest.cpp
  src/v20180409/model/DeleteProbeTaskRequest.cpp
  src/v20180409/model/ResultSummary.cpp
  src/v20180409/model/DescribeDetailedSingleProbeDataResponse.cpp
  src/v20180409/model/DescribeAlarmsByTaskRequest.cpp
  src/v20180409/model/DescribeAlarmsRequest.cpp
  src/v20180409/model/DescribeUserLimitResponse.cpp
  src/v20180409/model/CreateTaskExRequest.cpp
  src/v20180409/model/PauseTaskRequest.cpp
  src/v20180409/model/GetResultSummaryRequest.cpp
  src/v20180409/model/ProbeTask.cpp
  src/v20180409/model/DataPoint.cpp
  src/v20180409/model/DescribeAlarmTopicResponse.cpp
  src/v20180409/model/DescribeUserLimitRequest.cpp
  src/v20180409/model/Label.cpp
  src/v20180409/model/DescribeAgentsRequest.cpp
  src/v20180409/model/CatReturnDetail.cpp
  src/v20180409/model/IspDetail.cpp
  src/v20180409/model/GetReturnCodeInfoRequest.cpp
  src/v20180409/model/DescribeAgentsResponse.cpp
  src/v20180409/model/CreateAgentGroupResponse.cpp
  src/v20180409/model/DescribeDetailedSingleProbeDataRequest.cpp
  src/v20180409/model/DeleteAgentGroupResponse.cpp
  src/v20180409/model/AgentGroup.cpp
  src/v20180409/model/GetReturnCodeHistoryRequest.cpp
  src/v20180409/model/ProvinceDetail.cpp
  src/v20180409/model/GetRealAvailRatioResponse.cpp
  src/v20180409/model/UpdateProbeTaskConfigurationListResponse.cpp
  src/v20180409/model/CreateAgentGroupRequest.cpp
  src/v20180409/model/ResumeProbeTaskResponse.cpp
  src/v20180409/model/ModifyTaskExResponse.cpp
  src/v20180409/model/DescribeAlarmsByTaskResponse.cpp
  src/v20180409/model/ModifyTaskExRequest.cpp
  src/v20180409/model/ResumeProbeTaskRequest.cpp
  src/v20180409/model/DescribeTasksByTypeRequest.cpp
  src/v20180409/model/NodeDefine.cpp
  src/v20180409/model/GetReturnCodeHistoryResponse.cpp
  src/v20180409/model/GetAvailRatioHistoryRequest.cpp
  src/v20180409/model/GetTaskTotalNumberResponse.cpp
  src/v20180409/model/DimensionsDetail.cpp
  src/v20180409/model/GetDailyAvailRatioRequest.cpp
  src/v20180409/model/CatReturnSummary.cpp
  src/v20180409/model/TaskResult.cpp
  src/v20180409/model/SuspendProbeTaskResponse.cpp
  src/v20180409/model/GetRespTimeTrendExResponse.cpp
  src/v20180409/model/DataPointMetric.cpp
  src/v20180409/model/DescribeCatLogsRequest.cpp
  src/v20180409/model/GetAvailRatioHistoryResponse.cpp
  src/v20180409/model/DescribeProbeTasksResponse.cpp
  src/v20180409/model/DescribeAlarmsResponse.cpp
  src/v20180409/model/DescribeTasksByTypeResponse.cpp
  src/v20180409/model/DescribeAlarmTopicRequest.cpp
  src/v20180409/model/DescribeAgentGroupsResponse.cpp
  src/v20180409/model/SuspendProbeTaskRequest.cpp
  src/v20180409/model/GetRespTimeTrendExRequest.cpp
  src/v20180409/model/UpdateProbeTaskConfigurationListRequest.cpp
  src/v20180409/model/CreateProbeTasksRequest.cpp
  src/v20180409/model/CatLog.cpp
  src/v20180409/model/DescribeAgentGroupsRequest.cpp
  src/v20180409/model/TaskAlarm.cpp
  src/v20180409/model/DescribeCatLogsResponse.cpp
  src/v20180409/model/DetailedSingleDataDefine.cpp
  src/v20180409/model/GetReturnCodeInfoResponse.cpp
  src/v20180409/model/BindAlarmPolicyResponse.cpp
  src/v20180409/model/RunTaskResponse.cpp
  src/v20180409/model/Field.cpp
  src/v20180409/model/ProbeTaskBasicConfiguration.cpp
  src/v20180409/model/VerifyResultRequest.cpp
  src/v20180409/model/GetTaskTotalNumberRequest.cpp
  src/v20180409/model/ModifyAgentGroupResponse.cpp
  src/v20180409/model/DescribeTaskDetailRequest.cpp
  src/v20180409/model/GetResultSummaryResponse.cpp
  src/v20180409/model/VerifyResultResponse.cpp
  src/v20180409/model/AlarmTopic.cpp
  src/v20180409/model/DeleteTasksRequest.cpp
  src/v20180409/model/DescribeProbeTasksRequest.cpp
  src/v20180409/model/PauseTaskResponse.cpp
  src/v20180409/model/GetDailyAvailRatioResponse.cpp
  src/v20180409/model/DeleteAgentGroupRequest.cpp
  src/v20180409/model/GetRealAvailRatioRequest.cpp
  src/v20180409/model/DeleteProbeTaskResponse.cpp
  src/v20180409/model/CreateProbeTasksResponse.cpp
  src/v20180409/model/DescribeProbeNodesRequest.cpp
  src/v20180409/model/CatAgent.cpp
  )

set(cat_include
    include/tencentcloud/cat
  )

add_library(cat ${LIB_TYPE}
  ${cat_public_header}
  ${cat_public_header_model}
  ${cat_src})

set_target_properties(cat
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cat
  )

target_include_directories(cat
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cat
  core)

#install(FILES ${cat_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cat/v20180409)
#install(FILES ${cat_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cat/v20180409/model)
install(DIRECTORY ${cat_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cat
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
