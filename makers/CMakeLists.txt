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

set(makers_public_header
  include/tencentcloud/makers/v20261113/MakersClient.h
  )

set(makers_public_header_model
  include/tencentcloud/makers/v20261113/model/ProjectFilter.h
  include/tencentcloud/makers/v20261113/model/ProjectDeployment.h
  include/tencentcloud/makers/v20261113/model/DeleteProjectCustomDomainsRequest.h
  include/tencentcloud/makers/v20261113/model/DeleteProjectRequest.h
  include/tencentcloud/makers/v20261113/model/CreateDeploymentRequest.h
  include/tencentcloud/makers/v20261113/model/DescribeDeploymentsRequest.h
  include/tencentcloud/makers/v20261113/model/Environment.h
  include/tencentcloud/makers/v20261113/model/DescribeProjectsRequest.h
  include/tencentcloud/makers/v20261113/model/CosCredentials.h
  include/tencentcloud/makers/v20261113/model/CustomDomainItem.h
  include/tencentcloud/makers/v20261113/model/DescribeEnvironmentsResponse.h
  include/tencentcloud/makers/v20261113/model/ModifyZoneCustomDomainEnvRequest.h
  include/tencentcloud/makers/v20261113/model/DescribeProjectsResponse.h
  include/tencentcloud/makers/v20261113/model/OwnershipVerification.h
  include/tencentcloud/makers/v20261113/model/ModifyProjectEnvsRequest.h
  include/tencentcloud/makers/v20261113/model/CustomDomainInput.h
  include/tencentcloud/makers/v20261113/model/DeleteProjectEnvsRequest.h
  include/tencentcloud/makers/v20261113/model/DeleteProjectEnvsResponse.h
  include/tencentcloud/makers/v20261113/model/ModifyProjectResponse.h
  include/tencentcloud/makers/v20261113/model/NsVerification.h
  include/tencentcloud/makers/v20261113/model/FileVerification.h
  include/tencentcloud/makers/v20261113/model/Deployment.h
  include/tencentcloud/makers/v20261113/model/DeleteProjectCustomDomainsResponse.h
  include/tencentcloud/makers/v20261113/model/DescribeProjectEnvsResponse.h
  include/tencentcloud/makers/v20261113/model/DescribeDeploymentLogRequest.h
  include/tencentcloud/makers/v20261113/model/DescribeDeploymentLogResponse.h
  include/tencentcloud/makers/v20261113/model/SwitchConfig.h
  include/tencentcloud/makers/v20261113/model/DescribeZoneCustomDomainsResponse.h
  include/tencentcloud/makers/v20261113/model/ModifyProjectRequest.h
  include/tencentcloud/makers/v20261113/model/ModifyZoneCustomDomainEnvResponse.h
  include/tencentcloud/makers/v20261113/model/EnvironmentEnvVar.h
  include/tencentcloud/makers/v20261113/model/DescribeCosTempTokenResponse.h
  include/tencentcloud/makers/v20261113/model/Project.h
  include/tencentcloud/makers/v20261113/model/CreateProjectResponse.h
  include/tencentcloud/makers/v20261113/model/CreateZoneCustomDomainResponse.h
  include/tencentcloud/makers/v20261113/model/DnsVerification.h
  include/tencentcloud/makers/v20261113/model/DeleteProjectResponse.h
  include/tencentcloud/makers/v20261113/model/DescribeDeploymentsResponse.h
  include/tencentcloud/makers/v20261113/model/DescribeZoneCustomDomainsRequest.h
  include/tencentcloud/makers/v20261113/model/DescribeProjectEnvsRequest.h
  include/tencentcloud/makers/v20261113/model/CreateDeploymentResponse.h
  include/tencentcloud/makers/v20261113/model/Regions.h
  include/tencentcloud/makers/v20261113/model/DeploymentFilter.h
  include/tencentcloud/makers/v20261113/model/ZoneDomain.h
  include/tencentcloud/makers/v20261113/model/HstsConfig.h
  include/tencentcloud/makers/v20261113/model/ProjectEnvVar.h
  include/tencentcloud/makers/v20261113/model/CreateZoneCustomDomainRequest.h
  include/tencentcloud/makers/v20261113/model/DescribeEnvironmentsRequest.h
  include/tencentcloud/makers/v20261113/model/ForceRedirectConfig.h
  include/tencentcloud/makers/v20261113/model/ModifyProjectEnvsResponse.h
  include/tencentcloud/makers/v20261113/model/EnvVar.h
  include/tencentcloud/makers/v20261113/model/DescribeCosTempTokenRequest.h
  include/tencentcloud/makers/v20261113/model/CreateProjectRequest.h
  )

set(makers_src
  src/v20261113/MakersClient.cpp
  src/v20261113/model/ProjectFilter.cpp
  src/v20261113/model/ProjectDeployment.cpp
  src/v20261113/model/DeleteProjectCustomDomainsRequest.cpp
  src/v20261113/model/DeleteProjectRequest.cpp
  src/v20261113/model/CreateDeploymentRequest.cpp
  src/v20261113/model/DescribeDeploymentsRequest.cpp
  src/v20261113/model/Environment.cpp
  src/v20261113/model/DescribeProjectsRequest.cpp
  src/v20261113/model/CosCredentials.cpp
  src/v20261113/model/CustomDomainItem.cpp
  src/v20261113/model/DescribeEnvironmentsResponse.cpp
  src/v20261113/model/ModifyZoneCustomDomainEnvRequest.cpp
  src/v20261113/model/DescribeProjectsResponse.cpp
  src/v20261113/model/OwnershipVerification.cpp
  src/v20261113/model/ModifyProjectEnvsRequest.cpp
  src/v20261113/model/CustomDomainInput.cpp
  src/v20261113/model/DeleteProjectEnvsRequest.cpp
  src/v20261113/model/DeleteProjectEnvsResponse.cpp
  src/v20261113/model/ModifyProjectResponse.cpp
  src/v20261113/model/NsVerification.cpp
  src/v20261113/model/FileVerification.cpp
  src/v20261113/model/Deployment.cpp
  src/v20261113/model/DeleteProjectCustomDomainsResponse.cpp
  src/v20261113/model/DescribeProjectEnvsResponse.cpp
  src/v20261113/model/DescribeDeploymentLogRequest.cpp
  src/v20261113/model/DescribeDeploymentLogResponse.cpp
  src/v20261113/model/SwitchConfig.cpp
  src/v20261113/model/DescribeZoneCustomDomainsResponse.cpp
  src/v20261113/model/ModifyProjectRequest.cpp
  src/v20261113/model/ModifyZoneCustomDomainEnvResponse.cpp
  src/v20261113/model/EnvironmentEnvVar.cpp
  src/v20261113/model/DescribeCosTempTokenResponse.cpp
  src/v20261113/model/Project.cpp
  src/v20261113/model/CreateProjectResponse.cpp
  src/v20261113/model/CreateZoneCustomDomainResponse.cpp
  src/v20261113/model/DnsVerification.cpp
  src/v20261113/model/DeleteProjectResponse.cpp
  src/v20261113/model/DescribeDeploymentsResponse.cpp
  src/v20261113/model/DescribeZoneCustomDomainsRequest.cpp
  src/v20261113/model/DescribeProjectEnvsRequest.cpp
  src/v20261113/model/CreateDeploymentResponse.cpp
  src/v20261113/model/Regions.cpp
  src/v20261113/model/DeploymentFilter.cpp
  src/v20261113/model/ZoneDomain.cpp
  src/v20261113/model/HstsConfig.cpp
  src/v20261113/model/ProjectEnvVar.cpp
  src/v20261113/model/CreateZoneCustomDomainRequest.cpp
  src/v20261113/model/DescribeEnvironmentsRequest.cpp
  src/v20261113/model/ForceRedirectConfig.cpp
  src/v20261113/model/ModifyProjectEnvsResponse.cpp
  src/v20261113/model/EnvVar.cpp
  src/v20261113/model/DescribeCosTempTokenRequest.cpp
  src/v20261113/model/CreateProjectRequest.cpp
  )

set(makers_include
    include/tencentcloud/makers
  )

add_library(makers ${LIB_TYPE}
  ${makers_public_header}
  ${makers_public_header_model}
  ${makers_src})

set_target_properties(makers
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}makers
  )

target_include_directories(makers
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(makers
  core)

#install(FILES ${makers_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/makers/v20261113)
#install(FILES ${makers_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/makers/v20261113/model)
install(DIRECTORY ${makers_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS makers
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
