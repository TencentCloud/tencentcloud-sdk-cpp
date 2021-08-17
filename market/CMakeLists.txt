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

set(market_public_header
  include/tencentcloud/market/v20191010/MarketClient.h
  )

set(market_public_header_model
  include/tencentcloud/market/v20191010/model/GetUsagePlanUsageAmountResponse.h
  include/tencentcloud/market/v20191010/model/GetUsagePlanUsageAmountRequest.h
  include/tencentcloud/market/v20191010/model/FlowProductRemindRequest.h
  include/tencentcloud/market/v20191010/model/FlowProductRemindResponse.h
  )

set(market_src
  src/v20191010/MarketClient.cpp
  src/v20191010/model/GetUsagePlanUsageAmountResponse.cpp
  src/v20191010/model/GetUsagePlanUsageAmountRequest.cpp
  src/v20191010/model/FlowProductRemindRequest.cpp
  src/v20191010/model/FlowProductRemindResponse.cpp
  )

set(market_include
    include/tencentcloud/market
  )

add_library(market ${LIB_TYPE}
  ${market_public_header}
  ${market_public_header_model}
  ${market_src})

set_target_properties(market
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}market
  )

target_include_directories(market
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(market
  core)

#install(FILES ${market_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/market/v20191010)
#install(FILES ${market_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/market/v20191010/model)
install(DIRECTORY ${market_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS market
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
