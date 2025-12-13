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

set(dbs_public_header
  include/tencentcloud/dbs/v20211108/DbsClient.h
  )

set(dbs_public_header_model
  include/tencentcloud/dbs/v20211108/model/StartBackupPlanRequest.h
  include/tencentcloud/dbs/v20211108/model/BackupPeriod.h
  include/tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobRequest.h
  include/tencentcloud/dbs/v20211108/model/BackupStrategy.h
  include/tencentcloud/dbs/v20211108/model/CreateConnectTestJobRequest.h
  include/tencentcloud/dbs/v20211108/model/StartBackupPlanResponse.h
  include/tencentcloud/dbs/v20211108/model/BackupColumnItem.h
  include/tencentcloud/dbs/v20211108/model/BackupObjectItem.h
  include/tencentcloud/dbs/v20211108/model/StartBackupCheckJobRequest.h
  include/tencentcloud/dbs/v20211108/model/BackupEndpoint.h
  include/tencentcloud/dbs/v20211108/model/StartBackupCheckJobResponse.h
  include/tencentcloud/dbs/v20211108/model/BackupObject.h
  include/tencentcloud/dbs/v20211108/model/ConfigureBackupPlanResponse.h
  include/tencentcloud/dbs/v20211108/model/ConfigureBackupPlanRequest.h
  include/tencentcloud/dbs/v20211108/model/StorageStrategy.h
  include/tencentcloud/dbs/v20211108/model/BackupTableItem.h
  include/tencentcloud/dbs/v20211108/model/CreateConnectTestJobResponse.h
  include/tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobResponse.h
  )

set(dbs_src
  src/v20211108/DbsClient.cpp
  src/v20211108/model/StartBackupPlanRequest.cpp
  src/v20211108/model/BackupPeriod.cpp
  src/v20211108/model/DescribeBackupCheckJobRequest.cpp
  src/v20211108/model/BackupStrategy.cpp
  src/v20211108/model/CreateConnectTestJobRequest.cpp
  src/v20211108/model/StartBackupPlanResponse.cpp
  src/v20211108/model/BackupColumnItem.cpp
  src/v20211108/model/BackupObjectItem.cpp
  src/v20211108/model/StartBackupCheckJobRequest.cpp
  src/v20211108/model/BackupEndpoint.cpp
  src/v20211108/model/StartBackupCheckJobResponse.cpp
  src/v20211108/model/BackupObject.cpp
  src/v20211108/model/ConfigureBackupPlanResponse.cpp
  src/v20211108/model/ConfigureBackupPlanRequest.cpp
  src/v20211108/model/StorageStrategy.cpp
  src/v20211108/model/BackupTableItem.cpp
  src/v20211108/model/CreateConnectTestJobResponse.cpp
  src/v20211108/model/DescribeBackupCheckJobResponse.cpp
  )

set(dbs_include
    include/tencentcloud/dbs
  )

add_library(dbs ${LIB_TYPE}
  ${dbs_public_header}
  ${dbs_public_header_model}
  ${dbs_src})

set_target_properties(dbs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbs
  )

target_include_directories(dbs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dbs
  core)

#install(FILES ${dbs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbs/v20211108)
#install(FILES ${dbs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbs/v20211108/model)
install(DIRECTORY ${dbs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dbs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
