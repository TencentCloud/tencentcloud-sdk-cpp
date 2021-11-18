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

set(af_public_header
  include/tencentcloud/af/v20200226/AfClient.h
  )

set(af_public_header_model
  include/tencentcloud/af/v20200226/model/RiskDetailInfo.h
  include/tencentcloud/af/v20200226/model/AntiFraudRecord.h
  include/tencentcloud/af/v20200226/model/AntiFraudFilter.h
  include/tencentcloud/af/v20200226/model/AntiFraudCryptoFilter.h
  include/tencentcloud/af/v20200226/model/FinanceAntiFraudRecord.h
  include/tencentcloud/af/v20200226/model/DescribeAntiFraudResponse.h
  include/tencentcloud/af/v20200226/model/RiskDetail.h
  include/tencentcloud/af/v20200226/model/FinanceOtherModelScores.h
  include/tencentcloud/af/v20200226/model/SimpleKindRiskDetail.h
  include/tencentcloud/af/v20200226/model/OtherModelScoresDetail.h
  include/tencentcloud/af/v20200226/model/GetAntiFraudRequest.h
  include/tencentcloud/af/v20200226/model/DescribeAntiFraudRequest.h
  include/tencentcloud/af/v20200226/model/FinanceAntiFraudFilter.h
  include/tencentcloud/af/v20200226/model/QueryAntiFraudResponse.h
  include/tencentcloud/af/v20200226/model/GetAntiFraudResponse.h
  include/tencentcloud/af/v20200226/model/QueryAntiFraudRequest.h
  include/tencentcloud/af/v20200226/model/FinanceAntiFraudCryptoFilter.h
  )

set(af_src
  src/v20200226/AfClient.cpp
  src/v20200226/model/RiskDetailInfo.cpp
  src/v20200226/model/AntiFraudRecord.cpp
  src/v20200226/model/AntiFraudFilter.cpp
  src/v20200226/model/AntiFraudCryptoFilter.cpp
  src/v20200226/model/FinanceAntiFraudRecord.cpp
  src/v20200226/model/DescribeAntiFraudResponse.cpp
  src/v20200226/model/RiskDetail.cpp
  src/v20200226/model/FinanceOtherModelScores.cpp
  src/v20200226/model/SimpleKindRiskDetail.cpp
  src/v20200226/model/OtherModelScoresDetail.cpp
  src/v20200226/model/GetAntiFraudRequest.cpp
  src/v20200226/model/DescribeAntiFraudRequest.cpp
  src/v20200226/model/FinanceAntiFraudFilter.cpp
  src/v20200226/model/QueryAntiFraudResponse.cpp
  src/v20200226/model/GetAntiFraudResponse.cpp
  src/v20200226/model/QueryAntiFraudRequest.cpp
  src/v20200226/model/FinanceAntiFraudCryptoFilter.cpp
  )

set(af_include
    include/tencentcloud/af
  )

add_library(af ${LIB_TYPE}
  ${af_public_header}
  ${af_public_header_model}
  ${af_src})

set_target_properties(af
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}af
  )

target_include_directories(af
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(af
  core)

#install(FILES ${af_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/af/v20200226)
#install(FILES ${af_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/af/v20200226/model)
install(DIRECTORY ${af_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS af
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
