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

set(rum_public_header
  include/tencentcloud/rum/v20210622/RumClient.h
  )

set(rum_public_header_model
  include/tencentcloud/rum/v20210622/model/CreateTawInstanceRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchProjectRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataResponse.h
  include/tencentcloud/rum/v20210622/model/CreateTawInstanceResponse.h
  include/tencentcloud/rum/v20210622/model/DeleteProjectRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeProjectLimitsResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeTawInstancesRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteOfflineLogConfigResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPvUrlInfoResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeErrorRequest.h
  include/tencentcloud/rum/v20210622/model/StopInstanceRequest.h
  include/tencentcloud/rum/v20210622/model/ModifyInstanceRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeLogListRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeErrorResponse.h
  include/tencentcloud/rum/v20210622/model/DeleteWhitelistResponse.h
  include/tencentcloud/rum/v20210622/model/CreateLogExportRequest.h
  include/tencentcloud/rum/v20210622/model/DescribePvListResponse.h
  include/tencentcloud/rum/v20210622/model/RumUvInfo.h
  include/tencentcloud/rum/v20210622/model/DescribeOfflineLogsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeScoresRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataReportCountRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteOfflineLogRecordRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeReleaseFilesRequest.h
  include/tencentcloud/rum/v20210622/model/CreateReleaseFileRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteOfflineLogRecordResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataCustomUrlRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeUvListResponse.h
  include/tencentcloud/rum/v20210622/model/Tag.h
  include/tencentcloud/rum/v20210622/model/CreateProjectRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataStaticUrlRequest.h
  include/tencentcloud/rum/v20210622/model/ModifyInstanceResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeOfflineLogRecordsResponse.h
  include/tencentcloud/rum/v20210622/model/DeleteStarProjectRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeWhitelistsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeLogExportsResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeUvListRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeTawAreasResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataRequest.h
  include/tencentcloud/rum/v20210622/model/CreateOfflineLogConfigResponse.h
  include/tencentcloud/rum/v20210622/model/ModifyProjectLimitRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteInstanceResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPerformancePageRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteReleaseFileRequest.h
  include/tencentcloud/rum/v20210622/model/ResumeInstanceRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsResponse.h
  include/tencentcloud/rum/v20210622/model/CreateProjectResponse.h
  include/tencentcloud/rum/v20210622/model/StopInstanceResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeProjectLimitsRequest.h
  include/tencentcloud/rum/v20210622/model/CreateStarProjectResponse.h
  include/tencentcloud/rum/v20210622/model/DeleteProjectResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeOfflineLogRecordsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsRequest.h
  include/tencentcloud/rum/v20210622/model/ReleaseFile.h
  include/tencentcloud/rum/v20210622/model/ModifyProjectLimitResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataStaticProjectRequest.h
  include/tencentcloud/rum/v20210622/model/ProjectLimit.h
  include/tencentcloud/rum/v20210622/model/DeleteLogExportRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeWhitelistsResponse.h
  include/tencentcloud/rum/v20210622/model/CreateWhitelistRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataLogUrlInfoRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataCustomUrlResponse.h
  include/tencentcloud/rum/v20210622/model/RumAreaInfo.h
  include/tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPerformanceProjectResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoResponse.h
  include/tencentcloud/rum/v20210622/model/ResumeInstanceResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataStaticProjectResponse.h
  include/tencentcloud/rum/v20210622/model/CreateStarProjectRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeReleaseFileSignRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteWhitelistRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataLogUrlInfoResponse.h
  include/tencentcloud/rum/v20210622/model/RumPvInfo.h
  include/tencentcloud/rum/v20210622/model/DeleteReleaseFileResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeScoresResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeOfflineLogConfigsResponse.h
  include/tencentcloud/rum/v20210622/model/DeleteLogExportResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeReleaseFileSignResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeOfflineLogsResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeTawAreasRequest.h
  include/tencentcloud/rum/v20210622/model/Filter.h
  include/tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteStarProjectResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPerformancePageResponse.h
  include/tencentcloud/rum/v20210622/model/DeleteInstanceRequest.h
  include/tencentcloud/rum/v20210622/model/LogExport.h
  include/tencentcloud/rum/v20210622/model/DescribeDataStaticResourceResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataEventUrlResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeLogListResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeReleaseFilesResponse.h
  include/tencentcloud/rum/v20210622/model/CreateOfflineLogConfigRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataStaticUrlResponse.h
  include/tencentcloud/rum/v20210622/model/CreateWhitelistResponse.h
  include/tencentcloud/rum/v20210622/model/ScoreInfo.h
  include/tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeProjectsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataEventUrlRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeOfflineLogConfigsRequest.h
  include/tencentcloud/rum/v20210622/model/DeleteOfflineLogConfigRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeProjectsResponse.h
  include/tencentcloud/rum/v20210622/model/ModifyProjectResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeLogExportsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataReportCountResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPerformanceProjectRequest.h
  include/tencentcloud/rum/v20210622/model/ModifyProjectRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataStaticResourceRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeTawInstancesResponse.h
  include/tencentcloud/rum/v20210622/model/DescribePvListRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPvUrlInfoRequest.h
  include/tencentcloud/rum/v20210622/model/CreateReleaseFileResponse.h
  include/tencentcloud/rum/v20210622/model/CreateLogExportResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchProjectResponse.h
  include/tencentcloud/rum/v20210622/model/Whitelist.h
  include/tencentcloud/rum/v20210622/model/RumProject.h
  include/tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsResponse.h
  include/tencentcloud/rum/v20210622/model/RumInstanceInfo.h
  )

set(rum_src
  src/v20210622/RumClient.cpp
  src/v20210622/model/CreateTawInstanceRequest.cpp
  src/v20210622/model/DescribeDataFetchProjectRequest.cpp
  src/v20210622/model/DescribeDataResponse.cpp
  src/v20210622/model/CreateTawInstanceResponse.cpp
  src/v20210622/model/DeleteProjectRequest.cpp
  src/v20210622/model/DescribeProjectLimitsResponse.cpp
  src/v20210622/model/DescribeTawInstancesRequest.cpp
  src/v20210622/model/DeleteOfflineLogConfigResponse.cpp
  src/v20210622/model/DescribeDataPvUrlInfoResponse.cpp
  src/v20210622/model/DescribeDataFetchUrlResponse.cpp
  src/v20210622/model/DescribeErrorRequest.cpp
  src/v20210622/model/StopInstanceRequest.cpp
  src/v20210622/model/ModifyInstanceRequest.cpp
  src/v20210622/model/DescribeLogListRequest.cpp
  src/v20210622/model/DescribeErrorResponse.cpp
  src/v20210622/model/DeleteWhitelistResponse.cpp
  src/v20210622/model/CreateLogExportRequest.cpp
  src/v20210622/model/DescribePvListResponse.cpp
  src/v20210622/model/RumUvInfo.cpp
  src/v20210622/model/DescribeOfflineLogsRequest.cpp
  src/v20210622/model/DescribeScoresRequest.cpp
  src/v20210622/model/DescribeDataReportCountRequest.cpp
  src/v20210622/model/DeleteOfflineLogRecordRequest.cpp
  src/v20210622/model/DescribeReleaseFilesRequest.cpp
  src/v20210622/model/CreateReleaseFileRequest.cpp
  src/v20210622/model/DeleteOfflineLogRecordResponse.cpp
  src/v20210622/model/DescribeDataCustomUrlRequest.cpp
  src/v20210622/model/DescribeUvListResponse.cpp
  src/v20210622/model/Tag.cpp
  src/v20210622/model/CreateProjectRequest.cpp
  src/v20210622/model/DescribeDataStaticUrlRequest.cpp
  src/v20210622/model/ModifyInstanceResponse.cpp
  src/v20210622/model/DescribeOfflineLogRecordsResponse.cpp
  src/v20210622/model/DeleteStarProjectRequest.cpp
  src/v20210622/model/DescribeWhitelistsRequest.cpp
  src/v20210622/model/DescribeLogExportsResponse.cpp
  src/v20210622/model/DescribeUvListRequest.cpp
  src/v20210622/model/DescribeTawAreasResponse.cpp
  src/v20210622/model/DescribeDataRequest.cpp
  src/v20210622/model/CreateOfflineLogConfigResponse.cpp
  src/v20210622/model/ModifyProjectLimitRequest.cpp
  src/v20210622/model/DeleteInstanceResponse.cpp
  src/v20210622/model/DescribeDataPerformancePageRequest.cpp
  src/v20210622/model/DeleteReleaseFileRequest.cpp
  src/v20210622/model/ResumeInstanceRequest.cpp
  src/v20210622/model/DescribeDataFetchUrlRequest.cpp
  src/v20210622/model/DescribeDataLogUrlStatisticsResponse.cpp
  src/v20210622/model/CreateProjectResponse.cpp
  src/v20210622/model/StopInstanceResponse.cpp
  src/v20210622/model/DescribeProjectLimitsRequest.cpp
  src/v20210622/model/CreateStarProjectResponse.cpp
  src/v20210622/model/DeleteProjectResponse.cpp
  src/v20210622/model/DescribeOfflineLogRecordsRequest.cpp
  src/v20210622/model/DescribeDataPvUrlStatisticsRequest.cpp
  src/v20210622/model/ReleaseFile.cpp
  src/v20210622/model/ModifyProjectLimitResponse.cpp
  src/v20210622/model/DescribeDataStaticProjectRequest.cpp
  src/v20210622/model/ProjectLimit.cpp
  src/v20210622/model/DeleteLogExportRequest.cpp
  src/v20210622/model/DescribeWhitelistsResponse.cpp
  src/v20210622/model/CreateWhitelistRequest.cpp
  src/v20210622/model/DescribeDataPvUrlStatisticsResponse.cpp
  src/v20210622/model/DescribeDataLogUrlInfoRequest.cpp
  src/v20210622/model/DescribeDataCustomUrlResponse.cpp
  src/v20210622/model/RumAreaInfo.cpp
  src/v20210622/model/DescribeDataSetUrlStatisticsRequest.cpp
  src/v20210622/model/DescribeDataPerformanceProjectResponse.cpp
  src/v20210622/model/DescribeDataFetchUrlInfoResponse.cpp
  src/v20210622/model/ResumeInstanceResponse.cpp
  src/v20210622/model/DescribeDataStaticProjectResponse.cpp
  src/v20210622/model/CreateStarProjectRequest.cpp
  src/v20210622/model/DescribeReleaseFileSignRequest.cpp
  src/v20210622/model/DeleteWhitelistRequest.cpp
  src/v20210622/model/DescribeDataLogUrlInfoResponse.cpp
  src/v20210622/model/RumPvInfo.cpp
  src/v20210622/model/DeleteReleaseFileResponse.cpp
  src/v20210622/model/DescribeScoresResponse.cpp
  src/v20210622/model/DescribeOfflineLogConfigsResponse.cpp
  src/v20210622/model/DeleteLogExportResponse.cpp
  src/v20210622/model/DescribeReleaseFileSignResponse.cpp
  src/v20210622/model/DescribeOfflineLogsResponse.cpp
  src/v20210622/model/DescribeTawAreasRequest.cpp
  src/v20210622/model/Filter.cpp
  src/v20210622/model/DescribeDataLogUrlStatisticsRequest.cpp
  src/v20210622/model/DeleteStarProjectResponse.cpp
  src/v20210622/model/DescribeDataPerformancePageResponse.cpp
  src/v20210622/model/DeleteInstanceRequest.cpp
  src/v20210622/model/LogExport.cpp
  src/v20210622/model/DescribeDataStaticResourceResponse.cpp
  src/v20210622/model/DescribeDataEventUrlResponse.cpp
  src/v20210622/model/DescribeDataWebVitalsPageRequest.cpp
  src/v20210622/model/DescribeDataFetchUrlInfoRequest.cpp
  src/v20210622/model/DescribeLogListResponse.cpp
  src/v20210622/model/DescribeReleaseFilesResponse.cpp
  src/v20210622/model/CreateOfflineLogConfigRequest.cpp
  src/v20210622/model/DescribeDataStaticUrlResponse.cpp
  src/v20210622/model/CreateWhitelistResponse.cpp
  src/v20210622/model/ScoreInfo.cpp
  src/v20210622/model/DescribeDataWebVitalsPageResponse.cpp
  src/v20210622/model/DescribeProjectsRequest.cpp
  src/v20210622/model/DescribeDataEventUrlRequest.cpp
  src/v20210622/model/DescribeOfflineLogConfigsRequest.cpp
  src/v20210622/model/DeleteOfflineLogConfigRequest.cpp
  src/v20210622/model/DescribeProjectsResponse.cpp
  src/v20210622/model/ModifyProjectResponse.cpp
  src/v20210622/model/DescribeLogExportsRequest.cpp
  src/v20210622/model/DescribeDataReportCountResponse.cpp
  src/v20210622/model/DescribeDataPerformanceProjectRequest.cpp
  src/v20210622/model/ModifyProjectRequest.cpp
  src/v20210622/model/DescribeDataStaticResourceRequest.cpp
  src/v20210622/model/DescribeTawInstancesResponse.cpp
  src/v20210622/model/DescribePvListRequest.cpp
  src/v20210622/model/DescribeDataPvUrlInfoRequest.cpp
  src/v20210622/model/CreateReleaseFileResponse.cpp
  src/v20210622/model/CreateLogExportResponse.cpp
  src/v20210622/model/DescribeDataFetchProjectResponse.cpp
  src/v20210622/model/Whitelist.cpp
  src/v20210622/model/RumProject.cpp
  src/v20210622/model/DescribeDataSetUrlStatisticsResponse.cpp
  src/v20210622/model/RumInstanceInfo.cpp
  )

set(rum_include
    include/tencentcloud/rum
  )

add_library(rum ${LIB_TYPE}
  ${rum_public_header}
  ${rum_public_header_model}
  ${rum_src})

set_target_properties(rum
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rum
  )

target_include_directories(rum
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rum
  core)

#install(FILES ${rum_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rum/v20210622)
#install(FILES ${rum_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rum/v20210622/model)
install(DIRECTORY ${rum_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rum
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
