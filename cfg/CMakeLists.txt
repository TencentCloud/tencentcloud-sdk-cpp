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

set(cfg_public_header
  include/tencentcloud/cfg/v20210820/CfgClient.h
  )

set(cfg_public_header_model
  include/tencentcloud/cfg/v20210820/model/DescribeTaskRequest.h
  include/tencentcloud/cfg/v20210820/model/DescribeActionFieldConfigListRequest.h
  include/tencentcloud/cfg/v20210820/model/TaskGroupAction.h
  include/tencentcloud/cfg/v20210820/model/ApmServiceInfo.h
  include/tencentcloud/cfg/v20210820/model/TaskGroupInstancesExecuteRules.h
  include/tencentcloud/cfg/v20210820/model/CreateTaskFromActionRequest.h
  include/tencentcloud/cfg/v20210820/model/DeleteTaskRequest.h
  include/tencentcloud/cfg/v20210820/model/DescribeActionLibraryListRequest.h
  include/tencentcloud/cfg/v20210820/model/TaskGroup.h
  include/tencentcloud/cfg/v20210820/model/ExecuteTaskResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribeActionFieldConfigListResponse.h
  include/tencentcloud/cfg/v20210820/model/ActionFieldConfigDetail.h
  include/tencentcloud/cfg/v20210820/model/TemplateGroupAction.h
  include/tencentcloud/cfg/v20210820/model/Template.h
  include/tencentcloud/cfg/v20210820/model/DescribeObjectTypeListResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskExecuteLogsRequest.h
  include/tencentcloud/cfg/v20210820/model/ModifyTaskRunStatusRequest.h
  include/tencentcloud/cfg/v20210820/model/DescribeTemplateResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribePolicy.h
  include/tencentcloud/cfg/v20210820/model/ActionFilter.h
  include/tencentcloud/cfg/v20210820/model/PolicyTriggerLog.h
  include/tencentcloud/cfg/v20210820/model/ModifyTaskRunStatusResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribeTemplateRequest.h
  include/tencentcloud/cfg/v20210820/model/ExecuteTaskInstanceRequest.h
  include/tencentcloud/cfg/v20210820/model/TaskGroupForAction.h
  include/tencentcloud/cfg/v20210820/model/ExecuteTaskRequest.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskListResponse.h
  include/tencentcloud/cfg/v20210820/model/ResourceOffline.h
  include/tencentcloud/cfg/v20210820/model/DescribeTemplateListResponse.h
  include/tencentcloud/cfg/v20210820/model/TaskMonitor.h
  include/tencentcloud/cfg/v20210820/model/DescribeTemplateListRequest.h
  include/tencentcloud/cfg/v20210820/model/TagWithDescribe.h
  include/tencentcloud/cfg/v20210820/model/DescribeObjectTypeListRequest.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskPolicyTriggerLogResponse.h
  include/tencentcloud/cfg/v20210820/model/CreateTaskFromTemplateResponse.h
  include/tencentcloud/cfg/v20210820/model/DeleteTaskResponse.h
  include/tencentcloud/cfg/v20210820/model/ObjectType.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskPolicyTriggerLogRequest.h
  include/tencentcloud/cfg/v20210820/model/Task.h
  include/tencentcloud/cfg/v20210820/model/TaskOrg.h
  include/tencentcloud/cfg/v20210820/model/TaskReportInfo.h
  include/tencentcloud/cfg/v20210820/model/CreateTaskFromTemplateRequest.h
  include/tencentcloud/cfg/v20210820/model/CreateTaskFromMultiActionRequest.h
  include/tencentcloud/cfg/v20210820/model/TriggerPolicyRequest.h
  include/tencentcloud/cfg/v20210820/model/TaskConfig.h
  include/tencentcloud/cfg/v20210820/model/TriggerPolicyResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskListRequest.h
  include/tencentcloud/cfg/v20210820/model/DescribeActionLibraryListResponse.h
  include/tencentcloud/cfg/v20210820/model/ObjectTypeJsonParse.h
  include/tencentcloud/cfg/v20210820/model/TaskListItem.h
  include/tencentcloud/cfg/v20210820/model/ExecuteTaskInstanceResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskExecuteLogsResponse.h
  include/tencentcloud/cfg/v20210820/model/TaskGroupConfig.h
  include/tencentcloud/cfg/v20210820/model/TemplateMonitor.h
  include/tencentcloud/cfg/v20210820/model/TemplateGroup.h
  include/tencentcloud/cfg/v20210820/model/TemplatePolicy.h
  include/tencentcloud/cfg/v20210820/model/TaskGroupInstance.h
  include/tencentcloud/cfg/v20210820/model/ActionFieldConfigResult.h
  include/tencentcloud/cfg/v20210820/model/TaskGroupActionConfig.h
  include/tencentcloud/cfg/v20210820/model/ActionLibraryListResult.h
  include/tencentcloud/cfg/v20210820/model/CreateTaskFromMultiActionResponse.h
  include/tencentcloud/cfg/v20210820/model/DescribeTaskResponse.h
  include/tencentcloud/cfg/v20210820/model/CreateTaskFromActionResponse.h
  include/tencentcloud/cfg/v20210820/model/TemplateListItem.h
  include/tencentcloud/cfg/v20210820/model/TagWithCreate.h
  include/tencentcloud/cfg/v20210820/model/ObjectTypeConfigFields.h
  include/tencentcloud/cfg/v20210820/model/ObjectTypeConfig.h
  )

set(cfg_src
  src/v20210820/CfgClient.cpp
  src/v20210820/model/DescribeTaskRequest.cpp
  src/v20210820/model/DescribeActionFieldConfigListRequest.cpp
  src/v20210820/model/TaskGroupAction.cpp
  src/v20210820/model/ApmServiceInfo.cpp
  src/v20210820/model/TaskGroupInstancesExecuteRules.cpp
  src/v20210820/model/CreateTaskFromActionRequest.cpp
  src/v20210820/model/DeleteTaskRequest.cpp
  src/v20210820/model/DescribeActionLibraryListRequest.cpp
  src/v20210820/model/TaskGroup.cpp
  src/v20210820/model/ExecuteTaskResponse.cpp
  src/v20210820/model/DescribeActionFieldConfigListResponse.cpp
  src/v20210820/model/ActionFieldConfigDetail.cpp
  src/v20210820/model/TemplateGroupAction.cpp
  src/v20210820/model/Template.cpp
  src/v20210820/model/DescribeObjectTypeListResponse.cpp
  src/v20210820/model/DescribeTaskExecuteLogsRequest.cpp
  src/v20210820/model/ModifyTaskRunStatusRequest.cpp
  src/v20210820/model/DescribeTemplateResponse.cpp
  src/v20210820/model/DescribePolicy.cpp
  src/v20210820/model/ActionFilter.cpp
  src/v20210820/model/PolicyTriggerLog.cpp
  src/v20210820/model/ModifyTaskRunStatusResponse.cpp
  src/v20210820/model/DescribeTemplateRequest.cpp
  src/v20210820/model/ExecuteTaskInstanceRequest.cpp
  src/v20210820/model/TaskGroupForAction.cpp
  src/v20210820/model/ExecuteTaskRequest.cpp
  src/v20210820/model/DescribeTaskListResponse.cpp
  src/v20210820/model/ResourceOffline.cpp
  src/v20210820/model/DescribeTemplateListResponse.cpp
  src/v20210820/model/TaskMonitor.cpp
  src/v20210820/model/DescribeTemplateListRequest.cpp
  src/v20210820/model/TagWithDescribe.cpp
  src/v20210820/model/DescribeObjectTypeListRequest.cpp
  src/v20210820/model/DescribeTaskPolicyTriggerLogResponse.cpp
  src/v20210820/model/CreateTaskFromTemplateResponse.cpp
  src/v20210820/model/DeleteTaskResponse.cpp
  src/v20210820/model/ObjectType.cpp
  src/v20210820/model/DescribeTaskPolicyTriggerLogRequest.cpp
  src/v20210820/model/Task.cpp
  src/v20210820/model/TaskOrg.cpp
  src/v20210820/model/TaskReportInfo.cpp
  src/v20210820/model/CreateTaskFromTemplateRequest.cpp
  src/v20210820/model/CreateTaskFromMultiActionRequest.cpp
  src/v20210820/model/TriggerPolicyRequest.cpp
  src/v20210820/model/TaskConfig.cpp
  src/v20210820/model/TriggerPolicyResponse.cpp
  src/v20210820/model/DescribeTaskListRequest.cpp
  src/v20210820/model/DescribeActionLibraryListResponse.cpp
  src/v20210820/model/ObjectTypeJsonParse.cpp
  src/v20210820/model/TaskListItem.cpp
  src/v20210820/model/ExecuteTaskInstanceResponse.cpp
  src/v20210820/model/DescribeTaskExecuteLogsResponse.cpp
  src/v20210820/model/TaskGroupConfig.cpp
  src/v20210820/model/TemplateMonitor.cpp
  src/v20210820/model/TemplateGroup.cpp
  src/v20210820/model/TemplatePolicy.cpp
  src/v20210820/model/TaskGroupInstance.cpp
  src/v20210820/model/ActionFieldConfigResult.cpp
  src/v20210820/model/TaskGroupActionConfig.cpp
  src/v20210820/model/ActionLibraryListResult.cpp
  src/v20210820/model/CreateTaskFromMultiActionResponse.cpp
  src/v20210820/model/DescribeTaskResponse.cpp
  src/v20210820/model/CreateTaskFromActionResponse.cpp
  src/v20210820/model/TemplateListItem.cpp
  src/v20210820/model/TagWithCreate.cpp
  src/v20210820/model/ObjectTypeConfigFields.cpp
  src/v20210820/model/ObjectTypeConfig.cpp
  )

set(cfg_include
    include/tencentcloud/cfg
  )

add_library(cfg ${LIB_TYPE}
  ${cfg_public_header}
  ${cfg_public_header_model}
  ${cfg_src})

set_target_properties(cfg
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cfg
  )

target_include_directories(cfg
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cfg
  core)

#install(FILES ${cfg_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfg/v20210820)
#install(FILES ${cfg_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfg/v20210820/model)
install(DIRECTORY ${cfg_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cfg
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
