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

set(tics_public_header
  include/tencentcloud/tics/v20181115/TicsClient.h
  )

set(tics_public_header_model
  include/tencentcloud/tics/v20181115/model/DescribeDomainInfoResponse.h
  include/tencentcloud/tics/v20181115/model/DescribeIpInfoRequest.h
  include/tencentcloud/tics/v20181115/model/DescribeThreatInfoResponse.h
  include/tencentcloud/tics/v20181115/model/DescribeDomainInfoRequest.h
  include/tencentcloud/tics/v20181115/model/IntelligenceType.h
  include/tencentcloud/tics/v20181115/model/FileInfoType.h
  include/tencentcloud/tics/v20181115/model/TagType.h
  include/tencentcloud/tics/v20181115/model/DescribeFileInfoResponse.h
  include/tencentcloud/tics/v20181115/model/DescribeThreatInfoRequest.h
  include/tencentcloud/tics/v20181115/model/DescribeFileInfoRequest.h
  include/tencentcloud/tics/v20181115/model/DescribeIpInfoResponse.h
  )

set(tics_src
  src/v20181115/TicsClient.cpp
  src/v20181115/model/DescribeDomainInfoResponse.cpp
  src/v20181115/model/DescribeIpInfoRequest.cpp
  src/v20181115/model/DescribeThreatInfoResponse.cpp
  src/v20181115/model/DescribeDomainInfoRequest.cpp
  src/v20181115/model/IntelligenceType.cpp
  src/v20181115/model/FileInfoType.cpp
  src/v20181115/model/TagType.cpp
  src/v20181115/model/DescribeFileInfoResponse.cpp
  src/v20181115/model/DescribeThreatInfoRequest.cpp
  src/v20181115/model/DescribeFileInfoRequest.cpp
  src/v20181115/model/DescribeIpInfoResponse.cpp
  )

set(tics_include
    include/tencentcloud/tics
  )

add_library(tics ${LIB_TYPE}
  ${tics_public_header}
  ${tics_public_header_model}
  ${tics_src})

set_target_properties(tics
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tics
  )

target_include_directories(tics
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tics
  core)

#install(FILES ${tics_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tics/v20181115)
#install(FILES ${tics_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tics/v20181115/model)
install(DIRECTORY ${tics_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tics
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
