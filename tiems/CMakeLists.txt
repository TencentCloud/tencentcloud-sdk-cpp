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

set(tiems_public_header
  include/tencentcloud/tiems/v20190416/TiemsClient.h
  )

set(tiems_public_header_model
  include/tencentcloud/tiems/v20190416/model/DisableRsgAsGroupRequest.h
  include/tencentcloud/tiems/v20190416/model/ExposeServiceResponse.h
  include/tencentcloud/tiems/v20190416/model/RsgAsActivityRelatedInstance.h
  include/tencentcloud/tiems/v20190416/model/DeleteJobResponse.h
  include/tencentcloud/tiems/v20190416/model/DeleteRuntimeResponse.h
  include/tencentcloud/tiems/v20190416/model/CreateJobRequest.h
  include/tencentcloud/tiems/v20190416/model/ExposeServiceRequest.h
  include/tencentcloud/tiems/v20190416/model/DescribeServiceConfigsResponse.h
  include/tencentcloud/tiems/v20190416/model/Scaler.h
  include/tencentcloud/tiems/v20190416/model/CreateJobResponse.h
  include/tencentcloud/tiems/v20190416/model/DeleteServiceResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupsResponse.h
  include/tencentcloud/tiems/v20190416/model/UpdateServiceResponse.h
  include/tencentcloud/tiems/v20190416/model/Instance.h
  include/tencentcloud/tiems/v20190416/model/UpdateRsgAsGroupResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeServicesResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeResourceGroupsResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupsRequest.h
  include/tencentcloud/tiems/v20190416/model/DeleteResourceGroupRequest.h
  include/tencentcloud/tiems/v20190416/model/Conditions.h
  include/tencentcloud/tiems/v20190416/model/DescribeServiceConfigsRequest.h
  include/tencentcloud/tiems/v20190416/model/DeleteRsgAsGroupRequest.h
  include/tencentcloud/tiems/v20190416/model/ReplicaInfo.h
  include/tencentcloud/tiems/v20190416/model/DeleteServiceConfigResponse.h
  include/tencentcloud/tiems/v20190416/model/UpdateRsgAsGroupRequest.h
  include/tencentcloud/tiems/v20190416/model/DeleteRsgAsGroupResponse.h
  include/tencentcloud/tiems/v20190416/model/Config.h
  include/tencentcloud/tiems/v20190416/model/Option.h
  include/tencentcloud/tiems/v20190416/model/PredictInput.h
  include/tencentcloud/tiems/v20190416/model/CreateRuntimeResponse.h
  include/tencentcloud/tiems/v20190416/model/Job.h
  include/tencentcloud/tiems/v20190416/model/UpdateJobRequest.h
  include/tencentcloud/tiems/v20190416/model/DescribeResourceGroupsRequest.h
  include/tencentcloud/tiems/v20190416/model/DescribeRuntimesResponse.h
  include/tencentcloud/tiems/v20190416/model/DeleteInstanceResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeInstancesResponse.h
  include/tencentcloud/tiems/v20190416/model/DeleteResourceGroupResponse.h
  include/tencentcloud/tiems/v20190416/model/DisableRsgAsGroupResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeInstancesRequest.h
  include/tencentcloud/tiems/v20190416/model/CreateServiceResponse.h
  include/tencentcloud/tiems/v20190416/model/CreateServiceRequest.h
  include/tencentcloud/tiems/v20190416/model/EnableRsgAsGroupResponse.h
  include/tencentcloud/tiems/v20190416/model/JobStatus.h
  include/tencentcloud/tiems/v20190416/model/UpdateServiceRequest.h
  include/tencentcloud/tiems/v20190416/model/Filter.h
  include/tencentcloud/tiems/v20190416/model/CreateServiceConfigResponse.h
  include/tencentcloud/tiems/v20190416/model/ExposeInfo.h
  include/tencentcloud/tiems/v20190416/model/RsgAsGroup.h
  include/tencentcloud/tiems/v20190416/model/DeleteServiceRequest.h
  include/tencentcloud/tiems/v20190416/model/Runtime.h
  include/tencentcloud/tiems/v20190416/model/CreateRsgAsGroupResponse.h
  include/tencentcloud/tiems/v20190416/model/ServiceStatus.h
  include/tencentcloud/tiems/v20190416/model/RsgAsGroupActivity.h
  include/tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupActivitiesRequest.h
  include/tencentcloud/tiems/v20190416/model/ResourceGroup.h
  include/tencentcloud/tiems/v20190416/model/DeleteJobRequest.h
  include/tencentcloud/tiems/v20190416/model/DeleteInstanceRequest.h
  include/tencentcloud/tiems/v20190416/model/CreateRsgAsGroupRequest.h
  include/tencentcloud/tiems/v20190416/model/DescribeRuntimesRequest.h
  include/tencentcloud/tiems/v20190416/model/EnableRsgAsGroupRequest.h
  include/tencentcloud/tiems/v20190416/model/CreateServiceConfigRequest.h
  include/tencentcloud/tiems/v20190416/model/QuantizationInput.h
  include/tencentcloud/tiems/v20190416/model/UpdateJobResponse.h
  include/tencentcloud/tiems/v20190416/model/CreateRuntimeRequest.h
  include/tencentcloud/tiems/v20190416/model/ModelService.h
  include/tencentcloud/tiems/v20190416/model/DeleteServiceConfigRequest.h
  include/tencentcloud/tiems/v20190416/model/DeleteRuntimeRequest.h
  include/tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupActivitiesResponse.h
  include/tencentcloud/tiems/v20190416/model/DescribeServicesRequest.h
  )

set(tiems_src
  src/v20190416/TiemsClient.cpp
  src/v20190416/model/DisableRsgAsGroupRequest.cpp
  src/v20190416/model/ExposeServiceResponse.cpp
  src/v20190416/model/RsgAsActivityRelatedInstance.cpp
  src/v20190416/model/DeleteJobResponse.cpp
  src/v20190416/model/DeleteRuntimeResponse.cpp
  src/v20190416/model/CreateJobRequest.cpp
  src/v20190416/model/ExposeServiceRequest.cpp
  src/v20190416/model/DescribeServiceConfigsResponse.cpp
  src/v20190416/model/Scaler.cpp
  src/v20190416/model/CreateJobResponse.cpp
  src/v20190416/model/DeleteServiceResponse.cpp
  src/v20190416/model/DescribeRsgAsGroupsResponse.cpp
  src/v20190416/model/UpdateServiceResponse.cpp
  src/v20190416/model/Instance.cpp
  src/v20190416/model/UpdateRsgAsGroupResponse.cpp
  src/v20190416/model/DescribeServicesResponse.cpp
  src/v20190416/model/DescribeResourceGroupsResponse.cpp
  src/v20190416/model/DescribeRsgAsGroupsRequest.cpp
  src/v20190416/model/DeleteResourceGroupRequest.cpp
  src/v20190416/model/Conditions.cpp
  src/v20190416/model/DescribeServiceConfigsRequest.cpp
  src/v20190416/model/DeleteRsgAsGroupRequest.cpp
  src/v20190416/model/ReplicaInfo.cpp
  src/v20190416/model/DeleteServiceConfigResponse.cpp
  src/v20190416/model/UpdateRsgAsGroupRequest.cpp
  src/v20190416/model/DeleteRsgAsGroupResponse.cpp
  src/v20190416/model/Config.cpp
  src/v20190416/model/Option.cpp
  src/v20190416/model/PredictInput.cpp
  src/v20190416/model/CreateRuntimeResponse.cpp
  src/v20190416/model/Job.cpp
  src/v20190416/model/UpdateJobRequest.cpp
  src/v20190416/model/DescribeResourceGroupsRequest.cpp
  src/v20190416/model/DescribeRuntimesResponse.cpp
  src/v20190416/model/DeleteInstanceResponse.cpp
  src/v20190416/model/DescribeInstancesResponse.cpp
  src/v20190416/model/DeleteResourceGroupResponse.cpp
  src/v20190416/model/DisableRsgAsGroupResponse.cpp
  src/v20190416/model/DescribeInstancesRequest.cpp
  src/v20190416/model/CreateServiceResponse.cpp
  src/v20190416/model/CreateServiceRequest.cpp
  src/v20190416/model/EnableRsgAsGroupResponse.cpp
  src/v20190416/model/JobStatus.cpp
  src/v20190416/model/UpdateServiceRequest.cpp
  src/v20190416/model/Filter.cpp
  src/v20190416/model/CreateServiceConfigResponse.cpp
  src/v20190416/model/ExposeInfo.cpp
  src/v20190416/model/RsgAsGroup.cpp
  src/v20190416/model/DeleteServiceRequest.cpp
  src/v20190416/model/Runtime.cpp
  src/v20190416/model/CreateRsgAsGroupResponse.cpp
  src/v20190416/model/ServiceStatus.cpp
  src/v20190416/model/RsgAsGroupActivity.cpp
  src/v20190416/model/DescribeRsgAsGroupActivitiesRequest.cpp
  src/v20190416/model/ResourceGroup.cpp
  src/v20190416/model/DeleteJobRequest.cpp
  src/v20190416/model/DeleteInstanceRequest.cpp
  src/v20190416/model/CreateRsgAsGroupRequest.cpp
  src/v20190416/model/DescribeRuntimesRequest.cpp
  src/v20190416/model/EnableRsgAsGroupRequest.cpp
  src/v20190416/model/CreateServiceConfigRequest.cpp
  src/v20190416/model/QuantizationInput.cpp
  src/v20190416/model/UpdateJobResponse.cpp
  src/v20190416/model/CreateRuntimeRequest.cpp
  src/v20190416/model/ModelService.cpp
  src/v20190416/model/DeleteServiceConfigRequest.cpp
  src/v20190416/model/DeleteRuntimeRequest.cpp
  src/v20190416/model/DescribeRsgAsGroupActivitiesResponse.cpp
  src/v20190416/model/DescribeServicesRequest.cpp
  )

set(tiems_include
    include/tencentcloud/tiems
  )

add_library(tiems ${LIB_TYPE}
  ${tiems_public_header}
  ${tiems_public_header_model}
  ${tiems_src})

set_target_properties(tiems
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tiems
  )

target_include_directories(tiems
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tiems
  core)

#install(FILES ${tiems_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiems/v20190416)
#install(FILES ${tiems_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiems/v20190416/model)
install(DIRECTORY ${tiems_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tiems
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
