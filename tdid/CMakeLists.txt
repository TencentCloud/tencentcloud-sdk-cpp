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
  include/tencentcloud/tdid/v20210519/model/CredentialStatus.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/CheckChainResponse.h
  include/tencentcloud/tdid/v20210519/model/TransactionArg.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/CheckChainRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAuthorityIssuerRequest.h
  include/tencentcloud/tdid/v20210519/model/VerifyFunctionArg.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumListRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidDocumentRequest.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumListResponse.h
  include/tencentcloud/tdid/v20210519/model/ConsortiumItem.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialStatusRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAgencyTDidResponse.h
  include/tencentcloud/tdid/v20210519/model/AddLabelResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/SetCredentialStatusResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCptInfoResponse.h
  include/tencentcloud/tdid/v20210519/model/CptIssueRank.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialCptRankResponse.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumClusterListResponse.h
  include/tencentcloud/tdid/v20210519/model/AddLabelRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAuthorityIssuerResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDidDocumentResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/GetAgencyTDidRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialCptRankRequest.h
  include/tencentcloud/tdid/v20210519/model/RegisterCptRequest.h
  include/tencentcloud/tdid/v20210519/model/Proof.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumClusterListRequest.h
  include/tencentcloud/tdid/v20210519/model/FunctionArg.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/BcosClusterItem.h
  include/tencentcloud/tdid/v20210519/model/SetCredentialStatusRequest.h
  include/tencentcloud/tdid/v20210519/model/GetCptInfoRequest.h
  include/tencentcloud/tdid/v20210519/model/Identity.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialStatusResponse.h
  include/tencentcloud/tdid/v20210519/model/RegisterCptResponse.h
  )

set(tdid_src
  src/v20210519/TdidClient.cpp
  src/v20210519/model/CredentialStatus.cpp
  src/v20210519/model/CreateTDidRequest.cpp
  src/v20210519/model/CreateSelectiveCredentialRequest.cpp
  src/v20210519/model/CreateTDidByPrivateKeyResponse.cpp
  src/v20210519/model/CheckChainResponse.cpp
  src/v20210519/model/TransactionArg.cpp
  src/v20210519/model/CreateTDidByPublicKeyRequest.cpp
  src/v20210519/model/CreateCredentialResponse.cpp
  src/v20210519/model/CheckChainRequest.cpp
  src/v20210519/model/GetAuthorityIssuerRequest.cpp
  src/v20210519/model/VerifyFunctionArg.cpp
  src/v20210519/model/GetConsortiumListRequest.cpp
  src/v20210519/model/CreateCredentialRequest.cpp
  src/v20210519/model/GetDidDocumentRequest.cpp
  src/v20210519/model/GetConsortiumListResponse.cpp
  src/v20210519/model/ConsortiumItem.cpp
  src/v20210519/model/GetCredentialStatusRequest.cpp
  src/v20210519/model/GetAgencyTDidResponse.cpp
  src/v20210519/model/AddLabelResponse.cpp
  src/v20210519/model/VerifyCredentialResponse.cpp
  src/v20210519/model/SetCredentialStatusResponse.cpp
  src/v20210519/model/GetCptInfoResponse.cpp
  src/v20210519/model/CptIssueRank.cpp
  src/v20210519/model/GetCredentialCptRankResponse.cpp
  src/v20210519/model/GetConsortiumClusterListResponse.cpp
  src/v20210519/model/AddLabelRequest.cpp
  src/v20210519/model/GetAuthorityIssuerResponse.cpp
  src/v20210519/model/GetDidDocumentResponse.cpp
  src/v20210519/model/CreateTDidResponse.cpp
  src/v20210519/model/CreateSelectiveCredentialResponse.cpp
  src/v20210519/model/GetAgencyTDidRequest.cpp
  src/v20210519/model/CreateTDidByPublicKeyResponse.cpp
  src/v20210519/model/GetCredentialCptRankRequest.cpp
  src/v20210519/model/RegisterCptRequest.cpp
  src/v20210519/model/Proof.cpp
  src/v20210519/model/VerifyCredentialRequest.cpp
  src/v20210519/model/GetConsortiumClusterListRequest.cpp
  src/v20210519/model/FunctionArg.cpp
  src/v20210519/model/CreateTDidByPrivateKeyRequest.cpp
  src/v20210519/model/BcosClusterItem.cpp
  src/v20210519/model/SetCredentialStatusRequest.cpp
  src/v20210519/model/GetCptInfoRequest.cpp
  src/v20210519/model/Identity.cpp
  src/v20210519/model/GetCredentialStatusResponse.cpp
  src/v20210519/model/RegisterCptResponse.cpp
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
