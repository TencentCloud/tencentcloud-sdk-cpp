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

set(wedata_public_header
  include/tencentcloud/wedata/v20210820/WedataClient.h
  )

set(wedata_public_header_model
  include/tencentcloud/wedata/v20210820/model/SubmitTaskResponse.h
  include/tencentcloud/wedata/v20210820/model/ModifyFolderRequest.h
  include/tencentcloud/wedata/v20210820/model/AlarmInfo.h
  include/tencentcloud/wedata/v20210820/model/DeleteFolderResponse.h
  include/tencentcloud/wedata/v20210820/model/RunTaskRequest.h
  include/tencentcloud/wedata/v20210820/model/MakeUpTasksNewResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskDetailResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeDependTasksNewRequest.h
  include/tencentcloud/wedata/v20210820/model/OperateResult.h
  include/tencentcloud/wedata/v20210820/model/DescribeInstanceLogsRequest.h
  include/tencentcloud/wedata/v20210820/model/BatchReturn.h
  include/tencentcloud/wedata/v20210820/model/ModifyTaskScriptRequest.h
  include/tencentcloud/wedata/v20210820/model/CreateDataSourceRequest.h
  include/tencentcloud/wedata/v20210820/model/IntegrationNodeSchemaMapping.h
  include/tencentcloud/wedata/v20210820/model/DeleteWorkflowNewResponse.h
  include/tencentcloud/wedata/v20210820/model/TaskInfoData.h
  include/tencentcloud/wedata/v20210820/model/DescribeInstanceLogsResponse.h
  include/tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewResponse.h
  include/tencentcloud/wedata/v20210820/model/TaskInnerInfo.h
  include/tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewResponse.h
  include/tencentcloud/wedata/v20210820/model/ModifyTaskLinksResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeDatasourceResponse.h
  include/tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h
  include/tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h
  include/tencentcloud/wedata/v20210820/model/KillInstancesResponse.h
  include/tencentcloud/wedata/v20210820/model/SetTaskAlarmNewRequest.h
  include/tencentcloud/wedata/v20210820/model/FunctionTypeOrKind.h
  include/tencentcloud/wedata/v20210820/model/CommonContent.h
  include/tencentcloud/wedata/v20210820/model/ModifyTaskScriptResponse.h
  include/tencentcloud/wedata/v20210820/model/SubmitWorkflowResponse.h
  include/tencentcloud/wedata/v20210820/model/SubmitTaskRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h
  include/tencentcloud/wedata/v20210820/model/InstanceLog.h
  include/tencentcloud/wedata/v20210820/model/DataSourceInfoPage.h
  include/tencentcloud/wedata/v20210820/model/DescribeFunctionTypesRequest.h
  include/tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewRequest.h
  include/tencentcloud/wedata/v20210820/model/SubmitWorkflow.h
  include/tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListResponse.h
  include/tencentcloud/wedata/v20210820/model/ModifyFolderResponse.h
  include/tencentcloud/wedata/v20210820/model/CreateFolderRequest.h
  include/tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h
  include/tencentcloud/wedata/v20210820/model/TaskInfoDataPage.h
  include/tencentcloud/wedata/v20210820/model/DeleteFolderRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskScriptRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskInstancesData.h
  include/tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListData.h
  include/tencentcloud/wedata/v20210820/model/DescribeFunctionKindsRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeFunctionKindsResponse.h
  include/tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowResponse.h
  include/tencentcloud/wedata/v20210820/model/SaveCustomFunctionResponse.h
  include/tencentcloud/wedata/v20210820/model/DependencyConfig.h
  include/tencentcloud/wedata/v20210820/model/DescribeDataSourceListRequest.h
  include/tencentcloud/wedata/v20210820/model/CreateWorkflowRequest.h
  include/tencentcloud/wedata/v20210820/model/SimpleTaskInfo.h
  include/tencentcloud/wedata/v20210820/model/CreateTaskRequest.h
  include/tencentcloud/wedata/v20210820/model/BatchOperateResult.h
  include/tencentcloud/wedata/v20210820/model/KillInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/ModifyTaskInfoResponse.h
  include/tencentcloud/wedata/v20210820/model/GeneralTaskParam.h
  include/tencentcloud/wedata/v20210820/model/RegisterEventListenerResponse.h
  include/tencentcloud/wedata/v20210820/model/CreateFolderResponse.h
  include/tencentcloud/wedata/v20210820/model/Workflow.h
  include/tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListRequest.h
  include/tencentcloud/wedata/v20210820/model/ModifyDataSourceResponse.h
  include/tencentcloud/wedata/v20210820/model/BatchStopTasksNewRequest.h
  include/tencentcloud/wedata/v20210820/model/TriggerEventRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeFunctionTypesResponse.h
  include/tencentcloud/wedata/v20210820/model/SubmitWorkflowRequest.h
  include/tencentcloud/wedata/v20210820/model/RerunInstancesResponse.h
  include/tencentcloud/wedata/v20210820/model/ParamInfo.h
  include/tencentcloud/wedata/v20210820/model/TaskLinkInfo.h
  include/tencentcloud/wedata/v20210820/model/IntegrationNodeDetail.h
  include/tencentcloud/wedata/v20210820/model/SaveCustomFunctionRequest.h
  include/tencentcloud/wedata/v20210820/model/ForceSucInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleRequest.h
  include/tencentcloud/wedata/v20210820/model/RegisterEventRequest.h
  include/tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeDataSourceWithoutInfoRequest.h
  include/tencentcloud/wedata/v20210820/model/CanvasInfo.h
  include/tencentcloud/wedata/v20210820/model/DescribeDatasourceRequest.h
  include/tencentcloud/wedata/v20210820/model/DeleteWorkflowNewRequest.h
  include/tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowRequest.h
  include/tencentcloud/wedata/v20210820/model/InstanceInfo.h
  include/tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewRequest.h
  include/tencentcloud/wedata/v20210820/model/CommonId.h
  include/tencentcloud/wedata/v20210820/model/BatchStopTasksNewResponse.h
  include/tencentcloud/wedata/v20210820/model/TriggerEventResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/TaskInstanceInfo.h
  include/tencentcloud/wedata/v20210820/model/Filter.h
  include/tencentcloud/wedata/v20210820/model/DescribeTasksByPageResponse.h
  include/tencentcloud/wedata/v20210820/model/FunctionResource.h
  include/tencentcloud/wedata/v20210820/model/CreateDataSourceResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeDataSourceListResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeDataSourceWithoutInfoResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeFolderListResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h
  include/tencentcloud/wedata/v20210820/model/TaskCanvasInfo.h
  include/tencentcloud/wedata/v20210820/model/DescribeFolderListData.h
  include/tencentcloud/wedata/v20210820/model/TaskExtInfo.h
  include/tencentcloud/wedata/v20210820/model/FreezeTasksRequest.h
  include/tencentcloud/wedata/v20210820/model/DeleteCustomFunctionResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeFolderListRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskScriptResponse.h
  include/tencentcloud/wedata/v20210820/model/RunTaskResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeDependTasksNewResponse.h
  include/tencentcloud/wedata/v20210820/model/SubmitCustomFunctionResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskInstancesResponse.h
  include/tencentcloud/wedata/v20210820/model/FunctionVersion.h
  include/tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewRequest.h
  include/tencentcloud/wedata/v20210820/model/Folder.h
  include/tencentcloud/wedata/v20210820/model/FreezeTasksResponse.h
  include/tencentcloud/wedata/v20210820/model/CreateTaskResponse.h
  include/tencentcloud/wedata/v20210820/model/BatchResult.h
  include/tencentcloud/wedata/v20210820/model/ModifyDataSourceRequest.h
  include/tencentcloud/wedata/v20210820/model/CreateCustomFunctionResponse.h
  include/tencentcloud/wedata/v20210820/model/ModifyTaskInfoRequest.h
  include/tencentcloud/wedata/v20210820/model/DataSourceInfo.h
  include/tencentcloud/wedata/v20210820/model/DescribeTaskDetailRequest.h
  include/tencentcloud/wedata/v20210820/model/SetTaskAlarmNewResponse.h
  include/tencentcloud/wedata/v20210820/model/CreateWorkflowResponse.h
  include/tencentcloud/wedata/v20210820/model/CreateCustomFunctionRequest.h
  include/tencentcloud/wedata/v20210820/model/DeleteDataSourcesResponse.h
  include/tencentcloud/wedata/v20210820/model/RegisterEventListenerRequest.h
  include/tencentcloud/wedata/v20210820/model/ModifyTaskLinksRequest.h
  include/tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleResponse.h
  include/tencentcloud/wedata/v20210820/model/RecordField.h
  include/tencentcloud/wedata/v20210820/model/DeleteDataSourcesRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsRequest.h
  include/tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoResponse.h
  include/tencentcloud/wedata/v20210820/model/OrganizationalFunction.h
  include/tencentcloud/wedata/v20210820/model/OrderField.h
  include/tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesResponse.h
  include/tencentcloud/wedata/v20210820/model/RerunInstancesRequest.h
  include/tencentcloud/wedata/v20210820/model/MakeUpTasksNewRequest.h
  include/tencentcloud/wedata/v20210820/model/TaskScriptContent.h
  include/tencentcloud/wedata/v20210820/model/RegisterEventResponse.h
  include/tencentcloud/wedata/v20210820/model/ForceSucInstancesResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsResponse.h
  include/tencentcloud/wedata/v20210820/model/DescribeTasksByPageRequest.h
  include/tencentcloud/wedata/v20210820/model/SubmitCustomFunctionRequest.h
  )

set(wedata_src
  src/v20210820/WedataClient.cpp
  src/v20210820/model/SubmitTaskResponse.cpp
  src/v20210820/model/ModifyFolderRequest.cpp
  src/v20210820/model/AlarmInfo.cpp
  src/v20210820/model/DeleteFolderResponse.cpp
  src/v20210820/model/RunTaskRequest.cpp
  src/v20210820/model/MakeUpTasksNewResponse.cpp
  src/v20210820/model/DescribeTaskDetailResponse.cpp
  src/v20210820/model/DescribeDependTasksNewRequest.cpp
  src/v20210820/model/OperateResult.cpp
  src/v20210820/model/DescribeInstanceLogsRequest.cpp
  src/v20210820/model/BatchReturn.cpp
  src/v20210820/model/ModifyTaskScriptRequest.cpp
  src/v20210820/model/CreateDataSourceRequest.cpp
  src/v20210820/model/IntegrationNodeSchemaMapping.cpp
  src/v20210820/model/DeleteWorkflowNewResponse.cpp
  src/v20210820/model/TaskInfoData.cpp
  src/v20210820/model/DescribeInstanceLogsResponse.cpp
  src/v20210820/model/MakeUpWorkflowNewResponse.cpp
  src/v20210820/model/TaskInnerInfo.cpp
  src/v20210820/model/BatchDeleteTasksNewResponse.cpp
  src/v20210820/model/ModifyTaskLinksResponse.cpp
  src/v20210820/model/DescribeDatasourceResponse.cpp
  src/v20210820/model/IntegrationNodeMapping.cpp
  src/v20210820/model/IntegrationNodeSchema.cpp
  src/v20210820/model/KillInstancesResponse.cpp
  src/v20210820/model/SetTaskAlarmNewRequest.cpp
  src/v20210820/model/FunctionTypeOrKind.cpp
  src/v20210820/model/CommonContent.cpp
  src/v20210820/model/ModifyTaskScriptResponse.cpp
  src/v20210820/model/SubmitWorkflowResponse.cpp
  src/v20210820/model/SubmitTaskRequest.cpp
  src/v20210820/model/DescribeProjectResponse.cpp
  src/v20210820/model/InstanceLog.cpp
  src/v20210820/model/DataSourceInfoPage.cpp
  src/v20210820/model/DescribeFunctionTypesRequest.cpp
  src/v20210820/model/BatchDeleteTasksNewRequest.cpp
  src/v20210820/model/SubmitWorkflow.cpp
  src/v20210820/model/DescribeFolderWorkflowListResponse.cpp
  src/v20210820/model/ModifyFolderResponse.cpp
  src/v20210820/model/CreateFolderRequest.cpp
  src/v20210820/model/DeleteCustomFunctionRequest.cpp
  src/v20210820/model/TaskInfoDataPage.cpp
  src/v20210820/model/DeleteFolderRequest.cpp
  src/v20210820/model/DescribeTaskScriptRequest.cpp
  src/v20210820/model/DescribeTaskInstancesData.cpp
  src/v20210820/model/DescribeFolderWorkflowListData.cpp
  src/v20210820/model/DescribeFunctionKindsRequest.cpp
  src/v20210820/model/DescribeFunctionKindsResponse.cpp
  src/v20210820/model/FreezeTasksByMultiWorkflowResponse.cpp
  src/v20210820/model/SaveCustomFunctionResponse.cpp
  src/v20210820/model/DependencyConfig.cpp
  src/v20210820/model/DescribeDataSourceListRequest.cpp
  src/v20210820/model/CreateWorkflowRequest.cpp
  src/v20210820/model/SimpleTaskInfo.cpp
  src/v20210820/model/CreateTaskRequest.cpp
  src/v20210820/model/BatchOperateResult.cpp
  src/v20210820/model/KillInstancesRequest.cpp
  src/v20210820/model/ModifyTaskInfoResponse.cpp
  src/v20210820/model/GeneralTaskParam.cpp
  src/v20210820/model/RegisterEventListenerResponse.cpp
  src/v20210820/model/CreateFolderResponse.cpp
  src/v20210820/model/Workflow.cpp
  src/v20210820/model/ModifyWorkflowInfoRequest.cpp
  src/v20210820/model/DescribeFolderWorkflowListRequest.cpp
  src/v20210820/model/ModifyDataSourceResponse.cpp
  src/v20210820/model/BatchStopTasksNewRequest.cpp
  src/v20210820/model/TriggerEventRequest.cpp
  src/v20210820/model/DescribeFunctionTypesResponse.cpp
  src/v20210820/model/SubmitWorkflowRequest.cpp
  src/v20210820/model/RerunInstancesResponse.cpp
  src/v20210820/model/ParamInfo.cpp
  src/v20210820/model/TaskLinkInfo.cpp
  src/v20210820/model/IntegrationNodeDetail.cpp
  src/v20210820/model/SaveCustomFunctionRequest.cpp
  src/v20210820/model/ForceSucInstancesRequest.cpp
  src/v20210820/model/ModifyWorkflowScheduleRequest.cpp
  src/v20210820/model/RegisterEventRequest.cpp
  src/v20210820/model/BatchModifyOwnersNewResponse.cpp
  src/v20210820/model/DescribeDataSourceWithoutInfoRequest.cpp
  src/v20210820/model/CanvasInfo.cpp
  src/v20210820/model/DescribeDatasourceRequest.cpp
  src/v20210820/model/DeleteWorkflowNewRequest.cpp
  src/v20210820/model/FreezeTasksByMultiWorkflowRequest.cpp
  src/v20210820/model/InstanceInfo.cpp
  src/v20210820/model/MakeUpWorkflowNewRequest.cpp
  src/v20210820/model/CommonId.cpp
  src/v20210820/model/BatchStopTasksNewResponse.cpp
  src/v20210820/model/TriggerEventResponse.cpp
  src/v20210820/model/DescribeTaskInstancesRequest.cpp
  src/v20210820/model/TaskInstanceInfo.cpp
  src/v20210820/model/Filter.cpp
  src/v20210820/model/DescribeTasksByPageResponse.cpp
  src/v20210820/model/FunctionResource.cpp
  src/v20210820/model/CreateDataSourceResponse.cpp
  src/v20210820/model/DescribeDataSourceListResponse.cpp
  src/v20210820/model/DescribeDataSourceWithoutInfoResponse.cpp
  src/v20210820/model/DescribeFolderListResponse.cpp
  src/v20210820/model/DescribeProjectRequest.cpp
  src/v20210820/model/TaskCanvasInfo.cpp
  src/v20210820/model/DescribeFolderListData.cpp
  src/v20210820/model/TaskExtInfo.cpp
  src/v20210820/model/FreezeTasksRequest.cpp
  src/v20210820/model/DeleteCustomFunctionResponse.cpp
  src/v20210820/model/DescribeFolderListRequest.cpp
  src/v20210820/model/DescribeTaskScriptResponse.cpp
  src/v20210820/model/RunTaskResponse.cpp
  src/v20210820/model/DescribeDependTasksNewResponse.cpp
  src/v20210820/model/SubmitCustomFunctionResponse.cpp
  src/v20210820/model/DescribeTaskInstancesResponse.cpp
  src/v20210820/model/FunctionVersion.cpp
  src/v20210820/model/BatchModifyOwnersNewRequest.cpp
  src/v20210820/model/Folder.cpp
  src/v20210820/model/FreezeTasksResponse.cpp
  src/v20210820/model/CreateTaskResponse.cpp
  src/v20210820/model/BatchResult.cpp
  src/v20210820/model/ModifyDataSourceRequest.cpp
  src/v20210820/model/CreateCustomFunctionResponse.cpp
  src/v20210820/model/ModifyTaskInfoRequest.cpp
  src/v20210820/model/DataSourceInfo.cpp
  src/v20210820/model/DescribeTaskDetailRequest.cpp
  src/v20210820/model/SetTaskAlarmNewResponse.cpp
  src/v20210820/model/CreateWorkflowResponse.cpp
  src/v20210820/model/CreateCustomFunctionRequest.cpp
  src/v20210820/model/DeleteDataSourcesResponse.cpp
  src/v20210820/model/RegisterEventListenerRequest.cpp
  src/v20210820/model/ModifyTaskLinksRequest.cpp
  src/v20210820/model/ModifyWorkflowScheduleResponse.cpp
  src/v20210820/model/RecordField.cpp
  src/v20210820/model/DeleteDataSourcesRequest.cpp
  src/v20210820/model/DescribeRelatedInstancesRequest.cpp
  src/v20210820/model/DescribeOrganizationalFunctionsRequest.cpp
  src/v20210820/model/ModifyWorkflowInfoResponse.cpp
  src/v20210820/model/OrganizationalFunction.cpp
  src/v20210820/model/OrderField.cpp
  src/v20210820/model/DescribeRelatedInstancesResponse.cpp
  src/v20210820/model/RerunInstancesRequest.cpp
  src/v20210820/model/MakeUpTasksNewRequest.cpp
  src/v20210820/model/TaskScriptContent.cpp
  src/v20210820/model/RegisterEventResponse.cpp
  src/v20210820/model/ForceSucInstancesResponse.cpp
  src/v20210820/model/DescribeOrganizationalFunctionsResponse.cpp
  src/v20210820/model/DescribeTasksByPageRequest.cpp
  src/v20210820/model/SubmitCustomFunctionRequest.cpp
  )

set(wedata_include
    include/tencentcloud/wedata
  )

add_library(wedata ${LIB_TYPE}
  ${wedata_public_header}
  ${wedata_public_header_model}
  ${wedata_src})

set_target_properties(wedata
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wedata
  )

target_include_directories(wedata
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wedata
  core)

#install(FILES ${wedata_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wedata/v20210820)
#install(FILES ${wedata_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wedata/v20210820/model)
install(DIRECTORY ${wedata_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wedata
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
