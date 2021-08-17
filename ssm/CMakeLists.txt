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

set(ssm_public_header
  include/tencentcloud/ssm/v20190923/SsmClient.h
  )

set(ssm_public_header_model
  include/tencentcloud/ssm/v20190923/model/DeleteSecretVersionResponse.h
  include/tencentcloud/ssm/v20190923/model/RestoreSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/UpdateDescriptionResponse.h
  include/tencentcloud/ssm/v20190923/model/DescribeSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/DescribeSupportedProductsRequest.h
  include/tencentcloud/ssm/v20190923/model/GetSecretValueRequest.h
  include/tencentcloud/ssm/v20190923/model/DeleteSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/CreateSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/RotateProductSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/CreateProductSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/GetSecretValueResponse.h
  include/tencentcloud/ssm/v20190923/model/GetRegionsResponse.h
  include/tencentcloud/ssm/v20190923/model/DescribeSupportedProductsResponse.h
  include/tencentcloud/ssm/v20190923/model/DeleteSecretVersionRequest.h
  include/tencentcloud/ssm/v20190923/model/SecretMetadata.h
  include/tencentcloud/ssm/v20190923/model/ListSecretVersionIdsRequest.h
  include/tencentcloud/ssm/v20190923/model/DescribeRotationDetailRequest.h
  include/tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/UpdateRotationStatusResponse.h
  include/tencentcloud/ssm/v20190923/model/CreateSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/GetRegionsRequest.h
  include/tencentcloud/ssm/v20190923/model/UpdateSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/DisableSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/Tag.h
  include/tencentcloud/ssm/v20190923/model/ListSecretsRequest.h
  include/tencentcloud/ssm/v20190923/model/UpdateDescriptionRequest.h
  include/tencentcloud/ssm/v20190923/model/EnableSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/UpdateRotationStatusRequest.h
  include/tencentcloud/ssm/v20190923/model/UpdateSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoResponse.h
  include/tencentcloud/ssm/v20190923/model/RestoreSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/RotateProductSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/VersionInfo.h
  include/tencentcloud/ssm/v20190923/model/TagFilter.h
  include/tencentcloud/ssm/v20190923/model/PutSecretValueRequest.h
  include/tencentcloud/ssm/v20190923/model/PutSecretValueResponse.h
  include/tencentcloud/ssm/v20190923/model/DescribeRotationHistoryResponse.h
  include/tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueRequest.h
  include/tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoRequest.h
  include/tencentcloud/ssm/v20190923/model/GetServiceStatusResponse.h
  include/tencentcloud/ssm/v20190923/model/DescribeRotationDetailResponse.h
  include/tencentcloud/ssm/v20190923/model/EnableSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/ProductPrivilegeUnit.h
  include/tencentcloud/ssm/v20190923/model/DescribeRotationHistoryRequest.h
  include/tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueResponse.h
  include/tencentcloud/ssm/v20190923/model/DeleteSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/DisableSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/CreateProductSecretResponse.h
  include/tencentcloud/ssm/v20190923/model/ListSecretsResponse.h
  include/tencentcloud/ssm/v20190923/model/DescribeSecretRequest.h
  include/tencentcloud/ssm/v20190923/model/GetServiceStatusRequest.h
  include/tencentcloud/ssm/v20190923/model/ListSecretVersionIdsResponse.h
  )

set(ssm_src
  src/v20190923/SsmClient.cpp
  src/v20190923/model/DeleteSecretVersionResponse.cpp
  src/v20190923/model/RestoreSecretResponse.cpp
  src/v20190923/model/UpdateDescriptionResponse.cpp
  src/v20190923/model/DescribeSecretResponse.cpp
  src/v20190923/model/DescribeSupportedProductsRequest.cpp
  src/v20190923/model/GetSecretValueRequest.cpp
  src/v20190923/model/DeleteSecretRequest.cpp
  src/v20190923/model/CreateSecretRequest.cpp
  src/v20190923/model/RotateProductSecretRequest.cpp
  src/v20190923/model/CreateProductSecretRequest.cpp
  src/v20190923/model/GetSecretValueResponse.cpp
  src/v20190923/model/GetRegionsResponse.cpp
  src/v20190923/model/DescribeSupportedProductsResponse.cpp
  src/v20190923/model/DeleteSecretVersionRequest.cpp
  src/v20190923/model/SecretMetadata.cpp
  src/v20190923/model/ListSecretVersionIdsRequest.cpp
  src/v20190923/model/DescribeRotationDetailRequest.cpp
  src/v20190923/model/CreateSSHKeyPairSecretResponse.cpp
  src/v20190923/model/UpdateRotationStatusResponse.cpp
  src/v20190923/model/CreateSecretResponse.cpp
  src/v20190923/model/GetRegionsRequest.cpp
  src/v20190923/model/UpdateSecretResponse.cpp
  src/v20190923/model/DisableSecretResponse.cpp
  src/v20190923/model/Tag.cpp
  src/v20190923/model/ListSecretsRequest.cpp
  src/v20190923/model/UpdateDescriptionRequest.cpp
  src/v20190923/model/EnableSecretResponse.cpp
  src/v20190923/model/CreateSSHKeyPairSecretRequest.cpp
  src/v20190923/model/UpdateRotationStatusRequest.cpp
  src/v20190923/model/UpdateSecretRequest.cpp
  src/v20190923/model/DescribeAsyncRequestInfoResponse.cpp
  src/v20190923/model/RestoreSecretRequest.cpp
  src/v20190923/model/RotateProductSecretResponse.cpp
  src/v20190923/model/VersionInfo.cpp
  src/v20190923/model/TagFilter.cpp
  src/v20190923/model/PutSecretValueRequest.cpp
  src/v20190923/model/PutSecretValueResponse.cpp
  src/v20190923/model/DescribeRotationHistoryResponse.cpp
  src/v20190923/model/GetSSHKeyPairValueRequest.cpp
  src/v20190923/model/DescribeAsyncRequestInfoRequest.cpp
  src/v20190923/model/GetServiceStatusResponse.cpp
  src/v20190923/model/DescribeRotationDetailResponse.cpp
  src/v20190923/model/EnableSecretRequest.cpp
  src/v20190923/model/ProductPrivilegeUnit.cpp
  src/v20190923/model/DescribeRotationHistoryRequest.cpp
  src/v20190923/model/GetSSHKeyPairValueResponse.cpp
  src/v20190923/model/DeleteSecretResponse.cpp
  src/v20190923/model/DisableSecretRequest.cpp
  src/v20190923/model/CreateProductSecretResponse.cpp
  src/v20190923/model/ListSecretsResponse.cpp
  src/v20190923/model/DescribeSecretRequest.cpp
  src/v20190923/model/GetServiceStatusRequest.cpp
  src/v20190923/model/ListSecretVersionIdsResponse.cpp
  )

set(ssm_include
    include/tencentcloud/ssm
  )

add_library(ssm ${LIB_TYPE}
  ${ssm_public_header}
  ${ssm_public_header_model}
  ${ssm_src})

set_target_properties(ssm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ssm
  )

target_include_directories(ssm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ssm
  core)

#install(FILES ${ssm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssm/v20190923)
#install(FILES ${ssm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssm/v20190923/model)
install(DIRECTORY ${ssm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ssm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
