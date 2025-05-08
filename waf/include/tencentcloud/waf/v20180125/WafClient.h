/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
#define TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/waf/v20180125/model/AddAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/AddAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/AddAntiInfoLeakRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/AddAntiInfoLeakRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/AddAreaBanAreasRequest.h>
#include <tencentcloud/waf/v20180125/model/AddAreaBanAreasResponse.h>
#include <tencentcloud/waf/v20180125/model/AddAttackWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddAttackWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddDomainWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddDomainWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/BatchOperateUserSignatureRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/BatchOperateUserSignatureRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateAccessExportRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateAccessExportResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateAreaBanRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateAreaBanRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateDealsRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateDealsResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateHostRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateHostResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/CreatePostCKafkaFlowRequest.h>
#include <tencentcloud/waf/v20180125/model/CreatePostCKafkaFlowResponse.h>
#include <tencentcloud/waf/v20180125/model/CreatePostCLSFlowRequest.h>
#include <tencentcloud/waf/v20180125/model/CreatePostCLSFlowResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAccessExportRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAccessExportResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiInfoLeakRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiInfoLeakRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteBotSceneUCBRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteBotSceneUCBRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteCCRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteCCRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteDomainWhiteRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteDomainWhiteRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteHostRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteHostResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlV2Request.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlV2Response.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteSpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteSpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessExportsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessExportsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessFastAnalysisResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessHistogramRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessHistogramResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessIndexRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAccessIndexResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiFakeRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiFakeRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakageRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakageRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeApiDetailRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeApiDetailResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeApiListVersionTwoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeApiListVersionTwoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAreaBanAreasRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAreaBanAreasResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAreaBanRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAreaBanRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAreaBanSupportAreasRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAreaBanSupportAreasResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackOverviewRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackOverviewResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackTypeRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackTypeResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAutoDenyIPRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAutoDenyIPResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeBatchIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeBatchIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeBotSceneListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeBotSceneListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeBotSceneOverviewRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeBotSceneOverviewResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeBotSceneUCBRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeBotSceneUCBRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCAutoStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCAutoStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCertificateVerifyResultRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCertificateVerifyResultResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCiphersDetailRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCiphersDetailResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRuleListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRuleListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainCountInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainCountInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsClbRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsClbResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainVerifyResultRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainVerifyResultResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeFindDomainListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeFindDomainListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHistogramRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHistogramResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeInstancesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeInstancesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpHitItemsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpHitItemsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeModuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeModuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeObjectsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeObjectsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePeakPointsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePeakPointsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePeakValueRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePeakValueResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePolicyStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePolicyStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePortsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePortsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePostCKafkaFlowsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePostCKafkaFlowsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePostCLSFlowsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePostCLSFlowsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeProtectionModesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeProtectionModesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeRuleLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeRuleLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeScanIpRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeScanIpResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeSessionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeSpartaProtectionInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeSpartaProtectionInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeTlsVersionRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeTlsVersionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeTopAttackDomainRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeTopAttackDomainResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserCdcClbWafRegionsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserCdcClbWafRegionsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserDomainInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserDomainInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserLevelRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserLevelResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserSignatureClassRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserSignatureClassResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserSignatureRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserSignatureRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserSignatureRuleV2Request.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserSignatureRuleV2Response.h>
#include <tencentcloud/waf/v20180125/model/DescribeVipInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeVipInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafThreatenIntelligenceRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWafThreatenIntelligenceResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWebshellStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWebshellStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DestroyPostCKafkaFlowRequest.h>
#include <tencentcloud/waf/v20180125/model/DestroyPostCKafkaFlowResponse.h>
#include <tencentcloud/waf/v20180125/model/DestroyPostCLSFlowRequest.h>
#include <tencentcloud/waf/v20180125/model/DestroyPostCLSFlowResponse.h>
#include <tencentcloud/waf/v20180125/model/FreshAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/FreshAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/GenerateDealsAndPayNewRequest.h>
#include <tencentcloud/waf/v20180125/model/GenerateDealsAndPayNewResponse.h>
#include <tencentcloud/waf/v20180125/model/GetAttackDownloadRecordsRequest.h>
#include <tencentcloud/waf/v20180125/model/GetAttackDownloadRecordsResponse.h>
#include <tencentcloud/waf/v20180125/model/GetAttackHistogramRequest.h>
#include <tencentcloud/waf/v20180125/model/GetAttackHistogramResponse.h>
#include <tencentcloud/waf/v20180125/model/GetAttackTotalCountRequest.h>
#include <tencentcloud/waf/v20180125/model/GetAttackTotalCountResponse.h>
#include <tencentcloud/waf/v20180125/model/GetInstanceQpsLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/GetInstanceQpsLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/ImportIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/ImportIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyApiAnalyzeStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyApiAnalyzeStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyApiSecEventChangeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyApiSecEventChangeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAreaBanAreasRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAreaBanAreasResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAreaBanRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAreaBanRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAreaBanStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAreaBanStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAttackWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAttackWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotSceneStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotSceneStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotSceneUCBRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotSceneUCBRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainIpv6StatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainIpv6StatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainPostActionRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainPostActionResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainsCLSStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainsCLSStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyGenerateDealsRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyGenerateDealsResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostFlowModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostFlowModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceAttackLogPostRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceAttackLogPostResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceElasticModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceElasticModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceNameResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceQpsLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceQpsLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceRenewFlagRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceRenewFlagResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyModuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyModuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyObjectRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyObjectResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyProtectionStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyProtectionStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserLevelRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserLevelResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureClassRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureClassResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleV2Request.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleV2Response.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafThreatenIntelligenceRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWafThreatenIntelligenceResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyWebshellStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWebshellStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/PostAttackDownloadTaskRequest.h>
#include <tencentcloud/waf/v20180125/model/PostAttackDownloadTaskResponse.h>
#include <tencentcloud/waf/v20180125/model/RefreshAccessCheckResultRequest.h>
#include <tencentcloud/waf/v20180125/model/RefreshAccessCheckResultResponse.h>
#include <tencentcloud/waf/v20180125/model/SearchAccessLogRequest.h>
#include <tencentcloud/waf/v20180125/model/SearchAccessLogResponse.h>
#include <tencentcloud/waf/v20180125/model/SearchAttackLogRequest.h>
#include <tencentcloud/waf/v20180125/model/SearchAttackLogResponse.h>
#include <tencentcloud/waf/v20180125/model/SwitchDomainRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/SwitchDomainRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/SwitchElasticModeRequest.h>
#include <tencentcloud/waf/v20180125/model/SwitchElasticModeResponse.h>
#include <tencentcloud/waf/v20180125/model/UpdateProtectionModesRequest.h>
#include <tencentcloud/waf/v20180125/model/UpdateProtectionModesResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertCCAutoStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertCCAutoStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertCCRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertCCRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertSessionResponse.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            class WafClient : public AbstractClient
            {
            public:
                WafClient(const Credential &credential, const std::string &region);
                WafClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAntiFakeUrlResponse> AddAntiFakeUrlOutcome;
                typedef std::future<AddAntiFakeUrlOutcome> AddAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddAntiFakeUrlRequest&, AddAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAntiInfoLeakRulesResponse> AddAntiInfoLeakRulesOutcome;
                typedef std::future<AddAntiInfoLeakRulesOutcome> AddAntiInfoLeakRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddAntiInfoLeakRulesRequest&, AddAntiInfoLeakRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAntiInfoLeakRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAreaBanAreasResponse> AddAreaBanAreasOutcome;
                typedef std::future<AddAreaBanAreasOutcome> AddAreaBanAreasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddAreaBanAreasRequest&, AddAreaBanAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAreaBanAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAttackWhiteRuleResponse> AddAttackWhiteRuleOutcome;
                typedef std::future<AddAttackWhiteRuleOutcome> AddAttackWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddAttackWhiteRuleRequest&, AddAttackWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAttackWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCustomRuleResponse> AddCustomRuleOutcome;
                typedef std::future<AddCustomRuleOutcome> AddCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddCustomRuleRequest&, AddCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCustomWhiteRuleResponse> AddCustomWhiteRuleOutcome;
                typedef std::future<AddCustomWhiteRuleOutcome> AddCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddCustomWhiteRuleRequest&, AddCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDomainWhiteRuleResponse> AddDomainWhiteRuleOutcome;
                typedef std::future<AddDomainWhiteRuleOutcome> AddDomainWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddDomainWhiteRuleRequest&, AddDomainWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddSpartaProtectionResponse> AddSpartaProtectionOutcome;
                typedef std::future<AddSpartaProtectionOutcome> AddSpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddSpartaProtectionRequest&, AddSpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchOperateUserSignatureRulesResponse> BatchOperateUserSignatureRulesOutcome;
                typedef std::future<BatchOperateUserSignatureRulesOutcome> BatchOperateUserSignatureRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::BatchOperateUserSignatureRulesRequest&, BatchOperateUserSignatureRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchOperateUserSignatureRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessExportResponse> CreateAccessExportOutcome;
                typedef std::future<CreateAccessExportOutcome> CreateAccessExportOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateAccessExportRequest&, CreateAccessExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessExportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAreaBanRuleResponse> CreateAreaBanRuleOutcome;
                typedef std::future<CreateAreaBanRuleOutcome> CreateAreaBanRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateAreaBanRuleRequest&, CreateAreaBanRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAreaBanRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDealsResponse> CreateDealsOutcome;
                typedef std::future<CreateDealsOutcome> CreateDealsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateDealsRequest&, CreateDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostResponse> CreateHostOutcome;
                typedef std::future<CreateHostOutcome> CreateHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateHostRequest&, CreateHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIpAccessControlResponse> CreateIpAccessControlOutcome;
                typedef std::future<CreateIpAccessControlOutcome> CreateIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateIpAccessControlRequest&, CreateIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePostCKafkaFlowResponse> CreatePostCKafkaFlowOutcome;
                typedef std::future<CreatePostCKafkaFlowOutcome> CreatePostCKafkaFlowOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreatePostCKafkaFlowRequest&, CreatePostCKafkaFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostCKafkaFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePostCLSFlowResponse> CreatePostCLSFlowOutcome;
                typedef std::future<CreatePostCLSFlowOutcome> CreatePostCLSFlowOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreatePostCLSFlowRequest&, CreatePostCLSFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostCLSFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessExportResponse> DeleteAccessExportOutcome;
                typedef std::future<DeleteAccessExportOutcome> DeleteAccessExportOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAccessExportRequest&, DeleteAccessExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAntiFakeUrlResponse> DeleteAntiFakeUrlOutcome;
                typedef std::future<DeleteAntiFakeUrlOutcome> DeleteAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAntiFakeUrlRequest&, DeleteAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAntiInfoLeakRuleResponse> DeleteAntiInfoLeakRuleOutcome;
                typedef std::future<DeleteAntiInfoLeakRuleOutcome> DeleteAntiInfoLeakRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAntiInfoLeakRuleRequest&, DeleteAntiInfoLeakRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAntiInfoLeakRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttackDownloadRecordResponse> DeleteAttackDownloadRecordOutcome;
                typedef std::future<DeleteAttackDownloadRecordOutcome> DeleteAttackDownloadRecordOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAttackDownloadRecordRequest&, DeleteAttackDownloadRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttackDownloadRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttackWhiteRuleResponse> DeleteAttackWhiteRuleOutcome;
                typedef std::future<DeleteAttackWhiteRuleOutcome> DeleteAttackWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAttackWhiteRuleRequest&, DeleteAttackWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttackWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBotSceneUCBRuleResponse> DeleteBotSceneUCBRuleOutcome;
                typedef std::future<DeleteBotSceneUCBRuleOutcome> DeleteBotSceneUCBRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteBotSceneUCBRuleRequest&, DeleteBotSceneUCBRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBotSceneUCBRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCRuleResponse> DeleteCCRuleOutcome;
                typedef std::future<DeleteCCRuleOutcome> DeleteCCRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteCCRuleRequest&, DeleteCCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomRuleResponse> DeleteCustomRuleOutcome;
                typedef std::future<DeleteCustomRuleOutcome> DeleteCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteCustomRuleRequest&, DeleteCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomWhiteRuleResponse> DeleteCustomWhiteRuleOutcome;
                typedef std::future<DeleteCustomWhiteRuleOutcome> DeleteCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteCustomWhiteRuleRequest&, DeleteCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainWhiteRulesResponse> DeleteDomainWhiteRulesOutcome;
                typedef std::future<DeleteDomainWhiteRulesOutcome> DeleteDomainWhiteRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteDomainWhiteRulesRequest&, DeleteDomainWhiteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainWhiteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHostResponse> DeleteHostOutcome;
                typedef std::future<DeleteHostOutcome> DeleteHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteHostRequest&, DeleteHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIpAccessControlResponse> DeleteIpAccessControlOutcome;
                typedef std::future<DeleteIpAccessControlOutcome> DeleteIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteIpAccessControlRequest&, DeleteIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIpAccessControlV2Response> DeleteIpAccessControlV2Outcome;
                typedef std::future<DeleteIpAccessControlV2Outcome> DeleteIpAccessControlV2OutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteIpAccessControlV2Request&, DeleteIpAccessControlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpAccessControlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSessionResponse> DeleteSessionOutcome;
                typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteSessionRequest&, DeleteSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSpartaProtectionResponse> DeleteSpartaProtectionOutcome;
                typedef std::future<DeleteSpartaProtectionOutcome> DeleteSpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteSpartaProtectionRequest&, DeleteSpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessExportsResponse> DescribeAccessExportsOutcome;
                typedef std::future<DescribeAccessExportsOutcome> DescribeAccessExportsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessExportsRequest&, DescribeAccessExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessFastAnalysisResponse> DescribeAccessFastAnalysisOutcome;
                typedef std::future<DescribeAccessFastAnalysisOutcome> DescribeAccessFastAnalysisOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessFastAnalysisRequest&, DescribeAccessFastAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessFastAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessHistogramResponse> DescribeAccessHistogramOutcome;
                typedef std::future<DescribeAccessHistogramOutcome> DescribeAccessHistogramOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessHistogramRequest&, DescribeAccessHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessIndexResponse> DescribeAccessIndexOutcome;
                typedef std::future<DescribeAccessIndexOutcome> DescribeAccessIndexOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAccessIndexRequest&, DescribeAccessIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAntiFakeRulesResponse> DescribeAntiFakeRulesOutcome;
                typedef std::future<DescribeAntiFakeRulesOutcome> DescribeAntiFakeRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAntiFakeRulesRequest&, DescribeAntiFakeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiFakeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAntiInfoLeakageRulesResponse> DescribeAntiInfoLeakageRulesOutcome;
                typedef std::future<DescribeAntiInfoLeakageRulesOutcome> DescribeAntiInfoLeakageRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAntiInfoLeakageRulesRequest&, DescribeAntiInfoLeakageRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiInfoLeakageRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiDetailResponse> DescribeApiDetailOutcome;
                typedef std::future<DescribeApiDetailOutcome> DescribeApiDetailOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeApiDetailRequest&, DescribeApiDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiListVersionTwoResponse> DescribeApiListVersionTwoOutcome;
                typedef std::future<DescribeApiListVersionTwoOutcome> DescribeApiListVersionTwoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeApiListVersionTwoRequest&, DescribeApiListVersionTwoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiListVersionTwoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAreaBanAreasResponse> DescribeAreaBanAreasOutcome;
                typedef std::future<DescribeAreaBanAreasOutcome> DescribeAreaBanAreasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAreaBanAreasRequest&, DescribeAreaBanAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAreaBanAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAreaBanRuleResponse> DescribeAreaBanRuleOutcome;
                typedef std::future<DescribeAreaBanRuleOutcome> DescribeAreaBanRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAreaBanRuleRequest&, DescribeAreaBanRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAreaBanRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAreaBanSupportAreasResponse> DescribeAreaBanSupportAreasOutcome;
                typedef std::future<DescribeAreaBanSupportAreasOutcome> DescribeAreaBanSupportAreasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAreaBanSupportAreasRequest&, DescribeAreaBanSupportAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAreaBanSupportAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackOverviewResponse> DescribeAttackOverviewOutcome;
                typedef std::future<DescribeAttackOverviewOutcome> DescribeAttackOverviewOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAttackOverviewRequest&, DescribeAttackOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackTypeResponse> DescribeAttackTypeOutcome;
                typedef std::future<DescribeAttackTypeOutcome> DescribeAttackTypeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAttackTypeRequest&, DescribeAttackTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackWhiteRuleResponse> DescribeAttackWhiteRuleOutcome;
                typedef std::future<DescribeAttackWhiteRuleOutcome> DescribeAttackWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAttackWhiteRuleRequest&, DescribeAttackWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoDenyIPResponse> DescribeAutoDenyIPOutcome;
                typedef std::future<DescribeAutoDenyIPOutcome> DescribeAutoDenyIPOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAutoDenyIPRequest&, DescribeAutoDenyIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDenyIPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchIpAccessControlResponse> DescribeBatchIpAccessControlOutcome;
                typedef std::future<DescribeBatchIpAccessControlOutcome> DescribeBatchIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeBatchIpAccessControlRequest&, DescribeBatchIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotSceneListResponse> DescribeBotSceneListOutcome;
                typedef std::future<DescribeBotSceneListOutcome> DescribeBotSceneListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeBotSceneListRequest&, DescribeBotSceneListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotSceneListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotSceneOverviewResponse> DescribeBotSceneOverviewOutcome;
                typedef std::future<DescribeBotSceneOverviewOutcome> DescribeBotSceneOverviewOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeBotSceneOverviewRequest&, DescribeBotSceneOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotSceneOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotSceneUCBRuleResponse> DescribeBotSceneUCBRuleOutcome;
                typedef std::future<DescribeBotSceneUCBRuleOutcome> DescribeBotSceneUCBRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeBotSceneUCBRuleRequest&, DescribeBotSceneUCBRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotSceneUCBRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCAutoStatusResponse> DescribeCCAutoStatusOutcome;
                typedef std::future<DescribeCCAutoStatusOutcome> DescribeCCAutoStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCCAutoStatusRequest&, DescribeCCAutoStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCAutoStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCRuleResponse> DescribeCCRuleOutcome;
                typedef std::future<DescribeCCRuleOutcome> DescribeCCRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCCRuleRequest&, DescribeCCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCRuleListResponse> DescribeCCRuleListOutcome;
                typedef std::future<DescribeCCRuleListOutcome> DescribeCCRuleListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCCRuleListRequest&, DescribeCCRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateVerifyResultResponse> DescribeCertificateVerifyResultOutcome;
                typedef std::future<DescribeCertificateVerifyResultOutcome> DescribeCertificateVerifyResultOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCertificateVerifyResultRequest&, DescribeCertificateVerifyResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateVerifyResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCiphersDetailResponse> DescribeCiphersDetailOutcome;
                typedef std::future<DescribeCiphersDetailOutcome> DescribeCiphersDetailOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCiphersDetailRequest&, DescribeCiphersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCiphersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomRuleListResponse> DescribeCustomRuleListOutcome;
                typedef std::future<DescribeCustomRuleListOutcome> DescribeCustomRuleListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCustomRuleListRequest&, DescribeCustomRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomWhiteRuleResponse> DescribeCustomWhiteRuleOutcome;
                typedef std::future<DescribeCustomWhiteRuleOutcome> DescribeCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCustomWhiteRuleRequest&, DescribeCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainCountInfoResponse> DescribeDomainCountInfoOutcome;
                typedef std::future<DescribeDomainCountInfoOutcome> DescribeDomainCountInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainCountInfoRequest&, DescribeDomainCountInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCountInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainDetailsClbResponse> DescribeDomainDetailsClbOutcome;
                typedef std::future<DescribeDomainDetailsClbOutcome> DescribeDomainDetailsClbOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainDetailsClbRequest&, DescribeDomainDetailsClbOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailsClbAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainDetailsSaasResponse> DescribeDomainDetailsSaasOutcome;
                typedef std::future<DescribeDomainDetailsSaasOutcome> DescribeDomainDetailsSaasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainDetailsSaasRequest&, DescribeDomainDetailsSaasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailsSaasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainRulesResponse> DescribeDomainRulesOutcome;
                typedef std::future<DescribeDomainRulesOutcome> DescribeDomainRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainRulesRequest&, DescribeDomainRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainVerifyResultResponse> DescribeDomainVerifyResultOutcome;
                typedef std::future<DescribeDomainVerifyResultOutcome> DescribeDomainVerifyResultOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainVerifyResultRequest&, DescribeDomainVerifyResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainVerifyResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainWhiteRulesResponse> DescribeDomainWhiteRulesOutcome;
                typedef std::future<DescribeDomainWhiteRulesOutcome> DescribeDomainWhiteRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainWhiteRulesRequest&, DescribeDomainWhiteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainWhiteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFindDomainListResponse> DescribeFindDomainListOutcome;
                typedef std::future<DescribeFindDomainListOutcome> DescribeFindDomainListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeFindDomainListRequest&, DescribeFindDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFindDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowTrendResponse> DescribeFlowTrendOutcome;
                typedef std::future<DescribeFlowTrendOutcome> DescribeFlowTrendOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeFlowTrendRequest&, DescribeFlowTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistogramResponse> DescribeHistogramOutcome;
                typedef std::future<DescribeHistogramOutcome> DescribeHistogramOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHistogramRequest&, DescribeHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostResponse> DescribeHostOutcome;
                typedef std::future<DescribeHostOutcome> DescribeHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHostRequest&, DescribeHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLimitResponse> DescribeHostLimitOutcome;
                typedef std::future<DescribeHostLimitOutcome> DescribeHostLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHostLimitRequest&, DescribeHostLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsResponse> DescribeHostsOutcome;
                typedef std::future<DescribeHostsOutcome> DescribeHostsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHostsRequest&, DescribeHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpAccessControlResponse> DescribeIpAccessControlOutcome;
                typedef std::future<DescribeIpAccessControlOutcome> DescribeIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeIpAccessControlRequest&, DescribeIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpHitItemsResponse> DescribeIpHitItemsOutcome;
                typedef std::future<DescribeIpHitItemsOutcome> DescribeIpHitItemsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeIpHitItemsRequest&, DescribeIpHitItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpHitItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModuleStatusResponse> DescribeModuleStatusOutcome;
                typedef std::future<DescribeModuleStatusOutcome> DescribeModuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeModuleStatusRequest&, DescribeModuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeObjectsResponse> DescribeObjectsOutcome;
                typedef std::future<DescribeObjectsOutcome> DescribeObjectsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeObjectsRequest&, DescribeObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePeakPointsResponse> DescribePeakPointsOutcome;
                typedef std::future<DescribePeakPointsOutcome> DescribePeakPointsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePeakPointsRequest&, DescribePeakPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakPointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePeakValueResponse> DescribePeakValueOutcome;
                typedef std::future<DescribePeakValueOutcome> DescribePeakValueOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePeakValueRequest&, DescribePeakValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakValueAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyStatusResponse> DescribePolicyStatusOutcome;
                typedef std::future<DescribePolicyStatusOutcome> DescribePolicyStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePolicyStatusRequest&, DescribePolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortsResponse> DescribePortsOutcome;
                typedef std::future<DescribePortsOutcome> DescribePortsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePortsRequest&, DescribePortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostCKafkaFlowsResponse> DescribePostCKafkaFlowsOutcome;
                typedef std::future<DescribePostCKafkaFlowsOutcome> DescribePostCKafkaFlowsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePostCKafkaFlowsRequest&, DescribePostCKafkaFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostCKafkaFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostCLSFlowsResponse> DescribePostCLSFlowsOutcome;
                typedef std::future<DescribePostCLSFlowsOutcome> DescribePostCLSFlowsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePostCLSFlowsRequest&, DescribePostCLSFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostCLSFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectionModesResponse> DescribeProtectionModesOutcome;
                typedef std::future<DescribeProtectionModesOutcome> DescribeProtectionModesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeProtectionModesRequest&, DescribeProtectionModesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionModesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleLimitResponse> DescribeRuleLimitOutcome;
                typedef std::future<DescribeRuleLimitOutcome> DescribeRuleLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeRuleLimitRequest&, DescribeRuleLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanIpResponse> DescribeScanIpOutcome;
                typedef std::future<DescribeScanIpOutcome> DescribeScanIpOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeScanIpRequest&, DescribeScanIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionResponse> DescribeSessionOutcome;
                typedef std::future<DescribeSessionOutcome> DescribeSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeSessionRequest&, DescribeSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpartaProtectionInfoResponse> DescribeSpartaProtectionInfoOutcome;
                typedef std::future<DescribeSpartaProtectionInfoOutcome> DescribeSpartaProtectionInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeSpartaProtectionInfoRequest&, DescribeSpartaProtectionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpartaProtectionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTlsVersionResponse> DescribeTlsVersionOutcome;
                typedef std::future<DescribeTlsVersionOutcome> DescribeTlsVersionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeTlsVersionRequest&, DescribeTlsVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTlsVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopAttackDomainResponse> DescribeTopAttackDomainOutcome;
                typedef std::future<DescribeTopAttackDomainOutcome> DescribeTopAttackDomainOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeTopAttackDomainRequest&, DescribeTopAttackDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopAttackDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCdcClbWafRegionsResponse> DescribeUserCdcClbWafRegionsOutcome;
                typedef std::future<DescribeUserCdcClbWafRegionsOutcome> DescribeUserCdcClbWafRegionsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserCdcClbWafRegionsRequest&, DescribeUserCdcClbWafRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCdcClbWafRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserClbWafRegionsResponse> DescribeUserClbWafRegionsOutcome;
                typedef std::future<DescribeUserClbWafRegionsOutcome> DescribeUserClbWafRegionsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserClbWafRegionsRequest&, DescribeUserClbWafRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClbWafRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDomainInfoResponse> DescribeUserDomainInfoOutcome;
                typedef std::future<DescribeUserDomainInfoOutcome> DescribeUserDomainInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserDomainInfoRequest&, DescribeUserDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserLevelResponse> DescribeUserLevelOutcome;
                typedef std::future<DescribeUserLevelOutcome> DescribeUserLevelOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserLevelRequest&, DescribeUserLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSignatureClassResponse> DescribeUserSignatureClassOutcome;
                typedef std::future<DescribeUserSignatureClassOutcome> DescribeUserSignatureClassOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserSignatureClassRequest&, DescribeUserSignatureClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSignatureClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSignatureRuleResponse> DescribeUserSignatureRuleOutcome;
                typedef std::future<DescribeUserSignatureRuleOutcome> DescribeUserSignatureRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserSignatureRuleRequest&, DescribeUserSignatureRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSignatureRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSignatureRuleV2Response> DescribeUserSignatureRuleV2Outcome;
                typedef std::future<DescribeUserSignatureRuleV2Outcome> DescribeUserSignatureRuleV2OutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserSignatureRuleV2Request&, DescribeUserSignatureRuleV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSignatureRuleV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVipInfoResponse> DescribeVipInfoOutcome;
                typedef std::future<DescribeVipInfoOutcome> DescribeVipInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeVipInfoRequest&, DescribeVipInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVipInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafAutoDenyRulesResponse> DescribeWafAutoDenyRulesOutcome;
                typedef std::future<DescribeWafAutoDenyRulesOutcome> DescribeWafAutoDenyRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWafAutoDenyRulesRequest&, DescribeWafAutoDenyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafAutoDenyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafAutoDenyStatusResponse> DescribeWafAutoDenyStatusOutcome;
                typedef std::future<DescribeWafAutoDenyStatusOutcome> DescribeWafAutoDenyStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWafAutoDenyStatusRequest&, DescribeWafAutoDenyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafAutoDenyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafThreatenIntelligenceResponse> DescribeWafThreatenIntelligenceOutcome;
                typedef std::future<DescribeWafThreatenIntelligenceOutcome> DescribeWafThreatenIntelligenceOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWafThreatenIntelligenceRequest&, DescribeWafThreatenIntelligenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafThreatenIntelligenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebshellStatusResponse> DescribeWebshellStatusOutcome;
                typedef std::future<DescribeWebshellStatusOutcome> DescribeWebshellStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWebshellStatusRequest&, DescribeWebshellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebshellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPostCKafkaFlowResponse> DestroyPostCKafkaFlowOutcome;
                typedef std::future<DestroyPostCKafkaFlowOutcome> DestroyPostCKafkaFlowOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DestroyPostCKafkaFlowRequest&, DestroyPostCKafkaFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPostCKafkaFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPostCLSFlowResponse> DestroyPostCLSFlowOutcome;
                typedef std::future<DestroyPostCLSFlowOutcome> DestroyPostCLSFlowOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DestroyPostCLSFlowRequest&, DestroyPostCLSFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPostCLSFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::FreshAntiFakeUrlResponse> FreshAntiFakeUrlOutcome;
                typedef std::future<FreshAntiFakeUrlOutcome> FreshAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::FreshAntiFakeUrlRequest&, FreshAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreshAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateDealsAndPayNewResponse> GenerateDealsAndPayNewOutcome;
                typedef std::future<GenerateDealsAndPayNewOutcome> GenerateDealsAndPayNewOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GenerateDealsAndPayNewRequest&, GenerateDealsAndPayNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDealsAndPayNewAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttackDownloadRecordsResponse> GetAttackDownloadRecordsOutcome;
                typedef std::future<GetAttackDownloadRecordsOutcome> GetAttackDownloadRecordsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetAttackDownloadRecordsRequest&, GetAttackDownloadRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttackDownloadRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttackHistogramResponse> GetAttackHistogramOutcome;
                typedef std::future<GetAttackHistogramOutcome> GetAttackHistogramOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetAttackHistogramRequest&, GetAttackHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttackHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttackTotalCountResponse> GetAttackTotalCountOutcome;
                typedef std::future<GetAttackTotalCountOutcome> GetAttackTotalCountOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetAttackTotalCountRequest&, GetAttackTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttackTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetInstanceQpsLimitResponse> GetInstanceQpsLimitOutcome;
                typedef std::future<GetInstanceQpsLimitOutcome> GetInstanceQpsLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetInstanceQpsLimitRequest&, GetInstanceQpsLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceQpsLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportIpAccessControlResponse> ImportIpAccessControlOutcome;
                typedef std::future<ImportIpAccessControlOutcome> ImportIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ImportIpAccessControlRequest&, ImportIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiFakeUrlResponse> ModifyAntiFakeUrlOutcome;
                typedef std::future<ModifyAntiFakeUrlOutcome> ModifyAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiFakeUrlRequest&, ModifyAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiFakeUrlStatusResponse> ModifyAntiFakeUrlStatusOutcome;
                typedef std::future<ModifyAntiFakeUrlStatusOutcome> ModifyAntiFakeUrlStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiFakeUrlStatusRequest&, ModifyAntiFakeUrlStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiFakeUrlStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiInfoLeakRuleStatusResponse> ModifyAntiInfoLeakRuleStatusOutcome;
                typedef std::future<ModifyAntiInfoLeakRuleStatusOutcome> ModifyAntiInfoLeakRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiInfoLeakRuleStatusRequest&, ModifyAntiInfoLeakRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiInfoLeakRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiInfoLeakRulesResponse> ModifyAntiInfoLeakRulesOutcome;
                typedef std::future<ModifyAntiInfoLeakRulesOutcome> ModifyAntiInfoLeakRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiInfoLeakRulesRequest&, ModifyAntiInfoLeakRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiInfoLeakRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiAnalyzeStatusResponse> ModifyApiAnalyzeStatusOutcome;
                typedef std::future<ModifyApiAnalyzeStatusOutcome> ModifyApiAnalyzeStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyApiAnalyzeStatusRequest&, ModifyApiAnalyzeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiAnalyzeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiSecEventChangeResponse> ModifyApiSecEventChangeOutcome;
                typedef std::future<ModifyApiSecEventChangeOutcome> ModifyApiSecEventChangeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyApiSecEventChangeRequest&, ModifyApiSecEventChangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiSecEventChangeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAreaBanAreasResponse> ModifyAreaBanAreasOutcome;
                typedef std::future<ModifyAreaBanAreasOutcome> ModifyAreaBanAreasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAreaBanAreasRequest&, ModifyAreaBanAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAreaBanAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAreaBanRuleResponse> ModifyAreaBanRuleOutcome;
                typedef std::future<ModifyAreaBanRuleOutcome> ModifyAreaBanRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAreaBanRuleRequest&, ModifyAreaBanRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAreaBanRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAreaBanStatusResponse> ModifyAreaBanStatusOutcome;
                typedef std::future<ModifyAreaBanStatusOutcome> ModifyAreaBanStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAreaBanStatusRequest&, ModifyAreaBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAreaBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAttackWhiteRuleResponse> ModifyAttackWhiteRuleOutcome;
                typedef std::future<ModifyAttackWhiteRuleOutcome> ModifyAttackWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAttackWhiteRuleRequest&, ModifyAttackWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAttackWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBotSceneStatusResponse> ModifyBotSceneStatusOutcome;
                typedef std::future<ModifyBotSceneStatusOutcome> ModifyBotSceneStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyBotSceneStatusRequest&, ModifyBotSceneStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBotSceneStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBotSceneUCBRuleResponse> ModifyBotSceneUCBRuleOutcome;
                typedef std::future<ModifyBotSceneUCBRuleOutcome> ModifyBotSceneUCBRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyBotSceneUCBRuleRequest&, ModifyBotSceneUCBRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBotSceneUCBRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBotStatusResponse> ModifyBotStatusOutcome;
                typedef std::future<ModifyBotStatusOutcome> ModifyBotStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyBotStatusRequest&, ModifyBotStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBotStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomRuleResponse> ModifyCustomRuleOutcome;
                typedef std::future<ModifyCustomRuleOutcome> ModifyCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomRuleRequest&, ModifyCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomRuleStatusResponse> ModifyCustomRuleStatusOutcome;
                typedef std::future<ModifyCustomRuleStatusOutcome> ModifyCustomRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomRuleStatusRequest&, ModifyCustomRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomWhiteRuleResponse> ModifyCustomWhiteRuleOutcome;
                typedef std::future<ModifyCustomWhiteRuleOutcome> ModifyCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomWhiteRuleRequest&, ModifyCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomWhiteRuleStatusResponse> ModifyCustomWhiteRuleStatusOutcome;
                typedef std::future<ModifyCustomWhiteRuleStatusOutcome> ModifyCustomWhiteRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomWhiteRuleStatusRequest&, ModifyCustomWhiteRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomWhiteRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainIpv6StatusResponse> ModifyDomainIpv6StatusOutcome;
                typedef std::future<ModifyDomainIpv6StatusOutcome> ModifyDomainIpv6StatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainIpv6StatusRequest&, ModifyDomainIpv6StatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainIpv6StatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainPostActionResponse> ModifyDomainPostActionOutcome;
                typedef std::future<ModifyDomainPostActionOutcome> ModifyDomainPostActionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainPostActionRequest&, ModifyDomainPostActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainPostActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainWhiteRuleResponse> ModifyDomainWhiteRuleOutcome;
                typedef std::future<ModifyDomainWhiteRuleOutcome> ModifyDomainWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainWhiteRuleRequest&, ModifyDomainWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainsCLSStatusResponse> ModifyDomainsCLSStatusOutcome;
                typedef std::future<ModifyDomainsCLSStatusOutcome> ModifyDomainsCLSStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainsCLSStatusRequest&, ModifyDomainsCLSStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainsCLSStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGenerateDealsResponse> ModifyGenerateDealsOutcome;
                typedef std::future<ModifyGenerateDealsOutcome> ModifyGenerateDealsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyGenerateDealsRequest&, ModifyGenerateDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGenerateDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostResponse> ModifyHostOutcome;
                typedef std::future<ModifyHostOutcome> ModifyHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostRequest&, ModifyHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostFlowModeResponse> ModifyHostFlowModeOutcome;
                typedef std::future<ModifyHostFlowModeOutcome> ModifyHostFlowModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostFlowModeRequest&, ModifyHostFlowModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostFlowModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostModeResponse> ModifyHostModeOutcome;
                typedef std::future<ModifyHostModeOutcome> ModifyHostModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostModeRequest&, ModifyHostModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostStatusResponse> ModifyHostStatusOutcome;
                typedef std::future<ModifyHostStatusOutcome> ModifyHostStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostStatusRequest&, ModifyHostStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAttackLogPostResponse> ModifyInstanceAttackLogPostOutcome;
                typedef std::future<ModifyInstanceAttackLogPostOutcome> ModifyInstanceAttackLogPostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceAttackLogPostRequest&, ModifyInstanceAttackLogPostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttackLogPostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceElasticModeResponse> ModifyInstanceElasticModeOutcome;
                typedef std::future<ModifyInstanceElasticModeOutcome> ModifyInstanceElasticModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceElasticModeRequest&, ModifyInstanceElasticModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceElasticModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceQpsLimitResponse> ModifyInstanceQpsLimitOutcome;
                typedef std::future<ModifyInstanceQpsLimitOutcome> ModifyInstanceQpsLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceQpsLimitRequest&, ModifyInstanceQpsLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceQpsLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceRenewFlagResponse> ModifyInstanceRenewFlagOutcome;
                typedef std::future<ModifyInstanceRenewFlagOutcome> ModifyInstanceRenewFlagOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceRenewFlagRequest&, ModifyInstanceRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIpAccessControlResponse> ModifyIpAccessControlOutcome;
                typedef std::future<ModifyIpAccessControlOutcome> ModifyIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyIpAccessControlRequest&, ModifyIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleStatusResponse> ModifyModuleStatusOutcome;
                typedef std::future<ModifyModuleStatusOutcome> ModifyModuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyModuleStatusRequest&, ModifyModuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyObjectResponse> ModifyObjectOutcome;
                typedef std::future<ModifyObjectOutcome> ModifyObjectOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyObjectRequest&, ModifyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectionStatusResponse> ModifyProtectionStatusOutcome;
                typedef std::future<ModifyProtectionStatusOutcome> ModifyProtectionStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyProtectionStatusRequest&, ModifyProtectionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpartaProtectionResponse> ModifySpartaProtectionOutcome;
                typedef std::future<ModifySpartaProtectionOutcome> ModifySpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifySpartaProtectionRequest&, ModifySpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpartaProtectionModeResponse> ModifySpartaProtectionModeOutcome;
                typedef std::future<ModifySpartaProtectionModeOutcome> ModifySpartaProtectionModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifySpartaProtectionModeRequest&, ModifySpartaProtectionModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpartaProtectionModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserLevelResponse> ModifyUserLevelOutcome;
                typedef std::future<ModifyUserLevelOutcome> ModifyUserLevelOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyUserLevelRequest&, ModifyUserLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserSignatureClassResponse> ModifyUserSignatureClassOutcome;
                typedef std::future<ModifyUserSignatureClassOutcome> ModifyUserSignatureClassOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyUserSignatureClassRequest&, ModifyUserSignatureClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserSignatureClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserSignatureRuleResponse> ModifyUserSignatureRuleOutcome;
                typedef std::future<ModifyUserSignatureRuleOutcome> ModifyUserSignatureRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyUserSignatureRuleRequest&, ModifyUserSignatureRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserSignatureRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserSignatureRuleV2Response> ModifyUserSignatureRuleV2Outcome;
                typedef std::future<ModifyUserSignatureRuleV2Outcome> ModifyUserSignatureRuleV2OutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyUserSignatureRuleV2Request&, ModifyUserSignatureRuleV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserSignatureRuleV2AsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWafAutoDenyRulesResponse> ModifyWafAutoDenyRulesOutcome;
                typedef std::future<ModifyWafAutoDenyRulesOutcome> ModifyWafAutoDenyRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWafAutoDenyRulesRequest&, ModifyWafAutoDenyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWafAutoDenyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWafThreatenIntelligenceResponse> ModifyWafThreatenIntelligenceOutcome;
                typedef std::future<ModifyWafThreatenIntelligenceOutcome> ModifyWafThreatenIntelligenceOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWafThreatenIntelligenceRequest&, ModifyWafThreatenIntelligenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWafThreatenIntelligenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebshellStatusResponse> ModifyWebshellStatusOutcome;
                typedef std::future<ModifyWebshellStatusOutcome> ModifyWebshellStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWebshellStatusRequest&, ModifyWebshellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebshellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PostAttackDownloadTaskResponse> PostAttackDownloadTaskOutcome;
                typedef std::future<PostAttackDownloadTaskOutcome> PostAttackDownloadTaskOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::PostAttackDownloadTaskRequest&, PostAttackDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PostAttackDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshAccessCheckResultResponse> RefreshAccessCheckResultOutcome;
                typedef std::future<RefreshAccessCheckResultOutcome> RefreshAccessCheckResultOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::RefreshAccessCheckResultRequest&, RefreshAccessCheckResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshAccessCheckResultAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchAccessLogResponse> SearchAccessLogOutcome;
                typedef std::future<SearchAccessLogOutcome> SearchAccessLogOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SearchAccessLogRequest&, SearchAccessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchAccessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchAttackLogResponse> SearchAttackLogOutcome;
                typedef std::future<SearchAttackLogOutcome> SearchAttackLogOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SearchAttackLogRequest&, SearchAttackLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchAttackLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDomainRulesResponse> SwitchDomainRulesOutcome;
                typedef std::future<SwitchDomainRulesOutcome> SwitchDomainRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SwitchDomainRulesRequest&, SwitchDomainRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDomainRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchElasticModeResponse> SwitchElasticModeOutcome;
                typedef std::future<SwitchElasticModeOutcome> SwitchElasticModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SwitchElasticModeRequest&, SwitchElasticModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchElasticModeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProtectionModesResponse> UpdateProtectionModesOutcome;
                typedef std::future<UpdateProtectionModesOutcome> UpdateProtectionModesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpdateProtectionModesRequest&, UpdateProtectionModesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProtectionModesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertCCAutoStatusResponse> UpsertCCAutoStatusOutcome;
                typedef std::future<UpsertCCAutoStatusOutcome> UpsertCCAutoStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertCCAutoStatusRequest&, UpsertCCAutoStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertCCAutoStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertCCRuleResponse> UpsertCCRuleOutcome;
                typedef std::future<UpsertCCRuleOutcome> UpsertCCRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertCCRuleRequest&, UpsertCCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertCCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertIpAccessControlResponse> UpsertIpAccessControlOutcome;
                typedef std::future<UpsertIpAccessControlOutcome> UpsertIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertIpAccessControlRequest&, UpsertIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertSessionResponse> UpsertSessionOutcome;
                typedef std::future<UpsertSessionOutcome> UpsertSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertSessionRequest&, UpsertSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertSessionAsyncHandler;



                /**
                 *添加防篡改url
                 * @param req AddAntiFakeUrlRequest
                 * @return AddAntiFakeUrlOutcome
                 */
                AddAntiFakeUrlOutcome AddAntiFakeUrl(const Model::AddAntiFakeUrlRequest &request);
                void AddAntiFakeUrlAsync(const Model::AddAntiFakeUrlRequest& request, const AddAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAntiFakeUrlOutcomeCallable AddAntiFakeUrlCallable(const Model::AddAntiFakeUrlRequest& request);

                /**
                 *添加信息防泄漏规则
                 * @param req AddAntiInfoLeakRulesRequest
                 * @return AddAntiInfoLeakRulesOutcome
                 */
                AddAntiInfoLeakRulesOutcome AddAntiInfoLeakRules(const Model::AddAntiInfoLeakRulesRequest &request);
                void AddAntiInfoLeakRulesAsync(const Model::AddAntiInfoLeakRulesRequest& request, const AddAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAntiInfoLeakRulesOutcomeCallable AddAntiInfoLeakRulesCallable(const Model::AddAntiInfoLeakRulesRequest& request);

                /**
                 *添加地域封禁中的地域信息
                 * @param req AddAreaBanAreasRequest
                 * @return AddAreaBanAreasOutcome
                 */
                AddAreaBanAreasOutcome AddAreaBanAreas(const Model::AddAreaBanAreasRequest &request);
                void AddAreaBanAreasAsync(const Model::AddAreaBanAreasRequest& request, const AddAreaBanAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAreaBanAreasOutcomeCallable AddAreaBanAreasCallable(const Model::AddAreaBanAreasRequest& request);

                /**
                 *供用户控制台调用，增加Tiga规则引擎白名单。
                 * @param req AddAttackWhiteRuleRequest
                 * @return AddAttackWhiteRuleOutcome
                 */
                AddAttackWhiteRuleOutcome AddAttackWhiteRule(const Model::AddAttackWhiteRuleRequest &request);
                void AddAttackWhiteRuleAsync(const Model::AddAttackWhiteRuleRequest& request, const AddAttackWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAttackWhiteRuleOutcomeCallable AddAttackWhiteRuleCallable(const Model::AddAttackWhiteRuleRequest& request);

                /**
                 *增加访问控制（自定义策略）
                 * @param req AddCustomRuleRequest
                 * @return AddCustomRuleOutcome
                 */
                AddCustomRuleOutcome AddCustomRule(const Model::AddCustomRuleRequest &request);
                void AddCustomRuleAsync(const Model::AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomRuleOutcomeCallable AddCustomRuleCallable(const Model::AddCustomRuleRequest& request);

                /**
                 *增加精准白名单规则
                 * @param req AddCustomWhiteRuleRequest
                 * @return AddCustomWhiteRuleOutcome
                 */
                AddCustomWhiteRuleOutcome AddCustomWhiteRule(const Model::AddCustomWhiteRuleRequest &request);
                void AddCustomWhiteRuleAsync(const Model::AddCustomWhiteRuleRequest& request, const AddCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomWhiteRuleOutcomeCallable AddCustomWhiteRuleCallable(const Model::AddCustomWhiteRuleRequest& request);

                /**
                 *增加域名规则白名单
                 * @param req AddDomainWhiteRuleRequest
                 * @return AddDomainWhiteRuleOutcome
                 */
                AddDomainWhiteRuleOutcome AddDomainWhiteRule(const Model::AddDomainWhiteRuleRequest &request);
                void AddDomainWhiteRuleAsync(const Model::AddDomainWhiteRuleRequest& request, const AddDomainWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDomainWhiteRuleOutcomeCallable AddDomainWhiteRuleCallable(const Model::AddDomainWhiteRuleRequest& request);

                /**
                 *添加SaaS型WAF防护域名
                 * @param req AddSpartaProtectionRequest
                 * @return AddSpartaProtectionOutcome
                 */
                AddSpartaProtectionOutcome AddSpartaProtection(const Model::AddSpartaProtectionRequest &request);
                void AddSpartaProtectionAsync(const Model::AddSpartaProtectionRequest& request, const AddSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSpartaProtectionOutcomeCallable AddSpartaProtectionCallable(const Model::AddSpartaProtectionRequest& request);

                /**
                 *批量操作tiga子规则
                 * @param req BatchOperateUserSignatureRulesRequest
                 * @return BatchOperateUserSignatureRulesOutcome
                 */
                BatchOperateUserSignatureRulesOutcome BatchOperateUserSignatureRules(const Model::BatchOperateUserSignatureRulesRequest &request);
                void BatchOperateUserSignatureRulesAsync(const Model::BatchOperateUserSignatureRulesRequest& request, const BatchOperateUserSignatureRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchOperateUserSignatureRulesOutcomeCallable BatchOperateUserSignatureRulesCallable(const Model::BatchOperateUserSignatureRulesRequest& request);

                /**
                 *本接口用于创建访问日志导出
                 * @param req CreateAccessExportRequest
                 * @return CreateAccessExportOutcome
                 */
                CreateAccessExportOutcome CreateAccessExport(const Model::CreateAccessExportRequest &request);
                void CreateAccessExportAsync(const Model::CreateAccessExportRequest& request, const CreateAccessExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessExportOutcomeCallable CreateAccessExportCallable(const Model::CreateAccessExportRequest& request);

                /**
                 *添加（编辑）地域封禁中的地域信息
                 * @param req CreateAreaBanRuleRequest
                 * @return CreateAreaBanRuleOutcome
                 */
                CreateAreaBanRuleOutcome CreateAreaBanRule(const Model::CreateAreaBanRuleRequest &request);
                void CreateAreaBanRuleAsync(const Model::CreateAreaBanRuleRequest& request, const CreateAreaBanRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAreaBanRuleOutcomeCallable CreateAreaBanRuleCallable(const Model::CreateAreaBanRuleRequest& request);

                /**
                 *计费资源购买、续费下单接口
                 * @param req CreateDealsRequest
                 * @return CreateDealsOutcome
                 */
                CreateDealsOutcome CreateDeals(const Model::CreateDealsRequest &request);
                void CreateDealsAsync(const Model::CreateDealsRequest& request, const CreateDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDealsOutcomeCallable CreateDealsCallable(const Model::CreateDealsRequest& request);

                /**
                 *clb-waf中添加防护域名
                 * @param req CreateHostRequest
                 * @return CreateHostOutcome
                 */
                CreateHostOutcome CreateHost(const Model::CreateHostRequest &request);
                void CreateHostAsync(const Model::CreateHostRequest& request, const CreateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostOutcomeCallable CreateHostCallable(const Model::CreateHostRequest& request);

                /**
                 *Waf IP黑白名单新增接口
                 * @param req CreateIpAccessControlRequest
                 * @return CreateIpAccessControlOutcome
                 */
                CreateIpAccessControlOutcome CreateIpAccessControl(const Model::CreateIpAccessControlRequest &request);
                void CreateIpAccessControlAsync(const Model::CreateIpAccessControlRequest& request, const CreateIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIpAccessControlOutcomeCallable CreateIpAccessControlCallable(const Model::CreateIpAccessControlRequest& request);

                /**
                 *创建CKafka投递流任务
                 * @param req CreatePostCKafkaFlowRequest
                 * @return CreatePostCKafkaFlowOutcome
                 */
                CreatePostCKafkaFlowOutcome CreatePostCKafkaFlow(const Model::CreatePostCKafkaFlowRequest &request);
                void CreatePostCKafkaFlowAsync(const Model::CreatePostCKafkaFlowRequest& request, const CreatePostCKafkaFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePostCKafkaFlowOutcomeCallable CreatePostCKafkaFlowCallable(const Model::CreatePostCKafkaFlowRequest& request);

                /**
                 *创建CLS投递流任务
                 * @param req CreatePostCLSFlowRequest
                 * @return CreatePostCLSFlowOutcome
                 */
                CreatePostCLSFlowOutcome CreatePostCLSFlow(const Model::CreatePostCLSFlowRequest &request);
                void CreatePostCLSFlowAsync(const Model::CreatePostCLSFlowRequest& request, const CreatePostCLSFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePostCLSFlowOutcomeCallable CreatePostCLSFlowCallable(const Model::CreatePostCLSFlowRequest& request);

                /**
                 *本接口用于删除访问日志导出
                 * @param req DeleteAccessExportRequest
                 * @return DeleteAccessExportOutcome
                 */
                DeleteAccessExportOutcome DeleteAccessExport(const Model::DeleteAccessExportRequest &request);
                void DeleteAccessExportAsync(const Model::DeleteAccessExportRequest& request, const DeleteAccessExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessExportOutcomeCallable DeleteAccessExportCallable(const Model::DeleteAccessExportRequest& request);

                /**
                 *删除防篡改url
                 * @param req DeleteAntiFakeUrlRequest
                 * @return DeleteAntiFakeUrlOutcome
                 */
                DeleteAntiFakeUrlOutcome DeleteAntiFakeUrl(const Model::DeleteAntiFakeUrlRequest &request);
                void DeleteAntiFakeUrlAsync(const Model::DeleteAntiFakeUrlRequest& request, const DeleteAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAntiFakeUrlOutcomeCallable DeleteAntiFakeUrlCallable(const Model::DeleteAntiFakeUrlRequest& request);

                /**
                 *信息防泄漏删除规则
                 * @param req DeleteAntiInfoLeakRuleRequest
                 * @return DeleteAntiInfoLeakRuleOutcome
                 */
                DeleteAntiInfoLeakRuleOutcome DeleteAntiInfoLeakRule(const Model::DeleteAntiInfoLeakRuleRequest &request);
                void DeleteAntiInfoLeakRuleAsync(const Model::DeleteAntiInfoLeakRuleRequest& request, const DeleteAntiInfoLeakRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAntiInfoLeakRuleOutcomeCallable DeleteAntiInfoLeakRuleCallable(const Model::DeleteAntiInfoLeakRuleRequest& request);

                /**
                 *删除攻击日志下载任务记录
                 * @param req DeleteAttackDownloadRecordRequest
                 * @return DeleteAttackDownloadRecordOutcome
                 */
                DeleteAttackDownloadRecordOutcome DeleteAttackDownloadRecord(const Model::DeleteAttackDownloadRecordRequest &request);
                void DeleteAttackDownloadRecordAsync(const Model::DeleteAttackDownloadRecordRequest& request, const DeleteAttackDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttackDownloadRecordOutcomeCallable DeleteAttackDownloadRecordCallable(const Model::DeleteAttackDownloadRecordRequest& request);

                /**
                 *供用户控制台调用，删除Tiga规则引擎白名单。
                 * @param req DeleteAttackWhiteRuleRequest
                 * @return DeleteAttackWhiteRuleOutcome
                 */
                DeleteAttackWhiteRuleOutcome DeleteAttackWhiteRule(const Model::DeleteAttackWhiteRuleRequest &request);
                void DeleteAttackWhiteRuleAsync(const Model::DeleteAttackWhiteRuleRequest& request, const DeleteAttackWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttackWhiteRuleOutcomeCallable DeleteAttackWhiteRuleCallable(const Model::DeleteAttackWhiteRuleRequest& request);

                /**
                 *场景化后删除Bot的UCB自定义规则
                 * @param req DeleteBotSceneUCBRuleRequest
                 * @return DeleteBotSceneUCBRuleOutcome
                 */
                DeleteBotSceneUCBRuleOutcome DeleteBotSceneUCBRule(const Model::DeleteBotSceneUCBRuleRequest &request);
                void DeleteBotSceneUCBRuleAsync(const Model::DeleteBotSceneUCBRuleRequest& request, const DeleteBotSceneUCBRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBotSceneUCBRuleOutcomeCallable DeleteBotSceneUCBRuleCallable(const Model::DeleteBotSceneUCBRuleRequest& request);

                /**
                 *Waf  CC V2 Delete接口
                 * @param req DeleteCCRuleRequest
                 * @return DeleteCCRuleOutcome
                 */
                DeleteCCRuleOutcome DeleteCCRule(const Model::DeleteCCRuleRequest &request);
                void DeleteCCRuleAsync(const Model::DeleteCCRuleRequest& request, const DeleteCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCRuleOutcomeCallable DeleteCCRuleCallable(const Model::DeleteCCRuleRequest& request);

                /**
                 *删除自定义规则
                 * @param req DeleteCustomRuleRequest
                 * @return DeleteCustomRuleOutcome
                 */
                DeleteCustomRuleOutcome DeleteCustomRule(const Model::DeleteCustomRuleRequest &request);
                void DeleteCustomRuleAsync(const Model::DeleteCustomRuleRequest& request, const DeleteCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomRuleOutcomeCallable DeleteCustomRuleCallable(const Model::DeleteCustomRuleRequest& request);

                /**
                 *删除精准白名单规则
                 * @param req DeleteCustomWhiteRuleRequest
                 * @return DeleteCustomWhiteRuleOutcome
                 */
                DeleteCustomWhiteRuleOutcome DeleteCustomWhiteRule(const Model::DeleteCustomWhiteRuleRequest &request);
                void DeleteCustomWhiteRuleAsync(const Model::DeleteCustomWhiteRuleRequest& request, const DeleteCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomWhiteRuleOutcomeCallable DeleteCustomWhiteRuleCallable(const Model::DeleteCustomWhiteRuleRequest& request);

                /**
                 *删除域名规则白名单
                 * @param req DeleteDomainWhiteRulesRequest
                 * @return DeleteDomainWhiteRulesOutcome
                 */
                DeleteDomainWhiteRulesOutcome DeleteDomainWhiteRules(const Model::DeleteDomainWhiteRulesRequest &request);
                void DeleteDomainWhiteRulesAsync(const Model::DeleteDomainWhiteRulesRequest& request, const DeleteDomainWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainWhiteRulesOutcomeCallable DeleteDomainWhiteRulesCallable(const Model::DeleteDomainWhiteRulesRequest& request);

                /**
                 *删除负载均衡型域名，支持批量操作。
                 * @param req DeleteHostRequest
                 * @return DeleteHostOutcome
                 */
                DeleteHostOutcome DeleteHost(const Model::DeleteHostRequest &request);
                void DeleteHostAsync(const Model::DeleteHostRequest& request, const DeleteHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHostOutcomeCallable DeleteHostCallable(const Model::DeleteHostRequest& request);

                /**
                 *Waf IP黑白名单Delete接口（建议使用DeleteIpAccessControlV2来替换当前接口）
                 * @param req DeleteIpAccessControlRequest
                 * @return DeleteIpAccessControlOutcome
                 */
                DeleteIpAccessControlOutcome DeleteIpAccessControl(const Model::DeleteIpAccessControlRequest &request);
                void DeleteIpAccessControlAsync(const Model::DeleteIpAccessControlRequest& request, const DeleteIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIpAccessControlOutcomeCallable DeleteIpAccessControlCallable(const Model::DeleteIpAccessControlRequest& request);

                /**
                 *Waf IP黑白名单最新版本删除接口
                 * @param req DeleteIpAccessControlV2Request
                 * @return DeleteIpAccessControlV2Outcome
                 */
                DeleteIpAccessControlV2Outcome DeleteIpAccessControlV2(const Model::DeleteIpAccessControlV2Request &request);
                void DeleteIpAccessControlV2Async(const Model::DeleteIpAccessControlV2Request& request, const DeleteIpAccessControlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIpAccessControlV2OutcomeCallable DeleteIpAccessControlV2Callable(const Model::DeleteIpAccessControlV2Request& request);

                /**
                 *删除CC攻击的session设置
                 * @param req DeleteSessionRequest
                 * @return DeleteSessionOutcome
                 */
                DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest &request);
                void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request);

                /**
                 *SaaS型WAF删除防护域名
                 * @param req DeleteSpartaProtectionRequest
                 * @return DeleteSpartaProtectionOutcome
                 */
                DeleteSpartaProtectionOutcome DeleteSpartaProtection(const Model::DeleteSpartaProtectionRequest &request);
                void DeleteSpartaProtectionAsync(const Model::DeleteSpartaProtectionRequest& request, const DeleteSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSpartaProtectionOutcomeCallable DeleteSpartaProtectionCallable(const Model::DeleteSpartaProtectionRequest& request);

                /**
                 *本接口用于获取访问日志导出列表
                 * @param req DescribeAccessExportsRequest
                 * @return DescribeAccessExportsOutcome
                 */
                DescribeAccessExportsOutcome DescribeAccessExports(const Model::DescribeAccessExportsRequest &request);
                void DescribeAccessExportsAsync(const Model::DescribeAccessExportsRequest& request, const DescribeAccessExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessExportsOutcomeCallable DescribeAccessExportsCallable(const Model::DescribeAccessExportsRequest& request);

                /**
                 *本接口用于访问日志的快速分析
                 * @param req DescribeAccessFastAnalysisRequest
                 * @return DescribeAccessFastAnalysisOutcome
                 */
                DescribeAccessFastAnalysisOutcome DescribeAccessFastAnalysis(const Model::DescribeAccessFastAnalysisRequest &request);
                void DescribeAccessFastAnalysisAsync(const Model::DescribeAccessFastAnalysisRequest& request, const DescribeAccessFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessFastAnalysisOutcomeCallable DescribeAccessFastAnalysisCallable(const Model::DescribeAccessFastAnalysisRequest& request);

                /**
                 *本接口用于访问日志柱状趋势图
                 * @param req DescribeAccessHistogramRequest
                 * @return DescribeAccessHistogramOutcome
                 */
                DescribeAccessHistogramOutcome DescribeAccessHistogram(const Model::DescribeAccessHistogramRequest &request);
                void DescribeAccessHistogramAsync(const Model::DescribeAccessHistogramRequest& request, const DescribeAccessHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessHistogramOutcomeCallable DescribeAccessHistogramCallable(const Model::DescribeAccessHistogramRequest& request);

                /**
                 *本接口用于获取访问日志索引配置信息
                 * @param req DescribeAccessIndexRequest
                 * @return DescribeAccessIndexOutcome
                 */
                DescribeAccessIndexOutcome DescribeAccessIndex(const Model::DescribeAccessIndexRequest &request);
                void DescribeAccessIndexAsync(const Model::DescribeAccessIndexRequest& request, const DescribeAccessIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessIndexOutcomeCallable DescribeAccessIndexCallable(const Model::DescribeAccessIndexRequest& request);

                /**
                 *获取防篡改url
                 * @param req DescribeAntiFakeRulesRequest
                 * @return DescribeAntiFakeRulesOutcome
                 */
                DescribeAntiFakeRulesOutcome DescribeAntiFakeRules(const Model::DescribeAntiFakeRulesRequest &request);
                void DescribeAntiFakeRulesAsync(const Model::DescribeAntiFakeRulesRequest& request, const DescribeAntiFakeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAntiFakeRulesOutcomeCallable DescribeAntiFakeRulesCallable(const Model::DescribeAntiFakeRulesRequest& request);

                /**
                 *取得信息防泄漏规则列表
                 * @param req DescribeAntiInfoLeakageRulesRequest
                 * @return DescribeAntiInfoLeakageRulesOutcome
                 */
                DescribeAntiInfoLeakageRulesOutcome DescribeAntiInfoLeakageRules(const Model::DescribeAntiInfoLeakageRulesRequest &request);
                void DescribeAntiInfoLeakageRulesAsync(const Model::DescribeAntiInfoLeakageRulesRequest& request, const DescribeAntiInfoLeakageRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAntiInfoLeakageRulesOutcomeCallable DescribeAntiInfoLeakageRulesCallable(const Model::DescribeAntiInfoLeakageRulesRequest& request);

                /**
                 *获取Api请求详情信息
                 * @param req DescribeApiDetailRequest
                 * @return DescribeApiDetailOutcome
                 */
                DescribeApiDetailOutcome DescribeApiDetail(const Model::DescribeApiDetailRequest &request);
                void DescribeApiDetailAsync(const Model::DescribeApiDetailRequest& request, const DescribeApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiDetailOutcomeCallable DescribeApiDetailCallable(const Model::DescribeApiDetailRequest& request);

                /**
                 *api资产列表
                 * @param req DescribeApiListVersionTwoRequest
                 * @return DescribeApiListVersionTwoOutcome
                 */
                DescribeApiListVersionTwoOutcome DescribeApiListVersionTwo(const Model::DescribeApiListVersionTwoRequest &request);
                void DescribeApiListVersionTwoAsync(const Model::DescribeApiListVersionTwoRequest& request, const DescribeApiListVersionTwoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiListVersionTwoOutcomeCallable DescribeApiListVersionTwoCallable(const Model::DescribeApiListVersionTwoRequest& request);

                /**
                 *获取地域封禁配置包括地域封禁开关，设置封禁的地区信息
                 * @param req DescribeAreaBanAreasRequest
                 * @return DescribeAreaBanAreasOutcome
                 */
                DescribeAreaBanAreasOutcome DescribeAreaBanAreas(const Model::DescribeAreaBanAreasRequest &request);
                void DescribeAreaBanAreasAsync(const Model::DescribeAreaBanAreasRequest& request, const DescribeAreaBanAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAreaBanAreasOutcomeCallable DescribeAreaBanAreasCallable(const Model::DescribeAreaBanAreasRequest& request);

                /**
                 *获取地域封禁规则配置
                 * @param req DescribeAreaBanRuleRequest
                 * @return DescribeAreaBanRuleOutcome
                 */
                DescribeAreaBanRuleOutcome DescribeAreaBanRule(const Model::DescribeAreaBanRuleRequest &request);
                void DescribeAreaBanRuleAsync(const Model::DescribeAreaBanRuleRequest& request, const DescribeAreaBanRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAreaBanRuleOutcomeCallable DescribeAreaBanRuleCallable(const Model::DescribeAreaBanRuleRequest& request);

                /**
                 *获取WAF地域封禁支持的地域列表
                 * @param req DescribeAreaBanSupportAreasRequest
                 * @return DescribeAreaBanSupportAreasOutcome
                 */
                DescribeAreaBanSupportAreasOutcome DescribeAreaBanSupportAreas(const Model::DescribeAreaBanSupportAreasRequest &request);
                void DescribeAreaBanSupportAreasAsync(const Model::DescribeAreaBanSupportAreasRequest& request, const DescribeAreaBanSupportAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAreaBanSupportAreasOutcomeCallable DescribeAreaBanSupportAreasCallable(const Model::DescribeAreaBanSupportAreasRequest& request);

                /**
                 *攻击总览
                 * @param req DescribeAttackOverviewRequest
                 * @return DescribeAttackOverviewOutcome
                 */
                DescribeAttackOverviewOutcome DescribeAttackOverview(const Model::DescribeAttackOverviewRequest &request);
                void DescribeAttackOverviewAsync(const Model::DescribeAttackOverviewRequest& request, const DescribeAttackOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackOverviewOutcomeCallable DescribeAttackOverviewCallable(const Model::DescribeAttackOverviewRequest& request);

                /**
                 *查询指定域名TOP N攻击类型
                 * @param req DescribeAttackTypeRequest
                 * @return DescribeAttackTypeOutcome
                 */
                DescribeAttackTypeOutcome DescribeAttackType(const Model::DescribeAttackTypeRequest &request);
                void DescribeAttackTypeAsync(const Model::DescribeAttackTypeRequest& request, const DescribeAttackTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackTypeOutcomeCallable DescribeAttackTypeCallable(const Model::DescribeAttackTypeRequest& request);

                /**
                 *获取用户规则白名单列表
                 * @param req DescribeAttackWhiteRuleRequest
                 * @return DescribeAttackWhiteRuleOutcome
                 */
                DescribeAttackWhiteRuleOutcome DescribeAttackWhiteRule(const Model::DescribeAttackWhiteRuleRequest &request);
                void DescribeAttackWhiteRuleAsync(const Model::DescribeAttackWhiteRuleRequest& request, const DescribeAttackWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackWhiteRuleOutcomeCallable DescribeAttackWhiteRuleCallable(const Model::DescribeAttackWhiteRuleRequest& request);

                /**
                 *描述WAF自动封禁IP详情,对齐自动封堵状态
                 * @param req DescribeAutoDenyIPRequest
                 * @return DescribeAutoDenyIPOutcome
                 */
                DescribeAutoDenyIPOutcome DescribeAutoDenyIP(const Model::DescribeAutoDenyIPRequest &request);
                void DescribeAutoDenyIPAsync(const Model::DescribeAutoDenyIPRequest& request, const DescribeAutoDenyIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoDenyIPOutcomeCallable DescribeAutoDenyIPCallable(const Model::DescribeAutoDenyIPRequest& request);

                /**
                 *Waf 批量防护IP黑白名单查询
                 * @param req DescribeBatchIpAccessControlRequest
                 * @return DescribeBatchIpAccessControlOutcome
                 */
                DescribeBatchIpAccessControlOutcome DescribeBatchIpAccessControl(const Model::DescribeBatchIpAccessControlRequest &request);
                void DescribeBatchIpAccessControlAsync(const Model::DescribeBatchIpAccessControlRequest& request, const DescribeBatchIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchIpAccessControlOutcomeCallable DescribeBatchIpAccessControlCallable(const Model::DescribeBatchIpAccessControlRequest& request);

                /**
                 *获取BOT场景列表与概览
                 * @param req DescribeBotSceneListRequest
                 * @return DescribeBotSceneListOutcome
                 */
                DescribeBotSceneListOutcome DescribeBotSceneList(const Model::DescribeBotSceneListRequest &request);
                void DescribeBotSceneListAsync(const Model::DescribeBotSceneListRequest& request, const DescribeBotSceneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotSceneListOutcomeCallable DescribeBotSceneListCallable(const Model::DescribeBotSceneListRequest& request);

                /**
                 *获取Bot场景全局概览
                 * @param req DescribeBotSceneOverviewRequest
                 * @return DescribeBotSceneOverviewOutcome
                 */
                DescribeBotSceneOverviewOutcome DescribeBotSceneOverview(const Model::DescribeBotSceneOverviewRequest &request);
                void DescribeBotSceneOverviewAsync(const Model::DescribeBotSceneOverviewRequest& request, const DescribeBotSceneOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotSceneOverviewOutcomeCallable DescribeBotSceneOverviewCallable(const Model::DescribeBotSceneOverviewRequest& request);

                /**
                 *场景化后Bot获取UCB自定义规则策略
                 * @param req DescribeBotSceneUCBRuleRequest
                 * @return DescribeBotSceneUCBRuleOutcome
                 */
                DescribeBotSceneUCBRuleOutcome DescribeBotSceneUCBRule(const Model::DescribeBotSceneUCBRuleRequest &request);
                void DescribeBotSceneUCBRuleAsync(const Model::DescribeBotSceneUCBRuleRequest& request, const DescribeBotSceneUCBRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotSceneUCBRuleOutcomeCallable DescribeBotSceneUCBRuleCallable(const Model::DescribeBotSceneUCBRuleRequest& request);

                /**
                 *获取SAAS型接入的紧急CC防护状态
                 * @param req DescribeCCAutoStatusRequest
                 * @return DescribeCCAutoStatusOutcome
                 */
                DescribeCCAutoStatusOutcome DescribeCCAutoStatus(const Model::DescribeCCAutoStatusRequest &request);
                void DescribeCCAutoStatusAsync(const Model::DescribeCCAutoStatusRequest& request, const DescribeCCAutoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCAutoStatusOutcomeCallable DescribeCCAutoStatusCallable(const Model::DescribeCCAutoStatusRequest& request);

                /**
                 *Waf  CC V2 Query接口
                 * @param req DescribeCCRuleRequest
                 * @return DescribeCCRuleOutcome
                 */
                DescribeCCRuleOutcome DescribeCCRule(const Model::DescribeCCRuleRequest &request);
                void DescribeCCRuleAsync(const Model::DescribeCCRuleRequest& request, const DescribeCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCRuleOutcomeCallable DescribeCCRuleCallable(const Model::DescribeCCRuleRequest& request);

                /**
                 *根据多条件查询CC规则
                 * @param req DescribeCCRuleListRequest
                 * @return DescribeCCRuleListOutcome
                 */
                DescribeCCRuleListOutcome DescribeCCRuleList(const Model::DescribeCCRuleListRequest &request);
                void DescribeCCRuleListAsync(const Model::DescribeCCRuleListRequest& request, const DescribeCCRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCRuleListOutcomeCallable DescribeCCRuleListCallable(const Model::DescribeCCRuleListRequest& request);

                /**
                 *获取证书的检查结果
                 * @param req DescribeCertificateVerifyResultRequest
                 * @return DescribeCertificateVerifyResultOutcome
                 */
                DescribeCertificateVerifyResultOutcome DescribeCertificateVerifyResult(const Model::DescribeCertificateVerifyResultRequest &request);
                void DescribeCertificateVerifyResultAsync(const Model::DescribeCertificateVerifyResultRequest& request, const DescribeCertificateVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateVerifyResultOutcomeCallable DescribeCertificateVerifyResultCallable(const Model::DescribeCertificateVerifyResultRequest& request);

                /**
                 *Saas型WAF接入查询加密套件信息
                 * @param req DescribeCiphersDetailRequest
                 * @return DescribeCiphersDetailOutcome
                 */
                DescribeCiphersDetailOutcome DescribeCiphersDetail(const Model::DescribeCiphersDetailRequest &request);
                void DescribeCiphersDetailAsync(const Model::DescribeCiphersDetailRequest& request, const DescribeCiphersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCiphersDetailOutcomeCallable DescribeCiphersDetailCallable(const Model::DescribeCiphersDetailRequest& request);

                /**
                 *获取防护配置中的访问控制策略列表
                 * @param req DescribeCustomRuleListRequest
                 * @return DescribeCustomRuleListOutcome
                 */
                DescribeCustomRuleListOutcome DescribeCustomRuleList(const Model::DescribeCustomRuleListRequest &request);
                void DescribeCustomRuleListAsync(const Model::DescribeCustomRuleListRequest& request, const DescribeCustomRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRuleListOutcomeCallable DescribeCustomRuleListCallable(const Model::DescribeCustomRuleListRequest& request);

                /**
                 *获取防护配置中的精准白名单策略列表
                 * @param req DescribeCustomWhiteRuleRequest
                 * @return DescribeCustomWhiteRuleOutcome
                 */
                DescribeCustomWhiteRuleOutcome DescribeCustomWhiteRule(const Model::DescribeCustomWhiteRuleRequest &request);
                void DescribeCustomWhiteRuleAsync(const Model::DescribeCustomWhiteRuleRequest& request, const DescribeCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomWhiteRuleOutcomeCallable DescribeCustomWhiteRuleCallable(const Model::DescribeCustomWhiteRuleRequest& request);

                /**
                 *获取域名概况
                 * @param req DescribeDomainCountInfoRequest
                 * @return DescribeDomainCountInfoOutcome
                 */
                DescribeDomainCountInfoOutcome DescribeDomainCountInfo(const Model::DescribeDomainCountInfoRequest &request);
                void DescribeDomainCountInfoAsync(const Model::DescribeDomainCountInfoRequest& request, const DescribeDomainCountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainCountInfoOutcomeCallable DescribeDomainCountInfoCallable(const Model::DescribeDomainCountInfoRequest& request);

                /**
                 *获取一个clbwaf域名详情
                 * @param req DescribeDomainDetailsClbRequest
                 * @return DescribeDomainDetailsClbOutcome
                 */
                DescribeDomainDetailsClbOutcome DescribeDomainDetailsClb(const Model::DescribeDomainDetailsClbRequest &request);
                void DescribeDomainDetailsClbAsync(const Model::DescribeDomainDetailsClbRequest& request, const DescribeDomainDetailsClbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainDetailsClbOutcomeCallable DescribeDomainDetailsClbCallable(const Model::DescribeDomainDetailsClbRequest& request);

                /**
                 *查询单个saaswaf域名详情
                 * @param req DescribeDomainDetailsSaasRequest
                 * @return DescribeDomainDetailsSaasOutcome
                 */
                DescribeDomainDetailsSaasOutcome DescribeDomainDetailsSaas(const Model::DescribeDomainDetailsSaasRequest &request);
                void DescribeDomainDetailsSaasAsync(const Model::DescribeDomainDetailsSaasRequest& request, const DescribeDomainDetailsSaasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainDetailsSaasOutcomeCallable DescribeDomainDetailsSaasCallable(const Model::DescribeDomainDetailsSaasRequest& request);

                /**
                 *拉取域名的防护规则列表
                 * @param req DescribeDomainRulesRequest
                 * @return DescribeDomainRulesOutcome
                 */
                DescribeDomainRulesOutcome DescribeDomainRules(const Model::DescribeDomainRulesRequest &request);
                void DescribeDomainRulesAsync(const Model::DescribeDomainRulesRequest& request, const DescribeDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainRulesOutcomeCallable DescribeDomainRulesCallable(const Model::DescribeDomainRulesRequest& request);

                /**
                 *获取添加域名操作的结果
                 * @param req DescribeDomainVerifyResultRequest
                 * @return DescribeDomainVerifyResultOutcome
                 */
                DescribeDomainVerifyResultOutcome DescribeDomainVerifyResult(const Model::DescribeDomainVerifyResultRequest &request);
                void DescribeDomainVerifyResultAsync(const Model::DescribeDomainVerifyResultRequest& request, const DescribeDomainVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainVerifyResultOutcomeCallable DescribeDomainVerifyResultCallable(const Model::DescribeDomainVerifyResultRequest& request);

                /**
                 *获取域名的规则白名单
                 * @param req DescribeDomainWhiteRulesRequest
                 * @return DescribeDomainWhiteRulesOutcome
                 */
                DescribeDomainWhiteRulesOutcome DescribeDomainWhiteRules(const Model::DescribeDomainWhiteRulesRequest &request);
                void DescribeDomainWhiteRulesAsync(const Model::DescribeDomainWhiteRulesRequest& request, const DescribeDomainWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainWhiteRulesOutcomeCallable DescribeDomainWhiteRulesCallable(const Model::DescribeDomainWhiteRulesRequest& request);

                /**
                 *查询用户所有域名的详细信息
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *获取发现域名列表接口
                 * @param req DescribeFindDomainListRequest
                 * @return DescribeFindDomainListOutcome
                 */
                DescribeFindDomainListOutcome DescribeFindDomainList(const Model::DescribeFindDomainListRequest &request);
                void DescribeFindDomainListAsync(const Model::DescribeFindDomainListRequest& request, const DescribeFindDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFindDomainListOutcomeCallable DescribeFindDomainListCallable(const Model::DescribeFindDomainListRequest& request);

                /**
                 *获取waf流量访问趋势
                 * @param req DescribeFlowTrendRequest
                 * @return DescribeFlowTrendOutcome
                 */
                DescribeFlowTrendOutcome DescribeFlowTrend(const Model::DescribeFlowTrendRequest &request);
                void DescribeFlowTrendAsync(const Model::DescribeFlowTrendRequest& request, const DescribeFlowTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTrendOutcomeCallable DescribeFlowTrendCallable(const Model::DescribeFlowTrendRequest& request);

                /**
                 *查询多种条件的聚类分析
                 * @param req DescribeHistogramRequest
                 * @return DescribeHistogramOutcome
                 */
                DescribeHistogramOutcome DescribeHistogram(const Model::DescribeHistogramRequest &request);
                void DescribeHistogramAsync(const Model::DescribeHistogramRequest& request, const DescribeHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistogramOutcomeCallable DescribeHistogramCallable(const Model::DescribeHistogramRequest& request);

                /**
                 *clb-waf获取防护域名详情
                 * @param req DescribeHostRequest
                 * @return DescribeHostOutcome
                 */
                DescribeHostOutcome DescribeHost(const Model::DescribeHostRequest &request);
                void DescribeHostAsync(const Model::DescribeHostRequest& request, const DescribeHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostOutcomeCallable DescribeHostCallable(const Model::DescribeHostRequest& request);

                /**
                 *添加域名的首先验证是否购买了套餐，是否没有达到购买套餐的限制，域名是否已经添加
                 * @param req DescribeHostLimitRequest
                 * @return DescribeHostLimitOutcome
                 */
                DescribeHostLimitOutcome DescribeHostLimit(const Model::DescribeHostLimitRequest &request);
                void DescribeHostLimitAsync(const Model::DescribeHostLimitRequest& request, const DescribeHostLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLimitOutcomeCallable DescribeHostLimitCallable(const Model::DescribeHostLimitRequest& request);

                /**
                 *clb-waf中获取防护域名列表
                 * @param req DescribeHostsRequest
                 * @return DescribeHostsOutcome
                 */
                DescribeHostsOutcome DescribeHosts(const Model::DescribeHostsRequest &request);
                void DescribeHostsAsync(const Model::DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsOutcomeCallable DescribeHostsCallable(const Model::DescribeHostsRequest& request);

                /**
                 *查询用户所有实例的详细信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *Waf ip黑白名单查询
                 * @param req DescribeIpAccessControlRequest
                 * @return DescribeIpAccessControlOutcome
                 */
                DescribeIpAccessControlOutcome DescribeIpAccessControl(const Model::DescribeIpAccessControlRequest &request);
                void DescribeIpAccessControlAsync(const Model::DescribeIpAccessControlRequest& request, const DescribeIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpAccessControlOutcomeCallable DescribeIpAccessControlCallable(const Model::DescribeIpAccessControlRequest& request);

                /**
                 *Waf  IP封堵状态查询
                 * @param req DescribeIpHitItemsRequest
                 * @return DescribeIpHitItemsOutcome
                 */
                DescribeIpHitItemsOutcome DescribeIpHitItems(const Model::DescribeIpHitItemsRequest &request);
                void DescribeIpHitItemsAsync(const Model::DescribeIpHitItemsRequest& request, const DescribeIpHitItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpHitItemsOutcomeCallable DescribeIpHitItemsCallable(const Model::DescribeIpHitItemsRequest& request);

                /**
                 *查询各个waf基础安全模块的开关状态，看每个模块是否开启
                 * @param req DescribeModuleStatusRequest
                 * @return DescribeModuleStatusOutcome
                 */
                DescribeModuleStatusOutcome DescribeModuleStatus(const Model::DescribeModuleStatusRequest &request);
                void DescribeModuleStatusAsync(const Model::DescribeModuleStatusRequest& request, const DescribeModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleStatusOutcomeCallable DescribeModuleStatusCallable(const Model::DescribeModuleStatusRequest& request);

                /**
                 *查看防护对象列表
                 * @param req DescribeObjectsRequest
                 * @return DescribeObjectsOutcome
                 */
                DescribeObjectsOutcome DescribeObjects(const Model::DescribeObjectsRequest &request);
                void DescribeObjectsAsync(const Model::DescribeObjectsRequest& request, const DescribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeObjectsOutcomeCallable DescribeObjectsCallable(const Model::DescribeObjectsRequest& request);

                /**
                 *查询业务和攻击概要趋势
                 * @param req DescribePeakPointsRequest
                 * @return DescribePeakPointsOutcome
                 */
                DescribePeakPointsOutcome DescribePeakPoints(const Model::DescribePeakPointsRequest &request);
                void DescribePeakPointsAsync(const Model::DescribePeakPointsRequest& request, const DescribePeakPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakPointsOutcomeCallable DescribePeakPointsCallable(const Model::DescribePeakPointsRequest& request);

                /**
                 *获取业务和攻击概览峰值
                 * @param req DescribePeakValueRequest
                 * @return DescribePeakValueOutcome
                 */
                DescribePeakValueOutcome DescribePeakValue(const Model::DescribePeakValueRequest &request);
                void DescribePeakValueAsync(const Model::DescribePeakValueRequest& request, const DescribePeakValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakValueOutcomeCallable DescribePeakValueCallable(const Model::DescribePeakValueRequest& request);

                /**
                 *获取防护状态以及生效的实例id
                 * @param req DescribePolicyStatusRequest
                 * @return DescribePolicyStatusOutcome
                 */
                DescribePolicyStatusOutcome DescribePolicyStatus(const Model::DescribePolicyStatusRequest &request);
                void DescribePolicyStatusAsync(const Model::DescribePolicyStatusRequest& request, const DescribePolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyStatusOutcomeCallable DescribePolicyStatusCallable(const Model::DescribePolicyStatusRequest& request);

                /**
                 *获取Saas型WAF防护端口列表
                 * @param req DescribePortsRequest
                 * @return DescribePortsOutcome
                 */
                DescribePortsOutcome DescribePorts(const Model::DescribePortsRequest &request);
                void DescribePortsAsync(const Model::DescribePortsRequest& request, const DescribePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortsOutcomeCallable DescribePortsCallable(const Model::DescribePortsRequest& request);

                /**
                 *获取CKafka投递流任务列表
                 * @param req DescribePostCKafkaFlowsRequest
                 * @return DescribePostCKafkaFlowsOutcome
                 */
                DescribePostCKafkaFlowsOutcome DescribePostCKafkaFlows(const Model::DescribePostCKafkaFlowsRequest &request);
                void DescribePostCKafkaFlowsAsync(const Model::DescribePostCKafkaFlowsRequest& request, const DescribePostCKafkaFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostCKafkaFlowsOutcomeCallable DescribePostCKafkaFlowsCallable(const Model::DescribePostCKafkaFlowsRequest& request);

                /**
                 *获取CLS投递流任务列表
                 * @param req DescribePostCLSFlowsRequest
                 * @return DescribePostCLSFlowsOutcome
                 */
                DescribePostCLSFlowsOutcome DescribePostCLSFlows(const Model::DescribePostCLSFlowsRequest &request);
                void DescribePostCLSFlowsAsync(const Model::DescribePostCLSFlowsRequest& request, const DescribePostCLSFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostCLSFlowsOutcomeCallable DescribePostCLSFlowsCallable(const Model::DescribePostCLSFlowsRequest& request);

                /**
                 *查询Tiga引擎大类规则及其防护模式
                 * @param req DescribeProtectionModesRequest
                 * @return DescribeProtectionModesOutcome
                 */
                DescribeProtectionModesOutcome DescribeProtectionModes(const Model::DescribeProtectionModesRequest &request);
                void DescribeProtectionModesAsync(const Model::DescribeProtectionModesRequest& request, const DescribeProtectionModesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectionModesOutcomeCallable DescribeProtectionModesCallable(const Model::DescribeProtectionModesRequest& request);

                /**
                 *获取各个模块具体的规格限制
                 * @param req DescribeRuleLimitRequest
                 * @return DescribeRuleLimitOutcome
                 */
                DescribeRuleLimitOutcome DescribeRuleLimit(const Model::DescribeRuleLimitRequest &request);
                void DescribeRuleLimitAsync(const Model::DescribeRuleLimitRequest& request, const DescribeRuleLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleLimitOutcomeCallable DescribeRuleLimitCallable(const Model::DescribeRuleLimitRequest& request);

                /**
                 *查询扫描ip
                 * @param req DescribeScanIpRequest
                 * @return DescribeScanIpOutcome
                 */
                DescribeScanIpOutcome DescribeScanIp(const Model::DescribeScanIpRequest &request);
                void DescribeScanIpAsync(const Model::DescribeScanIpRequest& request, const DescribeScanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanIpOutcomeCallable DescribeScanIpCallable(const Model::DescribeScanIpRequest& request);

                /**
                 *Waf 会话定义查询接口
                 * @param req DescribeSessionRequest
                 * @return DescribeSessionOutcome
                 */
                DescribeSessionOutcome DescribeSession(const Model::DescribeSessionRequest &request);
                void DescribeSessionAsync(const Model::DescribeSessionRequest& request, const DescribeSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionOutcomeCallable DescribeSessionCallable(const Model::DescribeSessionRequest& request);

                /**
                 *waf斯巴达-获取防护域名信息
                 * @param req DescribeSpartaProtectionInfoRequest
                 * @return DescribeSpartaProtectionInfoOutcome
                 */
                DescribeSpartaProtectionInfoOutcome DescribeSpartaProtectionInfo(const Model::DescribeSpartaProtectionInfoRequest &request);
                void DescribeSpartaProtectionInfoAsync(const Model::DescribeSpartaProtectionInfoRequest& request, const DescribeSpartaProtectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpartaProtectionInfoOutcomeCallable DescribeSpartaProtectionInfoCallable(const Model::DescribeSpartaProtectionInfoRequest& request);

                /**
                 *查询SaaS型WAF支持的TLS版本
                 * @param req DescribeTlsVersionRequest
                 * @return DescribeTlsVersionOutcome
                 */
                DescribeTlsVersionOutcome DescribeTlsVersion(const Model::DescribeTlsVersionRequest &request);
                void DescribeTlsVersionAsync(const Model::DescribeTlsVersionRequest& request, const DescribeTlsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTlsVersionOutcomeCallable DescribeTlsVersionCallable(const Model::DescribeTlsVersionRequest& request);

                /**
                 *查询Top5的攻击域名
                 * @param req DescribeTopAttackDomainRequest
                 * @return DescribeTopAttackDomainOutcome
                 */
                DescribeTopAttackDomainOutcome DescribeTopAttackDomain(const Model::DescribeTopAttackDomainRequest &request);
                void DescribeTopAttackDomainAsync(const Model::DescribeTopAttackDomainRequest& request, const DescribeTopAttackDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopAttackDomainOutcomeCallable DescribeTopAttackDomainCallable(const Model::DescribeTopAttackDomainRequest& request);

                /**
                 *在CDC场景下，负载均衡型WAF的添加、编辑域名配置的时候，需要展示CDC负载均衡型WAF（cdc-clb-waf)支持的地域列表，通过DescribeUserCdcClbWafRegions既可以获得当前对客户已经开放的地域列表
                 * @param req DescribeUserCdcClbWafRegionsRequest
                 * @return DescribeUserCdcClbWafRegionsOutcome
                 */
                DescribeUserCdcClbWafRegionsOutcome DescribeUserCdcClbWafRegions(const Model::DescribeUserCdcClbWafRegionsRequest &request);
                void DescribeUserCdcClbWafRegionsAsync(const Model::DescribeUserCdcClbWafRegionsRequest& request, const DescribeUserCdcClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCdcClbWafRegionsOutcomeCallable DescribeUserCdcClbWafRegionsCallable(const Model::DescribeUserCdcClbWafRegionsRequest& request);

                /**
                 *在负载均衡型WAF的添加、编辑域名配置的时候，需要展示负载均衡型WAF（clb-waf)支持的地域列表，通过DescribeUserClbWafRegions既可以获得当前对客户已经开放的地域列表
                 * @param req DescribeUserClbWafRegionsRequest
                 * @return DescribeUserClbWafRegionsOutcome
                 */
                DescribeUserClbWafRegionsOutcome DescribeUserClbWafRegions(const Model::DescribeUserClbWafRegionsRequest &request);
                void DescribeUserClbWafRegionsAsync(const Model::DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserClbWafRegionsOutcomeCallable DescribeUserClbWafRegionsCallable(const Model::DescribeUserClbWafRegionsRequest& request);

                /**
                 *查询saas和clb的域名信息
                 * @param req DescribeUserDomainInfoRequest
                 * @return DescribeUserDomainInfoOutcome
                 */
                DescribeUserDomainInfoOutcome DescribeUserDomainInfo(const Model::DescribeUserDomainInfoRequest &request);
                void DescribeUserDomainInfoAsync(const Model::DescribeUserDomainInfoRequest& request, const DescribeUserDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDomainInfoOutcomeCallable DescribeUserDomainInfoCallable(const Model::DescribeUserDomainInfoRequest& request);

                /**
                 *获取用户防护规则等级
                 * @param req DescribeUserLevelRequest
                 * @return DescribeUserLevelOutcome
                 */
                DescribeUserLevelOutcome DescribeUserLevel(const Model::DescribeUserLevelRequest &request);
                void DescribeUserLevelAsync(const Model::DescribeUserLevelRequest& request, const DescribeUserLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserLevelOutcomeCallable DescribeUserLevelCallable(const Model::DescribeUserLevelRequest& request);

                /**
                 *查询Tiga引擎规则类型及状态
                 * @param req DescribeUserSignatureClassRequest
                 * @return DescribeUserSignatureClassOutcome
                 */
                DescribeUserSignatureClassOutcome DescribeUserSignatureClass(const Model::DescribeUserSignatureClassRequest &request);
                void DescribeUserSignatureClassAsync(const Model::DescribeUserSignatureClassRequest& request, const DescribeUserSignatureClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSignatureClassOutcomeCallable DescribeUserSignatureClassCallable(const Model::DescribeUserSignatureClassRequest& request);

                /**
                 *获取用户特征规则列表
                 * @param req DescribeUserSignatureRuleRequest
                 * @return DescribeUserSignatureRuleOutcome
                 */
                DescribeUserSignatureRuleOutcome DescribeUserSignatureRule(const Model::DescribeUserSignatureRuleRequest &request);
                void DescribeUserSignatureRuleAsync(const Model::DescribeUserSignatureRuleRequest& request, const DescribeUserSignatureRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSignatureRuleOutcomeCallable DescribeUserSignatureRuleCallable(const Model::DescribeUserSignatureRuleRequest& request);

                /**
                 *获取用户特征规则列表
                 * @param req DescribeUserSignatureRuleV2Request
                 * @return DescribeUserSignatureRuleV2Outcome
                 */
                DescribeUserSignatureRuleV2Outcome DescribeUserSignatureRuleV2(const Model::DescribeUserSignatureRuleV2Request &request);
                void DescribeUserSignatureRuleV2Async(const Model::DescribeUserSignatureRuleV2Request& request, const DescribeUserSignatureRuleV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSignatureRuleV2OutcomeCallable DescribeUserSignatureRuleV2Callable(const Model::DescribeUserSignatureRuleV2Request& request);

                /**
                 *根据过滤条件查询VIP信息
                 * @param req DescribeVipInfoRequest
                 * @return DescribeVipInfoOutcome
                 */
                DescribeVipInfoOutcome DescribeVipInfo(const Model::DescribeVipInfoRequest &request);
                void DescribeVipInfoAsync(const Model::DescribeVipInfoRequest& request, const DescribeVipInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVipInfoOutcomeCallable DescribeVipInfoCallable(const Model::DescribeVipInfoRequest& request);

                /**
                 *返回ip惩罚规则详细信息
                 * @param req DescribeWafAutoDenyRulesRequest
                 * @return DescribeWafAutoDenyRulesOutcome
                 */
                DescribeWafAutoDenyRulesOutcome DescribeWafAutoDenyRules(const Model::DescribeWafAutoDenyRulesRequest &request);
                void DescribeWafAutoDenyRulesAsync(const Model::DescribeWafAutoDenyRulesRequest& request, const DescribeWafAutoDenyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafAutoDenyRulesOutcomeCallable DescribeWafAutoDenyRulesCallable(const Model::DescribeWafAutoDenyRulesRequest& request);

                /**
                 *废弃接口

描述WAF自动封禁模块详情
                 * @param req DescribeWafAutoDenyStatusRequest
                 * @return DescribeWafAutoDenyStatusOutcome
                 */
                DescribeWafAutoDenyStatusOutcome DescribeWafAutoDenyStatus(const Model::DescribeWafAutoDenyStatusRequest &request);
                void DescribeWafAutoDenyStatusAsync(const Model::DescribeWafAutoDenyStatusRequest& request, const DescribeWafAutoDenyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafAutoDenyStatusOutcomeCallable DescribeWafAutoDenyStatusCallable(const Model::DescribeWafAutoDenyStatusRequest& request);

                /**
                 *描述WAF威胁情报封禁模块配置详情
                 * @param req DescribeWafThreatenIntelligenceRequest
                 * @return DescribeWafThreatenIntelligenceOutcome
                 */
                DescribeWafThreatenIntelligenceOutcome DescribeWafThreatenIntelligence(const Model::DescribeWafThreatenIntelligenceRequest &request);
                void DescribeWafThreatenIntelligenceAsync(const Model::DescribeWafThreatenIntelligenceRequest& request, const DescribeWafThreatenIntelligenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafThreatenIntelligenceOutcomeCallable DescribeWafThreatenIntelligenceCallable(const Model::DescribeWafThreatenIntelligenceRequest& request);

                /**
                 *获取域名的webshell状态
                 * @param req DescribeWebshellStatusRequest
                 * @return DescribeWebshellStatusOutcome
                 */
                DescribeWebshellStatusOutcome DescribeWebshellStatus(const Model::DescribeWebshellStatusRequest &request);
                void DescribeWebshellStatusAsync(const Model::DescribeWebshellStatusRequest& request, const DescribeWebshellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebshellStatusOutcomeCallable DescribeWebshellStatusCallable(const Model::DescribeWebshellStatusRequest& request);

                /**
                 *销毁CKafka投递流任务
                 * @param req DestroyPostCKafkaFlowRequest
                 * @return DestroyPostCKafkaFlowOutcome
                 */
                DestroyPostCKafkaFlowOutcome DestroyPostCKafkaFlow(const Model::DestroyPostCKafkaFlowRequest &request);
                void DestroyPostCKafkaFlowAsync(const Model::DestroyPostCKafkaFlowRequest& request, const DestroyPostCKafkaFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPostCKafkaFlowOutcomeCallable DestroyPostCKafkaFlowCallable(const Model::DestroyPostCKafkaFlowRequest& request);

                /**
                 *销毁CLS投递流任务
                 * @param req DestroyPostCLSFlowRequest
                 * @return DestroyPostCLSFlowOutcome
                 */
                DestroyPostCLSFlowOutcome DestroyPostCLSFlow(const Model::DestroyPostCLSFlowRequest &request);
                void DestroyPostCLSFlowAsync(const Model::DestroyPostCLSFlowRequest& request, const DestroyPostCLSFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPostCLSFlowOutcomeCallable DestroyPostCLSFlowCallable(const Model::DestroyPostCLSFlowRequest& request);

                /**
                 *刷新防篡改url
                 * @param req FreshAntiFakeUrlRequest
                 * @return FreshAntiFakeUrlOutcome
                 */
                FreshAntiFakeUrlOutcome FreshAntiFakeUrl(const Model::FreshAntiFakeUrlRequest &request);
                void FreshAntiFakeUrlAsync(const Model::FreshAntiFakeUrlRequest& request, const FreshAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreshAntiFakeUrlOutcomeCallable FreshAntiFakeUrlCallable(const Model::FreshAntiFakeUrlRequest& request);

                /**
                 *计费资源购买、续费下单接口
                 * @param req GenerateDealsAndPayNewRequest
                 * @return GenerateDealsAndPayNewOutcome
                 */
                GenerateDealsAndPayNewOutcome GenerateDealsAndPayNew(const Model::GenerateDealsAndPayNewRequest &request);
                void GenerateDealsAndPayNewAsync(const Model::GenerateDealsAndPayNewRequest& request, const GenerateDealsAndPayNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateDealsAndPayNewOutcomeCallable GenerateDealsAndPayNewCallable(const Model::GenerateDealsAndPayNewRequest& request);

                /**
                 *查询下载攻击日志任务记录列表
                 * @param req GetAttackDownloadRecordsRequest
                 * @return GetAttackDownloadRecordsOutcome
                 */
                GetAttackDownloadRecordsOutcome GetAttackDownloadRecords(const Model::GetAttackDownloadRecordsRequest &request);
                void GetAttackDownloadRecordsAsync(const Model::GetAttackDownloadRecordsRequest& request, const GetAttackDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttackDownloadRecordsOutcomeCallable GetAttackDownloadRecordsCallable(const Model::GetAttackDownloadRecordsRequest& request);

                /**
                 *生成攻击日志的产生时间柱状图
                 * @param req GetAttackHistogramRequest
                 * @return GetAttackHistogramOutcome
                 */
                GetAttackHistogramOutcome GetAttackHistogram(const Model::GetAttackHistogramRequest &request);
                void GetAttackHistogramAsync(const Model::GetAttackHistogramRequest& request, const GetAttackHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttackHistogramOutcomeCallable GetAttackHistogramCallable(const Model::GetAttackHistogramRequest& request);

                /**
                 *按照条件查询展示攻击总次数
                 * @param req GetAttackTotalCountRequest
                 * @return GetAttackTotalCountOutcome
                 */
                GetAttackTotalCountOutcome GetAttackTotalCount(const Model::GetAttackTotalCountRequest &request);
                void GetAttackTotalCountAsync(const Model::GetAttackTotalCountRequest& request, const GetAttackTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttackTotalCountOutcomeCallable GetAttackTotalCountCallable(const Model::GetAttackTotalCountRequest& request);

                /**
                 *获取套餐实例的弹性qps上限
                 * @param req GetInstanceQpsLimitRequest
                 * @return GetInstanceQpsLimitOutcome
                 */
                GetInstanceQpsLimitOutcome GetInstanceQpsLimit(const Model::GetInstanceQpsLimitRequest &request);
                void GetInstanceQpsLimitAsync(const Model::GetInstanceQpsLimitRequest& request, const GetInstanceQpsLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceQpsLimitOutcomeCallable GetInstanceQpsLimitCallable(const Model::GetInstanceQpsLimitRequest& request);

                /**
                 *导入IP黑白名单
                 * @param req ImportIpAccessControlRequest
                 * @return ImportIpAccessControlOutcome
                 */
                ImportIpAccessControlOutcome ImportIpAccessControl(const Model::ImportIpAccessControlRequest &request);
                void ImportIpAccessControlAsync(const Model::ImportIpAccessControlRequest& request, const ImportIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportIpAccessControlOutcomeCallable ImportIpAccessControlCallable(const Model::ImportIpAccessControlRequest& request);

                /**
                 *编辑防篡改url
                 * @param req ModifyAntiFakeUrlRequest
                 * @return ModifyAntiFakeUrlOutcome
                 */
                ModifyAntiFakeUrlOutcome ModifyAntiFakeUrl(const Model::ModifyAntiFakeUrlRequest &request);
                void ModifyAntiFakeUrlAsync(const Model::ModifyAntiFakeUrlRequest& request, const ModifyAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiFakeUrlOutcomeCallable ModifyAntiFakeUrlCallable(const Model::ModifyAntiFakeUrlRequest& request);

                /**
                 *切换防篡改开关
                 * @param req ModifyAntiFakeUrlStatusRequest
                 * @return ModifyAntiFakeUrlStatusOutcome
                 */
                ModifyAntiFakeUrlStatusOutcome ModifyAntiFakeUrlStatus(const Model::ModifyAntiFakeUrlStatusRequest &request);
                void ModifyAntiFakeUrlStatusAsync(const Model::ModifyAntiFakeUrlStatusRequest& request, const ModifyAntiFakeUrlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiFakeUrlStatusOutcomeCallable ModifyAntiFakeUrlStatusCallable(const Model::ModifyAntiFakeUrlStatusRequest& request);

                /**
                 *信息防泄漏切换规则开关
                 * @param req ModifyAntiInfoLeakRuleStatusRequest
                 * @return ModifyAntiInfoLeakRuleStatusOutcome
                 */
                ModifyAntiInfoLeakRuleStatusOutcome ModifyAntiInfoLeakRuleStatus(const Model::ModifyAntiInfoLeakRuleStatusRequest &request);
                void ModifyAntiInfoLeakRuleStatusAsync(const Model::ModifyAntiInfoLeakRuleStatusRequest& request, const ModifyAntiInfoLeakRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiInfoLeakRuleStatusOutcomeCallable ModifyAntiInfoLeakRuleStatusCallable(const Model::ModifyAntiInfoLeakRuleStatusRequest& request);

                /**
                 *编辑信息防泄漏规则
                 * @param req ModifyAntiInfoLeakRulesRequest
                 * @return ModifyAntiInfoLeakRulesOutcome
                 */
                ModifyAntiInfoLeakRulesOutcome ModifyAntiInfoLeakRules(const Model::ModifyAntiInfoLeakRulesRequest &request);
                void ModifyAntiInfoLeakRulesAsync(const Model::ModifyAntiInfoLeakRulesRequest& request, const ModifyAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiInfoLeakRulesOutcomeCallable ModifyAntiInfoLeakRulesCallable(const Model::ModifyAntiInfoLeakRulesRequest& request);

                /**
                 *api分析页面开关
                 * @param req ModifyApiAnalyzeStatusRequest
                 * @return ModifyApiAnalyzeStatusOutcome
                 */
                ModifyApiAnalyzeStatusOutcome ModifyApiAnalyzeStatus(const Model::ModifyApiAnalyzeStatusRequest &request);
                void ModifyApiAnalyzeStatusAsync(const Model::ModifyApiAnalyzeStatusRequest& request, const ModifyApiAnalyzeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiAnalyzeStatusOutcomeCallable ModifyApiAnalyzeStatusCallable(const Model::ModifyApiAnalyzeStatusRequest& request);

                /**
                 *api安全状态变更接口
                 * @param req ModifyApiSecEventChangeRequest
                 * @return ModifyApiSecEventChangeOutcome
                 */
                ModifyApiSecEventChangeOutcome ModifyApiSecEventChange(const Model::ModifyApiSecEventChangeRequest &request);
                void ModifyApiSecEventChangeAsync(const Model::ModifyApiSecEventChangeRequest& request, const ModifyApiSecEventChangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiSecEventChangeOutcomeCallable ModifyApiSecEventChangeCallable(const Model::ModifyApiSecEventChangeRequest& request);

                /**
                 *修改地域封禁中的地域信息
                 * @param req ModifyAreaBanAreasRequest
                 * @return ModifyAreaBanAreasOutcome
                 */
                ModifyAreaBanAreasOutcome ModifyAreaBanAreas(const Model::ModifyAreaBanAreasRequest &request);
                void ModifyAreaBanAreasAsync(const Model::ModifyAreaBanAreasRequest& request, const ModifyAreaBanAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAreaBanAreasOutcomeCallable ModifyAreaBanAreasCallable(const Model::ModifyAreaBanAreasRequest& request);

                /**
                 *添加（编辑）地域封禁中的地域信息
                 * @param req ModifyAreaBanRuleRequest
                 * @return ModifyAreaBanRuleOutcome
                 */
                ModifyAreaBanRuleOutcome ModifyAreaBanRule(const Model::ModifyAreaBanRuleRequest &request);
                void ModifyAreaBanRuleAsync(const Model::ModifyAreaBanRuleRequest& request, const ModifyAreaBanRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAreaBanRuleOutcomeCallable ModifyAreaBanRuleCallable(const Model::ModifyAreaBanRuleRequest& request);

                /**
                 *修改防护域名的地域封禁状态
                 * @param req ModifyAreaBanStatusRequest
                 * @return ModifyAreaBanStatusOutcome
                 */
                ModifyAreaBanStatusOutcome ModifyAreaBanStatus(const Model::ModifyAreaBanStatusRequest &request);
                void ModifyAreaBanStatusAsync(const Model::ModifyAreaBanStatusRequest& request, const ModifyAreaBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAreaBanStatusOutcomeCallable ModifyAreaBanStatusCallable(const Model::ModifyAreaBanStatusRequest& request);

                /**
                 *供用户控制台调用，修改Tiga规则引擎白名单。
                 * @param req ModifyAttackWhiteRuleRequest
                 * @return ModifyAttackWhiteRuleOutcome
                 */
                ModifyAttackWhiteRuleOutcome ModifyAttackWhiteRule(const Model::ModifyAttackWhiteRuleRequest &request);
                void ModifyAttackWhiteRuleAsync(const Model::ModifyAttackWhiteRuleRequest& request, const ModifyAttackWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAttackWhiteRuleOutcomeCallable ModifyAttackWhiteRuleCallable(const Model::ModifyAttackWhiteRuleRequest& request);

                /**
                 *bot子场景开关
                 * @param req ModifyBotSceneStatusRequest
                 * @return ModifyBotSceneStatusOutcome
                 */
                ModifyBotSceneStatusOutcome ModifyBotSceneStatus(const Model::ModifyBotSceneStatusRequest &request);
                void ModifyBotSceneStatusAsync(const Model::ModifyBotSceneStatusRequest& request, const ModifyBotSceneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBotSceneStatusOutcomeCallable ModifyBotSceneStatusCallable(const Model::ModifyBotSceneStatusRequest& request);

                /**
                 *【接口复用】场景化后更新Bot的UCB自定义规则，两个调用位置：1.BOT全局白名单 2.BOT场景配置
                 * @param req ModifyBotSceneUCBRuleRequest
                 * @return ModifyBotSceneUCBRuleOutcome
                 */
                ModifyBotSceneUCBRuleOutcome ModifyBotSceneUCBRule(const Model::ModifyBotSceneUCBRuleRequest &request);
                void ModifyBotSceneUCBRuleAsync(const Model::ModifyBotSceneUCBRuleRequest& request, const ModifyBotSceneUCBRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBotSceneUCBRuleOutcomeCallable ModifyBotSceneUCBRuleCallable(const Model::ModifyBotSceneUCBRuleRequest& request);

                /**
                 *Bot_V2 bot总开关更新
                 * @param req ModifyBotStatusRequest
                 * @return ModifyBotStatusOutcome
                 */
                ModifyBotStatusOutcome ModifyBotStatus(const Model::ModifyBotStatusRequest &request);
                void ModifyBotStatusAsync(const Model::ModifyBotStatusRequest& request, const ModifyBotStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBotStatusOutcomeCallable ModifyBotStatusCallable(const Model::ModifyBotStatusRequest& request);

                /**
                 *编辑自定义规则
                 * @param req ModifyCustomRuleRequest
                 * @return ModifyCustomRuleOutcome
                 */
                ModifyCustomRuleOutcome ModifyCustomRule(const Model::ModifyCustomRuleRequest &request);
                void ModifyCustomRuleAsync(const Model::ModifyCustomRuleRequest& request, const ModifyCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomRuleOutcomeCallable ModifyCustomRuleCallable(const Model::ModifyCustomRuleRequest& request);

                /**
                 *开启或禁用访问控制（自定义策略）
                 * @param req ModifyCustomRuleStatusRequest
                 * @return ModifyCustomRuleStatusOutcome
                 */
                ModifyCustomRuleStatusOutcome ModifyCustomRuleStatus(const Model::ModifyCustomRuleStatusRequest &request);
                void ModifyCustomRuleStatusAsync(const Model::ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomRuleStatusOutcomeCallable ModifyCustomRuleStatusCallable(const Model::ModifyCustomRuleStatusRequest& request);

                /**
                 *编辑精准白名单
                 * @param req ModifyCustomWhiteRuleRequest
                 * @return ModifyCustomWhiteRuleOutcome
                 */
                ModifyCustomWhiteRuleOutcome ModifyCustomWhiteRule(const Model::ModifyCustomWhiteRuleRequest &request);
                void ModifyCustomWhiteRuleAsync(const Model::ModifyCustomWhiteRuleRequest& request, const ModifyCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomWhiteRuleOutcomeCallable ModifyCustomWhiteRuleCallable(const Model::ModifyCustomWhiteRuleRequest& request);

                /**
                 *开启或禁用精准白名单
                 * @param req ModifyCustomWhiteRuleStatusRequest
                 * @return ModifyCustomWhiteRuleStatusOutcome
                 */
                ModifyCustomWhiteRuleStatusOutcome ModifyCustomWhiteRuleStatus(const Model::ModifyCustomWhiteRuleStatusRequest &request);
                void ModifyCustomWhiteRuleStatusAsync(const Model::ModifyCustomWhiteRuleStatusRequest& request, const ModifyCustomWhiteRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomWhiteRuleStatusOutcomeCallable ModifyCustomWhiteRuleStatusCallable(const Model::ModifyCustomWhiteRuleStatusRequest& request);

                /**
                 *切换ipv6开关
                 * @param req ModifyDomainIpv6StatusRequest
                 * @return ModifyDomainIpv6StatusOutcome
                 */
                ModifyDomainIpv6StatusOutcome ModifyDomainIpv6Status(const Model::ModifyDomainIpv6StatusRequest &request);
                void ModifyDomainIpv6StatusAsync(const Model::ModifyDomainIpv6StatusRequest& request, const ModifyDomainIpv6StatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainIpv6StatusOutcomeCallable ModifyDomainIpv6StatusCallable(const Model::ModifyDomainIpv6StatusRequest& request);

                /**
                 *修改域名投递状态
                 * @param req ModifyDomainPostActionRequest
                 * @return ModifyDomainPostActionOutcome
                 */
                ModifyDomainPostActionOutcome ModifyDomainPostAction(const Model::ModifyDomainPostActionRequest &request);
                void ModifyDomainPostActionAsync(const Model::ModifyDomainPostActionRequest& request, const ModifyDomainPostActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainPostActionOutcomeCallable ModifyDomainPostActionCallable(const Model::ModifyDomainPostActionRequest& request);

                /**
                 *更改某一条规则
                 * @param req ModifyDomainWhiteRuleRequest
                 * @return ModifyDomainWhiteRuleOutcome
                 */
                ModifyDomainWhiteRuleOutcome ModifyDomainWhiteRule(const Model::ModifyDomainWhiteRuleRequest &request);
                void ModifyDomainWhiteRuleAsync(const Model::ModifyDomainWhiteRuleRequest& request, const ModifyDomainWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainWhiteRuleOutcomeCallable ModifyDomainWhiteRuleCallable(const Model::ModifyDomainWhiteRuleRequest& request);

                /**
                 *修改域名列表的访问日志开关
                 * @param req ModifyDomainsCLSStatusRequest
                 * @return ModifyDomainsCLSStatusOutcome
                 */
                ModifyDomainsCLSStatusOutcome ModifyDomainsCLSStatus(const Model::ModifyDomainsCLSStatusRequest &request);
                void ModifyDomainsCLSStatusAsync(const Model::ModifyDomainsCLSStatusRequest& request, const ModifyDomainsCLSStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainsCLSStatusOutcomeCallable ModifyDomainsCLSStatusCallable(const Model::ModifyDomainsCLSStatusRequest& request);

                /**
                 *提供给clb等使用的waf实例下单接口，目前只支持clb旗舰版实例的下单，该接口会进行入参校验，然后调用是否为收购用户，然后调用计费接口下单。目前只支持预付费下单，计费侧接口：https://tcb.woa.com/magical-brush/docs/754661947
                 * @param req ModifyGenerateDealsRequest
                 * @return ModifyGenerateDealsOutcome
                 */
                ModifyGenerateDealsOutcome ModifyGenerateDeals(const Model::ModifyGenerateDealsRequest &request);
                void ModifyGenerateDealsAsync(const Model::ModifyGenerateDealsRequest& request, const ModifyGenerateDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGenerateDealsOutcomeCallable ModifyGenerateDealsCallable(const Model::ModifyGenerateDealsRequest& request);

                /**
                 *编辑负载均衡型WAF防护域名配置
                 * @param req ModifyHostRequest
                 * @return ModifyHostOutcome
                 */
                ModifyHostOutcome ModifyHost(const Model::ModifyHostRequest &request);
                void ModifyHostAsync(const Model::ModifyHostRequest& request, const ModifyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostOutcomeCallable ModifyHostCallable(const Model::ModifyHostRequest& request);

                /**
                 *设置负载均衡型WAF防护域名的流量模式，切换镜像模式和清洗模式
                 * @param req ModifyHostFlowModeRequest
                 * @return ModifyHostFlowModeOutcome
                 */
                ModifyHostFlowModeOutcome ModifyHostFlowMode(const Model::ModifyHostFlowModeRequest &request);
                void ModifyHostFlowModeAsync(const Model::ModifyHostFlowModeRequest& request, const ModifyHostFlowModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostFlowModeOutcomeCallable ModifyHostFlowModeCallable(const Model::ModifyHostFlowModeRequest& request);

                /**
                 *clb-waf设置防护域名防护状态
                 * @param req ModifyHostModeRequest
                 * @return ModifyHostModeOutcome
                 */
                ModifyHostModeOutcome ModifyHostMode(const Model::ModifyHostModeRequest &request);
                void ModifyHostModeAsync(const Model::ModifyHostModeRequest& request, const ModifyHostModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostModeOutcomeCallable ModifyHostModeCallable(const Model::ModifyHostModeRequest& request);

                /**
                 *clb-waf 设置防护域名WAF开关
支持批量操作。
                 * @param req ModifyHostStatusRequest
                 * @return ModifyHostStatusOutcome
                 */
                ModifyHostStatusOutcome ModifyHostStatus(const Model::ModifyHostStatusRequest &request);
                void ModifyHostStatusAsync(const Model::ModifyHostStatusRequest& request, const ModifyHostStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostStatusOutcomeCallable ModifyHostStatusCallable(const Model::ModifyHostStatusRequest& request);

                /**
                 *修改实例攻击日志投递开关，企业版及以上版本可以开通，否则返回错误
                 * @param req ModifyInstanceAttackLogPostRequest
                 * @return ModifyInstanceAttackLogPostOutcome
                 */
                ModifyInstanceAttackLogPostOutcome ModifyInstanceAttackLogPost(const Model::ModifyInstanceAttackLogPostRequest &request);
                void ModifyInstanceAttackLogPostAsync(const Model::ModifyInstanceAttackLogPostRequest& request, const ModifyInstanceAttackLogPostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAttackLogPostOutcomeCallable ModifyInstanceAttackLogPostCallable(const Model::ModifyInstanceAttackLogPostRequest& request);

                /**
                 *修改实例的QPS弹性计费开关
                 * @param req ModifyInstanceElasticModeRequest
                 * @return ModifyInstanceElasticModeOutcome
                 */
                ModifyInstanceElasticModeOutcome ModifyInstanceElasticMode(const Model::ModifyInstanceElasticModeRequest &request);
                void ModifyInstanceElasticModeAsync(const Model::ModifyInstanceElasticModeRequest& request, const ModifyInstanceElasticModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceElasticModeOutcomeCallable ModifyInstanceElasticModeCallable(const Model::ModifyInstanceElasticModeRequest& request);

                /**
                 *修改实例的名称
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

                /**
                 *设置套餐实例的弹性qps上限
                 * @param req ModifyInstanceQpsLimitRequest
                 * @return ModifyInstanceQpsLimitOutcome
                 */
                ModifyInstanceQpsLimitOutcome ModifyInstanceQpsLimit(const Model::ModifyInstanceQpsLimitRequest &request);
                void ModifyInstanceQpsLimitAsync(const Model::ModifyInstanceQpsLimitRequest& request, const ModifyInstanceQpsLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceQpsLimitOutcomeCallable ModifyInstanceQpsLimitCallable(const Model::ModifyInstanceQpsLimitRequest& request);

                /**
                 *修改实例的自动续费开关
                 * @param req ModifyInstanceRenewFlagRequest
                 * @return ModifyInstanceRenewFlagOutcome
                 */
                ModifyInstanceRenewFlagOutcome ModifyInstanceRenewFlag(const Model::ModifyInstanceRenewFlagRequest &request);
                void ModifyInstanceRenewFlagAsync(const Model::ModifyInstanceRenewFlagRequest& request, const ModifyInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceRenewFlagOutcomeCallable ModifyInstanceRenewFlagCallable(const Model::ModifyInstanceRenewFlagRequest& request);

                /**
                 *Waf IP黑白名单编辑接口
                 * @param req ModifyIpAccessControlRequest
                 * @return ModifyIpAccessControlOutcome
                 */
                ModifyIpAccessControlOutcome ModifyIpAccessControl(const Model::ModifyIpAccessControlRequest &request);
                void ModifyIpAccessControlAsync(const Model::ModifyIpAccessControlRequest& request, const ModifyIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIpAccessControlOutcomeCallable ModifyIpAccessControlCallable(const Model::ModifyIpAccessControlRequest& request);

                /**
                 *设置某个domain下基础安全模块的开关
                 * @param req ModifyModuleStatusRequest
                 * @return ModifyModuleStatusOutcome
                 */
                ModifyModuleStatusOutcome ModifyModuleStatus(const Model::ModifyModuleStatusRequest &request);
                void ModifyModuleStatusAsync(const Model::ModifyModuleStatusRequest& request, const ModifyModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleStatusOutcomeCallable ModifyModuleStatusCallable(const Model::ModifyModuleStatusRequest& request);

                /**
                 *修改防护对象
                 * @param req ModifyObjectRequest
                 * @return ModifyObjectOutcome
                 */
                ModifyObjectOutcome ModifyObject(const Model::ModifyObjectRequest &request);
                void ModifyObjectAsync(const Model::ModifyObjectRequest& request, const ModifyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyObjectOutcomeCallable ModifyObjectCallable(const Model::ModifyObjectRequest& request);

                /**
                 *开启、关闭WAF开关
                 * @param req ModifyProtectionStatusRequest
                 * @return ModifyProtectionStatusOutcome
                 */
                ModifyProtectionStatusOutcome ModifyProtectionStatus(const Model::ModifyProtectionStatusRequest &request);
                void ModifyProtectionStatusAsync(const Model::ModifyProtectionStatusRequest& request, const ModifyProtectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectionStatusOutcomeCallable ModifyProtectionStatusCallable(const Model::ModifyProtectionStatusRequest& request);

                /**
                 *编辑SaaS型WAF域名配置
                 * @param req ModifySpartaProtectionRequest
                 * @return ModifySpartaProtectionOutcome
                 */
                ModifySpartaProtectionOutcome ModifySpartaProtection(const Model::ModifySpartaProtectionRequest &request);
                void ModifySpartaProtectionAsync(const Model::ModifySpartaProtectionRequest& request, const ModifySpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpartaProtectionOutcomeCallable ModifySpartaProtectionCallable(const Model::ModifySpartaProtectionRequest& request);

                /**
                 *设置waf防护状态
                 * @param req ModifySpartaProtectionModeRequest
                 * @return ModifySpartaProtectionModeOutcome
                 */
                ModifySpartaProtectionModeOutcome ModifySpartaProtectionMode(const Model::ModifySpartaProtectionModeRequest &request);
                void ModifySpartaProtectionModeAsync(const Model::ModifySpartaProtectionModeRequest& request, const ModifySpartaProtectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpartaProtectionModeOutcomeCallable ModifySpartaProtectionModeCallable(const Model::ModifySpartaProtectionModeRequest& request);

                /**
                 *修改用户防护规则等级
                 * @param req ModifyUserLevelRequest
                 * @return ModifyUserLevelOutcome
                 */
                ModifyUserLevelOutcome ModifyUserLevel(const Model::ModifyUserLevelRequest &request);
                void ModifyUserLevelAsync(const Model::ModifyUserLevelRequest& request, const ModifyUserLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserLevelOutcomeCallable ModifyUserLevelCallable(const Model::ModifyUserLevelRequest& request);

                /**
                 *切换Tiga引擎规则类型的生效开关
                 * @param req ModifyUserSignatureClassRequest
                 * @return ModifyUserSignatureClassOutcome
                 */
                ModifyUserSignatureClassOutcome ModifyUserSignatureClass(const Model::ModifyUserSignatureClassRequest &request);
                void ModifyUserSignatureClassAsync(const Model::ModifyUserSignatureClassRequest& request, const ModifyUserSignatureClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserSignatureClassOutcomeCallable ModifyUserSignatureClassCallable(const Model::ModifyUserSignatureClassRequest& request);

                /**
                 *修改用户防护规则，开启关闭具体的某条规则
                 * @param req ModifyUserSignatureRuleRequest
                 * @return ModifyUserSignatureRuleOutcome
                 */
                ModifyUserSignatureRuleOutcome ModifyUserSignatureRule(const Model::ModifyUserSignatureRuleRequest &request);
                void ModifyUserSignatureRuleAsync(const Model::ModifyUserSignatureRuleRequest& request, const ModifyUserSignatureRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserSignatureRuleOutcomeCallable ModifyUserSignatureRuleCallable(const Model::ModifyUserSignatureRuleRequest& request);

                /**
                 *修改用户防护规则，开启关闭具体的某条规则
                 * @param req ModifyUserSignatureRuleV2Request
                 * @return ModifyUserSignatureRuleV2Outcome
                 */
                ModifyUserSignatureRuleV2Outcome ModifyUserSignatureRuleV2(const Model::ModifyUserSignatureRuleV2Request &request);
                void ModifyUserSignatureRuleV2Async(const Model::ModifyUserSignatureRuleV2Request& request, const ModifyUserSignatureRuleV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserSignatureRuleV2OutcomeCallable ModifyUserSignatureRuleV2Callable(const Model::ModifyUserSignatureRuleV2Request& request);

                /**
                 *修改ip惩罚规则
                 * @param req ModifyWafAutoDenyRulesRequest
                 * @return ModifyWafAutoDenyRulesOutcome
                 */
                ModifyWafAutoDenyRulesOutcome ModifyWafAutoDenyRules(const Model::ModifyWafAutoDenyRulesRequest &request);
                void ModifyWafAutoDenyRulesAsync(const Model::ModifyWafAutoDenyRulesRequest& request, const ModifyWafAutoDenyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWafAutoDenyRulesOutcomeCallable ModifyWafAutoDenyRulesCallable(const Model::ModifyWafAutoDenyRulesRequest& request);

                /**
                 *配置WAF威胁情报封禁模块详情
                 * @param req ModifyWafThreatenIntelligenceRequest
                 * @return ModifyWafThreatenIntelligenceOutcome
                 */
                ModifyWafThreatenIntelligenceOutcome ModifyWafThreatenIntelligence(const Model::ModifyWafThreatenIntelligenceRequest &request);
                void ModifyWafThreatenIntelligenceAsync(const Model::ModifyWafThreatenIntelligenceRequest& request, const ModifyWafThreatenIntelligenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWafThreatenIntelligenceOutcomeCallable ModifyWafThreatenIntelligenceCallable(const Model::ModifyWafThreatenIntelligenceRequest& request);

                /**
                 *设置域名的webshell状态。
                 * @param req ModifyWebshellStatusRequest
                 * @return ModifyWebshellStatusOutcome
                 */
                ModifyWebshellStatusOutcome ModifyWebshellStatus(const Model::ModifyWebshellStatusRequest &request);
                void ModifyWebshellStatusAsync(const Model::ModifyWebshellStatusRequest& request, const ModifyWebshellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebshellStatusOutcomeCallable ModifyWebshellStatusCallable(const Model::ModifyWebshellStatusRequest& request);

                /**
                 *创建搜索下载攻击日志任务，使用CLS新版本的搜索下载getlog接口
                 * @param req PostAttackDownloadTaskRequest
                 * @return PostAttackDownloadTaskOutcome
                 */
                PostAttackDownloadTaskOutcome PostAttackDownloadTask(const Model::PostAttackDownloadTaskRequest &request);
                void PostAttackDownloadTaskAsync(const Model::PostAttackDownloadTaskRequest& request, const PostAttackDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PostAttackDownloadTaskOutcomeCallable PostAttackDownloadTaskCallable(const Model::PostAttackDownloadTaskRequest& request);

                /**
                 *刷新接入检查的结果，后台会生成接入检查任务
                 * @param req RefreshAccessCheckResultRequest
                 * @return RefreshAccessCheckResultOutcome
                 */
                RefreshAccessCheckResultOutcome RefreshAccessCheckResult(const Model::RefreshAccessCheckResultRequest &request);
                void RefreshAccessCheckResultAsync(const Model::RefreshAccessCheckResultRequest& request, const RefreshAccessCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshAccessCheckResultOutcomeCallable RefreshAccessCheckResultCallable(const Model::RefreshAccessCheckResultRequest& request);

                /**
                 *本接口用于搜索WAF访问日志
                 * @param req SearchAccessLogRequest
                 * @return SearchAccessLogOutcome
                 */
                SearchAccessLogOutcome SearchAccessLog(const Model::SearchAccessLogRequest &request);
                void SearchAccessLogAsync(const Model::SearchAccessLogRequest& request, const SearchAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchAccessLogOutcomeCallable SearchAccessLogCallable(const Model::SearchAccessLogRequest& request);

                /**
                 *新版本CLS接口存在参数变化，query改成了query_string支持lucence语法接口搜索查询。
                 * @param req SearchAttackLogRequest
                 * @return SearchAttackLogOutcome
                 */
                SearchAttackLogOutcome SearchAttackLog(const Model::SearchAttackLogRequest &request);
                void SearchAttackLogAsync(const Model::SearchAttackLogRequest& request, const SearchAttackLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchAttackLogOutcomeCallable SearchAttackLogCallable(const Model::SearchAttackLogRequest& request);

                /**
                 *切换域名的规则开关
                 * @param req SwitchDomainRulesRequest
                 * @return SwitchDomainRulesOutcome
                 */
                SwitchDomainRulesOutcome SwitchDomainRules(const Model::SwitchDomainRulesRequest &request);
                void SwitchDomainRulesAsync(const Model::SwitchDomainRulesRequest& request, const SwitchDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDomainRulesOutcomeCallable SwitchDomainRulesCallable(const Model::SwitchDomainRulesRequest& request);

                /**
                 *切换弹性的开关
                 * @param req SwitchElasticModeRequest
                 * @return SwitchElasticModeOutcome
                 */
                SwitchElasticModeOutcome SwitchElasticMode(const Model::SwitchElasticModeRequest &request);
                void SwitchElasticModeAsync(const Model::SwitchElasticModeRequest& request, const SwitchElasticModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchElasticModeOutcomeCallable SwitchElasticModeCallable(const Model::SwitchElasticModeRequest& request);

                /**
                 *更新Tiga引擎下大类规则的防护模式
                 * @param req UpdateProtectionModesRequest
                 * @return UpdateProtectionModesOutcome
                 */
                UpdateProtectionModesOutcome UpdateProtectionModes(const Model::UpdateProtectionModesRequest &request);
                void UpdateProtectionModesAsync(const Model::UpdateProtectionModesRequest& request, const UpdateProtectionModesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProtectionModesOutcomeCallable UpdateProtectionModesCallable(const Model::UpdateProtectionModesRequest& request);

                /**
                 *编辑SAAS型接入的紧急CC防护状态
                 * @param req UpsertCCAutoStatusRequest
                 * @return UpsertCCAutoStatusOutcome
                 */
                UpsertCCAutoStatusOutcome UpsertCCAutoStatus(const Model::UpsertCCAutoStatusRequest &request);
                void UpsertCCAutoStatusAsync(const Model::UpsertCCAutoStatusRequest& request, const UpsertCCAutoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertCCAutoStatusOutcomeCallable UpsertCCAutoStatusCallable(const Model::UpsertCCAutoStatusRequest& request);

                /**
                 *Waf  CC V2 Upsert接口
                 * @param req UpsertCCRuleRequest
                 * @return UpsertCCRuleOutcome
                 */
                UpsertCCRuleOutcome UpsertCCRule(const Model::UpsertCCRuleRequest &request);
                void UpsertCCRuleAsync(const Model::UpsertCCRuleRequest& request, const UpsertCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertCCRuleOutcomeCallable UpsertCCRuleCallable(const Model::UpsertCCRuleRequest& request);

                /**
                 *Waf IP黑白名单Upsert接口（建议使用CreateIpAccessControl、ModifyIpAccessControl来替换当前接口）
                 * @param req UpsertIpAccessControlRequest
                 * @return UpsertIpAccessControlOutcome
                 */
                UpsertIpAccessControlOutcome UpsertIpAccessControl(const Model::UpsertIpAccessControlRequest &request);
                void UpsertIpAccessControlAsync(const Model::UpsertIpAccessControlRequest& request, const UpsertIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertIpAccessControlOutcomeCallable UpsertIpAccessControlCallable(const Model::UpsertIpAccessControlRequest& request);

                /**
                 *Waf  会话定义 Upsert接口
                 * @param req UpsertSessionRequest
                 * @return UpsertSessionOutcome
                 */
                UpsertSessionOutcome UpsertSession(const Model::UpsertSessionRequest &request);
                void UpsertSessionAsync(const Model::UpsertSessionRequest& request, const UpsertSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertSessionOutcomeCallable UpsertSessionCallable(const Model::UpsertSessionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
