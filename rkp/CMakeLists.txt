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

set(rkp_public_header
  include/tencentcloud/rkp/v20191209/RkpClient.h
  )

set(rkp_public_header_model
  include/tencentcloud/rkp/v20191209/model/GetTokenResponse.h
  include/tencentcloud/rkp/v20191209/model/QueryDevAndRiskRequest.h
  include/tencentcloud/rkp/v20191209/model/DevInfoQ.h
  include/tencentcloud/rkp/v20191209/model/RiskDetail.h
  include/tencentcloud/rkp/v20191209/model/RiskInfo.h
  include/tencentcloud/rkp/v20191209/model/GetOpenIdRequest.h
  include/tencentcloud/rkp/v20191209/model/QueryDevAndRiskResponse.h
  include/tencentcloud/rkp/v20191209/model/GetTokenRequest.h
  include/tencentcloud/rkp/v20191209/model/GetOpenIdResponse.h
  )

set(rkp_src
  src/v20191209/RkpClient.cpp
  src/v20191209/model/GetTokenResponse.cpp
  src/v20191209/model/QueryDevAndRiskRequest.cpp
  src/v20191209/model/DevInfoQ.cpp
  src/v20191209/model/RiskDetail.cpp
  src/v20191209/model/RiskInfo.cpp
  src/v20191209/model/GetOpenIdRequest.cpp
  src/v20191209/model/QueryDevAndRiskResponse.cpp
  src/v20191209/model/GetTokenRequest.cpp
  src/v20191209/model/GetOpenIdResponse.cpp
  )

set(rkp_include
    include/tencentcloud/rkp
  )

add_library(rkp ${LIB_TYPE}
  ${rkp_public_header}
  ${rkp_public_header_model}
  ${rkp_src})

set_target_properties(rkp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rkp
  )

target_include_directories(rkp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rkp
  core)

#install(FILES ${rkp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rkp/v20191209)
#install(FILES ${rkp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rkp/v20191209/model)
install(DIRECTORY ${rkp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rkp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
