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
  include/tencentcloud/tdmysql/v20211122/model/CreateDBInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ExpandInstanceResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesInfo.h
  include/tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsOutPut.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabasesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBParametersRequest.h
  include/tencentcloud/tdmysql/v20211122/model/RestartDBInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeUserPrivilegesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/InstanceFilter.h
  include/tencentcloud/tdmysql/v20211122/model/BackupStatisticsModel.h
  include/tencentcloud/tdmysql/v20211122/model/BackupPolicyModelOutPut.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsDetailRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBParametersResponse.h
  include/tencentcloud/tdmysql/v20211122/model/StorageNodeSpec.h
  include/tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeFlowResponse.h
  include/tencentcloud/tdmysql/v20211122/model/MaintenanceWindowInfo.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsDetailResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ParamConstraint.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupPolicyResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/BinlogInfo.h
  include/tencentcloud/tdmysql/v20211122/model/DatabasePrivileges.h
  include/tencentcloud/tdmysql/v20211122/model/NodeInfo.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSpecsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/CreateCloneInstanceResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyUserPrivilegesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/CreateDBSBackupResponse.h
  include/tencentcloud/tdmysql/v20211122/model/BackupSetsReqFilter.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupSetsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/CreateCloneInstanceRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSaleInfoRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyUserPrivilegesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSArchiveLogsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseFunction.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBInstanceDetailResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DestroyInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSaleInfoResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupSetsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBInstanceDetailRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeUsersRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseView.h
  include/tencentcloud/tdmysql/v20211122/model/DataBackupStatisticsModel.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DBParamValue.h
  include/tencentcloud/tdmysql/v20211122/model/UserInfo.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBParametersRequest.h
  include/tencentcloud/tdmysql/v20211122/model/CloneInstanceModel.h
  include/tencentcloud/tdmysql/v20211122/model/ArchiveLogInterval.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBParametersResponse.h
  include/tencentcloud/tdmysql/v20211122/model/SecurityGroup.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSArchiveLogsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSaleRegionInfo.h
  include/tencentcloud/tdmysql/v20211122/model/InstanceNode.h
  include/tencentcloud/tdmysql/v20211122/model/SecurityGroupBound.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsResponse.h
  include/tencentcloud/tdmysql/v20211122/model/BackupTypeStatisticsModel.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/InstanceInfo.h
  include/tencentcloud/tdmysql/v20211122/model/User.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseTable.h
  include/tencentcloud/tdmysql/v20211122/model/AnalysisInstanceInfo.h
  include/tencentcloud/tdmysql/v20211122/model/ServerlessCcu.h
  include/tencentcloud/tdmysql/v20211122/model/Database.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesGroup.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeUsersResponse.h
  include/tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsModel.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupPolicyRequest.h
  include/tencentcloud/tdmysql/v20211122/model/UpgradeInstanceResponse.h
  include/tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ExpandInstanceRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDatabasesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ArchiveLogModel.h
  include/tencentcloud/tdmysql/v20211122/model/AnalysisRelationInfo.h
  include/tencentcloud/tdmysql/v20211122/model/ResourceTag.h
  include/tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeFlowRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentResponse.h
  include/tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h
  include/tencentcloud/tdmysql/v20211122/model/DatabaseProcedure.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagRequest.h
  include/tencentcloud/tdmysql/v20211122/model/CreateDBSBackupRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DestroyInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeSpecsRequest.h
  include/tencentcloud/tdmysql/v20211122/model/ParamDesc.h
  include/tencentcloud/tdmysql/v20211122/model/BackupPolicyModelInput.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ConstraintRange.h
  include/tencentcloud/tdmysql/v20211122/model/RestartDBInstancesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeResponse.h
  include/tencentcloud/tdmysql/v20211122/model/TablePrivileges.h
  include/tencentcloud/tdmysql/v20211122/model/DescribeUserPrivilegesRequest.h
  include/tencentcloud/tdmysql/v20211122/model/LogBackupStatisticsModel.h
  include/tencentcloud/tdmysql/v20211122/model/UpgradeInstanceRequest.h
  include/tencentcloud/tdmysql/v20211122/model/BackupSetModel.h
  include/tencentcloud/tdmysql/v20211122/model/InstanceParam.h
  include/tencentcloud/tdmysql/v20211122/model/CreateDBInstancesResponse.h
  include/tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsRequest.h
  )

set(tdmysql_src
  src/v20211122/TdmysqlClient.cpp
  src/v20211122/model/CreateDBInstancesRequest.cpp
  src/v20211122/model/ExpandInstanceResponse.cpp
  src/v20211122/model/DescribeSaleZonesInfo.cpp
  src/v20211122/model/BackupMethodStatisticsOutPut.cpp
  src/v20211122/model/DescribeDatabasesRequest.cpp
  src/v20211122/model/DescribeDBParametersRequest.cpp
  src/v20211122/model/RestartDBInstancesResponse.cpp
  src/v20211122/model/ModifyInstanceNameRequest.cpp
  src/v20211122/model/DescribeUserPrivilegesResponse.cpp
  src/v20211122/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20211122/model/InstanceFilter.cpp
  src/v20211122/model/BackupStatisticsModel.cpp
  src/v20211122/model/BackupPolicyModelOutPut.cpp
  src/v20211122/model/ModifyInstanceNameResponse.cpp
  src/v20211122/model/DescribeDBSBackupStatisticsDetailRequest.cpp
  src/v20211122/model/DescribeDBParametersResponse.cpp
  src/v20211122/model/StorageNodeSpec.cpp
  src/v20211122/model/IsolateDBInstanceResponse.cpp
  src/v20211122/model/DeleteDBSBackupSetsResponse.cpp
  src/v20211122/model/DescribeFlowResponse.cpp
  src/v20211122/model/MaintenanceWindowInfo.cpp
  src/v20211122/model/DescribeDBSBackupStatisticsDetailResponse.cpp
  src/v20211122/model/ModifyDBSBackupSetCommentRequest.cpp
  src/v20211122/model/ParamConstraint.cpp
  src/v20211122/model/DescribeDBSBackupPolicyResponse.cpp
  src/v20211122/model/DeleteDBSBackupSetsRequest.cpp
  src/v20211122/model/BinlogInfo.cpp
  src/v20211122/model/DatabasePrivileges.cpp
  src/v20211122/model/NodeInfo.cpp
  src/v20211122/model/DescribeSpecsResponse.cpp
  src/v20211122/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20211122/model/CreateCloneInstanceResponse.cpp
  src/v20211122/model/ModifyUserPrivilegesResponse.cpp
  src/v20211122/model/CreateDBSBackupResponse.cpp
  src/v20211122/model/BackupSetsReqFilter.cpp
  src/v20211122/model/DescribeDBSBackupSetsResponse.cpp
  src/v20211122/model/DescribeDBSCloneInstancesRequest.cpp
  src/v20211122/model/CreateCloneInstanceRequest.cpp
  src/v20211122/model/DescribeDBInstancesRequest.cpp
  src/v20211122/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20211122/model/DescribeSaleInfoRequest.cpp
  src/v20211122/model/ModifyUserPrivilegesRequest.cpp
  src/v20211122/model/DescribeDBSArchiveLogsRequest.cpp
  src/v20211122/model/DatabaseFunction.cpp
  src/v20211122/model/ModifyDBSBackupPolicyRequest.cpp
  src/v20211122/model/DescribeDBInstanceDetailResponse.cpp
  src/v20211122/model/DescribeDatabaseObjectsRequest.cpp
  src/v20211122/model/DestroyInstancesResponse.cpp
  src/v20211122/model/DescribeSaleInfoResponse.cpp
  src/v20211122/model/DescribeDBSBackupSetsRequest.cpp
  src/v20211122/model/DescribeDBInstanceDetailRequest.cpp
  src/v20211122/model/ModifyAutoRenewFlagResponse.cpp
  src/v20211122/model/DescribeUsersRequest.cpp
  src/v20211122/model/DatabaseView.cpp
  src/v20211122/model/DataBackupStatisticsModel.cpp
  src/v20211122/model/ModifyDBSBackupPolicyResponse.cpp
  src/v20211122/model/DBParamValue.cpp
  src/v20211122/model/UserInfo.cpp
  src/v20211122/model/ModifyDBParametersRequest.cpp
  src/v20211122/model/CloneInstanceModel.cpp
  src/v20211122/model/ArchiveLogInterval.cpp
  src/v20211122/model/ModifyDBParametersResponse.cpp
  src/v20211122/model/SecurityGroup.cpp
  src/v20211122/model/DescribeDBSAvailableRecoveryTimeRequest.cpp
  src/v20211122/model/DescribeDBSArchiveLogsResponse.cpp
  src/v20211122/model/DescribeDatabaseObjectsResponse.cpp
  src/v20211122/model/DescribeSaleRegionInfo.cpp
  src/v20211122/model/InstanceNode.cpp
  src/v20211122/model/SecurityGroupBound.cpp
  src/v20211122/model/DescribeDBSBackupStatisticsResponse.cpp
  src/v20211122/model/BackupTypeStatisticsModel.cpp
  src/v20211122/model/DescribeDBSCloneInstancesResponse.cpp
  src/v20211122/model/InstanceInfo.cpp
  src/v20211122/model/User.cpp
  src/v20211122/model/DatabaseTable.cpp
  src/v20211122/model/AnalysisInstanceInfo.cpp
  src/v20211122/model/ServerlessCcu.cpp
  src/v20211122/model/Database.cpp
  src/v20211122/model/DescribeSaleZonesGroup.cpp
  src/v20211122/model/DescribeDBSBackupStatisticsRequest.cpp
  src/v20211122/model/DescribeUsersResponse.cpp
  src/v20211122/model/CancelIsolateDBInstancesResponse.cpp
  src/v20211122/model/BackupMethodStatisticsModel.cpp
  src/v20211122/model/DescribeDBSBackupPolicyRequest.cpp
  src/v20211122/model/UpgradeInstanceResponse.cpp
  src/v20211122/model/CancelIsolateDBInstancesRequest.cpp
  src/v20211122/model/ExpandInstanceRequest.cpp
  src/v20211122/model/DescribeDatabasesResponse.cpp
  src/v20211122/model/ArchiveLogModel.cpp
  src/v20211122/model/AnalysisRelationInfo.cpp
  src/v20211122/model/ResourceTag.cpp
  src/v20211122/model/IsolateDBInstanceRequest.cpp
  src/v20211122/model/DescribeFlowRequest.cpp
  src/v20211122/model/ModifyDBSBackupSetCommentResponse.cpp
  src/v20211122/model/AutoScalingConfig.cpp
  src/v20211122/model/DatabaseProcedure.cpp
  src/v20211122/model/ModifyAutoRenewFlagRequest.cpp
  src/v20211122/model/CreateDBSBackupRequest.cpp
  src/v20211122/model/DestroyInstancesRequest.cpp
  src/v20211122/model/DescribeSpecsRequest.cpp
  src/v20211122/model/ParamDesc.cpp
  src/v20211122/model/BackupPolicyModelInput.cpp
  src/v20211122/model/DescribeDBInstancesResponse.cpp
  src/v20211122/model/ConstraintRange.cpp
  src/v20211122/model/RestartDBInstancesRequest.cpp
  src/v20211122/model/DescribeDBSAvailableRecoveryTimeResponse.cpp
  src/v20211122/model/TablePrivileges.cpp
  src/v20211122/model/DescribeUserPrivilegesRequest.cpp
  src/v20211122/model/LogBackupStatisticsModel.cpp
  src/v20211122/model/UpgradeInstanceRequest.cpp
  src/v20211122/model/BackupSetModel.cpp
  src/v20211122/model/InstanceParam.cpp
  src/v20211122/model/CreateDBInstancesResponse.cpp
  src/v20211122/model/ModifyDBInstanceSecurityGroupsRequest.cpp
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
