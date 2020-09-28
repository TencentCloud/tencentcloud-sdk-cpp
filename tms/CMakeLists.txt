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

set(tms_public_header
  include/tencentcloud/tms/v20200713/TmsClient.h
  )

set(tms_public_header_model
  include/tencentcloud/tms/v20200713/model/RiskDetails.h
  include/tencentcloud/tms/v20200713/model/TextModerationRequest.h
  include/tencentcloud/tms/v20200713/model/DetailResults.h
  include/tencentcloud/tms/v20200713/model/AccountTipoffAccessRequest.h
  include/tencentcloud/tms/v20200713/model/Device.h
  include/tencentcloud/tms/v20200713/model/TipoffResponse.h
  include/tencentcloud/tms/v20200713/model/AccountTipoffAccessResponse.h
  include/tencentcloud/tms/v20200713/model/TextModerationResponse.h
  include/tencentcloud/tms/v20200713/model/User.h
  )

set(tms_src
  src/v20200713/TmsClient.cpp
  src/v20200713/model/RiskDetails.cpp
  src/v20200713/model/TextModerationRequest.cpp
  src/v20200713/model/DetailResults.cpp
  src/v20200713/model/AccountTipoffAccessRequest.cpp
  src/v20200713/model/Device.cpp
  src/v20200713/model/TipoffResponse.cpp
  src/v20200713/model/AccountTipoffAccessResponse.cpp
  src/v20200713/model/TextModerationResponse.cpp
  src/v20200713/model/User.cpp
  )

set(tms_include
    include/tencentcloud/tms
  )

add_library(tms ${LIB_TYPE}
  ${tms_public_header}
  ${tms_public_header_model}
  ${tms_src})

set_target_properties(tms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tms
  )

target_include_directories(tms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tms
  core)

#install(FILES ${tms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tms/v20200713)
#install(FILES ${tms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tms/v20200713/model)
install(DIRECTORY ${tms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )