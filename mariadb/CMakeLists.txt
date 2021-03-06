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

set(mariadb_public_header
  include/tencentcloud/mariadb/v20170312/MariadbClient.h
  )

set(mariadb_public_header_model
  include/tencentcloud/mariadb/v20170312/model/CreateDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabasesRequest.h
  include/tencentcloud/mariadb/v20170312/model/ParamDesc.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBParametersRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeRenewalPriceResponse.h
  include/tencentcloud/mariadb/v20170312/model/CreateTmpInstancesRequest.h
  include/tencentcloud/mariadb/v20170312/model/RestartDBInstancesResponse.h
  include/tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeUpgradePriceRequest.h
  include/tencentcloud/mariadb/v20170312/model/FlushBinlogResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageDetailsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstanceSpecsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsRequest.h
  include/tencentcloud/mariadb/v20170312/model/CreateAccountRequest.h
  include/tencentcloud/mariadb/v20170312/model/InitDBInstancesResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBParametersResponse.h
  include/tencentcloud/mariadb/v20170312/model/ResourceUsageMonitorSet.h
  include/tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodRequest.h
  include/tencentcloud/mariadb/v20170312/model/PerformanceMonitorSet.h
  include/tencentcloud/mariadb/v20170312/model/DescribeFlowResponse.h
  include/tencentcloud/mariadb/v20170312/model/CloneAccountResponse.h
  include/tencentcloud/mariadb/v20170312/model/ZoneChooseInfo.h
  include/tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageRequest.h
  include/tencentcloud/mariadb/v20170312/model/ParamConstraint.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectResponse.h
  include/tencentcloud/mariadb/v20170312/model/DBBackupTimeConfig.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeOrdersResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/ResetAccountPasswordRequest.h
  include/tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/CloneAccountRequest.h
  include/tencentcloud/mariadb/v20170312/model/ParamModifyResult.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstancesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeSaleInfoRequest.h
  include/tencentcloud/mariadb/v20170312/model/RenewDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeSqlLogsRequest.h
  include/tencentcloud/mariadb/v20170312/model/ResetAccountPasswordResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstanceSpecsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribePriceRequest.h
  include/tencentcloud/mariadb/v20170312/model/CreateDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeBackupTimeRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeSaleInfoResponse.h
  include/tencentcloud/mariadb/v20170312/model/Deal.h
  include/tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DBParamValue.h
  include/tencentcloud/mariadb/v20170312/model/SpecConfigInfo.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBParametersRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstanceSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/ZonesInfo.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBParametersResponse.h
  include/tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/SecurityGroup.h
  include/tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyBackupTimeRequest.h
  include/tencentcloud/mariadb/v20170312/model/CreateTmpInstancesResponse.h
  include/tencentcloud/mariadb/v20170312/model/UpgradeDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/SecurityGroupBound.h
  include/tencentcloud/mariadb/v20170312/model/DescribeUpgradePriceResponse.h
  include/tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DBInstance.h
  include/tencentcloud/mariadb/v20170312/model/DescribePriceResponse.h
  include/tencentcloud/mariadb/v20170312/model/InitDBInstancesRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyBackupTimeResponse.h
  include/tencentcloud/mariadb/v20170312/model/Database.h
  include/tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameResponse.h
  include/tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceDetailsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeBackupTimeResponse.h
  include/tencentcloud/mariadb/v20170312/model/SlowLogData.h
  include/tencentcloud/mariadb/v20170312/model/RenewDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabasesResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeOrdersRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesResponse.h
  include/tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessRequest.h
  include/tencentcloud/mariadb/v20170312/model/ResourceTag.h
  include/tencentcloud/mariadb/v20170312/model/DescribeSqlLogsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DeleteAccountRequest.h
  include/tencentcloud/mariadb/v20170312/model/InstanceSpec.h
  include/tencentcloud/mariadb/v20170312/model/DescribeFlowRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/CreateAccountResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodResponse.h
  include/tencentcloud/mariadb/v20170312/model/RegionInfo.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstancesResponse.h
  include/tencentcloud/mariadb/v20170312/model/ConstraintRange.h
  include/tencentcloud/mariadb/v20170312/model/DescribeRenewalPriceRequest.h
  include/tencentcloud/mariadb/v20170312/model/LogFileInfo.h
  include/tencentcloud/mariadb/v20170312/model/RestartDBInstancesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageDetailsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DBAccount.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceDetailsResponse.h
  include/tencentcloud/mariadb/v20170312/model/SqlLogItem.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h
  include/tencentcloud/mariadb/v20170312/model/UpgradeDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectRequest.h
  include/tencentcloud/mariadb/v20170312/model/FlushBinlogRequest.h
  include/tencentcloud/mariadb/v20170312/model/MonitorData.h
  include/tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodResponse.h
  include/tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DeleteAccountResponse.h
  )

set(mariadb_src
  src/v20170312/MariadbClient.cpp
  src/v20170312/model/CreateDBInstanceRequest.cpp
  src/v20170312/model/DescribeAccountPrivilegesResponse.cpp
  src/v20170312/model/DescribeDatabasesRequest.cpp
  src/v20170312/model/ParamDesc.cpp
  src/v20170312/model/DescribeDBParametersRequest.cpp
  src/v20170312/model/DescribeAccountsRequest.cpp
  src/v20170312/model/DescribeRenewalPriceResponse.cpp
  src/v20170312/model/CreateTmpInstancesRequest.cpp
  src/v20170312/model/RestartDBInstancesResponse.cpp
  src/v20170312/model/AssociateSecurityGroupsRequest.cpp
  src/v20170312/model/DescribeUpgradePriceRequest.cpp
  src/v20170312/model/FlushBinlogResponse.cpp
  src/v20170312/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20170312/model/DescribeDBResourceUsageDetailsResponse.cpp
  src/v20170312/model/DescribeDBInstanceSpecsResponse.cpp
  src/v20170312/model/DescribeProjectSecurityGroupsRequest.cpp
  src/v20170312/model/DescribeDBSlowLogsRequest.cpp
  src/v20170312/model/CreateAccountRequest.cpp
  src/v20170312/model/InitDBInstancesResponse.cpp
  src/v20170312/model/DescribeDBParametersResponse.cpp
  src/v20170312/model/ResourceUsageMonitorSet.cpp
  src/v20170312/model/ModifyLogFileRetentionPeriodRequest.cpp
  src/v20170312/model/PerformanceMonitorSet.cpp
  src/v20170312/model/DescribeFlowResponse.cpp
  src/v20170312/model/CloneAccountResponse.cpp
  src/v20170312/model/ZoneChooseInfo.cpp
  src/v20170312/model/ModifyAccountDescriptionResponse.cpp
  src/v20170312/model/DescribeDBResourceUsageRequest.cpp
  src/v20170312/model/ParamConstraint.cpp
  src/v20170312/model/ModifyDBInstancesProjectResponse.cpp
  src/v20170312/model/DBBackupTimeConfig.cpp
  src/v20170312/model/DescribeDBLogFilesRequest.cpp
  src/v20170312/model/DescribeDBResourceUsageResponse.cpp
  src/v20170312/model/DescribeOrdersResponse.cpp
  src/v20170312/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20170312/model/ResetAccountPasswordRequest.cpp
  src/v20170312/model/CopyAccountPrivilegesResponse.cpp
  src/v20170312/model/CloneAccountRequest.cpp
  src/v20170312/model/ParamModifyResult.cpp
  src/v20170312/model/DescribeDBInstancesRequest.cpp
  src/v20170312/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20170312/model/DescribeSaleInfoRequest.cpp
  src/v20170312/model/RenewDBInstanceRequest.cpp
  src/v20170312/model/DescribeProjectSecurityGroupsResponse.cpp
  src/v20170312/model/DescribeSqlLogsRequest.cpp
  src/v20170312/model/ResetAccountPasswordResponse.cpp
  src/v20170312/model/DescribeDBInstanceSpecsRequest.cpp
  src/v20170312/model/DescribePriceRequest.cpp
  src/v20170312/model/CreateDBInstanceResponse.cpp
  src/v20170312/model/DescribeBackupTimeRequest.cpp
  src/v20170312/model/DescribeSaleInfoResponse.cpp
  src/v20170312/model/Deal.cpp
  src/v20170312/model/GrantAccountPrivilegesRequest.cpp
  src/v20170312/model/DBParamValue.cpp
  src/v20170312/model/SpecConfigInfo.cpp
  src/v20170312/model/ModifyDBParametersRequest.cpp
  src/v20170312/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  src/v20170312/model/ZonesInfo.cpp
  src/v20170312/model/ModifyDBParametersResponse.cpp
  src/v20170312/model/CopyAccountPrivilegesRequest.cpp
  src/v20170312/model/SecurityGroup.cpp
  src/v20170312/model/OpenDBExtranetAccessResponse.cpp
  src/v20170312/model/ModifyDBInstanceNameRequest.cpp
  src/v20170312/model/ModifyBackupTimeRequest.cpp
  src/v20170312/model/CreateTmpInstancesResponse.cpp
  src/v20170312/model/UpgradeDBInstanceRequest.cpp
  src/v20170312/model/SecurityGroupBound.cpp
  src/v20170312/model/DescribeUpgradePriceResponse.cpp
  src/v20170312/model/AssociateSecurityGroupsResponse.cpp
  src/v20170312/model/DBInstance.cpp
  src/v20170312/model/DescribePriceResponse.cpp
  src/v20170312/model/InitDBInstancesRequest.cpp
  src/v20170312/model/ModifyBackupTimeResponse.cpp
  src/v20170312/model/Database.cpp
  src/v20170312/model/GrantAccountPrivilegesResponse.cpp
  src/v20170312/model/OpenDBExtranetAccessRequest.cpp
  src/v20170312/model/ModifyDBInstanceNameResponse.cpp
  src/v20170312/model/CloseDBExtranetAccessResponse.cpp
  src/v20170312/model/ModifyAccountDescriptionRequest.cpp
  src/v20170312/model/DescribeDBPerformanceDetailsRequest.cpp
  src/v20170312/model/DescribeBackupTimeResponse.cpp
  src/v20170312/model/SlowLogData.cpp
  src/v20170312/model/RenewDBInstanceResponse.cpp
  src/v20170312/model/DescribeDatabasesResponse.cpp
  src/v20170312/model/DescribeOrdersRequest.cpp
  src/v20170312/model/DescribeDBLogFilesResponse.cpp
  src/v20170312/model/CloseDBExtranetAccessRequest.cpp
  src/v20170312/model/ResourceTag.cpp
  src/v20170312/model/DescribeSqlLogsResponse.cpp
  src/v20170312/model/DeleteAccountRequest.cpp
  src/v20170312/model/InstanceSpec.cpp
  src/v20170312/model/DescribeFlowRequest.cpp
  src/v20170312/model/DescribeDBPerformanceResponse.cpp
  src/v20170312/model/CreateAccountResponse.cpp
  src/v20170312/model/DescribeLogFileRetentionPeriodResponse.cpp
  src/v20170312/model/RegionInfo.cpp
  src/v20170312/model/DescribeDBInstancesResponse.cpp
  src/v20170312/model/ConstraintRange.cpp
  src/v20170312/model/DescribeRenewalPriceRequest.cpp
  src/v20170312/model/LogFileInfo.cpp
  src/v20170312/model/RestartDBInstancesRequest.cpp
  src/v20170312/model/DescribeDBResourceUsageDetailsRequest.cpp
  src/v20170312/model/DisassociateSecurityGroupsRequest.cpp
  src/v20170312/model/DBAccount.cpp
  src/v20170312/model/DescribeAccountPrivilegesRequest.cpp
  src/v20170312/model/DescribeDBPerformanceDetailsResponse.cpp
  src/v20170312/model/SqlLogItem.cpp
  src/v20170312/model/DescribeAccountsResponse.cpp
  src/v20170312/model/DescribeDBSlowLogsResponse.cpp
  src/v20170312/model/UpgradeDBInstanceResponse.cpp
  src/v20170312/model/DescribeLogFileRetentionPeriodRequest.cpp
  src/v20170312/model/ModifyDBInstancesProjectRequest.cpp
  src/v20170312/model/FlushBinlogRequest.cpp
  src/v20170312/model/MonitorData.cpp
  src/v20170312/model/ModifyLogFileRetentionPeriodResponse.cpp
  src/v20170312/model/DisassociateSecurityGroupsResponse.cpp
  src/v20170312/model/DescribeDBPerformanceRequest.cpp
  src/v20170312/model/DeleteAccountResponse.cpp
  )

set(mariadb_include
    include/tencentcloud/mariadb
  )

add_library(mariadb ${LIB_TYPE}
  ${mariadb_public_header}
  ${mariadb_public_header_model}
  ${mariadb_src})

set_target_properties(mariadb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mariadb
  )

target_include_directories(mariadb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mariadb
  core)

#install(FILES ${mariadb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mariadb/v20170312)
#install(FILES ${mariadb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mariadb/v20170312/model)
install(DIRECTORY ${mariadb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mariadb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
