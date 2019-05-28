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

set(habo_public_header
  include/tencentcloud/habo/v20181203/HaboClient.h
  )

set(habo_public_header_model
  include/tencentcloud/habo/v20181203/model/DescribeStatusRequest.h
  include/tencentcloud/habo/v20181203/model/StartAnalyseResponse.h
  include/tencentcloud/habo/v20181203/model/StartAnalyseRequest.h
  include/tencentcloud/habo/v20181203/model/DescribeStatusResponse.h
  )

set(habo_src
  src/v20181203/HaboClient.cpp
  src/v20181203/model/DescribeStatusRequest.cpp
  src/v20181203/model/StartAnalyseResponse.cpp
  src/v20181203/model/StartAnalyseRequest.cpp
  src/v20181203/model/DescribeStatusResponse.cpp
  )

set(habo_include
    include/tencentcloud/habo
  )

add_library(habo ${LIB_TYPE}
  ${habo_public_header}
  ${habo_public_header_model}
  ${habo_src})

set_target_properties(habo
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}habo
  )

target_include_directories(habo
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(habo
  core)

#install(FILES ${habo_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/habo/v20181203)
#install(FILES ${habo_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/habo/v20181203/model)
install(DIRECTORY ${habo_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS habo
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
