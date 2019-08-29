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

set(captcha_public_header
  include/tencentcloud/captcha/v20190722/CaptchaClient.h
  )

set(captcha_public_header_model
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaResultRequest.h
  )

set(captcha_src
  src/v20190722/CaptchaClient.cpp
  src/v20190722/model/DescribeCaptchaResultResponse.cpp
  src/v20190722/model/DescribeCaptchaResultRequest.cpp
  )

set(captcha_include
    include/tencentcloud/captcha
  )

add_library(captcha ${LIB_TYPE}
  ${captcha_public_header}
  ${captcha_public_header_model}
  ${captcha_src})

set_target_properties(captcha
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}captcha
  )

target_include_directories(captcha
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(captcha
  core)

#install(FILES ${captcha_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/captcha/v20190722)
#install(FILES ${captcha_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/captcha/v20190722/model)
install(DIRECTORY ${captcha_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS captcha
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
