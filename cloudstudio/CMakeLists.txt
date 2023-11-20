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
  include/tencentcloud/cloudstudio/v20230508/CloudstudioClient.h
  )

set(cloudstudio_public_header_model
  include/tencentcloud/cloudstudio/v20230508/model/DescribeConfigRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/DescribeWorkspacesRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/Env.h
  include/tencentcloud/cloudstudio/v20230508/model/RunWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceTokenResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/GitRepository.h
  include/tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceTokenRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/RunWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/StopWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/RemoveWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/RemoveWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/LifeCycleCommand.h
  include/tencentcloud/cloudstudio/v20230508/model/StopWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/WorkspaceStatusInfo.h
  include/tencentcloud/cloudstudio/v20230508/model/LifeCycle.h
  include/tencentcloud/cloudstudio/v20230508/model/ModifyWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/Image.h
  include/tencentcloud/cloudstudio/v20230508/model/DescribeConfigResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/DescribeImagesRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/DescribeWorkspacesResponse.h
  include/tencentcloud/cloudstudio/v20230508/model/ModifyWorkspaceRequest.h
  include/tencentcloud/cloudstudio/v20230508/model/DescribeImagesResponse.h
  )

set(cloudstudio_src
  src/v20230508/CloudstudioClient.cpp
  src/v20230508/model/DescribeConfigRequest.cpp
  src/v20230508/model/DescribeWorkspacesRequest.cpp
  src/v20230508/model/Env.cpp
  src/v20230508/model/RunWorkspaceRequest.cpp
  src/v20230508/model/CreateWorkspaceTokenResponse.cpp
  src/v20230508/model/GitRepository.cpp
  src/v20230508/model/CreateWorkspaceTokenRequest.cpp
  src/v20230508/model/CreateWorkspaceRequest.cpp
  src/v20230508/model/RunWorkspaceResponse.cpp
  src/v20230508/model/StopWorkspaceResponse.cpp
  src/v20230508/model/RemoveWorkspaceResponse.cpp
  src/v20230508/model/RemoveWorkspaceRequest.cpp
  src/v20230508/model/LifeCycleCommand.cpp
  src/v20230508/model/StopWorkspaceRequest.cpp
  src/v20230508/model/WorkspaceStatusInfo.cpp
  src/v20230508/model/LifeCycle.cpp
  src/v20230508/model/ModifyWorkspaceResponse.cpp
  src/v20230508/model/CreateWorkspaceResponse.cpp
  src/v20230508/model/Image.cpp
  src/v20230508/model/DescribeConfigResponse.cpp
  src/v20230508/model/DescribeImagesRequest.cpp
  src/v20230508/model/DescribeWorkspacesResponse.cpp
  src/v20230508/model/ModifyWorkspaceRequest.cpp
  src/v20230508/model/DescribeImagesResponse.cpp
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
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudstudio/v20230508)
#install(FILES ${cloudstudio_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudstudio/v20230508/model)
install(DIRECTORY ${cloudstudio_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudstudio
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
