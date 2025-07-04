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

set(smpn_public_header
  include/tencentcloud/smpn/v20190822/SmpnClient.h
  )

set(smpn_public_header_model
  include/tencentcloud/smpn/v20190822/model/DescribeSmpnChpRequest.h
  include/tencentcloud/smpn/v20190822/model/DescribeSmpnFnrResponse.h
  include/tencentcloud/smpn/v20190822/model/DescribeSmpnFnrRequest.h
  include/tencentcloud/smpn/v20190822/model/CHPRequest.h
  include/tencentcloud/smpn/v20190822/model/FNRResponse.h
  include/tencentcloud/smpn/v20190822/model/CHPResponse.h
  include/tencentcloud/smpn/v20190822/model/DescribeSmpnChpResponse.h
  include/tencentcloud/smpn/v20190822/model/FNRRequest.h
  )

set(smpn_src
  src/v20190822/SmpnClient.cpp
  src/v20190822/model/DescribeSmpnChpRequest.cpp
  src/v20190822/model/DescribeSmpnFnrResponse.cpp
  src/v20190822/model/DescribeSmpnFnrRequest.cpp
  src/v20190822/model/CHPRequest.cpp
  src/v20190822/model/FNRResponse.cpp
  src/v20190822/model/CHPResponse.cpp
  src/v20190822/model/DescribeSmpnChpResponse.cpp
  src/v20190822/model/FNRRequest.cpp
  )

set(smpn_include
    include/tencentcloud/smpn
  )

add_library(smpn ${LIB_TYPE}
  ${smpn_public_header}
  ${smpn_public_header_model}
  ${smpn_src})

set_target_properties(smpn
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}smpn
  )

target_include_directories(smpn
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(smpn
  core)

#install(FILES ${smpn_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/smpn/v20190822)
#install(FILES ${smpn_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/smpn/v20190822/model)
install(DIRECTORY ${smpn_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS smpn
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
