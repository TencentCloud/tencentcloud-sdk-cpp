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

set(cmq_public_header
  include/tencentcloud/cmq/v20190304/CmqClient.h
  )

set(cmq_public_header_model
  include/tencentcloud/cmq/v20190304/model/DescribeQueueDetailResponse.h
  include/tencentcloud/cmq/v20190304/model/DeadLetterPolicy.h
  include/tencentcloud/cmq/v20190304/model/Filter.h
  include/tencentcloud/cmq/v20190304/model/TopicSet.h
  include/tencentcloud/cmq/v20190304/model/Tag.h
  include/tencentcloud/cmq/v20190304/model/DescribeTopicDetailResponse.h
  include/tencentcloud/cmq/v20190304/model/TransactionPolicy.h
  include/tencentcloud/cmq/v20190304/model/DescribeTopicDetailRequest.h
  include/tencentcloud/cmq/v20190304/model/QueueSet.h
  include/tencentcloud/cmq/v20190304/model/DescribeQueueDetailRequest.h
  include/tencentcloud/cmq/v20190304/model/DeadLetterSource.h
  )

set(cmq_src
  src/v20190304/CmqClient.cpp
  src/v20190304/model/DescribeQueueDetailResponse.cpp
  src/v20190304/model/DeadLetterPolicy.cpp
  src/v20190304/model/Filter.cpp
  src/v20190304/model/TopicSet.cpp
  src/v20190304/model/Tag.cpp
  src/v20190304/model/DescribeTopicDetailResponse.cpp
  src/v20190304/model/TransactionPolicy.cpp
  src/v20190304/model/DescribeTopicDetailRequest.cpp
  src/v20190304/model/QueueSet.cpp
  src/v20190304/model/DescribeQueueDetailRequest.cpp
  src/v20190304/model/DeadLetterSource.cpp
  )

set(cmq_include
    include/tencentcloud/cmq
  )

add_library(cmq ${LIB_TYPE}
  ${cmq_public_header}
  ${cmq_public_header_model}
  ${cmq_src})

set_target_properties(cmq
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cmq
  )

target_include_directories(cmq
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cmq
  core)

#install(FILES ${cmq_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cmq/v20190304)
#install(FILES ${cmq_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cmq/v20190304/model)
install(DIRECTORY ${cmq_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cmq
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
