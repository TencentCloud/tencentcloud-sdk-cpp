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

set(tdai_public_header
  include/tencentcloud/tdai/v20250717/TdaiClient.h
  )

set(tdai_public_header_model
  include/tencentcloud/tdai/v20250717/model/RemoveChatRequest.h
  include/tencentcloud/tdai/v20250717/model/SqlAgentParameter.h
  include/tencentcloud/tdai/v20250717/model/AgentDutyTask.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentDutyTaskDetailRequest.h
  include/tencentcloud/tdai/v20250717/model/UploadDelta.h
  include/tencentcloud/tdai/v20250717/model/DescribeChatDetailRequest.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentsRequest.h
  include/tencentcloud/tdai/v20250717/model/DescribeChatsRequest.h
  include/tencentcloud/tdai/v20250717/model/ModifyChatTitleResponse.h
  include/tencentcloud/tdai/v20250717/model/CreateAgentInstanceRequest.h
  include/tencentcloud/tdai/v20250717/model/ModifyChatTitleRequest.h
  include/tencentcloud/tdai/v20250717/model/UploadChoice.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentDutyTasksResponse.h
  include/tencentcloud/tdai/v20250717/model/Parameter.h
  include/tencentcloud/tdai/v20250717/model/RecoverAgentInstanceResponse.h
  include/tencentcloud/tdai/v20250717/model/InstanceInfos.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentsResponse.h
  include/tencentcloud/tdai/v20250717/model/CreateChatCompletionRequest.h
  include/tencentcloud/tdai/v20250717/model/DescribeReportUrlResponse.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentInstancesRequest.h
  include/tencentcloud/tdai/v20250717/model/IsolateAgentInstanceResponse.h
  include/tencentcloud/tdai/v20250717/model/PauseAgentWorkRequest.h
  include/tencentcloud/tdai/v20250717/model/TagItem.h
  include/tencentcloud/tdai/v20250717/model/ExtraInfo.h
  include/tencentcloud/tdai/v20250717/model/CreateAgentInstanceResponse.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentDutyTasksRequest.h
  include/tencentcloud/tdai/v20250717/model/PauseAgentWorkResponse.h
  include/tencentcloud/tdai/v20250717/model/DescribeChatDetailResponse.h
  include/tencentcloud/tdai/v20250717/model/TerminateAgentInstanceResponse.h
  include/tencentcloud/tdai/v20250717/model/ModifyAgentInstanceParametersResponse.h
  include/tencentcloud/tdai/v20250717/model/IsolateAgentInstanceRequest.h
  include/tencentcloud/tdai/v20250717/model/TagFilter.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentInstanceRequest.h
  include/tencentcloud/tdai/v20250717/model/ModifyAgentInstanceParametersRequest.h
  include/tencentcloud/tdai/v20250717/model/ContinueAgentWorkResponse.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentInstancesResponse.h
  include/tencentcloud/tdai/v20250717/model/StartAgentTaskRequest.h
  include/tencentcloud/tdai/v20250717/model/CreateChatCompletionRes.h
  include/tencentcloud/tdai/v20250717/model/RecoverAgentInstanceRequest.h
  include/tencentcloud/tdai/v20250717/model/CodeRepo.h
  include/tencentcloud/tdai/v20250717/model/ContinueAgentWorkRequest.h
  include/tencentcloud/tdai/v20250717/model/ChatBrief.h
  include/tencentcloud/tdai/v20250717/model/DescribeChatsResponse.h
  include/tencentcloud/tdai/v20250717/model/Agent.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentInstanceResponse.h
  include/tencentcloud/tdai/v20250717/model/CreateChatCompletionResponse.h
  include/tencentcloud/tdai/v20250717/model/DescribeReportUrlRequest.h
  include/tencentcloud/tdai/v20250717/model/DescribeAgentDutyTaskDetailResponse.h
  include/tencentcloud/tdai/v20250717/model/AgentInstance.h
  include/tencentcloud/tdai/v20250717/model/ChatDetail.h
  include/tencentcloud/tdai/v20250717/model/RemoveChatResponse.h
  include/tencentcloud/tdai/v20250717/model/TerminateAgentInstanceRequest.h
  include/tencentcloud/tdai/v20250717/model/StartAgentTaskResponse.h
  )

set(tdai_src
  src/v20250717/TdaiClient.cpp
  src/v20250717/model/RemoveChatRequest.cpp
  src/v20250717/model/SqlAgentParameter.cpp
  src/v20250717/model/AgentDutyTask.cpp
  src/v20250717/model/DescribeAgentDutyTaskDetailRequest.cpp
  src/v20250717/model/UploadDelta.cpp
  src/v20250717/model/DescribeChatDetailRequest.cpp
  src/v20250717/model/DescribeAgentsRequest.cpp
  src/v20250717/model/DescribeChatsRequest.cpp
  src/v20250717/model/ModifyChatTitleResponse.cpp
  src/v20250717/model/CreateAgentInstanceRequest.cpp
  src/v20250717/model/ModifyChatTitleRequest.cpp
  src/v20250717/model/UploadChoice.cpp
  src/v20250717/model/DescribeAgentDutyTasksResponse.cpp
  src/v20250717/model/Parameter.cpp
  src/v20250717/model/RecoverAgentInstanceResponse.cpp
  src/v20250717/model/InstanceInfos.cpp
  src/v20250717/model/DescribeAgentsResponse.cpp
  src/v20250717/model/CreateChatCompletionRequest.cpp
  src/v20250717/model/DescribeReportUrlResponse.cpp
  src/v20250717/model/DescribeAgentInstancesRequest.cpp
  src/v20250717/model/IsolateAgentInstanceResponse.cpp
  src/v20250717/model/PauseAgentWorkRequest.cpp
  src/v20250717/model/TagItem.cpp
  src/v20250717/model/ExtraInfo.cpp
  src/v20250717/model/CreateAgentInstanceResponse.cpp
  src/v20250717/model/DescribeAgentDutyTasksRequest.cpp
  src/v20250717/model/PauseAgentWorkResponse.cpp
  src/v20250717/model/DescribeChatDetailResponse.cpp
  src/v20250717/model/TerminateAgentInstanceResponse.cpp
  src/v20250717/model/ModifyAgentInstanceParametersResponse.cpp
  src/v20250717/model/IsolateAgentInstanceRequest.cpp
  src/v20250717/model/TagFilter.cpp
  src/v20250717/model/DescribeAgentInstanceRequest.cpp
  src/v20250717/model/ModifyAgentInstanceParametersRequest.cpp
  src/v20250717/model/ContinueAgentWorkResponse.cpp
  src/v20250717/model/DescribeAgentInstancesResponse.cpp
  src/v20250717/model/StartAgentTaskRequest.cpp
  src/v20250717/model/CreateChatCompletionRes.cpp
  src/v20250717/model/RecoverAgentInstanceRequest.cpp
  src/v20250717/model/CodeRepo.cpp
  src/v20250717/model/ContinueAgentWorkRequest.cpp
  src/v20250717/model/ChatBrief.cpp
  src/v20250717/model/DescribeChatsResponse.cpp
  src/v20250717/model/Agent.cpp
  src/v20250717/model/DescribeAgentInstanceResponse.cpp
  src/v20250717/model/CreateChatCompletionResponse.cpp
  src/v20250717/model/DescribeReportUrlRequest.cpp
  src/v20250717/model/DescribeAgentDutyTaskDetailResponse.cpp
  src/v20250717/model/AgentInstance.cpp
  src/v20250717/model/ChatDetail.cpp
  src/v20250717/model/RemoveChatResponse.cpp
  src/v20250717/model/TerminateAgentInstanceRequest.cpp
  src/v20250717/model/StartAgentTaskResponse.cpp
  )

set(tdai_include
    include/tencentcloud/tdai
  )

add_library(tdai ${LIB_TYPE}
  ${tdai_public_header}
  ${tdai_public_header_model}
  ${tdai_src})

set_target_properties(tdai
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdai
  )

target_include_directories(tdai
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tdai
  core)

#install(FILES ${tdai_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdai/v20250717)
#install(FILES ${tdai_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdai/v20250717/model)
install(DIRECTORY ${tdai_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tdai
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
