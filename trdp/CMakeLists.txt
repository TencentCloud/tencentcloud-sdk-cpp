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

set(trdp_public_header
  include/tencentcloud/trdp/v20220726/TrdpClient.h
  )

set(trdp_public_header_model
  include/tencentcloud/trdp/v20220726/model/EvaluateUserRiskRequest.h
  include/tencentcloud/trdp/v20220726/model/DeviceDetailInfo.h
  include/tencentcloud/trdp/v20220726/model/UniversalAccountInfo.h
  include/tencentcloud/trdp/v20220726/model/MarketingInfo.h
  include/tencentcloud/trdp/v20220726/model/DeviceFingerprintInfo.h
  include/tencentcloud/trdp/v20220726/model/AccountInfo.h
  include/tencentcloud/trdp/v20220726/model/UserInfo.h
  include/tencentcloud/trdp/v20220726/model/EvaluateUserRiskResponse.h
  include/tencentcloud/trdp/v20220726/model/EvaluationResult.h
  )

set(trdp_src
  src/v20220726/TrdpClient.cpp
  src/v20220726/model/EvaluateUserRiskRequest.cpp
  src/v20220726/model/DeviceDetailInfo.cpp
  src/v20220726/model/UniversalAccountInfo.cpp
  src/v20220726/model/MarketingInfo.cpp
  src/v20220726/model/DeviceFingerprintInfo.cpp
  src/v20220726/model/AccountInfo.cpp
  src/v20220726/model/UserInfo.cpp
  src/v20220726/model/EvaluateUserRiskResponse.cpp
  src/v20220726/model/EvaluationResult.cpp
  )

set(trdp_include
    include/tencentcloud/trdp
  )

add_library(trdp ${LIB_TYPE}
  ${trdp_public_header}
  ${trdp_public_header_model}
  ${trdp_src})

set_target_properties(trdp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trdp
  )

target_include_directories(trdp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trdp
  core)

#install(FILES ${trdp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trdp/v20220726)
#install(FILES ${trdp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trdp/v20220726/model)
install(DIRECTORY ${trdp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trdp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
