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

set(tdmysql_public_header
  include/tencentcloud/tdmysql/v20211122/TdmysqlClient.h
  )

set(tdmysql_public_header_model
  include/tencentcloud/tdmysql/v20211122/model/ArchiveLogInterval.h
  include/tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyBinlogStatusResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeFlowRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabaseTableRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBParametersRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabaseTableResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/SecurityGroupBound.h
  include/tencentcloud/tdmysql/v20211122/model/CreateDBSBackupResponse.h
  include/tencentcloud/tdmysql/v20211122/model/CreateDBSBackupRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeBillingEnableResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DestroyInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeBillingEnableRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/TableColumn.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBParametersResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ParamDesc.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/BackupPolicyModelInput.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseFunction.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DestroyInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBParametersResponse.h
  include/tencentcloud/tdmysql/v20211122/model/SecurityGroup.h
  include/tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseTable.h
  include/tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeFlowResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ConstraintRange.h
  include/tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseView.h
  include/tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseProcedure.h
  include/tencentcloud/tdmysql/v20211122/model/DBParamValue.h
  include/tencentcloud/tdmysql/v20211122/model/ParamConstraint.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyBinlogStatusRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBParametersRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/CloneInstanceModel.h
  )

set(tdmysql_src
  src/v20211122/TdmysqlClient.cpp
  src/v20211122/model/ArchiveLogInterval.cpp
  src/v20211122/model/IsolateDBInstanceRequest.cpp
  src/v20211122/model/ModifyBinlogStatusResponse.cpp
  src/v20211122/model/DescribeFlowRequest.cpp
  src/v20211122/model/ModifyDBSBackupSetCommentResponse.cpp
  src/v20211122/model/ModifyInstanceNameResponse.cpp
  src/v20211122/model/DescribeDatabaseTableRequest.cpp
  src/v20211122/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20211122/model/DescribeDBParametersRequest.cpp
  src/v20211122/model/DescribeDatabaseTableResponse.cpp
  src/v20211122/model/DescribeDatabaseObjectsResponse.cpp
  src/v20211122/model/SecurityGroupBound.cpp
  src/v20211122/model/CreateDBSBackupResponse.cpp
  src/v20211122/model/CreateDBSBackupRequest.cpp
  src/v20211122/model/DescribeBillingEnableResponse.cpp
  src/v20211122/model/DestroyInstancesRequest.cpp
  src/v20211122/model/DescribeBillingEnableRequest.cpp
  src/v20211122/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20211122/model/TableColumn.cpp
  src/v20211122/model/ModifyDBParametersResponse.cpp
  src/v20211122/model/ModifyInstanceNameRequest.cpp
  src/v20211122/model/ParamDesc.cpp
  src/v20211122/model/ModifyAutoRenewFlagRequest.cpp
  src/v20211122/model/ModifyDBSBackupPolicyResponse.cpp
  src/v20211122/model/DescribeDBSCloneInstancesResponse.cpp
  src/v20211122/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20211122/model/BackupPolicyModelInput.cpp
  src/v20211122/model/DatabaseFunction.cpp
  src/v20211122/model/ModifyDBSBackupPolicyRequest.cpp
  src/v20211122/model/DescribeDBSCloneInstancesRequest.cpp
  src/v20211122/model/DescribeDatabaseObjectsRequest.cpp
  src/v20211122/model/DescribeDBSAvailableRecoveryTimeResponse.cpp
  src/v20211122/model/ModifyAutoRenewFlagResponse.cpp
  src/v20211122/model/DestroyInstancesResponse.cpp
  src/v20211122/model/DescribeDBParametersResponse.cpp
  src/v20211122/model/SecurityGroup.cpp
  src/v20211122/model/IsolateDBInstanceResponse.cpp
  src/v20211122/model/DescribeDBSAvailableRecoveryTimeRequest.cpp
  src/v20211122/model/DatabaseTable.cpp
  src/v20211122/model/DeleteDBSBackupSetsResponse.cpp
  src/v20211122/model/DescribeFlowResponse.cpp
  src/v20211122/model/ConstraintRange.cpp
  src/v20211122/model/CancelIsolateDBInstancesResponse.cpp
  src/v20211122/model/DatabaseView.cpp
  src/v20211122/model/CancelIsolateDBInstancesRequest.cpp
  src/v20211122/model/ModifyDBSBackupSetCommentRequest.cpp
  src/v20211122/model/DatabaseProcedure.cpp
  src/v20211122/model/DBParamValue.cpp
  src/v20211122/model/ParamConstraint.cpp
  src/v20211122/model/ModifyBinlogStatusRequest.cpp
  src/v20211122/model/ModifyDBParametersRequest.cpp
  src/v20211122/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  src/v20211122/model/DeleteDBSBackupSetsRequest.cpp
  src/v20211122/model/CloneInstanceModel.cpp
  )

set(tdmysql_include
    include/tencentcloud/tdmysql
  )

add_library(tdmysql ${LIB_TYPE}
  ${tdmysql_public_header}
  ${tdmysql_public_header_model}
  ${tdmysql_src})

set_target_properties(tdmysql
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdmysql
  )

target_include_directories(tdmysql
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tdmysql
  core)

#install(FILES ${tdmysql_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdmysql/v20211122)
#install(FILES ${tdmysql_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdmysql/v20211122/model)
install(DIRECTORY ${tdmysql_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tdmysql
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
