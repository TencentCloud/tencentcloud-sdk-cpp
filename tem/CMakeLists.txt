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
  include/tencentcloud/tem/v20201221/model/MountedSettingConf.h
  include/tencentcloud/tem/v20201221/model/ModifyServiceInfoResponse.h
  include/tencentcloud/tem/v20201221/model/StorageMountConf.h
  include/tencentcloud/tem/v20201221/model/CreateResourceRequest.h
  include/tencentcloud/tem/v20201221/model/CreateServiceV2Response.h
  include/tencentcloud/tem/v20201221/model/CreateCosTokenV2Request.h
  include/tencentcloud/tem/v20201221/model/DeployServiceV2Response.h
  include/tencentcloud/tem/v20201221/model/EsInfo.h
  include/tencentcloud/tem/v20201221/model/DescribeNamespacesResponse.h
  include/tencentcloud/tem/v20201221/model/PortMapping.h
  include/tencentcloud/tem/v20201221/model/RestartServiceRunPodRequest.h
  include/tencentcloud/tem/v20201221/model/ModifyIngressResponse.h
  include/tencentcloud/tem/v20201221/model/DeleteIngressRequest.h
  include/tencentcloud/tem/v20201221/model/ModifyServiceInfoRequest.h
  include/tencentcloud/tem/v20201221/model/CreateNamespaceResponse.h
  include/tencentcloud/tem/v20201221/model/DescribeRelatedIngressesRequest.h
  include/tencentcloud/tem/v20201221/model/CosToken.h
  include/tencentcloud/tem/v20201221/model/DescribeNamespacesRequest.h
  include/tencentcloud/tem/v20201221/model/CreateCosTokenRequest.h
  include/tencentcloud/tem/v20201221/model/DeployServiceV2Request.h
  include/tencentcloud/tem/v20201221/model/ModifyIngressRequest.h
  include/tencentcloud/tem/v20201221/model/GenerateDownloadUrlResponse.h
  include/tencentcloud/tem/v20201221/model/DescribeRelatedIngressesResponse.h
  include/tencentcloud/tem/v20201221/model/CreateNamespaceRequest.h
  include/tencentcloud/tem/v20201221/model/DescribeIngressesRequest.h
  include/tencentcloud/tem/v20201221/model/DescribeRunPodPage.h
  include/tencentcloud/tem/v20201221/model/DescribeServiceRunPodListV2Request.h
  include/tencentcloud/tem/v20201221/model/LogOutputConf.h
  include/tencentcloud/tem/v20201221/model/DescribeIngressesResponse.h
  include/tencentcloud/tem/v20201221/model/IngressInfo.h
  include/tencentcloud/tem/v20201221/model/DeleteIngressResponse.h
  include/tencentcloud/tem/v20201221/model/RestartServiceRunPodResponse.h
  include/tencentcloud/tem/v20201221/model/ModifyNamespaceRequest.h
  include/tencentcloud/tem/v20201221/model/IngressRuleBackend.h
  include/tencentcloud/tem/v20201221/model/DescribeIngressResponse.h
  include/tencentcloud/tem/v20201221/model/CreateCosTokenResponse.h
  include/tencentcloud/tem/v20201221/model/IngressRule.h
  include/tencentcloud/tem/v20201221/model/IngressRulePath.h
  include/tencentcloud/tem/v20201221/model/StorageConf.h
  include/tencentcloud/tem/v20201221/model/ModifyNamespaceResponse.h
  include/tencentcloud/tem/v20201221/model/RunVersionPod.h
  include/tencentcloud/tem/v20201221/model/IngressRuleValue.h
  include/tencentcloud/tem/v20201221/model/CreateResourceResponse.h
  include/tencentcloud/tem/v20201221/model/DescribeServiceRunPodListV2Response.h
  include/tencentcloud/tem/v20201221/model/TemNamespaceInfo.h
  include/tencentcloud/tem/v20201221/model/NamespacePage.h
  include/tencentcloud/tem/v20201221/model/HealthCheckConfig.h
  include/tencentcloud/tem/v20201221/model/CreateCosTokenV2Response.h
  include/tencentcloud/tem/v20201221/model/IngressTls.h
  include/tencentcloud/tem/v20201221/model/GenerateDownloadUrlRequest.h
  include/tencentcloud/tem/v20201221/model/DeployStrategyConf.h
  include/tencentcloud/tem/v20201221/model/DescribeIngressRequest.h
  include/tencentcloud/tem/v20201221/model/CreateServiceV2Request.h
  include/tencentcloud/tem/v20201221/model/EksService.h
  include/tencentcloud/tem/v20201221/model/Pair.h
  )

set(tem_src
  src/v20201221/TemClient.cpp
  src/v20201221/model/MountedSettingConf.cpp
  src/v20201221/model/ModifyServiceInfoResponse.cpp
  src/v20201221/model/StorageMountConf.cpp
  src/v20201221/model/CreateResourceRequest.cpp
  src/v20201221/model/CreateServiceV2Response.cpp
  src/v20201221/model/CreateCosTokenV2Request.cpp
  src/v20201221/model/DeployServiceV2Response.cpp
  src/v20201221/model/EsInfo.cpp
  src/v20201221/model/DescribeNamespacesResponse.cpp
  src/v20201221/model/PortMapping.cpp
  src/v20201221/model/RestartServiceRunPodRequest.cpp
  src/v20201221/model/ModifyIngressResponse.cpp
  src/v20201221/model/DeleteIngressRequest.cpp
  src/v20201221/model/ModifyServiceInfoRequest.cpp
  src/v20201221/model/CreateNamespaceResponse.cpp
  src/v20201221/model/DescribeRelatedIngressesRequest.cpp
  src/v20201221/model/CosToken.cpp
  src/v20201221/model/DescribeNamespacesRequest.cpp
  src/v20201221/model/CreateCosTokenRequest.cpp
  src/v20201221/model/DeployServiceV2Request.cpp
  src/v20201221/model/ModifyIngressRequest.cpp
  src/v20201221/model/GenerateDownloadUrlResponse.cpp
  src/v20201221/model/DescribeRelatedIngressesResponse.cpp
  src/v20201221/model/CreateNamespaceRequest.cpp
  src/v20201221/model/DescribeIngressesRequest.cpp
  src/v20201221/model/DescribeRunPodPage.cpp
  src/v20201221/model/DescribeServiceRunPodListV2Request.cpp
  src/v20201221/model/LogOutputConf.cpp
  src/v20201221/model/DescribeIngressesResponse.cpp
  src/v20201221/model/IngressInfo.cpp
  src/v20201221/model/DeleteIngressResponse.cpp
  src/v20201221/model/RestartServiceRunPodResponse.cpp
  src/v20201221/model/ModifyNamespaceRequest.cpp
  src/v20201221/model/IngressRuleBackend.cpp
  src/v20201221/model/DescribeIngressResponse.cpp
  src/v20201221/model/CreateCosTokenResponse.cpp
  src/v20201221/model/IngressRule.cpp
  src/v20201221/model/IngressRulePath.cpp
  src/v20201221/model/StorageConf.cpp
  src/v20201221/model/ModifyNamespaceResponse.cpp
  src/v20201221/model/RunVersionPod.cpp
  src/v20201221/model/IngressRuleValue.cpp
  src/v20201221/model/CreateResourceResponse.cpp
  src/v20201221/model/DescribeServiceRunPodListV2Response.cpp
  src/v20201221/model/TemNamespaceInfo.cpp
  src/v20201221/model/NamespacePage.cpp
  src/v20201221/model/HealthCheckConfig.cpp
  src/v20201221/model/CreateCosTokenV2Response.cpp
  src/v20201221/model/IngressTls.cpp
  src/v20201221/model/GenerateDownloadUrlRequest.cpp
  src/v20201221/model/DeployStrategyConf.cpp
  src/v20201221/model/DescribeIngressRequest.cpp
  src/v20201221/model/CreateServiceV2Request.cpp
  src/v20201221/model/EksService.cpp
  src/v20201221/model/Pair.cpp
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
