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

set(keewidb_public_header
  include/tencentcloud/keewidb/v20220308/KeewidbClient.h
  )

set(keewidb_public_header_model
  include/tencentcloud/keewidb/v20220308/model/ModifyInstanceParamsResponse.h
  include/tencentcloud/keewidb/v20220308/model/ModifyAutoBackupConfigResponse.h
  include/tencentcloud/keewidb/v20220308/model/TaskInfoDetail.h
  include/tencentcloud/keewidb/v20220308/model/CreateInstancesRequest.h
  include/tencentcloud/keewidb/v20220308/model/ModifyNetworkConfigResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceBinlogsRequest.h
  include/tencentcloud/keewidb/v20220308/model/Inbound.h
  include/tencentcloud/keewidb/v20220308/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeTaskListResponse.h
  include/tencentcloud/keewidb/v20220308/model/ModifyInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/RenewInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/CreateBackupManuallyResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/keewidb/v20220308/model/RedisNodeInfo.h
  include/tencentcloud/keewidb/v20220308/model/ModifyAutoBackupConfigRequest.h
  include/tencentcloud/keewidb/v20220308/model/ProxyNodeInfo.h
  include/tencentcloud/keewidb/v20220308/model/DestroyPostpaidInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/InstanceProxySlowlogDetail.h
  include/tencentcloud/keewidb/v20220308/model/ResetPasswordResponse.h
  include/tencentcloud/keewidb/v20220308/model/ClearInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/RegionConf.h
  include/tencentcloud/keewidb/v20220308/model/RenewInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/CreateBackupManuallyRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceParamRecordsResponse.h
  include/tencentcloud/keewidb/v20220308/model/InstanceMultiParam.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceDealDetailRequest.h
  include/tencentcloud/keewidb/v20220308/model/DestroyPrepaidInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/InstanceIntegerParam.h
  include/tencentcloud/keewidb/v20220308/model/InstanceTagInfo.h
  include/tencentcloud/keewidb/v20220308/model/DestroyPostpaidInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/ModifyInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/NodeInfo.h
  include/tencentcloud/keewidb/v20220308/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeTendisSlowLogResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeProductInfoResponse.h
  include/tencentcloud/keewidb/v20220308/model/BackupInfo.h
  include/tencentcloud/keewidb/v20220308/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/keewidb/v20220308/model/ChangeInstanceMasterRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeProjectSecurityGroupsResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceBackupsResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceReplicasResponse.h
  include/tencentcloud/keewidb/v20220308/model/StartUpInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/InstanceTextParam.h
  include/tencentcloud/keewidb/v20220308/model/InstanceParamHistory.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceParamRecordsRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeTaskListRequest.h
  include/tencentcloud/keewidb/v20220308/model/CreateInstancesResponse.h
  include/tencentcloud/keewidb/v20220308/model/KeeWiDBNode.h
  include/tencentcloud/keewidb/v20220308/model/DescribeConnectionConfigResponse.h
  include/tencentcloud/keewidb/v20220308/model/BinlogInfo.h
  include/tencentcloud/keewidb/v20220308/model/ModifyNetworkConfigRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceParamsRequest.h
  include/tencentcloud/keewidb/v20220308/model/CleanUpInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/ModifyDBInstanceSecurityGroupsRequest.h
  include/tencentcloud/keewidb/v20220308/model/ZoneCapacityConf.h
  include/tencentcloud/keewidb/v20220308/model/Outbound.h
  include/tencentcloud/keewidb/v20220308/model/DescribeAutoBackupConfigResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeProjectSecurityGroupsRequest.h
  include/tencentcloud/keewidb/v20220308/model/SecurityGroup.h
  include/tencentcloud/keewidb/v20220308/model/StartUpInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeMaintenanceWindowResponse.h
  include/tencentcloud/keewidb/v20220308/model/ResetPasswordRequest.h
  include/tencentcloud/keewidb/v20220308/model/ProductConf.h
  include/tencentcloud/keewidb/v20220308/model/ModifyConnectionConfigRequest.h
  include/tencentcloud/keewidb/v20220308/model/TradeDealDetail.h
  include/tencentcloud/keewidb/v20220308/model/ResourceTag.h
  include/tencentcloud/keewidb/v20220308/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/keewidb/v20220308/model/ReplicaGroup.h
  include/tencentcloud/keewidb/v20220308/model/InstanceInfo.h
  include/tencentcloud/keewidb/v20220308/model/CleanUpInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceDealDetailResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstancesRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeTaskInfoResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeAutoBackupConfigRequest.h
  include/tencentcloud/keewidb/v20220308/model/InstanceEnumParam.h
  include/tencentcloud/keewidb/v20220308/model/UpgradeInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstancesResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeTaskInfoRequest.h
  include/tencentcloud/keewidb/v20220308/model/ModifyConnectionConfigResponse.h
  include/tencentcloud/keewidb/v20220308/model/ModifyMaintenanceWindowResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceReplicasRequest.h
  include/tencentcloud/keewidb/v20220308/model/DestroyPrepaidInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/InstanceNodeInfo.h
  include/tencentcloud/keewidb/v20220308/model/TendisSlowLogDetail.h
  include/tencentcloud/keewidb/v20220308/model/DescribeConnectionConfigRequest.h
  include/tencentcloud/keewidb/v20220308/model/ModifyInstanceParamsRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceNodeInfoRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeMaintenanceWindowRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeTendisSlowLogRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeProxySlowLogRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeProxySlowLogResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeProductInfoRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceParamsResponse.h
  include/tencentcloud/keewidb/v20220308/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/keewidb/v20220308/model/ModifyMaintenanceWindowRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceBackupsRequest.h
  include/tencentcloud/keewidb/v20220308/model/ClearInstanceResponse.h
  include/tencentcloud/keewidb/v20220308/model/ChangeInstanceMasterResponse.h
  include/tencentcloud/keewidb/v20220308/model/UpgradeInstanceRequest.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceNodeInfoResponse.h
  include/tencentcloud/keewidb/v20220308/model/InstanceParam.h
  include/tencentcloud/keewidb/v20220308/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/keewidb/v20220308/model/DescribeInstanceBinlogsResponse.h
  )

set(keewidb_src
  src/v20220308/KeewidbClient.cpp
  src/v20220308/model/ModifyInstanceParamsResponse.cpp
  src/v20220308/model/ModifyAutoBackupConfigResponse.cpp
  src/v20220308/model/TaskInfoDetail.cpp
  src/v20220308/model/CreateInstancesRequest.cpp
  src/v20220308/model/ModifyNetworkConfigResponse.cpp
  src/v20220308/model/DescribeInstanceBinlogsRequest.cpp
  src/v20220308/model/Inbound.cpp
  src/v20220308/model/AssociateSecurityGroupsRequest.cpp
  src/v20220308/model/DescribeTaskListResponse.cpp
  src/v20220308/model/ModifyInstanceRequest.cpp
  src/v20220308/model/RenewInstanceResponse.cpp
  src/v20220308/model/CreateBackupManuallyResponse.cpp
  src/v20220308/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20220308/model/RedisNodeInfo.cpp
  src/v20220308/model/ModifyAutoBackupConfigRequest.cpp
  src/v20220308/model/ProxyNodeInfo.cpp
  src/v20220308/model/DestroyPostpaidInstanceRequest.cpp
  src/v20220308/model/InstanceProxySlowlogDetail.cpp
  src/v20220308/model/ResetPasswordResponse.cpp
  src/v20220308/model/ClearInstanceRequest.cpp
  src/v20220308/model/RegionConf.cpp
  src/v20220308/model/RenewInstanceRequest.cpp
  src/v20220308/model/CreateBackupManuallyRequest.cpp
  src/v20220308/model/DescribeInstanceParamRecordsResponse.cpp
  src/v20220308/model/InstanceMultiParam.cpp
  src/v20220308/model/DescribeInstanceDealDetailRequest.cpp
  src/v20220308/model/DestroyPrepaidInstanceRequest.cpp
  src/v20220308/model/InstanceIntegerParam.cpp
  src/v20220308/model/InstanceTagInfo.cpp
  src/v20220308/model/DestroyPostpaidInstanceResponse.cpp
  src/v20220308/model/ModifyInstanceResponse.cpp
  src/v20220308/model/NodeInfo.cpp
  src/v20220308/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20220308/model/DescribeTendisSlowLogResponse.cpp
  src/v20220308/model/DescribeProductInfoResponse.cpp
  src/v20220308/model/BackupInfo.cpp
  src/v20220308/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20220308/model/ChangeInstanceMasterRequest.cpp
  src/v20220308/model/DescribeProjectSecurityGroupsResponse.cpp
  src/v20220308/model/DescribeInstanceBackupsResponse.cpp
  src/v20220308/model/DescribeInstanceReplicasResponse.cpp
  src/v20220308/model/StartUpInstanceResponse.cpp
  src/v20220308/model/InstanceTextParam.cpp
  src/v20220308/model/InstanceParamHistory.cpp
  src/v20220308/model/DescribeInstanceParamRecordsRequest.cpp
  src/v20220308/model/DescribeTaskListRequest.cpp
  src/v20220308/model/CreateInstancesResponse.cpp
  src/v20220308/model/KeeWiDBNode.cpp
  src/v20220308/model/DescribeConnectionConfigResponse.cpp
  src/v20220308/model/BinlogInfo.cpp
  src/v20220308/model/ModifyNetworkConfigRequest.cpp
  src/v20220308/model/DescribeInstanceParamsRequest.cpp
  src/v20220308/model/CleanUpInstanceResponse.cpp
  src/v20220308/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  src/v20220308/model/ZoneCapacityConf.cpp
  src/v20220308/model/Outbound.cpp
  src/v20220308/model/DescribeAutoBackupConfigResponse.cpp
  src/v20220308/model/DescribeProjectSecurityGroupsRequest.cpp
  src/v20220308/model/SecurityGroup.cpp
  src/v20220308/model/StartUpInstanceRequest.cpp
  src/v20220308/model/DescribeMaintenanceWindowResponse.cpp
  src/v20220308/model/ResetPasswordRequest.cpp
  src/v20220308/model/ProductConf.cpp
  src/v20220308/model/ModifyConnectionConfigRequest.cpp
  src/v20220308/model/TradeDealDetail.cpp
  src/v20220308/model/ResourceTag.cpp
  src/v20220308/model/AssociateSecurityGroupsResponse.cpp
  src/v20220308/model/ReplicaGroup.cpp
  src/v20220308/model/InstanceInfo.cpp
  src/v20220308/model/CleanUpInstanceRequest.cpp
  src/v20220308/model/DescribeInstanceDealDetailResponse.cpp
  src/v20220308/model/DescribeInstancesRequest.cpp
  src/v20220308/model/DescribeTaskInfoResponse.cpp
  src/v20220308/model/DescribeAutoBackupConfigRequest.cpp
  src/v20220308/model/InstanceEnumParam.cpp
  src/v20220308/model/UpgradeInstanceResponse.cpp
  src/v20220308/model/DescribeInstancesResponse.cpp
  src/v20220308/model/DescribeTaskInfoRequest.cpp
  src/v20220308/model/ModifyConnectionConfigResponse.cpp
  src/v20220308/model/ModifyMaintenanceWindowResponse.cpp
  src/v20220308/model/DescribeInstanceReplicasRequest.cpp
  src/v20220308/model/DestroyPrepaidInstanceResponse.cpp
  src/v20220308/model/InstanceNodeInfo.cpp
  src/v20220308/model/TendisSlowLogDetail.cpp
  src/v20220308/model/DescribeConnectionConfigRequest.cpp
  src/v20220308/model/ModifyInstanceParamsRequest.cpp
  src/v20220308/model/DescribeInstanceNodeInfoRequest.cpp
  src/v20220308/model/DescribeMaintenanceWindowRequest.cpp
  src/v20220308/model/DescribeTendisSlowLogRequest.cpp
  src/v20220308/model/DescribeProxySlowLogRequest.cpp
  src/v20220308/model/DescribeProxySlowLogResponse.cpp
  src/v20220308/model/DescribeProductInfoRequest.cpp
  src/v20220308/model/DescribeInstanceParamsResponse.cpp
  src/v20220308/model/DisassociateSecurityGroupsRequest.cpp
  src/v20220308/model/ModifyMaintenanceWindowRequest.cpp
  src/v20220308/model/DescribeInstanceBackupsRequest.cpp
  src/v20220308/model/ClearInstanceResponse.cpp
  src/v20220308/model/ChangeInstanceMasterResponse.cpp
  src/v20220308/model/UpgradeInstanceRequest.cpp
  src/v20220308/model/DescribeInstanceNodeInfoResponse.cpp
  src/v20220308/model/InstanceParam.cpp
  src/v20220308/model/DisassociateSecurityGroupsResponse.cpp
  src/v20220308/model/DescribeInstanceBinlogsResponse.cpp
  )

set(keewidb_include
    include/tencentcloud/keewidb
  )

add_library(keewidb ${LIB_TYPE}
  ${keewidb_public_header}
  ${keewidb_public_header_model}
  ${keewidb_src})

set_target_properties(keewidb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}keewidb
  )

target_include_directories(keewidb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(keewidb
  core)

#install(FILES ${keewidb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/keewidb/v20220308)
#install(FILES ${keewidb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/keewidb/v20220308/model)
install(DIRECTORY ${keewidb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS keewidb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
