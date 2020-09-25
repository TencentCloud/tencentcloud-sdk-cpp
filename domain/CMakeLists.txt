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

set(domain_public_header
  include/tencentcloud/domain/v20180808/DomainClient.h
  )

set(domain_public_header_model
  include/tencentcloud/domain/v20180808/model/CheckDomainResponse.h
  include/tencentcloud/domain/v20180808/model/PriceInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainPriceListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DomainBaseInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainPriceListResponse.h
  include/tencentcloud/domain/v20180808/model/CheckDomainRequest.h
  )

set(domain_src
  src/v20180808/DomainClient.cpp
  src/v20180808/model/CheckDomainResponse.cpp
  src/v20180808/model/PriceInfo.cpp
  src/v20180808/model/DescribeDomainPriceListRequest.cpp
  src/v20180808/model/DescribeDomainBaseInfoResponse.cpp
  src/v20180808/model/DescribeDomainBaseInfoRequest.cpp
  src/v20180808/model/DomainBaseInfo.cpp
  src/v20180808/model/DescribeDomainPriceListResponse.cpp
  src/v20180808/model/CheckDomainRequest.cpp
  )

set(domain_include
    include/tencentcloud/domain
  )

add_library(domain ${LIB_TYPE}
  ${domain_public_header}
  ${domain_public_header_model}
  ${domain_src})

set_target_properties(domain
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}domain
  )

target_include_directories(domain
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(domain
  core)

#install(FILES ${domain_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/domain/v20180808)
#install(FILES ${domain_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/domain/v20180808/model)
install(DIRECTORY ${domain_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS domain
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
