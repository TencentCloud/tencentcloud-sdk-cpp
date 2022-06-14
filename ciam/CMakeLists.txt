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

set(ciam_public_header
  include/tencentcloud/ciam/v20220331/CiamClient.h
  )

set(ciam_public_header_model
  include/tencentcloud/ciam/v20220331/model/ResetPasswordRequest.h
  include/tencentcloud/ciam/v20220331/model/ResetPasswordResponse.h
  )

set(ciam_src
  src/v20220331/CiamClient.cpp
  src/v20220331/model/ResetPasswordRequest.cpp
  src/v20220331/model/ResetPasswordResponse.cpp
  )

set(ciam_include
    include/tencentcloud/ciam
  )

add_library(ciam ${LIB_TYPE}
  ${ciam_public_header}
  ${ciam_public_header_model}
  ${ciam_src})

set_target_properties(ciam
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ciam
  )

target_include_directories(ciam
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ciam
  core)

#install(FILES ${ciam_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ciam/v20220331)
#install(FILES ${ciam_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ciam/v20220331/model)
install(DIRECTORY ${ciam_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ciam
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
