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
  include/tencentcloud/tdid/v20210519/model/QueryPolicyRequest.h
  include/tencentcloud/tdid/v20210519/model/RegisterClaimPolicyRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidServiceDetailResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumListRequest.h
  include/tencentcloud/tdid/v20210519/model/DownCptResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialIssueTrendResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateDidServiceResponse.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumListResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialCptRankRequest.h
  include/tencentcloud/tdid/v20210519/model/GetPolicyListRequest.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumClusterListResponse.h
  include/tencentcloud/tdid/v20210519/model/Task.h
  include/tencentcloud/tdid/v20210519/model/GetCptListRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAuthoritiesListRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAgencyTDidRequest.h
  include/tencentcloud/tdid/v20210519/model/RemoveHashRequest.h
  include/tencentcloud/tdid/v20210519/model/GetGroupListRequest.h
  include/tencentcloud/tdid/v20210519/model/Proof.h
  include/tencentcloud/tdid/v20210519/model/GetDeployInfoRequest.h
  include/tencentcloud/tdid/v20210519/model/Authority.h
  include/tencentcloud/tdid/v20210519/model/CreateLabelResponse.h
  include/tencentcloud/tdid/v20210519/model/GetPublicKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/Label.h
  include/tencentcloud/tdid/v20210519/model/GetDidServiceListResponse.h
  include/tencentcloud/tdid/v20210519/model/DeployByNameResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateLabelRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateDidServiceRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidClusterDetailResponse.h
  include/tencentcloud/tdid/v20210519/model/RecognizeAuthorityIssuerResponse.h
  include/tencentcloud/tdid/v20210519/model/EnableHashResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialIssueTrendRequest.h
  include/tencentcloud/tdid/v20210519/model/EnableHashRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidClusterListRequest.h
  include/tencentcloud/tdid/v20210519/model/GetCptInfoRequest.h
  include/tencentcloud/tdid/v20210519/model/DownCptRequest.h
  include/tencentcloud/tdid/v20210519/model/GetCptListResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCptInfoResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDidRegisterTrendRequest.h
  include/tencentcloud/tdid/v20210519/model/AddLabelRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAuthorityIssuerResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/CptListData.h
  include/tencentcloud/tdid/v20210519/model/FunctionArg.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/RegisterCptResponse.h
  include/tencentcloud/tdid/v20210519/model/SetCredentialStatusRequest.h
  include/tencentcloud/tdid/v20210519/model/RemoveHashResponse.h
  include/tencentcloud/tdid/v20210519/model/CheckDidDeployRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidDocumentResponse.h
  include/tencentcloud/tdid/v20210519/model/RegisterIssuerResponse.h
  include/tencentcloud/tdid/v20210519/model/CancelAuthorityIssuerRequest.h
  include/tencentcloud/tdid/v20210519/model/CancelAuthorityIssuerResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAuthoritiesListResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/DeployByNameRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidServiceListRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAuthorityIssuerRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidClusterListResponse.h
  include/tencentcloud/tdid/v20210519/model/RecognizeAuthorityIssuerRequest.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialStatusRequest.h
  include/tencentcloud/tdid/v20210519/model/GetAgencyTDidResponse.h
  include/tencentcloud/tdid/v20210519/model/DidServiceInfo.h
  include/tencentcloud/tdid/v20210519/model/SetCredentialStatusResponse.h
  include/tencentcloud/tdid/v20210519/model/CptIssueRank.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialCptRankResponse.h
  include/tencentcloud/tdid/v20210519/model/TransactionArg.h
  include/tencentcloud/tdid/v20210519/model/RegisterIssuerRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidListResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDeployInfoResponse.h
  include/tencentcloud/tdid/v20210519/model/Contract.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/CheckDidDeployResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDidClusterDetailRequest.h
  include/tencentcloud/tdid/v20210519/model/GetConsortiumClusterListRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidDetailResponse.h
  include/tencentcloud/tdid/v20210519/model/Trend.h
  include/tencentcloud/tdid/v20210519/model/BcosClusterItem.h
  include/tencentcloud/tdid/v20210519/model/GetLabelListRequest.h
  include/tencentcloud/tdid/v20210519/model/DidCluster.h
  include/tencentcloud/tdid/v20210519/model/GetDataPanelResponse.h
  include/tencentcloud/tdid/v20210519/model/Identity.h
  include/tencentcloud/tdid/v20210519/model/QueryPolicyResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDidListRequest.h
  include/tencentcloud/tdid/v20210519/model/Group.h
  include/tencentcloud/tdid/v20210519/model/CheckChainResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyRequest.h
  include/tencentcloud/tdid/v20210519/model/Policy.h
  include/tencentcloud/tdid/v20210519/model/GetDataPanelRequest.h
  include/tencentcloud/tdid/v20210519/model/GetGroupListResponse.h
  include/tencentcloud/tdid/v20210519/model/RegisterClaimPolicyResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDidDetailRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidServiceDetailRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDidDocumentRequest.h
  include/tencentcloud/tdid/v20210519/model/ConsortiumItem.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialIssueRankResponse.h
  include/tencentcloud/tdid/v20210519/model/AddLabelResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDeployListResponse.h
  include/tencentcloud/tdid/v20210519/model/CheckChainRequest.h
  include/tencentcloud/tdid/v20210519/model/GetPublicKeyResponse.h
  include/tencentcloud/tdid/v20210519/model/GetDidRegisterTrendResponse.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialStatusResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/RegisterCptRequest.h
  include/tencentcloud/tdid/v20210519/model/GetLabelListResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyFunctionArg.h
  include/tencentcloud/tdid/v20210519/model/GetPolicyListResponse.h
  include/tencentcloud/tdid/v20210519/model/DidData.h
  include/tencentcloud/tdid/v20210519/model/GetCredentialIssueRankRequest.h
  include/tencentcloud/tdid/v20210519/model/GetDeployListRequest.h
  )

set(tdid_src
  src/v20210519/TdidClient.cpp
  src/v20210519/model/CredentialStatus.cpp
  src/v20210519/model/QueryPolicyRequest.cpp
  src/v20210519/model/RegisterClaimPolicyRequest.cpp
  src/v20210519/model/GetDidServiceDetailResponse.cpp
  src/v20210519/model/CreateCredentialResponse.cpp
  src/v20210519/model/GetConsortiumListRequest.cpp
  src/v20210519/model/DownCptResponse.cpp
  src/v20210519/model/GetCredentialIssueTrendResponse.cpp
  src/v20210519/model/CreateCredentialRequest.cpp
  src/v20210519/model/CreateDidServiceResponse.cpp
  src/v20210519/model/GetConsortiumListResponse.cpp
  src/v20210519/model/GetCredentialCptRankRequest.cpp
  src/v20210519/model/GetPolicyListRequest.cpp
  src/v20210519/model/GetConsortiumClusterListResponse.cpp
  src/v20210519/model/Task.cpp
  src/v20210519/model/GetCptListRequest.cpp
  src/v20210519/model/GetAuthoritiesListRequest.cpp
  src/v20210519/model/GetAgencyTDidRequest.cpp
  src/v20210519/model/RemoveHashRequest.cpp
  src/v20210519/model/GetGroupListRequest.cpp
  src/v20210519/model/Proof.cpp
  src/v20210519/model/GetDeployInfoRequest.cpp
  src/v20210519/model/Authority.cpp
  src/v20210519/model/CreateLabelResponse.cpp
  src/v20210519/model/GetPublicKeyRequest.cpp
  src/v20210519/model/Label.cpp
  src/v20210519/model/GetDidServiceListResponse.cpp
  src/v20210519/model/DeployByNameResponse.cpp
  src/v20210519/model/CreateLabelRequest.cpp
  src/v20210519/model/CreateDidServiceRequest.cpp
  src/v20210519/model/GetDidClusterDetailResponse.cpp
  src/v20210519/model/RecognizeAuthorityIssuerResponse.cpp
  src/v20210519/model/EnableHashResponse.cpp
  src/v20210519/model/GetCredentialIssueTrendRequest.cpp
  src/v20210519/model/EnableHashRequest.cpp
  src/v20210519/model/GetDidClusterListRequest.cpp
  src/v20210519/model/GetCptInfoRequest.cpp
  src/v20210519/model/DownCptRequest.cpp
  src/v20210519/model/GetCptListResponse.cpp
  src/v20210519/model/GetCptInfoResponse.cpp
  src/v20210519/model/GetDidRegisterTrendRequest.cpp
  src/v20210519/model/AddLabelRequest.cpp
  src/v20210519/model/GetAuthorityIssuerResponse.cpp
  src/v20210519/model/CreateSelectiveCredentialResponse.cpp
  src/v20210519/model/VerifyCredentialResponse.cpp
  src/v20210519/model/CptListData.cpp
  src/v20210519/model/FunctionArg.cpp
  src/v20210519/model/CreateTDidByPrivateKeyRequest.cpp
  src/v20210519/model/RegisterCptResponse.cpp
  src/v20210519/model/SetCredentialStatusRequest.cpp
  src/v20210519/model/RemoveHashResponse.cpp
  src/v20210519/model/CheckDidDeployRequest.cpp
  src/v20210519/model/GetDidDocumentResponse.cpp
  src/v20210519/model/RegisterIssuerResponse.cpp
  src/v20210519/model/CancelAuthorityIssuerRequest.cpp
  src/v20210519/model/CancelAuthorityIssuerResponse.cpp
  src/v20210519/model/CreateTDidRequest.cpp
  src/v20210519/model/GetAuthoritiesListResponse.cpp
  src/v20210519/model/CreateSelectiveCredentialRequest.cpp
  src/v20210519/model/CreateTDidByPrivateKeyResponse.cpp
  src/v20210519/model/DeployByNameRequest.cpp
  src/v20210519/model/GetDidServiceListRequest.cpp
  src/v20210519/model/GetAuthorityIssuerRequest.cpp
  src/v20210519/model/GetDidClusterListResponse.cpp
  src/v20210519/model/RecognizeAuthorityIssuerRequest.cpp
  src/v20210519/model/GetCredentialStatusRequest.cpp
  src/v20210519/model/GetAgencyTDidResponse.cpp
  src/v20210519/model/DidServiceInfo.cpp
  src/v20210519/model/SetCredentialStatusResponse.cpp
  src/v20210519/model/CptIssueRank.cpp
  src/v20210519/model/GetCredentialCptRankResponse.cpp
  src/v20210519/model/TransactionArg.cpp
  src/v20210519/model/RegisterIssuerRequest.cpp
  src/v20210519/model/GetDidListResponse.cpp
  src/v20210519/model/GetDeployInfoResponse.cpp
  src/v20210519/model/Contract.cpp
  src/v20210519/model/CreateTDidByPublicKeyResponse.cpp
  src/v20210519/model/CheckDidDeployResponse.cpp
  src/v20210519/model/GetDidClusterDetailRequest.cpp
  src/v20210519/model/GetConsortiumClusterListRequest.cpp
  src/v20210519/model/GetDidDetailResponse.cpp
  src/v20210519/model/Trend.cpp
  src/v20210519/model/BcosClusterItem.cpp
  src/v20210519/model/GetLabelListRequest.cpp
  src/v20210519/model/DidCluster.cpp
  src/v20210519/model/GetDataPanelResponse.cpp
  src/v20210519/model/Identity.cpp
  src/v20210519/model/QueryPolicyResponse.cpp
  src/v20210519/model/GetDidListRequest.cpp
  src/v20210519/model/Group.cpp
  src/v20210519/model/CheckChainResponse.cpp
  src/v20210519/model/CreateTDidByPublicKeyRequest.cpp
  src/v20210519/model/Policy.cpp
  src/v20210519/model/GetDataPanelRequest.cpp
  src/v20210519/model/GetGroupListResponse.cpp
  src/v20210519/model/RegisterClaimPolicyResponse.cpp
  src/v20210519/model/GetDidDetailRequest.cpp
  src/v20210519/model/GetDidServiceDetailRequest.cpp
  src/v20210519/model/GetDidDocumentRequest.cpp
  src/v20210519/model/ConsortiumItem.cpp
  src/v20210519/model/GetCredentialIssueRankResponse.cpp
  src/v20210519/model/AddLabelResponse.cpp
  src/v20210519/model/GetDeployListResponse.cpp
  src/v20210519/model/CheckChainRequest.cpp
  src/v20210519/model/GetPublicKeyResponse.cpp
  src/v20210519/model/GetDidRegisterTrendResponse.cpp
  src/v20210519/model/GetCredentialStatusResponse.cpp
  src/v20210519/model/CreateTDidResponse.cpp
  src/v20210519/model/VerifyCredentialRequest.cpp
  src/v20210519/model/RegisterCptRequest.cpp
  src/v20210519/model/GetLabelListResponse.cpp
  src/v20210519/model/VerifyFunctionArg.cpp
  src/v20210519/model/GetPolicyListResponse.cpp
  src/v20210519/model/DidData.cpp
  src/v20210519/model/GetCredentialIssueRankRequest.cpp
  src/v20210519/model/GetDeployListRequest.cpp
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
