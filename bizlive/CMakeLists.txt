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

set(bizlive_public_header
  include/tencentcloud/bizlive/v20190313/BizliveClient.h
  )

set(bizlive_public_header_model
  include/tencentcloud/bizlive/v20190313/model/DayStreamPlayInfo.h
  include/tencentcloud/bizlive/v20190313/model/DescribeWorkersResponse.h
  include/tencentcloud/bizlive/v20190313/model/ForbidLiveStreamResponse.h
  include/tencentcloud/bizlive/v20190313/model/WorkerRegionInfo.h
  include/tencentcloud/bizlive/v20190313/model/RegisterIMRequest.h
  include/tencentcloud/bizlive/v20190313/model/StopGameResponse.h
  include/tencentcloud/bizlive/v20190313/model/ForbidLiveStreamRequest.h
  include/tencentcloud/bizlive/v20190313/model/StopGameRequest.h
  include/tencentcloud/bizlive/v20190313/model/RegisterIMResponse.h
  include/tencentcloud/bizlive/v20190313/model/DescribeWorkersRequest.h
  include/tencentcloud/bizlive/v20190313/model/CreateSessionResponse.h
  include/tencentcloud/bizlive/v20190313/model/DescribeStreamPlayInfoListResponse.h
  include/tencentcloud/bizlive/v20190313/model/CreateSessionRequest.h
  include/tencentcloud/bizlive/v20190313/model/DescribeStreamPlayInfoListRequest.h
  )

set(bizlive_src
  src/v20190313/BizliveClient.cpp
  src/v20190313/model/DayStreamPlayInfo.cpp
  src/v20190313/model/DescribeWorkersResponse.cpp
  src/v20190313/model/ForbidLiveStreamResponse.cpp
  src/v20190313/model/WorkerRegionInfo.cpp
  src/v20190313/model/RegisterIMRequest.cpp
  src/v20190313/model/StopGameResponse.cpp
  src/v20190313/model/ForbidLiveStreamRequest.cpp
  src/v20190313/model/StopGameRequest.cpp
  src/v20190313/model/RegisterIMResponse.cpp
  src/v20190313/model/DescribeWorkersRequest.cpp
  src/v20190313/model/CreateSessionResponse.cpp
  src/v20190313/model/DescribeStreamPlayInfoListResponse.cpp
  src/v20190313/model/CreateSessionRequest.cpp
  src/v20190313/model/DescribeStreamPlayInfoListRequest.cpp
  )

set(bizlive_include
    include/tencentcloud/bizlive
  )

add_library(bizlive ${LIB_TYPE}
  ${bizlive_public_header}
  ${bizlive_public_header_model}
  ${bizlive_src})

set_target_properties(bizlive
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bizlive
  )

target_include_directories(bizlive
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bizlive
  core)

#install(FILES ${bizlive_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bizlive/v20190313)
#install(FILES ${bizlive_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bizlive/v20190313/model)
install(DIRECTORY ${bizlive_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bizlive
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
