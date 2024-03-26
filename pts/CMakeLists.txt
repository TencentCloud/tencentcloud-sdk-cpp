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

set(pts_public_header
  include/tencentcloud/pts/v20210728/PtsClient.h
  )

set(pts_public_header_model
  include/tencentcloud/pts/v20210728/model/DescribeCronJobsRequest.h
  include/tencentcloud/pts/v20210728/model/UpdateJobRequest.h
  include/tencentcloud/pts/v20210728/model/UpdateCronJobResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleMatrixQueryResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleLogsRequest.h
  include/tencentcloud/pts/v20210728/model/DeleteJobsRequest.h
  include/tencentcloud/pts/v20210728/model/AlertChannelRecord.h
  include/tencentcloud/pts/v20210728/model/DescribeAlertRecordsRequest.h
  include/tencentcloud/pts/v20210728/model/DeleteAlertChannelResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeLabelValuesRequest.h
  include/tencentcloud/pts/v20210728/model/AbortCronJobsResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeRequestSummaryResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeScenarioWithJobsRequest.h
  include/tencentcloud/pts/v20210728/model/CreateCronJobResponse.h
  include/tencentcloud/pts/v20210728/model/RestartCronJobsResponse.h
  include/tencentcloud/pts/v20210728/model/SLAPolicy.h
  include/tencentcloud/pts/v20210728/model/DNSConfig.h
  include/tencentcloud/pts/v20210728/model/ScriptInfo.h
  include/tencentcloud/pts/v20210728/model/NormalLog.h
  include/tencentcloud/pts/v20210728/model/UpdateProjectRequest.h
  include/tencentcloud/pts/v20210728/model/AbortJobResponse.h
  include/tencentcloud/pts/v20210728/model/Project.h
  include/tencentcloud/pts/v20210728/model/UpdateEnvironmentRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeRegionsResponse.h
  include/tencentcloud/pts/v20210728/model/Attributes.h
  include/tencentcloud/pts/v20210728/model/CreateEnvironmentResponse.h
  include/tencentcloud/pts/v20210728/model/UpdateScenarioResponse.h
  include/tencentcloud/pts/v20210728/model/File.h
  include/tencentcloud/pts/v20210728/model/DescribeEnvironmentsRequest.h
  include/tencentcloud/pts/v20210728/model/CustomSample.h
  include/tencentcloud/pts/v20210728/model/CreateProjectRequest.h
  include/tencentcloud/pts/v20210728/model/AdjustJobSpeedRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeRequestSummaryRequest.h
  include/tencentcloud/pts/v20210728/model/HostAlias.h
  include/tencentcloud/pts/v20210728/model/CreateFileResponse.h
  include/tencentcloud/pts/v20210728/model/DeleteProjectsResponse.h
  include/tencentcloud/pts/v20210728/model/GeoRegionsLoadItem.h
  include/tencentcloud/pts/v20210728/model/UpdateEnvironmentResponse.h
  include/tencentcloud/pts/v20210728/model/LabelWithValues.h
  include/tencentcloud/pts/v20210728/model/Label.h
  include/tencentcloud/pts/v20210728/model/ProtocolInfo.h
  include/tencentcloud/pts/v20210728/model/VpcLoadDistribution.h
  include/tencentcloud/pts/v20210728/model/SamplePair.h
  include/tencentcloud/pts/v20210728/model/CronJob.h
  include/tencentcloud/pts/v20210728/model/DescribeLabelValuesResponse.h
  include/tencentcloud/pts/v20210728/model/InternalMetricQuery.h
  include/tencentcloud/pts/v20210728/model/Job.h
  include/tencentcloud/pts/v20210728/model/DescribeAvailableMetricsRequest.h
  include/tencentcloud/pts/v20210728/model/CopyScenarioResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleMatrixQueryRequest.h
  include/tencentcloud/pts/v20210728/model/GenerateTmpKeyResponse.h
  include/tencentcloud/pts/v20210728/model/Stage.h
  include/tencentcloud/pts/v20210728/model/DescribeFilesResponse.h
  include/tencentcloud/pts/v20210728/model/DeleteProjectsRequest.h
  include/tencentcloud/pts/v20210728/model/UpdateFileScenarioRelationRequest.h
  include/tencentcloud/pts/v20210728/model/ScenarioWithJobs.h
  include/tencentcloud/pts/v20210728/model/DeleteJobsResponse.h
  include/tencentcloud/pts/v20210728/model/TagSpec.h
  include/tencentcloud/pts/v20210728/model/AdjustJobSpeedResponse.h
  include/tencentcloud/pts/v20210728/model/ErrorSummary.h
  include/tencentcloud/pts/v20210728/model/CreateProjectResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleQueryRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleMatrixBatchQueryResponse.h
  include/tencentcloud/pts/v20210728/model/DeleteEnvironmentsResponse.h
  include/tencentcloud/pts/v20210728/model/SLALabel.h
  include/tencentcloud/pts/v20210728/model/AlertRecord.h
  include/tencentcloud/pts/v20210728/model/RequestsPerSecond.h
  include/tencentcloud/pts/v20210728/model/DescribeRegionsRequest.h
  include/tencentcloud/pts/v20210728/model/DeleteScenariosResponse.h
  include/tencentcloud/pts/v20210728/model/CreateEnvironmentRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeErrorSummaryRequest.h
  include/tencentcloud/pts/v20210728/model/CopyScenarioRequest.h
  include/tencentcloud/pts/v20210728/model/TestData.h
  include/tencentcloud/pts/v20210728/model/SampleLog.h
  include/tencentcloud/pts/v20210728/model/DomainNameConfig.h
  include/tencentcloud/pts/v20210728/model/DescribeNormalLogsResponse.h
  include/tencentcloud/pts/v20210728/model/Notification.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleBatchQueryRequest.h
  include/tencentcloud/pts/v20210728/model/RestartCronJobsRequest.h
  include/tencentcloud/pts/v20210728/model/DeleteScenariosRequest.h
  include/tencentcloud/pts/v20210728/model/CreateAlertChannelResponse.h
  include/tencentcloud/pts/v20210728/model/MetricInfo.h
  include/tencentcloud/pts/v20210728/model/CreateAlertChannelRequest.h
  include/tencentcloud/pts/v20210728/model/AlertRecordStatus.h
  include/tencentcloud/pts/v20210728/model/DescribeAlertChannelsRequest.h
  include/tencentcloud/pts/v20210728/model/SLARule.h
  include/tencentcloud/pts/v20210728/model/DescribeAvailableMetricsResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeMetricLabelWithValuesResponse.h
  include/tencentcloud/pts/v20210728/model/FileInfo.h
  include/tencentcloud/pts/v20210728/model/LoadSpec.h
  include/tencentcloud/pts/v20210728/model/AlertChannel.h
  include/tencentcloud/pts/v20210728/model/DescribeEnvironmentsResponse.h
  include/tencentcloud/pts/v20210728/model/ScriptOrigin.h
  include/tencentcloud/pts/v20210728/model/ScenarioRelatedJobsParams.h
  include/tencentcloud/pts/v20210728/model/Credentials.h
  include/tencentcloud/pts/v20210728/model/DescribeAlertChannelsResponse.h
  include/tencentcloud/pts/v20210728/model/CreateCronJobRequest.h
  include/tencentcloud/pts/v20210728/model/UpdateJobResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeCheckSummaryRequest.h
  include/tencentcloud/pts/v20210728/model/Filter.h
  include/tencentcloud/pts/v20210728/model/DeleteFilesResponse.h
  include/tencentcloud/pts/v20210728/model/AggregationLegend.h
  include/tencentcloud/pts/v20210728/model/LoadSource.h
  include/tencentcloud/pts/v20210728/model/CustomSampleMatrix.h
  include/tencentcloud/pts/v20210728/model/Load.h
  include/tencentcloud/pts/v20210728/model/CreateFileRequest.h
  include/tencentcloud/pts/v20210728/model/RequestSummary.h
  include/tencentcloud/pts/v20210728/model/DeleteCronJobsRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleLogsResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeCronJobsResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeNormalLogsRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeJobsRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeFilesRequest.h
  include/tencentcloud/pts/v20210728/model/AbortCronJobsRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleMatrixBatchQueryRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeAlertRecordsResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeProjectsRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleQueryResponse.h
  include/tencentcloud/pts/v20210728/model/DeleteEnvironmentsRequest.h
  include/tencentcloud/pts/v20210728/model/CreateScenarioRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeMetricLabelWithValuesRequest.h
  include/tencentcloud/pts/v20210728/model/Scenario.h
  include/tencentcloud/pts/v20210728/model/DescribeProjectsResponse.h
  include/tencentcloud/pts/v20210728/model/UpdateCronJobRequest.h
  include/tencentcloud/pts/v20210728/model/RegionDetail.h
  include/tencentcloud/pts/v20210728/model/SampleStream.h
  include/tencentcloud/pts/v20210728/model/DescribeCheckSummaryResponse.h
  include/tencentcloud/pts/v20210728/model/DescribeScenariosRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeScenariosResponse.h
  include/tencentcloud/pts/v20210728/model/CreateScenarioResponse.h
  include/tencentcloud/pts/v20210728/model/AbortJobRequest.h
  include/tencentcloud/pts/v20210728/model/DeleteFilesRequest.h
  include/tencentcloud/pts/v20210728/model/CheckSummary.h
  include/tencentcloud/pts/v20210728/model/NotificationHook.h
  include/tencentcloud/pts/v20210728/model/DescribeJobsResponse.h
  include/tencentcloud/pts/v20210728/model/GenerateTmpKeyRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeSampleBatchQueryResponse.h
  include/tencentcloud/pts/v20210728/model/StartJobResponse.h
  include/tencentcloud/pts/v20210728/model/UpdateScenarioRequest.h
  include/tencentcloud/pts/v20210728/model/MetricLabelWithValues.h
  include/tencentcloud/pts/v20210728/model/DeleteCronJobsResponse.h
  include/tencentcloud/pts/v20210728/model/StartJobRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeScenarioWithJobsResponse.h
  include/tencentcloud/pts/v20210728/model/ReactionTimeRange.h
  include/tencentcloud/pts/v20210728/model/Concurrency.h
  include/tencentcloud/pts/v20210728/model/DeleteAlertChannelRequest.h
  include/tencentcloud/pts/v20210728/model/DescribeErrorSummaryResponse.h
  include/tencentcloud/pts/v20210728/model/UpdateProjectResponse.h
  include/tencentcloud/pts/v20210728/model/UpdateFileScenarioRelationResponse.h
  )

set(pts_src
  src/v20210728/PtsClient.cpp
  src/v20210728/model/DescribeCronJobsRequest.cpp
  src/v20210728/model/UpdateJobRequest.cpp
  src/v20210728/model/UpdateCronJobResponse.cpp
  src/v20210728/model/DescribeSampleMatrixQueryResponse.cpp
  src/v20210728/model/DescribeSampleLogsRequest.cpp
  src/v20210728/model/DeleteJobsRequest.cpp
  src/v20210728/model/AlertChannelRecord.cpp
  src/v20210728/model/DescribeAlertRecordsRequest.cpp
  src/v20210728/model/DeleteAlertChannelResponse.cpp
  src/v20210728/model/DescribeLabelValuesRequest.cpp
  src/v20210728/model/AbortCronJobsResponse.cpp
  src/v20210728/model/DescribeRequestSummaryResponse.cpp
  src/v20210728/model/DescribeScenarioWithJobsRequest.cpp
  src/v20210728/model/CreateCronJobResponse.cpp
  src/v20210728/model/RestartCronJobsResponse.cpp
  src/v20210728/model/SLAPolicy.cpp
  src/v20210728/model/DNSConfig.cpp
  src/v20210728/model/ScriptInfo.cpp
  src/v20210728/model/NormalLog.cpp
  src/v20210728/model/UpdateProjectRequest.cpp
  src/v20210728/model/AbortJobResponse.cpp
  src/v20210728/model/Project.cpp
  src/v20210728/model/UpdateEnvironmentRequest.cpp
  src/v20210728/model/DescribeRegionsResponse.cpp
  src/v20210728/model/Attributes.cpp
  src/v20210728/model/CreateEnvironmentResponse.cpp
  src/v20210728/model/UpdateScenarioResponse.cpp
  src/v20210728/model/File.cpp
  src/v20210728/model/DescribeEnvironmentsRequest.cpp
  src/v20210728/model/CustomSample.cpp
  src/v20210728/model/CreateProjectRequest.cpp
  src/v20210728/model/AdjustJobSpeedRequest.cpp
  src/v20210728/model/DescribeRequestSummaryRequest.cpp
  src/v20210728/model/HostAlias.cpp
  src/v20210728/model/CreateFileResponse.cpp
  src/v20210728/model/DeleteProjectsResponse.cpp
  src/v20210728/model/GeoRegionsLoadItem.cpp
  src/v20210728/model/UpdateEnvironmentResponse.cpp
  src/v20210728/model/LabelWithValues.cpp
  src/v20210728/model/Label.cpp
  src/v20210728/model/ProtocolInfo.cpp
  src/v20210728/model/VpcLoadDistribution.cpp
  src/v20210728/model/SamplePair.cpp
  src/v20210728/model/CronJob.cpp
  src/v20210728/model/DescribeLabelValuesResponse.cpp
  src/v20210728/model/InternalMetricQuery.cpp
  src/v20210728/model/Job.cpp
  src/v20210728/model/DescribeAvailableMetricsRequest.cpp
  src/v20210728/model/CopyScenarioResponse.cpp
  src/v20210728/model/DescribeSampleMatrixQueryRequest.cpp
  src/v20210728/model/GenerateTmpKeyResponse.cpp
  src/v20210728/model/Stage.cpp
  src/v20210728/model/DescribeFilesResponse.cpp
  src/v20210728/model/DeleteProjectsRequest.cpp
  src/v20210728/model/UpdateFileScenarioRelationRequest.cpp
  src/v20210728/model/ScenarioWithJobs.cpp
  src/v20210728/model/DeleteJobsResponse.cpp
  src/v20210728/model/TagSpec.cpp
  src/v20210728/model/AdjustJobSpeedResponse.cpp
  src/v20210728/model/ErrorSummary.cpp
  src/v20210728/model/CreateProjectResponse.cpp
  src/v20210728/model/DescribeSampleQueryRequest.cpp
  src/v20210728/model/DescribeSampleMatrixBatchQueryResponse.cpp
  src/v20210728/model/DeleteEnvironmentsResponse.cpp
  src/v20210728/model/SLALabel.cpp
  src/v20210728/model/AlertRecord.cpp
  src/v20210728/model/RequestsPerSecond.cpp
  src/v20210728/model/DescribeRegionsRequest.cpp
  src/v20210728/model/DeleteScenariosResponse.cpp
  src/v20210728/model/CreateEnvironmentRequest.cpp
  src/v20210728/model/DescribeErrorSummaryRequest.cpp
  src/v20210728/model/CopyScenarioRequest.cpp
  src/v20210728/model/TestData.cpp
  src/v20210728/model/SampleLog.cpp
  src/v20210728/model/DomainNameConfig.cpp
  src/v20210728/model/DescribeNormalLogsResponse.cpp
  src/v20210728/model/Notification.cpp
  src/v20210728/model/DescribeSampleBatchQueryRequest.cpp
  src/v20210728/model/RestartCronJobsRequest.cpp
  src/v20210728/model/DeleteScenariosRequest.cpp
  src/v20210728/model/CreateAlertChannelResponse.cpp
  src/v20210728/model/MetricInfo.cpp
  src/v20210728/model/CreateAlertChannelRequest.cpp
  src/v20210728/model/AlertRecordStatus.cpp
  src/v20210728/model/DescribeAlertChannelsRequest.cpp
  src/v20210728/model/SLARule.cpp
  src/v20210728/model/DescribeAvailableMetricsResponse.cpp
  src/v20210728/model/DescribeMetricLabelWithValuesResponse.cpp
  src/v20210728/model/FileInfo.cpp
  src/v20210728/model/LoadSpec.cpp
  src/v20210728/model/AlertChannel.cpp
  src/v20210728/model/DescribeEnvironmentsResponse.cpp
  src/v20210728/model/ScriptOrigin.cpp
  src/v20210728/model/ScenarioRelatedJobsParams.cpp
  src/v20210728/model/Credentials.cpp
  src/v20210728/model/DescribeAlertChannelsResponse.cpp
  src/v20210728/model/CreateCronJobRequest.cpp
  src/v20210728/model/UpdateJobResponse.cpp
  src/v20210728/model/DescribeCheckSummaryRequest.cpp
  src/v20210728/model/Filter.cpp
  src/v20210728/model/DeleteFilesResponse.cpp
  src/v20210728/model/AggregationLegend.cpp
  src/v20210728/model/LoadSource.cpp
  src/v20210728/model/CustomSampleMatrix.cpp
  src/v20210728/model/Load.cpp
  src/v20210728/model/CreateFileRequest.cpp
  src/v20210728/model/RequestSummary.cpp
  src/v20210728/model/DeleteCronJobsRequest.cpp
  src/v20210728/model/DescribeSampleLogsResponse.cpp
  src/v20210728/model/DescribeCronJobsResponse.cpp
  src/v20210728/model/DescribeNormalLogsRequest.cpp
  src/v20210728/model/DescribeJobsRequest.cpp
  src/v20210728/model/DescribeFilesRequest.cpp
  src/v20210728/model/AbortCronJobsRequest.cpp
  src/v20210728/model/DescribeSampleMatrixBatchQueryRequest.cpp
  src/v20210728/model/DescribeAlertRecordsResponse.cpp
  src/v20210728/model/DescribeProjectsRequest.cpp
  src/v20210728/model/DescribeSampleQueryResponse.cpp
  src/v20210728/model/DeleteEnvironmentsRequest.cpp
  src/v20210728/model/CreateScenarioRequest.cpp
  src/v20210728/model/DescribeMetricLabelWithValuesRequest.cpp
  src/v20210728/model/Scenario.cpp
  src/v20210728/model/DescribeProjectsResponse.cpp
  src/v20210728/model/UpdateCronJobRequest.cpp
  src/v20210728/model/RegionDetail.cpp
  src/v20210728/model/SampleStream.cpp
  src/v20210728/model/DescribeCheckSummaryResponse.cpp
  src/v20210728/model/DescribeScenariosRequest.cpp
  src/v20210728/model/DescribeScenariosResponse.cpp
  src/v20210728/model/CreateScenarioResponse.cpp
  src/v20210728/model/AbortJobRequest.cpp
  src/v20210728/model/DeleteFilesRequest.cpp
  src/v20210728/model/CheckSummary.cpp
  src/v20210728/model/NotificationHook.cpp
  src/v20210728/model/DescribeJobsResponse.cpp
  src/v20210728/model/GenerateTmpKeyRequest.cpp
  src/v20210728/model/DescribeSampleBatchQueryResponse.cpp
  src/v20210728/model/StartJobResponse.cpp
  src/v20210728/model/UpdateScenarioRequest.cpp
  src/v20210728/model/MetricLabelWithValues.cpp
  src/v20210728/model/DeleteCronJobsResponse.cpp
  src/v20210728/model/StartJobRequest.cpp
  src/v20210728/model/DescribeScenarioWithJobsResponse.cpp
  src/v20210728/model/ReactionTimeRange.cpp
  src/v20210728/model/Concurrency.cpp
  src/v20210728/model/DeleteAlertChannelRequest.cpp
  src/v20210728/model/DescribeErrorSummaryResponse.cpp
  src/v20210728/model/UpdateProjectResponse.cpp
  src/v20210728/model/UpdateFileScenarioRelationResponse.cpp
  )

set(pts_include
    include/tencentcloud/pts
  )

add_library(pts ${LIB_TYPE}
  ${pts_public_header}
  ${pts_public_header_model}
  ${pts_src})

set_target_properties(pts
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}pts
  )

target_include_directories(pts
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(pts
  core)

#install(FILES ${pts_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/pts/v20210728)
#install(FILES ${pts_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/pts/v20210728/model)
install(DIRECTORY ${pts_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS pts
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
