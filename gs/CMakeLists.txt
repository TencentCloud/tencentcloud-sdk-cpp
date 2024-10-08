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

set(gs_public_header
  include/tencentcloud/gs/v20191118/GsClient.h
  )

set(gs_public_header_model
  include/tencentcloud/gs/v20191118/model/StartPublishStreamToCSSResponse.h
  include/tencentcloud/gs/v20191118/model/StopGameRequest.h
  include/tencentcloud/gs/v20191118/model/SaveGameArchiveResponse.h
  include/tencentcloud/gs/v20191118/model/StopPublishStreamRequest.h
  include/tencentcloud/gs/v20191118/model/StopPublishStreamResponse.h
  include/tencentcloud/gs/v20191118/model/TrylockWorkerResponse.h
  include/tencentcloud/gs/v20191118/model/SwitchGameArchiveRequest.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamToCSSRequest.h
  include/tencentcloud/gs/v20191118/model/DescribeInstancesCountResponse.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamResponse.h
  include/tencentcloud/gs/v20191118/model/CreateSessionRequest.h
  include/tencentcloud/gs/v20191118/model/CreateSessionResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeInstancesCountRequest.h
  include/tencentcloud/gs/v20191118/model/SaveGameArchiveRequest.h
  include/tencentcloud/gs/v20191118/model/TrylockWorkerRequest.h
  include/tencentcloud/gs/v20191118/model/SwitchGameArchiveResponse.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamRequest.h
  include/tencentcloud/gs/v20191118/model/StopGameResponse.h
  )

set(gs_src
  src/v20191118/GsClient.cpp
  src/v20191118/model/StartPublishStreamToCSSResponse.cpp
  src/v20191118/model/StopGameRequest.cpp
  src/v20191118/model/SaveGameArchiveResponse.cpp
  src/v20191118/model/StopPublishStreamRequest.cpp
  src/v20191118/model/StopPublishStreamResponse.cpp
  src/v20191118/model/TrylockWorkerResponse.cpp
  src/v20191118/model/SwitchGameArchiveRequest.cpp
  src/v20191118/model/StartPublishStreamToCSSRequest.cpp
  src/v20191118/model/DescribeInstancesCountResponse.cpp
  src/v20191118/model/StartPublishStreamResponse.cpp
  src/v20191118/model/CreateSessionRequest.cpp
  src/v20191118/model/CreateSessionResponse.cpp
  src/v20191118/model/DescribeInstancesCountRequest.cpp
  src/v20191118/model/SaveGameArchiveRequest.cpp
  src/v20191118/model/TrylockWorkerRequest.cpp
  src/v20191118/model/SwitchGameArchiveResponse.cpp
  src/v20191118/model/StartPublishStreamRequest.cpp
  src/v20191118/model/StopGameResponse.cpp
  )

set(gs_include
    include/tencentcloud/gs
  )

add_library(gs ${LIB_TYPE}
  ${gs_public_header}
  ${gs_public_header_model}
  ${gs_src})

set_target_properties(gs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gs
  )

target_include_directories(gs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gs
  core)

#install(FILES ${gs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gs/v20191118)
#install(FILES ${gs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gs/v20191118/model)
install(DIRECTORY ${gs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
