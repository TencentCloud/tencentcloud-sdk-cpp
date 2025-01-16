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

set(vpc_public_header
  include/tencentcloud/vpc/v20170312/VpcClient.h
  )

set(vpc_public_header_model
  include/tencentcloud/vpc/v20170312/model/DescribeNatsEipsInternalResponse.h
  include/tencentcloud/vpc/v20170312/model/DescribeNatsEipsInternalRequest.h
  )

set(vpc_src
  src/v20170312/VpcClient.cpp
  src/v20170312/model/DescribeNatsEipsInternalResponse.cpp
  src/v20170312/model/DescribeNatsEipsInternalRequest.cpp
  )

set(vpc_include
    include/tencentcloud/vpc
  )

add_library(vpc ${LIB_TYPE}
  ${vpc_public_header}
  ${vpc_public_header_model}
  ${vpc_src})

set_target_properties(vpc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vpc
  )

target_include_directories(vpc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vpc
  core)

#install(FILES ${vpc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vpc/v20170312)
#install(FILES ${vpc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vpc/v20170312/model)
install(DIRECTORY ${vpc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vpc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
