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

set(trp_public_header
  include/tencentcloud/trp/v20210515/TrpClient.h
  )

set(trp_public_header_model
  include/tencentcloud/trp/v20210515/model/CodeBatch.h
  include/tencentcloud/trp/v20210515/model/DescribeScanStatsRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeScanLogsResponse.h
  include/tencentcloud/trp/v20210515/model/Quota.h
  include/tencentcloud/trp/v20210515/model/PlanQRCode.h
  include/tencentcloud/trp/v20210515/model/ScanLog.h
  include/tencentcloud/trp/v20210515/model/DescribeProductsRequest.h
  include/tencentcloud/trp/v20210515/model/CreateCorporationOrderResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyProductResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyProductRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyCustomRuleRequest.h
  include/tencentcloud/trp/v20210515/model/CodePart.h
  include/tencentcloud/trp/v20210515/model/CodePack.h
  include/tencentcloud/trp/v20210515/model/DeleteCodeBatchRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeMerchantsRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceCodeRequest.h
  include/tencentcloud/trp/v20210515/model/DescribePlanQRCodesResponse.h
  include/tencentcloud/trp/v20210515/model/CreateMerchantRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCodeBatchByIdRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceCodeByIdResponse.h
  include/tencentcloud/trp/v20210515/model/CustomRule.h
  include/tencentcloud/trp/v20210515/model/DescribeProductsResponse.h
  include/tencentcloud/trp/v20210515/model/CreateTraceChainResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceDataListResponse.h
  include/tencentcloud/trp/v20210515/model/AttrItem.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceCodesRequest.h
  include/tencentcloud/trp/v20210515/model/CreateTraceCodesAsyncRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceDataResponse.h
  include/tencentcloud/trp/v20210515/model/AuthorizedTransferResponse.h
  include/tencentcloud/trp/v20210515/model/CreateCodeBatchResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCustomRulesRequest.h
  include/tencentcloud/trp/v20210515/model/CorpQuota.h
  include/tencentcloud/trp/v20210515/model/ScanStat.h
  include/tencentcloud/trp/v20210515/model/CreateCustomRuleRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCodePackStatusRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceDataRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCodeBatchsRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeAgentCorpsResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceDataRanksResponse.h
  include/tencentcloud/trp/v20210515/model/CreateTraceCodesRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCodeBatchByIdResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCorpQuotasResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodePackStatusResponse.h
  include/tencentcloud/trp/v20210515/model/Job.h
  include/tencentcloud/trp/v20210515/model/TraceData.h
  include/tencentcloud/trp/v20210515/model/EffectFeedbackResponse.h
  include/tencentcloud/trp/v20210515/model/PackSpec.h
  include/tencentcloud/trp/v20210515/model/ModifyCustomRuleResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyMerchantResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodesByPackResponse.h
  include/tencentcloud/trp/v20210515/model/CreateProductResponse.h
  include/tencentcloud/trp/v20210515/model/CreateTraceDataRequest.h
  include/tencentcloud/trp/v20210515/model/CreateCodePackRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCorpQuotasRequest.h
  include/tencentcloud/trp/v20210515/model/AuthorizedTransferRequest.h
  include/tencentcloud/trp/v20210515/model/ReportBatchCallbackStatusRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCodeBatchesResponse.h
  include/tencentcloud/trp/v20210515/model/Chain.h
  include/tencentcloud/trp/v20210515/model/CreateProductRequest.h
  include/tencentcloud/trp/v20210515/model/CreateCustomPackRequest.h
  include/tencentcloud/trp/v20210515/model/Ext.h
  include/tencentcloud/trp/v20210515/model/CreateCodeBatchRequest.h
  include/tencentcloud/trp/v20210515/model/TraceItem.h
  include/tencentcloud/trp/v20210515/model/DescribeCustomRuleByIdRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeAgentCorpsRequest.h
  include/tencentcloud/trp/v20210515/model/ReportBatchCallbackStatusResponse.h
  include/tencentcloud/trp/v20210515/model/ChainData.h
  include/tencentcloud/trp/v20210515/model/PhaseData.h
  include/tencentcloud/trp/v20210515/model/DescribeRawScanLogsRequest.h
  include/tencentcloud/trp/v20210515/model/DeleteProductRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceDataRanksRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyCustomRuleStatusResponse.h
  include/tencentcloud/trp/v20210515/model/CreateCustomPackResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyMerchantRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeTmpTokenResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodePackUrlRequest.h
  include/tencentcloud/trp/v20210515/model/DeleteProductResponse.h
  include/tencentcloud/trp/v20210515/model/CreateChainBatchRequest.h
  include/tencentcloud/trp/v20210515/model/OutputAuthorizedTransfer.h
  include/tencentcloud/trp/v20210515/model/DeleteTraceDataResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyCustomRuleStatusRequest.h
  include/tencentcloud/trp/v20210515/model/CreateCodePackResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeMerchantByIdResponse.h
  include/tencentcloud/trp/v20210515/model/EffectFeedbackRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceDataByIdResponse.h
  include/tencentcloud/trp/v20210515/model/CodeItem.h
  include/tencentcloud/trp/v20210515/model/CreateTraceDataResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCustomRuleByIdResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodeBatchsResponse.h
  include/tencentcloud/trp/v20210515/model/CreateCustomRuleResponse.h
  include/tencentcloud/trp/v20210515/model/DescribePlanQRCodeScanRecordsResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceCodeUnlinkRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeCodePacksResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodesByPackRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeJobFileUrlRequest.h
  include/tencentcloud/trp/v20210515/model/CreateTraceCodesAsyncResponse.h
  include/tencentcloud/trp/v20210515/model/DescribePlanQRCodeScanRecordsRequest.h
  include/tencentcloud/trp/v20210515/model/RawScanLog.h
  include/tencentcloud/trp/v20210515/model/DescribePlanQRCodesRequest.h
  include/tencentcloud/trp/v20210515/model/CreateChainBatchResponse.h
  include/tencentcloud/trp/v20210515/model/ModifyCodeBatchRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeProductByIdRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceCodesResponse.h
  include/tencentcloud/trp/v20210515/model/UsageQuota.h
  include/tencentcloud/trp/v20210515/model/CreateCorporationOrderRequest.h
  include/tencentcloud/trp/v20210515/model/CreateTraceCodesResponse.h
  include/tencentcloud/trp/v20210515/model/DeleteTraceDataRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeScanLogsRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceCodeUnlinkResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodeBatchesRequest.h
  include/tencentcloud/trp/v20210515/model/InputEncryptData.h
  include/tencentcloud/trp/v20210515/model/Merchant.h
  include/tencentcloud/trp/v20210515/model/Product.h
  include/tencentcloud/trp/v20210515/model/DescribeTmpTokenRequest.h
  include/tencentcloud/trp/v20210515/model/TraceCode.h
  include/tencentcloud/trp/v20210515/model/DescribeScanStatsResponse.h
  include/tencentcloud/trp/v20210515/model/CreateMerchantResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeMerchantsResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeRawScanLogsResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceDataListRequest.h
  include/tencentcloud/trp/v20210515/model/ChainValue.h
  include/tencentcloud/trp/v20210515/model/DeleteMerchantResponse.h
  include/tencentcloud/trp/v20210515/model/DeleteCodeBatchResponse.h
  include/tencentcloud/trp/v20210515/model/CreateTraceChainRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeMerchantByIdRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceDataByIdRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeProductByIdResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodePacksRequest.h
  include/tencentcloud/trp/v20210515/model/DescribeJobFileUrlResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCustomRulesResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeTraceCodeByIdRequest.h
  include/tencentcloud/trp/v20210515/model/ModifyCodeBatchResponse.h
  include/tencentcloud/trp/v20210515/model/PlanQRCodeRecord.h
  include/tencentcloud/trp/v20210515/model/ModifyTraceCodeResponse.h
  include/tencentcloud/trp/v20210515/model/DescribeCodePackUrlResponse.h
  include/tencentcloud/trp/v20210515/model/DeleteMerchantRequest.h
  )

set(trp_src
  src/v20210515/TrpClient.cpp
  src/v20210515/model/CodeBatch.cpp
  src/v20210515/model/DescribeScanStatsRequest.cpp
  src/v20210515/model/DescribeScanLogsResponse.cpp
  src/v20210515/model/Quota.cpp
  src/v20210515/model/PlanQRCode.cpp
  src/v20210515/model/ScanLog.cpp
  src/v20210515/model/DescribeProductsRequest.cpp
  src/v20210515/model/CreateCorporationOrderResponse.cpp
  src/v20210515/model/ModifyProductResponse.cpp
  src/v20210515/model/ModifyProductRequest.cpp
  src/v20210515/model/ModifyCustomRuleRequest.cpp
  src/v20210515/model/CodePart.cpp
  src/v20210515/model/CodePack.cpp
  src/v20210515/model/DeleteCodeBatchRequest.cpp
  src/v20210515/model/DescribeMerchantsRequest.cpp
  src/v20210515/model/ModifyTraceCodeRequest.cpp
  src/v20210515/model/DescribePlanQRCodesResponse.cpp
  src/v20210515/model/CreateMerchantRequest.cpp
  src/v20210515/model/DescribeCodeBatchByIdRequest.cpp
  src/v20210515/model/DescribeTraceCodeByIdResponse.cpp
  src/v20210515/model/CustomRule.cpp
  src/v20210515/model/DescribeProductsResponse.cpp
  src/v20210515/model/CreateTraceChainResponse.cpp
  src/v20210515/model/DescribeTraceDataListResponse.cpp
  src/v20210515/model/AttrItem.cpp
  src/v20210515/model/DescribeTraceCodesRequest.cpp
  src/v20210515/model/CreateTraceCodesAsyncRequest.cpp
  src/v20210515/model/ModifyTraceDataResponse.cpp
  src/v20210515/model/AuthorizedTransferResponse.cpp
  src/v20210515/model/CreateCodeBatchResponse.cpp
  src/v20210515/model/DescribeCustomRulesRequest.cpp
  src/v20210515/model/CorpQuota.cpp
  src/v20210515/model/ScanStat.cpp
  src/v20210515/model/CreateCustomRuleRequest.cpp
  src/v20210515/model/DescribeCodePackStatusRequest.cpp
  src/v20210515/model/ModifyTraceDataRequest.cpp
  src/v20210515/model/DescribeCodeBatchsRequest.cpp
  src/v20210515/model/DescribeAgentCorpsResponse.cpp
  src/v20210515/model/ModifyTraceDataRanksResponse.cpp
  src/v20210515/model/CreateTraceCodesRequest.cpp
  src/v20210515/model/DescribeCodeBatchByIdResponse.cpp
  src/v20210515/model/DescribeCorpQuotasResponse.cpp
  src/v20210515/model/DescribeCodePackStatusResponse.cpp
  src/v20210515/model/Job.cpp
  src/v20210515/model/TraceData.cpp
  src/v20210515/model/EffectFeedbackResponse.cpp
  src/v20210515/model/PackSpec.cpp
  src/v20210515/model/ModifyCustomRuleResponse.cpp
  src/v20210515/model/ModifyMerchantResponse.cpp
  src/v20210515/model/DescribeCodesByPackResponse.cpp
  src/v20210515/model/CreateProductResponse.cpp
  src/v20210515/model/CreateTraceDataRequest.cpp
  src/v20210515/model/CreateCodePackRequest.cpp
  src/v20210515/model/DescribeCorpQuotasRequest.cpp
  src/v20210515/model/AuthorizedTransferRequest.cpp
  src/v20210515/model/ReportBatchCallbackStatusRequest.cpp
  src/v20210515/model/DescribeCodeBatchesResponse.cpp
  src/v20210515/model/Chain.cpp
  src/v20210515/model/CreateProductRequest.cpp
  src/v20210515/model/CreateCustomPackRequest.cpp
  src/v20210515/model/Ext.cpp
  src/v20210515/model/CreateCodeBatchRequest.cpp
  src/v20210515/model/TraceItem.cpp
  src/v20210515/model/DescribeCustomRuleByIdRequest.cpp
  src/v20210515/model/DescribeAgentCorpsRequest.cpp
  src/v20210515/model/ReportBatchCallbackStatusResponse.cpp
  src/v20210515/model/ChainData.cpp
  src/v20210515/model/PhaseData.cpp
  src/v20210515/model/DescribeRawScanLogsRequest.cpp
  src/v20210515/model/DeleteProductRequest.cpp
  src/v20210515/model/ModifyTraceDataRanksRequest.cpp
  src/v20210515/model/ModifyCustomRuleStatusResponse.cpp
  src/v20210515/model/CreateCustomPackResponse.cpp
  src/v20210515/model/ModifyMerchantRequest.cpp
  src/v20210515/model/DescribeTmpTokenResponse.cpp
  src/v20210515/model/DescribeCodePackUrlRequest.cpp
  src/v20210515/model/DeleteProductResponse.cpp
  src/v20210515/model/CreateChainBatchRequest.cpp
  src/v20210515/model/OutputAuthorizedTransfer.cpp
  src/v20210515/model/DeleteTraceDataResponse.cpp
  src/v20210515/model/ModifyCustomRuleStatusRequest.cpp
  src/v20210515/model/CreateCodePackResponse.cpp
  src/v20210515/model/DescribeMerchantByIdResponse.cpp
  src/v20210515/model/EffectFeedbackRequest.cpp
  src/v20210515/model/DescribeTraceDataByIdResponse.cpp
  src/v20210515/model/CodeItem.cpp
  src/v20210515/model/CreateTraceDataResponse.cpp
  src/v20210515/model/DescribeCustomRuleByIdResponse.cpp
  src/v20210515/model/DescribeCodeBatchsResponse.cpp
  src/v20210515/model/CreateCustomRuleResponse.cpp
  src/v20210515/model/DescribePlanQRCodeScanRecordsResponse.cpp
  src/v20210515/model/ModifyTraceCodeUnlinkRequest.cpp
  src/v20210515/model/DescribeCodePacksResponse.cpp
  src/v20210515/model/DescribeCodesByPackRequest.cpp
  src/v20210515/model/DescribeJobFileUrlRequest.cpp
  src/v20210515/model/CreateTraceCodesAsyncResponse.cpp
  src/v20210515/model/DescribePlanQRCodeScanRecordsRequest.cpp
  src/v20210515/model/RawScanLog.cpp
  src/v20210515/model/DescribePlanQRCodesRequest.cpp
  src/v20210515/model/CreateChainBatchResponse.cpp
  src/v20210515/model/ModifyCodeBatchRequest.cpp
  src/v20210515/model/DescribeProductByIdRequest.cpp
  src/v20210515/model/DescribeTraceCodesResponse.cpp
  src/v20210515/model/UsageQuota.cpp
  src/v20210515/model/CreateCorporationOrderRequest.cpp
  src/v20210515/model/CreateTraceCodesResponse.cpp
  src/v20210515/model/DeleteTraceDataRequest.cpp
  src/v20210515/model/DescribeScanLogsRequest.cpp
  src/v20210515/model/ModifyTraceCodeUnlinkResponse.cpp
  src/v20210515/model/DescribeCodeBatchesRequest.cpp
  src/v20210515/model/InputEncryptData.cpp
  src/v20210515/model/Merchant.cpp
  src/v20210515/model/Product.cpp
  src/v20210515/model/DescribeTmpTokenRequest.cpp
  src/v20210515/model/TraceCode.cpp
  src/v20210515/model/DescribeScanStatsResponse.cpp
  src/v20210515/model/CreateMerchantResponse.cpp
  src/v20210515/model/DescribeMerchantsResponse.cpp
  src/v20210515/model/DescribeRawScanLogsResponse.cpp
  src/v20210515/model/DescribeTraceDataListRequest.cpp
  src/v20210515/model/ChainValue.cpp
  src/v20210515/model/DeleteMerchantResponse.cpp
  src/v20210515/model/DeleteCodeBatchResponse.cpp
  src/v20210515/model/CreateTraceChainRequest.cpp
  src/v20210515/model/DescribeMerchantByIdRequest.cpp
  src/v20210515/model/DescribeTraceDataByIdRequest.cpp
  src/v20210515/model/DescribeProductByIdResponse.cpp
  src/v20210515/model/DescribeCodePacksRequest.cpp
  src/v20210515/model/DescribeJobFileUrlResponse.cpp
  src/v20210515/model/DescribeCustomRulesResponse.cpp
  src/v20210515/model/DescribeTraceCodeByIdRequest.cpp
  src/v20210515/model/ModifyCodeBatchResponse.cpp
  src/v20210515/model/PlanQRCodeRecord.cpp
  src/v20210515/model/ModifyTraceCodeResponse.cpp
  src/v20210515/model/DescribeCodePackUrlResponse.cpp
  src/v20210515/model/DeleteMerchantRequest.cpp
  )

set(trp_include
    include/tencentcloud/trp
  )

add_library(trp ${LIB_TYPE}
  ${trp_public_header}
  ${trp_public_header_model}
  ${trp_src})

set_target_properties(trp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trp
  )

target_include_directories(trp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trp
  core)

#install(FILES ${trp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trp/v20210515)
#install(FILES ${trp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trp/v20210515/model)
install(DIRECTORY ${trp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
