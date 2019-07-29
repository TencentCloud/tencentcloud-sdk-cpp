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

set(mongodb_public_header
  include/tencentcloud/mongodb/v20180408/MongodbClient.h
  )

set(mongodb_public_header_model
  include/tencentcloud/mongodb/v20180408/model/DescribeSpecInfoRequest.h
  include/tencentcloud/mongodb/v20180408/model/TerminateDBInstanceRequest.h
  include/tencentcloud/mongodb/v20180408/model/CreateDBInstanceRequest.h
  include/tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceHourRequest.h
  include/tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourRequest.h
  include/tencentcloud/mongodb/v20180408/model/AssignProjectRequest.h
  include/tencentcloud/mongodb/v20180408/model/DescribeDBInstancesRequest.h
  include/tencentcloud/mongodb/v20180408/model/SetPasswordResponse.h
  include/tencentcloud/mongodb/v20180408/model/SpecificationInfo.h
  include/tencentcloud/mongodb/v20180408/model/MongoDBInstanceDetail.h
  include/tencentcloud/mongodb/v20180408/model/DescribeSpecInfoResponse.h
  include/tencentcloud/mongodb/v20180408/model/TagInfo.h
  include/tencentcloud/mongodb/v20180408/model/DescribeSlowLogResponse.h
  include/tencentcloud/mongodb/v20180408/model/DescribeDBInstancesResponse.h
  include/tencentcloud/mongodb/v20180408/model/CreateDBInstanceResponse.h
  include/tencentcloud/mongodb/v20180408/model/SetPasswordRequest.h
  include/tencentcloud/mongodb/v20180408/model/AssignProjectResponse.h
  include/tencentcloud/mongodb/v20180408/model/DescribeSlowLogRequest.h
  include/tencentcloud/mongodb/v20180408/model/SetAutoRenewResponse.h
  include/tencentcloud/mongodb/v20180408/model/MongoDBInstance.h
  include/tencentcloud/mongodb/v20180408/model/RenameInstanceRequest.h
  include/tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceResponse.h
  include/tencentcloud/mongodb/v20180408/model/SetAutoRenewRequest.h
  include/tencentcloud/mongodb/v20180408/model/RenameInstanceResponse.h
  include/tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceHourResponse.h
  include/tencentcloud/mongodb/v20180408/model/UpgradeDBInstanceRequest.h
  include/tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourResponse.h
  include/tencentcloud/mongodb/v20180408/model/TerminateDBInstanceResponse.h
  include/tencentcloud/mongodb/v20180408/model/MongodbShardInfo.h
  include/tencentcloud/mongodb/v20180408/model/SpecItem.h
  )

set(mongodb_src
  src/v20180408/MongodbClient.cpp
  src/v20180408/model/DescribeSpecInfoRequest.cpp
  src/v20180408/model/TerminateDBInstanceRequest.cpp
  src/v20180408/model/CreateDBInstanceRequest.cpp
  src/v20180408/model/UpgradeDBInstanceHourRequest.cpp
  src/v20180408/model/CreateDBInstanceHourRequest.cpp
  src/v20180408/model/AssignProjectRequest.cpp
  src/v20180408/model/DescribeDBInstancesRequest.cpp
  src/v20180408/model/SetPasswordResponse.cpp
  src/v20180408/model/SpecificationInfo.cpp
  src/v20180408/model/MongoDBInstanceDetail.cpp
  src/v20180408/model/DescribeSpecInfoResponse.cpp
  src/v20180408/model/TagInfo.cpp
  src/v20180408/model/DescribeSlowLogResponse.cpp
  src/v20180408/model/DescribeDBInstancesResponse.cpp
  src/v20180408/model/CreateDBInstanceResponse.cpp
  src/v20180408/model/SetPasswordRequest.cpp
  src/v20180408/model/AssignProjectResponse.cpp
  src/v20180408/model/DescribeSlowLogRequest.cpp
  src/v20180408/model/SetAutoRenewResponse.cpp
  src/v20180408/model/MongoDBInstance.cpp
  src/v20180408/model/RenameInstanceRequest.cpp
  src/v20180408/model/UpgradeDBInstanceResponse.cpp
  src/v20180408/model/SetAutoRenewRequest.cpp
  src/v20180408/model/RenameInstanceResponse.cpp
  src/v20180408/model/UpgradeDBInstanceHourResponse.cpp
  src/v20180408/model/UpgradeDBInstanceRequest.cpp
  src/v20180408/model/CreateDBInstanceHourResponse.cpp
  src/v20180408/model/TerminateDBInstanceResponse.cpp
  src/v20180408/model/MongodbShardInfo.cpp
  src/v20180408/model/SpecItem.cpp
  )

set(mongodb_include
    include/tencentcloud/mongodb
  )

add_library(mongodb ${LIB_TYPE}
  ${mongodb_public_header}
  ${mongodb_public_header_model}
  ${mongodb_src})

set_target_properties(mongodb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mongodb
  )

target_include_directories(mongodb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mongodb
  core)

#install(FILES ${mongodb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mongodb/v20180408)
#install(FILES ${mongodb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mongodb/v20180408/model)
install(DIRECTORY ${mongodb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mongodb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
