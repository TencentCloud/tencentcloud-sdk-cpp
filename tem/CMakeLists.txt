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

set(tem_public_header
  include/tencentcloud/tem/v20201221/TemClient.h
  )

set(tem_public_header_model
  include/tencentcloud/tem/v20201221/model/ModifyNamespaceRequest.h
  include/tencentcloud/tem/v20201221/model/TemNamespaceInfo.h
  include/tencentcloud/tem/v20201221/model/NamespacePage.h
  include/tencentcloud/tem/v20201221/model/ModifyIngressRequest.h
  include/tencentcloud/tem/v20201221/model/DescribeNamespacesRequest.h
  include/tencentcloud/tem/v20201221/model/CosToken.h
  include/tencentcloud/tem/v20201221/model/IngressRuleBackend.h
  include/tencentcloud/tem/v20201221/model/IngressInfo.h
  include/tencentcloud/tem/v20201221/model/IngressTls.h
  include/tencentcloud/tem/v20201221/model/CreateCosTokenResponse.h
  include/tencentcloud/tem/v20201221/model/IngressRule.h
  include/tencentcloud/tem/v20201221/model/IngressRulePath.h
  include/tencentcloud/tem/v20201221/model/CreateCosTokenRequest.h
  include/tencentcloud/tem/v20201221/model/ModifyNamespaceResponse.h
  include/tencentcloud/tem/v20201221/model/DescribeNamespacesResponse.h
  include/tencentcloud/tem/v20201221/model/CreateNamespaceRequest.h
  include/tencentcloud/tem/v20201221/model/ModifyIngressResponse.h
  include/tencentcloud/tem/v20201221/model/IngressRuleValue.h
  include/tencentcloud/tem/v20201221/model/CreateNamespaceResponse.h
  )

set(tem_src
  src/v20201221/TemClient.cpp
  src/v20201221/model/ModifyNamespaceRequest.cpp
  src/v20201221/model/TemNamespaceInfo.cpp
  src/v20201221/model/NamespacePage.cpp
  src/v20201221/model/ModifyIngressRequest.cpp
  src/v20201221/model/DescribeNamespacesRequest.cpp
  src/v20201221/model/CosToken.cpp
  src/v20201221/model/IngressRuleBackend.cpp
  src/v20201221/model/IngressInfo.cpp
  src/v20201221/model/IngressTls.cpp
  src/v20201221/model/CreateCosTokenResponse.cpp
  src/v20201221/model/IngressRule.cpp
  src/v20201221/model/IngressRulePath.cpp
  src/v20201221/model/CreateCosTokenRequest.cpp
  src/v20201221/model/ModifyNamespaceResponse.cpp
  src/v20201221/model/DescribeNamespacesResponse.cpp
  src/v20201221/model/CreateNamespaceRequest.cpp
  src/v20201221/model/ModifyIngressResponse.cpp
  src/v20201221/model/IngressRuleValue.cpp
  src/v20201221/model/CreateNamespaceResponse.cpp
  )

set(tem_include
    include/tencentcloud/tem
  )

add_library(tem ${LIB_TYPE}
  ${tem_public_header}
  ${tem_public_header_model}
  ${tem_src})

set_target_properties(tem
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tem
  )

target_include_directories(tem
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tem
  core)

#install(FILES ${tem_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tem/v20201221)
#install(FILES ${tem_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tem/v20201221/model)
install(DIRECTORY ${tem_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tem
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
