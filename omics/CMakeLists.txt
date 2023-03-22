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

set(omics_public_header
  include/tencentcloud/omics/v20221128/OmicsClient.h
  )

set(omics_public_header_model
  include/tencentcloud/omics/v20221128/model/RunGroup.h
  include/tencentcloud/omics/v20221128/model/Filter.h
  include/tencentcloud/omics/v20221128/model/DescribeRunsRequest.h
  include/tencentcloud/omics/v20221128/model/Run.h
  include/tencentcloud/omics/v20221128/model/RunApplicationResponse.h
  include/tencentcloud/omics/v20221128/model/ExecutionTime.h
  include/tencentcloud/omics/v20221128/model/DescribeRunGroupsRequest.h
  include/tencentcloud/omics/v20221128/model/GetRunCallsResponse.h
  include/tencentcloud/omics/v20221128/model/GetRunStatusRequest.h
  include/tencentcloud/omics/v20221128/model/DescribeRunsResponse.h
  include/tencentcloud/omics/v20221128/model/ImportTableFileResponse.h
  include/tencentcloud/omics/v20221128/model/DescribeRunGroupsResponse.h
  include/tencentcloud/omics/v20221128/model/RunApplicationRequest.h
  include/tencentcloud/omics/v20221128/model/RunOption.h
  include/tencentcloud/omics/v20221128/model/RunStatusCount.h
  include/tencentcloud/omics/v20221128/model/RunMetadata.h
  include/tencentcloud/omics/v20221128/model/ImportTableFileRequest.h
  include/tencentcloud/omics/v20221128/model/GetRunStatusResponse.h
  include/tencentcloud/omics/v20221128/model/GetRunCallsRequest.h
  )

set(omics_src
  src/v20221128/OmicsClient.cpp
  src/v20221128/model/RunGroup.cpp
  src/v20221128/model/Filter.cpp
  src/v20221128/model/DescribeRunsRequest.cpp
  src/v20221128/model/Run.cpp
  src/v20221128/model/RunApplicationResponse.cpp
  src/v20221128/model/ExecutionTime.cpp
  src/v20221128/model/DescribeRunGroupsRequest.cpp
  src/v20221128/model/GetRunCallsResponse.cpp
  src/v20221128/model/GetRunStatusRequest.cpp
  src/v20221128/model/DescribeRunsResponse.cpp
  src/v20221128/model/ImportTableFileResponse.cpp
  src/v20221128/model/DescribeRunGroupsResponse.cpp
  src/v20221128/model/RunApplicationRequest.cpp
  src/v20221128/model/RunOption.cpp
  src/v20221128/model/RunStatusCount.cpp
  src/v20221128/model/RunMetadata.cpp
  src/v20221128/model/ImportTableFileRequest.cpp
  src/v20221128/model/GetRunStatusResponse.cpp
  src/v20221128/model/GetRunCallsRequest.cpp
  )

set(omics_include
    include/tencentcloud/omics
  )

add_library(omics ${LIB_TYPE}
  ${omics_public_header}
  ${omics_public_header_model}
  ${omics_src})

set_target_properties(omics
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}omics
  )

target_include_directories(omics
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(omics
  core)

#install(FILES ${omics_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/omics/v20221128)
#install(FILES ${omics_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/omics/v20221128/model)
install(DIRECTORY ${omics_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS omics
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
