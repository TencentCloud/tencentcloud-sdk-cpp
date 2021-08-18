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

set(pds_public_header
  include/tencentcloud/pds/v20210701/PdsClient.h
  )

set(pds_public_header_model
  include/tencentcloud/pds/v20210701/model/DescribeStockEstimationResponse.h
  include/tencentcloud/pds/v20210701/model/DescribeNewUserAcquisitionRequest.h
  include/tencentcloud/pds/v20210701/model/Score.h
  include/tencentcloud/pds/v20210701/model/UserInfos.h
  include/tencentcloud/pds/v20210701/model/DescribeStockEstimationRequest.h
  include/tencentcloud/pds/v20210701/model/DescribeNewUserAcquisitionResponse.h
  )

set(pds_src
  src/v20210701/PdsClient.cpp
  src/v20210701/model/DescribeStockEstimationResponse.cpp
  src/v20210701/model/DescribeNewUserAcquisitionRequest.cpp
  src/v20210701/model/Score.cpp
  src/v20210701/model/UserInfos.cpp
  src/v20210701/model/DescribeStockEstimationRequest.cpp
  src/v20210701/model/DescribeNewUserAcquisitionResponse.cpp
  )

set(pds_include
    include/tencentcloud/pds
  )

add_library(pds ${LIB_TYPE}
  ${pds_public_header}
  ${pds_public_header_model}
  ${pds_src})

set_target_properties(pds
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}pds
  )

target_include_directories(pds
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(pds
  core)

#install(FILES ${pds_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/pds/v20210701)
#install(FILES ${pds_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/pds/v20210701/model)
install(DIRECTORY ${pds_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS pds
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
