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

set(trocket_public_header
  include/tencentcloud/trocket/v20230308/TrocketClient.h
  )

set(trocket_public_header_model
  include/tencentcloud/trocket/v20230308/model/DescribeInstanceListResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicListResponse.h
  include/tencentcloud/trocket/v20230308/model/TagFilter.h
  include/tencentcloud/trocket/v20230308/model/Filter.h
  include/tencentcloud/trocket/v20230308/model/TopicItem.h
  include/tencentcloud/trocket/v20230308/model/Tag.h
  include/tencentcloud/trocket/v20230308/model/InstanceItem.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicListRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeInstanceListRequest.h
  )

set(trocket_src
  src/v20230308/TrocketClient.cpp
  src/v20230308/model/DescribeInstanceListResponse.cpp
  src/v20230308/model/DescribeTopicListResponse.cpp
  src/v20230308/model/TagFilter.cpp
  src/v20230308/model/Filter.cpp
  src/v20230308/model/TopicItem.cpp
  src/v20230308/model/Tag.cpp
  src/v20230308/model/InstanceItem.cpp
  src/v20230308/model/DescribeTopicListRequest.cpp
  src/v20230308/model/DescribeInstanceListRequest.cpp
  )

set(trocket_include
    include/tencentcloud/trocket
  )

add_library(trocket ${LIB_TYPE}
  ${trocket_public_header}
  ${trocket_public_header_model}
  ${trocket_src})

set_target_properties(trocket
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trocket
  )

target_include_directories(trocket
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trocket
  core)

#install(FILES ${trocket_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trocket/v20230308)
#install(FILES ${trocket_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trocket/v20230308/model)
install(DIRECTORY ${trocket_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trocket
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
