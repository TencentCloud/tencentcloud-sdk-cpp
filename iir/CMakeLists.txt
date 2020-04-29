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

set(iir_public_header
  include/tencentcloud/iir/v20200417/IirClient.h
  )

set(iir_public_header_model
  include/tencentcloud/iir/v20200417/model/RegionDetected.h
  include/tencentcloud/iir/v20200417/model/ProductInfo.h
  include/tencentcloud/iir/v20200417/model/RecognizeProductResponse.h
  include/tencentcloud/iir/v20200417/model/Location.h
  include/tencentcloud/iir/v20200417/model/RecognizeProductRequest.h
  )

set(iir_src
  src/v20200417/IirClient.cpp
  src/v20200417/model/RegionDetected.cpp
  src/v20200417/model/ProductInfo.cpp
  src/v20200417/model/RecognizeProductResponse.cpp
  src/v20200417/model/Location.cpp
  src/v20200417/model/RecognizeProductRequest.cpp
  )

set(iir_include
    include/tencentcloud/iir
  )

add_library(iir ${LIB_TYPE}
  ${iir_public_header}
  ${iir_public_header_model}
  ${iir_src})

set_target_properties(iir
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iir
  )

target_include_directories(iir
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iir
  core)

#install(FILES ${iir_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iir/v20200417)
#install(FILES ${iir_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iir/v20200417/model)
install(DIRECTORY ${iir_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iir
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
