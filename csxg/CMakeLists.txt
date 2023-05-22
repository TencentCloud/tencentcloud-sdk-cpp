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

set(csxg_public_header
  include/tencentcloud/csxg/v20230303/CsxgClient.h
  )

set(csxg_public_header_model
  include/tencentcloud/csxg/v20230303/model/Describe5GAPNsResponse.h
  include/tencentcloud/csxg/v20230303/model/Modify5GInstanceAttributeRequest.h
  include/tencentcloud/csxg/v20230303/model/Delete5GInstanceResponse.h
  include/tencentcloud/csxg/v20230303/model/Modify5GInstanceAttributeResponse.h
  include/tencentcloud/csxg/v20230303/model/Describe5GInstancesResponse.h
  include/tencentcloud/csxg/v20230303/model/Describe5GAPNsRequest.h
  include/tencentcloud/csxg/v20230303/model/Create5GInstanceResponse.h
  include/tencentcloud/csxg/v20230303/model/Delete5GInstanceRequest.h
  include/tencentcloud/csxg/v20230303/model/Describe5GInstancesRequest.h
  include/tencentcloud/csxg/v20230303/model/Create5GInstanceRequest.h
  )

set(csxg_src
  src/v20230303/CsxgClient.cpp
  src/v20230303/model/Describe5GAPNsResponse.cpp
  src/v20230303/model/Modify5GInstanceAttributeRequest.cpp
  src/v20230303/model/Delete5GInstanceResponse.cpp
  src/v20230303/model/Modify5GInstanceAttributeResponse.cpp
  src/v20230303/model/Describe5GInstancesResponse.cpp
  src/v20230303/model/Describe5GAPNsRequest.cpp
  src/v20230303/model/Create5GInstanceResponse.cpp
  src/v20230303/model/Delete5GInstanceRequest.cpp
  src/v20230303/model/Describe5GInstancesRequest.cpp
  src/v20230303/model/Create5GInstanceRequest.cpp
  )

set(csxg_include
    include/tencentcloud/csxg
  )

add_library(csxg ${LIB_TYPE}
  ${csxg_public_header}
  ${csxg_public_header_model}
  ${csxg_src})

set_target_properties(csxg
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}csxg
  )

target_include_directories(csxg
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(csxg
  core)

#install(FILES ${csxg_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/csxg/v20230303)
#install(FILES ${csxg_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/csxg/v20230303/model)
install(DIRECTORY ${csxg_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS csxg
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
