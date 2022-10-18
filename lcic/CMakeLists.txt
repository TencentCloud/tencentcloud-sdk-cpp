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

set(lcic_public_header
  include/tencentcloud/lcic/v20220817/LcicClient.h
  )

set(lcic_public_header_model
  include/tencentcloud/lcic/v20220817/model/CreateRoomRequest.h
  include/tencentcloud/lcic/v20220817/model/SetAppCustomContentRequest.h
  include/tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeUserRequest.h
  include/tencentcloud/lcic/v20220817/model/CreateDocumentResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsRequest.h
  include/tencentcloud/lcic/v20220817/model/BindDocumentToRoomRequest.h
  include/tencentcloud/lcic/v20220817/model/CreateDocumentRequest.h
  include/tencentcloud/lcic/v20220817/model/SetAppCustomContentResponse.h
  include/tencentcloud/lcic/v20220817/model/LoginOriginIdResponse.h
  include/tencentcloud/lcic/v20220817/model/LoginUserResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/DeleteRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/AppCustomContent.h
  include/tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsResponse.h
  include/tencentcloud/lcic/v20220817/model/CreateSupervisorResponse.h
  include/tencentcloud/lcic/v20220817/model/DeleteRoomRequest.h
  include/tencentcloud/lcic/v20220817/model/RegisterUserResponse.h
  include/tencentcloud/lcic/v20220817/model/ModifyAppResponse.h
  include/tencentcloud/lcic/v20220817/model/MemberRecord.h
  include/tencentcloud/lcic/v20220817/model/ModifyAppRequest.h
  include/tencentcloud/lcic/v20220817/model/CreateSupervisorRequest.h
  include/tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomRequest.h
  include/tencentcloud/lcic/v20220817/model/LoginOriginIdRequest.h
  include/tencentcloud/lcic/v20220817/model/RegisterUserRequest.h
  include/tencentcloud/lcic/v20220817/model/LoginUserRequest.h
  include/tencentcloud/lcic/v20220817/model/BindDocumentToRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/CreateRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeUserResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h
  )

set(lcic_src
  src/v20220817/LcicClient.cpp
  src/v20220817/model/CreateRoomRequest.cpp
  src/v20220817/model/SetAppCustomContentRequest.cpp
  src/v20220817/model/UnbindDocumentFromRoomResponse.cpp
  src/v20220817/model/DescribeUserRequest.cpp
  src/v20220817/model/CreateDocumentResponse.cpp
  src/v20220817/model/DescribeRoomStatisticsRequest.cpp
  src/v20220817/model/BindDocumentToRoomRequest.cpp
  src/v20220817/model/CreateDocumentRequest.cpp
  src/v20220817/model/SetAppCustomContentResponse.cpp
  src/v20220817/model/LoginOriginIdResponse.cpp
  src/v20220817/model/LoginUserResponse.cpp
  src/v20220817/model/DescribeRoomResponse.cpp
  src/v20220817/model/DeleteRoomResponse.cpp
  src/v20220817/model/AppCustomContent.cpp
  src/v20220817/model/DescribeRoomStatisticsResponse.cpp
  src/v20220817/model/CreateSupervisorResponse.cpp
  src/v20220817/model/DeleteRoomRequest.cpp
  src/v20220817/model/RegisterUserResponse.cpp
  src/v20220817/model/ModifyAppResponse.cpp
  src/v20220817/model/MemberRecord.cpp
  src/v20220817/model/ModifyAppRequest.cpp
  src/v20220817/model/CreateSupervisorRequest.cpp
  src/v20220817/model/UnbindDocumentFromRoomRequest.cpp
  src/v20220817/model/LoginOriginIdRequest.cpp
  src/v20220817/model/RegisterUserRequest.cpp
  src/v20220817/model/LoginUserRequest.cpp
  src/v20220817/model/BindDocumentToRoomResponse.cpp
  src/v20220817/model/CreateRoomResponse.cpp
  src/v20220817/model/DescribeUserResponse.cpp
  src/v20220817/model/DescribeRoomRequest.cpp
  )

set(lcic_include
    include/tencentcloud/lcic
  )

add_library(lcic ${LIB_TYPE}
  ${lcic_public_header}
  ${lcic_public_header_model}
  ${lcic_src})

set_target_properties(lcic
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lcic
  )

target_include_directories(lcic
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lcic
  core)

#install(FILES ${lcic_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lcic/v20220817)
#install(FILES ${lcic_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lcic/v20220817/model)
install(DIRECTORY ${lcic_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lcic
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
