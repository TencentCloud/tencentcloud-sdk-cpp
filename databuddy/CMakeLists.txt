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

set(databuddy_public_header
  include/tencentcloud/databuddy/v20260715/DatabuddyClient.h
  )

set(databuddy_public_header_model
  include/tencentcloud/databuddy/v20260715/model/DependOnBrief.h
  include/tencentcloud/databuddy/v20260715/model/FileInfo.h
  include/tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersResponse.h
  include/tencentcloud/databuddy/v20260715/model/Workflow.h
  include/tencentcloud/databuddy/v20260715/model/TaskRetryStrategy.h
  include/tencentcloud/databuddy/v20260715/model/FileStorage.h
  include/tencentcloud/databuddy/v20260715/model/ScheduledTimeConfig.h
  include/tencentcloud/databuddy/v20260715/model/DeleteWorkflowResponse.h
  include/tencentcloud/databuddy/v20260715/model/ListConsoleUsersResponse.h
  include/tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersResponse.h
  include/tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskBrief.h
  include/tencentcloud/databuddy/v20260715/model/MonitorMetricBrief.h
  include/tencentcloud/databuddy/v20260715/model/ParamInfo.h
  include/tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIteration.h
  include/tencentcloud/databuddy/v20260715/model/DeleteWorkflowRequest.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsRequest.h
  include/tencentcloud/databuddy/v20260715/model/AlarmBrief.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowTaskNodeBrief.h
  include/tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersRsp.h
  include/tencentcloud/databuddy/v20260715/model/CreateWorkflowRequest.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowRunBrief.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowTriggerAdvancedConfiguration.h
  include/tencentcloud/databuddy/v20260715/model/AsyncActionRsp.h
  include/tencentcloud/databuddy/v20260715/model/CreateFileResponse.h
  include/tencentcloud/databuddy/v20260715/model/TaskSchedulingParameterBrief.h
  include/tencentcloud/databuddy/v20260715/model/UpdateWorkflowRequest.h
  include/tencentcloud/databuddy/v20260715/model/TaskRunConditionRule.h
  include/tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h
  include/tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleResponse.h
  include/tencentcloud/databuddy/v20260715/model/KillWorkflowRunResponse.h
  include/tencentcloud/databuddy/v20260715/model/AddConsoleUsersRsp.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowsRequest.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRequest.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowTriggerConfiguration.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunResponse.h
  include/tencentcloud/databuddy/v20260715/model/GetFileRequest.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowBaseInfo.h
  include/tencentcloud/databuddy/v20260715/model/TaskType.h
  include/tencentcloud/databuddy/v20260715/model/TaskTypeNotebookExt.h
  include/tencentcloud/databuddy/v20260715/model/RerunWorkflowRunResponse.h
  include/tencentcloud/databuddy/v20260715/model/CreateWorkflowRsp.h
  include/tencentcloud/databuddy/v20260715/model/GetFileResponse.h
  include/tencentcloud/databuddy/v20260715/model/AsyncOperation.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowRunRsp.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsRsp.h
  include/tencentcloud/databuddy/v20260715/model/ScheduleBizEnumBrief.h
  include/tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIterationBrief.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowsRsp.h
  include/tencentcloud/databuddy/v20260715/model/RerunWorkflowRunRequest.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowsResponse.h
  include/tencentcloud/databuddy/v20260715/model/LabelBrief.h
  include/tencentcloud/databuddy/v20260715/model/AddConsoleUsersRequest.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowBaseInfoDetail.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowBrief.h
  include/tencentcloud/databuddy/v20260715/model/KillWorkflowRunRequest.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsResponse.h
  include/tencentcloud/databuddy/v20260715/model/AddConsoleUsersResponse.h
  include/tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleRsp.h
  include/tencentcloud/databuddy/v20260715/model/DeleteFileResult.h
  include/tencentcloud/databuddy/v20260715/model/RunActionBrief.h
  include/tencentcloud/databuddy/v20260715/model/FileOutputConf.h
  include/tencentcloud/databuddy/v20260715/model/RunWorkflowRequest.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowTaskRun.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowResponse.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRequest.h
  include/tencentcloud/databuddy/v20260715/model/DeleteFileResponse.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRsp.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowTask.h
  include/tencentcloud/databuddy/v20260715/model/AdvancedDependencyConfig.h
  include/tencentcloud/databuddy/v20260715/model/UpdateWorkflowResponse.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowRequest.h
  include/tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunListOption.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowRun.h
  include/tencentcloud/databuddy/v20260715/model/TaskTypeProperty.h
  include/tencentcloud/databuddy/v20260715/model/CreateFileRequest.h
  include/tencentcloud/databuddy/v20260715/model/UpdateFileRequest.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowRunRequest.h
  include/tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersRequest.h
  include/tencentcloud/databuddy/v20260715/model/FileConfig.h
  include/tencentcloud/databuddy/v20260715/model/RunWorkflowResponse.h
  include/tencentcloud/databuddy/v20260715/model/ListConsoleUsersRequest.h
  include/tencentcloud/databuddy/v20260715/model/ListWorkflowRunsResponse.h
  include/tencentcloud/databuddy/v20260715/model/AdvancedParameter.h
  include/tencentcloud/databuddy/v20260715/model/ConsoleUserInfo.h
  include/tencentcloud/databuddy/v20260715/model/UpdateWorkflowRsp.h
  include/tencentcloud/databuddy/v20260715/model/OrderBy.h
  include/tencentcloud/databuddy/v20260715/model/WorkflowAdvanceConfig.h
  include/tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRun.h
  include/tencentcloud/databuddy/v20260715/model/MonitorMetricItem.h
  include/tencentcloud/databuddy/v20260715/model/CreateWorkflowResponse.h
  include/tencentcloud/databuddy/v20260715/model/AlarmGroup.h
  include/tencentcloud/databuddy/v20260715/model/DeleteFileRequest.h
  include/tencentcloud/databuddy/v20260715/model/DeleteWorkflowRsp.h
  include/tencentcloud/databuddy/v20260715/model/CommonFailItem.h
  include/tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersRsp.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowRunResponse.h
  include/tencentcloud/databuddy/v20260715/model/ListConsoleUsersRsp.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowRsp.h
  include/tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleRequest.h
  include/tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h
  include/tencentcloud/databuddy/v20260715/model/UpdateFileResponse.h
  include/tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersRequest.h
  include/tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRsp.h
  )

set(databuddy_src
  src/v20260715/DatabuddyClient.cpp
  src/v20260715/model/DependOnBrief.cpp
  src/v20260715/model/FileInfo.cpp
  src/v20260715/model/UpdateConsoleUsersResponse.cpp
  src/v20260715/model/Workflow.cpp
  src/v20260715/model/TaskRetryStrategy.cpp
  src/v20260715/model/FileStorage.cpp
  src/v20260715/model/ScheduledTimeConfig.cpp
  src/v20260715/model/DeleteWorkflowResponse.cpp
  src/v20260715/model/ListConsoleUsersResponse.cpp
  src/v20260715/model/RemoveConsoleUsersResponse.cpp
  src/v20260715/model/InnerWorkflowTaskBrief.cpp
  src/v20260715/model/MonitorMetricBrief.cpp
  src/v20260715/model/ParamInfo.cpp
  src/v20260715/model/InnerWorkflowTaskRunIteration.cpp
  src/v20260715/model/DeleteWorkflowRequest.cpp
  src/v20260715/model/ListWorkflowTaskRunsRequest.cpp
  src/v20260715/model/AlarmBrief.cpp
  src/v20260715/model/WorkflowTaskNodeBrief.cpp
  src/v20260715/model/UpdateConsoleUsersRsp.cpp
  src/v20260715/model/CreateWorkflowRequest.cpp
  src/v20260715/model/WorkflowRunBrief.cpp
  src/v20260715/model/WorkflowTriggerAdvancedConfiguration.cpp
  src/v20260715/model/AsyncActionRsp.cpp
  src/v20260715/model/CreateFileResponse.cpp
  src/v20260715/model/TaskSchedulingParameterBrief.cpp
  src/v20260715/model/UpdateWorkflowRequest.cpp
  src/v20260715/model/TaskRunConditionRule.cpp
  src/v20260715/model/ResourceGroupInfo.cpp
  src/v20260715/model/UnbindWorkflowBundleResponse.cpp
  src/v20260715/model/KillWorkflowRunResponse.cpp
  src/v20260715/model/AddConsoleUsersRsp.cpp
  src/v20260715/model/ListWorkflowsRequest.cpp
  src/v20260715/model/ListWorkflowRunsRequest.cpp
  src/v20260715/model/WorkflowTriggerConfiguration.cpp
  src/v20260715/model/GetWorkflowTaskRunResponse.cpp
  src/v20260715/model/GetFileRequest.cpp
  src/v20260715/model/WorkflowBaseInfo.cpp
  src/v20260715/model/TaskType.cpp
  src/v20260715/model/TaskTypeNotebookExt.cpp
  src/v20260715/model/RerunWorkflowRunResponse.cpp
  src/v20260715/model/CreateWorkflowRsp.cpp
  src/v20260715/model/GetFileResponse.cpp
  src/v20260715/model/AsyncOperation.cpp
  src/v20260715/model/GetWorkflowRunRsp.cpp
  src/v20260715/model/ListWorkflowTaskRunsRsp.cpp
  src/v20260715/model/ScheduleBizEnumBrief.cpp
  src/v20260715/model/InnerWorkflowTaskRunIterationBrief.cpp
  src/v20260715/model/ListWorkflowsRsp.cpp
  src/v20260715/model/RerunWorkflowRunRequest.cpp
  src/v20260715/model/ListWorkflowsResponse.cpp
  src/v20260715/model/LabelBrief.cpp
  src/v20260715/model/AddConsoleUsersRequest.cpp
  src/v20260715/model/WorkflowBaseInfoDetail.cpp
  src/v20260715/model/WorkflowBrief.cpp
  src/v20260715/model/KillWorkflowRunRequest.cpp
  src/v20260715/model/ListWorkflowTaskRunsResponse.cpp
  src/v20260715/model/AddConsoleUsersResponse.cpp
  src/v20260715/model/UnbindWorkflowBundleRsp.cpp
  src/v20260715/model/DeleteFileResult.cpp
  src/v20260715/model/RunActionBrief.cpp
  src/v20260715/model/FileOutputConf.cpp
  src/v20260715/model/RunWorkflowRequest.cpp
  src/v20260715/model/WorkflowTaskRun.cpp
  src/v20260715/model/GetWorkflowResponse.cpp
  src/v20260715/model/GetWorkflowTaskRunRequest.cpp
  src/v20260715/model/DeleteFileResponse.cpp
  src/v20260715/model/ListWorkflowRunsRsp.cpp
  src/v20260715/model/WorkflowTask.cpp
  src/v20260715/model/AdvancedDependencyConfig.cpp
  src/v20260715/model/UpdateWorkflowResponse.cpp
  src/v20260715/model/GetWorkflowRequest.cpp
  src/v20260715/model/InnerWorkflowTaskRunListOption.cpp
  src/v20260715/model/WorkflowRun.cpp
  src/v20260715/model/TaskTypeProperty.cpp
  src/v20260715/model/CreateFileRequest.cpp
  src/v20260715/model/UpdateFileRequest.cpp
  src/v20260715/model/GetWorkflowRunRequest.cpp
  src/v20260715/model/RemoveConsoleUsersRequest.cpp
  src/v20260715/model/FileConfig.cpp
  src/v20260715/model/RunWorkflowResponse.cpp
  src/v20260715/model/ListConsoleUsersRequest.cpp
  src/v20260715/model/ListWorkflowRunsResponse.cpp
  src/v20260715/model/AdvancedParameter.cpp
  src/v20260715/model/ConsoleUserInfo.cpp
  src/v20260715/model/UpdateWorkflowRsp.cpp
  src/v20260715/model/OrderBy.cpp
  src/v20260715/model/WorkflowAdvanceConfig.cpp
  src/v20260715/model/InnerWorkflowTaskRun.cpp
  src/v20260715/model/MonitorMetricItem.cpp
  src/v20260715/model/CreateWorkflowResponse.cpp
  src/v20260715/model/AlarmGroup.cpp
  src/v20260715/model/DeleteFileRequest.cpp
  src/v20260715/model/DeleteWorkflowRsp.cpp
  src/v20260715/model/CommonFailItem.cpp
  src/v20260715/model/RemoveConsoleUsersRsp.cpp
  src/v20260715/model/GetWorkflowRunResponse.cpp
  src/v20260715/model/ListConsoleUsersRsp.cpp
  src/v20260715/model/GetWorkflowRsp.cpp
  src/v20260715/model/UnbindWorkflowBundleRequest.cpp
  src/v20260715/model/RoleBasicInfo.cpp
  src/v20260715/model/UpdateFileResponse.cpp
  src/v20260715/model/UpdateConsoleUsersRequest.cpp
  src/v20260715/model/GetWorkflowTaskRunRsp.cpp
  )

set(databuddy_include
    include/tencentcloud/databuddy
  )

add_library(databuddy ${LIB_TYPE}
  ${databuddy_public_header}
  ${databuddy_public_header_model}
  ${databuddy_src})

set_target_properties(databuddy
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}databuddy
  )

target_include_directories(databuddy
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(databuddy
  core)

#install(FILES ${databuddy_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/databuddy/v20260715)
#install(FILES ${databuddy_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/databuddy/v20260715/model)
install(DIRECTORY ${databuddy_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS databuddy
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
