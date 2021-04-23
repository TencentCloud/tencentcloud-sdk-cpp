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

set(tse_public_header
  include/tencentcloud/tse/v20201207/TseClient.h
  )

set(tse_public_header_model
  include/tencentcloud/tse/v20201207/model/DescribeSREInstancesRequest.h
  include/tencentcloud/tse/v20201207/model/ManageConfigRequest.h
  include/tencentcloud/tse/v20201207/model/SREInstance.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstancesResponse.h
  include/tencentcloud/tse/v20201207/model/Filter.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressRequest.h
  include/tencentcloud/tse/v20201207/model/ManageConfigResponse.h
  )

set(tse_src
  src/v20201207/TseClient.cpp
  src/v20201207/model/DescribeSREInstancesRequest.cpp
  src/v20201207/model/ManageConfigRequest.cpp
  src/v20201207/model/SREInstance.cpp
  src/v20201207/model/DescribeSREInstanceAccessAddressResponse.cpp
  src/v20201207/model/DescribeSREInstancesResponse.cpp
  src/v20201207/model/Filter.cpp
  src/v20201207/model/DescribeSREInstanceAccessAddressRequest.cpp
  src/v20201207/model/ManageConfigResponse.cpp
  )

set(tse_include
    include/tencentcloud/tse
  )

add_library(tse ${LIB_TYPE}
  ${tse_public_header}
  ${tse_public_header_model}
  ${tse_src})

set_target_properties(tse
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tse
  )

target_include_directories(tse
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tse
  core)

#install(FILES ${tse_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tse/v20201207)
#install(FILES ${tse_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tse/v20201207/model)
install(DIRECTORY ${tse_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tse
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
