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

set(dbbrain_public_header
  include/tencentcloud/dbbrain/v20191016/DbbrainClient.h
  )

set(dbbrain_public_header_model
  include/tencentcloud/dbbrain/v20191016/model/TableSpaceTimeSeries.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.h
  include/tencentcloud/dbbrain/v20191016/model/HealthScoreInfo.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesResponse.h
  include/tencentcloud/dbbrain/v20191016/model/CreateSchedulerMailProfileRequest.h
  include/tencentcloud/dbbrain/v20191016/model/ContactItem.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeHealthScoreResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDiagDBInstancesRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeAllUserContactResponse.h
  include/tencentcloud/dbbrain/v20191016/model/TimeSlice.h
  include/tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfRequest.h
  include/tencentcloud/dbbrain/v20191016/model/MonitorMetric.h
  include/tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportTaskRequest.h
  include/tencentcloud/dbbrain/v20191016/model/MonitorFloatMetric.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogDownloadUrlsRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogExportTasksRequest.h
  include/tencentcloud/dbbrain/v20191016/model/AddUserContactRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeAllUserGroupResponse.h
  include/tencentcloud/dbbrain/v20191016/model/SchemaItem.h
  include/tencentcloud/dbbrain/v20191016/model/CreateMailProfileResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeAllUserContactRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventRequest.h
  include/tencentcloud/dbbrain/v20191016/model/CreateSecurityAuditLogExportTaskRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryRequest.h
  include/tencentcloud/dbbrain/v20191016/model/GroupItem.h
  include/tencentcloud/dbbrain/v20191016/model/InstanceInfo.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesRequest.h
  include/tencentcloud/dbbrain/v20191016/model/AddUserContactResponse.h
  include/tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportTaskResponse.h
  include/tencentcloud/dbbrain/v20191016/model/MonitorMetricSeriesData.h
  include/tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DiagHistoryEventItem.h
  include/tencentcloud/dbbrain/v20191016/model/DeleteSecurityAuditLogExportTasksRequest.h
  include/tencentcloud/dbbrain/v20191016/model/CreateSchedulerMailProfileResponse.h
  include/tencentcloud/dbbrain/v20191016/model/SlowLogTopSqlItem.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsResponse.h
  include/tencentcloud/dbbrain/v20191016/model/SecLogExportTaskInfo.h
  include/tencentcloud/dbbrain/v20191016/model/CreateMailProfileRequest.h
  include/tencentcloud/dbbrain/v20191016/model/MonitorFloatMetricSeriesData.h
  include/tencentcloud/dbbrain/v20191016/model/MailConfiguration.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeMailProfileResponse.h
  include/tencentcloud/dbbrain/v20191016/model/TableSpaceData.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogDownloadUrlsResponse.h
  include/tencentcloud/dbbrain/v20191016/model/EventInfo.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeMailProfileRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeHealthScoreRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DeleteSecurityAuditLogExportTasksResponse.h
  include/tencentcloud/dbbrain/v20191016/model/IssueTypeInfo.h
  include/tencentcloud/dbbrain/v20191016/model/InstanceConfs.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDiagDBInstancesResponse.h
  include/tencentcloud/dbbrain/v20191016/model/ProfileInfo.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeAllUserGroupRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogExportTasksResponse.h
  include/tencentcloud/dbbrain/v20191016/model/CreateSecurityAuditLogExportTaskResponse.h
  include/tencentcloud/dbbrain/v20191016/model/UserProfile.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesResponse.h
  )

set(dbbrain_src
  src/v20191016/DbbrainClient.cpp
  src/v20191016/model/TableSpaceTimeSeries.cpp
  src/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.cpp
  src/v20191016/model/HealthScoreInfo.cpp
  src/v20191016/model/DescribeTopSpaceTableTimeSeriesResponse.cpp
  src/v20191016/model/CreateSchedulerMailProfileRequest.cpp
  src/v20191016/model/ContactItem.cpp
  src/v20191016/model/DescribeHealthScoreResponse.cpp
  src/v20191016/model/DescribeDBDiagHistoryResponse.cpp
  src/v20191016/model/DescribeDiagDBInstancesRequest.cpp
  src/v20191016/model/DescribeDBSpaceStatusRequest.cpp
  src/v20191016/model/DescribeAllUserContactResponse.cpp
  src/v20191016/model/TimeSlice.cpp
  src/v20191016/model/ModifyDiagDBInstanceConfRequest.cpp
  src/v20191016/model/MonitorMetric.cpp
  src/v20191016/model/CreateDBDiagReportTaskRequest.cpp
  src/v20191016/model/MonitorFloatMetric.cpp
  src/v20191016/model/DescribeSecurityAuditLogDownloadUrlsRequest.cpp
  src/v20191016/model/DescribeSecurityAuditLogExportTasksRequest.cpp
  src/v20191016/model/AddUserContactRequest.cpp
  src/v20191016/model/DescribeAllUserGroupResponse.cpp
  src/v20191016/model/SchemaItem.cpp
  src/v20191016/model/CreateMailProfileResponse.cpp
  src/v20191016/model/DescribeTopSpaceTablesRequest.cpp
  src/v20191016/model/DescribeAllUserContactRequest.cpp
  src/v20191016/model/DescribeDBDiagEventRequest.cpp
  src/v20191016/model/CreateSecurityAuditLogExportTaskRequest.cpp
  src/v20191016/model/DescribeDBSpaceStatusResponse.cpp
  src/v20191016/model/DescribeDBDiagEventResponse.cpp
  src/v20191016/model/DescribeDBDiagHistoryRequest.cpp
  src/v20191016/model/GroupItem.cpp
  src/v20191016/model/InstanceInfo.cpp
  src/v20191016/model/DescribeTopSpaceTableTimeSeriesRequest.cpp
  src/v20191016/model/AddUserContactResponse.cpp
  src/v20191016/model/CreateDBDiagReportTaskResponse.cpp
  src/v20191016/model/MonitorMetricSeriesData.cpp
  src/v20191016/model/ModifyDiagDBInstanceConfResponse.cpp
  src/v20191016/model/DiagHistoryEventItem.cpp
  src/v20191016/model/DeleteSecurityAuditLogExportTasksRequest.cpp
  src/v20191016/model/CreateSchedulerMailProfileResponse.cpp
  src/v20191016/model/SlowLogTopSqlItem.cpp
  src/v20191016/model/DescribeSlowLogTopSqlsResponse.cpp
  src/v20191016/model/SecLogExportTaskInfo.cpp
  src/v20191016/model/CreateMailProfileRequest.cpp
  src/v20191016/model/MonitorFloatMetricSeriesData.cpp
  src/v20191016/model/MailConfiguration.cpp
  src/v20191016/model/DescribeSlowLogTopSqlsRequest.cpp
  src/v20191016/model/DescribeMailProfileResponse.cpp
  src/v20191016/model/TableSpaceData.cpp
  src/v20191016/model/DescribeSecurityAuditLogDownloadUrlsResponse.cpp
  src/v20191016/model/EventInfo.cpp
  src/v20191016/model/DescribeMailProfileRequest.cpp
  src/v20191016/model/DescribeHealthScoreRequest.cpp
  src/v20191016/model/DeleteSecurityAuditLogExportTasksResponse.cpp
  src/v20191016/model/IssueTypeInfo.cpp
  src/v20191016/model/InstanceConfs.cpp
  src/v20191016/model/DescribeDiagDBInstancesResponse.cpp
  src/v20191016/model/ProfileInfo.cpp
  src/v20191016/model/DescribeAllUserGroupRequest.cpp
  src/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.cpp
  src/v20191016/model/DescribeSecurityAuditLogExportTasksResponse.cpp
  src/v20191016/model/CreateSecurityAuditLogExportTaskResponse.cpp
  src/v20191016/model/UserProfile.cpp
  src/v20191016/model/DescribeTopSpaceTablesResponse.cpp
  )

set(dbbrain_include
    include/tencentcloud/dbbrain
  )

add_library(dbbrain ${LIB_TYPE}
  ${dbbrain_public_header}
  ${dbbrain_public_header_model}
  ${dbbrain_src})

set_target_properties(dbbrain
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbbrain
  )

target_include_directories(dbbrain
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dbbrain
  core)

#install(FILES ${dbbrain_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbbrain/v20191016)
#install(FILES ${dbbrain_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbbrain/v20191016/model)
install(DIRECTORY ${dbbrain_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dbbrain
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
