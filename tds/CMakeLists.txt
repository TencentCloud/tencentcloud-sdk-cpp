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

set(tds_public_header
  include/tencentcloud/tds/v20220801/TdsClient.h
  )

set(tds_public_header_model
  include/tencentcloud/tds/v20220801/model/DescribeTrustedIDResponse.h
  include/tencentcloud/tds/v20220801/model/DescribeFraudUltimateRequest.h
  include/tencentcloud/tds/v20220801/model/DescribeFraudPremiumResponse.h
  include/tencentcloud/tds/v20220801/model/DescribeFinanceFraudUltimateRequest.h
  include/tencentcloud/tds/v20220801/model/DescribeFraudBaseRequest.h
  include/tencentcloud/tds/v20220801/model/DescribeFraudBaseResponse.h
  include/tencentcloud/tds/v20220801/model/DataAuthorizationInfo.h
  include/tencentcloud/tds/v20220801/model/DescribeFinanceFraudUltimateResponse.h
  include/tencentcloud/tds/v20220801/model/DescribeTrustedIDRequest.h
  include/tencentcloud/tds/v20220801/model/DescribeFraudPremiumRequest.h
  include/tencentcloud/tds/v20220801/model/DescribeFraudUltimateResponse.h
  include/tencentcloud/tds/v20220801/model/RiskInfo.h
  )

set(tds_src
  src/v20220801/TdsClient.cpp
  src/v20220801/model/DescribeTrustedIDResponse.cpp
  src/v20220801/model/DescribeFraudUltimateRequest.cpp
  src/v20220801/model/DescribeFraudPremiumResponse.cpp
  src/v20220801/model/DescribeFinanceFraudUltimateRequest.cpp
  src/v20220801/model/DescribeFraudBaseRequest.cpp
  src/v20220801/model/DescribeFraudBaseResponse.cpp
  src/v20220801/model/DataAuthorizationInfo.cpp
  src/v20220801/model/DescribeFinanceFraudUltimateResponse.cpp
  src/v20220801/model/DescribeTrustedIDRequest.cpp
  src/v20220801/model/DescribeFraudPremiumRequest.cpp
  src/v20220801/model/DescribeFraudUltimateResponse.cpp
  src/v20220801/model/RiskInfo.cpp
  )

set(tds_include
    include/tencentcloud/tds
  )

add_library(tds ${LIB_TYPE}
  ${tds_public_header}
  ${tds_public_header_model}
  ${tds_src})

set_target_properties(tds
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tds
  )

target_include_directories(tds
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tds
  core)

#install(FILES ${tds_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tds/v20220801)
#install(FILES ${tds_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tds/v20220801/model)
install(DIRECTORY ${tds_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tds
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
