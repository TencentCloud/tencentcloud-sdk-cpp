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

set(cdwdoris_public_header
  include/tencentcloud/cdwdoris/v20211228/CdwdorisClient.h
  )

set(cdwdoris_public_header_model
  include/tencentcloud/cdwdoris/v20211228/model/Tag.h
  include/tencentcloud/cdwdoris/v20211228/model/InstanceNode.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstancesRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/SearchTags.h
  include/tencentcloud/cdwdoris/v20211228/model/AttachCBSSpec.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRequest.h
  include/tencentcloud/cdwdoris/v20211228/model/InstanceInfo.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstanceResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/DescribeInstancesResponse.h
  include/tencentcloud/cdwdoris/v20211228/model/NodesSummary.h
  )

set(cdwdoris_src
  src/v20211228/CdwdorisClient.cpp
  src/v20211228/model/Tag.cpp
  src/v20211228/model/InstanceNode.cpp
  src/v20211228/model/DescribeInstancesRequest.cpp
  src/v20211228/model/DescribeInstanceNodesResponse.cpp
  src/v20211228/model/DescribeInstanceRequest.cpp
  src/v20211228/model/SearchTags.cpp
  src/v20211228/model/AttachCBSSpec.cpp
  src/v20211228/model/DescribeInstanceNodesRequest.cpp
  src/v20211228/model/InstanceInfo.cpp
  src/v20211228/model/DescribeInstanceResponse.cpp
  src/v20211228/model/DescribeInstancesResponse.cpp
  src/v20211228/model/NodesSummary.cpp
  )

set(cdwdoris_include
    include/tencentcloud/cdwdoris
  )

add_library(cdwdoris ${LIB_TYPE}
  ${cdwdoris_public_header}
  ${cdwdoris_public_header_model}
  ${cdwdoris_src})

set_target_properties(cdwdoris
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdwdoris
  )

target_include_directories(cdwdoris
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdwdoris
  core)

#install(FILES ${cdwdoris_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwdoris/v20211228)
#install(FILES ${cdwdoris_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwdoris/v20211228/model)
install(DIRECTORY ${cdwdoris_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdwdoris
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
