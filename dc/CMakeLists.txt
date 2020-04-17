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

set(dc_public_header
  include/tencentcloud/dc/v20180410/DcClient.h
  )

set(dc_public_header_model
  include/tencentcloud/dc/v20180410/model/BgpPeer.h
  include/tencentcloud/dc/v20180410/model/RejectDirectConnectTunnelRequest.h
  include/tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeRequest.h
  include/tencentcloud/dc/v20180410/model/DeleteDirectConnectTunnelRequest.h
  include/tencentcloud/dc/v20180410/model/CreateDirectConnectResponse.h
  include/tencentcloud/dc/v20180410/model/DirectConnect.h
  include/tencentcloud/dc/v20180410/model/DescribeAccessPointsResponse.h
  include/tencentcloud/dc/v20180410/model/AcceptDirectConnectTunnelResponse.h
  include/tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelsRequest.h
  include/tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeResponse.h
  include/tencentcloud/dc/v20180410/model/RouteFilterPrefix.h
  include/tencentcloud/dc/v20180410/model/AcceptDirectConnectTunnelRequest.h
  include/tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelRequest.h
  include/tencentcloud/dc/v20180410/model/DeleteDirectConnectResponse.h
  include/tencentcloud/dc/v20180410/model/DescribeDirectConnectsResponse.h
  include/tencentcloud/dc/v20180410/model/DescribeAccessPointsRequest.h
  include/tencentcloud/dc/v20180410/model/DescribeDirectConnectsRequest.h
  include/tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeRequest.h
  include/tencentcloud/dc/v20180410/model/Filter.h
  include/tencentcloud/dc/v20180410/model/CreateDirectConnectRequest.h
  include/tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeResponse.h
  include/tencentcloud/dc/v20180410/model/RejectDirectConnectTunnelResponse.h
  include/tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelResponse.h
  include/tencentcloud/dc/v20180410/model/DeleteDirectConnectTunnelResponse.h
  include/tencentcloud/dc/v20180410/model/AccessPoint.h
  include/tencentcloud/dc/v20180410/model/DeleteDirectConnectRequest.h
  include/tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelsResponse.h
  include/tencentcloud/dc/v20180410/model/Tag.h
  include/tencentcloud/dc/v20180410/model/DirectConnectTunnel.h
  )

set(dc_src
  src/v20180410/DcClient.cpp
  src/v20180410/model/BgpPeer.cpp
  src/v20180410/model/RejectDirectConnectTunnelRequest.cpp
  src/v20180410/model/ModifyDirectConnectAttributeRequest.cpp
  src/v20180410/model/DeleteDirectConnectTunnelRequest.cpp
  src/v20180410/model/CreateDirectConnectResponse.cpp
  src/v20180410/model/DirectConnect.cpp
  src/v20180410/model/DescribeAccessPointsResponse.cpp
  src/v20180410/model/AcceptDirectConnectTunnelResponse.cpp
  src/v20180410/model/DescribeDirectConnectTunnelsRequest.cpp
  src/v20180410/model/ModifyDirectConnectTunnelAttributeResponse.cpp
  src/v20180410/model/RouteFilterPrefix.cpp
  src/v20180410/model/AcceptDirectConnectTunnelRequest.cpp
  src/v20180410/model/CreateDirectConnectTunnelRequest.cpp
  src/v20180410/model/DeleteDirectConnectResponse.cpp
  src/v20180410/model/DescribeDirectConnectsResponse.cpp
  src/v20180410/model/DescribeAccessPointsRequest.cpp
  src/v20180410/model/DescribeDirectConnectsRequest.cpp
  src/v20180410/model/ModifyDirectConnectTunnelAttributeRequest.cpp
  src/v20180410/model/Filter.cpp
  src/v20180410/model/CreateDirectConnectRequest.cpp
  src/v20180410/model/ModifyDirectConnectAttributeResponse.cpp
  src/v20180410/model/RejectDirectConnectTunnelResponse.cpp
  src/v20180410/model/CreateDirectConnectTunnelResponse.cpp
  src/v20180410/model/DeleteDirectConnectTunnelResponse.cpp
  src/v20180410/model/AccessPoint.cpp
  src/v20180410/model/DeleteDirectConnectRequest.cpp
  src/v20180410/model/DescribeDirectConnectTunnelsResponse.cpp
  src/v20180410/model/Tag.cpp
  src/v20180410/model/DirectConnectTunnel.cpp
  )

set(dc_include
    include/tencentcloud/dc
  )

add_library(dc ${LIB_TYPE}
  ${dc_public_header}
  ${dc_public_header_model}
  ${dc_src})

set_target_properties(dc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dc
  )

target_include_directories(dc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dc
  core)

#install(FILES ${dc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dc/v20180410)
#install(FILES ${dc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dc/v20180410/model)
install(DIRECTORY ${dc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
