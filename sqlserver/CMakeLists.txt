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

set(sqlserver_public_header
  include/tencentcloud/sqlserver/v20180328/SqlserverClient.h
  )

set(sqlserver_public_header_model
  include/tencentcloud/sqlserver/v20180328/model/CreateDBInstancesRequest.h
  include/tencentcloud/sqlserver/v20180328/model/InstanceRenewInfo.h
  include/tencentcloud/sqlserver/v20180328/model/DealInfo.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeAccountsRequest.h
  include/tencentcloud/sqlserver/v20180328/model/CreateMigrationResponse.h
  include/tencentcloud/sqlserver/v20180328/model/RestartDBInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/RegionInfo.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkRequest.h
  include/tencentcloud/sqlserver/v20180328/model/MigrateDetail.h
  include/tencentcloud/sqlserver/v20180328/model/RunMigrationResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeProductConfigRequest.h
  include/tencentcloud/sqlserver/v20180328/model/CreateAccountRequest.h
  include/tencentcloud/sqlserver/v20180328/model/RollbackInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DBRemark.h
  include/tencentcloud/sqlserver/v20180328/model/MigrateDB.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeRegionsResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeBackupsRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeResponse.h
  include/tencentcloud/sqlserver/v20180328/model/RestoreInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/RunMigrationRequest.h
  include/tencentcloud/sqlserver/v20180328/model/RestoreInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/ZoneInfo.h
  include/tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailRequest.h
  include/tencentcloud/sqlserver/v20180328/model/MigrateTask.h
  include/tencentcloud/sqlserver/v20180328/model/SpecInfo.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeOrdersResponse.h
  include/tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesResponse.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DBCreateInfo.h
  include/tencentcloud/sqlserver/v20180328/model/AccountPrivilege.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyMigrationResponse.h
  include/tencentcloud/sqlserver/v20180328/model/AccountCreateInfo.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeDBsResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesRequest.h
  include/tencentcloud/sqlserver/v20180328/model/SlowlogInfo.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeMigrationsResponse.h
  include/tencentcloud/sqlserver/v20180328/model/RenewDBInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeZonesRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DeleteDBRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceRenewFlagResponse.h
  include/tencentcloud/sqlserver/v20180328/model/MigrateSource.h
  include/tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordResponse.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeMigrationsRequest.h
  include/tencentcloud/sqlserver/v20180328/model/InquiryPriceRenewDBInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeDBsRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBNameRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeBackupsResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeRegionsRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DeleteMigrationRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DBPrivilegeModifyInfo.h
  include/tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/CreateDBRequest.h
  include/tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameRequest.h
  include/tencentcloud/sqlserver/v20180328/model/AccountPassword.h
  include/tencentcloud/sqlserver/v20180328/model/DeleteMigrationResponse.h
  include/tencentcloud/sqlserver/v20180328/model/InstanceDBDetail.h
  include/tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DbRollbackTimeInfo.h
  include/tencentcloud/sqlserver/v20180328/model/AccountDetail.h
  include/tencentcloud/sqlserver/v20180328/model/CreateBackupResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DBInstance.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeProductConfigResponse.h
  include/tencentcloud/sqlserver/v20180328/model/CreateMigrationRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBNameResponse.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceRenewFlagRequest.h
  include/tencentcloud/sqlserver/v20180328/model/Backup.h
  include/tencentcloud/sqlserver/v20180328/model/AccountRemark.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameResponse.h
  include/tencentcloud/sqlserver/v20180328/model/AccountPrivilegeModifyInfo.h
  include/tencentcloud/sqlserver/v20180328/model/MigrateTarget.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeZonesResponse.h
  include/tencentcloud/sqlserver/v20180328/model/RenewDBInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DBPrivilege.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeOrdersRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DeleteAccountRequest.h
  include/tencentcloud/sqlserver/v20180328/model/InquiryPriceRenewDBInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkRequest.h
  include/tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailResponse.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyMigrationRequest.h
  include/tencentcloud/sqlserver/v20180328/model/CreateAccountResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DeleteDBResponse.h
  include/tencentcloud/sqlserver/v20180328/model/CreateDBResponse.h
  include/tencentcloud/sqlserver/v20180328/model/RestartDBInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DBDetail.h
  include/tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordRequest.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectRequest.h
  include/tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeAccountsResponse.h
  include/tencentcloud/sqlserver/v20180328/model/RollbackInstanceRequest.h
  include/tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeRequest.h
  include/tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkResponse.h
  include/tencentcloud/sqlserver/v20180328/model/CreateDBInstancesResponse.h
  include/tencentcloud/sqlserver/v20180328/model/DeleteAccountResponse.h
  )

set(sqlserver_src
  src/v20180328/SqlserverClient.cpp
  src/v20180328/model/CreateDBInstancesRequest.cpp
  src/v20180328/model/InstanceRenewInfo.cpp
  src/v20180328/model/DealInfo.cpp
  src/v20180328/model/DescribeAccountsRequest.cpp
  src/v20180328/model/CreateMigrationResponse.cpp
  src/v20180328/model/RestartDBInstanceRequest.cpp
  src/v20180328/model/RegionInfo.cpp
  src/v20180328/model/ModifyDBRemarkRequest.cpp
  src/v20180328/model/MigrateDetail.cpp
  src/v20180328/model/RunMigrationResponse.cpp
  src/v20180328/model/DescribeProductConfigRequest.cpp
  src/v20180328/model/CreateAccountRequest.cpp
  src/v20180328/model/RollbackInstanceResponse.cpp
  src/v20180328/model/DBRemark.cpp
  src/v20180328/model/MigrateDB.cpp
  src/v20180328/model/DescribeRegionsResponse.cpp
  src/v20180328/model/DescribeBackupsRequest.cpp
  src/v20180328/model/ModifyDBInstanceProjectResponse.cpp
  src/v20180328/model/DescribeRollbackTimeResponse.cpp
  src/v20180328/model/RestoreInstanceRequest.cpp
  src/v20180328/model/RunMigrationRequest.cpp
  src/v20180328/model/RestoreInstanceResponse.cpp
  src/v20180328/model/ZoneInfo.cpp
  src/v20180328/model/InquiryPriceCreateDBInstancesRequest.cpp
  src/v20180328/model/DescribeMigrationDetailRequest.cpp
  src/v20180328/model/MigrateTask.cpp
  src/v20180328/model/SpecInfo.cpp
  src/v20180328/model/DescribeOrdersResponse.cpp
  src/v20180328/model/InquiryPriceCreateDBInstancesResponse.cpp
  src/v20180328/model/ModifyAccountPrivilegeResponse.cpp
  src/v20180328/model/DBCreateInfo.cpp
  src/v20180328/model/AccountPrivilege.cpp
  src/v20180328/model/ModifyMigrationResponse.cpp
  src/v20180328/model/AccountCreateInfo.cpp
  src/v20180328/model/DescribeDBsResponse.cpp
  src/v20180328/model/DescribeDBInstancesRequest.cpp
  src/v20180328/model/SlowlogInfo.cpp
  src/v20180328/model/ModifyAccountRemarkResponse.cpp
  src/v20180328/model/DescribeMigrationsResponse.cpp
  src/v20180328/model/RenewDBInstanceRequest.cpp
  src/v20180328/model/DescribeZonesRequest.cpp
  src/v20180328/model/DeleteDBRequest.cpp
  src/v20180328/model/ModifyDBInstanceRenewFlagResponse.cpp
  src/v20180328/model/MigrateSource.cpp
  src/v20180328/model/ResetAccountPasswordResponse.cpp
  src/v20180328/model/ModifyAccountPrivilegeRequest.cpp
  src/v20180328/model/DescribeMigrationsRequest.cpp
  src/v20180328/model/InquiryPriceRenewDBInstanceResponse.cpp
  src/v20180328/model/DescribeFlowStatusRequest.cpp
  src/v20180328/model/DescribeDBsRequest.cpp
  src/v20180328/model/ModifyDBNameRequest.cpp
  src/v20180328/model/DescribeBackupsResponse.cpp
  src/v20180328/model/DescribeRegionsRequest.cpp
  src/v20180328/model/DescribeFlowStatusResponse.cpp
  src/v20180328/model/DeleteMigrationRequest.cpp
  src/v20180328/model/DBPrivilegeModifyInfo.cpp
  src/v20180328/model/TerminateDBInstanceRequest.cpp
  src/v20180328/model/CreateDBRequest.cpp
  src/v20180328/model/InquiryPriceUpgradeDBInstanceRequest.cpp
  src/v20180328/model/ModifyDBInstanceNameRequest.cpp
  src/v20180328/model/AccountPassword.cpp
  src/v20180328/model/DeleteMigrationResponse.cpp
  src/v20180328/model/InstanceDBDetail.cpp
  src/v20180328/model/UpgradeDBInstanceRequest.cpp
  src/v20180328/model/DbRollbackTimeInfo.cpp
  src/v20180328/model/AccountDetail.cpp
  src/v20180328/model/CreateBackupResponse.cpp
  src/v20180328/model/DBInstance.cpp
  src/v20180328/model/DescribeProductConfigResponse.cpp
  src/v20180328/model/CreateMigrationRequest.cpp
  src/v20180328/model/ModifyDBNameResponse.cpp
  src/v20180328/model/ModifyDBInstanceRenewFlagRequest.cpp
  src/v20180328/model/Backup.cpp
  src/v20180328/model/AccountRemark.cpp
  src/v20180328/model/ModifyDBInstanceNameResponse.cpp
  src/v20180328/model/AccountPrivilegeModifyInfo.cpp
  src/v20180328/model/MigrateTarget.cpp
  src/v20180328/model/DescribeZonesResponse.cpp
  src/v20180328/model/RenewDBInstanceResponse.cpp
  src/v20180328/model/DBPrivilege.cpp
  src/v20180328/model/DescribeOrdersRequest.cpp
  src/v20180328/model/DeleteAccountRequest.cpp
  src/v20180328/model/InquiryPriceRenewDBInstanceRequest.cpp
  src/v20180328/model/CreateBackupRequest.cpp
  src/v20180328/model/ModifyAccountRemarkRequest.cpp
  src/v20180328/model/InquiryPriceUpgradeDBInstanceResponse.cpp
  src/v20180328/model/DescribeMigrationDetailResponse.cpp
  src/v20180328/model/ModifyMigrationRequest.cpp
  src/v20180328/model/CreateAccountResponse.cpp
  src/v20180328/model/DeleteDBResponse.cpp
  src/v20180328/model/CreateDBResponse.cpp
  src/v20180328/model/RestartDBInstanceResponse.cpp
  src/v20180328/model/DescribeDBInstancesResponse.cpp
  src/v20180328/model/DescribeSlowlogsResponse.cpp
  src/v20180328/model/DBDetail.cpp
  src/v20180328/model/ResetAccountPasswordRequest.cpp
  src/v20180328/model/DescribeSlowlogsRequest.cpp
  src/v20180328/model/ModifyDBInstanceProjectRequest.cpp
  src/v20180328/model/TerminateDBInstanceResponse.cpp
  src/v20180328/model/DescribeAccountsResponse.cpp
  src/v20180328/model/RollbackInstanceRequest.cpp
  src/v20180328/model/UpgradeDBInstanceResponse.cpp
  src/v20180328/model/DescribeRollbackTimeRequest.cpp
  src/v20180328/model/ModifyDBRemarkResponse.cpp
  src/v20180328/model/CreateDBInstancesResponse.cpp
  src/v20180328/model/DeleteAccountResponse.cpp
  )

set(sqlserver_include
    include/tencentcloud/sqlserver
  )

add_library(sqlserver ${LIB_TYPE}
  ${sqlserver_public_header}
  ${sqlserver_public_header_model}
  ${sqlserver_src})

set_target_properties(sqlserver
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sqlserver
  )

target_include_directories(sqlserver
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(sqlserver
  core)

#install(FILES ${sqlserver_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sqlserver/v20180328)
#install(FILES ${sqlserver_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sqlserver/v20180328/model)
install(DIRECTORY ${sqlserver_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS sqlserver
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
