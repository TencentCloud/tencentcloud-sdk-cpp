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

set(dcdb_public_header
  include/tencentcloud/dcdb/v20180411/DcdbClient.h
  )

set(dcdb_public_header_model
  include/tencentcloud/dcdb/v20180411/model/DescribeUserTasksResponse.h
  include/tencentcloud/dcdb/v20180411/model/InitDCDBInstancesResponse.h
  include/tencentcloud/dcdb/v20180411/model/UpgradeDCDBInstanceResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDatabasesRequest.h
  include/tencentcloud/dcdb/v20180411/model/ParamDesc.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBParametersRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeAccountsRequest.h
  include/tencentcloud/dcdb/v20180411/model/SpecConfig.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceResponse.h
  include/tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/dcdb/v20180411/model/FlushBinlogResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBUpgradePriceResponse.h
  include/tencentcloud/dcdb/v20180411/model/CreateAccountRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBParametersResponse.h
  include/tencentcloud/dcdb/v20180411/model/CloneAccountResponse.h
  include/tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionResponse.h
  include/tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceResponse.h
  include/tencentcloud/dcdb/v20180411/model/ParamConstraint.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectResponse.h
  include/tencentcloud/dcdb/v20180411/model/DatabaseView.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeOrdersResponse.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/dcdb/v20180411/model/ResetAccountPasswordRequest.h
  include/tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesResponse.h
  include/tencentcloud/dcdb/v20180411/model/CloneAccountRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBRenewalPriceRequest.h
  include/tencentcloud/dcdb/v20180411/model/ParamModifyResult.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsResponse.h
  include/tencentcloud/dcdb/v20180411/model/DatabaseFunction.h
  include/tencentcloud/dcdb/v20180411/model/DescribeSqlLogsRequest.h
  include/tencentcloud/dcdb/v20180411/model/ResetAccountPasswordResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBSaleInfoRequest.h
  include/tencentcloud/dcdb/v20180411/model/ExpandShardConfig.h
  include/tencentcloud/dcdb/v20180411/model/RenewDCDBInstanceRequest.h
  include/tencentcloud/dcdb/v20180411/model/ShardZoneChooseInfo.h
  include/tencentcloud/dcdb/v20180411/model/DatabaseTable.h
  include/tencentcloud/dcdb/v20180411/model/Deal.h
  include/tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeShardSpecRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsRequest.h
  include/tencentcloud/dcdb/v20180411/model/DBParamValue.h
  include/tencentcloud/dcdb/v20180411/model/SpecConfigInfo.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBParametersRequest.h
  include/tencentcloud/dcdb/v20180411/model/DCDBInstanceInfo.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsRequest.h
  include/tencentcloud/dcdb/v20180411/model/ZonesInfo.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBParametersResponse.h
  include/tencentcloud/dcdb/v20180411/model/DCDBShardInfo.h
  include/tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesRequest.h
  include/tencentcloud/dcdb/v20180411/model/SecurityGroup.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDatabaseTableRequest.h
  include/tencentcloud/dcdb/v20180411/model/OpenDBExtranetAccessResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsResponse.h
  include/tencentcloud/dcdb/v20180411/model/TableColumn.h
  include/tencentcloud/dcdb/v20180411/model/SecurityGroupBound.h
  include/tencentcloud/dcdb/v20180411/model/SplitShardConfig.h
  include/tencentcloud/dcdb/v20180411/model/RenewDCDBInstanceResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeShardSpecResponse.h
  include/tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBRenewalPriceResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsResponse.h
  include/tencentcloud/dcdb/v20180411/model/Database.h
  include/tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesResponse.h
  include/tencentcloud/dcdb/v20180411/model/ShardInfo.h
  include/tencentcloud/dcdb/v20180411/model/OpenDBExtranetAccessRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBSaleInfoResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeRequest.h
  include/tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessResponse.h
  include/tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeProjectsRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDatabasesResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeOrdersRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesResponse.h
  include/tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessRequest.h
  include/tencentcloud/dcdb/v20180411/model/InitDCDBInstancesRequest.h
  include/tencentcloud/dcdb/v20180411/model/ResourceTag.h
  include/tencentcloud/dcdb/v20180411/model/DescribeSqlLogsResponse.h
  include/tencentcloud/dcdb/v20180411/model/DeleteAccountRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesResponse.h
  include/tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBUpgradePriceRequest.h
  include/tencentcloud/dcdb/v20180411/model/UserTaskInfo.h
  include/tencentcloud/dcdb/v20180411/model/DatabaseProcedure.h
  include/tencentcloud/dcdb/v20180411/model/AddShardConfig.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBSyncModeRequest.h
  include/tencentcloud/dcdb/v20180411/model/DescribeProjectsResponse.h
  include/tencentcloud/dcdb/v20180411/model/CreateAccountResponse.h
  include/tencentcloud/dcdb/v20180411/model/RegionInfo.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsRequest.h
  include/tencentcloud/dcdb/v20180411/model/UpgradeDCDBInstanceRequest.h
  include/tencentcloud/dcdb/v20180411/model/ConstraintRange.h
  include/tencentcloud/dcdb/v20180411/model/LogFileInfo.h
  include/tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/dcdb/v20180411/model/DBAccount.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDatabaseTableResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesRequest.h
  include/tencentcloud/dcdb/v20180411/model/SqlLogItem.h
  include/tencentcloud/dcdb/v20180411/model/DescribeAccountsResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesRequest.h
  include/tencentcloud/dcdb/v20180411/model/Project.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectRequest.h
  include/tencentcloud/dcdb/v20180411/model/FlushBinlogRequest.h
  include/tencentcloud/dcdb/v20180411/model/ModifyDBSyncModeResponse.h
  include/tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/dcdb/v20180411/model/DescribeUserTasksRequest.h
  include/tencentcloud/dcdb/v20180411/model/DeleteAccountResponse.h
  )

set(dcdb_src
  src/v20180411/DcdbClient.cpp
  src/v20180411/model/DescribeUserTasksResponse.cpp
  src/v20180411/model/InitDCDBInstancesResponse.cpp
  src/v20180411/model/UpgradeDCDBInstanceResponse.cpp
  src/v20180411/model/DescribeAccountPrivilegesResponse.cpp
  src/v20180411/model/DescribeDatabasesRequest.cpp
  src/v20180411/model/ParamDesc.cpp
  src/v20180411/model/DescribeDBParametersRequest.cpp
  src/v20180411/model/DescribeAccountsRequest.cpp
  src/v20180411/model/SpecConfig.cpp
  src/v20180411/model/DescribeDCDBPriceResponse.cpp
  src/v20180411/model/AssociateSecurityGroupsRequest.cpp
  src/v20180411/model/FlushBinlogResponse.cpp
  src/v20180411/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20180411/model/DescribeDBSyncModeResponse.cpp
  src/v20180411/model/DescribeProjectSecurityGroupsRequest.cpp
  src/v20180411/model/DescribeDCDBUpgradePriceResponse.cpp
  src/v20180411/model/CreateAccountRequest.cpp
  src/v20180411/model/DescribeDBParametersResponse.cpp
  src/v20180411/model/CloneAccountResponse.cpp
  src/v20180411/model/ModifyAccountDescriptionResponse.cpp
  src/v20180411/model/CreateDCDBInstanceResponse.cpp
  src/v20180411/model/ParamConstraint.cpp
  src/v20180411/model/ModifyDBInstancesProjectResponse.cpp
  src/v20180411/model/DatabaseView.cpp
  src/v20180411/model/DescribeDBLogFilesRequest.cpp
  src/v20180411/model/DescribeOrdersResponse.cpp
  src/v20180411/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20180411/model/ResetAccountPasswordRequest.cpp
  src/v20180411/model/CopyAccountPrivilegesResponse.cpp
  src/v20180411/model/CloneAccountRequest.cpp
  src/v20180411/model/DescribeDCDBRenewalPriceRequest.cpp
  src/v20180411/model/ParamModifyResult.cpp
  src/v20180411/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20180411/model/DescribeDCDBPriceRequest.cpp
  src/v20180411/model/DescribeProjectSecurityGroupsResponse.cpp
  src/v20180411/model/DatabaseFunction.cpp
  src/v20180411/model/DescribeSqlLogsRequest.cpp
  src/v20180411/model/ResetAccountPasswordResponse.cpp
  src/v20180411/model/DescribeDCDBSaleInfoRequest.cpp
  src/v20180411/model/ExpandShardConfig.cpp
  src/v20180411/model/RenewDCDBInstanceRequest.cpp
  src/v20180411/model/ShardZoneChooseInfo.cpp
  src/v20180411/model/DatabaseTable.cpp
  src/v20180411/model/Deal.cpp
  src/v20180411/model/GrantAccountPrivilegesRequest.cpp
  src/v20180411/model/DescribeShardSpecRequest.cpp
  src/v20180411/model/DescribeDCDBShardsRequest.cpp
  src/v20180411/model/DBParamValue.cpp
  src/v20180411/model/SpecConfigInfo.cpp
  src/v20180411/model/ModifyDBParametersRequest.cpp
  src/v20180411/model/DCDBInstanceInfo.cpp
  src/v20180411/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  src/v20180411/model/ZonesInfo.cpp
  src/v20180411/model/ModifyDBParametersResponse.cpp
  src/v20180411/model/DCDBShardInfo.cpp
  src/v20180411/model/CopyAccountPrivilegesRequest.cpp
  src/v20180411/model/SecurityGroup.cpp
  src/v20180411/model/DescribeDatabaseTableRequest.cpp
  src/v20180411/model/OpenDBExtranetAccessResponse.cpp
  src/v20180411/model/DescribeDatabaseObjectsResponse.cpp
  src/v20180411/model/TableColumn.cpp
  src/v20180411/model/SecurityGroupBound.cpp
  src/v20180411/model/SplitShardConfig.cpp
  src/v20180411/model/RenewDCDBInstanceResponse.cpp
  src/v20180411/model/DescribeShardSpecResponse.cpp
  src/v20180411/model/AssociateSecurityGroupsResponse.cpp
  src/v20180411/model/DescribeDCDBRenewalPriceResponse.cpp
  src/v20180411/model/DescribeDCDBShardsResponse.cpp
  src/v20180411/model/Database.cpp
  src/v20180411/model/GrantAccountPrivilegesResponse.cpp
  src/v20180411/model/ShardInfo.cpp
  src/v20180411/model/OpenDBExtranetAccessRequest.cpp
  src/v20180411/model/DescribeDCDBSaleInfoResponse.cpp
  src/v20180411/model/DescribeDBSyncModeRequest.cpp
  src/v20180411/model/CloseDBExtranetAccessResponse.cpp
  src/v20180411/model/ModifyAccountDescriptionRequest.cpp
  src/v20180411/model/DescribeProjectsRequest.cpp
  src/v20180411/model/DescribeDatabasesResponse.cpp
  src/v20180411/model/DescribeOrdersRequest.cpp
  src/v20180411/model/DescribeDBLogFilesResponse.cpp
  src/v20180411/model/CloseDBExtranetAccessRequest.cpp
  src/v20180411/model/InitDCDBInstancesRequest.cpp
  src/v20180411/model/ResourceTag.cpp
  src/v20180411/model/DescribeSqlLogsResponse.cpp
  src/v20180411/model/DeleteAccountRequest.cpp
  src/v20180411/model/DescribeDCDBInstancesResponse.cpp
  src/v20180411/model/CreateDCDBInstanceRequest.cpp
  src/v20180411/model/DescribeDCDBUpgradePriceRequest.cpp
  src/v20180411/model/UserTaskInfo.cpp
  src/v20180411/model/DatabaseProcedure.cpp
  src/v20180411/model/AddShardConfig.cpp
  src/v20180411/model/ModifyDBSyncModeRequest.cpp
  src/v20180411/model/DescribeProjectsResponse.cpp
  src/v20180411/model/CreateAccountResponse.cpp
  src/v20180411/model/RegionInfo.cpp
  src/v20180411/model/DescribeDatabaseObjectsRequest.cpp
  src/v20180411/model/UpgradeDCDBInstanceRequest.cpp
  src/v20180411/model/ConstraintRange.cpp
  src/v20180411/model/LogFileInfo.cpp
  src/v20180411/model/DisassociateSecurityGroupsRequest.cpp
  src/v20180411/model/DBAccount.cpp
  src/v20180411/model/DescribeDatabaseTableResponse.cpp
  src/v20180411/model/DescribeAccountPrivilegesRequest.cpp
  src/v20180411/model/SqlLogItem.cpp
  src/v20180411/model/DescribeAccountsResponse.cpp
  src/v20180411/model/DescribeDCDBInstancesRequest.cpp
  src/v20180411/model/Project.cpp
  src/v20180411/model/ModifyDBInstancesProjectRequest.cpp
  src/v20180411/model/FlushBinlogRequest.cpp
  src/v20180411/model/ModifyDBSyncModeResponse.cpp
  src/v20180411/model/DisassociateSecurityGroupsResponse.cpp
  src/v20180411/model/DescribeUserTasksRequest.cpp
  src/v20180411/model/DeleteAccountResponse.cpp
  )

set(dcdb_include
    include/tencentcloud/dcdb
  )

add_library(dcdb ${LIB_TYPE}
  ${dcdb_public_header}
  ${dcdb_public_header_model}
  ${dcdb_src})

set_target_properties(dcdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dcdb
  )

target_include_directories(dcdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dcdb
  core)

#install(FILES ${dcdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dcdb/v20180411)
#install(FILES ${dcdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dcdb/v20180411/model)
install(DIRECTORY ${dcdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dcdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
