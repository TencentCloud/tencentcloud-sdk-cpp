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

set(bri_public_header
  include/tencentcloud/bri/v20190328/BriClient.h
  )

set(bri_public_header_model
  include/tencentcloud/bri/v20190328/model/DescribeBRIRequest.h
  include/tencentcloud/bri/v20190328/model/BRIRequest.h
  include/tencentcloud/bri/v20190328/model/DescribeBRIResponse.h
  include/tencentcloud/bri/v20190328/model/BRIResponse.h
  )

set(bri_src
  src/v20190328/BriClient.cpp
  src/v20190328/model/DescribeBRIRequest.cpp
  src/v20190328/model/BRIRequest.cpp
  src/v20190328/model/DescribeBRIResponse.cpp
  src/v20190328/model/BRIResponse.cpp
  )

set(bri_include
    include/tencentcloud/bri
  )

add_library(bri ${LIB_TYPE}
  ${bri_public_header}
  ${bri_public_header_model}
  ${bri_src})

set_target_properties(bri
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bri
  )

target_include_directories(bri
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bri
  core)

#install(FILES ${bri_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bri/v20190328)
#install(FILES ${bri_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bri/v20190328/model)
install(DIRECTORY ${bri_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bri
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
