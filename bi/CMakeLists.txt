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

set(bi_public_header
  include/tencentcloud/bi/v20220105/BiClient.h
  )

set(bi_public_header_model
  include/tencentcloud/bi/v20220105/model/PageScreenVO.h
  include/tencentcloud/bi/v20220105/model/DataId.h
  include/tencentcloud/bi/v20220105/model/DescribeUserRoleListResponse.h
  include/tencentcloud/bi/v20220105/model/ExportScreenPageResponse.h
  include/tencentcloud/bi/v20220105/model/ModifyProjectResponse.h
  include/tencentcloud/bi/v20220105/model/DeleteProjectRequest.h
  include/tencentcloud/bi/v20220105/model/DescribeUserProjectListResponse.h
  include/tencentcloud/bi/v20220105/model/CreateDatasourceRequest.h
  include/tencentcloud/bi/v20220105/model/DeleteDatasourceRequest.h
  include/tencentcloud/bi/v20220105/model/ModifyDatasourceResponse.h
  include/tencentcloud/bi/v20220105/model/UserRoleListDataRoleInfo.h
  include/tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h
  include/tencentcloud/bi/v20220105/model/ProjectConfigResult.h
  include/tencentcloud/bi/v20220105/model/EmbedTokenInfo.h
  include/tencentcloud/bi/v20220105/model/DescribePageWidgetListResponse.h
  include/tencentcloud/bi/v20220105/model/DeleteUserRoleResponse.h
  include/tencentcloud/bi/v20220105/model/ErrorInfo.h
  include/tencentcloud/bi/v20220105/model/DescribeUserProjectListRequest.h
  include/tencentcloud/bi/v20220105/model/DescribePageWidgetListRequest.h
  include/tencentcloud/bi/v20220105/model/CreateDatasourceCloudResponse.h
  include/tencentcloud/bi/v20220105/model/ProjectConfigList.h
  include/tencentcloud/bi/v20220105/model/DeleteUserRoleRequest.h
  include/tencentcloud/bi/v20220105/model/CreateUserRoleRequest.h
  include/tencentcloud/bi/v20220105/model/UserGroupDTO.h
  include/tencentcloud/bi/v20220105/model/ModifyUserRoleRequest.h
  include/tencentcloud/bi/v20220105/model/DatasourceInfoData.h
  include/tencentcloud/bi/v20220105/model/DescribeProjectListResponse.h
  include/tencentcloud/bi/v20220105/model/CorpUserListData.h
  include/tencentcloud/bi/v20220105/model/IdDTO.h
  include/tencentcloud/bi/v20220105/model/ModifyUserRoleResponse.h
  include/tencentcloud/bi/v20220105/model/CreateEmbedTokenRequest.h
  include/tencentcloud/bi/v20220105/model/CreateUserRoleProjectResponse.h
  include/tencentcloud/bi/v20220105/model/PageScreenListVO.h
  include/tencentcloud/bi/v20220105/model/DescribeProjectInfoRequest.h
  include/tencentcloud/bi/v20220105/model/BaseStateAction.h
  include/tencentcloud/bi/v20220105/model/Data.h
  include/tencentcloud/bi/v20220105/model/ModifyUserRoleProjectResponse.h
  include/tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListResponse.h
  include/tencentcloud/bi/v20220105/model/ModifyDatasourceCloudResponse.h
  include/tencentcloud/bi/v20220105/model/ModifyDatasourceCloudRequest.h
  include/tencentcloud/bi/v20220105/model/ModifyDatasourceRequest.h
  include/tencentcloud/bi/v20220105/model/ModifyProjectRequest.h
  include/tencentcloud/bi/v20220105/model/ModifyUserRoleProjectRequest.h
  include/tencentcloud/bi/v20220105/model/CreateUserRoleResponse.h
  include/tencentcloud/bi/v20220105/model/ApplyEmbedTokenInfo.h
  include/tencentcloud/bi/v20220105/model/DescribeProjectListRequest.h
  include/tencentcloud/bi/v20220105/model/UserRoleListDataUserRoleInfo.h
  include/tencentcloud/bi/v20220105/model/UserRoleListData.h
  include/tencentcloud/bi/v20220105/model/Project.h
  include/tencentcloud/bi/v20220105/model/DatasourceInfo.h
  include/tencentcloud/bi/v20220105/model/DeleteUserRoleProjectRequest.h
  include/tencentcloud/bi/v20220105/model/CreateProjectResponse.h
  include/tencentcloud/bi/v20220105/model/DescribeProjectInfoResponse.h
  include/tencentcloud/bi/v20220105/model/ExportScreenPageRequest.h
  include/tencentcloud/bi/v20220105/model/DescribeUserRoleListRequest.h
  include/tencentcloud/bi/v20220105/model/DeleteProjectResponse.h
  include/tencentcloud/bi/v20220105/model/ProjectListData.h
  include/tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListRequest.h
  include/tencentcloud/bi/v20220105/model/PermissionGroup.h
  include/tencentcloud/bi/v20220105/model/CreateEmbedTokenResponse.h
  include/tencentcloud/bi/v20220105/model/CreateUserRoleProjectRequest.h
  include/tencentcloud/bi/v20220105/model/WidgetListVO.h
  include/tencentcloud/bi/v20220105/model/WidgetVO.h
  include/tencentcloud/bi/v20220105/model/DescribeDatasourceListRequest.h
  include/tencentcloud/bi/v20220105/model/ApplyEmbedIntervalResponse.h
  include/tencentcloud/bi/v20220105/model/CreateDatasourceResponse.h
  include/tencentcloud/bi/v20220105/model/DeleteUserRoleProjectResponse.h
  include/tencentcloud/bi/v20220105/model/CreateDatasourceCloudRequest.h
  include/tencentcloud/bi/v20220105/model/UserInfo.h
  include/tencentcloud/bi/v20220105/model/DescribeDatasourceListResponse.h
  include/tencentcloud/bi/v20220105/model/UserIdAndUserName.h
  include/tencentcloud/bi/v20220105/model/DeleteDatasourceResponse.h
  include/tencentcloud/bi/v20220105/model/CreateProjectRequest.h
  include/tencentcloud/bi/v20220105/model/PermissionComponent.h
  )

set(bi_src
  src/v20220105/BiClient.cpp
  src/v20220105/model/PageScreenVO.cpp
  src/v20220105/model/DataId.cpp
  src/v20220105/model/DescribeUserRoleListResponse.cpp
  src/v20220105/model/ExportScreenPageResponse.cpp
  src/v20220105/model/ModifyProjectResponse.cpp
  src/v20220105/model/DeleteProjectRequest.cpp
  src/v20220105/model/DescribeUserProjectListResponse.cpp
  src/v20220105/model/CreateDatasourceRequest.cpp
  src/v20220105/model/DeleteDatasourceRequest.cpp
  src/v20220105/model/ModifyDatasourceResponse.cpp
  src/v20220105/model/UserRoleListDataRoleInfo.cpp
  src/v20220105/model/ApplyEmbedIntervalRequest.cpp
  src/v20220105/model/ProjectConfigResult.cpp
  src/v20220105/model/EmbedTokenInfo.cpp
  src/v20220105/model/DescribePageWidgetListResponse.cpp
  src/v20220105/model/DeleteUserRoleResponse.cpp
  src/v20220105/model/ErrorInfo.cpp
  src/v20220105/model/DescribeUserProjectListRequest.cpp
  src/v20220105/model/DescribePageWidgetListRequest.cpp
  src/v20220105/model/CreateDatasourceCloudResponse.cpp
  src/v20220105/model/ProjectConfigList.cpp
  src/v20220105/model/DeleteUserRoleRequest.cpp
  src/v20220105/model/CreateUserRoleRequest.cpp
  src/v20220105/model/UserGroupDTO.cpp
  src/v20220105/model/ModifyUserRoleRequest.cpp
  src/v20220105/model/DatasourceInfoData.cpp
  src/v20220105/model/DescribeProjectListResponse.cpp
  src/v20220105/model/CorpUserListData.cpp
  src/v20220105/model/IdDTO.cpp
  src/v20220105/model/ModifyUserRoleResponse.cpp
  src/v20220105/model/CreateEmbedTokenRequest.cpp
  src/v20220105/model/CreateUserRoleProjectResponse.cpp
  src/v20220105/model/PageScreenListVO.cpp
  src/v20220105/model/DescribeProjectInfoRequest.cpp
  src/v20220105/model/BaseStateAction.cpp
  src/v20220105/model/Data.cpp
  src/v20220105/model/ModifyUserRoleProjectResponse.cpp
  src/v20220105/model/DescribeUserRoleProjectListResponse.cpp
  src/v20220105/model/ModifyDatasourceCloudResponse.cpp
  src/v20220105/model/ModifyDatasourceCloudRequest.cpp
  src/v20220105/model/ModifyDatasourceRequest.cpp
  src/v20220105/model/ModifyProjectRequest.cpp
  src/v20220105/model/ModifyUserRoleProjectRequest.cpp
  src/v20220105/model/CreateUserRoleResponse.cpp
  src/v20220105/model/ApplyEmbedTokenInfo.cpp
  src/v20220105/model/DescribeProjectListRequest.cpp
  src/v20220105/model/UserRoleListDataUserRoleInfo.cpp
  src/v20220105/model/UserRoleListData.cpp
  src/v20220105/model/Project.cpp
  src/v20220105/model/DatasourceInfo.cpp
  src/v20220105/model/DeleteUserRoleProjectRequest.cpp
  src/v20220105/model/CreateProjectResponse.cpp
  src/v20220105/model/DescribeProjectInfoResponse.cpp
  src/v20220105/model/ExportScreenPageRequest.cpp
  src/v20220105/model/DescribeUserRoleListRequest.cpp
  src/v20220105/model/DeleteProjectResponse.cpp
  src/v20220105/model/ProjectListData.cpp
  src/v20220105/model/DescribeUserRoleProjectListRequest.cpp
  src/v20220105/model/PermissionGroup.cpp
  src/v20220105/model/CreateEmbedTokenResponse.cpp
  src/v20220105/model/CreateUserRoleProjectRequest.cpp
  src/v20220105/model/WidgetListVO.cpp
  src/v20220105/model/WidgetVO.cpp
  src/v20220105/model/DescribeDatasourceListRequest.cpp
  src/v20220105/model/ApplyEmbedIntervalResponse.cpp
  src/v20220105/model/CreateDatasourceResponse.cpp
  src/v20220105/model/DeleteUserRoleProjectResponse.cpp
  src/v20220105/model/CreateDatasourceCloudRequest.cpp
  src/v20220105/model/UserInfo.cpp
  src/v20220105/model/DescribeDatasourceListResponse.cpp
  src/v20220105/model/UserIdAndUserName.cpp
  src/v20220105/model/DeleteDatasourceResponse.cpp
  src/v20220105/model/CreateProjectRequest.cpp
  src/v20220105/model/PermissionComponent.cpp
  )

set(bi_include
    include/tencentcloud/bi
  )

add_library(bi ${LIB_TYPE}
  ${bi_public_header}
  ${bi_public_header_model}
  ${bi_src})

set_target_properties(bi
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bi
  )

target_include_directories(bi
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bi
  core)

#install(FILES ${bi_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bi/v20220105)
#install(FILES ${bi_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bi/v20220105/model)
install(DIRECTORY ${bi_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bi
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
