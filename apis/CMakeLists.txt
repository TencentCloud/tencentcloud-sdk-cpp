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

set(apis_public_header
  include/tencentcloud/apis/v20240801/ApisClient.h
  )

set(apis_public_header_model
  include/tencentcloud/apis/v20240801/model/CreateModelServiceRequest.h
  include/tencentcloud/apis/v20240801/model/AgentAppSecretKeyVO.h
  include/tencentcloud/apis/v20240801/model/McpSecurityRule.h
  include/tencentcloud/apis/v20240801/model/ModifyAgentAppRequest.h
  include/tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h
  include/tencentcloud/apis/v20240801/model/ToolConfigDTO.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppModelServicesRequest.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentCredentialResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeMcpServerResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeModelsResponseVO.h
  include/tencentcloud/apis/v20240801/model/BindMcpSecurityRuleDTO.h
  include/tencentcloud/apis/v20240801/model/AgentAppMcpServerVO.h
  include/tencentcloud/apis/v20240801/model/DeleteModelServiceResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeMcpServerResponseVO.h
  include/tencentcloud/apis/v20240801/model/McpToolAnnotation.h
  include/tencentcloud/apis/v20240801/model/StartEndTime.h
  include/tencentcloud/apis/v20240801/model/DeleteModelResponse.h
  include/tencentcloud/apis/v20240801/model/IDNameVO.h
  include/tencentcloud/apis/v20240801/model/DescribeMcpServersResponseVO.h
  include/tencentcloud/apis/v20240801/model/ModifyModelServiceRequest.h
  include/tencentcloud/apis/v20240801/model/ModifyModelResponse.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppModelServicesRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServicesResponseVO.h
  include/tencentcloud/apis/v20240801/model/DeleteMcpServerResponse.h
  include/tencentcloud/apis/v20240801/model/ResultIDsVO.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentCredentialsRequest.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppResp.h
  include/tencentcloud/apis/v20240801/model/CreateMcpServerResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppsRequest.h
  include/tencentcloud/apis/v20240801/model/ToolConfigVO.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppResponse.h
  include/tencentcloud/apis/v20240801/model/ResultIDVO.h
  include/tencentcloud/apis/v20240801/model/CreateModelRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeModelRequest.h
  include/tencentcloud/apis/v20240801/model/AgentCredentialContentHeaderDTO.h
  include/tencentcloud/apis/v20240801/model/BindMcpSecurityRuleVO.h
  include/tencentcloud/apis/v20240801/model/McpSecurityRulesVO.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentAppModelServicesResponse.h
  include/tencentcloud/apis/v20240801/model/CreateModelResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServicesSort.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppsSortDTO.h
  include/tencentcloud/apis/v20240801/model/DescribeMcpServersRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppsResponse.h
  include/tencentcloud/apis/v20240801/model/ModifyAgentAppResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServiceResponse.h
  include/tencentcloud/apis/v20240801/model/AgentCredentialContentDTO.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentCredentialResponse.h
  include/tencentcloud/apis/v20240801/model/McpUrlObj.h
  include/tencentcloud/apis/v20240801/model/ModifyAgentAppModelServicesRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServiceRequest.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentAppMcpServersRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppResp.h
  include/tencentcloud/apis/v20240801/model/CreateMcpServerRequest.h
  include/tencentcloud/apis/v20240801/model/DeleteModelServiceRequest.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentAppRequest.h
  include/tencentcloud/apis/v20240801/model/DeleteMcpServerRequest.h
  include/tencentcloud/apis/v20240801/model/ModifyModelRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentCredentialResp.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppModelServicesResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppMcpServersResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServicesRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeMcpServerRequest.h
  include/tencentcloud/apis/v20240801/model/TmsConfigDTO.h
  include/tencentcloud/apis/v20240801/model/AgentAppModelServiceDTO.h
  include/tencentcloud/apis/v20240801/model/McpTool.h
  include/tencentcloud/apis/v20240801/model/ModifyAgentAppModelServicesResponse.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentAppModelServicesRequest.h
  include/tencentcloud/apis/v20240801/model/ModifyAgentCredentialResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeModelResponseVO.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentCredentialRequest.h
  include/tencentcloud/apis/v20240801/model/ModifyModelServiceResponse.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppMcpServersRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeMcpServersResponse.h
  include/tencentcloud/apis/v20240801/model/ModifyAgentCredentialRequest.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppsResp.h
  include/tencentcloud/apis/v20240801/model/CreateModelServiceResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentCredentialsResponse.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentAppMcpServersResponse.h
  include/tencentcloud/apis/v20240801/model/PromptModerateConfigDTO.h
  include/tencentcloud/apis/v20240801/model/TargetHostDTO.h
  include/tencentcloud/apis/v20240801/model/DescribeModelsRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentCredentialRequest.h
  include/tencentcloud/apis/v20240801/model/LimitWindowsDTO.h
  include/tencentcloud/apis/v20240801/model/CreateAgentCredentialRequest.h
  include/tencentcloud/apis/v20240801/model/IpConfig.h
  include/tencentcloud/apis/v20240801/model/CreateAgentAppMcpServersResponse.h
  include/tencentcloud/apis/v20240801/model/ModifyMcpServerRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeModelResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppMcpServersRequest.h
  include/tencentcloud/apis/v20240801/model/AgentAppMcpServerDTO.h
  include/tencentcloud/apis/v20240801/model/TargetModelDTO.h
  include/tencentcloud/apis/v20240801/model/TokenLimitConfigDTO.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppMcpServersResp.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServiceResponseVO.h
  include/tencentcloud/apis/v20240801/model/DescribeModelsSort.h
  include/tencentcloud/apis/v20240801/model/PluginConfigDTO.h
  include/tencentcloud/apis/v20240801/model/PluginFormValueDTO.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppRequest.h
  include/tencentcloud/apis/v20240801/model/DeleteAgentAppResponse.h
  include/tencentcloud/apis/v20240801/model/CreateAgentCredentialResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeAgentAppModelServicesResponse.h
  include/tencentcloud/apis/v20240801/model/ModifyMcpServerResponse.h
  include/tencentcloud/apis/v20240801/model/DeleteModelRequest.h
  include/tencentcloud/apis/v20240801/model/DescribeModelsResponse.h
  include/tencentcloud/apis/v20240801/model/DescribeModelServicesResponse.h
  include/tencentcloud/apis/v20240801/model/McpInputOutSchema.h
  )

set(apis_src
  src/v20240801/ApisClient.cpp
  src/v20240801/model/CreateModelServiceRequest.cpp
  src/v20240801/model/AgentAppSecretKeyVO.cpp
  src/v20240801/model/McpSecurityRule.cpp
  src/v20240801/model/ModifyAgentAppRequest.cpp
  src/v20240801/model/InvokeLimitConfigDTO.cpp
  src/v20240801/model/ToolConfigDTO.cpp
  src/v20240801/model/CreateAgentAppResponse.cpp
  src/v20240801/model/DescribeAgentAppModelServicesRequest.cpp
  src/v20240801/model/DeleteAgentCredentialResponse.cpp
  src/v20240801/model/DescribeMcpServerResponse.cpp
  src/v20240801/model/DescribeModelsResponseVO.cpp
  src/v20240801/model/BindMcpSecurityRuleDTO.cpp
  src/v20240801/model/AgentAppMcpServerVO.cpp
  src/v20240801/model/DeleteModelServiceResponse.cpp
  src/v20240801/model/DescribeMcpServerResponseVO.cpp
  src/v20240801/model/McpToolAnnotation.cpp
  src/v20240801/model/StartEndTime.cpp
  src/v20240801/model/DeleteModelResponse.cpp
  src/v20240801/model/IDNameVO.cpp
  src/v20240801/model/DescribeMcpServersResponseVO.cpp
  src/v20240801/model/ModifyModelServiceRequest.cpp
  src/v20240801/model/ModifyModelResponse.cpp
  src/v20240801/model/CreateAgentAppModelServicesRequest.cpp
  src/v20240801/model/DescribeModelServicesResponseVO.cpp
  src/v20240801/model/DeleteMcpServerResponse.cpp
  src/v20240801/model/ResultIDsVO.cpp
  src/v20240801/model/DescribeAgentCredentialsRequest.cpp
  src/v20240801/model/CreateAgentAppResp.cpp
  src/v20240801/model/CreateMcpServerResponse.cpp
  src/v20240801/model/DescribeAgentAppsRequest.cpp
  src/v20240801/model/ToolConfigVO.cpp
  src/v20240801/model/DescribeAgentAppResponse.cpp
  src/v20240801/model/ResultIDVO.cpp
  src/v20240801/model/CreateModelRequest.cpp
  src/v20240801/model/DescribeModelRequest.cpp
  src/v20240801/model/AgentCredentialContentHeaderDTO.cpp
  src/v20240801/model/BindMcpSecurityRuleVO.cpp
  src/v20240801/model/McpSecurityRulesVO.cpp
  src/v20240801/model/DeleteAgentAppModelServicesResponse.cpp
  src/v20240801/model/CreateModelResponse.cpp
  src/v20240801/model/DescribeModelServicesSort.cpp
  src/v20240801/model/DescribeAgentAppsSortDTO.cpp
  src/v20240801/model/DescribeMcpServersRequest.cpp
  src/v20240801/model/DescribeAgentAppsResponse.cpp
  src/v20240801/model/ModifyAgentAppResponse.cpp
  src/v20240801/model/DescribeModelServiceResponse.cpp
  src/v20240801/model/AgentCredentialContentDTO.cpp
  src/v20240801/model/DescribeAgentCredentialResponse.cpp
  src/v20240801/model/McpUrlObj.cpp
  src/v20240801/model/ModifyAgentAppModelServicesRequest.cpp
  src/v20240801/model/DescribeModelServiceRequest.cpp
  src/v20240801/model/DeleteAgentAppMcpServersRequest.cpp
  src/v20240801/model/DescribeAgentAppResp.cpp
  src/v20240801/model/CreateMcpServerRequest.cpp
  src/v20240801/model/DeleteModelServiceRequest.cpp
  src/v20240801/model/DeleteAgentAppRequest.cpp
  src/v20240801/model/DeleteMcpServerRequest.cpp
  src/v20240801/model/ModifyModelRequest.cpp
  src/v20240801/model/DescribeAgentCredentialResp.cpp
  src/v20240801/model/CreateAgentAppModelServicesResponse.cpp
  src/v20240801/model/DescribeAgentAppMcpServersResponse.cpp
  src/v20240801/model/DescribeModelServicesRequest.cpp
  src/v20240801/model/DescribeMcpServerRequest.cpp
  src/v20240801/model/TmsConfigDTO.cpp
  src/v20240801/model/AgentAppModelServiceDTO.cpp
  src/v20240801/model/McpTool.cpp
  src/v20240801/model/ModifyAgentAppModelServicesResponse.cpp
  src/v20240801/model/DeleteAgentAppModelServicesRequest.cpp
  src/v20240801/model/ModifyAgentCredentialResponse.cpp
  src/v20240801/model/DescribeModelResponseVO.cpp
  src/v20240801/model/DeleteAgentCredentialRequest.cpp
  src/v20240801/model/ModifyModelServiceResponse.cpp
  src/v20240801/model/CreateAgentAppMcpServersRequest.cpp
  src/v20240801/model/DescribeMcpServersResponse.cpp
  src/v20240801/model/ModifyAgentCredentialRequest.cpp
  src/v20240801/model/CreateAgentAppRequest.cpp
  src/v20240801/model/DescribeAgentAppsResp.cpp
  src/v20240801/model/CreateModelServiceResponse.cpp
  src/v20240801/model/DescribeAgentCredentialsResponse.cpp
  src/v20240801/model/DeleteAgentAppMcpServersResponse.cpp
  src/v20240801/model/PromptModerateConfigDTO.cpp
  src/v20240801/model/TargetHostDTO.cpp
  src/v20240801/model/DescribeModelsRequest.cpp
  src/v20240801/model/DescribeAgentCredentialRequest.cpp
  src/v20240801/model/LimitWindowsDTO.cpp
  src/v20240801/model/CreateAgentCredentialRequest.cpp
  src/v20240801/model/IpConfig.cpp
  src/v20240801/model/CreateAgentAppMcpServersResponse.cpp
  src/v20240801/model/ModifyMcpServerRequest.cpp
  src/v20240801/model/DescribeModelResponse.cpp
  src/v20240801/model/DescribeAgentAppMcpServersRequest.cpp
  src/v20240801/model/AgentAppMcpServerDTO.cpp
  src/v20240801/model/TargetModelDTO.cpp
  src/v20240801/model/TokenLimitConfigDTO.cpp
  src/v20240801/model/DescribeAgentAppMcpServersResp.cpp
  src/v20240801/model/DescribeModelServiceResponseVO.cpp
  src/v20240801/model/DescribeModelsSort.cpp
  src/v20240801/model/PluginConfigDTO.cpp
  src/v20240801/model/PluginFormValueDTO.cpp
  src/v20240801/model/DescribeAgentAppRequest.cpp
  src/v20240801/model/DeleteAgentAppResponse.cpp
  src/v20240801/model/CreateAgentCredentialResponse.cpp
  src/v20240801/model/DescribeAgentAppModelServicesResponse.cpp
  src/v20240801/model/ModifyMcpServerResponse.cpp
  src/v20240801/model/DeleteModelRequest.cpp
  src/v20240801/model/DescribeModelsResponse.cpp
  src/v20240801/model/DescribeModelServicesResponse.cpp
  src/v20240801/model/McpInputOutSchema.cpp
  )

set(apis_include
    include/tencentcloud/apis
  )

add_library(apis ${LIB_TYPE}
  ${apis_public_header}
  ${apis_public_header_model}
  ${apis_src})

set_target_properties(apis
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}apis
  )

target_include_directories(apis
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(apis
  core)

#install(FILES ${apis_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apis/v20240801)
#install(FILES ${apis_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apis/v20240801/model)
install(DIRECTORY ${apis_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS apis
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
