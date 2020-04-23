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

set(gse_public_header
  include/tencentcloud/gse/v20191112/GseClient.h
  )

set(gse_public_header_model
  include/tencentcloud/gse/v20191112/model/GameProperty.h
  include/tencentcloud/gse/v20191112/model/UpdateGameServerSessionResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionsResponse.h
  include/tencentcloud/gse/v20191112/model/Instance.h
  include/tencentcloud/gse/v20191112/model/GetInstanceAccessResponse.h
  include/tencentcloud/gse/v20191112/model/JoinGameServerSessionRequest.h
  include/tencentcloud/gse/v20191112/model/DescribePlayerSessionsResponse.h
  include/tencentcloud/gse/v20191112/model/PlayerLatency.h
  include/tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementRequest.h
  include/tencentcloud/gse/v20191112/model/GetInstanceAccessRequest.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionsRequest.h
  include/tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h
  include/tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h
  include/tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementResponse.h
  include/tencentcloud/gse/v20191112/model/Credentials.h
  include/tencentcloud/gse/v20191112/model/DescribeInstancesResponse.h
  include/tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlRequest.h
  include/tencentcloud/gse/v20191112/model/CreateGameServerSessionResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeInstancesRequest.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsResponse.h
  include/tencentcloud/gse/v20191112/model/JoinGameServerSessionResponse.h
  include/tencentcloud/gse/v20191112/model/DesiredPlayerSession.h
  include/tencentcloud/gse/v20191112/model/SearchGameServerSessionsResponse.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementRequest.h
  include/tencentcloud/gse/v20191112/model/PlacedPlayerSession.h
  include/tencentcloud/gse/v20191112/model/GameServerSessionPlacement.h
  include/tencentcloud/gse/v20191112/model/PlayerSession.h
  include/tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h
  include/tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlResponse.h
  include/tencentcloud/gse/v20191112/model/GameServerSessionDetail.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsRequest.h
  include/tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h
  include/tencentcloud/gse/v20191112/model/GameServerSession.h
  include/tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementResponse.h
  include/tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h
  include/tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementResponse.h
  include/tencentcloud/gse/v20191112/model/InstanceAccess.h
  )

set(gse_src
  src/v20191112/GseClient.cpp
  src/v20191112/model/GameProperty.cpp
  src/v20191112/model/UpdateGameServerSessionResponse.cpp
  src/v20191112/model/DescribeGameServerSessionsResponse.cpp
  src/v20191112/model/Instance.cpp
  src/v20191112/model/GetInstanceAccessResponse.cpp
  src/v20191112/model/JoinGameServerSessionRequest.cpp
  src/v20191112/model/DescribePlayerSessionsResponse.cpp
  src/v20191112/model/PlayerLatency.cpp
  src/v20191112/model/StopGameServerSessionPlacementRequest.cpp
  src/v20191112/model/GetInstanceAccessRequest.cpp
  src/v20191112/model/DescribeGameServerSessionsRequest.cpp
  src/v20191112/model/UpdateGameServerSessionRequest.cpp
  src/v20191112/model/DescribePlayerSessionsRequest.cpp
  src/v20191112/model/StartGameServerSessionPlacementResponse.cpp
  src/v20191112/model/Credentials.cpp
  src/v20191112/model/DescribeInstancesResponse.cpp
  src/v20191112/model/GetGameServerSessionLogUrlRequest.cpp
  src/v20191112/model/CreateGameServerSessionResponse.cpp
  src/v20191112/model/DescribeInstancesRequest.cpp
  src/v20191112/model/DescribeGameServerSessionDetailsResponse.cpp
  src/v20191112/model/JoinGameServerSessionResponse.cpp
  src/v20191112/model/DesiredPlayerSession.cpp
  src/v20191112/model/SearchGameServerSessionsResponse.cpp
  src/v20191112/model/DescribeGameServerSessionPlacementRequest.cpp
  src/v20191112/model/PlacedPlayerSession.cpp
  src/v20191112/model/GameServerSessionPlacement.cpp
  src/v20191112/model/PlayerSession.cpp
  src/v20191112/model/CreateGameServerSessionRequest.cpp
  src/v20191112/model/GetGameServerSessionLogUrlResponse.cpp
  src/v20191112/model/GameServerSessionDetail.cpp
  src/v20191112/model/DescribeGameServerSessionDetailsRequest.cpp
  src/v20191112/model/StartGameServerSessionPlacementRequest.cpp
  src/v20191112/model/GameServerSession.cpp
  src/v20191112/model/DescribeGameServerSessionPlacementResponse.cpp
  src/v20191112/model/SearchGameServerSessionsRequest.cpp
  src/v20191112/model/StopGameServerSessionPlacementResponse.cpp
  src/v20191112/model/InstanceAccess.cpp
  )

set(gse_include
    include/tencentcloud/gse
  )

add_library(gse ${LIB_TYPE}
  ${gse_public_header}
  ${gse_public_header_model}
  ${gse_src})

set_target_properties(gse
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gse
  )

target_include_directories(gse
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gse
  core)

#install(FILES ${gse_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gse/v20191112)
#install(FILES ${gse_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gse/v20191112/model)
install(DIRECTORY ${gse_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gse
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
