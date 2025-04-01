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

set(batch_public_header
  include/tencentcloud/batch/v20170312/BatchClient.h
  )

set(batch_public_header_model
  include/tencentcloud/batch/v20170312/model/EventVar.h
  include/tencentcloud/batch/v20170312/model/AnonymousComputeEnv.h
  include/tencentcloud/batch/v20170312/model/DeleteComputeEnvResponse.h
  include/tencentcloud/batch/v20170312/model/SubmitJobRequest.h
  include/tencentcloud/batch/v20170312/model/ComputeEnvData.h
  include/tencentcloud/batch/v20170312/model/Authentication.h
  include/tencentcloud/batch/v20170312/model/RetryJobsResponse.h
  include/tencentcloud/batch/v20170312/model/TerminateComputeNodeRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeTaskLogsRequest.h
  include/tencentcloud/batch/v20170312/model/AgentRunningMode.h
  include/tencentcloud/batch/v20170312/model/EnvData.h
  include/tencentcloud/batch/v20170312/model/DescribeTaskTemplatesRequest.h
  include/tencentcloud/batch/v20170312/model/Notification.h
  include/tencentcloud/batch/v20170312/model/SystemDisk.h
  include/tencentcloud/batch/v20170312/model/Task.h
  include/tencentcloud/batch/v20170312/model/InstanceTypeConfig.h
  include/tencentcloud/batch/v20170312/model/CommandLine.h
  include/tencentcloud/batch/v20170312/model/Externals.h
  include/tencentcloud/batch/v20170312/model/TerminateComputeNodesResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvActivitiesResponse.h
  include/tencentcloud/batch/v20170312/model/TaskInstanceMetrics.h
  include/tencentcloud/batch/v20170312/model/TaskInstanceLog.h
  include/tencentcloud/batch/v20170312/model/MountDataDisk.h
  include/tencentcloud/batch/v20170312/model/TaskView.h
  include/tencentcloud/batch/v20170312/model/Tag.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvResponse.h
  include/tencentcloud/batch/v20170312/model/TerminateJobRequest.h
  include/tencentcloud/batch/v20170312/model/DetachInstancesResponse.h
  include/tencentcloud/batch/v20170312/model/Application.h
  include/tencentcloud/batch/v20170312/model/OutputMappingConfig.h
  include/tencentcloud/batch/v20170312/model/AttachInstancesResponse.h
  include/tencentcloud/batch/v20170312/model/ComputeNodeMetrics.h
  include/tencentcloud/batch/v20170312/model/TaskMetrics.h
  include/tencentcloud/batch/v20170312/model/TerminateComputeNodesRequest.h
  include/tencentcloud/batch/v20170312/model/LocalDiskType.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvActivitiesRequest.h
  include/tencentcloud/batch/v20170312/model/CreateTaskTemplateRequest.h
  include/tencentcloud/batch/v20170312/model/Job.h
  include/tencentcloud/batch/v20170312/model/DeleteComputeEnvRequest.h
  include/tencentcloud/batch/v20170312/model/CreateComputeEnvRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoResponse.h
  include/tencentcloud/batch/v20170312/model/TerminateJobResponse.h
  include/tencentcloud/batch/v20170312/model/ComputeEnvCreateInfo.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfosRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvRequest.h
  include/tencentcloud/batch/v20170312/model/InstanceMarketOptionsRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeTaskTemplatesResponse.h
  include/tencentcloud/batch/v20170312/model/DeleteJobRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeTaskLogsResponse.h
  include/tencentcloud/batch/v20170312/model/DeleteTaskTemplatesRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeJobResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoRequest.h
  include/tencentcloud/batch/v20170312/model/ModifyTaskTemplateRequest.h
  include/tencentcloud/batch/v20170312/model/DataDisk.h
  include/tencentcloud/batch/v20170312/model/NamedComputeEnv.h
  include/tencentcloud/batch/v20170312/model/DeleteJobResponse.h
  include/tencentcloud/batch/v20170312/model/EventConfig.h
  include/tencentcloud/batch/v20170312/model/SpotMarketOptions.h
  include/tencentcloud/batch/v20170312/model/LoginSettings.h
  include/tencentcloud/batch/v20170312/model/DetachInstancesRequest.h
  include/tencentcloud/batch/v20170312/model/Instance.h
  include/tencentcloud/batch/v20170312/model/OutputMapping.h
  include/tencentcloud/batch/v20170312/model/EnhancedService.h
  include/tencentcloud/batch/v20170312/model/RunAutomationServiceEnabled.h
  include/tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfosResponse.h
  include/tencentcloud/batch/v20170312/model/RunSecurityServiceEnabled.h
  include/tencentcloud/batch/v20170312/model/DescribeJobRequest.h
  include/tencentcloud/batch/v20170312/model/RedirectInfo.h
  include/tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesResponse.h
  include/tencentcloud/batch/v20170312/model/ModifyTaskTemplateResponse.h
  include/tencentcloud/batch/v20170312/model/SubmitJobResponse.h
  include/tencentcloud/batch/v20170312/model/InputMapping.h
  include/tencentcloud/batch/v20170312/model/RedirectLocalInfo.h
  include/tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoRequest.h
  include/tencentcloud/batch/v20170312/model/Dependence.h
  include/tencentcloud/batch/v20170312/model/Filter.h
  include/tencentcloud/batch/v20170312/model/CreateComputeEnvResponse.h
  include/tencentcloud/batch/v20170312/model/Docker.h
  include/tencentcloud/batch/v20170312/model/ModifyComputeEnvResponse.h
  include/tencentcloud/batch/v20170312/model/Placement.h
  include/tencentcloud/batch/v20170312/model/ComputeNode.h
  include/tencentcloud/batch/v20170312/model/ItemPrice.h
  include/tencentcloud/batch/v20170312/model/InstanceTypeQuotaItem.h
  include/tencentcloud/batch/v20170312/model/CreateTaskTemplateResponse.h
  include/tencentcloud/batch/v20170312/model/StorageBlock.h
  include/tencentcloud/batch/v20170312/model/DescribeJobsRequest.h
  include/tencentcloud/batch/v20170312/model/TaskTemplateView.h
  include/tencentcloud/batch/v20170312/model/InstanceTypeOptions.h
  include/tencentcloud/batch/v20170312/model/DeleteTaskTemplatesResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.h
  include/tencentcloud/batch/v20170312/model/TerminateTaskInstanceRequest.h
  include/tencentcloud/batch/v20170312/model/TerminateTaskInstanceResponse.h
  include/tencentcloud/batch/v20170312/model/RetryJobsRequest.h
  include/tencentcloud/batch/v20170312/model/TaskInstanceView.h
  include/tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeTaskResponse.h
  include/tencentcloud/batch/v20170312/model/InstanceCategoryItem.h
  include/tencentcloud/batch/v20170312/model/ComputeEnvView.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvsResponse.h
  include/tencentcloud/batch/v20170312/model/DescribeTaskRequest.h
  include/tencentcloud/batch/v20170312/model/AttachInstancesRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeComputeEnvsRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.h
  include/tencentcloud/batch/v20170312/model/OutputMappingOption.h
  include/tencentcloud/batch/v20170312/model/DescribeJobsResponse.h
  include/tencentcloud/batch/v20170312/model/Activity.h
  include/tencentcloud/batch/v20170312/model/RunMonitorServiceEnabled.h
  include/tencentcloud/batch/v20170312/model/TerminateComputeNodeResponse.h
  include/tencentcloud/batch/v20170312/model/VirtualPrivateCloud.h
  include/tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.h
  include/tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesRequest.h
  include/tencentcloud/batch/v20170312/model/ModifyComputeEnvRequest.h
  include/tencentcloud/batch/v20170312/model/InternetAccessible.h
  include/tencentcloud/batch/v20170312/model/JobView.h
  include/tencentcloud/batch/v20170312/model/EnvVar.h
  )

set(batch_src
  src/v20170312/BatchClient.cpp
  src/v20170312/model/EventVar.cpp
  src/v20170312/model/AnonymousComputeEnv.cpp
  src/v20170312/model/DeleteComputeEnvResponse.cpp
  src/v20170312/model/SubmitJobRequest.cpp
  src/v20170312/model/ComputeEnvData.cpp
  src/v20170312/model/Authentication.cpp
  src/v20170312/model/RetryJobsResponse.cpp
  src/v20170312/model/TerminateComputeNodeRequest.cpp
  src/v20170312/model/DescribeTaskLogsRequest.cpp
  src/v20170312/model/AgentRunningMode.cpp
  src/v20170312/model/EnvData.cpp
  src/v20170312/model/DescribeTaskTemplatesRequest.cpp
  src/v20170312/model/Notification.cpp
  src/v20170312/model/SystemDisk.cpp
  src/v20170312/model/Task.cpp
  src/v20170312/model/InstanceTypeConfig.cpp
  src/v20170312/model/CommandLine.cpp
  src/v20170312/model/Externals.cpp
  src/v20170312/model/TerminateComputeNodesResponse.cpp
  src/v20170312/model/DescribeComputeEnvActivitiesResponse.cpp
  src/v20170312/model/TaskInstanceMetrics.cpp
  src/v20170312/model/TaskInstanceLog.cpp
  src/v20170312/model/MountDataDisk.cpp
  src/v20170312/model/TaskView.cpp
  src/v20170312/model/Tag.cpp
  src/v20170312/model/DescribeComputeEnvResponse.cpp
  src/v20170312/model/TerminateJobRequest.cpp
  src/v20170312/model/DetachInstancesResponse.cpp
  src/v20170312/model/Application.cpp
  src/v20170312/model/OutputMappingConfig.cpp
  src/v20170312/model/AttachInstancesResponse.cpp
  src/v20170312/model/ComputeNodeMetrics.cpp
  src/v20170312/model/TaskMetrics.cpp
  src/v20170312/model/TerminateComputeNodesRequest.cpp
  src/v20170312/model/LocalDiskType.cpp
  src/v20170312/model/DescribeComputeEnvActivitiesRequest.cpp
  src/v20170312/model/CreateTaskTemplateRequest.cpp
  src/v20170312/model/Job.cpp
  src/v20170312/model/DeleteComputeEnvRequest.cpp
  src/v20170312/model/CreateComputeEnvRequest.cpp
  src/v20170312/model/DescribeComputeEnvCreateInfoResponse.cpp
  src/v20170312/model/TerminateJobResponse.cpp
  src/v20170312/model/ComputeEnvCreateInfo.cpp
  src/v20170312/model/DescribeComputeEnvCreateInfosRequest.cpp
  src/v20170312/model/DescribeComputeEnvRequest.cpp
  src/v20170312/model/InstanceMarketOptionsRequest.cpp
  src/v20170312/model/DescribeTaskTemplatesResponse.cpp
  src/v20170312/model/DeleteJobRequest.cpp
  src/v20170312/model/DescribeTaskLogsResponse.cpp
  src/v20170312/model/DeleteTaskTemplatesRequest.cpp
  src/v20170312/model/DescribeJobResponse.cpp
  src/v20170312/model/DescribeComputeEnvCreateInfoRequest.cpp
  src/v20170312/model/ModifyTaskTemplateRequest.cpp
  src/v20170312/model/DataDisk.cpp
  src/v20170312/model/NamedComputeEnv.cpp
  src/v20170312/model/DeleteJobResponse.cpp
  src/v20170312/model/EventConfig.cpp
  src/v20170312/model/SpotMarketOptions.cpp
  src/v20170312/model/LoginSettings.cpp
  src/v20170312/model/DetachInstancesRequest.cpp
  src/v20170312/model/Instance.cpp
  src/v20170312/model/OutputMapping.cpp
  src/v20170312/model/EnhancedService.cpp
  src/v20170312/model/RunAutomationServiceEnabled.cpp
  src/v20170312/model/DescribeJobSubmitInfoResponse.cpp
  src/v20170312/model/DescribeComputeEnvCreateInfosResponse.cpp
  src/v20170312/model/RunSecurityServiceEnabled.cpp
  src/v20170312/model/DescribeJobRequest.cpp
  src/v20170312/model/RedirectInfo.cpp
  src/v20170312/model/DescribeInstanceCategoriesResponse.cpp
  src/v20170312/model/ModifyTaskTemplateResponse.cpp
  src/v20170312/model/SubmitJobResponse.cpp
  src/v20170312/model/InputMapping.cpp
  src/v20170312/model/RedirectLocalInfo.cpp
  src/v20170312/model/DescribeJobSubmitInfoRequest.cpp
  src/v20170312/model/Dependence.cpp
  src/v20170312/model/Filter.cpp
  src/v20170312/model/CreateComputeEnvResponse.cpp
  src/v20170312/model/Docker.cpp
  src/v20170312/model/ModifyComputeEnvResponse.cpp
  src/v20170312/model/Placement.cpp
  src/v20170312/model/ComputeNode.cpp
  src/v20170312/model/ItemPrice.cpp
  src/v20170312/model/InstanceTypeQuotaItem.cpp
  src/v20170312/model/CreateTaskTemplateResponse.cpp
  src/v20170312/model/StorageBlock.cpp
  src/v20170312/model/DescribeJobsRequest.cpp
  src/v20170312/model/TaskTemplateView.cpp
  src/v20170312/model/InstanceTypeOptions.cpp
  src/v20170312/model/DeleteTaskTemplatesResponse.cpp
  src/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.cpp
  src/v20170312/model/TerminateTaskInstanceRequest.cpp
  src/v20170312/model/TerminateTaskInstanceResponse.cpp
  src/v20170312/model/RetryJobsRequest.cpp
  src/v20170312/model/TaskInstanceView.cpp
  src/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.cpp
  src/v20170312/model/DescribeTaskResponse.cpp
  src/v20170312/model/InstanceCategoryItem.cpp
  src/v20170312/model/ComputeEnvView.cpp
  src/v20170312/model/DescribeComputeEnvsResponse.cpp
  src/v20170312/model/DescribeTaskRequest.cpp
  src/v20170312/model/AttachInstancesRequest.cpp
  src/v20170312/model/DescribeComputeEnvsRequest.cpp
  src/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.cpp
  src/v20170312/model/OutputMappingOption.cpp
  src/v20170312/model/DescribeJobsResponse.cpp
  src/v20170312/model/Activity.cpp
  src/v20170312/model/RunMonitorServiceEnabled.cpp
  src/v20170312/model/TerminateComputeNodeResponse.cpp
  src/v20170312/model/VirtualPrivateCloud.cpp
  src/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.cpp
  src/v20170312/model/DescribeInstanceCategoriesRequest.cpp
  src/v20170312/model/ModifyComputeEnvRequest.cpp
  src/v20170312/model/InternetAccessible.cpp
  src/v20170312/model/JobView.cpp
  src/v20170312/model/EnvVar.cpp
  )

set(batch_include
    include/tencentcloud/batch
  )

add_library(batch ${LIB_TYPE}
  ${batch_public_header}
  ${batch_public_header_model}
  ${batch_src})

set_target_properties(batch
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}batch
  )

target_include_directories(batch
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(batch
  core)

#install(FILES ${batch_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/batch/v20170312)
#install(FILES ${batch_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/batch/v20170312/model)
install(DIRECTORY ${batch_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS batch
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
