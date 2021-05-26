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

set(eis_public_header
  include/tencentcloud/eis/v20200715/EisClient.h
  )

set(eis_public_header_model
  include/tencentcloud/eis/v20200715/model/EisConnectionOperation.h
  include/tencentcloud/eis/v20200715/model/ListEisConnectorsRequest.h
  include/tencentcloud/eis/v20200715/model/EisConnectorSummary.h
  include/tencentcloud/eis/v20200715/model/ListEisConnectorOperationsResponse.h
  include/tencentcloud/eis/v20200715/model/DescribeEisConnectorConfigResponse.h
  include/tencentcloud/eis/v20200715/model/ListEisConnectorOperationsRequest.h
  include/tencentcloud/eis/v20200715/model/DescribeEisConnectorConfigRequest.h
  include/tencentcloud/eis/v20200715/model/ListEisConnectorsResponse.h
  )

set(eis_src
  src/v20200715/EisClient.cpp
  src/v20200715/model/EisConnectionOperation.cpp
  src/v20200715/model/ListEisConnectorsRequest.cpp
  src/v20200715/model/EisConnectorSummary.cpp
  src/v20200715/model/ListEisConnectorOperationsResponse.cpp
  src/v20200715/model/DescribeEisConnectorConfigResponse.cpp
  src/v20200715/model/ListEisConnectorOperationsRequest.cpp
  src/v20200715/model/DescribeEisConnectorConfigRequest.cpp
  src/v20200715/model/ListEisConnectorsResponse.cpp
  )

set(eis_include
    include/tencentcloud/eis
  )

add_library(eis ${LIB_TYPE}
  ${eis_public_header}
  ${eis_public_header_model}
  ${eis_src})

set_target_properties(eis
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eis
  )

target_include_directories(eis
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(eis
  core)

#install(FILES ${eis_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/eis/v20200715)
#install(FILES ${eis_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/eis/v20200715/model)
install(DIRECTORY ${eis_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS eis
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
