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

set(organization_public_header
  include/tencentcloud/organization/v20181225/OrganizationClient.h
  )

set(organization_public_header_model
  include/tencentcloud/organization/v20181225/model/MoveOrganizationMembersToNodeRequest.h
  include/tencentcloud/organization/v20181225/model/GetOrganizationRequest.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationMembersRequest.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationMemberFromNodeRequest.h
  include/tencentcloud/organization/v20181225/model/OrgMember.h
  include/tencentcloud/organization/v20181225/model/UpdateOrganizationNodeResponse.h
  include/tencentcloud/organization/v20181225/model/GetOrganizationMemberResponse.h
  include/tencentcloud/organization/v20181225/model/CreateOrganizationRequest.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationRequest.h
  include/tencentcloud/organization/v20181225/model/QuitOrganizationResponse.h
  include/tencentcloud/organization/v20181225/model/UpdateOrganizationMemberResponse.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationMembersRequest.h
  include/tencentcloud/organization/v20181225/model/CreateOrganizationResponse.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationNodesRequest.h
  include/tencentcloud/organization/v20181225/model/AddOrganizationNodeResponse.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationInvitationsResponse.h
  include/tencentcloud/organization/v20181225/model/AcceptOrganizationInvitationRequest.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationNodeMembersResponse.h
  include/tencentcloud/organization/v20181225/model/GetOrganizationMemberRequest.h
  include/tencentcloud/organization/v20181225/model/DenyOrganizationInvitationResponse.h
  include/tencentcloud/organization/v20181225/model/SendOrganizationInvitationResponse.h
  include/tencentcloud/organization/v20181225/model/OrgInvitation.h
  include/tencentcloud/organization/v20181225/model/UpdateOrganizationMemberRequest.h
  include/tencentcloud/organization/v20181225/model/QuitOrganizationRequest.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationInvitationsRequest.h
  include/tencentcloud/organization/v20181225/model/AddOrganizationNodeRequest.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationNodeMembersRequest.h
  include/tencentcloud/organization/v20181225/model/UpdateOrganizationNodeRequest.h
  include/tencentcloud/organization/v20181225/model/CancelOrganizationInvitationRequest.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationMemberFromNodeResponse.h
  include/tencentcloud/organization/v20181225/model/DenyOrganizationInvitationRequest.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationNodesResponse.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationResponse.h
  include/tencentcloud/organization/v20181225/model/CancelOrganizationInvitationResponse.h
  include/tencentcloud/organization/v20181225/model/AcceptOrganizationInvitationResponse.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationNodesRequest.h
  include/tencentcloud/organization/v20181225/model/SendOrganizationInvitationRequest.h
  include/tencentcloud/organization/v20181225/model/DeleteOrganizationMembersResponse.h
  include/tencentcloud/organization/v20181225/model/GetOrganizationResponse.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationMembersResponse.h
  include/tencentcloud/organization/v20181225/model/ListOrganizationNodesResponse.h
  include/tencentcloud/organization/v20181225/model/MoveOrganizationMembersToNodeResponse.h
  include/tencentcloud/organization/v20181225/model/OrgNode.h
  )

set(organization_src
  src/v20181225/OrganizationClient.cpp
  src/v20181225/model/MoveOrganizationMembersToNodeRequest.cpp
  src/v20181225/model/GetOrganizationRequest.cpp
  src/v20181225/model/ListOrganizationMembersRequest.cpp
  src/v20181225/model/DeleteOrganizationMemberFromNodeRequest.cpp
  src/v20181225/model/OrgMember.cpp
  src/v20181225/model/UpdateOrganizationNodeResponse.cpp
  src/v20181225/model/GetOrganizationMemberResponse.cpp
  src/v20181225/model/CreateOrganizationRequest.cpp
  src/v20181225/model/DeleteOrganizationRequest.cpp
  src/v20181225/model/QuitOrganizationResponse.cpp
  src/v20181225/model/UpdateOrganizationMemberResponse.cpp
  src/v20181225/model/DeleteOrganizationMembersRequest.cpp
  src/v20181225/model/CreateOrganizationResponse.cpp
  src/v20181225/model/DeleteOrganizationNodesRequest.cpp
  src/v20181225/model/AddOrganizationNodeResponse.cpp
  src/v20181225/model/ListOrganizationInvitationsResponse.cpp
  src/v20181225/model/AcceptOrganizationInvitationRequest.cpp
  src/v20181225/model/ListOrganizationNodeMembersResponse.cpp
  src/v20181225/model/GetOrganizationMemberRequest.cpp
  src/v20181225/model/DenyOrganizationInvitationResponse.cpp
  src/v20181225/model/SendOrganizationInvitationResponse.cpp
  src/v20181225/model/OrgInvitation.cpp
  src/v20181225/model/UpdateOrganizationMemberRequest.cpp
  src/v20181225/model/QuitOrganizationRequest.cpp
  src/v20181225/model/ListOrganizationInvitationsRequest.cpp
  src/v20181225/model/AddOrganizationNodeRequest.cpp
  src/v20181225/model/ListOrganizationNodeMembersRequest.cpp
  src/v20181225/model/UpdateOrganizationNodeRequest.cpp
  src/v20181225/model/CancelOrganizationInvitationRequest.cpp
  src/v20181225/model/DeleteOrganizationMemberFromNodeResponse.cpp
  src/v20181225/model/DenyOrganizationInvitationRequest.cpp
  src/v20181225/model/DeleteOrganizationNodesResponse.cpp
  src/v20181225/model/DeleteOrganizationResponse.cpp
  src/v20181225/model/CancelOrganizationInvitationResponse.cpp
  src/v20181225/model/AcceptOrganizationInvitationResponse.cpp
  src/v20181225/model/ListOrganizationNodesRequest.cpp
  src/v20181225/model/SendOrganizationInvitationRequest.cpp
  src/v20181225/model/DeleteOrganizationMembersResponse.cpp
  src/v20181225/model/GetOrganizationResponse.cpp
  src/v20181225/model/ListOrganizationMembersResponse.cpp
  src/v20181225/model/ListOrganizationNodesResponse.cpp
  src/v20181225/model/MoveOrganizationMembersToNodeResponse.cpp
  src/v20181225/model/OrgNode.cpp
  )

set(organization_include
    include/tencentcloud/organization
  )

add_library(organization ${LIB_TYPE}
  ${organization_public_header}
  ${organization_public_header_model}
  ${organization_src})

set_target_properties(organization
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}organization
  )

target_include_directories(organization
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(organization
  core)

#install(FILES ${organization_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/organization/v20181225)
#install(FILES ${organization_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/organization/v20181225/model)
install(DIRECTORY ${organization_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS organization
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
