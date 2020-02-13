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

set(tcaplusdb_public_header
  include/tencentcloud/tcaplusdb/v20190823/TcaplusdbClient.h
  )

set(tcaplusdb_public_header_model
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyZoneNameRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClearTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTasksRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyAppNameRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeAppsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteZoneRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableResult.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClearTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/RegionInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeZonesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteAppRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyAppPasswordResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableRollbackResult.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/AppInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/RollbackTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTasksResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/Filter.h
  include/tencentcloud/tcaplusdb/v20190823/model/ZoneInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateZoneResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyZoneNameResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeAppsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteZoneResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/IdlFileInfoWithoutContent.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/RollbackTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateAppRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyAppPasswordRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateAppResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeZonesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateZoneRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyAppNameResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteAppResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TaskInfo.h
  )

set(tcaplusdb_src
  src/v20190823/TcaplusdbClient.cpp
  src/v20190823/model/DescribeUinInWhitelistResponse.cpp
  src/v20190823/model/ModifyZoneNameRequest.cpp
  src/v20190823/model/IdlFileInfo.cpp
  src/v20190823/model/ClearTablesRequest.cpp
  src/v20190823/model/DescribeTasksRequest.cpp
  src/v20190823/model/DescribeIdlFileInfosResponse.cpp
  src/v20190823/model/ModifyAppNameRequest.cpp
  src/v20190823/model/DescribeTablesInRecycleRequest.cpp
  src/v20190823/model/DescribeAppsRequest.cpp
  src/v20190823/model/DeleteZoneRequest.cpp
  src/v20190823/model/TableResult.cpp
  src/v20190823/model/ClearTablesResponse.cpp
  src/v20190823/model/DescribeIdlFileInfosRequest.cpp
  src/v20190823/model/ParsedTableInfo.cpp
  src/v20190823/model/CreateTablesRequest.cpp
  src/v20190823/model/ModifyTableMemosRequest.cpp
  src/v20190823/model/RecoverRecycleTablesResponse.cpp
  src/v20190823/model/RegionInfo.cpp
  src/v20190823/model/DescribeZonesRequest.cpp
  src/v20190823/model/DeleteAppRequest.cpp
  src/v20190823/model/DescribeTablesInRecycleResponse.cpp
  src/v20190823/model/DescribeTablesResponse.cpp
  src/v20190823/model/ModifyAppPasswordResponse.cpp
  src/v20190823/model/DeleteIdlFilesRequest.cpp
  src/v20190823/model/ModifyTablesResponse.cpp
  src/v20190823/model/SelectedTableInfo.cpp
  src/v20190823/model/VerifyIdlFilesResponse.cpp
  src/v20190823/model/TableRollbackResult.cpp
  src/v20190823/model/ModifyTableQuotasResponse.cpp
  src/v20190823/model/AppInfo.cpp
  src/v20190823/model/RollbackTablesRequest.cpp
  src/v20190823/model/RecoverRecycleTablesRequest.cpp
  src/v20190823/model/DescribeTasksResponse.cpp
  src/v20190823/model/DeleteTablesRequest.cpp
  src/v20190823/model/DescribeUinInWhitelistRequest.cpp
  src/v20190823/model/Filter.cpp
  src/v20190823/model/ZoneInfo.cpp
  src/v20190823/model/DescribeRegionsResponse.cpp
  src/v20190823/model/CreateZoneResponse.cpp
  src/v20190823/model/ModifyZoneNameResponse.cpp
  src/v20190823/model/CompareIdlFilesRequest.cpp
  src/v20190823/model/VerifyIdlFilesRequest.cpp
  src/v20190823/model/DescribeAppsResponse.cpp
  src/v20190823/model/DeleteZoneResponse.cpp
  src/v20190823/model/IdlFileInfoWithoutContent.cpp
  src/v20190823/model/ModifyTableMemosResponse.cpp
  src/v20190823/model/TableInfo.cpp
  src/v20190823/model/RollbackTablesResponse.cpp
  src/v20190823/model/ErrorInfo.cpp
  src/v20190823/model/ModifyTableQuotasRequest.cpp
  src/v20190823/model/CompareIdlFilesResponse.cpp
  src/v20190823/model/ModifyTablesRequest.cpp
  src/v20190823/model/CreateAppRequest.cpp
  src/v20190823/model/CreateTablesResponse.cpp
  src/v20190823/model/ModifyAppPasswordRequest.cpp
  src/v20190823/model/CreateAppResponse.cpp
  src/v20190823/model/DescribeTablesRequest.cpp
  src/v20190823/model/DescribeRegionsRequest.cpp
  src/v20190823/model/DescribeZonesResponse.cpp
  src/v20190823/model/CreateZoneRequest.cpp
  src/v20190823/model/ModifyAppNameResponse.cpp
  src/v20190823/model/DeleteIdlFilesResponse.cpp
  src/v20190823/model/DeleteTablesResponse.cpp
  src/v20190823/model/DeleteAppResponse.cpp
  src/v20190823/model/TaskInfo.cpp
  )

set(tcaplusdb_include
    include/tencentcloud/tcaplusdb
  )

add_library(tcaplusdb ${LIB_TYPE}
  ${tcaplusdb_public_header}
  ${tcaplusdb_public_header_model}
  ${tcaplusdb_src})

set_target_properties(tcaplusdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcaplusdb
  )

target_include_directories(tcaplusdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcaplusdb
  core)

#install(FILES ${tcaplusdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcaplusdb/v20190823)
#install(FILES ${tcaplusdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcaplusdb/v20190823/model)
install(DIRECTORY ${tcaplusdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcaplusdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
