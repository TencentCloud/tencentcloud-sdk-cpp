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

set(dataagent_public_header
  include/tencentcloud/dataagent/v20250513/DataagentClient.h
  )

set(dataagent_public_header_model
  include/tencentcloud/dataagent/v20250513/model/UploadAndCommitFileRequest.h
  include/tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseListRequest.h
  include/tencentcloud/dataagent/v20250513/model/AddChunkRequest.h
  include/tencentcloud/dataagent/v20250513/model/ModifyChunkResponse.h
  include/tencentcloud/dataagent/v20250513/model/ChatAIResponse.h
  include/tencentcloud/dataagent/v20250513/model/DeleteChunkRequest.h
  include/tencentcloud/dataagent/v20250513/model/GetSessionDetailsResponse.h
  include/tencentcloud/dataagent/v20250513/model/ModelUserAuthority.h
  include/tencentcloud/dataagent/v20250513/model/ModifyChunkRequest.h
  include/tencentcloud/dataagent/v20250513/model/QueryChunkListResponse.h
  include/tencentcloud/dataagent/v20250513/model/GetJobsByKnowledgeBaseIdRequest.h
  include/tencentcloud/dataagent/v20250513/model/UploadJob.h
  include/tencentcloud/dataagent/v20250513/model/QueryChunkListRequest.h
  include/tencentcloud/dataagent/v20250513/model/StopChatAIRequest.h
  include/tencentcloud/dataagent/v20250513/model/StepExpand.h
  include/tencentcloud/dataagent/v20250513/model/GetSessionDetailsRequest.h
  include/tencentcloud/dataagent/v20250513/model/QueryUserAuthorityResponse.h
  include/tencentcloud/dataagent/v20250513/model/ModifyKnowledgeBaseRequest.h
  include/tencentcloud/dataagent/v20250513/model/DeleteChunkResponse.h
  include/tencentcloud/dataagent/v20250513/model/CreateDataAgentSessionResponse.h
  include/tencentcloud/dataagent/v20250513/model/CosFileInfo.h
  include/tencentcloud/dataagent/v20250513/model/KnowledgeBase.h
  include/tencentcloud/dataagent/v20250513/model/ModifyUserAuthorityRequest.h
  include/tencentcloud/dataagent/v20250513/model/GetJobsByKnowledgeBaseIdResponse.h
  include/tencentcloud/dataagent/v20250513/model/StopChatAIResponse.h
  include/tencentcloud/dataagent/v20250513/model/GetUploadJobDetailsResponse.h
  include/tencentcloud/dataagent/v20250513/model/Task.h
  include/tencentcloud/dataagent/v20250513/model/DeleteDataAgentSessionResponse.h
  include/tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseFileListResponse.h
  include/tencentcloud/dataagent/v20250513/model/Record.h
  include/tencentcloud/dataagent/v20250513/model/ChatAIRequest.h
  include/tencentcloud/dataagent/v20250513/model/QueryUserAuthorityRequest.h
  include/tencentcloud/dataagent/v20250513/model/FileInfo.h
  include/tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseFileListRequest.h
  include/tencentcloud/dataagent/v20250513/model/GetUploadJobDetailsRequest.h
  include/tencentcloud/dataagent/v20250513/model/ModifyUserAuthorityResponse.h
  include/tencentcloud/dataagent/v20250513/model/AddChunkResponse.h
  include/tencentcloud/dataagent/v20250513/model/StepInfo.h
  include/tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseListResponse.h
  include/tencentcloud/dataagent/v20250513/model/UploadAndCommitFileResponse.h
  include/tencentcloud/dataagent/v20250513/model/KnowledgeTaskConfig.h
  include/tencentcloud/dataagent/v20250513/model/CreateDataAgentSessionRequest.h
  include/tencentcloud/dataagent/v20250513/model/ModifyKnowledgeBaseResponse.h
  include/tencentcloud/dataagent/v20250513/model/DeleteDataAgentSessionRequest.h
  include/tencentcloud/dataagent/v20250513/model/ColumnInfo.h
  include/tencentcloud/dataagent/v20250513/model/Chunk.h
  )

set(dataagent_src
  src/v20250513/DataagentClient.cpp
  src/v20250513/model/UploadAndCommitFileRequest.cpp
  src/v20250513/model/GetKnowledgeBaseListRequest.cpp
  src/v20250513/model/AddChunkRequest.cpp
  src/v20250513/model/ModifyChunkResponse.cpp
  src/v20250513/model/ChatAIResponse.cpp
  src/v20250513/model/DeleteChunkRequest.cpp
  src/v20250513/model/GetSessionDetailsResponse.cpp
  src/v20250513/model/ModelUserAuthority.cpp
  src/v20250513/model/ModifyChunkRequest.cpp
  src/v20250513/model/QueryChunkListResponse.cpp
  src/v20250513/model/GetJobsByKnowledgeBaseIdRequest.cpp
  src/v20250513/model/UploadJob.cpp
  src/v20250513/model/QueryChunkListRequest.cpp
  src/v20250513/model/StopChatAIRequest.cpp
  src/v20250513/model/StepExpand.cpp
  src/v20250513/model/GetSessionDetailsRequest.cpp
  src/v20250513/model/QueryUserAuthorityResponse.cpp
  src/v20250513/model/ModifyKnowledgeBaseRequest.cpp
  src/v20250513/model/DeleteChunkResponse.cpp
  src/v20250513/model/CreateDataAgentSessionResponse.cpp
  src/v20250513/model/CosFileInfo.cpp
  src/v20250513/model/KnowledgeBase.cpp
  src/v20250513/model/ModifyUserAuthorityRequest.cpp
  src/v20250513/model/GetJobsByKnowledgeBaseIdResponse.cpp
  src/v20250513/model/StopChatAIResponse.cpp
  src/v20250513/model/GetUploadJobDetailsResponse.cpp
  src/v20250513/model/Task.cpp
  src/v20250513/model/DeleteDataAgentSessionResponse.cpp
  src/v20250513/model/GetKnowledgeBaseFileListResponse.cpp
  src/v20250513/model/Record.cpp
  src/v20250513/model/ChatAIRequest.cpp
  src/v20250513/model/QueryUserAuthorityRequest.cpp
  src/v20250513/model/FileInfo.cpp
  src/v20250513/model/GetKnowledgeBaseFileListRequest.cpp
  src/v20250513/model/GetUploadJobDetailsRequest.cpp
  src/v20250513/model/ModifyUserAuthorityResponse.cpp
  src/v20250513/model/AddChunkResponse.cpp
  src/v20250513/model/StepInfo.cpp
  src/v20250513/model/GetKnowledgeBaseListResponse.cpp
  src/v20250513/model/UploadAndCommitFileResponse.cpp
  src/v20250513/model/KnowledgeTaskConfig.cpp
  src/v20250513/model/CreateDataAgentSessionRequest.cpp
  src/v20250513/model/ModifyKnowledgeBaseResponse.cpp
  src/v20250513/model/DeleteDataAgentSessionRequest.cpp
  src/v20250513/model/ColumnInfo.cpp
  src/v20250513/model/Chunk.cpp
  )

set(dataagent_include
    include/tencentcloud/dataagent
  )

add_library(dataagent ${LIB_TYPE}
  ${dataagent_public_header}
  ${dataagent_public_header_model}
  ${dataagent_src})

set_target_properties(dataagent
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dataagent
  )

target_include_directories(dataagent
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dataagent
  core)

#install(FILES ${dataagent_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dataagent/v20250513)
#install(FILES ${dataagent_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dataagent/v20250513/model)
install(DIRECTORY ${dataagent_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dataagent
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
