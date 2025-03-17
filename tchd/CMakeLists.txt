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

set(tchd_public_header
  include/tencentcloud/tchd/v20230306/TchdClient.h
  )

set(tchd_public_header_model
  include/tencentcloud/tchd/v20230306/model/DescribeEventStatisticsResponse.h
  include/tencentcloud/tchd/v20230306/model/DescribeEventsResponse.h
  include/tencentcloud/tchd/v20230306/model/EventDetail.h
  include/tencentcloud/tchd/v20230306/model/ProductEventList.h
  include/tencentcloud/tchd/v20230306/model/TotalStatus.h
  include/tencentcloud/tchd/v20230306/model/DescribeEventStatisticsRequest.h
  include/tencentcloud/tchd/v20230306/model/DescribeEventsRequest.h
  )

set(tchd_src
  src/v20230306/TchdClient.cpp
  src/v20230306/model/DescribeEventStatisticsResponse.cpp
  src/v20230306/model/DescribeEventsResponse.cpp
  src/v20230306/model/EventDetail.cpp
  src/v20230306/model/ProductEventList.cpp
  src/v20230306/model/TotalStatus.cpp
  src/v20230306/model/DescribeEventStatisticsRequest.cpp
  src/v20230306/model/DescribeEventsRequest.cpp
  )

set(tchd_include
    include/tencentcloud/tchd
  )

add_library(tchd ${LIB_TYPE}
  ${tchd_public_header}
  ${tchd_public_header_model}
  ${tchd_src})

set_target_properties(tchd
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tchd
  )

target_include_directories(tchd
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tchd
  core)

#install(FILES ${tchd_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tchd/v20230306)
#install(FILES ${tchd_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tchd/v20230306/model)
install(DIRECTORY ${tchd_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tchd
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
