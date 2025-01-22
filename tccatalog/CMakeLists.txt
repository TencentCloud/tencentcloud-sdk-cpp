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

set(tccatalog_public_header
  include/tencentcloud/tccatalog/v20241024/TccatalogClient.h
  )

set(tccatalog_public_header_model
  include/tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogRequest.h
  include/tencentcloud/tccatalog/v20241024/model/NetWork.h
  include/tencentcloud/tccatalog/v20241024/model/TccCatalogSet.h
  include/tencentcloud/tccatalog/v20241024/model/TccCatalogConfig.h
  include/tencentcloud/tccatalog/v20241024/model/TccConnection.h
  include/tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogsRequest.h
  include/tencentcloud/tccatalog/v20241024/model/BindTccVpcEndPointServiceWhiteListResponse.h
  include/tencentcloud/tccatalog/v20241024/model/AcceptTccVpcEndPointConnectResponse.h
  include/tencentcloud/tccatalog/v20241024/model/BindTccVpcEndPointServiceWhiteListRequest.h
  include/tencentcloud/tccatalog/v20241024/model/AcceptTccVpcEndPointConnectRequest.h
  include/tencentcloud/tccatalog/v20241024/model/TccConnectionConfig.h
  include/tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogsResponse.h
  include/tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogResponse.h
  )

set(tccatalog_src
  src/v20241024/TccatalogClient.cpp
  src/v20241024/model/DescribeTccCatalogRequest.cpp
  src/v20241024/model/NetWork.cpp
  src/v20241024/model/TccCatalogSet.cpp
  src/v20241024/model/TccCatalogConfig.cpp
  src/v20241024/model/TccConnection.cpp
  src/v20241024/model/DescribeTccCatalogsRequest.cpp
  src/v20241024/model/BindTccVpcEndPointServiceWhiteListResponse.cpp
  src/v20241024/model/AcceptTccVpcEndPointConnectResponse.cpp
  src/v20241024/model/BindTccVpcEndPointServiceWhiteListRequest.cpp
  src/v20241024/model/AcceptTccVpcEndPointConnectRequest.cpp
  src/v20241024/model/TccConnectionConfig.cpp
  src/v20241024/model/DescribeTccCatalogsResponse.cpp
  src/v20241024/model/DescribeTccCatalogResponse.cpp
  )

set(tccatalog_include
    include/tencentcloud/tccatalog
  )

add_library(tccatalog ${LIB_TYPE}
  ${tccatalog_public_header}
  ${tccatalog_public_header_model}
  ${tccatalog_src})

set_target_properties(tccatalog
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tccatalog
  )

target_include_directories(tccatalog
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tccatalog
  core)

#install(FILES ${tccatalog_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tccatalog/v20241024)
#install(FILES ${tccatalog_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tccatalog/v20241024/model)
install(DIRECTORY ${tccatalog_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tccatalog
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
