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

set(tdid_public_header
  include/tencentcloud/tdid/v20210519/TdidClient.h
  )

set(tdid_public_header_model
  include/tencentcloud/tdid/v20210519/model/GetTDidDocumentResponse.h
  include/tencentcloud/tdid/v20210519/model/CredentialStatusInfo.h
  include/tencentcloud/tdid/v20210519/model/VerifyPresentationRequest.h
  include/tencentcloud/tdid/v20210519/model/SetTDidAttributeResponse.h
  include/tencentcloud/tdid/v20210519/model/IssueCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/ResourceCounterData.h
  include/tencentcloud/tdid/v20210519/model/SetTDidAttributeRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateDisclosedCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/QueryCPTResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/QueryAuthorityInfoResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialsResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialStateResponse.h
  include/tencentcloud/tdid/v20210519/model/IssueCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/GetTDidByObjectIdResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateDisclosedCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/GetOverSummaryRequest.h
  include/tencentcloud/tdid/v20210519/model/GetTDidPubKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/GetTDidDocumentRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByHostResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialsRequest.h
  include/tencentcloud/tdid/v20210519/model/QueryAuthorityInfoRequest.h
  include/tencentcloud/tdid/v20210519/model/VerifyPresentationResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialStateRequest.h
  include/tencentcloud/tdid/v20210519/model/QueryCPTRequest.h
  include/tencentcloud/tdid/v20210519/model/CreatePresentationRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByHostRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAppSummaryResponse.h
  include/tencentcloud/tdid/v20210519/model/CRDLArg.h
  include/tencentcloud/tdid/v20210519/model/GetTDidPubKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/UpdateCredentialStateResponse.h
  include/tencentcloud/tdid/v20210519/model/DeactivateTDidResponse.h
  include/tencentcloud/tdid/v20210519/model/CredentialProof.h
  include/tencentcloud/tdid/v20210519/model/CredentialState.h
  include/tencentcloud/tdid/v20210519/model/GetTDidByObjectIdRequest.h
  include/tencentcloud/tdid/v20210519/model/CreatePresentationResponse.h
  include/tencentcloud/tdid/v20210519/model/DidAttribute.h
  include/tencentcloud/tdid/v20210519/model/UpdateCredentialStateRequest.h
  include/tencentcloud/tdid/v20210519/model/GetOverSummaryResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/DeactivateTDidRequest.h
  include/tencentcloud/tdid/v20210519/model/ChainTransaction.h
  include/tencentcloud/tdid/v20210519/model/GetAppSummaryRequest.h
  )

set(tdid_src
  src/v20210519/TdidClient.cpp
  src/v20210519/model/GetTDidDocumentResponse.cpp
  src/v20210519/model/CredentialStatusInfo.cpp
  src/v20210519/model/VerifyPresentationRequest.cpp
  src/v20210519/model/SetTDidAttributeResponse.cpp
  src/v20210519/model/IssueCredentialResponse.cpp
  src/v20210519/model/ResourceCounterData.cpp
  src/v20210519/model/SetTDidAttributeRequest.cpp
  src/v20210519/model/CreateDisclosedCredentialRequest.cpp
  src/v20210519/model/QueryCPTResponse.cpp
  src/v20210519/model/CreateTDidByPubKeyResponse.cpp
  src/v20210519/model/QueryAuthorityInfoResponse.cpp
  src/v20210519/model/VerifyCredentialsResponse.cpp
  src/v20210519/model/GetCredentialStateResponse.cpp
  src/v20210519/model/IssueCredentialRequest.cpp
  src/v20210519/model/GetTDidByObjectIdResponse.cpp
  src/v20210519/model/CreateDisclosedCredentialResponse.cpp
  src/v20210519/model/GetOverSummaryRequest.cpp
  src/v20210519/model/GetTDidPubKeyRequest.cpp
  src/v20210519/model/GetTDidDocumentRequest.cpp
  src/v20210519/model/CreateTDidByHostResponse.cpp
  src/v20210519/model/VerifyCredentialsRequest.cpp
  src/v20210519/model/QueryAuthorityInfoRequest.cpp
  src/v20210519/model/VerifyPresentationResponse.cpp
  src/v20210519/model/GetCredentialStateRequest.cpp
  src/v20210519/model/QueryCPTRequest.cpp
  src/v20210519/model/CreatePresentationRequest.cpp
  src/v20210519/model/CreateTDidByHostRequest.cpp
  src/v20210519/model/GetAppSummaryResponse.cpp
  src/v20210519/model/CRDLArg.cpp
  src/v20210519/model/GetTDidPubKeyResponse.cpp
  src/v20210519/model/UpdateCredentialStateResponse.cpp
  src/v20210519/model/DeactivateTDidResponse.cpp
  src/v20210519/model/CredentialProof.cpp
  src/v20210519/model/CredentialState.cpp
  src/v20210519/model/GetTDidByObjectIdRequest.cpp
  src/v20210519/model/CreatePresentationResponse.cpp
  src/v20210519/model/DidAttribute.cpp
  src/v20210519/model/UpdateCredentialStateRequest.cpp
  src/v20210519/model/GetOverSummaryResponse.cpp
  src/v20210519/model/CreateTDidByPubKeyRequest.cpp
  src/v20210519/model/DeactivateTDidRequest.cpp
  src/v20210519/model/ChainTransaction.cpp
  src/v20210519/model/GetAppSummaryRequest.cpp
  )

set(tdid_include
    include/tencentcloud/tdid
  )

add_library(tdid ${LIB_TYPE}
  ${tdid_public_header}
  ${tdid_public_header_model}
  ${tdid_src})

set_target_properties(tdid
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdid
  )

target_include_directories(tdid
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tdid
  core)

#install(FILES ${tdid_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdid/v20210519)
#install(FILES ${tdid_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdid/v20210519/model)
install(DIRECTORY ${tdid_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tdid
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
