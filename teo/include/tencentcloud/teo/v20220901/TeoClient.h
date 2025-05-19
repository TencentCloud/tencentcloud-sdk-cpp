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

#ifndef TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
#define TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/teo/v20220901/model/BindSecurityTemplateToEntityRequest.h>
#include <tencentcloud/teo/v20220901/model/BindSecurityTemplateToEntityResponse.h>
#include <tencentcloud/teo/v20220901/model/BindSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/BindSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/BindZoneToPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/BindZoneToPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/CheckCnameStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/CheckCnameStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateAccelerationDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateAccelerationDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCLSIndexRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCLSIndexResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateConfigGroupVersionRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateConfigGroupVersionResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateContentIdentifierRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateContentIdentifierResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCustomizeErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCustomizeErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateDnsRecordRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateDnsRecordResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateFunctionRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateFunctionResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateFunctionRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateFunctionRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateL7AccRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateL7AccRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateRealtimeLogDeliveryTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/CreateSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteAccelerationDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteAccelerationDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteContentIdentifierRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteContentIdentifierResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteCustomErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteCustomErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteFunctionRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteFunctionResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteFunctionRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteFunctionRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteL7AccRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteL7AccRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRealtimeLogDeliveryTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DeployConfigGroupVersionRequest.h>
#include <tencentcloud/teo/v20220901/model/DeployConfigGroupVersionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAccelerationDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAccelerationDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentIdentifiersRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentIdentifiersResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeCustomErrorPagesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeCustomErrorPagesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDeployHistoryRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDeployHistoryResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeFunctionRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeFunctionRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeFunctionRuntimeEnvironmentRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeFunctionRuntimeEnvironmentResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeFunctionsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeFunctionsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIPRegionRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIPRegionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeL7AccRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeL7AccRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeL7AccSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeL7AccSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLoadBalancerListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLoadBalancerListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupHealthStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupHealthStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginProtectionRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginProtectionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePlansRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePlansResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRealtimeLogDeliveryTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRealtimeLogDeliveryTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupInfoRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupInfoResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityTemplateBindingsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityTemplateBindingsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL4DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL4DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneConfigImportResultRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneConfigImportResultResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesResponse.h>
#include <tencentcloud/teo/v20220901/model/DestroyPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/DestroyPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/ExportZoneConfigRequest.h>
#include <tencentcloud/teo/v20220901/model/ExportZoneConfigResponse.h>
#include <tencentcloud/teo/v20220901/model/HandleFunctionRuntimeEnvironmentRequest.h>
#include <tencentcloud/teo/v20220901/model/HandleFunctionRuntimeEnvironmentResponse.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ImportZoneConfigRequest.h>
#include <tencentcloud/teo/v20220901/model/ImportZoneConfigResponse.h>
#include <tencentcloud/teo/v20220901/model/IncreasePlanQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/IncreasePlanQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainStatusesRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainStatusesResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyContentIdentifierRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyContentIdentifierResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyCustomErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyCustomErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordsStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordsStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyFunctionRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyFunctionResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyFunctionRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyFunctionRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyFunctionRulePriorityRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyFunctionRulePriorityResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL7AccRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL7AccRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL7AccRulePriorityRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL7AccRulePriorityResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL7AccSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL7AccSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancerRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancerResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRealtimeLogDeliveryTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/RenewPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/RenewPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/UpgradePlanRequest.h>
#include <tencentcloud/teo/v20220901/model/UpgradePlanResponse.h>
#include <tencentcloud/teo/v20220901/model/VerifyOwnershipRequest.h>
#include <tencentcloud/teo/v20220901/model/VerifyOwnershipResponse.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            class TeoClient : public AbstractClient
            {
            public:
                TeoClient(const Credential &credential, const std::string &region);
                TeoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindSecurityTemplateToEntityResponse> BindSecurityTemplateToEntityOutcome;
                typedef std::future<BindSecurityTemplateToEntityOutcome> BindSecurityTemplateToEntityOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::BindSecurityTemplateToEntityRequest&, BindSecurityTemplateToEntityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSecurityTemplateToEntityAsyncHandler;
                typedef Outcome<Core::Error, Model::BindSharedCNAMEResponse> BindSharedCNAMEOutcome;
                typedef std::future<BindSharedCNAMEOutcome> BindSharedCNAMEOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::BindSharedCNAMERequest&, BindSharedCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSharedCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::BindZoneToPlanResponse> BindZoneToPlanOutcome;
                typedef std::future<BindZoneToPlanOutcome> BindZoneToPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::BindZoneToPlanRequest&, BindZoneToPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindZoneToPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCnameStatusResponse> CheckCnameStatusOutcome;
                typedef std::future<CheckCnameStatusOutcome> CheckCnameStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CheckCnameStatusRequest&, CheckCnameStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCnameStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccelerationDomainResponse> CreateAccelerationDomainOutcome;
                typedef std::future<CreateAccelerationDomainOutcome> CreateAccelerationDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateAccelerationDomainRequest&, CreateAccelerationDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccelerationDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAliasDomainResponse> CreateAliasDomainOutcome;
                typedef std::future<CreateAliasDomainOutcome> CreateAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateAliasDomainRequest&, CreateAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyResponse> CreateApplicationProxyOutcome;
                typedef std::future<CreateApplicationProxyOutcome> CreateApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRequest&, CreateApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRuleResponse> CreateApplicationProxyRuleOutcome;
                typedef std::future<CreateApplicationProxyRuleOutcome> CreateApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRuleRequest&, CreateApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSIndexResponse> CreateCLSIndexOutcome;
                typedef std::future<CreateCLSIndexOutcome> CreateCLSIndexOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCLSIndexRequest&, CreateCLSIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigGroupVersionResponse> CreateConfigGroupVersionOutcome;
                typedef std::future<CreateConfigGroupVersionOutcome> CreateConfigGroupVersionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateConfigGroupVersionRequest&, CreateConfigGroupVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigGroupVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContentIdentifierResponse> CreateContentIdentifierOutcome;
                typedef std::future<CreateContentIdentifierOutcome> CreateContentIdentifierOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateContentIdentifierRequest&, CreateContentIdentifierOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentIdentifierAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomizeErrorPageResponse> CreateCustomizeErrorPageOutcome;
                typedef std::future<CreateCustomizeErrorPageOutcome> CreateCustomizeErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCustomizeErrorPageRequest&, CreateCustomizeErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomizeErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDnsRecordResponse> CreateDnsRecordOutcome;
                typedef std::future<CreateDnsRecordOutcome> CreateDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateDnsRecordRequest&, CreateDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFunctionResponse> CreateFunctionOutcome;
                typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateFunctionRequest&, CreateFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFunctionRuleResponse> CreateFunctionRuleOutcome;
                typedef std::future<CreateFunctionRuleOutcome> CreateFunctionRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateFunctionRuleRequest&, CreateFunctionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFunctionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4ProxyResponse> CreateL4ProxyOutcome;
                typedef std::future<CreateL4ProxyOutcome> CreateL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateL4ProxyRequest&, CreateL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4ProxyRulesResponse> CreateL4ProxyRulesOutcome;
                typedef std::future<CreateL4ProxyRulesOutcome> CreateL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateL4ProxyRulesRequest&, CreateL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7AccRulesResponse> CreateL7AccRulesOutcome;
                typedef std::future<CreateL7AccRulesOutcome> CreateL7AccRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateL7AccRulesRequest&, CreateL7AccRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7AccRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOriginGroupResponse> CreateOriginGroupOutcome;
                typedef std::future<CreateOriginGroupOutcome> CreateOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateOriginGroupRequest&, CreateOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlanResponse> CreatePlanOutcome;
                typedef std::future<CreatePlanOutcome> CreatePlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePlanRequest&, CreatePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlanForZoneResponse> CreatePlanForZoneOutcome;
                typedef std::future<CreatePlanForZoneOutcome> CreatePlanForZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePlanForZoneRequest&, CreatePlanForZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlanForZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrefetchTaskResponse> CreatePrefetchTaskOutcome;
                typedef std::future<CreatePrefetchTaskOutcome> CreatePrefetchTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePrefetchTaskRequest&, CreatePrefetchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrefetchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePurgeTaskResponse> CreatePurgeTaskOutcome;
                typedef std::future<CreatePurgeTaskOutcome> CreatePurgeTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePurgeTaskRequest&, CreatePurgeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePurgeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRealtimeLogDeliveryTaskResponse> CreateRealtimeLogDeliveryTaskOutcome;
                typedef std::future<CreateRealtimeLogDeliveryTaskOutcome> CreateRealtimeLogDeliveryTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateRealtimeLogDeliveryTaskRequest&, CreateRealtimeLogDeliveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRealtimeLogDeliveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityIPGroupResponse> CreateSecurityIPGroupOutcome;
                typedef std::future<CreateSecurityIPGroupOutcome> CreateSecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateSecurityIPGroupRequest&, CreateSecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSharedCNAMEResponse> CreateSharedCNAMEOutcome;
                typedef std::future<CreateSharedCNAMEOutcome> CreateSharedCNAMEOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateSharedCNAMERequest&, CreateSharedCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSharedCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccelerationDomainsResponse> DeleteAccelerationDomainsOutcome;
                typedef std::future<DeleteAccelerationDomainsOutcome> DeleteAccelerationDomainsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteAccelerationDomainsRequest&, DeleteAccelerationDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccelerationDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAliasDomainResponse> DeleteAliasDomainOutcome;
                typedef std::future<DeleteAliasDomainOutcome> DeleteAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteAliasDomainRequest&, DeleteAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyResponse> DeleteApplicationProxyOutcome;
                typedef std::future<DeleteApplicationProxyOutcome> DeleteApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRequest&, DeleteApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyRuleResponse> DeleteApplicationProxyRuleOutcome;
                typedef std::future<DeleteApplicationProxyRuleOutcome> DeleteApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRuleRequest&, DeleteApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContentIdentifierResponse> DeleteContentIdentifierOutcome;
                typedef std::future<DeleteContentIdentifierOutcome> DeleteContentIdentifierOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteContentIdentifierRequest&, DeleteContentIdentifierOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentIdentifierAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomErrorPageResponse> DeleteCustomErrorPageOutcome;
                typedef std::future<DeleteCustomErrorPageOutcome> DeleteCustomErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteCustomErrorPageRequest&, DeleteCustomErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDnsRecordsResponse> DeleteDnsRecordsOutcome;
                typedef std::future<DeleteDnsRecordsOutcome> DeleteDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteDnsRecordsRequest&, DeleteDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFunctionResponse> DeleteFunctionOutcome;
                typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteFunctionRequest&, DeleteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFunctionRulesResponse> DeleteFunctionRulesOutcome;
                typedef std::future<DeleteFunctionRulesOutcome> DeleteFunctionRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteFunctionRulesRequest&, DeleteFunctionRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL4ProxyResponse> DeleteL4ProxyOutcome;
                typedef std::future<DeleteL4ProxyOutcome> DeleteL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteL4ProxyRequest&, DeleteL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL4ProxyRulesResponse> DeleteL4ProxyRulesOutcome;
                typedef std::future<DeleteL4ProxyRulesOutcome> DeleteL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteL4ProxyRulesRequest&, DeleteL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL7AccRulesResponse> DeleteL7AccRulesOutcome;
                typedef std::future<DeleteL7AccRulesOutcome> DeleteL7AccRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteL7AccRulesRequest&, DeleteL7AccRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL7AccRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOriginGroupResponse> DeleteOriginGroupOutcome;
                typedef std::future<DeleteOriginGroupOutcome> DeleteOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteOriginGroupRequest&, DeleteOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRealtimeLogDeliveryTaskResponse> DeleteRealtimeLogDeliveryTaskOutcome;
                typedef std::future<DeleteRealtimeLogDeliveryTaskOutcome> DeleteRealtimeLogDeliveryTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteRealtimeLogDeliveryTaskRequest&, DeleteRealtimeLogDeliveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRealtimeLogDeliveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRulesResponse> DeleteRulesOutcome;
                typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteRulesRequest&, DeleteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityIPGroupResponse> DeleteSecurityIPGroupOutcome;
                typedef std::future<DeleteSecurityIPGroupOutcome> DeleteSecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteSecurityIPGroupRequest&, DeleteSecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSharedCNAMEResponse> DeleteSharedCNAMEOutcome;
                typedef std::future<DeleteSharedCNAMEOutcome> DeleteSharedCNAMEOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteSharedCNAMERequest&, DeleteSharedCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSharedCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployConfigGroupVersionResponse> DeployConfigGroupVersionOutcome;
                typedef std::future<DeployConfigGroupVersionOutcome> DeployConfigGroupVersionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeployConfigGroupVersionRequest&, DeployConfigGroupVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployConfigGroupVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccelerationDomainsResponse> DescribeAccelerationDomainsOutcome;
                typedef std::future<DescribeAccelerationDomainsOutcome> DescribeAccelerationDomainsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAccelerationDomainsRequest&, DescribeAccelerationDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccelerationDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAliasDomainsResponse> DescribeAliasDomainsOutcome;
                typedef std::future<DescribeAliasDomainsOutcome> DescribeAliasDomainsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAliasDomainsRequest&, DescribeAliasDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAliasDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProxiesResponse> DescribeApplicationProxiesOutcome;
                typedef std::future<DescribeApplicationProxiesOutcome> DescribeApplicationProxiesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeApplicationProxiesRequest&, DescribeApplicationProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailablePlansResponse> DescribeAvailablePlansOutcome;
                typedef std::future<DescribeAvailablePlansOutcome> DescribeAvailablePlansOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAvailablePlansRequest&, DescribeAvailablePlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailablePlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigGroupVersionDetailResponse> DescribeConfigGroupVersionDetailOutcome;
                typedef std::future<DescribeConfigGroupVersionDetailOutcome> DescribeConfigGroupVersionDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeConfigGroupVersionDetailRequest&, DescribeConfigGroupVersionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigGroupVersionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigGroupVersionsResponse> DescribeConfigGroupVersionsOutcome;
                typedef std::future<DescribeConfigGroupVersionsOutcome> DescribeConfigGroupVersionsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeConfigGroupVersionsRequest&, DescribeConfigGroupVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigGroupVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentIdentifiersResponse> DescribeContentIdentifiersOutcome;
                typedef std::future<DescribeContentIdentifiersOutcome> DescribeContentIdentifiersOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeContentIdentifiersRequest&, DescribeContentIdentifiersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentIdentifiersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentQuotaResponse> DescribeContentQuotaOutcome;
                typedef std::future<DescribeContentQuotaOutcome> DescribeContentQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeContentQuotaRequest&, DescribeContentQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomErrorPagesResponse> DescribeCustomErrorPagesOutcome;
                typedef std::future<DescribeCustomErrorPagesOutcome> DescribeCustomErrorPagesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeCustomErrorPagesRequest&, DescribeCustomErrorPagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomErrorPagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackDataResponse> DescribeDDoSAttackDataOutcome;
                typedef std::future<DescribeDDoSAttackDataOutcome> DescribeDDoSAttackDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackDataRequest&, DescribeDDoSAttackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackEventResponse> DescribeDDoSAttackEventOutcome;
                typedef std::future<DescribeDDoSAttackEventOutcome> DescribeDDoSAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackEventRequest&, DescribeDDoSAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackTopDataResponse> DescribeDDoSAttackTopDataOutcome;
                typedef std::future<DescribeDDoSAttackTopDataOutcome> DescribeDDoSAttackTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackTopDataRequest&, DescribeDDoSAttackTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultCertificatesResponse> DescribeDefaultCertificatesOutcome;
                typedef std::future<DescribeDefaultCertificatesOutcome> DescribeDefaultCertificatesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDefaultCertificatesRequest&, DescribeDefaultCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeployHistoryResponse> DescribeDeployHistoryOutcome;
                typedef std::future<DescribeDeployHistoryOutcome> DescribeDeployHistoryOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDeployHistoryRequest&, DescribeDeployHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsRecordsResponse> DescribeDnsRecordsOutcome;
                typedef std::future<DescribeDnsRecordsOutcome> DescribeDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsRecordsRequest&, DescribeDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionRulesResponse> DescribeFunctionRulesOutcome;
                typedef std::future<DescribeFunctionRulesOutcome> DescribeFunctionRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeFunctionRulesRequest&, DescribeFunctionRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionRuntimeEnvironmentResponse> DescribeFunctionRuntimeEnvironmentOutcome;
                typedef std::future<DescribeFunctionRuntimeEnvironmentOutcome> DescribeFunctionRuntimeEnvironmentOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeFunctionRuntimeEnvironmentRequest&, DescribeFunctionRuntimeEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionRuntimeEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionsResponse> DescribeFunctionsOutcome;
                typedef std::future<DescribeFunctionsOutcome> DescribeFunctionsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeFunctionsRequest&, DescribeFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPRegionResponse> DescribeIPRegionOutcome;
                typedef std::future<DescribeIPRegionOutcome> DescribeIPRegionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIPRegionRequest&, DescribeIPRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationsResponse> DescribeIdentificationsOutcome;
                typedef std::future<DescribeIdentificationsOutcome> DescribeIdentificationsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationsRequest&, DescribeIdentificationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4ProxyResponse> DescribeL4ProxyOutcome;
                typedef std::future<DescribeL4ProxyOutcome> DescribeL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeL4ProxyRequest&, DescribeL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4ProxyRulesResponse> DescribeL4ProxyRulesOutcome;
                typedef std::future<DescribeL4ProxyRulesOutcome> DescribeL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeL4ProxyRulesRequest&, DescribeL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7AccRulesResponse> DescribeL7AccRulesOutcome;
                typedef std::future<DescribeL7AccRulesOutcome> DescribeL7AccRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeL7AccRulesRequest&, DescribeL7AccRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7AccRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7AccSettingResponse> DescribeL7AccSettingOutcome;
                typedef std::future<DescribeL7AccSettingOutcome> DescribeL7AccSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeL7AccSettingRequest&, DescribeL7AccSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7AccSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerListResponse> DescribeLoadBalancerListOutcome;
                typedef std::future<DescribeLoadBalancerListOutcome> DescribeLoadBalancerListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLoadBalancerListRequest&, DescribeLoadBalancerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupResponse> DescribeOriginGroupOutcome;
                typedef std::future<DescribeOriginGroupOutcome> DescribeOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupRequest&, DescribeOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupHealthStatusResponse> DescribeOriginGroupHealthStatusOutcome;
                typedef std::future<DescribeOriginGroupHealthStatusOutcome> DescribeOriginGroupHealthStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupHealthStatusRequest&, DescribeOriginGroupHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginProtectionResponse> DescribeOriginProtectionOutcome;
                typedef std::future<DescribeOriginProtectionOutcome> DescribeOriginProtectionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginProtectionRequest&, DescribeOriginProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewL7DataResponse> DescribeOverviewL7DataOutcome;
                typedef std::future<DescribeOverviewL7DataOutcome> DescribeOverviewL7DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOverviewL7DataRequest&, DescribeOverviewL7DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewL7DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlansResponse> DescribePlansOutcome;
                typedef std::future<DescribePlansOutcome> DescribePlansOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePlansRequest&, DescribePlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealtimeLogDeliveryTasksResponse> DescribeRealtimeLogDeliveryTasksOutcome;
                typedef std::future<DescribeRealtimeLogDeliveryTasksOutcome> DescribeRealtimeLogDeliveryTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRealtimeLogDeliveryTasksRequest&, DescribeRealtimeLogDeliveryTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeLogDeliveryTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesSettingResponse> DescribeRulesSettingOutcome;
                typedef std::future<DescribeRulesSettingOutcome> DescribeRulesSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesSettingRequest&, DescribeRulesSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityIPGroupResponse> DescribeSecurityIPGroupOutcome;
                typedef std::future<DescribeSecurityIPGroupOutcome> DescribeSecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityIPGroupRequest&, DescribeSecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityIPGroupInfoResponse> DescribeSecurityIPGroupInfoOutcome;
                typedef std::future<DescribeSecurityIPGroupInfoOutcome> DescribeSecurityIPGroupInfoOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityIPGroupInfoRequest&, DescribeSecurityIPGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIPGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyResponse> DescribeSecurityPolicyOutcome;
                typedef std::future<DescribeSecurityPolicyOutcome> DescribeSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyRequest&, DescribeSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityTemplateBindingsResponse> DescribeSecurityTemplateBindingsOutcome;
                typedef std::future<DescribeSecurityTemplateBindingsOutcome> DescribeSecurityTemplateBindingsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityTemplateBindingsRequest&, DescribeSecurityTemplateBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityTemplateBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL4DataResponse> DescribeTimingL4DataOutcome;
                typedef std::future<DescribeTimingL4DataOutcome> DescribeTimingL4DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL4DataRequest&, DescribeTimingL4DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL4DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL7AnalysisDataResponse> DescribeTimingL7AnalysisDataOutcome;
                typedef std::future<DescribeTimingL7AnalysisDataOutcome> DescribeTimingL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL7AnalysisDataRequest&, DescribeTimingL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL7CacheDataResponse> DescribeTimingL7CacheDataOutcome;
                typedef std::future<DescribeTimingL7CacheDataOutcome> DescribeTimingL7CacheDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL7CacheDataRequest&, DescribeTimingL7CacheDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL7CacheDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopL7AnalysisDataResponse> DescribeTopL7AnalysisDataOutcome;
                typedef std::future<DescribeTopL7AnalysisDataOutcome> DescribeTopL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTopL7AnalysisDataRequest&, DescribeTopL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopL7CacheDataResponse> DescribeTopL7CacheDataOutcome;
                typedef std::future<DescribeTopL7CacheDataOutcome> DescribeTopL7CacheDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTopL7CacheDataRequest&, DescribeTopL7CacheDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopL7CacheDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneConfigImportResultResponse> DescribeZoneConfigImportResultOutcome;
                typedef std::future<DescribeZoneConfigImportResultOutcome> DescribeZoneConfigImportResultOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneConfigImportResultRequest&, DescribeZoneConfigImportResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneConfigImportResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneSettingResponse> DescribeZoneSettingOutcome;
                typedef std::future<DescribeZoneSettingOutcome> DescribeZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneSettingRequest&, DescribeZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPlanResponse> DestroyPlanOutcome;
                typedef std::future<DestroyPlanOutcome> DestroyPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DestroyPlanRequest&, DestroyPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL4LogsResponse> DownloadL4LogsOutcome;
                typedef std::future<DownloadL4LogsOutcome> DownloadL4LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL4LogsRequest&, DownloadL4LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL4LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL7LogsResponse> DownloadL7LogsOutcome;
                typedef std::future<DownloadL7LogsOutcome> DownloadL7LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL7LogsRequest&, DownloadL7LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL7LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportZoneConfigResponse> ExportZoneConfigOutcome;
                typedef std::future<ExportZoneConfigOutcome> ExportZoneConfigOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ExportZoneConfigRequest&, ExportZoneConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportZoneConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::HandleFunctionRuntimeEnvironmentResponse> HandleFunctionRuntimeEnvironmentOutcome;
                typedef std::future<HandleFunctionRuntimeEnvironmentOutcome> HandleFunctionRuntimeEnvironmentOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::HandleFunctionRuntimeEnvironmentRequest&, HandleFunctionRuntimeEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HandleFunctionRuntimeEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::IdentifyZoneResponse> IdentifyZoneOutcome;
                typedef std::future<IdentifyZoneOutcome> IdentifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IdentifyZoneRequest&, IdentifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportZoneConfigResponse> ImportZoneConfigOutcome;
                typedef std::future<ImportZoneConfigOutcome> ImportZoneConfigOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ImportZoneConfigRequest&, ImportZoneConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportZoneConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::IncreasePlanQuotaResponse> IncreasePlanQuotaOutcome;
                typedef std::future<IncreasePlanQuotaOutcome> IncreasePlanQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IncreasePlanQuotaRequest&, IncreasePlanQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IncreasePlanQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccelerationDomainResponse> ModifyAccelerationDomainOutcome;
                typedef std::future<ModifyAccelerationDomainOutcome> ModifyAccelerationDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAccelerationDomainRequest&, ModifyAccelerationDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccelerationDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccelerationDomainStatusesResponse> ModifyAccelerationDomainStatusesOutcome;
                typedef std::future<ModifyAccelerationDomainStatusesOutcome> ModifyAccelerationDomainStatusesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAccelerationDomainStatusesRequest&, ModifyAccelerationDomainStatusesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccelerationDomainStatusesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAliasDomainResponse> ModifyAliasDomainOutcome;
                typedef std::future<ModifyAliasDomainOutcome> ModifyAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAliasDomainRequest&, ModifyAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAliasDomainStatusResponse> ModifyAliasDomainStatusOutcome;
                typedef std::future<ModifyAliasDomainStatusOutcome> ModifyAliasDomainStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAliasDomainStatusRequest&, ModifyAliasDomainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAliasDomainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyResponse> ModifyApplicationProxyOutcome;
                typedef std::future<ModifyApplicationProxyOutcome> ModifyApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRequest&, ModifyApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyRuleResponse> ModifyApplicationProxyRuleOutcome;
                typedef std::future<ModifyApplicationProxyRuleOutcome> ModifyApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRuleRequest&, ModifyApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyRuleStatusResponse> ModifyApplicationProxyRuleStatusOutcome;
                typedef std::future<ModifyApplicationProxyRuleStatusOutcome> ModifyApplicationProxyRuleStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRuleStatusRequest&, ModifyApplicationProxyRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyStatusResponse> ModifyApplicationProxyStatusOutcome;
                typedef std::future<ModifyApplicationProxyStatusOutcome> ModifyApplicationProxyStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyStatusRequest&, ModifyApplicationProxyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentIdentifierResponse> ModifyContentIdentifierOutcome;
                typedef std::future<ModifyContentIdentifierOutcome> ModifyContentIdentifierOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyContentIdentifierRequest&, ModifyContentIdentifierOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentIdentifierAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomErrorPageResponse> ModifyCustomErrorPageOutcome;
                typedef std::future<ModifyCustomErrorPageOutcome> ModifyCustomErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyCustomErrorPageRequest&, ModifyCustomErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnsRecordsResponse> ModifyDnsRecordsOutcome;
                typedef std::future<ModifyDnsRecordsOutcome> ModifyDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnsRecordsRequest&, ModifyDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnsRecordsStatusResponse> ModifyDnsRecordsStatusOutcome;
                typedef std::future<ModifyDnsRecordsStatusOutcome> ModifyDnsRecordsStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnsRecordsStatusRequest&, ModifyDnsRecordsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnsRecordsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFunctionResponse> ModifyFunctionOutcome;
                typedef std::future<ModifyFunctionOutcome> ModifyFunctionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyFunctionRequest&, ModifyFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFunctionRuleResponse> ModifyFunctionRuleOutcome;
                typedef std::future<ModifyFunctionRuleOutcome> ModifyFunctionRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyFunctionRuleRequest&, ModifyFunctionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFunctionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFunctionRulePriorityResponse> ModifyFunctionRulePriorityOutcome;
                typedef std::future<ModifyFunctionRulePriorityOutcome> ModifyFunctionRulePriorityOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyFunctionRulePriorityRequest&, ModifyFunctionRulePriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFunctionRulePriorityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsCertificateResponse> ModifyHostsCertificateOutcome;
                typedef std::future<ModifyHostsCertificateOutcome> ModifyHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyHostsCertificateRequest&, ModifyHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyResponse> ModifyL4ProxyOutcome;
                typedef std::future<ModifyL4ProxyOutcome> ModifyL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyRequest&, ModifyL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyRulesResponse> ModifyL4ProxyRulesOutcome;
                typedef std::future<ModifyL4ProxyRulesOutcome> ModifyL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyRulesRequest&, ModifyL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyRulesStatusResponse> ModifyL4ProxyRulesStatusOutcome;
                typedef std::future<ModifyL4ProxyRulesStatusOutcome> ModifyL4ProxyRulesStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyRulesStatusRequest&, ModifyL4ProxyRulesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyRulesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyStatusResponse> ModifyL4ProxyStatusOutcome;
                typedef std::future<ModifyL4ProxyStatusOutcome> ModifyL4ProxyStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyStatusRequest&, ModifyL4ProxyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7AccRuleResponse> ModifyL7AccRuleOutcome;
                typedef std::future<ModifyL7AccRuleOutcome> ModifyL7AccRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL7AccRuleRequest&, ModifyL7AccRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7AccRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7AccRulePriorityResponse> ModifyL7AccRulePriorityOutcome;
                typedef std::future<ModifyL7AccRulePriorityOutcome> ModifyL7AccRulePriorityOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL7AccRulePriorityRequest&, ModifyL7AccRulePriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7AccRulePriorityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7AccSettingResponse> ModifyL7AccSettingOutcome;
                typedef std::future<ModifyL7AccSettingOutcome> ModifyL7AccSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL7AccSettingRequest&, ModifyL7AccSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7AccSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerResponse> ModifyLoadBalancerOutcome;
                typedef std::future<ModifyLoadBalancerOutcome> ModifyLoadBalancerOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLoadBalancerRequest&, ModifyLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOriginGroupResponse> ModifyOriginGroupOutcome;
                typedef std::future<ModifyOriginGroupOutcome> ModifyOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyOriginGroupRequest&, ModifyOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPlanResponse> ModifyPlanOutcome;
                typedef std::future<ModifyPlanOutcome> ModifyPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyPlanRequest&, ModifyPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRealtimeLogDeliveryTaskResponse> ModifyRealtimeLogDeliveryTaskOutcome;
                typedef std::future<ModifyRealtimeLogDeliveryTaskOutcome> ModifyRealtimeLogDeliveryTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRealtimeLogDeliveryTaskRequest&, ModifyRealtimeLogDeliveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealtimeLogDeliveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityIPGroupResponse> ModifySecurityIPGroupOutcome;
                typedef std::future<ModifySecurityIPGroupOutcome> ModifySecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityIPGroupRequest&, ModifySecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyResponse> ModifySecurityPolicyOutcome;
                typedef std::future<ModifySecurityPolicyOutcome> ModifySecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityPolicyRequest&, ModifySecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneResponse> ModifyZoneOutcome;
                typedef std::future<ModifyZoneOutcome> ModifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneRequest&, ModifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneSettingResponse> ModifyZoneSettingOutcome;
                typedef std::future<ModifyZoneSettingOutcome> ModifyZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneSettingRequest&, ModifyZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneStatusResponse> ModifyZoneStatusOutcome;
                typedef std::future<ModifyZoneStatusOutcome> ModifyZoneStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneStatusRequest&, ModifyZoneStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewPlanResponse> RenewPlanOutcome;
                typedef std::future<RenewPlanOutcome> RenewPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::RenewPlanRequest&, RenewPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradePlanResponse> UpgradePlanOutcome;
                typedef std::future<UpgradePlanOutcome> UpgradePlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::UpgradePlanRequest&, UpgradePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyOwnershipResponse> VerifyOwnershipOutcome;
                typedef std::future<VerifyOwnershipOutcome> VerifyOwnershipOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::VerifyOwnershipRequest&, VerifyOwnershipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyOwnershipAsyncHandler;



                /**
                 *操作安全策略模板，支持将域名绑定或换绑到指定的策略模板，或者从指定的策略模板解绑。
                 * @param req BindSecurityTemplateToEntityRequest
                 * @return BindSecurityTemplateToEntityOutcome
                 */
                BindSecurityTemplateToEntityOutcome BindSecurityTemplateToEntity(const Model::BindSecurityTemplateToEntityRequest &request);
                void BindSecurityTemplateToEntityAsync(const Model::BindSecurityTemplateToEntityRequest& request, const BindSecurityTemplateToEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSecurityTemplateToEntityOutcomeCallable BindSecurityTemplateToEntityCallable(const Model::BindSecurityTemplateToEntityRequest& request);

                /**
                 *用于加速域名绑定或解绑共享 CNAME，该功能白名单内测中。
                 * @param req BindSharedCNAMERequest
                 * @return BindSharedCNAMEOutcome
                 */
                BindSharedCNAMEOutcome BindSharedCNAME(const Model::BindSharedCNAMERequest &request);
                void BindSharedCNAMEAsync(const Model::BindSharedCNAMERequest& request, const BindSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSharedCNAMEOutcomeCallable BindSharedCNAMECallable(const Model::BindSharedCNAMERequest& request);

                /**
                 *将未绑定套餐的站点绑定到已有套餐
                 * @param req BindZoneToPlanRequest
                 * @return BindZoneToPlanOutcome
                 */
                BindZoneToPlanOutcome BindZoneToPlan(const Model::BindZoneToPlanRequest &request);
                void BindZoneToPlanAsync(const Model::BindZoneToPlanRequest& request, const BindZoneToPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindZoneToPlanOutcomeCallable BindZoneToPlanCallable(const Model::BindZoneToPlanRequest& request);

                /**
                 *校验域名 CNAME 状态
                 * @param req CheckCnameStatusRequest
                 * @return CheckCnameStatusOutcome
                 */
                CheckCnameStatusOutcome CheckCnameStatus(const Model::CheckCnameStatusRequest &request);
                void CheckCnameStatusAsync(const Model::CheckCnameStatusRequest& request, const CheckCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCnameStatusOutcomeCallable CheckCnameStatusCallable(const Model::CheckCnameStatusRequest& request);

                /**
                 *在创建完站点之后，您可以通过本接口创建加速域名。 

CNAME 模式接入时，若您未完成站点归属权校验，本接口将为您返回域名归属权验证信息，您可以单独对域名进行归属权验证，详情参考 [站点/域名归属权验证](https://cloud.tencent.com/document/product/1552/70789)。
                 * @param req CreateAccelerationDomainRequest
                 * @return CreateAccelerationDomainOutcome
                 */
                CreateAccelerationDomainOutcome CreateAccelerationDomain(const Model::CreateAccelerationDomainRequest &request);
                void CreateAccelerationDomainAsync(const Model::CreateAccelerationDomainRequest& request, const CreateAccelerationDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccelerationDomainOutcomeCallable CreateAccelerationDomainCallable(const Model::CreateAccelerationDomainRequest& request);

                /**
                 *创建别称域名。
该功能仅企业版套餐支持，并且该功能当前仍在内测中，如需使用，请[联系我们](https://cloud.tencent.com/online-service?from=connect-us)。
                 * @param req CreateAliasDomainRequest
                 * @return CreateAliasDomainOutcome
                 */
                CreateAliasDomainOutcome CreateAliasDomain(const Model::CreateAliasDomainRequest &request);
                void CreateAliasDomainAsync(const Model::CreateAliasDomainRequest& request, const CreateAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasDomainOutcomeCallable CreateAliasDomainCallable(const Model::CreateAliasDomainRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版 [创建四层代理实例](https://cloud.tencent.com/document/product/1552/103417) 。
                 * @param req CreateApplicationProxyRequest
                 * @return CreateApplicationProxyOutcome
                 */
                CreateApplicationProxyOutcome CreateApplicationProxy(const Model::CreateApplicationProxyRequest &request);
                void CreateApplicationProxyAsync(const Model::CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyOutcomeCallable CreateApplicationProxyCallable(const Model::CreateApplicationProxyRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [创建四层代理转发规则
](https://cloud.tencent.com/document/product/1552/103416) 。
                 * @param req CreateApplicationProxyRuleRequest
                 * @return CreateApplicationProxyRuleOutcome
                 */
                CreateApplicationProxyRuleOutcome CreateApplicationProxyRule(const Model::CreateApplicationProxyRuleRequest &request);
                void CreateApplicationProxyRuleAsync(const Model::CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyRuleOutcomeCallable CreateApplicationProxyRuleCallable(const Model::CreateApplicationProxyRuleRequest& request);

                /**
                 *针对指定实时日志投递任务（task-id），在对应的腾讯云 CLS 日志主题中创建投递日志字段对应的键值索引。如果您在腾讯云 CLS 已经创建索引，本接口将采用合并的方式追加索引。
                 * @param req CreateCLSIndexRequest
                 * @return CreateCLSIndexOutcome
                 */
                CreateCLSIndexOutcome CreateCLSIndex(const Model::CreateCLSIndexRequest &request);
                void CreateCLSIndexAsync(const Model::CreateCLSIndexRequest& request, const CreateCLSIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSIndexOutcomeCallable CreateCLSIndexCallable(const Model::CreateCLSIndexRequest& request);

                /**
                 *在版本管理模式下，用于创建指定配置组的新版本。版本管理功能内测中，当前仅白名单开放。
                 * @param req CreateConfigGroupVersionRequest
                 * @return CreateConfigGroupVersionOutcome
                 */
                CreateConfigGroupVersionOutcome CreateConfigGroupVersion(const Model::CreateConfigGroupVersionRequest &request);
                void CreateConfigGroupVersionAsync(const Model::CreateConfigGroupVersionRequest& request, const CreateConfigGroupVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigGroupVersionOutcomeCallable CreateConfigGroupVersionCallable(const Model::CreateConfigGroupVersionRequest& request);

                /**
                 *创建内容标识符，可以设置描述、标签等信息，同时需要绑定企业版套餐用于统计计费数据；一个内容标识符只能绑定一个计费套餐，一个计费套餐可以绑定多个内容标识符。该功能仅限白名单开放。
                 * @param req CreateContentIdentifierRequest
                 * @return CreateContentIdentifierOutcome
                 */
                CreateContentIdentifierOutcome CreateContentIdentifier(const Model::CreateContentIdentifierRequest &request);
                void CreateContentIdentifierAsync(const Model::CreateContentIdentifierRequest& request, const CreateContentIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentIdentifierOutcomeCallable CreateContentIdentifierCallable(const Model::CreateContentIdentifierRequest& request);

                /**
                 *创建自定义错误页面。
                 * @param req CreateCustomizeErrorPageRequest
                 * @return CreateCustomizeErrorPageOutcome
                 */
                CreateCustomizeErrorPageOutcome CreateCustomizeErrorPage(const Model::CreateCustomizeErrorPageRequest &request);
                void CreateCustomizeErrorPageAsync(const Model::CreateCustomizeErrorPageRequest& request, const CreateCustomizeErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomizeErrorPageOutcomeCallable CreateCustomizeErrorPageCallable(const Model::CreateCustomizeErrorPageRequest& request);

                /**
                 *在创建完站点后，并且站点为 NS 模式接入时，您可以通过本接口创建 DNS 记录。
                 * @param req CreateDnsRecordRequest
                 * @return CreateDnsRecordOutcome
                 */
                CreateDnsRecordOutcome CreateDnsRecord(const Model::CreateDnsRecordRequest &request);
                void CreateDnsRecordAsync(const Model::CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDnsRecordOutcomeCallable CreateDnsRecordCallable(const Model::CreateDnsRecordRequest& request);

                /**
                 *创建并部署边缘函数至 EdgeOne 的边缘节点。
                 * @param req CreateFunctionRequest
                 * @return CreateFunctionOutcome
                 */
                CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest &request);
                void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request);

                /**
                 *创建边缘函数的触发规则。
                 * @param req CreateFunctionRuleRequest
                 * @return CreateFunctionRuleOutcome
                 */
                CreateFunctionRuleOutcome CreateFunctionRule(const Model::CreateFunctionRuleRequest &request);
                void CreateFunctionRuleAsync(const Model::CreateFunctionRuleRequest& request, const CreateFunctionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFunctionRuleOutcomeCallable CreateFunctionRuleCallable(const Model::CreateFunctionRuleRequest& request);

                /**
                 *用于创建四层代理实例。
                 * @param req CreateL4ProxyRequest
                 * @return CreateL4ProxyOutcome
                 */
                CreateL4ProxyOutcome CreateL4Proxy(const Model::CreateL4ProxyRequest &request);
                void CreateL4ProxyAsync(const Model::CreateL4ProxyRequest& request, const CreateL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4ProxyOutcomeCallable CreateL4ProxyCallable(const Model::CreateL4ProxyRequest& request);

                /**
                 *用于创建四层代理实例规则，支持单条或者批量创建。
                 * @param req CreateL4ProxyRulesRequest
                 * @return CreateL4ProxyRulesOutcome
                 */
                CreateL4ProxyRulesOutcome CreateL4ProxyRules(const Model::CreateL4ProxyRulesRequest &request);
                void CreateL4ProxyRulesAsync(const Model::CreateL4ProxyRulesRequest& request, const CreateL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4ProxyRulesOutcomeCallable CreateL4ProxyRulesCallable(const Model::CreateL4ProxyRulesRequest& request);

                /**
                 *本接口用于在[规则引擎](https://cloud.tencent.com/document/product/1552/70901)中创建规则，支持批量创建。
                 * @param req CreateL7AccRulesRequest
                 * @return CreateL7AccRulesOutcome
                 */
                CreateL7AccRulesOutcome CreateL7AccRules(const Model::CreateL7AccRulesRequest &request);
                void CreateL7AccRulesAsync(const Model::CreateL7AccRulesRequest& request, const CreateL7AccRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7AccRulesOutcomeCallable CreateL7AccRulesCallable(const Model::CreateL7AccRulesRequest& request);

                /**
                 *创建负载均衡实例。详情请参考 [快速创建负载均衡实例](https://cloud.tencent.com/document/product/1552/104223)。负载均衡功能内测中，如您需要使用请 [联系我们](https://cloud.tencent.com/online-service)。
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *创建源站组，以源站组的方式管理业务源站。此处配置的源站组可于**添加加速域名**和**四层代理**等功能中引用。
                 * @param req CreateOriginGroupRequest
                 * @return CreateOriginGroupOutcome
                 */
                CreateOriginGroupOutcome CreateOriginGroup(const Model::CreateOriginGroupRequest &request);
                void CreateOriginGroupAsync(const Model::CreateOriginGroupRequest& request, const CreateOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOriginGroupOutcomeCallable CreateOriginGroupCallable(const Model::CreateOriginGroupRequest& request);

                /**
                 *若您需要使用 Edgeone 产品，您需要通过此接口创建计费套餐。
> 创建套餐后，您需要通过 [CreateZone](https://cloud.tencent.com/document/product/1552/80719) 完成创建站点，绑定套餐的流程，Edgeone 才能正常提供服务。
                 * @param req CreatePlanRequest
                 * @return CreatePlanOutcome
                 */
                CreatePlanOutcome CreatePlan(const Model::CreatePlanRequest &request);
                void CreatePlanAsync(const Model::CreatePlanRequest& request, const CreatePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePlanOutcomeCallable CreatePlanCallable(const Model::CreatePlanRequest& request);

                /**
                 *为未购买套餐的站点购买套餐
                 * @param req CreatePlanForZoneRequest
                 * @return CreatePlanForZoneOutcome
                 */
                CreatePlanForZoneOutcome CreatePlanForZone(const Model::CreatePlanForZoneRequest &request);
                void CreatePlanForZoneAsync(const Model::CreatePlanForZoneRequest& request, const CreatePlanForZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePlanForZoneOutcomeCallable CreatePlanForZoneCallable(const Model::CreatePlanForZoneRequest& request);

                /**
                 *创建预热任务
                 * @param req CreatePrefetchTaskRequest
                 * @return CreatePrefetchTaskOutcome
                 */
                CreatePrefetchTaskOutcome CreatePrefetchTask(const Model::CreatePrefetchTaskRequest &request);
                void CreatePrefetchTaskAsync(const Model::CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrefetchTaskOutcomeCallable CreatePrefetchTaskCallable(const Model::CreatePrefetchTaskRequest& request);

                /**
                 *当源站资源更新，但节点缓存 TTL 未过期时，用户仍会访问到旧的资源，此时可以通过该接口实现节点资源更新。触发更新的方法有以下两种：<li>直接删除：不做任何校验，直接删除节点缓存，用户请求时触发回源拉取；</li><li>标记过期：将节点资源置为过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>

清除缓存任务详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
                 * @param req CreatePurgeTaskRequest
                 * @return CreatePurgeTaskOutcome
                 */
                CreatePurgeTaskOutcome CreatePurgeTask(const Model::CreatePurgeTaskRequest &request);
                void CreatePurgeTaskAsync(const Model::CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePurgeTaskOutcomeCallable CreatePurgeTaskCallable(const Model::CreatePurgeTaskRequest& request);

                /**
                 *通过本接口创建实时日志投递任务。本接口有如下限制：
同一个实体（七层域名或者四层代理实例）在同种数据投递类型（LogType）和数据投递区域（Area）的组合下，只能被添加到一个实时日志投递任务中。建议先通过 [DescribeRealtimeLogDeliveryTasks](https://cloud.tencent.com/document/product/1552/104110)  接口根据实体查询实时日志投递任务列表，检查实体是否已经被添加到另一实时日志投递任务中。
                 * @param req CreateRealtimeLogDeliveryTaskRequest
                 * @return CreateRealtimeLogDeliveryTaskOutcome
                 */
                CreateRealtimeLogDeliveryTaskOutcome CreateRealtimeLogDeliveryTask(const Model::CreateRealtimeLogDeliveryTaskRequest &request);
                void CreateRealtimeLogDeliveryTaskAsync(const Model::CreateRealtimeLogDeliveryTaskRequest& request, const CreateRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRealtimeLogDeliveryTaskOutcomeCallable CreateRealtimeLogDeliveryTaskCallable(const Model::CreateRealtimeLogDeliveryTaskRequest& request);

                /**
                 *本接口为旧版本创建规则引擎接口，EdgeOne 于 2025 年 1 月 21 日已对规则引擎相关接口全面升级，新版本创建七层加速规则接口详情请参考 [CreateL7AccRules](https://cloud.tencent.com/document/product/1552/115822)。
<p style="color: red;">注意：自 2025 年 1 月 21 日起，旧版接口停止更新迭代，后续新增功能将仅在新版接口中提供，旧版接口支持的原有能力将不受影响。为避免在使用旧版接口时出现数据字段冲突，建议您尽早迁移到新版规则引擎接口。</p>
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建安全 IP 组
                 * @param req CreateSecurityIPGroupRequest
                 * @return CreateSecurityIPGroupOutcome
                 */
                CreateSecurityIPGroupOutcome CreateSecurityIPGroup(const Model::CreateSecurityIPGroupRequest &request);
                void CreateSecurityIPGroupAsync(const Model::CreateSecurityIPGroupRequest& request, const CreateSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityIPGroupOutcomeCallable CreateSecurityIPGroupCallable(const Model::CreateSecurityIPGroupRequest& request);

                /**
                 *用于创建共享 CNAME，该功能白名单内测中。
                 * @param req CreateSharedCNAMERequest
                 * @return CreateSharedCNAMEOutcome
                 */
                CreateSharedCNAMEOutcome CreateSharedCNAME(const Model::CreateSharedCNAMERequest &request);
                void CreateSharedCNAMEAsync(const Model::CreateSharedCNAMERequest& request, const CreateSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSharedCNAMEOutcomeCallable CreateSharedCNAMECallable(const Model::CreateSharedCNAMERequest& request);

                /**
                 *EdgeOne 为您提供 CNAME、NS 和无域名接入三种接入方式，您需要先通过此接口完成站点创建。CNAME 和 NS 接入站点的场景可参考 [从零开始快速接入 EdgeOne](https://cloud.tencent.com/document/product/1552/87601); 无域名接入的场景可参考 [快速启用四层代理服务](https://cloud.tencent.com/document/product/1552/96051)。

> 建议您在账号下已存在套餐时调用本接口创建站点，请在入参时传入 PlanId ，直接将站点绑定至该套餐；不传入 PlanId 时，创建出来的站点会处于未激活状态，无法正常服务，您需要通过 [BindZoneToPlan](https://cloud.tencent.com/document/product/1552/83042) 完成套餐绑定之后，站点才可正常提供服务 。若您当前没有可绑定的套餐时，请前往控制台购买套餐完成站点创建。
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

                /**
                 *批量删除加速域名
                 * @param req DeleteAccelerationDomainsRequest
                 * @return DeleteAccelerationDomainsOutcome
                 */
                DeleteAccelerationDomainsOutcome DeleteAccelerationDomains(const Model::DeleteAccelerationDomainsRequest &request);
                void DeleteAccelerationDomainsAsync(const Model::DeleteAccelerationDomainsRequest& request, const DeleteAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccelerationDomainsOutcomeCallable DeleteAccelerationDomainsCallable(const Model::DeleteAccelerationDomainsRequest& request);

                /**
                 *删除别称域名。
该功能仅企业版套餐支持，并且该功能当前仍在内测中，如需使用，请[联系我们](https://cloud.tencent.com/online-service?from=connect-us)。
                 * @param req DeleteAliasDomainRequest
                 * @return DeleteAliasDomainOutcome
                 */
                DeleteAliasDomainOutcome DeleteAliasDomain(const Model::DeleteAliasDomainRequest &request);
                void DeleteAliasDomainAsync(const Model::DeleteAliasDomainRequest& request, const DeleteAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasDomainOutcomeCallable DeleteAliasDomainCallable(const Model::DeleteAliasDomainRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [删除四层代理实例
](https://cloud.tencent.com/document/product/1552/103415) 。
                 * @param req DeleteApplicationProxyRequest
                 * @return DeleteApplicationProxyOutcome
                 */
                DeleteApplicationProxyOutcome DeleteApplicationProxy(const Model::DeleteApplicationProxyRequest &request);
                void DeleteApplicationProxyAsync(const Model::DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyOutcomeCallable DeleteApplicationProxyCallable(const Model::DeleteApplicationProxyRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [删除四层代理转发规则](https://cloud.tencent.com/document/product/1552/103414) 。
                 * @param req DeleteApplicationProxyRuleRequest
                 * @return DeleteApplicationProxyRuleOutcome
                 */
                DeleteApplicationProxyRuleOutcome DeleteApplicationProxyRule(const Model::DeleteApplicationProxyRuleRequest &request);
                void DeleteApplicationProxyRuleAsync(const Model::DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyRuleOutcomeCallable DeleteApplicationProxyRuleCallable(const Model::DeleteApplicationProxyRuleRequest& request);

                /**
                 *删除指定的内容标识符。该功能仅白名单开放。
                 * @param req DeleteContentIdentifierRequest
                 * @return DeleteContentIdentifierOutcome
                 */
                DeleteContentIdentifierOutcome DeleteContentIdentifier(const Model::DeleteContentIdentifierRequest &request);
                void DeleteContentIdentifierAsync(const Model::DeleteContentIdentifierRequest& request, const DeleteContentIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentIdentifierOutcomeCallable DeleteContentIdentifierCallable(const Model::DeleteContentIdentifierRequest& request);

                /**
                 *删除自定义错误页面。
                 * @param req DeleteCustomErrorPageRequest
                 * @return DeleteCustomErrorPageOutcome
                 */
                DeleteCustomErrorPageOutcome DeleteCustomErrorPage(const Model::DeleteCustomErrorPageRequest &request);
                void DeleteCustomErrorPageAsync(const Model::DeleteCustomErrorPageRequest& request, const DeleteCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomErrorPageOutcomeCallable DeleteCustomErrorPageCallable(const Model::DeleteCustomErrorPageRequest& request);

                /**
                 *您可以用本接口批量删除 DNS 记录。
                 * @param req DeleteDnsRecordsRequest
                 * @return DeleteDnsRecordsOutcome
                 */
                DeleteDnsRecordsOutcome DeleteDnsRecords(const Model::DeleteDnsRecordsRequest &request);
                void DeleteDnsRecordsAsync(const Model::DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDnsRecordsOutcomeCallable DeleteDnsRecordsCallable(const Model::DeleteDnsRecordsRequest& request);

                /**
                 *删除边缘函数，删除后函数无法恢复，关联的触发规则会一并删除。
                 * @param req DeleteFunctionRequest
                 * @return DeleteFunctionOutcome
                 */
                DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest &request);
                void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request);

                /**
                 *删除边缘函数触发规则。
                 * @param req DeleteFunctionRulesRequest
                 * @return DeleteFunctionRulesOutcome
                 */
                DeleteFunctionRulesOutcome DeleteFunctionRules(const Model::DeleteFunctionRulesRequest &request);
                void DeleteFunctionRulesAsync(const Model::DeleteFunctionRulesRequest& request, const DeleteFunctionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFunctionRulesOutcomeCallable DeleteFunctionRulesCallable(const Model::DeleteFunctionRulesRequest& request);

                /**
                 *用于删除四层代理实例。
                 * @param req DeleteL4ProxyRequest
                 * @return DeleteL4ProxyOutcome
                 */
                DeleteL4ProxyOutcome DeleteL4Proxy(const Model::DeleteL4ProxyRequest &request);
                void DeleteL4ProxyAsync(const Model::DeleteL4ProxyRequest& request, const DeleteL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL4ProxyOutcomeCallable DeleteL4ProxyCallable(const Model::DeleteL4ProxyRequest& request);

                /**
                 *用于删除四层代理转发规则，支持单条或者批量操作。
                 * @param req DeleteL4ProxyRulesRequest
                 * @return DeleteL4ProxyRulesOutcome
                 */
                DeleteL4ProxyRulesOutcome DeleteL4ProxyRules(const Model::DeleteL4ProxyRulesRequest &request);
                void DeleteL4ProxyRulesAsync(const Model::DeleteL4ProxyRulesRequest& request, const DeleteL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL4ProxyRulesOutcomeCallable DeleteL4ProxyRulesCallable(const Model::DeleteL4ProxyRulesRequest& request);

                /**
                 *本接口用于删除[规则引擎](https://cloud.tencent.com/document/product/1552/70901)的规则，支持批量删除。
                 * @param req DeleteL7AccRulesRequest
                 * @return DeleteL7AccRulesOutcome
                 */
                DeleteL7AccRulesOutcome DeleteL7AccRules(const Model::DeleteL7AccRulesRequest &request);
                void DeleteL7AccRulesAsync(const Model::DeleteL7AccRulesRequest& request, const DeleteL7AccRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL7AccRulesOutcomeCallable DeleteL7AccRulesCallable(const Model::DeleteL7AccRulesRequest& request);

                /**
                 *删除负载均衡实例，若负载均衡示例被其他服务（例如：四层代理等）引用的时候，示例无法被删除，需要先解除引用关系。负载均衡功能内测中，如您需要使用请 [联系我们](https://cloud.tencent.com/online-service)。
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *删除源站组，若源站组仍然被服务（例如：四层代理，域名服务，负载均衡，规则引起）引用，将不允许删除。
                 * @param req DeleteOriginGroupRequest
                 * @return DeleteOriginGroupOutcome
                 */
                DeleteOriginGroupOutcome DeleteOriginGroup(const Model::DeleteOriginGroupRequest &request);
                void DeleteOriginGroupAsync(const Model::DeleteOriginGroupRequest& request, const DeleteOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOriginGroupOutcomeCallable DeleteOriginGroupCallable(const Model::DeleteOriginGroupRequest& request);

                /**
                 *通过本接口删除实时日志投递任务。
                 * @param req DeleteRealtimeLogDeliveryTaskRequest
                 * @return DeleteRealtimeLogDeliveryTaskOutcome
                 */
                DeleteRealtimeLogDeliveryTaskOutcome DeleteRealtimeLogDeliveryTask(const Model::DeleteRealtimeLogDeliveryTaskRequest &request);
                void DeleteRealtimeLogDeliveryTaskAsync(const Model::DeleteRealtimeLogDeliveryTaskRequest& request, const DeleteRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRealtimeLogDeliveryTaskOutcomeCallable DeleteRealtimeLogDeliveryTaskCallable(const Model::DeleteRealtimeLogDeliveryTaskRequest& request);

                /**
                 *本接口为旧版本删除规则引擎接口，EdgeOne 于 2025 年 1 月 21 日已对规则引擎相关接口全面升级，新版本删除七层加速规则接口详情请参考 [DeleteL7AccRules](https://cloud.tencent.com/document/product/1552/115821)。
<p style="color: red;">注意：自 2025 年 1 月 21 日起，旧版接口停止更新迭代，后续新增功能将仅在新版接口中提供，旧版接口支持的原有能力将不受影响。为避免在使用旧版接口时出现数据字段冲突，建议您尽早迁移到新版规则引擎接口。</p>
                 * @param req DeleteRulesRequest
                 * @return DeleteRulesOutcome
                 */
                DeleteRulesOutcome DeleteRules(const Model::DeleteRulesRequest &request);
                void DeleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRulesOutcomeCallable DeleteRulesCallable(const Model::DeleteRulesRequest& request);

                /**
                 *删除指定 IP 组，如果有规则引用了 IP 组情况，则不允许删除。
                 * @param req DeleteSecurityIPGroupRequest
                 * @return DeleteSecurityIPGroupOutcome
                 */
                DeleteSecurityIPGroupOutcome DeleteSecurityIPGroup(const Model::DeleteSecurityIPGroupRequest &request);
                void DeleteSecurityIPGroupAsync(const Model::DeleteSecurityIPGroupRequest& request, const DeleteSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityIPGroupOutcomeCallable DeleteSecurityIPGroupCallable(const Model::DeleteSecurityIPGroupRequest& request);

                /**
                 *用于删除共享 CNAME，该功能白名单内测中。
                 * @param req DeleteSharedCNAMERequest
                 * @return DeleteSharedCNAMEOutcome
                 */
                DeleteSharedCNAMEOutcome DeleteSharedCNAME(const Model::DeleteSharedCNAMERequest &request);
                void DeleteSharedCNAMEAsync(const Model::DeleteSharedCNAMERequest& request, const DeleteSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSharedCNAMEOutcomeCallable DeleteSharedCNAMECallable(const Model::DeleteSharedCNAMERequest& request);

                /**
                 *删除站点。
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *在版本管理模式下，用于版本发布，可通过 EnvId 将版本发布至测试环境或生产环境。版本管理功能内测中，当前仅白名单开放。
                 * @param req DeployConfigGroupVersionRequest
                 * @return DeployConfigGroupVersionOutcome
                 */
                DeployConfigGroupVersionOutcome DeployConfigGroupVersion(const Model::DeployConfigGroupVersionRequest &request);
                void DeployConfigGroupVersionAsync(const Model::DeployConfigGroupVersionRequest& request, const DeployConfigGroupVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployConfigGroupVersionOutcomeCallable DeployConfigGroupVersionCallable(const Model::DeployConfigGroupVersionRequest& request);

                /**
                 *您可以通过本接口查看站点下的域名信息，包括加速域名、源站以及域名状态等信息。您可以查看站点下全部域名的信息，也可以指定过滤条件查询对应的域名信息。
                 * @param req DescribeAccelerationDomainsRequest
                 * @return DescribeAccelerationDomainsOutcome
                 */
                DescribeAccelerationDomainsOutcome DescribeAccelerationDomains(const Model::DescribeAccelerationDomainsRequest &request);
                void DescribeAccelerationDomainsAsync(const Model::DescribeAccelerationDomainsRequest& request, const DescribeAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerationDomainsOutcomeCallable DescribeAccelerationDomainsCallable(const Model::DescribeAccelerationDomainsRequest& request);

                /**
                 *查询别称域名信息列表。
该功能仅企业版套餐支持，并且该功能当前仍在内测中，如需使用，请[联系我们](https://cloud.tencent.com/online-service?from=connect-us)。
                 * @param req DescribeAliasDomainsRequest
                 * @return DescribeAliasDomainsOutcome
                 */
                DescribeAliasDomainsOutcome DescribeAliasDomains(const Model::DescribeAliasDomainsRequest &request);
                void DescribeAliasDomainsAsync(const Model::DescribeAliasDomainsRequest& request, const DescribeAliasDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAliasDomainsOutcomeCallable DescribeAliasDomainsCallable(const Model::DescribeAliasDomainsRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，新版接口中将四层代理实例列表的查询和四层转发规则的查询拆分成两个接口，详情请参考 [查询四层代理实例列表](https://cloud.tencent.com/document/product/1552/103413) 和 [查询四层代理转发规则列表](https://cloud.tencent.com/document/product/1552/103412)。
                 * @param req DescribeApplicationProxiesRequest
                 * @return DescribeApplicationProxiesOutcome
                 */
                DescribeApplicationProxiesOutcome DescribeApplicationProxies(const Model::DescribeApplicationProxiesRequest &request);
                void DescribeApplicationProxiesAsync(const Model::DescribeApplicationProxiesRequest& request, const DescribeApplicationProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProxiesOutcomeCallable DescribeApplicationProxiesCallable(const Model::DescribeApplicationProxiesRequest& request);

                /**
                 *查询当前账户可用套餐信息列表
                 * @param req DescribeAvailablePlansRequest
                 * @return DescribeAvailablePlansOutcome
                 */
                DescribeAvailablePlansOutcome DescribeAvailablePlans(const Model::DescribeAvailablePlansRequest &request);
                void DescribeAvailablePlansAsync(const Model::DescribeAvailablePlansRequest& request, const DescribeAvailablePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailablePlansOutcomeCallable DescribeAvailablePlansCallable(const Model::DescribeAvailablePlansRequest& request);

                /**
                 *通过本接口查询计费数据。
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *在版本管理模式下，用于获取版本的详细信息，包括版本 ID、描述、状态、创建时间、所属配置组信息以及版本配置文件的内容。版本管理功能内测中，当前仅白名单开放。
                 * @param req DescribeConfigGroupVersionDetailRequest
                 * @return DescribeConfigGroupVersionDetailOutcome
                 */
                DescribeConfigGroupVersionDetailOutcome DescribeConfigGroupVersionDetail(const Model::DescribeConfigGroupVersionDetailRequest &request);
                void DescribeConfigGroupVersionDetailAsync(const Model::DescribeConfigGroupVersionDetailRequest& request, const DescribeConfigGroupVersionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigGroupVersionDetailOutcomeCallable DescribeConfigGroupVersionDetailCallable(const Model::DescribeConfigGroupVersionDetailRequest& request);

                /**
                 *在版本管理模式下，用于查询指定配置组的版本列表。版本管理功能内测中，当前仅白名单开放。
                 * @param req DescribeConfigGroupVersionsRequest
                 * @return DescribeConfigGroupVersionsOutcome
                 */
                DescribeConfigGroupVersionsOutcome DescribeConfigGroupVersions(const Model::DescribeConfigGroupVersionsRequest &request);
                void DescribeConfigGroupVersionsAsync(const Model::DescribeConfigGroupVersionsRequest& request, const DescribeConfigGroupVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigGroupVersionsOutcomeCallable DescribeConfigGroupVersionsCallable(const Model::DescribeConfigGroupVersionsRequest& request);

                /**
                 *批量查询内容标识符，可以根据 ID、描述、状态或者标签过滤。按照状态查询被删除的内容标识符仅保留三个月。该功能仅白名单开放。
                 * @param req DescribeContentIdentifiersRequest
                 * @return DescribeContentIdentifiersOutcome
                 */
                DescribeContentIdentifiersOutcome DescribeContentIdentifiers(const Model::DescribeContentIdentifiersRequest &request);
                void DescribeContentIdentifiersAsync(const Model::DescribeContentIdentifiersRequest& request, const DescribeContentIdentifiersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentIdentifiersOutcomeCallable DescribeContentIdentifiersCallable(const Model::DescribeContentIdentifiersRequest& request);

                /**
                 *查询内容管理接口配额
                 * @param req DescribeContentQuotaRequest
                 * @return DescribeContentQuotaOutcome
                 */
                DescribeContentQuotaOutcome DescribeContentQuota(const Model::DescribeContentQuotaRequest &request);
                void DescribeContentQuotaAsync(const Model::DescribeContentQuotaRequest& request, const DescribeContentQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentQuotaOutcomeCallable DescribeContentQuotaCallable(const Model::DescribeContentQuotaRequest& request);

                /**
                 *查询自定义错误页列表。
                 * @param req DescribeCustomErrorPagesRequest
                 * @return DescribeCustomErrorPagesOutcome
                 */
                DescribeCustomErrorPagesOutcome DescribeCustomErrorPages(const Model::DescribeCustomErrorPagesRequest &request);
                void DescribeCustomErrorPagesAsync(const Model::DescribeCustomErrorPagesRequest& request, const DescribeCustomErrorPagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomErrorPagesOutcomeCallable DescribeCustomErrorPagesCallable(const Model::DescribeCustomErrorPagesRequest& request);

                /**
                 *本接口（DescribeDDoSAttackData）用于查询DDoS攻击时序数据。
                 * @param req DescribeDDoSAttackDataRequest
                 * @return DescribeDDoSAttackDataOutcome
                 */
                DescribeDDoSAttackDataOutcome DescribeDDoSAttackData(const Model::DescribeDDoSAttackDataRequest &request);
                void DescribeDDoSAttackDataAsync(const Model::DescribeDDoSAttackDataRequest& request, const DescribeDDoSAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackDataOutcomeCallable DescribeDDoSAttackDataCallable(const Model::DescribeDDoSAttackDataRequest& request);

                /**
                 *本接口（DescribeDDoSAttackEvent）用于查询DDoS攻击事件列表。
                 * @param req DescribeDDoSAttackEventRequest
                 * @return DescribeDDoSAttackEventOutcome
                 */
                DescribeDDoSAttackEventOutcome DescribeDDoSAttackEvent(const Model::DescribeDDoSAttackEventRequest &request);
                void DescribeDDoSAttackEventAsync(const Model::DescribeDDoSAttackEventRequest& request, const DescribeDDoSAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackEventOutcomeCallable DescribeDDoSAttackEventCallable(const Model::DescribeDDoSAttackEventRequest& request);

                /**
                 *本接口（DescribeDDoSAttackTopData）用于查询DDoS攻击Top数据。
                 * @param req DescribeDDoSAttackTopDataRequest
                 * @return DescribeDDoSAttackTopDataOutcome
                 */
                DescribeDDoSAttackTopDataOutcome DescribeDDoSAttackTopData(const Model::DescribeDDoSAttackTopDataRequest &request);
                void DescribeDDoSAttackTopDataAsync(const Model::DescribeDDoSAttackTopDataRequest& request, const DescribeDDoSAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackTopDataOutcomeCallable DescribeDDoSAttackTopDataCallable(const Model::DescribeDDoSAttackTopDataRequest& request);

                /**
                 *查询默认证书列表
                 * @param req DescribeDefaultCertificatesRequest
                 * @return DescribeDefaultCertificatesOutcome
                 */
                DescribeDefaultCertificatesOutcome DescribeDefaultCertificates(const Model::DescribeDefaultCertificatesRequest &request);
                void DescribeDefaultCertificatesAsync(const Model::DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultCertificatesOutcomeCallable DescribeDefaultCertificatesCallable(const Model::DescribeDefaultCertificatesRequest& request);

                /**
                 *在版本管理模式下，用于查询生产/测试环境的版本发布历史。版本管理功能内测中，当前仅白名单开放。
                 * @param req DescribeDeployHistoryRequest
                 * @return DescribeDeployHistoryOutcome
                 */
                DescribeDeployHistoryOutcome DescribeDeployHistory(const Model::DescribeDeployHistoryRequest &request);
                void DescribeDeployHistoryAsync(const Model::DescribeDeployHistoryRequest& request, const DescribeDeployHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployHistoryOutcomeCallable DescribeDeployHistoryCallable(const Model::DescribeDeployHistoryRequest& request);

                /**
                 *您可以用过本接口查看站点下的 DNS 记录信息，包括 DNS 记录名、记录类型以及记录内容等信息，支持指定过滤条件查询对应的 DNS 记录信息。
                 * @param req DescribeDnsRecordsRequest
                 * @return DescribeDnsRecordsOutcome
                 */
                DescribeDnsRecordsOutcome DescribeDnsRecords(const Model::DescribeDnsRecordsRequest &request);
                void DescribeDnsRecordsAsync(const Model::DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsRecordsOutcomeCallable DescribeDnsRecordsCallable(const Model::DescribeDnsRecordsRequest& request);

                /**
                 *在版本管理模式下，用于查询环境信息，可获取环境 ID、类型、当前生效版本等。版本管理功能内测中，当前仅白名单开放。
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *查询边缘函数触发规则列表，支持按照规则 ID、函数 ID、规则描述等条件进行过滤。
                 * @param req DescribeFunctionRulesRequest
                 * @return DescribeFunctionRulesOutcome
                 */
                DescribeFunctionRulesOutcome DescribeFunctionRules(const Model::DescribeFunctionRulesRequest &request);
                void DescribeFunctionRulesAsync(const Model::DescribeFunctionRulesRequest& request, const DescribeFunctionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionRulesOutcomeCallable DescribeFunctionRulesCallable(const Model::DescribeFunctionRulesRequest& request);

                /**
                 *查询边缘函数运行环境，包括环境变量。
                 * @param req DescribeFunctionRuntimeEnvironmentRequest
                 * @return DescribeFunctionRuntimeEnvironmentOutcome
                 */
                DescribeFunctionRuntimeEnvironmentOutcome DescribeFunctionRuntimeEnvironment(const Model::DescribeFunctionRuntimeEnvironmentRequest &request);
                void DescribeFunctionRuntimeEnvironmentAsync(const Model::DescribeFunctionRuntimeEnvironmentRequest& request, const DescribeFunctionRuntimeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionRuntimeEnvironmentOutcomeCallable DescribeFunctionRuntimeEnvironmentCallable(const Model::DescribeFunctionRuntimeEnvironmentRequest& request);

                /**
                 *查询边缘函数列表，支持函数 ID、函数名称、描述等条件的过滤。
                 * @param req DescribeFunctionsRequest
                 * @return DescribeFunctionsOutcome
                 */
                DescribeFunctionsOutcome DescribeFunctions(const Model::DescribeFunctionsRequest &request);
                void DescribeFunctionsAsync(const Model::DescribeFunctionsRequest& request, const DescribeFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionsOutcomeCallable DescribeFunctionsCallable(const Model::DescribeFunctionsRequest& request);

                /**
                 *本接口为旧版，EdgeOne 已对规则引擎相关接口全面升级，可通过 [DescribeL7AccSetting](https://cloud.tencent.com/document/product/1552/115819) 和 [DescribeL7AccRules](https://cloud.tencent.com/document/product/1552/115820) 来获取域名的详细配置。
                 * @param req DescribeHostsSettingRequest
                 * @return DescribeHostsSettingOutcome
                 */
                DescribeHostsSettingOutcome DescribeHostsSetting(const Model::DescribeHostsSettingRequest &request);
                void DescribeHostsSettingAsync(const Model::DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsSettingOutcomeCallable DescribeHostsSettingCallable(const Model::DescribeHostsSettingRequest& request);

                /**
                 *该接口可用于查询 IP 是否为 EdgeOne IP。
                 * @param req DescribeIPRegionRequest
                 * @return DescribeIPRegionOutcome
                 */
                DescribeIPRegionOutcome DescribeIPRegion(const Model::DescribeIPRegionRequest &request);
                void DescribeIPRegionAsync(const Model::DescribeIPRegionRequest& request, const DescribeIPRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPRegionOutcomeCallable DescribeIPRegionCallable(const Model::DescribeIPRegionRequest& request);

                /**
                 *查询站点的验证信息。
                 * @param req DescribeIdentificationsRequest
                 * @return DescribeIdentificationsOutcome
                 */
                DescribeIdentificationsOutcome DescribeIdentifications(const Model::DescribeIdentificationsRequest &request);
                void DescribeIdentificationsAsync(const Model::DescribeIdentificationsRequest& request, const DescribeIdentificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentificationsOutcomeCallable DescribeIdentificationsCallable(const Model::DescribeIdentificationsRequest& request);

                /**
                 *用于查询四层代理实例列表。
                 * @param req DescribeL4ProxyRequest
                 * @return DescribeL4ProxyOutcome
                 */
                DescribeL4ProxyOutcome DescribeL4Proxy(const Model::DescribeL4ProxyRequest &request);
                void DescribeL4ProxyAsync(const Model::DescribeL4ProxyRequest& request, const DescribeL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4ProxyOutcomeCallable DescribeL4ProxyCallable(const Model::DescribeL4ProxyRequest& request);

                /**
                 *查询四层代理实例下的转发规则列表。
                 * @param req DescribeL4ProxyRulesRequest
                 * @return DescribeL4ProxyRulesOutcome
                 */
                DescribeL4ProxyRulesOutcome DescribeL4ProxyRules(const Model::DescribeL4ProxyRulesRequest &request);
                void DescribeL4ProxyRulesAsync(const Model::DescribeL4ProxyRulesRequest& request, const DescribeL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4ProxyRulesOutcomeCallable DescribeL4ProxyRulesCallable(const Model::DescribeL4ProxyRulesRequest& request);

                /**
                 *本接口用于查询[规则引擎](https://cloud.tencent.com/document/product/1552/70901)的规则列表。
                 * @param req DescribeL7AccRulesRequest
                 * @return DescribeL7AccRulesOutcome
                 */
                DescribeL7AccRulesOutcome DescribeL7AccRules(const Model::DescribeL7AccRulesRequest &request);
                void DescribeL7AccRulesAsync(const Model::DescribeL7AccRulesRequest& request, const DescribeL7AccRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7AccRulesOutcomeCallable DescribeL7AccRulesCallable(const Model::DescribeL7AccRulesRequest& request);

                /**
                 *本接口用于查询[站点加速](https://cloud.tencent.com/document/product/1552/96193)全局配置。
                 * @param req DescribeL7AccSettingRequest
                 * @return DescribeL7AccSettingOutcome
                 */
                DescribeL7AccSettingOutcome DescribeL7AccSetting(const Model::DescribeL7AccSettingRequest &request);
                void DescribeL7AccSettingAsync(const Model::DescribeL7AccSettingRequest& request, const DescribeL7AccSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7AccSettingOutcomeCallable DescribeL7AccSettingCallable(const Model::DescribeL7AccSettingRequest& request);

                /**
                 *查询负载均衡实例列表。负载均衡功能内测中，如您需要使用请 [联系我们](https://cloud.tencent.com/online-service)。
                 * @param req DescribeLoadBalancerListRequest
                 * @return DescribeLoadBalancerListOutcome
                 */
                DescribeLoadBalancerListOutcome DescribeLoadBalancerList(const Model::DescribeLoadBalancerListRequest &request);
                void DescribeLoadBalancerListAsync(const Model::DescribeLoadBalancerListRequest& request, const DescribeLoadBalancerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerListOutcomeCallable DescribeLoadBalancerListCallable(const Model::DescribeLoadBalancerListRequest& request);

                /**
                 *获取源站组列表
                 * @param req DescribeOriginGroupRequest
                 * @return DescribeOriginGroupOutcome
                 */
                DescribeOriginGroupOutcome DescribeOriginGroup(const Model::DescribeOriginGroupRequest &request);
                void DescribeOriginGroupAsync(const Model::DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupOutcomeCallable DescribeOriginGroupCallable(const Model::DescribeOriginGroupRequest& request);

                /**
                 *查询负载均衡实例下源站组健康状态。负载均衡功能内测中，如您需要使用请 [联系我们](https://cloud.tencent.com/online-service)。
                 * @param req DescribeOriginGroupHealthStatusRequest
                 * @return DescribeOriginGroupHealthStatusOutcome
                 */
                DescribeOriginGroupHealthStatusOutcome DescribeOriginGroupHealthStatus(const Model::DescribeOriginGroupHealthStatusRequest &request);
                void DescribeOriginGroupHealthStatusAsync(const Model::DescribeOriginGroupHealthStatusRequest& request, const DescribeOriginGroupHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupHealthStatusOutcomeCallable DescribeOriginGroupHealthStatusCallable(const Model::DescribeOriginGroupHealthStatusRequest& request);

                /**
                 *查询源站防护信息
                 * @param req DescribeOriginProtectionRequest
                 * @return DescribeOriginProtectionOutcome
                 */
                DescribeOriginProtectionOutcome DescribeOriginProtection(const Model::DescribeOriginProtectionRequest &request);
                void DescribeOriginProtectionAsync(const Model::DescribeOriginProtectionRequest& request, const DescribeOriginProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginProtectionOutcomeCallable DescribeOriginProtectionCallable(const Model::DescribeOriginProtectionRequest& request);

                /**
                 *本接口（DescribeOverviewL7Data）用于查询七层监控类时序流量数据。此接口待废弃，请使用 <a href="https://cloud.tencent.com/document/product/1552/80648">DescribeTimingL7AnalysisData</a> 接口。
                 * @param req DescribeOverviewL7DataRequest
                 * @return DescribeOverviewL7DataOutcome
                 */
                DescribeOverviewL7DataOutcome DescribeOverviewL7Data(const Model::DescribeOverviewL7DataRequest &request);
                void DescribeOverviewL7DataAsync(const Model::DescribeOverviewL7DataRequest& request, const DescribeOverviewL7DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewL7DataOutcomeCallable DescribeOverviewL7DataCallable(const Model::DescribeOverviewL7DataRequest& request);

                /**
                 *查询套餐信息列表，支持分页。
                 * @param req DescribePlansRequest
                 * @return DescribePlansOutcome
                 */
                DescribePlansOutcome DescribePlans(const Model::DescribePlansRequest &request);
                void DescribePlansAsync(const Model::DescribePlansRequest& request, const DescribePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlansOutcomeCallable DescribePlansCallable(const Model::DescribePlansRequest& request);

                /**
                 *DescribePrefetchTasks 用于查询预热任务提交历史记录及执行进度，通过 CreatePrefetchTasks 接口提交的任务可通过此接口进行查询。
                 * @param req DescribePrefetchTasksRequest
                 * @return DescribePrefetchTasksOutcome
                 */
                DescribePrefetchTasksOutcome DescribePrefetchTasks(const Model::DescribePrefetchTasksRequest &request);
                void DescribePrefetchTasksAsync(const Model::DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrefetchTasksOutcomeCallable DescribePrefetchTasksCallable(const Model::DescribePrefetchTasksRequest& request);

                /**
                 *DescribePurgeTasks 用于查询提交的 URL 刷新、目录刷新记录及执行进度，通过 CreatePurgeTasks 接口提交的任务均可通过此接口进行查询。
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *通过本接口查询实时日志投递任务列表。
                 * @param req DescribeRealtimeLogDeliveryTasksRequest
                 * @return DescribeRealtimeLogDeliveryTasksOutcome
                 */
                DescribeRealtimeLogDeliveryTasksOutcome DescribeRealtimeLogDeliveryTasks(const Model::DescribeRealtimeLogDeliveryTasksRequest &request);
                void DescribeRealtimeLogDeliveryTasksAsync(const Model::DescribeRealtimeLogDeliveryTasksRequest& request, const DescribeRealtimeLogDeliveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeLogDeliveryTasksOutcomeCallable DescribeRealtimeLogDeliveryTasksCallable(const Model::DescribeRealtimeLogDeliveryTasksRequest& request);

                /**
                 *本接口为旧版本查询规则引擎规则接口，EdgeOne 于 2025 年 1 月 21 日已对规则引擎相关接口全面升级，新版本查询七层加速规则接口详情请参考  [DescribeL7AccRules](https://cloud.tencent.com/document/product/1552/115820)。
<p style="color: red;">注意：自 2025 年 1 月 21 日起，旧版接口停止更新迭代，后续新增功能将仅在新版接口中提供，旧版接口支持的原有能力将不受影响。为避免在使用旧版接口时出现数据字段冲突，建议您尽早迁移到新版规则引擎接口。</p>
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *本接口为旧版，EdgeOne 已对规则引擎相关接口全面升级，详情请参考 [RuleEngineAction](https://cloud.tencent.com/document/product/1552/80721#RuleEngineAction)。
                 * @param req DescribeRulesSettingRequest
                 * @return DescribeRulesSettingOutcome
                 */
                DescribeRulesSettingOutcome DescribeRulesSetting(const Model::DescribeRulesSettingRequest &request);
                void DescribeRulesSettingAsync(const Model::DescribeRulesSettingRequest& request, const DescribeRulesSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesSettingOutcomeCallable DescribeRulesSettingCallable(const Model::DescribeRulesSettingRequest& request);

                /**
                 *查询安全 IP 组的配置信息，包括安全 IP 组的 ID、名称和内容。
                 * @param req DescribeSecurityIPGroupRequest
                 * @return DescribeSecurityIPGroupOutcome
                 */
                DescribeSecurityIPGroupOutcome DescribeSecurityIPGroup(const Model::DescribeSecurityIPGroupRequest &request);
                void DescribeSecurityIPGroupAsync(const Model::DescribeSecurityIPGroupRequest& request, const DescribeSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityIPGroupOutcomeCallable DescribeSecurityIPGroupCallable(const Model::DescribeSecurityIPGroupRequest& request);

                /**
                 *接口已废弃，将于 2024 年 6 月 30 日停止服务。请使用 [查询安全 IP 组
](https://cloud.tencent.com/document/product/1552/105866) 接口。

查询 IP 组的配置信息，包括 IP 组名称、 IP 组内容、 IP 组归属站点。
                 * @param req DescribeSecurityIPGroupInfoRequest
                 * @return DescribeSecurityIPGroupInfoOutcome
                 */
                DescribeSecurityIPGroupInfoOutcome DescribeSecurityIPGroupInfo(const Model::DescribeSecurityIPGroupInfoRequest &request);
                void DescribeSecurityIPGroupInfoAsync(const Model::DescribeSecurityIPGroupInfoRequest& request, const DescribeSecurityIPGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityIPGroupInfoOutcomeCallable DescribeSecurityIPGroupInfoCallable(const Model::DescribeSecurityIPGroupInfoRequest& request);

                /**
                 *查询安全防护配置详情。
                 * @param req DescribeSecurityPolicyRequest
                 * @return DescribeSecurityPolicyOutcome
                 */
                DescribeSecurityPolicyOutcome DescribeSecurityPolicy(const Model::DescribeSecurityPolicyRequest &request);
                void DescribeSecurityPolicyAsync(const Model::DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyOutcomeCallable DescribeSecurityPolicyCallable(const Model::DescribeSecurityPolicyRequest& request);

                /**
                 *查询指定策略模板的绑定关系列表。
                 * @param req DescribeSecurityTemplateBindingsRequest
                 * @return DescribeSecurityTemplateBindingsOutcome
                 */
                DescribeSecurityTemplateBindingsOutcome DescribeSecurityTemplateBindings(const Model::DescribeSecurityTemplateBindingsRequest &request);
                void DescribeSecurityTemplateBindingsAsync(const Model::DescribeSecurityTemplateBindingsRequest& request, const DescribeSecurityTemplateBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityTemplateBindingsOutcomeCallable DescribeSecurityTemplateBindingsCallable(const Model::DescribeSecurityTemplateBindingsRequest& request);

                /**
                 *本接口（DescribeTimingL4Data）用于查询四层时序流量数据列表。
                 * @param req DescribeTimingL4DataRequest
                 * @return DescribeTimingL4DataOutcome
                 */
                DescribeTimingL4DataOutcome DescribeTimingL4Data(const Model::DescribeTimingL4DataRequest &request);
                void DescribeTimingL4DataAsync(const Model::DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL4DataOutcomeCallable DescribeTimingL4DataCallable(const Model::DescribeTimingL4DataRequest& request);

                /**
                 *本接口查询七层域名业务的时序数据。请注意本接口查询数据有 10 分钟左右延迟，建议拉取当前时间 10 分钟以前的数据。
                 * @param req DescribeTimingL7AnalysisDataRequest
                 * @return DescribeTimingL7AnalysisDataOutcome
                 */
                DescribeTimingL7AnalysisDataOutcome DescribeTimingL7AnalysisData(const Model::DescribeTimingL7AnalysisDataRequest &request);
                void DescribeTimingL7AnalysisDataAsync(const Model::DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7AnalysisDataOutcomeCallable DescribeTimingL7AnalysisDataCallable(const Model::DescribeTimingL7AnalysisDataRequest& request);

                /**
                 *本接口用于查询七层缓存分析时序类流量数据。此接口待废弃，请使用 <a href="https://cloud.tencent.com/document/product/1552/80648">DescribeTimingL7AnalysisData</a> 接口。
                 * @param req DescribeTimingL7CacheDataRequest
                 * @return DescribeTimingL7CacheDataOutcome
                 */
                DescribeTimingL7CacheDataOutcome DescribeTimingL7CacheData(const Model::DescribeTimingL7CacheDataRequest &request);
                void DescribeTimingL7CacheDataAsync(const Model::DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7CacheDataOutcomeCallable DescribeTimingL7CacheDataCallable(const Model::DescribeTimingL7CacheDataRequest& request);

                /**
                 *本接口用于查询七层域名业务按照指定维度的 topN 数据。请注意本接口查询数据有 10 分钟左右延迟，建议拉取当前时间 10 分钟以前的数据。
                 * @param req DescribeTopL7AnalysisDataRequest
                 * @return DescribeTopL7AnalysisDataOutcome
                 */
                DescribeTopL7AnalysisDataOutcome DescribeTopL7AnalysisData(const Model::DescribeTopL7AnalysisDataRequest &request);
                void DescribeTopL7AnalysisDataAsync(const Model::DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7AnalysisDataOutcomeCallable DescribeTopL7AnalysisDataCallable(const Model::DescribeTopL7AnalysisDataRequest& request);

                /**
                 *本接口用于查询七层缓存分析 topN 数据。此接口待废弃，请使用 <a href="https://cloud.tencent.com/document/product/1552/80646"> DescribeTopL7AnalysisData</a> 接口。
                 * @param req DescribeTopL7CacheDataRequest
                 * @return DescribeTopL7CacheDataOutcome
                 */
                DescribeTopL7CacheDataOutcome DescribeTopL7CacheData(const Model::DescribeTopL7CacheDataRequest &request);
                void DescribeTopL7CacheDataAsync(const Model::DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7CacheDataOutcomeCallable DescribeTopL7CacheDataCallable(const Model::DescribeTopL7CacheDataRequest& request);

                /**
                 *查询站点配置项导入结果接口，本接口用于站点配置导入接口（ImportZoneConfig）的结果查询。该功能仅支持标准版或企业版套餐的站点使用。
                 * @param req DescribeZoneConfigImportResultRequest
                 * @return DescribeZoneConfigImportResultOutcome
                 */
                DescribeZoneConfigImportResultOutcome DescribeZoneConfigImportResult(const Model::DescribeZoneConfigImportResultRequest &request);
                void DescribeZoneConfigImportResultAsync(const Model::DescribeZoneConfigImportResultRequest& request, const DescribeZoneConfigImportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneConfigImportResultOutcomeCallable DescribeZoneConfigImportResultCallable(const Model::DescribeZoneConfigImportResultRequest& request);

                /**
                 *本接口为旧版，EdgeOne 已对规则引擎相关接口全面升级，详情请参考 [DescribeL7AccSetting](https://cloud.tencent.com/document/product/1552/115819)。
                 * @param req DescribeZoneSettingRequest
                 * @return DescribeZoneSettingOutcome
                 */
                DescribeZoneSettingOutcome DescribeZoneSetting(const Model::DescribeZoneSettingRequest &request);
                void DescribeZoneSettingAsync(const Model::DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneSettingOutcomeCallable DescribeZoneSettingCallable(const Model::DescribeZoneSettingRequest& request);

                /**
                 *该接口用于查询您有权限的站点信息。可根据不同查询条件筛选站点。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *当您需要停止 Edgeone 套餐的计费，可以通过该接口销毁计费套餐。
> 销毁计费套餐需要满足以下条件：
    1.套餐已过期（企业版套餐除外）；
    2.套餐下所有站点均已关闭或删除。

> 站点状态可以通过 [查询站点列表](https://cloud.tencent.com/document/product/1552/80713) 接口进行查询
停用站点可以通过 [切换站点状态](https://cloud.tencent.com/document/product/1552/80707) 接口将站点切换至关闭状态
删除站点可以通过 [删除站点](https://cloud.tencent.com/document/product/1552/80717) 接口将站点删除
                 * @param req DestroyPlanRequest
                 * @return DestroyPlanOutcome
                 */
                DestroyPlanOutcome DestroyPlan(const Model::DestroyPlanRequest &request);
                void DestroyPlanAsync(const Model::DestroyPlanRequest& request, const DestroyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPlanOutcomeCallable DestroyPlanCallable(const Model::DestroyPlanRequest& request);

                /**
                 *本接口（DownloadL4Logs）用于下载四层离线日志。
                 * @param req DownloadL4LogsRequest
                 * @return DownloadL4LogsOutcome
                 */
                DownloadL4LogsOutcome DownloadL4Logs(const Model::DownloadL4LogsRequest &request);
                void DownloadL4LogsAsync(const Model::DownloadL4LogsRequest& request, const DownloadL4LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL4LogsOutcomeCallable DownloadL4LogsCallable(const Model::DownloadL4LogsRequest& request);

                /**
                 *本接口（DownloadL7Logs）下载七层离线日志。
                 * @param req DownloadL7LogsRequest
                 * @return DownloadL7LogsOutcome
                 */
                DownloadL7LogsOutcome DownloadL7Logs(const Model::DownloadL7LogsRequest &request);
                void DownloadL7LogsAsync(const Model::DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL7LogsOutcomeCallable DownloadL7LogsCallable(const Model::DownloadL7LogsRequest& request);

                /**
                 *导出站点配置接口，本接口支持用户根据需要的配置项进行配置导出，导出的配置用于导入站点配置接口（ImportZoneConfig）进行配置导入。该功能仅支持标准版和企业版套餐站点使用。
                 * @param req ExportZoneConfigRequest
                 * @return ExportZoneConfigOutcome
                 */
                ExportZoneConfigOutcome ExportZoneConfig(const Model::ExportZoneConfigRequest &request);
                void ExportZoneConfigAsync(const Model::ExportZoneConfigRequest& request, const ExportZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportZoneConfigOutcomeCallable ExportZoneConfigCallable(const Model::ExportZoneConfigRequest& request);

                /**
                 *操作边缘函数运行环境，支持环境变量的相关设置。
设置环境变量后，可在函数代码中使用，具体参考 [边缘函数引入环境变量](https://cloud.tencent.com/document/product/1552/109151#0151fd9a-8b0e-407b-ae37-54553a60ded6)。
                 * @param req HandleFunctionRuntimeEnvironmentRequest
                 * @return HandleFunctionRuntimeEnvironmentOutcome
                 */
                HandleFunctionRuntimeEnvironmentOutcome HandleFunctionRuntimeEnvironment(const Model::HandleFunctionRuntimeEnvironmentRequest &request);
                void HandleFunctionRuntimeEnvironmentAsync(const Model::HandleFunctionRuntimeEnvironmentRequest& request, const HandleFunctionRuntimeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HandleFunctionRuntimeEnvironmentOutcomeCallable HandleFunctionRuntimeEnvironmentCallable(const Model::HandleFunctionRuntimeEnvironmentRequest& request);

                /**
                 *用于验证站点所有权。
                 * @param req IdentifyZoneRequest
                 * @return IdentifyZoneOutcome
                 */
                IdentifyZoneOutcome IdentifyZone(const Model::IdentifyZoneRequest &request);
                void IdentifyZoneAsync(const Model::IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdentifyZoneOutcomeCallable IdentifyZoneCallable(const Model::IdentifyZoneRequest& request);

                /**
                 *导入站点配置接口，本接口支持站点配置文件的快速导入，发起导入后接口会返回对应的任务 ID（TaskId），用户需通过查询站点配置导入结果接口（DescribeZoneConfigImportResult）获取本次导入任务执行的结果。该功能仅支持标准版和企业版套餐站点使用。
                 * @param req ImportZoneConfigRequest
                 * @return ImportZoneConfigOutcome
                 */
                ImportZoneConfigOutcome ImportZoneConfig(const Model::ImportZoneConfigRequest &request);
                void ImportZoneConfigAsync(const Model::ImportZoneConfigRequest& request, const ImportZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportZoneConfigOutcomeCallable ImportZoneConfigCallable(const Model::ImportZoneConfigRequest& request);

                /**
                 *当您的套餐绑定的站点数，或配置的 Web 防护 - 自定义规则 - 精准匹配策略的规则数，或 Web 防护 - 速率限制 - 精准速率限制模块的规则数达到套餐允许的配额上限，可以通过该接口增购对应配额。
> 该接口该仅支持企业版套餐。
                 * @param req IncreasePlanQuotaRequest
                 * @return IncreasePlanQuotaOutcome
                 */
                IncreasePlanQuotaOutcome IncreasePlanQuota(const Model::IncreasePlanQuotaRequest &request);
                void IncreasePlanQuotaAsync(const Model::IncreasePlanQuotaRequest& request, const IncreasePlanQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IncreasePlanQuotaOutcomeCallable IncreasePlanQuotaCallable(const Model::IncreasePlanQuotaRequest& request);

                /**
                 *修改加速域名信息
                 * @param req ModifyAccelerationDomainRequest
                 * @return ModifyAccelerationDomainOutcome
                 */
                ModifyAccelerationDomainOutcome ModifyAccelerationDomain(const Model::ModifyAccelerationDomainRequest &request);
                void ModifyAccelerationDomainAsync(const Model::ModifyAccelerationDomainRequest& request, const ModifyAccelerationDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccelerationDomainOutcomeCallable ModifyAccelerationDomainCallable(const Model::ModifyAccelerationDomainRequest& request);

                /**
                 *批量修改加速域名状态
                 * @param req ModifyAccelerationDomainStatusesRequest
                 * @return ModifyAccelerationDomainStatusesOutcome
                 */
                ModifyAccelerationDomainStatusesOutcome ModifyAccelerationDomainStatuses(const Model::ModifyAccelerationDomainStatusesRequest &request);
                void ModifyAccelerationDomainStatusesAsync(const Model::ModifyAccelerationDomainStatusesRequest& request, const ModifyAccelerationDomainStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccelerationDomainStatusesOutcomeCallable ModifyAccelerationDomainStatusesCallable(const Model::ModifyAccelerationDomainStatusesRequest& request);

                /**
                 *修改别称域名。
该功能仅企业版套餐支持，并且该功能当前仍在内测中，如需使用，请[联系我们](https://cloud.tencent.com/online-service?from=connect-us)。
                 * @param req ModifyAliasDomainRequest
                 * @return ModifyAliasDomainOutcome
                 */
                ModifyAliasDomainOutcome ModifyAliasDomain(const Model::ModifyAliasDomainRequest &request);
                void ModifyAliasDomainAsync(const Model::ModifyAliasDomainRequest& request, const ModifyAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAliasDomainOutcomeCallable ModifyAliasDomainCallable(const Model::ModifyAliasDomainRequest& request);

                /**
                 *修改别称域名状态。
该功能仅企业版套餐支持，并且该功能当前仍在内测中，如需使用，请[联系我们](https://cloud.tencent.com/online-service?from=connect-us)。
                 * @param req ModifyAliasDomainStatusRequest
                 * @return ModifyAliasDomainStatusOutcome
                 */
                ModifyAliasDomainStatusOutcome ModifyAliasDomainStatus(const Model::ModifyAliasDomainStatusRequest &request);
                void ModifyAliasDomainStatusAsync(const Model::ModifyAliasDomainStatusRequest& request, const ModifyAliasDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAliasDomainStatusOutcomeCallable ModifyAliasDomainStatusCallable(const Model::ModifyAliasDomainStatusRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [修改四层代理实例
](https://cloud.tencent.com/document/product/1552/103411) 。
                 * @param req ModifyApplicationProxyRequest
                 * @return ModifyApplicationProxyOutcome
                 */
                ModifyApplicationProxyOutcome ModifyApplicationProxy(const Model::ModifyApplicationProxyRequest &request);
                void ModifyApplicationProxyAsync(const Model::ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyOutcomeCallable ModifyApplicationProxyCallable(const Model::ModifyApplicationProxyRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [修改四层代理转发规则
](https://cloud.tencent.com/document/product/1552/103410) 。
                 * @param req ModifyApplicationProxyRuleRequest
                 * @return ModifyApplicationProxyRuleOutcome
                 */
                ModifyApplicationProxyRuleOutcome ModifyApplicationProxyRule(const Model::ModifyApplicationProxyRuleRequest &request);
                void ModifyApplicationProxyRuleAsync(const Model::ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleOutcomeCallable ModifyApplicationProxyRuleCallable(const Model::ModifyApplicationProxyRuleRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [修改四层代理转发规则状态
](https://cloud.tencent.com/document/product/1552/103409) 。
                 * @param req ModifyApplicationProxyRuleStatusRequest
                 * @return ModifyApplicationProxyRuleStatusOutcome
                 */
                ModifyApplicationProxyRuleStatusOutcome ModifyApplicationProxyRuleStatus(const Model::ModifyApplicationProxyRuleStatusRequest &request);
                void ModifyApplicationProxyRuleStatusAsync(const Model::ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleStatusOutcomeCallable ModifyApplicationProxyRuleStatusCallable(const Model::ModifyApplicationProxyRuleStatusRequest& request);

                /**
                 *本接口为旧版，如需调用请尽快迁移至新版，详情请参考 [修改四层代理实例状态](https://cloud.tencent.com/document/product/1552/103408) 。
                 * @param req ModifyApplicationProxyStatusRequest
                 * @return ModifyApplicationProxyStatusOutcome
                 */
                ModifyApplicationProxyStatusOutcome ModifyApplicationProxyStatus(const Model::ModifyApplicationProxyStatusRequest &request);
                void ModifyApplicationProxyStatusAsync(const Model::ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyStatusOutcomeCallable ModifyApplicationProxyStatusCallable(const Model::ModifyApplicationProxyStatusRequest& request);

                /**
                 *修改内容标识符，仅支持修改描述。该功能仅白名单开放。
                 * @param req ModifyContentIdentifierRequest
                 * @return ModifyContentIdentifierOutcome
                 */
                ModifyContentIdentifierOutcome ModifyContentIdentifier(const Model::ModifyContentIdentifierRequest &request);
                void ModifyContentIdentifierAsync(const Model::ModifyContentIdentifierRequest& request, const ModifyContentIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentIdentifierOutcomeCallable ModifyContentIdentifierCallable(const Model::ModifyContentIdentifierRequest& request);

                /**
                 *修改自定义错误页面。
                 * @param req ModifyCustomErrorPageRequest
                 * @return ModifyCustomErrorPageOutcome
                 */
                ModifyCustomErrorPageOutcome ModifyCustomErrorPage(const Model::ModifyCustomErrorPageRequest &request);
                void ModifyCustomErrorPageAsync(const Model::ModifyCustomErrorPageRequest& request, const ModifyCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomErrorPageOutcomeCallable ModifyCustomErrorPageCallable(const Model::ModifyCustomErrorPageRequest& request);

                /**
                 *您可以通过本接口批量修改 DNS 记录。
                 * @param req ModifyDnsRecordsRequest
                 * @return ModifyDnsRecordsOutcome
                 */
                ModifyDnsRecordsOutcome ModifyDnsRecords(const Model::ModifyDnsRecordsRequest &request);
                void ModifyDnsRecordsAsync(const Model::ModifyDnsRecordsRequest& request, const ModifyDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnsRecordsOutcomeCallable ModifyDnsRecordsCallable(const Model::ModifyDnsRecordsRequest& request);

                /**
                 *您可以通过本接口批量修改 DNS 记录的状态，批量对记录进行开启和停用。
                 * @param req ModifyDnsRecordsStatusRequest
                 * @return ModifyDnsRecordsStatusOutcome
                 */
                ModifyDnsRecordsStatusOutcome ModifyDnsRecordsStatus(const Model::ModifyDnsRecordsStatusRequest &request);
                void ModifyDnsRecordsStatusAsync(const Model::ModifyDnsRecordsStatusRequest& request, const ModifyDnsRecordsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnsRecordsStatusOutcomeCallable ModifyDnsRecordsStatusCallable(const Model::ModifyDnsRecordsStatusRequest& request);

                /**
                 *修改边缘函数，支持修改函数的内容及描述信息，修改且重新部署后，函数立刻生效。
                 * @param req ModifyFunctionRequest
                 * @return ModifyFunctionOutcome
                 */
                ModifyFunctionOutcome ModifyFunction(const Model::ModifyFunctionRequest &request);
                void ModifyFunctionAsync(const Model::ModifyFunctionRequest& request, const ModifyFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFunctionOutcomeCallable ModifyFunctionCallable(const Model::ModifyFunctionRequest& request);

                /**
                 *修改边缘函数触发规则，支持修改规则条件、执行函数以及描述信息。
                 * @param req ModifyFunctionRuleRequest
                 * @return ModifyFunctionRuleOutcome
                 */
                ModifyFunctionRuleOutcome ModifyFunctionRule(const Model::ModifyFunctionRuleRequest &request);
                void ModifyFunctionRuleAsync(const Model::ModifyFunctionRuleRequest& request, const ModifyFunctionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFunctionRuleOutcomeCallable ModifyFunctionRuleCallable(const Model::ModifyFunctionRuleRequest& request);

                /**
                 *修改边缘函数触发规则的优先级。
                 * @param req ModifyFunctionRulePriorityRequest
                 * @return ModifyFunctionRulePriorityOutcome
                 */
                ModifyFunctionRulePriorityOutcome ModifyFunctionRulePriority(const Model::ModifyFunctionRulePriorityRequest &request);
                void ModifyFunctionRulePriorityAsync(const Model::ModifyFunctionRulePriorityRequest& request, const ModifyFunctionRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFunctionRulePriorityOutcomeCallable ModifyFunctionRulePriorityCallable(const Model::ModifyFunctionRulePriorityRequest& request);

                /**
                 *完成域名创建之后，您可以为域名配置自有证书，也可以使用 EdgeOne 为您提供的 [免费证书](https://cloud.tencent.com/document/product/1552/90437)。
如果您需要配置自有证书，请先将证书上传至 [SSL证书控制台](https://console.cloud.tencent.com/certoverview)，然后在本接口中传入对应的证书 ID。详情参考 [部署自有证书至 EdgeOne 域名
](https://cloud.tencent.com/document/product/1552/88874)。
                 * @param req ModifyHostsCertificateRequest
                 * @return ModifyHostsCertificateOutcome
                 */
                ModifyHostsCertificateOutcome ModifyHostsCertificate(const Model::ModifyHostsCertificateRequest &request);
                void ModifyHostsCertificateAsync(const Model::ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsCertificateOutcomeCallable ModifyHostsCertificateCallable(const Model::ModifyHostsCertificateRequest& request);

                /**
                 *用于修改四层代理实例的配置。
                 * @param req ModifyL4ProxyRequest
                 * @return ModifyL4ProxyOutcome
                 */
                ModifyL4ProxyOutcome ModifyL4Proxy(const Model::ModifyL4ProxyRequest &request);
                void ModifyL4ProxyAsync(const Model::ModifyL4ProxyRequest& request, const ModifyL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyOutcomeCallable ModifyL4ProxyCallable(const Model::ModifyL4ProxyRequest& request);

                /**
                 *用于修改四层代理转发规则，支持单条或者批量修改。
                 * @param req ModifyL4ProxyRulesRequest
                 * @return ModifyL4ProxyRulesOutcome
                 */
                ModifyL4ProxyRulesOutcome ModifyL4ProxyRules(const Model::ModifyL4ProxyRulesRequest &request);
                void ModifyL4ProxyRulesAsync(const Model::ModifyL4ProxyRulesRequest& request, const ModifyL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyRulesOutcomeCallable ModifyL4ProxyRulesCallable(const Model::ModifyL4ProxyRulesRequest& request);

                /**
                 *用于启用/停用四层代理转发规则状态，支持单条或者批量操作。
                 * @param req ModifyL4ProxyRulesStatusRequest
                 * @return ModifyL4ProxyRulesStatusOutcome
                 */
                ModifyL4ProxyRulesStatusOutcome ModifyL4ProxyRulesStatus(const Model::ModifyL4ProxyRulesStatusRequest &request);
                void ModifyL4ProxyRulesStatusAsync(const Model::ModifyL4ProxyRulesStatusRequest& request, const ModifyL4ProxyRulesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyRulesStatusOutcomeCallable ModifyL4ProxyRulesStatusCallable(const Model::ModifyL4ProxyRulesStatusRequest& request);

                /**
                 *用于启用/停用四层代理实例。
                 * @param req ModifyL4ProxyStatusRequest
                 * @return ModifyL4ProxyStatusOutcome
                 */
                ModifyL4ProxyStatusOutcome ModifyL4ProxyStatus(const Model::ModifyL4ProxyStatusRequest &request);
                void ModifyL4ProxyStatusAsync(const Model::ModifyL4ProxyStatusRequest& request, const ModifyL4ProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyStatusOutcomeCallable ModifyL4ProxyStatusCallable(const Model::ModifyL4ProxyStatusRequest& request);

                /**
                 *本接口用于修改[规则引擎](https://cloud.tencent.com/document/product/1552/70901)中的规则，单次仅支持修改单条规则。
                 * @param req ModifyL7AccRuleRequest
                 * @return ModifyL7AccRuleOutcome
                 */
                ModifyL7AccRuleOutcome ModifyL7AccRule(const Model::ModifyL7AccRuleRequest &request);
                void ModifyL7AccRuleAsync(const Model::ModifyL7AccRuleRequest& request, const ModifyL7AccRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7AccRuleOutcomeCallable ModifyL7AccRuleCallable(const Model::ModifyL7AccRuleRequest& request);

                /**
                 *本接口用于修改[规则引擎](https://cloud.tencent.com/document/product/1552/70901)中规则列表的优先级，本接口需要传入站点 ID 下完整的规则 ID 列表，规则 ID 列表可以通过[查询七层加速规则](https://cloud.tencent.com/document/product/1552/115820)接口获取，最终优先级顺序将调整成规则 ID 列表的顺序，从前往后执行。
                 * @param req ModifyL7AccRulePriorityRequest
                 * @return ModifyL7AccRulePriorityOutcome
                 */
                ModifyL7AccRulePriorityOutcome ModifyL7AccRulePriority(const Model::ModifyL7AccRulePriorityRequest &request);
                void ModifyL7AccRulePriorityAsync(const Model::ModifyL7AccRulePriorityRequest& request, const ModifyL7AccRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7AccRulePriorityOutcomeCallable ModifyL7AccRulePriorityCallable(const Model::ModifyL7AccRulePriorityRequest& request);

                /**
                 *本接口用于修改[站点加速](https://cloud.tencent.com/document/product/1552/96193)全局配置。
                 * @param req ModifyL7AccSettingRequest
                 * @return ModifyL7AccSettingOutcome
                 */
                ModifyL7AccSettingOutcome ModifyL7AccSetting(const Model::ModifyL7AccSettingRequest &request);
                void ModifyL7AccSettingAsync(const Model::ModifyL7AccSettingRequest& request, const ModifyL7AccSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7AccSettingOutcomeCallable ModifyL7AccSettingCallable(const Model::ModifyL7AccSettingRequest& request);

                /**
                 *修改负载均衡实例配置。负载均衡功能内测中，如您需要使用请 [联系我们](https://cloud.tencent.com/online-service)。
                 * @param req ModifyLoadBalancerRequest
                 * @return ModifyLoadBalancerOutcome
                 */
                ModifyLoadBalancerOutcome ModifyLoadBalancer(const Model::ModifyLoadBalancerRequest &request);
                void ModifyLoadBalancerAsync(const Model::ModifyLoadBalancerRequest& request, const ModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerOutcomeCallable ModifyLoadBalancerCallable(const Model::ModifyLoadBalancerRequest& request);

                /**
                 *修改源站组配置，新提交的源站记录将会覆盖原有源站组中的源站记录。
                 * @param req ModifyOriginGroupRequest
                 * @return ModifyOriginGroupOutcome
                 */
                ModifyOriginGroupOutcome ModifyOriginGroup(const Model::ModifyOriginGroupRequest &request);
                void ModifyOriginGroupAsync(const Model::ModifyOriginGroupRequest& request, const ModifyOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOriginGroupOutcomeCallable ModifyOriginGroupCallable(const Model::ModifyOriginGroupRequest& request);

                /**
                 *修改套餐配置。目前仅支持修改预付费套餐的自动续费开关。
                 * @param req ModifyPlanRequest
                 * @return ModifyPlanOutcome
                 */
                ModifyPlanOutcome ModifyPlan(const Model::ModifyPlanRequest &request);
                void ModifyPlanAsync(const Model::ModifyPlanRequest& request, const ModifyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPlanOutcomeCallable ModifyPlanCallable(const Model::ModifyPlanRequest& request);

                /**
                 *通过本接口修改实时日志投递任务配置。本接口有如下限制：<li>不支持修改实时日志投递任务目的地类型（TaskType）；</li><li>不支持修改数据投递类型（LogType）</li><li>不支持修改数据投递区域（Area）</li><li>当原实时日志投递任务的目的地为腾讯云 CLS 时，不支持修改目的地详细配置，如日志集、日志主题。</li>
                 * @param req ModifyRealtimeLogDeliveryTaskRequest
                 * @return ModifyRealtimeLogDeliveryTaskOutcome
                 */
                ModifyRealtimeLogDeliveryTaskOutcome ModifyRealtimeLogDeliveryTask(const Model::ModifyRealtimeLogDeliveryTaskRequest &request);
                void ModifyRealtimeLogDeliveryTaskAsync(const Model::ModifyRealtimeLogDeliveryTaskRequest& request, const ModifyRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRealtimeLogDeliveryTaskOutcomeCallable ModifyRealtimeLogDeliveryTaskCallable(const Model::ModifyRealtimeLogDeliveryTaskRequest& request);

                /**
                 *本接口为旧版本修改规则引擎接口，EdgeOne 于 2025 年 1 月 21 日已对规则引擎相关接口全面升级，新版本修改七层加速规则接口详情请参考 [ModifyL7AccRule](https://cloud.tencent.com/document/product/1552/115818)。
<p style="color: red;">注意：自 2025 年 1 月 21 日起，旧版接口停止更新迭代，后续新增功能将仅在新版接口中提供，旧版接口支持的原有能力将不受影响。为避免在使用旧版接口时出现数据字段冲突，建议您尽早迁移到新版规则引擎接口。</p>
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *修改安全 IP 组。
                 * @param req ModifySecurityIPGroupRequest
                 * @return ModifySecurityIPGroupOutcome
                 */
                ModifySecurityIPGroupOutcome ModifySecurityIPGroup(const Model::ModifySecurityIPGroupRequest &request);
                void ModifySecurityIPGroupAsync(const Model::ModifySecurityIPGroupRequest& request, const ModifySecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityIPGroupOutcomeCallable ModifySecurityIPGroupCallable(const Model::ModifySecurityIPGroupRequest& request);

                /**
                 *修改Web&Bot安全配置。
                 * @param req ModifySecurityPolicyRequest
                 * @return ModifySecurityPolicyOutcome
                 */
                ModifySecurityPolicyOutcome ModifySecurityPolicy(const Model::ModifySecurityPolicyRequest &request);
                void ModifySecurityPolicyAsync(const Model::ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyOutcomeCallable ModifySecurityPolicyCallable(const Model::ModifySecurityPolicyRequest& request);

                /**
                 *修改站点信息。
                 * @param req ModifyZoneRequest
                 * @return ModifyZoneOutcome
                 */
                ModifyZoneOutcome ModifyZone(const Model::ModifyZoneRequest &request);
                void ModifyZoneAsync(const Model::ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneOutcomeCallable ModifyZoneCallable(const Model::ModifyZoneRequest& request);

                /**
                 *本接口为旧版，EdgeOne 已对规则引擎相关接口全面升级，详情请参考 [ModifyL7AccSetting](https://cloud.tencent.com/document/product/1552/115817)。
                 * @param req ModifyZoneSettingRequest
                 * @return ModifyZoneSettingOutcome
                 */
                ModifyZoneSettingOutcome ModifyZoneSetting(const Model::ModifyZoneSettingRequest &request);
                void ModifyZoneSettingAsync(const Model::ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneSettingOutcomeCallable ModifyZoneSettingCallable(const Model::ModifyZoneSettingRequest& request);

                /**
                 *用于开启，关闭站点。
                 * @param req ModifyZoneStatusRequest
                 * @return ModifyZoneStatusOutcome
                 */
                ModifyZoneStatusOutcome ModifyZoneStatus(const Model::ModifyZoneStatusRequest &request);
                void ModifyZoneStatusAsync(const Model::ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneStatusOutcomeCallable ModifyZoneStatusCallable(const Model::ModifyZoneStatusRequest& request);

                /**
                 *当您的套餐需要延长有效期，可以通过该接口进行续费。套餐续费仅支持个人版，基础版，标准版套餐。
> 费用详情可参考 [套餐费用](https://cloud.tencent.com/document/product/1552/94158)
                 * @param req RenewPlanRequest
                 * @return RenewPlanOutcome
                 */
                RenewPlanOutcome RenewPlan(const Model::RenewPlanRequest &request);
                void RenewPlanAsync(const Model::RenewPlanRequest& request, const RenewPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewPlanOutcomeCallable RenewPlanCallable(const Model::RenewPlanRequest& request);

                /**
                 *当您需要使用高等级套餐才拥有的功能，可以通过本接口升级套餐，仅支持个人版，基础版套餐进行升级。
> 不同类型 Edgeone 计费套餐区别参考 [Edgeone计费套餐选型对比](https://cloud.tencent.com/document/product/1552/94165)
计费套餐升级规则以及资费详情参考 [Edgeone计费套餐升配说明](https://cloud.tencent.com/document/product/1552/95291)
如果需要将套餐升级至企业版，请 [联系我们](https://cloud.tencent.com/online-service)
                 * @param req UpgradePlanRequest
                 * @return UpgradePlanOutcome
                 */
                UpgradePlanOutcome UpgradePlan(const Model::UpgradePlanRequest &request);
                void UpgradePlanAsync(const Model::UpgradePlanRequest& request, const UpgradePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradePlanOutcomeCallable UpgradePlanCallable(const Model::UpgradePlanRequest& request);

                /**
                 *在 CNAME 接入模式下，您需要对站点或者域名的归属权进行验证，可以通过本接口触发验证。若站点通过归属权验证后，后续添加域名无需再验证。详情参考 [站点/域名归属权验证](https://cloud.tencent.com/document/product/1552/70789)。

在 NS 接入模式下，您也可以通过本接口来查询 NS 服务器是否切换成功，详情参考 [修改 DNS 服务器](https://cloud.tencent.com/document/product/1552/90452)。
                 * @param req VerifyOwnershipRequest
                 * @return VerifyOwnershipOutcome
                 */
                VerifyOwnershipOutcome VerifyOwnership(const Model::VerifyOwnershipRequest &request);
                void VerifyOwnershipAsync(const Model::VerifyOwnershipRequest& request, const VerifyOwnershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyOwnershipOutcomeCallable VerifyOwnershipCallable(const Model::VerifyOwnershipRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
