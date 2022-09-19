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

set(cloudstudio_public_header
  include/tencentcloud/cloudstudio/v20210524/CloudstudioClient.h
  )

set(cloudstudio_public_header_model
  include/tencentcloud/cloudstudio/v20210524/model/UserDefinedTemplatePatchedParams.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceInfoDTO.h
  include/tencentcloud/cloudstudio/v20210524/model/RecoverWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateCustomizeTemplatesRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/RecoverWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesByIdRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByVersionControlRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplateVersionControlRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceResourceDTO.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateCustomizeTemplatesResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/ImageUserDTO.h
  include/tencentcloud/cloudstudio/v20210524/model/RunWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByAgentRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/DeleteCustomizeTemplatesByIdRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/StopWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceEnvListResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceShareInfo.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceTemplateInfo.h
  include/tencentcloud/cloudstudio/v20210524/model/UserSubInfo.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusListResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesFullByIdRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplateVersionControlResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/UserInfoRsp.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceEnvListRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyWorkspaceAttributesResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesPresetsRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/StopWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceNameExistRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusListRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/RemoveWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/CustomizeTemplatesPresetsInfo.h
  include/tencentcloud/cloudstudio/v20210524/model/RunWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesByIdResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesPresetsResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByTemplateResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByAgentResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceInfo.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceDTO.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesFullByIdResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByVersionControlResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesPartByIdRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/UserDefinedTemplateParams.h
  include/tencentcloud/cloudstudio/v20210524/model/DeleteCustomizeTemplatesByIdResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/WorkspaceStatusInfo.h
  include/tencentcloud/cloudstudio/v20210524/model/RemoveWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/AgentSpaceDTO.h
  include/tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceNameExistResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByTemplateRequest.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesPartByIdResponse.h
  include/tencentcloud/cloudstudio/v20210524/model/ModifyWorkspaceAttributesRequest.h
  )

set(cloudstudio_src
  src/v20210524/CloudstudioClient.cpp
  src/v20210524/model/UserDefinedTemplatePatchedParams.cpp
  src/v20210524/model/WorkspaceInfoDTO.cpp
  src/v20210524/model/RecoverWorkspaceResponse.cpp
  src/v20210524/model/DescribeWorkspaceStatusRequest.cpp
  src/v20210524/model/CreateCustomizeTemplatesRequest.cpp
  src/v20210524/model/RecoverWorkspaceRequest.cpp
  src/v20210524/model/DescribeCustomizeTemplatesByIdRequest.cpp
  src/v20210524/model/CreateWorkspaceByVersionControlRequest.cpp
  src/v20210524/model/ModifyCustomizeTemplateVersionControlRequest.cpp
  src/v20210524/model/WorkspaceResourceDTO.cpp
  src/v20210524/model/CreateCustomizeTemplatesResponse.cpp
  src/v20210524/model/ImageUserDTO.cpp
  src/v20210524/model/RunWorkspaceRequest.cpp
  src/v20210524/model/DescribeWorkspaceStatusResponse.cpp
  src/v20210524/model/CreateWorkspaceByAgentRequest.cpp
  src/v20210524/model/DeleteCustomizeTemplatesByIdRequest.cpp
  src/v20210524/model/StopWorkspaceRequest.cpp
  src/v20210524/model/DescribeWorkspaceEnvListResponse.cpp
  src/v20210524/model/WorkspaceShareInfo.cpp
  src/v20210524/model/WorkspaceTemplateInfo.cpp
  src/v20210524/model/UserSubInfo.cpp
  src/v20210524/model/DescribeWorkspaceStatusListResponse.cpp
  src/v20210524/model/ModifyCustomizeTemplatesFullByIdRequest.cpp
  src/v20210524/model/ModifyCustomizeTemplateVersionControlResponse.cpp
  src/v20210524/model/UserInfoRsp.cpp
  src/v20210524/model/DescribeWorkspaceEnvListRequest.cpp
  src/v20210524/model/ModifyWorkspaceAttributesResponse.cpp
  src/v20210524/model/DescribeCustomizeTemplatesPresetsRequest.cpp
  src/v20210524/model/StopWorkspaceResponse.cpp
  src/v20210524/model/DescribeWorkspaceNameExistRequest.cpp
  src/v20210524/model/DescribeWorkspaceStatusListRequest.cpp
  src/v20210524/model/RemoveWorkspaceRequest.cpp
  src/v20210524/model/DescribeCustomizeTemplatesRequest.cpp
  src/v20210524/model/CustomizeTemplatesPresetsInfo.cpp
  src/v20210524/model/RunWorkspaceResponse.cpp
  src/v20210524/model/DescribeCustomizeTemplatesByIdResponse.cpp
  src/v20210524/model/DescribeCustomizeTemplatesPresetsResponse.cpp
  src/v20210524/model/CreateWorkspaceByTemplateResponse.cpp
  src/v20210524/model/CreateWorkspaceByAgentResponse.cpp
  src/v20210524/model/WorkspaceInfo.cpp
  src/v20210524/model/WorkspaceDTO.cpp
  src/v20210524/model/ModifyCustomizeTemplatesFullByIdResponse.cpp
  src/v20210524/model/DescribeCustomizeTemplatesResponse.cpp
  src/v20210524/model/CreateWorkspaceByVersionControlResponse.cpp
  src/v20210524/model/ModifyCustomizeTemplatesPartByIdRequest.cpp
  src/v20210524/model/UserDefinedTemplateParams.cpp
  src/v20210524/model/DeleteCustomizeTemplatesByIdResponse.cpp
  src/v20210524/model/WorkspaceStatusInfo.cpp
  src/v20210524/model/RemoveWorkspaceResponse.cpp
  src/v20210524/model/AgentSpaceDTO.cpp
  src/v20210524/model/DescribeWorkspaceNameExistResponse.cpp
  src/v20210524/model/CreateWorkspaceByTemplateRequest.cpp
  src/v20210524/model/ModifyCustomizeTemplatesPartByIdResponse.cpp
  src/v20210524/model/ModifyWorkspaceAttributesRequest.cpp
  )

set(cloudstudio_include
    include/tencentcloud/cloudstudio
  )

add_library(cloudstudio ${LIB_TYPE}
  ${cloudstudio_public_header}
  ${cloudstudio_public_header_model}
  ${cloudstudio_src})

set_target_properties(cloudstudio
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudstudio
  )

target_include_directories(cloudstudio
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudstudio
  core)

#install(FILES ${cloudstudio_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudstudio/v20210524)
#install(FILES ${cloudstudio_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudstudio/v20210524/model)
install(DIRECTORY ${cloudstudio_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudstudio
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
