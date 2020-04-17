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

set(cme_public_header
  include/tencentcloud/cme/v20191029/CmeClient.h
  )

set(cme_public_header_model
  include/tencentcloud/cme/v20191029/model/AudioStreamInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeTeamsRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteProjectRequest.h
  include/tencentcloud/cme/v20191029/model/ImportMaterialResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeTeamsResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeTaskDetailResponse.h
  include/tencentcloud/cme/v20191029/model/ExportVideoEditProjectRequest.h
  include/tencentcloud/cme/v20191029/model/ClassInfo.h
  include/tencentcloud/cme/v20191029/model/DeleteMaterialResponse.h
  include/tencentcloud/cme/v20191029/model/IntegerRange.h
  include/tencentcloud/cme/v20191029/model/SearchMaterialRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteTeamResponse.h
  include/tencentcloud/cme/v20191029/model/RevokeResourceAuthorizationResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeTasksResponse.h
  include/tencentcloud/cme/v20191029/model/ProjectInfo.h
  include/tencentcloud/cme/v20191029/model/DeleteTeamRequest.h
  include/tencentcloud/cme/v20191029/model/ModifyMaterialResponse.h
  include/tencentcloud/cme/v20191029/model/LinkMaterial.h
  include/tencentcloud/cme/v20191029/model/FlattenListMediaRequest.h
  include/tencentcloud/cme/v20191029/model/AudioMaterial.h
  include/tencentcloud/cme/v20191029/model/AddMemberInfo.h
  include/tencentcloud/cme/v20191029/model/Entity.h
  include/tencentcloud/cme/v20191029/model/TeamInfo.h
  include/tencentcloud/cme/v20191029/model/VideoEditProjectOutput.h
  include/tencentcloud/cme/v20191029/model/CreateProjectRequest.h
  include/tencentcloud/cme/v20191029/model/ModifyMaterialRequest.h
  include/tencentcloud/cme/v20191029/model/Authorizer.h
  include/tencentcloud/cme/v20191029/model/DescribeTasksRequest.h
  include/tencentcloud/cme/v20191029/model/TimeRange.h
  include/tencentcloud/cme/v20191029/model/DescribeLoginStatusRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteLoginStatusResponse.h
  include/tencentcloud/cme/v20191029/model/MaterialBaseInfo.h
  include/tencentcloud/cme/v20191029/model/Resource.h
  include/tencentcloud/cme/v20191029/model/CreateLinkResponse.h
  include/tencentcloud/cme/v20191029/model/ListMediaResponse.h
  include/tencentcloud/cme/v20191029/model/SearchMaterialResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeJoinTeamsRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteMaterialRequest.h
  include/tencentcloud/cme/v20191029/model/CreateProjectResponse.h
  include/tencentcloud/cme/v20191029/model/DeleteProjectResponse.h
  include/tencentcloud/cme/v20191029/model/DeleteClassRequest.h
  include/tencentcloud/cme/v20191029/model/CreateLinkRequest.h
  include/tencentcloud/cme/v20191029/model/CreateClassRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeMaterialsResponse.h
  include/tencentcloud/cme/v20191029/model/GrantResourceAuthorizationResponse.h
  include/tencentcloud/cme/v20191029/model/CMEExportInfo.h
  include/tencentcloud/cme/v20191029/model/ImportMediaToProjectRequest.h
  include/tencentcloud/cme/v20191029/model/VODExportInfo.h
  include/tencentcloud/cme/v20191029/model/SortBy.h
  include/tencentcloud/cme/v20191029/model/ImageMaterial.h
  include/tencentcloud/cme/v20191029/model/DescribeClassRequest.h
  include/tencentcloud/cme/v20191029/model/MoveClassRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteTeamMembersResponse.h
  include/tencentcloud/cme/v20191029/model/MoveClassResponse.h
  include/tencentcloud/cme/v20191029/model/ImportMediaToProjectResponse.h
  include/tencentcloud/cme/v20191029/model/ModifyTeamMemberResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeTeamMembersResponse.h
  include/tencentcloud/cme/v20191029/model/AddTeamMemberResponse.h
  include/tencentcloud/cme/v20191029/model/CreateTeamResponse.h
  include/tencentcloud/cme/v20191029/model/ModifyTeamRequest.h
  include/tencentcloud/cme/v20191029/model/ModifyTeamMemberRequest.h
  include/tencentcloud/cme/v20191029/model/CreateTeamRequest.h
  include/tencentcloud/cme/v20191029/model/MaterialBasicInfo.h
  include/tencentcloud/cme/v20191029/model/JoinTeamInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeResourceAuthorizationRequest.h
  include/tencentcloud/cme/v20191029/model/CreateClassResponse.h
  include/tencentcloud/cme/v20191029/model/VideoStreamInfo.h
  include/tencentcloud/cme/v20191029/model/AddTeamMemberRequest.h
  include/tencentcloud/cme/v20191029/model/ExportVideoEditProjectResponse.h
  include/tencentcloud/cme/v20191029/model/ListMediaRequest.h
  include/tencentcloud/cme/v20191029/model/ModifyTeamResponse.h
  include/tencentcloud/cme/v20191029/model/DeleteLoginStatusRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteTeamMembersRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeSharedSpaceResponse.h
  include/tencentcloud/cme/v20191029/model/SearchScope.h
  include/tencentcloud/cme/v20191029/model/VideoMaterial.h
  include/tencentcloud/cme/v20191029/model/DescribeResourceAuthorizationResponse.h
  include/tencentcloud/cme/v20191029/model/FlattenListMediaResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeProjectsRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeLoginStatusResponse.h
  include/tencentcloud/cme/v20191029/model/TeamMemberInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeJoinTeamsResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeTeamMembersRequest.h
  include/tencentcloud/cme/v20191029/model/MediaImageSpriteInfo.h
  include/tencentcloud/cme/v20191029/model/AuthorizationInfo.h
  include/tencentcloud/cme/v20191029/model/ModifyProjectResponse.h
  include/tencentcloud/cme/v20191029/model/RevokeResourceAuthorizationRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeTaskDetailRequest.h
  include/tencentcloud/cme/v20191029/model/ModifyProjectRequest.h
  include/tencentcloud/cme/v20191029/model/MaterialInfo.h
  include/tencentcloud/cme/v20191029/model/LoginStatusInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeClassResponse.h
  include/tencentcloud/cme/v20191029/model/MediaMetaData.h
  include/tencentcloud/cme/v20191029/model/DescribeSharedSpaceRequest.h
  include/tencentcloud/cme/v20191029/model/TaskBaseInfo.h
  include/tencentcloud/cme/v20191029/model/DeleteClassResponse.h
  include/tencentcloud/cme/v20191029/model/GrantResourceAuthorizationRequest.h
  include/tencentcloud/cme/v20191029/model/LinkMaterialInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeProjectsResponse.h
  include/tencentcloud/cme/v20191029/model/ImportMaterialRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeMaterialsRequest.h
  )

set(cme_src
  src/v20191029/CmeClient.cpp
  src/v20191029/model/AudioStreamInfo.cpp
  src/v20191029/model/DescribeTeamsRequest.cpp
  src/v20191029/model/DeleteProjectRequest.cpp
  src/v20191029/model/ImportMaterialResponse.cpp
  src/v20191029/model/DescribeTeamsResponse.cpp
  src/v20191029/model/DescribeTaskDetailResponse.cpp
  src/v20191029/model/ExportVideoEditProjectRequest.cpp
  src/v20191029/model/ClassInfo.cpp
  src/v20191029/model/DeleteMaterialResponse.cpp
  src/v20191029/model/IntegerRange.cpp
  src/v20191029/model/SearchMaterialRequest.cpp
  src/v20191029/model/DeleteTeamResponse.cpp
  src/v20191029/model/RevokeResourceAuthorizationResponse.cpp
  src/v20191029/model/DescribeTasksResponse.cpp
  src/v20191029/model/ProjectInfo.cpp
  src/v20191029/model/DeleteTeamRequest.cpp
  src/v20191029/model/ModifyMaterialResponse.cpp
  src/v20191029/model/LinkMaterial.cpp
  src/v20191029/model/FlattenListMediaRequest.cpp
  src/v20191029/model/AudioMaterial.cpp
  src/v20191029/model/AddMemberInfo.cpp
  src/v20191029/model/Entity.cpp
  src/v20191029/model/TeamInfo.cpp
  src/v20191029/model/VideoEditProjectOutput.cpp
  src/v20191029/model/CreateProjectRequest.cpp
  src/v20191029/model/ModifyMaterialRequest.cpp
  src/v20191029/model/Authorizer.cpp
  src/v20191029/model/DescribeTasksRequest.cpp
  src/v20191029/model/TimeRange.cpp
  src/v20191029/model/DescribeLoginStatusRequest.cpp
  src/v20191029/model/DeleteLoginStatusResponse.cpp
  src/v20191029/model/MaterialBaseInfo.cpp
  src/v20191029/model/Resource.cpp
  src/v20191029/model/CreateLinkResponse.cpp
  src/v20191029/model/ListMediaResponse.cpp
  src/v20191029/model/SearchMaterialResponse.cpp
  src/v20191029/model/DescribeJoinTeamsRequest.cpp
  src/v20191029/model/DeleteMaterialRequest.cpp
  src/v20191029/model/CreateProjectResponse.cpp
  src/v20191029/model/DeleteProjectResponse.cpp
  src/v20191029/model/DeleteClassRequest.cpp
  src/v20191029/model/CreateLinkRequest.cpp
  src/v20191029/model/CreateClassRequest.cpp
  src/v20191029/model/DescribeMaterialsResponse.cpp
  src/v20191029/model/GrantResourceAuthorizationResponse.cpp
  src/v20191029/model/CMEExportInfo.cpp
  src/v20191029/model/ImportMediaToProjectRequest.cpp
  src/v20191029/model/VODExportInfo.cpp
  src/v20191029/model/SortBy.cpp
  src/v20191029/model/ImageMaterial.cpp
  src/v20191029/model/DescribeClassRequest.cpp
  src/v20191029/model/MoveClassRequest.cpp
  src/v20191029/model/DeleteTeamMembersResponse.cpp
  src/v20191029/model/MoveClassResponse.cpp
  src/v20191029/model/ImportMediaToProjectResponse.cpp
  src/v20191029/model/ModifyTeamMemberResponse.cpp
  src/v20191029/model/DescribeTeamMembersResponse.cpp
  src/v20191029/model/AddTeamMemberResponse.cpp
  src/v20191029/model/CreateTeamResponse.cpp
  src/v20191029/model/ModifyTeamRequest.cpp
  src/v20191029/model/ModifyTeamMemberRequest.cpp
  src/v20191029/model/CreateTeamRequest.cpp
  src/v20191029/model/MaterialBasicInfo.cpp
  src/v20191029/model/JoinTeamInfo.cpp
  src/v20191029/model/DescribeResourceAuthorizationRequest.cpp
  src/v20191029/model/CreateClassResponse.cpp
  src/v20191029/model/VideoStreamInfo.cpp
  src/v20191029/model/AddTeamMemberRequest.cpp
  src/v20191029/model/ExportVideoEditProjectResponse.cpp
  src/v20191029/model/ListMediaRequest.cpp
  src/v20191029/model/ModifyTeamResponse.cpp
  src/v20191029/model/DeleteLoginStatusRequest.cpp
  src/v20191029/model/DeleteTeamMembersRequest.cpp
  src/v20191029/model/DescribeSharedSpaceResponse.cpp
  src/v20191029/model/SearchScope.cpp
  src/v20191029/model/VideoMaterial.cpp
  src/v20191029/model/DescribeResourceAuthorizationResponse.cpp
  src/v20191029/model/FlattenListMediaResponse.cpp
  src/v20191029/model/DescribeProjectsRequest.cpp
  src/v20191029/model/DescribeLoginStatusResponse.cpp
  src/v20191029/model/TeamMemberInfo.cpp
  src/v20191029/model/DescribeJoinTeamsResponse.cpp
  src/v20191029/model/DescribeTeamMembersRequest.cpp
  src/v20191029/model/MediaImageSpriteInfo.cpp
  src/v20191029/model/AuthorizationInfo.cpp
  src/v20191029/model/ModifyProjectResponse.cpp
  src/v20191029/model/RevokeResourceAuthorizationRequest.cpp
  src/v20191029/model/DescribeTaskDetailRequest.cpp
  src/v20191029/model/ModifyProjectRequest.cpp
  src/v20191029/model/MaterialInfo.cpp
  src/v20191029/model/LoginStatusInfo.cpp
  src/v20191029/model/DescribeClassResponse.cpp
  src/v20191029/model/MediaMetaData.cpp
  src/v20191029/model/DescribeSharedSpaceRequest.cpp
  src/v20191029/model/TaskBaseInfo.cpp
  src/v20191029/model/DeleteClassResponse.cpp
  src/v20191029/model/GrantResourceAuthorizationRequest.cpp
  src/v20191029/model/LinkMaterialInfo.cpp
  src/v20191029/model/DescribeProjectsResponse.cpp
  src/v20191029/model/ImportMaterialRequest.cpp
  src/v20191029/model/DescribeMaterialsRequest.cpp
  )

set(cme_include
    include/tencentcloud/cme
  )

add_library(cme ${LIB_TYPE}
  ${cme_public_header}
  ${cme_public_header_model}
  ${cme_src})

set_target_properties(cme
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cme
  )

target_include_directories(cme
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cme
  core)

#install(FILES ${cme_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cme/v20191029)
#install(FILES ${cme_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cme/v20191029/model)
install(DIRECTORY ${cme_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cme
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
