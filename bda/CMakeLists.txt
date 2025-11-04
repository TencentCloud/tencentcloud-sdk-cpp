#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(bda_public_header
  include/tencentcloud/bda/v20200324/BdaClient.h
  )

set(bda_public_header_model
  include/tencentcloud/bda/v20200324/model/CreateSegmentationTaskRequest.h
  include/tencentcloud/bda/v20200324/model/CreateSegmentationTaskResponse.h
  include/tencentcloud/bda/v20200324/model/DescribeSegmentationTaskResponse.h
  include/tencentcloud/bda/v20200324/model/VideoBasicInformation.h
  include/tencentcloud/bda/v20200324/model/SegmentPortraitPicResponse.h
  include/tencentcloud/bda/v20200324/model/SegmentationOptions.h
  include/tencentcloud/bda/v20200324/model/TerminateSegmentationTaskResponse.h
  include/tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicResponse.h
  include/tencentcloud/bda/v20200324/model/SegmentPortraitPicRequest.h
  include/tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicRequest.h
  include/tencentcloud/bda/v20200324/model/DescribeSegmentationTaskRequest.h
  include/tencentcloud/bda/v20200324/model/TerminateSegmentationTaskRequest.h
  include/tencentcloud/bda/v20200324/model/ImageRect.h
  )

set(bda_src
  src/v20200324/BdaClient.cpp
  src/v20200324/model/CreateSegmentationTaskRequest.cpp
  src/v20200324/model/CreateSegmentationTaskResponse.cpp
  src/v20200324/model/DescribeSegmentationTaskResponse.cpp
  src/v20200324/model/VideoBasicInformation.cpp
  src/v20200324/model/SegmentPortraitPicResponse.cpp
  src/v20200324/model/SegmentationOptions.cpp
  src/v20200324/model/TerminateSegmentationTaskResponse.cpp
  src/v20200324/model/SegmentCustomizedPortraitPicResponse.cpp
  src/v20200324/model/SegmentPortraitPicRequest.cpp
  src/v20200324/model/SegmentCustomizedPortraitPicRequest.cpp
  src/v20200324/model/DescribeSegmentationTaskRequest.cpp
  src/v20200324/model/TerminateSegmentationTaskRequest.cpp
  src/v20200324/model/ImageRect.cpp
  )

set(bda_include
    include/tencentcloud/bda
  )

add_library(bda ${LIB_TYPE}
  ${bda_public_header}
  ${bda_public_header_model}
  ${bda_src})

set_target_properties(bda
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bda
  )

target_include_directories(bda
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bda
  core)

#install(FILES ${bda_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bda/v20200324)
#install(FILES ${bda_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bda/v20200324/model)
install(DIRECTORY ${bda_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bda
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
