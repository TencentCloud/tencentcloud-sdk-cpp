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

set(afc_public_header
  include/tencentcloud/afc/v20200226/AfcClient.h
  )

set(afc_public_header_model
  include/tencentcloud/afc/v20200226/model/OtherModelScores.h
  include/tencentcloud/afc/v20200226/model/TransportGeneralInterfaceInput.h
  include/tencentcloud/afc/v20200226/model/TransportGeneralInterfaceOutput.h
  include/tencentcloud/afc/v20200226/model/QueryAntiFraudVipResponse.h
  include/tencentcloud/afc/v20200226/model/RiskDetail.h
  include/tencentcloud/afc/v20200226/model/TransportGeneralInterfaceRequest.h
  include/tencentcloud/afc/v20200226/model/SimpleKindRiskDetail.h
  include/tencentcloud/afc/v20200226/model/GetAntiFraudVipResponse.h
  include/tencentcloud/afc/v20200226/model/TransportGeneralInterfaceResponse.h
  include/tencentcloud/afc/v20200226/model/AntiFraudVipCryptoFilter.h
  include/tencentcloud/afc/v20200226/model/AntiFraudVipFilter.h
  include/tencentcloud/afc/v20200226/model/QueryAntiFraudVipRequest.h
  include/tencentcloud/afc/v20200226/model/GetAntiFraudVipRequest.h
  include/tencentcloud/afc/v20200226/model/AntiFraudVipRecord.h
  )

set(afc_src
  src/v20200226/AfcClient.cpp
  src/v20200226/model/OtherModelScores.cpp
  src/v20200226/model/TransportGeneralInterfaceInput.cpp
  src/v20200226/model/TransportGeneralInterfaceOutput.cpp
  src/v20200226/model/QueryAntiFraudVipResponse.cpp
  src/v20200226/model/RiskDetail.cpp
  src/v20200226/model/TransportGeneralInterfaceRequest.cpp
  src/v20200226/model/SimpleKindRiskDetail.cpp
  src/v20200226/model/GetAntiFraudVipResponse.cpp
  src/v20200226/model/TransportGeneralInterfaceResponse.cpp
  src/v20200226/model/AntiFraudVipCryptoFilter.cpp
  src/v20200226/model/AntiFraudVipFilter.cpp
  src/v20200226/model/QueryAntiFraudVipRequest.cpp
  src/v20200226/model/GetAntiFraudVipRequest.cpp
  src/v20200226/model/AntiFraudVipRecord.cpp
  )

set(afc_include
    include/tencentcloud/afc
  )

add_library(afc ${LIB_TYPE}
  ${afc_public_header}
  ${afc_public_header_model}
  ${afc_src})

set_target_properties(afc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}afc
  )

target_include_directories(afc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(afc
  core)

#install(FILES ${afc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/afc/v20200226)
#install(FILES ${afc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/afc/v20200226/model)
install(DIRECTORY ${afc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS afc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
