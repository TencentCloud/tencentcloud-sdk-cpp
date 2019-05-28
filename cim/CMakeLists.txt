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

set(cim_public_header
  include/tencentcloud/cim/v20190318/CimClient.h
  )

set(cim_public_header_model
  include/tencentcloud/cim/v20190318/model/DescribeSdkAppidResponse.h
  include/tencentcloud/cim/v20190318/model/DescribeSdkAppidRequest.h
  )

set(cim_src
  src/v20190318/CimClient.cpp
  src/v20190318/model/DescribeSdkAppidResponse.cpp
  src/v20190318/model/DescribeSdkAppidRequest.cpp
  )

set(cim_include
    include/tencentcloud/cim
  )

add_library(cim ${LIB_TYPE}
  ${cim_public_header}
  ${cim_public_header_model}
  ${cim_src})

set_target_properties(cim
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cim
  )

target_include_directories(cim
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cim
  core)

#install(FILES ${cim_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cim/v20190318)
#install(FILES ${cim_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cim/v20190318/model)
install(DIRECTORY ${cim_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cim
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
