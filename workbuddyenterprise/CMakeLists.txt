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

set(workbuddyenterprise_public_header
  include/tencentcloud/workbuddyenterprise/v20260709/WorkbuddyenterpriseClient.h
  )

set(workbuddyenterprise_public_header_model
  include/tencentcloud/workbuddyenterprise/v20260709/model/DeleteAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeExpertListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/A2ASkillItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeMessageEventListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/AgentItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/UnbindExternalAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeBuiltinModelListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentVersionResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/BindExternalAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/SkillCounts.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/BindExternalAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentRoutingRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentVersionRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/UnbindExternalAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeSkillListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeConnectorListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentSessionResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/MessageEventMessage.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ExternalAgentInfo.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/A2ASkillInput.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ChatEndpoint.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeBuiltinModelListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ConnectorInfo.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentSessionRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionFromSourceRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentA2AConfigRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/AgentVersionItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionFromSourceResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentA2AConfigResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/TokenUsage.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/Filter.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/BuiltinModel.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeConnectorListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/RoutingItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/MessageEventToolCall.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/A2AConfig.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/MessageEvent.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/MigrateAgentSessionResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DeleteAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ExpertItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeSkillListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeMessageEventListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/SessionItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeExpertListResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ExpertCounts.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionListRequest.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/SkillItem.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ConnectorRefInput.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentRoutingResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentResponse.h
  include/tencentcloud/workbuddyenterprise/v20260709/model/MigrateAgentSessionRequest.h
  )

set(workbuddyenterprise_src
  src/v20260709/WorkbuddyenterpriseClient.cpp
  src/v20260709/model/DeleteAgentRequest.cpp
  src/v20260709/model/DescribeAgentResponse.cpp
  src/v20260709/model/DescribeExpertListRequest.cpp
  src/v20260709/model/A2ASkillItem.cpp
  src/v20260709/model/DescribeMessageEventListResponse.cpp
  src/v20260709/model/AgentItem.cpp
  src/v20260709/model/UnbindExternalAgentRequest.cpp
  src/v20260709/model/DescribeBuiltinModelListResponse.cpp
  src/v20260709/model/CreateAgentVersionResponse.cpp
  src/v20260709/model/DescribeExternalAgentResponse.cpp
  src/v20260709/model/ModifyAgentVersionResponse.cpp
  src/v20260709/model/BindExternalAgentResponse.cpp
  src/v20260709/model/SkillCounts.cpp
  src/v20260709/model/BindExternalAgentRequest.cpp
  src/v20260709/model/ModifyAgentRoutingRequest.cpp
  src/v20260709/model/DescribeExternalAgentListResponse.cpp
  src/v20260709/model/DescribeExternalAgentRequest.cpp
  src/v20260709/model/CreateAgentVersionRequest.cpp
  src/v20260709/model/ModifyAgentVersionRequest.cpp
  src/v20260709/model/CreateAgentRequest.cpp
  src/v20260709/model/DescribeAgentVersionRequest.cpp
  src/v20260709/model/ModifyAgentRequest.cpp
  src/v20260709/model/DescribeAgentSessionResponse.cpp
  src/v20260709/model/CreateAgentResponse.cpp
  src/v20260709/model/DescribeAgentSessionRequest.cpp
  src/v20260709/model/UnbindExternalAgentResponse.cpp
  src/v20260709/model/DescribeSkillListRequest.cpp
  src/v20260709/model/DescribeAgentSessionListResponse.cpp
  src/v20260709/model/DescribeConnectorListResponse.cpp
  src/v20260709/model/DescribeAgentListResponse.cpp
  src/v20260709/model/CreateAgentSessionResponse.cpp
  src/v20260709/model/MessageEventMessage.cpp
  src/v20260709/model/ExternalAgentInfo.cpp
  src/v20260709/model/A2ASkillInput.cpp
  src/v20260709/model/ChatEndpoint.cpp
  src/v20260709/model/DescribeBuiltinModelListRequest.cpp
  src/v20260709/model/ConnectorInfo.cpp
  src/v20260709/model/CreateAgentSessionRequest.cpp
  src/v20260709/model/CreateAgentVersionFromSourceRequest.cpp
  src/v20260709/model/DescribeAgentVersionListResponse.cpp
  src/v20260709/model/DescribeExternalAgentListRequest.cpp
  src/v20260709/model/ModifyAgentA2AConfigRequest.cpp
  src/v20260709/model/AgentVersionItem.cpp
  src/v20260709/model/CreateAgentVersionFromSourceResponse.cpp
  src/v20260709/model/DescribeAgentListRequest.cpp
  src/v20260709/model/ModifyAgentA2AConfigResponse.cpp
  src/v20260709/model/TokenUsage.cpp
  src/v20260709/model/Filter.cpp
  src/v20260709/model/BuiltinModel.cpp
  src/v20260709/model/DescribeConnectorListRequest.cpp
  src/v20260709/model/RoutingItem.cpp
  src/v20260709/model/MessageEventToolCall.cpp
  src/v20260709/model/DescribeAgentVersionResponse.cpp
  src/v20260709/model/A2AConfig.cpp
  src/v20260709/model/DescribeAgentSessionListRequest.cpp
  src/v20260709/model/MessageEvent.cpp
  src/v20260709/model/MigrateAgentSessionResponse.cpp
  src/v20260709/model/DeleteAgentResponse.cpp
  src/v20260709/model/ExpertItem.cpp
  src/v20260709/model/DescribeAgentRequest.cpp
  src/v20260709/model/DescribeSkillListResponse.cpp
  src/v20260709/model/DescribeMessageEventListRequest.cpp
  src/v20260709/model/SessionItem.cpp
  src/v20260709/model/DescribeExpertListResponse.cpp
  src/v20260709/model/ExpertCounts.cpp
  src/v20260709/model/DescribeAgentVersionListRequest.cpp
  src/v20260709/model/SkillItem.cpp
  src/v20260709/model/ConnectorRefInput.cpp
  src/v20260709/model/ModifyAgentRoutingResponse.cpp
  src/v20260709/model/ModifyAgentResponse.cpp
  src/v20260709/model/MigrateAgentSessionRequest.cpp
  )

set(workbuddyenterprise_include
    include/tencentcloud/workbuddyenterprise
  )

add_library(workbuddyenterprise ${LIB_TYPE}
  ${workbuddyenterprise_public_header}
  ${workbuddyenterprise_public_header_model}
  ${workbuddyenterprise_src})

set_target_properties(workbuddyenterprise
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}workbuddyenterprise
  )

target_include_directories(workbuddyenterprise
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(workbuddyenterprise
  core)

#install(FILES ${workbuddyenterprise_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/workbuddyenterprise/v20260709)
#install(FILES ${workbuddyenterprise_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/workbuddyenterprise/v20260709/model)
install(DIRECTORY ${workbuddyenterprise_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS workbuddyenterprise
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
