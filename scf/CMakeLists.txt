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

set(scf_public_header
  include/tencentcloud/scf/v20180416/ScfClient.h
  )

set(scf_public_header_model
  include/tencentcloud/scf/v20180416/model/AccessInfo.h
  include/tencentcloud/scf/v20180416/model/Trigger.h
  include/tencentcloud/scf/v20180416/model/ListAliasesResponse.h
  include/tencentcloud/scf/v20180416/model/DeleteLayerVersionResponse.h
  include/tencentcloud/scf/v20180416/model/GetAliasResponse.h
  include/tencentcloud/scf/v20180416/model/VersionWeight.h
  include/tencentcloud/scf/v20180416/model/LayerVersionInfo.h
  include/tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationResponse.h
  include/tencentcloud/scf/v20180416/model/PublishLayerVersionResponse.h
  include/tencentcloud/scf/v20180416/model/CreateFunctionResponse.h
  include/tencentcloud/scf/v20180416/model/PublicNetConfigIn.h
  include/tencentcloud/scf/v20180416/model/UpdateAliasRequest.h
  include/tencentcloud/scf/v20180416/model/RoutingConfig.h
  include/tencentcloud/scf/v20180416/model/UpdateAliasResponse.h
  include/tencentcloud/scf/v20180416/model/GetFunctionLogsRequest.h
  include/tencentcloud/scf/v20180416/model/Tag.h
  include/tencentcloud/scf/v20180416/model/LogFilter.h
  include/tencentcloud/scf/v20180416/model/EipConfigIn.h
  include/tencentcloud/scf/v20180416/model/ListLayerVersionsResponse.h
  include/tencentcloud/scf/v20180416/model/DeleteFunctionRequest.h
  include/tencentcloud/scf/v20180416/model/CopyFunctionResponse.h
  include/tencentcloud/scf/v20180416/model/Namespace.h
  include/tencentcloud/scf/v20180416/model/GetFunctionRequest.h
  include/tencentcloud/scf/v20180416/model/ListNamespacesRequest.h
  include/tencentcloud/scf/v20180416/model/PublishVersionRequest.h
  include/tencentcloud/scf/v20180416/model/DeleteAliasRequest.h
  include/tencentcloud/scf/v20180416/model/ListVersionByFunctionResponse.h
  include/tencentcloud/scf/v20180416/model/GetAliasRequest.h
  include/tencentcloud/scf/v20180416/model/CreateNamespaceResponse.h
  include/tencentcloud/scf/v20180416/model/PublicNetConfigOut.h
  include/tencentcloud/scf/v20180416/model/UpdateFunctionCodeRequest.h
  include/tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h
  include/tencentcloud/scf/v20180416/model/ListTriggersResponse.h
  include/tencentcloud/scf/v20180416/model/UpdateNamespaceResponse.h
  include/tencentcloud/scf/v20180416/model/ListLayersRequest.h
  include/tencentcloud/scf/v20180416/model/CopyFunctionRequest.h
  include/tencentcloud/scf/v20180416/model/DeleteNamespaceResponse.h
  include/tencentcloud/scf/v20180416/model/LayerVersionSimple.h
  include/tencentcloud/scf/v20180416/model/ListFunctionsRequest.h
  include/tencentcloud/scf/v20180416/model/CreateTriggerRequest.h
  include/tencentcloud/scf/v20180416/model/ListLayersResponse.h
  include/tencentcloud/scf/v20180416/model/DeleteFunctionResponse.h
  include/tencentcloud/scf/v20180416/model/Result.h
  include/tencentcloud/scf/v20180416/model/CreateAliasResponse.h
  include/tencentcloud/scf/v20180416/model/LogSearchContext.h
  include/tencentcloud/scf/v20180416/model/TriggerInfo.h
  include/tencentcloud/scf/v20180416/model/CreateFunctionRequest.h
  include/tencentcloud/scf/v20180416/model/DeleteAliasResponse.h
  include/tencentcloud/scf/v20180416/model/PublishVersionResponse.h
  include/tencentcloud/scf/v20180416/model/Environment.h
  include/tencentcloud/scf/v20180416/model/GetFunctionAddressRequest.h
  include/tencentcloud/scf/v20180416/model/InvokeResponse.h
  include/tencentcloud/scf/v20180416/model/InvokeRequest.h
  include/tencentcloud/scf/v20180416/model/CreateAliasRequest.h
  include/tencentcloud/scf/v20180416/model/VersionMatch.h
  include/tencentcloud/scf/v20180416/model/ListLayerVersionsRequest.h
  include/tencentcloud/scf/v20180416/model/CreateTriggerResponse.h
  include/tencentcloud/scf/v20180416/model/PublishLayerVersionRequest.h
  include/tencentcloud/scf/v20180416/model/CreateNamespaceRequest.h
  include/tencentcloud/scf/v20180416/model/DeleteLayerVersionRequest.h
  include/tencentcloud/scf/v20180416/model/Filter.h
  include/tencentcloud/scf/v20180416/model/Variable.h
  include/tencentcloud/scf/v20180416/model/GetFunctionResponse.h
  include/tencentcloud/scf/v20180416/model/Code.h
  include/tencentcloud/scf/v20180416/model/UpdateNamespaceRequest.h
  include/tencentcloud/scf/v20180416/model/GetLayerVersionResponse.h
  include/tencentcloud/scf/v20180416/model/FunctionLog.h
  include/tencentcloud/scf/v20180416/model/FunctionVersion.h
  include/tencentcloud/scf/v20180416/model/Function.h
  include/tencentcloud/scf/v20180416/model/DeadLetterConfig.h
  include/tencentcloud/scf/v20180416/model/ListVersionByFunctionRequest.h
  include/tencentcloud/scf/v20180416/model/ListFunctionsResponse.h
  include/tencentcloud/scf/v20180416/model/ListTriggersRequest.h
  include/tencentcloud/scf/v20180416/model/DeleteNamespaceRequest.h
  include/tencentcloud/scf/v20180416/model/ListAliasesRequest.h
  include/tencentcloud/scf/v20180416/model/EipOutConfig.h
  include/tencentcloud/scf/v20180416/model/Alias.h
  include/tencentcloud/scf/v20180416/model/GetLayerVersionRequest.h
  include/tencentcloud/scf/v20180416/model/GetFunctionLogsResponse.h
  include/tencentcloud/scf/v20180416/model/DeleteTriggerResponse.h
  include/tencentcloud/scf/v20180416/model/DeleteTriggerRequest.h
  include/tencentcloud/scf/v20180416/model/VpcConfig.h
  include/tencentcloud/scf/v20180416/model/GetFunctionAddressResponse.h
  include/tencentcloud/scf/v20180416/model/ListNamespacesResponse.h
  include/tencentcloud/scf/v20180416/model/EipConfigOut.h
  include/tencentcloud/scf/v20180416/model/UpdateFunctionCodeResponse.h
  )

set(scf_src
  src/v20180416/ScfClient.cpp
  src/v20180416/model/AccessInfo.cpp
  src/v20180416/model/Trigger.cpp
  src/v20180416/model/ListAliasesResponse.cpp
  src/v20180416/model/DeleteLayerVersionResponse.cpp
  src/v20180416/model/GetAliasResponse.cpp
  src/v20180416/model/VersionWeight.cpp
  src/v20180416/model/LayerVersionInfo.cpp
  src/v20180416/model/UpdateFunctionConfigurationResponse.cpp
  src/v20180416/model/PublishLayerVersionResponse.cpp
  src/v20180416/model/CreateFunctionResponse.cpp
  src/v20180416/model/PublicNetConfigIn.cpp
  src/v20180416/model/UpdateAliasRequest.cpp
  src/v20180416/model/RoutingConfig.cpp
  src/v20180416/model/UpdateAliasResponse.cpp
  src/v20180416/model/GetFunctionLogsRequest.cpp
  src/v20180416/model/Tag.cpp
  src/v20180416/model/LogFilter.cpp
  src/v20180416/model/EipConfigIn.cpp
  src/v20180416/model/ListLayerVersionsResponse.cpp
  src/v20180416/model/DeleteFunctionRequest.cpp
  src/v20180416/model/CopyFunctionResponse.cpp
  src/v20180416/model/Namespace.cpp
  src/v20180416/model/GetFunctionRequest.cpp
  src/v20180416/model/ListNamespacesRequest.cpp
  src/v20180416/model/PublishVersionRequest.cpp
  src/v20180416/model/DeleteAliasRequest.cpp
  src/v20180416/model/ListVersionByFunctionResponse.cpp
  src/v20180416/model/GetAliasRequest.cpp
  src/v20180416/model/CreateNamespaceResponse.cpp
  src/v20180416/model/PublicNetConfigOut.cpp
  src/v20180416/model/UpdateFunctionCodeRequest.cpp
  src/v20180416/model/UpdateFunctionConfigurationRequest.cpp
  src/v20180416/model/ListTriggersResponse.cpp
  src/v20180416/model/UpdateNamespaceResponse.cpp
  src/v20180416/model/ListLayersRequest.cpp
  src/v20180416/model/CopyFunctionRequest.cpp
  src/v20180416/model/DeleteNamespaceResponse.cpp
  src/v20180416/model/LayerVersionSimple.cpp
  src/v20180416/model/ListFunctionsRequest.cpp
  src/v20180416/model/CreateTriggerRequest.cpp
  src/v20180416/model/ListLayersResponse.cpp
  src/v20180416/model/DeleteFunctionResponse.cpp
  src/v20180416/model/Result.cpp
  src/v20180416/model/CreateAliasResponse.cpp
  src/v20180416/model/LogSearchContext.cpp
  src/v20180416/model/TriggerInfo.cpp
  src/v20180416/model/CreateFunctionRequest.cpp
  src/v20180416/model/DeleteAliasResponse.cpp
  src/v20180416/model/PublishVersionResponse.cpp
  src/v20180416/model/Environment.cpp
  src/v20180416/model/GetFunctionAddressRequest.cpp
  src/v20180416/model/InvokeResponse.cpp
  src/v20180416/model/InvokeRequest.cpp
  src/v20180416/model/CreateAliasRequest.cpp
  src/v20180416/model/VersionMatch.cpp
  src/v20180416/model/ListLayerVersionsRequest.cpp
  src/v20180416/model/CreateTriggerResponse.cpp
  src/v20180416/model/PublishLayerVersionRequest.cpp
  src/v20180416/model/CreateNamespaceRequest.cpp
  src/v20180416/model/DeleteLayerVersionRequest.cpp
  src/v20180416/model/Filter.cpp
  src/v20180416/model/Variable.cpp
  src/v20180416/model/GetFunctionResponse.cpp
  src/v20180416/model/Code.cpp
  src/v20180416/model/UpdateNamespaceRequest.cpp
  src/v20180416/model/GetLayerVersionResponse.cpp
  src/v20180416/model/FunctionLog.cpp
  src/v20180416/model/FunctionVersion.cpp
  src/v20180416/model/Function.cpp
  src/v20180416/model/DeadLetterConfig.cpp
  src/v20180416/model/ListVersionByFunctionRequest.cpp
  src/v20180416/model/ListFunctionsResponse.cpp
  src/v20180416/model/ListTriggersRequest.cpp
  src/v20180416/model/DeleteNamespaceRequest.cpp
  src/v20180416/model/ListAliasesRequest.cpp
  src/v20180416/model/EipOutConfig.cpp
  src/v20180416/model/Alias.cpp
  src/v20180416/model/GetLayerVersionRequest.cpp
  src/v20180416/model/GetFunctionLogsResponse.cpp
  src/v20180416/model/DeleteTriggerResponse.cpp
  src/v20180416/model/DeleteTriggerRequest.cpp
  src/v20180416/model/VpcConfig.cpp
  src/v20180416/model/GetFunctionAddressResponse.cpp
  src/v20180416/model/ListNamespacesResponse.cpp
  src/v20180416/model/EipConfigOut.cpp
  src/v20180416/model/UpdateFunctionCodeResponse.cpp
  )

set(scf_include
    include/tencentcloud/scf
  )

add_library(scf ${LIB_TYPE}
  ${scf_public_header}
  ${scf_public_header_model}
  ${scf_src})

set_target_properties(scf
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}scf
  )

target_include_directories(scf
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(scf
  core)

#install(FILES ${scf_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/scf/v20180416)
#install(FILES ${scf_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/scf/v20180416/model)
install(DIRECTORY ${scf_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS scf
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
