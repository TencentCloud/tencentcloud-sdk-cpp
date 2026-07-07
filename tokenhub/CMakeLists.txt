#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(tokenhub_public_header
  include/tencentcloud/tokenhub/v20260322/TokenhubClient.h
  )

set(tokenhub_public_header_model
  include/tencentcloud/tokenhub/v20260322/model/TokenPlanApiKeyListItem.h
  include/tencentcloud/tokenhub/v20260322/model/BindingItem.h
  include/tencentcloud/tokenhub/v20260322/model/CreateApiKeysResultItem.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/RenewTokenPlanTeamOrderResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModelImage.h
  include/tencentcloud/tokenhub/v20260322/model/UsageSeries.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanListResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModelAccessInfo.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeModelListResponse.h
  include/tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteTokenPlanApiKeyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/GlossaryEntryItem.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeModelListRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeySecretResponse.h
  include/tencentcloud/tokenhub/v20260322/model/GlossaryEntryInput.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeySecretResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntryInput.h
  include/tencentcloud/tokenhub/v20260322/model/QuotaInfo.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeApiKeyListResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteApiKeyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntryInput.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossariesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ApiKeyDetail.h
  include/tencentcloud/tokenhub/v20260322/model/UsageDetailItem.h
  include/tencentcloud/tokenhub/v20260322/model/SubPackageBalance.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteApiKeyRequest.h
  include/tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderResponse.h
  include/tencentcloud/tokenhub/v20260322/model/TokenPlanPackageInfo.h
  include/tencentcloud/tokenhub/v20260322/model/UsageStats.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeUsageRankListResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeApiKeyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeySecretRequest.h
  include/tencentcloud/tokenhub/v20260322/model/ModelChargingInfo.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyApiKeyStatusRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanRequest.h
  include/tencentcloud/tokenhub/v20260322/model/GlossaryItem.h
  include/tencentcloud/tokenhub/v20260322/model/Model.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeApiKeyListRequest.h
  include/tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderRequest.h
  include/tencentcloud/tokenhub/v20260322/model/TokenSummaryBillingItem.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoRequest.h
  include/tencentcloud/tokenhub/v20260322/model/TokenPlanListItem.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeApiKeyRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeUsageRankListRequest.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossariesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/BatchCreateFailedItem.h
  include/tencentcloud/tokenhub/v20260322/model/CreateApiKeyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModelSpec.h
  include/tencentcloud/tokenhub/v20260322/model/TokenSummary.h
  include/tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteTokenPlanApiKeyRequest.h
  include/tencentcloud/tokenhub/v20260322/model/ModelChargingItem.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanListRequest.h
  include/tencentcloud/tokenhub/v20260322/model/ModelFreeTrialInfo.h
  include/tencentcloud/tokenhub/v20260322/model/TokenPlanApiKeyInfo.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyRequest.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryRequest.h
  include/tencentcloud/tokenhub/v20260322/model/UsageRankItem.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/RenewTokenPlanTeamOrderRequest.h
  include/tencentcloud/tokenhub/v20260322/model/ModelSiteRegion.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyApiKeyStatusResponse.h
  include/tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyResponse.h
  include/tencentcloud/tokenhub/v20260322/model/RequestFilter.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeySecretRequest.h
  include/tencentcloud/tokenhub/v20260322/model/RequestSort.h
  include/tencentcloud/tokenhub/v20260322/model/CreateApiKeyRequest.h
  )

set(tokenhub_src
  src/v20260322/TokenhubClient.cpp
  src/v20260322/model/TokenPlanApiKeyListItem.cpp
  src/v20260322/model/BindingItem.cpp
  src/v20260322/model/CreateApiKeysResultItem.cpp
  src/v20260322/model/DescribeTokenPlanApiKeyListResponse.cpp
  src/v20260322/model/DeleteGlossaryResponse.cpp
  src/v20260322/model/DeleteGlossaryEntriesResponse.cpp
  src/v20260322/model/RenewTokenPlanTeamOrderResponse.cpp
  src/v20260322/model/ModelImage.cpp
  src/v20260322/model/UsageSeries.cpp
  src/v20260322/model/DescribeTokenPlanListResponse.cpp
  src/v20260322/model/DeleteGlossaryEntriesRequest.cpp
  src/v20260322/model/CreateGlossaryEntriesResponse.cpp
  src/v20260322/model/CreateTokenPlanApiKeysResponse.cpp
  src/v20260322/model/ModelAccessInfo.cpp
  src/v20260322/model/DescribeModelListResponse.cpp
  src/v20260322/model/CreateTokenPlanTeamOrderAndBuyRequest.cpp
  src/v20260322/model/DeleteTokenPlanApiKeyResponse.cpp
  src/v20260322/model/GlossaryEntryItem.cpp
  src/v20260322/model/ModifyGlossaryEntriesResponse.cpp
  src/v20260322/model/DescribeTokenPlanResponse.cpp
  src/v20260322/model/DescribeModelListRequest.cpp
  src/v20260322/model/DescribeTokenPlanApiKeySecretResponse.cpp
  src/v20260322/model/GlossaryEntryInput.cpp
  src/v20260322/model/ModifyTokenPlanApiKeySecretResponse.cpp
  src/v20260322/model/DeleteGlossaryEntryInput.cpp
  src/v20260322/model/QuotaInfo.cpp
  src/v20260322/model/DescribeApiKeyListResponse.cpp
  src/v20260322/model/ModifyApiKeyInfoResponse.cpp
  src/v20260322/model/DeleteGlossaryRequest.cpp
  src/v20260322/model/DescribeGlossaryEntriesRequest.cpp
  src/v20260322/model/DescribeTokenPlanApiKeyRequest.cpp
  src/v20260322/model/DeleteApiKeyResponse.cpp
  src/v20260322/model/ModifyGlossaryEntryInput.cpp
  src/v20260322/model/DescribeTokenPlanApiKeyListRequest.cpp
  src/v20260322/model/DescribeGlossariesRequest.cpp
  src/v20260322/model/DescribeTokenPlanApiKeyUsageDetailRequest.cpp
  src/v20260322/model/DescribeGlossaryEntriesResponse.cpp
  src/v20260322/model/ApiKeyDetail.cpp
  src/v20260322/model/UsageDetailItem.cpp
  src/v20260322/model/SubPackageBalance.cpp
  src/v20260322/model/DeleteApiKeyRequest.cpp
  src/v20260322/model/UpgradeTokenPlanTeamOrderResponse.cpp
  src/v20260322/model/TokenPlanPackageInfo.cpp
  src/v20260322/model/UsageStats.cpp
  src/v20260322/model/DescribeUsageRankListResponse.cpp
  src/v20260322/model/DescribeApiKeyResponse.cpp
  src/v20260322/model/DescribeTokenPlanApiKeySecretRequest.cpp
  src/v20260322/model/ModelChargingInfo.cpp
  src/v20260322/model/ModifyApiKeyStatusRequest.cpp
  src/v20260322/model/DescribeTokenPlanRequest.cpp
  src/v20260322/model/GlossaryItem.cpp
  src/v20260322/model/Model.cpp
  src/v20260322/model/ModifyTokenPlanApiKeyResponse.cpp
  src/v20260322/model/DescribeApiKeyListRequest.cpp
  src/v20260322/model/UpgradeTokenPlanTeamOrderRequest.cpp
  src/v20260322/model/TokenSummaryBillingItem.cpp
  src/v20260322/model/DescribeTokenPlanApiKeyUsageDetailResponse.cpp
  src/v20260322/model/ModifyApiKeyInfoRequest.cpp
  src/v20260322/model/TokenPlanListItem.cpp
  src/v20260322/model/DescribeApiKeyRequest.cpp
  src/v20260322/model/DescribeUsageRankListRequest.cpp
  src/v20260322/model/CreateGlossaryEntriesRequest.cpp
  src/v20260322/model/DescribeGlossariesResponse.cpp
  src/v20260322/model/BatchCreateFailedItem.cpp
  src/v20260322/model/CreateApiKeyResponse.cpp
  src/v20260322/model/ModelSpec.cpp
  src/v20260322/model/TokenSummary.cpp
  src/v20260322/model/CreateTokenPlanApiKeysRequest.cpp
  src/v20260322/model/DeleteTokenPlanApiKeyRequest.cpp
  src/v20260322/model/ModelChargingItem.cpp
  src/v20260322/model/DescribeTokenPlanApiKeyResponse.cpp
  src/v20260322/model/DescribeTokenPlanListRequest.cpp
  src/v20260322/model/ModelFreeTrialInfo.cpp
  src/v20260322/model/TokenPlanApiKeyInfo.cpp
  src/v20260322/model/ModifyTokenPlanApiKeyRequest.cpp
  src/v20260322/model/CreateGlossaryRequest.cpp
  src/v20260322/model/UsageRankItem.cpp
  src/v20260322/model/CreateGlossaryResponse.cpp
  src/v20260322/model/ModifyGlossaryEntriesRequest.cpp
  src/v20260322/model/RenewTokenPlanTeamOrderRequest.cpp
  src/v20260322/model/ModelSiteRegion.cpp
  src/v20260322/model/ModifyApiKeyStatusResponse.cpp
  src/v20260322/model/CreateTokenPlanTeamOrderAndBuyResponse.cpp
  src/v20260322/model/RequestFilter.cpp
  src/v20260322/model/ModifyTokenPlanApiKeySecretRequest.cpp
  src/v20260322/model/RequestSort.cpp
  src/v20260322/model/CreateApiKeyRequest.cpp
  )

set(tokenhub_include
    include/tencentcloud/tokenhub
  )

add_library(tokenhub ${LIB_TYPE}
  ${tokenhub_public_header}
  ${tokenhub_public_header_model}
  ${tokenhub_src})

set_target_properties(tokenhub
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tokenhub
  )

target_include_directories(tokenhub
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tokenhub
  core)

#install(FILES ${tokenhub_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tokenhub/v20260322)
#install(FILES ${tokenhub_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tokenhub/v20260322/model)
install(DIRECTORY ${tokenhub_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tokenhub
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
