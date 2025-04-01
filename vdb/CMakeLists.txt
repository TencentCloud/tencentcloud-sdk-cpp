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

set(vdb_public_header
  include/tencentcloud/vdb/v20230616/VdbClient.h
  )

set(vdb_public_header_model
  include/tencentcloud/vdb/v20230616/model/Outbound.h
  include/tencentcloud/vdb/v20230616/model/Network.h
  include/tencentcloud/vdb/v20230616/model/RecoverInstanceRequest.h
  include/tencentcloud/vdb/v20230616/model/NodeInfo.h
  include/tencentcloud/vdb/v20230616/model/SecurityGroup.h
  include/tencentcloud/vdb/v20230616/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/vdb/v20230616/model/ScaleOutInstanceResponse.h
  include/tencentcloud/vdb/v20230616/model/IsolateInstanceRequest.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstanceNodesRequest.h
  include/tencentcloud/vdb/v20230616/model/CreateInstanceResponse.h
  include/tencentcloud/vdb/v20230616/model/DestroyInstancesRequest.h
  include/tencentcloud/vdb/v20230616/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/vdb/v20230616/model/Inbound.h
  include/tencentcloud/vdb/v20230616/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/vdb/v20230616/model/ModifyInstanceMaintenanceWindowResponse.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstanceNodesResponse.h
  include/tencentcloud/vdb/v20230616/model/Tag.h
  include/tencentcloud/vdb/v20230616/model/CreateInstanceRequest.h
  include/tencentcloud/vdb/v20230616/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/vdb/v20230616/model/InstanceInfo.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstancesResponse.h
  include/tencentcloud/vdb/v20230616/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstancesRequest.h
  include/tencentcloud/vdb/v20230616/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/vdb/v20230616/model/IsolateInstanceResponse.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstanceMaintenanceWindowRequest.h
  include/tencentcloud/vdb/v20230616/model/DescribeInstanceMaintenanceWindowResponse.h
  include/tencentcloud/vdb/v20230616/model/ScaleOutInstanceRequest.h
  include/tencentcloud/vdb/v20230616/model/DestroyInstancesResponse.h
  include/tencentcloud/vdb/v20230616/model/ScaleUpInstanceRequest.h
  include/tencentcloud/vdb/v20230616/model/CreateInstancesComponent.h
  include/tencentcloud/vdb/v20230616/model/RecoverInstanceResponse.h
  include/tencentcloud/vdb/v20230616/model/ModifyInstanceMaintenanceWindowRequest.h
  include/tencentcloud/vdb/v20230616/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/vdb/v20230616/model/ScaleUpInstanceResponse.h
  include/tencentcloud/vdb/v20230616/model/ModifyDBInstanceSecurityGroupsRequest.h
  )

set(vdb_src
  src/v20230616/VdbClient.cpp
  src/v20230616/model/Outbound.cpp
  src/v20230616/model/Network.cpp
  src/v20230616/model/RecoverInstanceRequest.cpp
  src/v20230616/model/NodeInfo.cpp
  src/v20230616/model/SecurityGroup.cpp
  src/v20230616/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20230616/model/ScaleOutInstanceResponse.cpp
  src/v20230616/model/IsolateInstanceRequest.cpp
  src/v20230616/model/DescribeInstanceNodesRequest.cpp
  src/v20230616/model/CreateInstanceResponse.cpp
  src/v20230616/model/DestroyInstancesRequest.cpp
  src/v20230616/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20230616/model/Inbound.cpp
  src/v20230616/model/AssociateSecurityGroupsRequest.cpp
  src/v20230616/model/ModifyInstanceMaintenanceWindowResponse.cpp
  src/v20230616/model/DescribeInstanceNodesResponse.cpp
  src/v20230616/model/Tag.cpp
  src/v20230616/model/CreateInstanceRequest.cpp
  src/v20230616/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20230616/model/InstanceInfo.cpp
  src/v20230616/model/DescribeInstancesResponse.cpp
  src/v20230616/model/AssociateSecurityGroupsResponse.cpp
  src/v20230616/model/DescribeInstancesRequest.cpp
  src/v20230616/model/DisassociateSecurityGroupsRequest.cpp
  src/v20230616/model/IsolateInstanceResponse.cpp
  src/v20230616/model/DescribeInstanceMaintenanceWindowRequest.cpp
  src/v20230616/model/DescribeInstanceMaintenanceWindowResponse.cpp
  src/v20230616/model/ScaleOutInstanceRequest.cpp
  src/v20230616/model/DestroyInstancesResponse.cpp
  src/v20230616/model/ScaleUpInstanceRequest.cpp
  src/v20230616/model/CreateInstancesComponent.cpp
  src/v20230616/model/RecoverInstanceResponse.cpp
  src/v20230616/model/ModifyInstanceMaintenanceWindowRequest.cpp
  src/v20230616/model/DisassociateSecurityGroupsResponse.cpp
  src/v20230616/model/ScaleUpInstanceResponse.cpp
  src/v20230616/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  )

set(vdb_include
    include/tencentcloud/vdb
  )

add_library(vdb ${LIB_TYPE}
  ${vdb_public_header}
  ${vdb_public_header_model}
  ${vdb_src})

set_target_properties(vdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vdb
  )

target_include_directories(vdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vdb
  core)

#install(FILES ${vdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vdb/v20230616)
#install(FILES ${vdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vdb/v20230616/model)
install(DIRECTORY ${vdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
