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

set(ags_public_header
  include/tencentcloud/ags/v20250920/AgsClient.h
  )

set(ags_public_header_model
  include/tencentcloud/ags/v20250920/model/PauseSandboxInstanceResponse.h
  include/tencentcloud/ags/v20250920/model/CosStorageSource.h
  include/tencentcloud/ags/v20250920/model/StartSandboxInstanceRequest.h
  include/tencentcloud/ags/v20250920/model/SandboxInstance.h
  include/tencentcloud/ags/v20250920/model/StopSandboxInstanceRequest.h
  include/tencentcloud/ags/v20250920/model/DescribeSandboxToolListResponse.h
  include/tencentcloud/ags/v20250920/model/CreateAPIKeyResponse.h
  include/tencentcloud/ags/v20250920/model/DescribeSandboxToolListRequest.h
  include/tencentcloud/ags/v20250920/model/CreateSandboxToolRequest.h
  include/tencentcloud/ags/v20250920/model/HttpGetAction.h
  include/tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskResponse.h
  include/tencentcloud/ags/v20250920/model/ResumeSandboxInstanceRequest.h
  include/tencentcloud/ags/v20250920/model/DeleteAPIKeyResponse.h
  include/tencentcloud/ags/v20250920/model/APIKeyInfo.h
  include/tencentcloud/ags/v20250920/model/UpdateSandboxInstanceResponse.h
  include/tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskRequest.h
  include/tencentcloud/ags/v20250920/model/StorageSource.h
  include/tencentcloud/ags/v20250920/model/ResourceConfiguration.h
  include/tencentcloud/ags/v20250920/model/CreateSandboxToolResponse.h
  include/tencentcloud/ags/v20250920/model/CreateAPIKeyRequest.h
  include/tencentcloud/ags/v20250920/model/NetworkConfiguration.h
  include/tencentcloud/ags/v20250920/model/DeleteSandboxToolResponse.h
  include/tencentcloud/ags/v20250920/model/PortConfiguration.h
  include/tencentcloud/ags/v20250920/model/SandboxTool.h
  include/tencentcloud/ags/v20250920/model/MountOption.h
  include/tencentcloud/ags/v20250920/model/Filter.h
  include/tencentcloud/ags/v20250920/model/StartSandboxInstanceResponse.h
  include/tencentcloud/ags/v20250920/model/CustomConfiguration.h
  include/tencentcloud/ags/v20250920/model/ImageStorageSource.h
  include/tencentcloud/ags/v20250920/model/AcquireSandboxInstanceTokenRequest.h
  include/tencentcloud/ags/v20250920/model/PauseSandboxInstanceRequest.h
  include/tencentcloud/ags/v20250920/model/DescribeAPIKeyListResponse.h
  include/tencentcloud/ags/v20250920/model/CreatePreCacheImageTaskResponse.h
  include/tencentcloud/ags/v20250920/model/DescribeSandboxInstanceListRequest.h
  include/tencentcloud/ags/v20250920/model/CustomConfigurationDetail.h
  include/tencentcloud/ags/v20250920/model/DescribeAPIKeyListRequest.h
  include/tencentcloud/ags/v20250920/model/UpdateSandboxInstanceRequest.h
  include/tencentcloud/ags/v20250920/model/DeleteSandboxToolRequest.h
  include/tencentcloud/ags/v20250920/model/UpdateSandboxToolResponse.h
  include/tencentcloud/ags/v20250920/model/VPCConfig.h
  include/tencentcloud/ags/v20250920/model/DeleteAPIKeyRequest.h
  include/tencentcloud/ags/v20250920/model/AcquireSandboxInstanceTokenResponse.h
  include/tencentcloud/ags/v20250920/model/ProbeConfiguration.h
  include/tencentcloud/ags/v20250920/model/CreatePreCacheImageTaskRequest.h
  include/tencentcloud/ags/v20250920/model/Tag.h
  include/tencentcloud/ags/v20250920/model/UpdateSandboxToolRequest.h
  include/tencentcloud/ags/v20250920/model/ResumeSandboxInstanceResponse.h
  include/tencentcloud/ags/v20250920/model/StorageMount.h
  include/tencentcloud/ags/v20250920/model/EnvVar.h
  include/tencentcloud/ags/v20250920/model/DescribeSandboxInstanceListResponse.h
  include/tencentcloud/ags/v20250920/model/StopSandboxInstanceResponse.h
  )

set(ags_src
  src/v20250920/AgsClient.cpp
  src/v20250920/model/PauseSandboxInstanceResponse.cpp
  src/v20250920/model/CosStorageSource.cpp
  src/v20250920/model/StartSandboxInstanceRequest.cpp
  src/v20250920/model/SandboxInstance.cpp
  src/v20250920/model/StopSandboxInstanceRequest.cpp
  src/v20250920/model/DescribeSandboxToolListResponse.cpp
  src/v20250920/model/CreateAPIKeyResponse.cpp
  src/v20250920/model/DescribeSandboxToolListRequest.cpp
  src/v20250920/model/CreateSandboxToolRequest.cpp
  src/v20250920/model/HttpGetAction.cpp
  src/v20250920/model/DescribePreCacheImageTaskResponse.cpp
  src/v20250920/model/ResumeSandboxInstanceRequest.cpp
  src/v20250920/model/DeleteAPIKeyResponse.cpp
  src/v20250920/model/APIKeyInfo.cpp
  src/v20250920/model/UpdateSandboxInstanceResponse.cpp
  src/v20250920/model/DescribePreCacheImageTaskRequest.cpp
  src/v20250920/model/StorageSource.cpp
  src/v20250920/model/ResourceConfiguration.cpp
  src/v20250920/model/CreateSandboxToolResponse.cpp
  src/v20250920/model/CreateAPIKeyRequest.cpp
  src/v20250920/model/NetworkConfiguration.cpp
  src/v20250920/model/DeleteSandboxToolResponse.cpp
  src/v20250920/model/PortConfiguration.cpp
  src/v20250920/model/SandboxTool.cpp
  src/v20250920/model/MountOption.cpp
  src/v20250920/model/Filter.cpp
  src/v20250920/model/StartSandboxInstanceResponse.cpp
  src/v20250920/model/CustomConfiguration.cpp
  src/v20250920/model/ImageStorageSource.cpp
  src/v20250920/model/AcquireSandboxInstanceTokenRequest.cpp
  src/v20250920/model/PauseSandboxInstanceRequest.cpp
  src/v20250920/model/DescribeAPIKeyListResponse.cpp
  src/v20250920/model/CreatePreCacheImageTaskResponse.cpp
  src/v20250920/model/DescribeSandboxInstanceListRequest.cpp
  src/v20250920/model/CustomConfigurationDetail.cpp
  src/v20250920/model/DescribeAPIKeyListRequest.cpp
  src/v20250920/model/UpdateSandboxInstanceRequest.cpp
  src/v20250920/model/DeleteSandboxToolRequest.cpp
  src/v20250920/model/UpdateSandboxToolResponse.cpp
  src/v20250920/model/VPCConfig.cpp
  src/v20250920/model/DeleteAPIKeyRequest.cpp
  src/v20250920/model/AcquireSandboxInstanceTokenResponse.cpp
  src/v20250920/model/ProbeConfiguration.cpp
  src/v20250920/model/CreatePreCacheImageTaskRequest.cpp
  src/v20250920/model/Tag.cpp
  src/v20250920/model/UpdateSandboxToolRequest.cpp
  src/v20250920/model/ResumeSandboxInstanceResponse.cpp
  src/v20250920/model/StorageMount.cpp
  src/v20250920/model/EnvVar.cpp
  src/v20250920/model/DescribeSandboxInstanceListResponse.cpp
  src/v20250920/model/StopSandboxInstanceResponse.cpp
  )

set(ags_include
    include/tencentcloud/ags
  )

add_library(ags ${LIB_TYPE}
  ${ags_public_header}
  ${ags_public_header_model}
  ${ags_src})

set_target_properties(ags
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ags
  )

target_include_directories(ags
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ags
  core)

#install(FILES ${ags_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ags/v20250920)
#install(FILES ${ags_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ags/v20250920/model)
install(DIRECTORY ${ags_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ags
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
