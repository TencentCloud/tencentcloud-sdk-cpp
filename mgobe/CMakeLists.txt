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

set(mgobe_public_header
  include/tencentcloud/mgobe/v20190929/MgobeClient.h
  include/tencentcloud/mgobe/v20201014/MgobeClient.h
  )

set(mgobe_public_header_model
  include/tencentcloud/mgobe/v20190929/model/DismissRoomRequest.h
  include/tencentcloud/mgobe/v20190929/model/DismissRoomResponse.h
  include/tencentcloud/mgobe/v20201014/model/DismissRoomRequest.h
  include/tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerProfileResponse.h
  include/tencentcloud/mgobe/v20201014/model/ModifyRoomRequest.h
  include/tencentcloud/mgobe/v20201014/model/Room.h
  include/tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerProfileRequest.h
  include/tencentcloud/mgobe/v20201014/model/DescribeRoomResponse.h
  include/tencentcloud/mgobe/v20201014/model/ModifyRoomResponse.h
  include/tencentcloud/mgobe/v20201014/model/DescribePlayerRequest.h
  include/tencentcloud/mgobe/v20201014/model/DismissRoomResponse.h
  include/tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerStatusResponse.h
  include/tencentcloud/mgobe/v20201014/model/Player.h
  include/tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerStatusRequest.h
  include/tencentcloud/mgobe/v20201014/model/RemoveRoomPlayerResponse.h
  include/tencentcloud/mgobe/v20201014/model/DescribePlayerResponse.h
  include/tencentcloud/mgobe/v20201014/model/DescribeRoomRequest.h
  include/tencentcloud/mgobe/v20201014/model/RemoveRoomPlayerRequest.h
  include/tencentcloud/mgobe/v20201014/model/Team.h
  )

set(mgobe_src
  src/v20190929/MgobeClient.cpp
  src/v20201014/MgobeClient.cpp
  src/v20190929/model/DismissRoomRequest.cpp
  src/v20190929/model/DismissRoomResponse.cpp
  src/v20201014/model/DismissRoomRequest.cpp
  src/v20201014/model/ChangeRoomPlayerProfileResponse.cpp
  src/v20201014/model/ModifyRoomRequest.cpp
  src/v20201014/model/Room.cpp
  src/v20201014/model/ChangeRoomPlayerProfileRequest.cpp
  src/v20201014/model/DescribeRoomResponse.cpp
  src/v20201014/model/ModifyRoomResponse.cpp
  src/v20201014/model/DescribePlayerRequest.cpp
  src/v20201014/model/DismissRoomResponse.cpp
  src/v20201014/model/ChangeRoomPlayerStatusResponse.cpp
  src/v20201014/model/Player.cpp
  src/v20201014/model/ChangeRoomPlayerStatusRequest.cpp
  src/v20201014/model/RemoveRoomPlayerResponse.cpp
  src/v20201014/model/DescribePlayerResponse.cpp
  src/v20201014/model/DescribeRoomRequest.cpp
  src/v20201014/model/RemoveRoomPlayerRequest.cpp
  src/v20201014/model/Team.cpp
  )

set(mgobe_include
    include/tencentcloud/mgobe
  )

add_library(mgobe ${LIB_TYPE}
  ${mgobe_public_header}
  ${mgobe_public_header_model}
  ${mgobe_src})

set_target_properties(mgobe
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mgobe
  )

target_include_directories(mgobe
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mgobe
  core)

#install(FILES ${mgobe_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mgobe/v20201014)
#install(FILES ${mgobe_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mgobe/v20201014/model)
install(DIRECTORY ${mgobe_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mgobe
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
