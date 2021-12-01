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

set(ivld_public_header
  include/tencentcloud/ivld/v20210903/IvldClient.h
  )

set(ivld_public_header_model
  include/tencentcloud/ivld/v20210903/model/DeleteMediaResponse.h
  include/tencentcloud/ivld/v20210903/model/ShowInfo.h
  include/tencentcloud/ivld/v20210903/model/MultiLevelTag.h
  include/tencentcloud/ivld/v20210903/model/DescribeTasksRequest.h
  include/tencentcloud/ivld/v20210903/model/L2Tag.h
  include/tencentcloud/ivld/v20210903/model/ImportMediaRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediasRequest.h
  include/tencentcloud/ivld/v20210903/model/VideoAppearInfo.h
  include/tencentcloud/ivld/v20210903/model/TextInfo.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskResponse.h
  include/tencentcloud/ivld/v20210903/model/AppearIndexPair.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskDetailResponse.h
  include/tencentcloud/ivld/v20210903/model/CreateTaskResponse.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskDetailRequest.h
  include/tencentcloud/ivld/v20210903/model/TaskFilter.h
  include/tencentcloud/ivld/v20210903/model/TextAppearInfo.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediaResponse.h
  include/tencentcloud/ivld/v20210903/model/Data.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskRequest.h
  include/tencentcloud/ivld/v20210903/model/L1Tag.h
  include/tencentcloud/ivld/v20210903/model/DescribeTasksResponse.h
  include/tencentcloud/ivld/v20210903/model/AudioInfo.h
  include/tencentcloud/ivld/v20210903/model/CreateTaskRequest.h
  include/tencentcloud/ivld/v20210903/model/L3Tag.h
  include/tencentcloud/ivld/v20210903/model/MediaFilter.h
  include/tencentcloud/ivld/v20210903/model/MediaPreknownInfo.h
  include/tencentcloud/ivld/v20210903/model/AppearInfo.h
  include/tencentcloud/ivld/v20210903/model/DeleteMediaRequest.h
  include/tencentcloud/ivld/v20210903/model/ImportMediaResponse.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediasResponse.h
  include/tencentcloud/ivld/v20210903/model/MediaInfo.h
  include/tencentcloud/ivld/v20210903/model/SortBy.h
  include/tencentcloud/ivld/v20210903/model/MediaMetadata.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediaRequest.h
  include/tencentcloud/ivld/v20210903/model/TaskInfo.h
  )

set(ivld_src
  src/v20210903/IvldClient.cpp
  src/v20210903/model/DeleteMediaResponse.cpp
  src/v20210903/model/ShowInfo.cpp
  src/v20210903/model/MultiLevelTag.cpp
  src/v20210903/model/DescribeTasksRequest.cpp
  src/v20210903/model/L2Tag.cpp
  src/v20210903/model/ImportMediaRequest.cpp
  src/v20210903/model/DescribeMediasRequest.cpp
  src/v20210903/model/VideoAppearInfo.cpp
  src/v20210903/model/TextInfo.cpp
  src/v20210903/model/DescribeTaskResponse.cpp
  src/v20210903/model/AppearIndexPair.cpp
  src/v20210903/model/DescribeTaskDetailResponse.cpp
  src/v20210903/model/CreateTaskResponse.cpp
  src/v20210903/model/DescribeTaskDetailRequest.cpp
  src/v20210903/model/TaskFilter.cpp
  src/v20210903/model/TextAppearInfo.cpp
  src/v20210903/model/DescribeMediaResponse.cpp
  src/v20210903/model/Data.cpp
  src/v20210903/model/DescribeTaskRequest.cpp
  src/v20210903/model/L1Tag.cpp
  src/v20210903/model/DescribeTasksResponse.cpp
  src/v20210903/model/AudioInfo.cpp
  src/v20210903/model/CreateTaskRequest.cpp
  src/v20210903/model/L3Tag.cpp
  src/v20210903/model/MediaFilter.cpp
  src/v20210903/model/MediaPreknownInfo.cpp
  src/v20210903/model/AppearInfo.cpp
  src/v20210903/model/DeleteMediaRequest.cpp
  src/v20210903/model/ImportMediaResponse.cpp
  src/v20210903/model/DescribeMediasResponse.cpp
  src/v20210903/model/MediaInfo.cpp
  src/v20210903/model/SortBy.cpp
  src/v20210903/model/MediaMetadata.cpp
  src/v20210903/model/DescribeMediaRequest.cpp
  src/v20210903/model/TaskInfo.cpp
  )

set(ivld_include
    include/tencentcloud/ivld
  )

add_library(ivld ${LIB_TYPE}
  ${ivld_public_header}
  ${ivld_public_header_model}
  ${ivld_src})

set_target_properties(ivld
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ivld
  )

target_include_directories(ivld
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ivld
  core)

#install(FILES ${ivld_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ivld/v20210903)
#install(FILES ${ivld_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ivld/v20210903/model)
install(DIRECTORY ${ivld_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ivld
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
