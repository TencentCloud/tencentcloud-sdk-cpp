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

set(trtc_public_header
  include/tencentcloud/trtc/v20190722/TrtcClient.h
  )

set(trtc_public_header_model
  include/tencentcloud/trtc/v20190722/model/DissolveRoomRequest.h
  include/tencentcloud/trtc/v20190722/model/DissolveRoomResponse.h
  include/tencentcloud/trtc/v20190722/model/KickOutUserRequest.h
  include/tencentcloud/trtc/v20190722/model/KickOutUserResponse.h
  )

set(trtc_src
  src/v20190722/TrtcClient.cpp
  src/v20190722/model/DissolveRoomRequest.cpp
  src/v20190722/model/DissolveRoomResponse.cpp
  src/v20190722/model/KickOutUserRequest.cpp
  src/v20190722/model/KickOutUserResponse.cpp
  )

set(trtc_include
    include/tencentcloud/trtc
  )

add_library(trtc ${LIB_TYPE}
  ${trtc_public_header}
  ${trtc_public_header_model}
  ${trtc_src})

set_target_properties(trtc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trtc
  )

target_include_directories(trtc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trtc
  core)

#install(FILES ${trtc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trtc/v20190722)
#install(FILES ${trtc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trtc/v20190722/model)
install(DIRECTORY ${trtc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trtc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
