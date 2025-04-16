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

set(kms_public_header
  include/tencentcloud/kms/v20190118/KmsClient.h
  )

set(kms_public_header_model
  include/tencentcloud/kms/v20190118/model/UpdateAliasRequest.h
  include/tencentcloud/kms/v20190118/model/EnableWhiteBoxKeyRequest.h
  include/tencentcloud/kms/v20190118/model/AsymmetricRsaDecryptRequest.h
  include/tencentcloud/kms/v20190118/model/EnableKeyRotationRequest.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyDetailsResponse.h
  include/tencentcloud/kms/v20190118/model/CreateKeyRequest.h
  include/tencentcloud/kms/v20190118/model/DisableWhiteBoxKeyResponse.h
  include/tencentcloud/kms/v20190118/model/DisableKeyResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxServiceStatusRequest.h
  include/tencentcloud/kms/v20190118/model/VerifyByAsymmetricKeyRequest.h
  include/tencentcloud/kms/v20190118/model/DescribeKeyRequest.h
  include/tencentcloud/kms/v20190118/model/WhiteboxKeyInfo.h
  include/tencentcloud/kms/v20190118/model/ListAlgorithmsResponse.h
  include/tencentcloud/kms/v20190118/model/DisableKeysResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyResponse.h
  include/tencentcloud/kms/v20190118/model/UpdateKeyDescriptionResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxServiceStatusResponse.h
  include/tencentcloud/kms/v20190118/model/ImportKeyMaterialRequest.h
  include/tencentcloud/kms/v20190118/model/EnableKeyRequest.h
  include/tencentcloud/kms/v20190118/model/GetKeyRotationStatusRequest.h
  include/tencentcloud/kms/v20190118/model/ListAlgorithmsRequest.h
  include/tencentcloud/kms/v20190118/model/Tag.h
  include/tencentcloud/kms/v20190118/model/ListKeyDetailResponse.h
  include/tencentcloud/kms/v20190118/model/GenerateDataKeyRequest.h
  include/tencentcloud/kms/v20190118/model/UpdateAliasResponse.h
  include/tencentcloud/kms/v20190118/model/ScheduleKeyDeletionResponse.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoVerifyRequest.h
  include/tencentcloud/kms/v20190118/model/GenerateRandomResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeKeysRequest.h
  include/tencentcloud/kms/v20190118/model/GetPublicKeyRequest.h
  include/tencentcloud/kms/v20190118/model/GetServiceStatusRequest.h
  include/tencentcloud/kms/v20190118/model/EnableWhiteBoxKeysResponse.h
  include/tencentcloud/kms/v20190118/model/ArchiveKeyResponse.h
  include/tencentcloud/kms/v20190118/model/VerifyByAsymmetricKeyResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyRequest.h
  include/tencentcloud/kms/v20190118/model/GetParametersForImportResponse.h
  include/tencentcloud/kms/v20190118/model/DecryptResponse.h
  include/tencentcloud/kms/v20190118/model/CreateWhiteBoxKeyResponse.h
  include/tencentcloud/kms/v20190118/model/Key.h
  include/tencentcloud/kms/v20190118/model/DeleteImportedKeyMaterialResponse.h
  include/tencentcloud/kms/v20190118/model/EnableKeysRequest.h
  include/tencentcloud/kms/v20190118/model/EnableWhiteBoxKeysRequest.h
  include/tencentcloud/kms/v20190118/model/EncryptByWhiteBoxResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeKeysResponse.h
  include/tencentcloud/kms/v20190118/model/EnableWhiteBoxKeyResponse.h
  include/tencentcloud/kms/v20190118/model/ReEncryptRequest.h
  include/tencentcloud/kms/v20190118/model/ListKeysResponse.h
  include/tencentcloud/kms/v20190118/model/AsymmetricSm2DecryptResponse.h
  include/tencentcloud/kms/v20190118/model/DisableKeyRotationResponse.h
  include/tencentcloud/kms/v20190118/model/DisableWhiteBoxKeysRequest.h
  include/tencentcloud/kms/v20190118/model/ListKeyDetailRequest.h
  include/tencentcloud/kms/v20190118/model/DeleteWhiteBoxKeyRequest.h
  include/tencentcloud/kms/v20190118/model/AlgorithmInfo.h
  include/tencentcloud/kms/v20190118/model/GetRegionsResponse.h
  include/tencentcloud/kms/v20190118/model/ExclusiveHSM.h
  include/tencentcloud/kms/v20190118/model/GenerateDataKeyResponse.h
  include/tencentcloud/kms/v20190118/model/CreateWhiteBoxKeyRequest.h
  include/tencentcloud/kms/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsResponse.h
  include/tencentcloud/kms/v20190118/model/DisableWhiteBoxKeysResponse.h
  include/tencentcloud/kms/v20190118/model/ArchiveKeyRequest.h
  include/tencentcloud/kms/v20190118/model/GetParametersForImportRequest.h
  include/tencentcloud/kms/v20190118/model/CreateKeyResponse.h
  include/tencentcloud/kms/v20190118/model/ReEncryptResponse.h
  include/tencentcloud/kms/v20190118/model/EncryptResponse.h
  include/tencentcloud/kms/v20190118/model/CancelKeyDeletionRequest.h
  include/tencentcloud/kms/v20190118/model/DeleteImportedKeyMaterialRequest.h
  include/tencentcloud/kms/v20190118/model/EnableKeyResponse.h
  include/tencentcloud/kms/v20190118/model/GetServiceStatusResponse.h
  include/tencentcloud/kms/v20190118/model/DeviceFingerprint.h
  include/tencentcloud/kms/v20190118/model/GetKeyRotationStatusResponse.h
  include/tencentcloud/kms/v20190118/model/EncryptRequest.h
  include/tencentcloud/kms/v20190118/model/AsymmetricSm2DecryptRequest.h
  include/tencentcloud/kms/v20190118/model/DeleteWhiteBoxKeyResponse.h
  include/tencentcloud/kms/v20190118/model/ListKeysRequest.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxDecryptKeyRequest.h
  include/tencentcloud/kms/v20190118/model/KeyMetadata.h
  include/tencentcloud/kms/v20190118/model/CancelKeyArchiveResponse.h
  include/tencentcloud/kms/v20190118/model/DecryptRequest.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyDetailsRequest.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoSignRequest.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoDecryptRequest.h
  include/tencentcloud/kms/v20190118/model/AsymmetricRsaDecryptResponse.h
  include/tencentcloud/kms/v20190118/model/CancelKeyDeletionResponse.h
  include/tencentcloud/kms/v20190118/model/DisableKeysRequest.h
  include/tencentcloud/kms/v20190118/model/DisableWhiteBoxKeyRequest.h
  include/tencentcloud/kms/v20190118/model/UnbindCloudResourceRequest.h
  include/tencentcloud/kms/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsRequest.h
  include/tencentcloud/kms/v20190118/model/EnableKeyRotationResponse.h
  include/tencentcloud/kms/v20190118/model/BindCloudResourceResponse.h
  include/tencentcloud/kms/v20190118/model/EnableKeysResponse.h
  include/tencentcloud/kms/v20190118/model/SignByAsymmetricKeyRequest.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxDeviceFingerprintsRequest.h
  include/tencentcloud/kms/v20190118/model/GetRegionsRequest.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoEncryptResponse.h
  include/tencentcloud/kms/v20190118/model/EncryptByWhiteBoxRequest.h
  include/tencentcloud/kms/v20190118/model/GenerateRandomRequest.h
  include/tencentcloud/kms/v20190118/model/ScheduleKeyDeletionRequest.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoEncryptRequest.h
  include/tencentcloud/kms/v20190118/model/DisableKeyRequest.h
  include/tencentcloud/kms/v20190118/model/ImportKeyMaterialResponse.h
  include/tencentcloud/kms/v20190118/model/GetPublicKeyResponse.h
  include/tencentcloud/kms/v20190118/model/BindCloudResourceRequest.h
  include/tencentcloud/kms/v20190118/model/TagFilter.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoSignResponse.h
  include/tencentcloud/kms/v20190118/model/SignByAsymmetricKeyResponse.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoVerifyResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxDecryptKeyResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeWhiteBoxDeviceFingerprintsResponse.h
  include/tencentcloud/kms/v20190118/model/PostQuantumCryptoDecryptResponse.h
  include/tencentcloud/kms/v20190118/model/UpdateKeyDescriptionRequest.h
  include/tencentcloud/kms/v20190118/model/UnbindCloudResourceResponse.h
  include/tencentcloud/kms/v20190118/model/DescribeKeyResponse.h
  include/tencentcloud/kms/v20190118/model/CancelKeyArchiveRequest.h
  include/tencentcloud/kms/v20190118/model/DisableKeyRotationRequest.h
  )

set(kms_src
  src/v20190118/KmsClient.cpp
  src/v20190118/model/UpdateAliasRequest.cpp
  src/v20190118/model/EnableWhiteBoxKeyRequest.cpp
  src/v20190118/model/AsymmetricRsaDecryptRequest.cpp
  src/v20190118/model/EnableKeyRotationRequest.cpp
  src/v20190118/model/DescribeWhiteBoxKeyDetailsResponse.cpp
  src/v20190118/model/CreateKeyRequest.cpp
  src/v20190118/model/DisableWhiteBoxKeyResponse.cpp
  src/v20190118/model/DisableKeyResponse.cpp
  src/v20190118/model/DescribeWhiteBoxServiceStatusRequest.cpp
  src/v20190118/model/VerifyByAsymmetricKeyRequest.cpp
  src/v20190118/model/DescribeKeyRequest.cpp
  src/v20190118/model/WhiteboxKeyInfo.cpp
  src/v20190118/model/ListAlgorithmsResponse.cpp
  src/v20190118/model/DisableKeysResponse.cpp
  src/v20190118/model/DescribeWhiteBoxKeyResponse.cpp
  src/v20190118/model/UpdateKeyDescriptionResponse.cpp
  src/v20190118/model/DescribeWhiteBoxServiceStatusResponse.cpp
  src/v20190118/model/ImportKeyMaterialRequest.cpp
  src/v20190118/model/EnableKeyRequest.cpp
  src/v20190118/model/GetKeyRotationStatusRequest.cpp
  src/v20190118/model/ListAlgorithmsRequest.cpp
  src/v20190118/model/Tag.cpp
  src/v20190118/model/ListKeyDetailResponse.cpp
  src/v20190118/model/GenerateDataKeyRequest.cpp
  src/v20190118/model/UpdateAliasResponse.cpp
  src/v20190118/model/ScheduleKeyDeletionResponse.cpp
  src/v20190118/model/PostQuantumCryptoVerifyRequest.cpp
  src/v20190118/model/GenerateRandomResponse.cpp
  src/v20190118/model/DescribeKeysRequest.cpp
  src/v20190118/model/GetPublicKeyRequest.cpp
  src/v20190118/model/GetServiceStatusRequest.cpp
  src/v20190118/model/EnableWhiteBoxKeysResponse.cpp
  src/v20190118/model/ArchiveKeyResponse.cpp
  src/v20190118/model/VerifyByAsymmetricKeyResponse.cpp
  src/v20190118/model/DescribeWhiteBoxKeyRequest.cpp
  src/v20190118/model/GetParametersForImportResponse.cpp
  src/v20190118/model/DecryptResponse.cpp
  src/v20190118/model/CreateWhiteBoxKeyResponse.cpp
  src/v20190118/model/Key.cpp
  src/v20190118/model/DeleteImportedKeyMaterialResponse.cpp
  src/v20190118/model/EnableKeysRequest.cpp
  src/v20190118/model/EnableWhiteBoxKeysRequest.cpp
  src/v20190118/model/EncryptByWhiteBoxResponse.cpp
  src/v20190118/model/DescribeKeysResponse.cpp
  src/v20190118/model/EnableWhiteBoxKeyResponse.cpp
  src/v20190118/model/ReEncryptRequest.cpp
  src/v20190118/model/ListKeysResponse.cpp
  src/v20190118/model/AsymmetricSm2DecryptResponse.cpp
  src/v20190118/model/DisableKeyRotationResponse.cpp
  src/v20190118/model/DisableWhiteBoxKeysRequest.cpp
  src/v20190118/model/ListKeyDetailRequest.cpp
  src/v20190118/model/DeleteWhiteBoxKeyRequest.cpp
  src/v20190118/model/AlgorithmInfo.cpp
  src/v20190118/model/GetRegionsResponse.cpp
  src/v20190118/model/ExclusiveHSM.cpp
  src/v20190118/model/GenerateDataKeyResponse.cpp
  src/v20190118/model/CreateWhiteBoxKeyRequest.cpp
  src/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsResponse.cpp
  src/v20190118/model/DisableWhiteBoxKeysResponse.cpp
  src/v20190118/model/ArchiveKeyRequest.cpp
  src/v20190118/model/GetParametersForImportRequest.cpp
  src/v20190118/model/CreateKeyResponse.cpp
  src/v20190118/model/ReEncryptResponse.cpp
  src/v20190118/model/EncryptResponse.cpp
  src/v20190118/model/CancelKeyDeletionRequest.cpp
  src/v20190118/model/DeleteImportedKeyMaterialRequest.cpp
  src/v20190118/model/EnableKeyResponse.cpp
  src/v20190118/model/GetServiceStatusResponse.cpp
  src/v20190118/model/DeviceFingerprint.cpp
  src/v20190118/model/GetKeyRotationStatusResponse.cpp
  src/v20190118/model/EncryptRequest.cpp
  src/v20190118/model/AsymmetricSm2DecryptRequest.cpp
  src/v20190118/model/DeleteWhiteBoxKeyResponse.cpp
  src/v20190118/model/ListKeysRequest.cpp
  src/v20190118/model/DescribeWhiteBoxDecryptKeyRequest.cpp
  src/v20190118/model/KeyMetadata.cpp
  src/v20190118/model/CancelKeyArchiveResponse.cpp
  src/v20190118/model/DecryptRequest.cpp
  src/v20190118/model/DescribeWhiteBoxKeyDetailsRequest.cpp
  src/v20190118/model/PostQuantumCryptoSignRequest.cpp
  src/v20190118/model/PostQuantumCryptoDecryptRequest.cpp
  src/v20190118/model/AsymmetricRsaDecryptResponse.cpp
  src/v20190118/model/CancelKeyDeletionResponse.cpp
  src/v20190118/model/DisableKeysRequest.cpp
  src/v20190118/model/DisableWhiteBoxKeyRequest.cpp
  src/v20190118/model/UnbindCloudResourceRequest.cpp
  src/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsRequest.cpp
  src/v20190118/model/EnableKeyRotationResponse.cpp
  src/v20190118/model/BindCloudResourceResponse.cpp
  src/v20190118/model/EnableKeysResponse.cpp
  src/v20190118/model/SignByAsymmetricKeyRequest.cpp
  src/v20190118/model/DescribeWhiteBoxDeviceFingerprintsRequest.cpp
  src/v20190118/model/GetRegionsRequest.cpp
  src/v20190118/model/PostQuantumCryptoEncryptResponse.cpp
  src/v20190118/model/EncryptByWhiteBoxRequest.cpp
  src/v20190118/model/GenerateRandomRequest.cpp
  src/v20190118/model/ScheduleKeyDeletionRequest.cpp
  src/v20190118/model/PostQuantumCryptoEncryptRequest.cpp
  src/v20190118/model/DisableKeyRequest.cpp
  src/v20190118/model/ImportKeyMaterialResponse.cpp
  src/v20190118/model/GetPublicKeyResponse.cpp
  src/v20190118/model/BindCloudResourceRequest.cpp
  src/v20190118/model/TagFilter.cpp
  src/v20190118/model/PostQuantumCryptoSignResponse.cpp
  src/v20190118/model/SignByAsymmetricKeyResponse.cpp
  src/v20190118/model/PostQuantumCryptoVerifyResponse.cpp
  src/v20190118/model/DescribeWhiteBoxDecryptKeyResponse.cpp
  src/v20190118/model/DescribeWhiteBoxDeviceFingerprintsResponse.cpp
  src/v20190118/model/PostQuantumCryptoDecryptResponse.cpp
  src/v20190118/model/UpdateKeyDescriptionRequest.cpp
  src/v20190118/model/UnbindCloudResourceResponse.cpp
  src/v20190118/model/DescribeKeyResponse.cpp
  src/v20190118/model/CancelKeyArchiveRequest.cpp
  src/v20190118/model/DisableKeyRotationRequest.cpp
  )

set(kms_include
    include/tencentcloud/kms
  )

add_library(kms ${LIB_TYPE}
  ${kms_public_header}
  ${kms_public_header_model}
  ${kms_src})

set_target_properties(kms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}kms
  )

target_include_directories(kms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(kms
  core)

#install(FILES ${kms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/kms/v20190118)
#install(FILES ${kms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/kms/v20190118/model)
install(DIRECTORY ${kms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS kms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
