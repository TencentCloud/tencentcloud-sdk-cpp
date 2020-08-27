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

set(ccc_public_header
  include/tencentcloud/ccc/v20200210/CccClient.h
  )

set(ccc_public_header_model
  include/tencentcloud/ccc/v20200210/model/DescribeTelCdrResponse.h
  include/tencentcloud/ccc/v20200210/model/TelCdrInfo.h
  include/tencentcloud/ccc/v20200210/model/SeatUserInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h
  )

set(ccc_src
  src/v20200210/CccClient.cpp
  src/v20200210/model/DescribeTelCdrResponse.cpp
  src/v20200210/model/TelCdrInfo.cpp
  src/v20200210/model/SeatUserInfo.cpp
  src/v20200210/model/DescribeTelCdrRequest.cpp
  )

set(ccc_include
    include/tencentcloud/ccc
  )

add_library(ccc ${LIB_TYPE}
  ${ccc_public_header}
  ${ccc_public_header_model}
  ${ccc_src})

set_target_properties(ccc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ccc
  )

target_include_directories(ccc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ccc
  core)

#install(FILES ${ccc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ccc/v20200210)
#install(FILES ${ccc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ccc/v20200210/model)
install(DIRECTORY ${ccc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ccc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
