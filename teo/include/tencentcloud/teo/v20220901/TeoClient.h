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
#include <tencentcloud/teo/v20220901/model/CheckCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/CheckCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCredentialRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCredentialResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCustomErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCustomErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateDnsRecordRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateDnsRecordResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateIpTableListRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateIpTableListResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateLogSetRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateLogSetResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateLogTopicTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateReplayTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateReplayTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateSecurityDropPageRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateSecurityDropPageResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateSpeedTestingRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateSpeedTestingResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteLogTopicTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAddableEntityListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAddableEntityListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotClientIpListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotClientIpListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotHitRuleDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotHitRuleDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotLogRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotLogResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotManagedRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotManagedRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeClientRuleListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeClientRuleListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackSourceEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackSourceEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSBlockListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSBlockListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSMajorAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSMajorAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnssecRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnssecResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogSetsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogSetsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTaskDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTaskDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRateLimitIntelligenceRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRateLimitIntelligenceRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityGroupManagedRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityGroupManagedRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyRegionsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPolicyRegionsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPortraitRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityPortraitRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityRuleIdRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityRuleIdResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSingleL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSingleL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSpeedTestingDetailsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSpeedTestingDetailsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSpeedTestingMetricDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSpeedTestingMetricDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSpeedTestingQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSpeedTestingQuotaResponse.h>
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
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesHitRuleDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesHitRuleDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesLogRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesLogResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionAttackEventsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionAttackEventsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionClientIpListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionClientIpListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionHitRuleDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionHitRuleDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneDDoSPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneDDoSPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAlarmConfigRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAlarmConfigResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAlarmDefaultThresholdRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAlarmDefaultThresholdResponse.h>
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
#include <tencentcloud/teo/v20220901/model/ModifyDDoSPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDDoSPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDDoSPolicyHostRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDDoSPolicyHostResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDefaultCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDefaultCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnssecRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnssecResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancingStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyLoadBalancingStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyLogTopicTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRulePriorityRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRulePriorityResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityWafGroupPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityWafGroupPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneCnameSpeedUpRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneCnameSpeedUpResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ReclaimAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/ReclaimAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/ReclaimZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/ReclaimZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/SwitchLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/SwitchLogTopicTaskResponse.h>


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

                typedef Outcome<Core::Error, Model::CheckCertificateResponse> CheckCertificateOutcome;
                typedef std::future<CheckCertificateOutcome> CheckCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CheckCertificateRequest&, CheckCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAliasDomainResponse> CreateAliasDomainOutcome;
                typedef std::future<CreateAliasDomainOutcome> CreateAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateAliasDomainRequest&, CreateAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyResponse> CreateApplicationProxyOutcome;
                typedef std::future<CreateApplicationProxyOutcome> CreateApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRequest&, CreateApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRuleResponse> CreateApplicationProxyRuleOutcome;
                typedef std::future<CreateApplicationProxyRuleOutcome> CreateApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRuleRequest&, CreateApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCredentialResponse> CreateCredentialOutcome;
                typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCredentialRequest&, CreateCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomErrorPageResponse> CreateCustomErrorPageOutcome;
                typedef std::future<CreateCustomErrorPageOutcome> CreateCustomErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCustomErrorPageRequest&, CreateCustomErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDnsRecordResponse> CreateDnsRecordOutcome;
                typedef std::future<CreateDnsRecordOutcome> CreateDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateDnsRecordRequest&, CreateDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIpTableListResponse> CreateIpTableListOutcome;
                typedef std::future<CreateIpTableListOutcome> CreateIpTableListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateIpTableListRequest&, CreateIpTableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpTableListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancingResponse> CreateLoadBalancingOutcome;
                typedef std::future<CreateLoadBalancingOutcome> CreateLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLoadBalancingRequest&, CreateLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogSetResponse> CreateLogSetOutcome;
                typedef std::future<CreateLogSetOutcome> CreateLogSetOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLogSetRequest&, CreateLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogTopicTaskResponse> CreateLogTopicTaskOutcome;
                typedef std::future<CreateLogTopicTaskOutcome> CreateLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLogTopicTaskRequest&, CreateLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogTopicTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOriginGroupResponse> CreateOriginGroupOutcome;
                typedef std::future<CreateOriginGroupOutcome> CreateOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateOriginGroupRequest&, CreateOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlanForZoneResponse> CreatePlanForZoneOutcome;
                typedef std::future<CreatePlanForZoneOutcome> CreatePlanForZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePlanForZoneRequest&, CreatePlanForZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlanForZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrefetchTaskResponse> CreatePrefetchTaskOutcome;
                typedef std::future<CreatePrefetchTaskOutcome> CreatePrefetchTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePrefetchTaskRequest&, CreatePrefetchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrefetchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePurgeTaskResponse> CreatePurgeTaskOutcome;
                typedef std::future<CreatePurgeTaskOutcome> CreatePurgeTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePurgeTaskRequest&, CreatePurgeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePurgeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReplayTaskResponse> CreateReplayTaskOutcome;
                typedef std::future<CreateReplayTaskOutcome> CreateReplayTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateReplayTaskRequest&, CreateReplayTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplayTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityDropPageResponse> CreateSecurityDropPageOutcome;
                typedef std::future<CreateSecurityDropPageOutcome> CreateSecurityDropPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateSecurityDropPageRequest&, CreateSecurityDropPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityDropPageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSpeedTestingResponse> CreateSpeedTestingOutcome;
                typedef std::future<CreateSpeedTestingOutcome> CreateSpeedTestingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateSpeedTestingRequest&, CreateSpeedTestingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpeedTestingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAliasDomainResponse> DeleteAliasDomainOutcome;
                typedef std::future<DeleteAliasDomainOutcome> DeleteAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteAliasDomainRequest&, DeleteAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyResponse> DeleteApplicationProxyOutcome;
                typedef std::future<DeleteApplicationProxyOutcome> DeleteApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRequest&, DeleteApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyRuleResponse> DeleteApplicationProxyRuleOutcome;
                typedef std::future<DeleteApplicationProxyRuleOutcome> DeleteApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRuleRequest&, DeleteApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDnsRecordsResponse> DeleteDnsRecordsOutcome;
                typedef std::future<DeleteDnsRecordsOutcome> DeleteDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteDnsRecordsRequest&, DeleteDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancingResponse> DeleteLoadBalancingOutcome;
                typedef std::future<DeleteLoadBalancingOutcome> DeleteLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteLoadBalancingRequest&, DeleteLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogTopicTaskResponse> DeleteLogTopicTaskOutcome;
                typedef std::future<DeleteLogTopicTaskOutcome> DeleteLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteLogTopicTaskRequest&, DeleteLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogTopicTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOriginGroupResponse> DeleteOriginGroupOutcome;
                typedef std::future<DeleteOriginGroupOutcome> DeleteOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteOriginGroupRequest&, DeleteOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRulesResponse> DeleteRulesOutcome;
                typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteRulesRequest&, DeleteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddableEntityListResponse> DescribeAddableEntityListOutcome;
                typedef std::future<DescribeAddableEntityListOutcome> DescribeAddableEntityListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAddableEntityListRequest&, DescribeAddableEntityListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddableEntityListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeBotClientIpListResponse> DescribeBotClientIpListOutcome;
                typedef std::future<DescribeBotClientIpListOutcome> DescribeBotClientIpListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotClientIpListRequest&, DescribeBotClientIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotClientIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotDataResponse> DescribeBotDataOutcome;
                typedef std::future<DescribeBotDataOutcome> DescribeBotDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotDataRequest&, DescribeBotDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotHitRuleDetailResponse> DescribeBotHitRuleDetailOutcome;
                typedef std::future<DescribeBotHitRuleDetailOutcome> DescribeBotHitRuleDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotHitRuleDetailRequest&, DescribeBotHitRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotHitRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotLogResponse> DescribeBotLogOutcome;
                typedef std::future<DescribeBotLogOutcome> DescribeBotLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotLogRequest&, DescribeBotLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotManagedRulesResponse> DescribeBotManagedRulesOutcome;
                typedef std::future<DescribeBotManagedRulesOutcome> DescribeBotManagedRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotManagedRulesRequest&, DescribeBotManagedRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotManagedRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotTopDataResponse> DescribeBotTopDataOutcome;
                typedef std::future<DescribeBotTopDataOutcome> DescribeBotTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotTopDataRequest&, DescribeBotTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientRuleListResponse> DescribeClientRuleListOutcome;
                typedef std::future<DescribeClientRuleListOutcome> DescribeClientRuleListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeClientRuleListRequest&, DescribeClientRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentQuotaResponse> DescribeContentQuotaOutcome;
                typedef std::future<DescribeContentQuotaOutcome> DescribeContentQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeContentQuotaRequest&, DescribeContentQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackDataResponse> DescribeDDoSAttackDataOutcome;
                typedef std::future<DescribeDDoSAttackDataOutcome> DescribeDDoSAttackDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackDataRequest&, DescribeDDoSAttackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackEventResponse> DescribeDDoSAttackEventOutcome;
                typedef std::future<DescribeDDoSAttackEventOutcome> DescribeDDoSAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackEventRequest&, DescribeDDoSAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackEventDetailResponse> DescribeDDoSAttackEventDetailOutcome;
                typedef std::future<DescribeDDoSAttackEventDetailOutcome> DescribeDDoSAttackEventDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackEventDetailRequest&, DescribeDDoSAttackEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackSourceEventResponse> DescribeDDoSAttackSourceEventOutcome;
                typedef std::future<DescribeDDoSAttackSourceEventOutcome> DescribeDDoSAttackSourceEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackSourceEventRequest&, DescribeDDoSAttackSourceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackSourceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackTopDataResponse> DescribeDDoSAttackTopDataOutcome;
                typedef std::future<DescribeDDoSAttackTopDataOutcome> DescribeDDoSAttackTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackTopDataRequest&, DescribeDDoSAttackTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSBlockListResponse> DescribeDDoSBlockListOutcome;
                typedef std::future<DescribeDDoSBlockListOutcome> DescribeDDoSBlockListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSBlockListRequest&, DescribeDDoSBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSMajorAttackEventResponse> DescribeDDoSMajorAttackEventOutcome;
                typedef std::future<DescribeDDoSMajorAttackEventOutcome> DescribeDDoSMajorAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSMajorAttackEventRequest&, DescribeDDoSMajorAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSMajorAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSPolicyResponse> DescribeDDoSPolicyOutcome;
                typedef std::future<DescribeDDoSPolicyOutcome> DescribeDDoSPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSPolicyRequest&, DescribeDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultCertificatesResponse> DescribeDefaultCertificatesOutcome;
                typedef std::future<DescribeDefaultCertificatesOutcome> DescribeDefaultCertificatesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDefaultCertificatesRequest&, DescribeDefaultCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsDataResponse> DescribeDnsDataOutcome;
                typedef std::future<DescribeDnsDataOutcome> DescribeDnsDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsDataRequest&, DescribeDnsDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsRecordsResponse> DescribeDnsRecordsOutcome;
                typedef std::future<DescribeDnsRecordsOutcome> DescribeDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsRecordsRequest&, DescribeDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnssecResponse> DescribeDnssecOutcome;
                typedef std::future<DescribeDnssecOutcome> DescribeDnssecOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnssecRequest&, DescribeDnssecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnssecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationsResponse> DescribeIdentificationsOutcome;
                typedef std::future<DescribeIdentificationsOutcome> DescribeIdentificationsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationsRequest&, DescribeIdentificationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancingResponse> DescribeLoadBalancingOutcome;
                typedef std::future<DescribeLoadBalancingOutcome> DescribeLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLoadBalancingRequest&, DescribeLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogSetsResponse> DescribeLogSetsOutcome;
                typedef std::future<DescribeLogSetsOutcome> DescribeLogSetsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLogSetsRequest&, DescribeLogSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTopicTaskDetailResponse> DescribeLogTopicTaskDetailOutcome;
                typedef std::future<DescribeLogTopicTaskDetailOutcome> DescribeLogTopicTaskDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLogTopicTaskDetailRequest&, DescribeLogTopicTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTopicTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTopicTasksResponse> DescribeLogTopicTasksOutcome;
                typedef std::future<DescribeLogTopicTasksOutcome> DescribeLogTopicTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLogTopicTasksRequest&, DescribeLogTopicTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTopicTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupResponse> DescribeOriginGroupOutcome;
                typedef std::future<DescribeOriginGroupOutcome> DescribeOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupRequest&, DescribeOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewL7DataResponse> DescribeOverviewL7DataOutcome;
                typedef std::future<DescribeOverviewL7DataOutcome> DescribeOverviewL7DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOverviewL7DataRequest&, DescribeOverviewL7DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewL7DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRateLimitIntelligenceRuleResponse> DescribeRateLimitIntelligenceRuleOutcome;
                typedef std::future<DescribeRateLimitIntelligenceRuleOutcome> DescribeRateLimitIntelligenceRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRateLimitIntelligenceRuleRequest&, DescribeRateLimitIntelligenceRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRateLimitIntelligenceRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesSettingResponse> DescribeRulesSettingOutcome;
                typedef std::future<DescribeRulesSettingOutcome> DescribeRulesSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesSettingRequest&, DescribeRulesSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupManagedRulesResponse> DescribeSecurityGroupManagedRulesOutcome;
                typedef std::future<DescribeSecurityGroupManagedRulesOutcome> DescribeSecurityGroupManagedRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityGroupManagedRulesRequest&, DescribeSecurityGroupManagedRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupManagedRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyResponse> DescribeSecurityPolicyOutcome;
                typedef std::future<DescribeSecurityPolicyOutcome> DescribeSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyRequest&, DescribeSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyListResponse> DescribeSecurityPolicyListOutcome;
                typedef std::future<DescribeSecurityPolicyListOutcome> DescribeSecurityPolicyListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyListRequest&, DescribeSecurityPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyRegionsResponse> DescribeSecurityPolicyRegionsOutcome;
                typedef std::future<DescribeSecurityPolicyRegionsOutcome> DescribeSecurityPolicyRegionsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyRegionsRequest&, DescribeSecurityPolicyRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPortraitRulesResponse> DescribeSecurityPortraitRulesOutcome;
                typedef std::future<DescribeSecurityPortraitRulesOutcome> DescribeSecurityPortraitRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPortraitRulesRequest&, DescribeSecurityPortraitRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPortraitRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityRuleIdResponse> DescribeSecurityRuleIdOutcome;
                typedef std::future<DescribeSecurityRuleIdOutcome> DescribeSecurityRuleIdOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityRuleIdRequest&, DescribeSecurityRuleIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityRuleIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSingleL7AnalysisDataResponse> DescribeSingleL7AnalysisDataOutcome;
                typedef std::future<DescribeSingleL7AnalysisDataOutcome> DescribeSingleL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSingleL7AnalysisDataRequest&, DescribeSingleL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSingleL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpeedTestingDetailsResponse> DescribeSpeedTestingDetailsOutcome;
                typedef std::future<DescribeSpeedTestingDetailsOutcome> DescribeSpeedTestingDetailsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSpeedTestingDetailsRequest&, DescribeSpeedTestingDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpeedTestingDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpeedTestingMetricDataResponse> DescribeSpeedTestingMetricDataOutcome;
                typedef std::future<DescribeSpeedTestingMetricDataOutcome> DescribeSpeedTestingMetricDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSpeedTestingMetricDataRequest&, DescribeSpeedTestingMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpeedTestingMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpeedTestingQuotaResponse> DescribeSpeedTestingQuotaOutcome;
                typedef std::future<DescribeSpeedTestingQuotaOutcome> DescribeSpeedTestingQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSpeedTestingQuotaRequest&, DescribeSpeedTestingQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpeedTestingQuotaAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesDataResponse> DescribeWebManagedRulesDataOutcome;
                typedef std::future<DescribeWebManagedRulesDataOutcome> DescribeWebManagedRulesDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesDataRequest&, DescribeWebManagedRulesDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesHitRuleDetailResponse> DescribeWebManagedRulesHitRuleDetailOutcome;
                typedef std::future<DescribeWebManagedRulesHitRuleDetailOutcome> DescribeWebManagedRulesHitRuleDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesHitRuleDetailRequest&, DescribeWebManagedRulesHitRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesHitRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesLogResponse> DescribeWebManagedRulesLogOutcome;
                typedef std::future<DescribeWebManagedRulesLogOutcome> DescribeWebManagedRulesLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesLogRequest&, DescribeWebManagedRulesLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionAttackEventsResponse> DescribeWebProtectionAttackEventsOutcome;
                typedef std::future<DescribeWebProtectionAttackEventsOutcome> DescribeWebProtectionAttackEventsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionAttackEventsRequest&, DescribeWebProtectionAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionClientIpListResponse> DescribeWebProtectionClientIpListOutcome;
                typedef std::future<DescribeWebProtectionClientIpListOutcome> DescribeWebProtectionClientIpListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionClientIpListRequest&, DescribeWebProtectionClientIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionClientIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionDataResponse> DescribeWebProtectionDataOutcome;
                typedef std::future<DescribeWebProtectionDataOutcome> DescribeWebProtectionDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionDataRequest&, DescribeWebProtectionDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionHitRuleDetailResponse> DescribeWebProtectionHitRuleDetailOutcome;
                typedef std::future<DescribeWebProtectionHitRuleDetailOutcome> DescribeWebProtectionHitRuleDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionHitRuleDetailRequest&, DescribeWebProtectionHitRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionHitRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionTopDataResponse> DescribeWebProtectionTopDataOutcome;
                typedef std::future<DescribeWebProtectionTopDataOutcome> DescribeWebProtectionTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionTopDataRequest&, DescribeWebProtectionTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneDDoSPolicyResponse> DescribeZoneDDoSPolicyOutcome;
                typedef std::future<DescribeZoneDDoSPolicyOutcome> DescribeZoneDDoSPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneDDoSPolicyRequest&, DescribeZoneDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneSettingResponse> DescribeZoneSettingOutcome;
                typedef std::future<DescribeZoneSettingOutcome> DescribeZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneSettingRequest&, DescribeZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL4LogsResponse> DownloadL4LogsOutcome;
                typedef std::future<DownloadL4LogsOutcome> DownloadL4LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL4LogsRequest&, DownloadL4LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL4LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL7LogsResponse> DownloadL7LogsOutcome;
                typedef std::future<DownloadL7LogsOutcome> DownloadL7LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL7LogsRequest&, DownloadL7LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL7LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::IdentifyZoneResponse> IdentifyZoneOutcome;
                typedef std::future<IdentifyZoneOutcome> IdentifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IdentifyZoneRequest&, IdentifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmConfigResponse> ModifyAlarmConfigOutcome;
                typedef std::future<ModifyAlarmConfigOutcome> ModifyAlarmConfigOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAlarmConfigRequest&, ModifyAlarmConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmDefaultThresholdResponse> ModifyAlarmDefaultThresholdOutcome;
                typedef std::future<ModifyAlarmDefaultThresholdOutcome> ModifyAlarmDefaultThresholdOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAlarmDefaultThresholdRequest&, ModifyAlarmDefaultThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmDefaultThresholdAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyDDoSPolicyResponse> ModifyDDoSPolicyOutcome;
                typedef std::future<ModifyDDoSPolicyOutcome> ModifyDDoSPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDDoSPolicyRequest&, ModifyDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSPolicyHostResponse> ModifyDDoSPolicyHostOutcome;
                typedef std::future<ModifyDDoSPolicyHostOutcome> ModifyDDoSPolicyHostOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDDoSPolicyHostRequest&, ModifyDDoSPolicyHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSPolicyHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultCertificateResponse> ModifyDefaultCertificateOutcome;
                typedef std::future<ModifyDefaultCertificateOutcome> ModifyDefaultCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDefaultCertificateRequest&, ModifyDefaultCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnsRecordResponse> ModifyDnsRecordOutcome;
                typedef std::future<ModifyDnsRecordOutcome> ModifyDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnsRecordRequest&, ModifyDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnssecResponse> ModifyDnssecOutcome;
                typedef std::future<ModifyDnssecOutcome> ModifyDnssecOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnssecRequest&, ModifyDnssecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnssecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsCertificateResponse> ModifyHostsCertificateOutcome;
                typedef std::future<ModifyHostsCertificateOutcome> ModifyHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyHostsCertificateRequest&, ModifyHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancingResponse> ModifyLoadBalancingOutcome;
                typedef std::future<ModifyLoadBalancingOutcome> ModifyLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLoadBalancingRequest&, ModifyLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancingStatusResponse> ModifyLoadBalancingStatusOutcome;
                typedef std::future<ModifyLoadBalancingStatusOutcome> ModifyLoadBalancingStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLoadBalancingStatusRequest&, ModifyLoadBalancingStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancingStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogTopicTaskResponse> ModifyLogTopicTaskOutcome;
                typedef std::future<ModifyLogTopicTaskOutcome> ModifyLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLogTopicTaskRequest&, ModifyLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogTopicTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOriginGroupResponse> ModifyOriginGroupOutcome;
                typedef std::future<ModifyOriginGroupOutcome> ModifyOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyOriginGroupRequest&, ModifyOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRulePriorityResponse> ModifyRulePriorityOutcome;
                typedef std::future<ModifyRulePriorityOutcome> ModifyRulePriorityOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRulePriorityRequest&, ModifyRulePriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRulePriorityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyResponse> ModifySecurityPolicyOutcome;
                typedef std::future<ModifySecurityPolicyOutcome> ModifySecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityPolicyRequest&, ModifySecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityWafGroupPolicyResponse> ModifySecurityWafGroupPolicyOutcome;
                typedef std::future<ModifySecurityWafGroupPolicyOutcome> ModifySecurityWafGroupPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityWafGroupPolicyRequest&, ModifySecurityWafGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityWafGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneResponse> ModifyZoneOutcome;
                typedef std::future<ModifyZoneOutcome> ModifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneRequest&, ModifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneCnameSpeedUpResponse> ModifyZoneCnameSpeedUpOutcome;
                typedef std::future<ModifyZoneCnameSpeedUpOutcome> ModifyZoneCnameSpeedUpOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneCnameSpeedUpRequest&, ModifyZoneCnameSpeedUpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneCnameSpeedUpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneSettingResponse> ModifyZoneSettingOutcome;
                typedef std::future<ModifyZoneSettingOutcome> ModifyZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneSettingRequest&, ModifyZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneStatusResponse> ModifyZoneStatusOutcome;
                typedef std::future<ModifyZoneStatusOutcome> ModifyZoneStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneStatusRequest&, ModifyZoneStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ReclaimAliasDomainResponse> ReclaimAliasDomainOutcome;
                typedef std::future<ReclaimAliasDomainOutcome> ReclaimAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ReclaimAliasDomainRequest&, ReclaimAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReclaimAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ReclaimZoneResponse> ReclaimZoneOutcome;
                typedef std::future<ReclaimZoneOutcome> ReclaimZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ReclaimZoneRequest&, ReclaimZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReclaimZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchLogTopicTaskResponse> SwitchLogTopicTaskOutcome;
                typedef std::future<SwitchLogTopicTaskOutcome> SwitchLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::SwitchLogTopicTaskRequest&, SwitchLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchLogTopicTaskAsyncHandler;



                /**
                 *校验证书
                 * @param req CheckCertificateRequest
                 * @return CheckCertificateOutcome
                 */
                CheckCertificateOutcome CheckCertificate(const Model::CheckCertificateRequest &request);
                void CheckCertificateAsync(const Model::CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateOutcomeCallable CheckCertificateCallable(const Model::CheckCertificateRequest& request);

                /**
                 *创建别称域名。
                 * @param req CreateAliasDomainRequest
                 * @return CreateAliasDomainOutcome
                 */
                CreateAliasDomainOutcome CreateAliasDomain(const Model::CreateAliasDomainRequest &request);
                void CreateAliasDomainAsync(const Model::CreateAliasDomainRequest& request, const CreateAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasDomainOutcomeCallable CreateAliasDomainCallable(const Model::CreateAliasDomainRequest& request);

                /**
                 *创建应用代理
                 * @param req CreateApplicationProxyRequest
                 * @return CreateApplicationProxyOutcome
                 */
                CreateApplicationProxyOutcome CreateApplicationProxy(const Model::CreateApplicationProxyRequest &request);
                void CreateApplicationProxyAsync(const Model::CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyOutcomeCallable CreateApplicationProxyCallable(const Model::CreateApplicationProxyRequest& request);

                /**
                 *创建应用代理规则
                 * @param req CreateApplicationProxyRuleRequest
                 * @return CreateApplicationProxyRuleOutcome
                 */
                CreateApplicationProxyRuleOutcome CreateApplicationProxyRule(const Model::CreateApplicationProxyRuleRequest &request);
                void CreateApplicationProxyRuleAsync(const Model::CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyRuleOutcomeCallable CreateApplicationProxyRuleCallable(const Model::CreateApplicationProxyRuleRequest& request);

                /**
                 *用于创建COS回源私有凭证
                 * @param req CreateCredentialRequest
                 * @return CreateCredentialOutcome
                 */
                CreateCredentialOutcome CreateCredential(const Model::CreateCredentialRequest &request);
                void CreateCredentialAsync(const Model::CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCredentialOutcomeCallable CreateCredentialCallable(const Model::CreateCredentialRequest& request);

                /**
                 *创建自定义规则的自定义页
                 * @param req CreateCustomErrorPageRequest
                 * @return CreateCustomErrorPageOutcome
                 */
                CreateCustomErrorPageOutcome CreateCustomErrorPage(const Model::CreateCustomErrorPageRequest &request);
                void CreateCustomErrorPageAsync(const Model::CreateCustomErrorPageRequest& request, const CreateCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomErrorPageOutcomeCallable CreateCustomErrorPageCallable(const Model::CreateCustomErrorPageRequest& request);

                /**
                 *创建 DNS 记录
                 * @param req CreateDnsRecordRequest
                 * @return CreateDnsRecordOutcome
                 */
                CreateDnsRecordOutcome CreateDnsRecord(const Model::CreateDnsRecordRequest &request);
                void CreateDnsRecordAsync(const Model::CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDnsRecordOutcomeCallable CreateDnsRecordCallable(const Model::CreateDnsRecordRequest& request);

                /**
                 *创建IP黑白名单列表
                 * @param req CreateIpTableListRequest
                 * @return CreateIpTableListOutcome
                 */
                CreateIpTableListOutcome CreateIpTableList(const Model::CreateIpTableListRequest &request);
                void CreateIpTableListAsync(const Model::CreateIpTableListRequest& request, const CreateIpTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIpTableListOutcomeCallable CreateIpTableListCallable(const Model::CreateIpTableListRequest& request);

                /**
                 *创建负载均衡
                 * @param req CreateLoadBalancingRequest
                 * @return CreateLoadBalancingOutcome
                 */
                CreateLoadBalancingOutcome CreateLoadBalancing(const Model::CreateLoadBalancingRequest &request);
                void CreateLoadBalancingAsync(const Model::CreateLoadBalancingRequest& request, const CreateLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancingOutcomeCallable CreateLoadBalancingCallable(const Model::CreateLoadBalancingRequest& request);

                /**
                 *本接口（CreateClsLog）用于创建CLS日志集。
                 * @param req CreateLogSetRequest
                 * @return CreateLogSetOutcome
                 */
                CreateLogSetOutcome CreateLogSet(const Model::CreateLogSetRequest &request);
                void CreateLogSetAsync(const Model::CreateLogSetRequest& request, const CreateLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogSetOutcomeCallable CreateLogSetCallable(const Model::CreateLogSetRequest& request);

                /**
                 *本接口（CreateLogTopicTask）用于创建日志推送任务。
                 * @param req CreateLogTopicTaskRequest
                 * @return CreateLogTopicTaskOutcome
                 */
                CreateLogTopicTaskOutcome CreateLogTopicTask(const Model::CreateLogTopicTaskRequest &request);
                void CreateLogTopicTaskAsync(const Model::CreateLogTopicTaskRequest& request, const CreateLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogTopicTaskOutcomeCallable CreateLogTopicTaskCallable(const Model::CreateLogTopicTaskRequest& request);

                /**
                 *创建源站组
                 * @param req CreateOriginGroupRequest
                 * @return CreateOriginGroupOutcome
                 */
                CreateOriginGroupOutcome CreateOriginGroup(const Model::CreateOriginGroupRequest &request);
                void CreateOriginGroupAsync(const Model::CreateOriginGroupRequest& request, const CreateOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOriginGroupOutcomeCallable CreateOriginGroupCallable(const Model::CreateOriginGroupRequest& request);

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
                 *创建清除缓存任务
                 * @param req CreatePurgeTaskRequest
                 * @return CreatePurgeTaskOutcome
                 */
                CreatePurgeTaskOutcome CreatePurgeTask(const Model::CreatePurgeTaskRequest &request);
                void CreatePurgeTaskAsync(const Model::CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePurgeTaskOutcomeCallable CreatePurgeTaskCallable(const Model::CreatePurgeTaskRequest& request);

                /**
                 *创建刷新/预热重放任务
                 * @param req CreateReplayTaskRequest
                 * @return CreateReplayTaskOutcome
                 */
                CreateReplayTaskOutcome CreateReplayTask(const Model::CreateReplayTaskRequest &request);
                void CreateReplayTaskAsync(const Model::CreateReplayTaskRequest& request, const CreateReplayTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReplayTaskOutcomeCallable CreateReplayTaskCallable(const Model::CreateReplayTaskRequest& request);

                /**
                 *规则引擎创建规则。
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建自定义拦截页面。
                 * @param req CreateSecurityDropPageRequest
                 * @return CreateSecurityDropPageOutcome
                 */
                CreateSecurityDropPageOutcome CreateSecurityDropPage(const Model::CreateSecurityDropPageRequest &request);
                void CreateSecurityDropPageAsync(const Model::CreateSecurityDropPageRequest& request, const CreateSecurityDropPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityDropPageOutcomeCallable CreateSecurityDropPageCallable(const Model::CreateSecurityDropPageRequest& request);

                /**
                 *对用户指定的域名进行一次站点拨测
                 * @param req CreateSpeedTestingRequest
                 * @return CreateSpeedTestingOutcome
                 */
                CreateSpeedTestingOutcome CreateSpeedTesting(const Model::CreateSpeedTestingRequest &request);
                void CreateSpeedTestingAsync(const Model::CreateSpeedTestingRequest& request, const CreateSpeedTestingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSpeedTestingOutcomeCallable CreateSpeedTestingCallable(const Model::CreateSpeedTestingRequest& request);

                /**
                 *用于用户接入新的站点。
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

                /**
                 *删除别称域名。
                 * @param req DeleteAliasDomainRequest
                 * @return DeleteAliasDomainOutcome
                 */
                DeleteAliasDomainOutcome DeleteAliasDomain(const Model::DeleteAliasDomainRequest &request);
                void DeleteAliasDomainAsync(const Model::DeleteAliasDomainRequest& request, const DeleteAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasDomainOutcomeCallable DeleteAliasDomainCallable(const Model::DeleteAliasDomainRequest& request);

                /**
                 *删除应用代理
                 * @param req DeleteApplicationProxyRequest
                 * @return DeleteApplicationProxyOutcome
                 */
                DeleteApplicationProxyOutcome DeleteApplicationProxy(const Model::DeleteApplicationProxyRequest &request);
                void DeleteApplicationProxyAsync(const Model::DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyOutcomeCallable DeleteApplicationProxyCallable(const Model::DeleteApplicationProxyRequest& request);

                /**
                 *删除应用代理规则
                 * @param req DeleteApplicationProxyRuleRequest
                 * @return DeleteApplicationProxyRuleOutcome
                 */
                DeleteApplicationProxyRuleOutcome DeleteApplicationProxyRule(const Model::DeleteApplicationProxyRuleRequest &request);
                void DeleteApplicationProxyRuleAsync(const Model::DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyRuleOutcomeCallable DeleteApplicationProxyRuleCallable(const Model::DeleteApplicationProxyRuleRequest& request);

                /**
                 *批量删除 DNS 记录
                 * @param req DeleteDnsRecordsRequest
                 * @return DeleteDnsRecordsOutcome
                 */
                DeleteDnsRecordsOutcome DeleteDnsRecords(const Model::DeleteDnsRecordsRequest &request);
                void DeleteDnsRecordsAsync(const Model::DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDnsRecordsOutcomeCallable DeleteDnsRecordsCallable(const Model::DeleteDnsRecordsRequest& request);

                /**
                 *删除负载均衡
                 * @param req DeleteLoadBalancingRequest
                 * @return DeleteLoadBalancingOutcome
                 */
                DeleteLoadBalancingOutcome DeleteLoadBalancing(const Model::DeleteLoadBalancingRequest &request);
                void DeleteLoadBalancingAsync(const Model::DeleteLoadBalancingRequest& request, const DeleteLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancingOutcomeCallable DeleteLoadBalancingCallable(const Model::DeleteLoadBalancingRequest& request);

                /**
                 *本接口（DeleteLogTopicTask）用于删除日志推送任务。
                 * @param req DeleteLogTopicTaskRequest
                 * @return DeleteLogTopicTaskOutcome
                 */
                DeleteLogTopicTaskOutcome DeleteLogTopicTask(const Model::DeleteLogTopicTaskRequest &request);
                void DeleteLogTopicTaskAsync(const Model::DeleteLogTopicTaskRequest& request, const DeleteLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogTopicTaskOutcomeCallable DeleteLogTopicTaskCallable(const Model::DeleteLogTopicTaskRequest& request);

                /**
                 *删除源站组
                 * @param req DeleteOriginGroupRequest
                 * @return DeleteOriginGroupOutcome
                 */
                DeleteOriginGroupOutcome DeleteOriginGroup(const Model::DeleteOriginGroupRequest &request);
                void DeleteOriginGroupAsync(const Model::DeleteOriginGroupRequest& request, const DeleteOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOriginGroupOutcomeCallable DeleteOriginGroupCallable(const Model::DeleteOriginGroupRequest& request);

                /**
                 *批量删除规则引擎规则。
                 * @param req DeleteRulesRequest
                 * @return DeleteRulesOutcome
                 */
                DeleteRulesOutcome DeleteRules(const Model::DeleteRulesRequest &request);
                void DeleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRulesOutcomeCallable DeleteRulesCallable(const Model::DeleteRulesRequest& request);

                /**
                 *删除站点。
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *本接口（DescribeAddableEntityList）用于查询剩余可添加的日志推送实体列表。
                 * @param req DescribeAddableEntityListRequest
                 * @return DescribeAddableEntityListOutcome
                 */
                DescribeAddableEntityListOutcome DescribeAddableEntityList(const Model::DescribeAddableEntityListRequest &request);
                void DescribeAddableEntityListAsync(const Model::DescribeAddableEntityListRequest& request, const DescribeAddableEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddableEntityListOutcomeCallable DescribeAddableEntityListCallable(const Model::DescribeAddableEntityListRequest& request);

                /**
                 *查询别称域名信息列表。
                 * @param req DescribeAliasDomainsRequest
                 * @return DescribeAliasDomainsOutcome
                 */
                DescribeAliasDomainsOutcome DescribeAliasDomains(const Model::DescribeAliasDomainsRequest &request);
                void DescribeAliasDomainsAsync(const Model::DescribeAliasDomainsRequest& request, const DescribeAliasDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAliasDomainsOutcomeCallable DescribeAliasDomainsCallable(const Model::DescribeAliasDomainsRequest& request);

                /**
                 *查询应用代理列表。
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
                 *获取计费数据。
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *本接口（DescribeBotClientIpList）用于查询Bot攻击客户端Ip信息列表。
                 * @param req DescribeBotClientIpListRequest
                 * @return DescribeBotClientIpListOutcome
                 */
                DescribeBotClientIpListOutcome DescribeBotClientIpList(const Model::DescribeBotClientIpListRequest &request);
                void DescribeBotClientIpListAsync(const Model::DescribeBotClientIpListRequest& request, const DescribeBotClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotClientIpListOutcomeCallable DescribeBotClientIpListCallable(const Model::DescribeBotClientIpListRequest& request);

                /**
                 *本接口（DescribeBotData）查询Bot攻击时序数据。
                 * @param req DescribeBotDataRequest
                 * @return DescribeBotDataOutcome
                 */
                DescribeBotDataOutcome DescribeBotData(const Model::DescribeBotDataRequest &request);
                void DescribeBotDataAsync(const Model::DescribeBotDataRequest& request, const DescribeBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotDataOutcomeCallable DescribeBotDataCallable(const Model::DescribeBotDataRequest& request);

                /**
                 *本接口（DescribeBotHitRuleDetail）用于查询Bot攻击命中规则详情信息。
                 * @param req DescribeBotHitRuleDetailRequest
                 * @return DescribeBotHitRuleDetailOutcome
                 */
                DescribeBotHitRuleDetailOutcome DescribeBotHitRuleDetail(const Model::DescribeBotHitRuleDetailRequest &request);
                void DescribeBotHitRuleDetailAsync(const Model::DescribeBotHitRuleDetailRequest& request, const DescribeBotHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotHitRuleDetailOutcomeCallable DescribeBotHitRuleDetailCallable(const Model::DescribeBotHitRuleDetailRequest& request);

                /**
                 *本接口（DescribeBotLog）用于查询Bot攻击日志。
                 * @param req DescribeBotLogRequest
                 * @return DescribeBotLogOutcome
                 */
                DescribeBotLogOutcome DescribeBotLog(const Model::DescribeBotLogRequest &request);
                void DescribeBotLogAsync(const Model::DescribeBotLogRequest& request, const DescribeBotLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotLogOutcomeCallable DescribeBotLogCallable(const Model::DescribeBotLogRequest& request);

                /**
                 *查询Bot托管规则
                 * @param req DescribeBotManagedRulesRequest
                 * @return DescribeBotManagedRulesOutcome
                 */
                DescribeBotManagedRulesOutcome DescribeBotManagedRules(const Model::DescribeBotManagedRulesRequest &request);
                void DescribeBotManagedRulesAsync(const Model::DescribeBotManagedRulesRequest& request, const DescribeBotManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotManagedRulesOutcomeCallable DescribeBotManagedRulesCallable(const Model::DescribeBotManagedRulesRequest& request);

                /**
                 *本接口（DescribeBotTopData）查询Bot攻击TopN数据。
                 * @param req DescribeBotTopDataRequest
                 * @return DescribeBotTopDataOutcome
                 */
                DescribeBotTopDataOutcome DescribeBotTopData(const Model::DescribeBotTopDataRequest &request);
                void DescribeBotTopDataAsync(const Model::DescribeBotTopDataRequest& request, const DescribeBotTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotTopDataOutcomeCallable DescribeBotTopDataCallable(const Model::DescribeBotTopDataRequest& request);

                /**
                 *本接口（DescribeClientRuleList）用于查询封禁客户端信息列表。
                 * @param req DescribeClientRuleListRequest
                 * @return DescribeClientRuleListOutcome
                 */
                DescribeClientRuleListOutcome DescribeClientRuleList(const Model::DescribeClientRuleListRequest &request);
                void DescribeClientRuleListAsync(const Model::DescribeClientRuleListRequest& request, const DescribeClientRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientRuleListOutcomeCallable DescribeClientRuleListCallable(const Model::DescribeClientRuleListRequest& request);

                /**
                 *查询内容管理接口配额
                 * @param req DescribeContentQuotaRequest
                 * @return DescribeContentQuotaOutcome
                 */
                DescribeContentQuotaOutcome DescribeContentQuota(const Model::DescribeContentQuotaRequest &request);
                void DescribeContentQuotaAsync(const Model::DescribeContentQuotaRequest& request, const DescribeContentQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentQuotaOutcomeCallable DescribeContentQuotaCallable(const Model::DescribeContentQuotaRequest& request);

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
                 *本接口（DescribeDDoSAttackEventDetail）用于查询DDoS攻击事件详情。
                 * @param req DescribeDDoSAttackEventDetailRequest
                 * @return DescribeDDoSAttackEventDetailOutcome
                 */
                DescribeDDoSAttackEventDetailOutcome DescribeDDoSAttackEventDetail(const Model::DescribeDDoSAttackEventDetailRequest &request);
                void DescribeDDoSAttackEventDetailAsync(const Model::DescribeDDoSAttackEventDetailRequest& request, const DescribeDDoSAttackEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackEventDetailOutcomeCallable DescribeDDoSAttackEventDetailCallable(const Model::DescribeDDoSAttackEventDetailRequest& request);

                /**
                 *本接口（DescribeDDoSAttackSourceEvent）用于查询DDoS攻击源信息列表。
                 * @param req DescribeDDoSAttackSourceEventRequest
                 * @return DescribeDDoSAttackSourceEventOutcome
                 */
                DescribeDDoSAttackSourceEventOutcome DescribeDDoSAttackSourceEvent(const Model::DescribeDDoSAttackSourceEventRequest &request);
                void DescribeDDoSAttackSourceEventAsync(const Model::DescribeDDoSAttackSourceEventRequest& request, const DescribeDDoSAttackSourceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackSourceEventOutcomeCallable DescribeDDoSAttackSourceEventCallable(const Model::DescribeDDoSAttackSourceEventRequest& request);

                /**
                 *本接口（DescribeDDoSAttackTopData）用于查询DDoS攻击Top数据。
                 * @param req DescribeDDoSAttackTopDataRequest
                 * @return DescribeDDoSAttackTopDataOutcome
                 */
                DescribeDDoSAttackTopDataOutcome DescribeDDoSAttackTopData(const Model::DescribeDDoSAttackTopDataRequest &request);
                void DescribeDDoSAttackTopDataAsync(const Model::DescribeDDoSAttackTopDataRequest& request, const DescribeDDoSAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackTopDataOutcomeCallable DescribeDDoSAttackTopDataCallable(const Model::DescribeDDoSAttackTopDataRequest& request);

                /**
                 *本接口（DescribeDDoSBlockList）用于查询DDoS封禁解封列表。
                 * @param req DescribeDDoSBlockListRequest
                 * @return DescribeDDoSBlockListOutcome
                 */
                DescribeDDoSBlockListOutcome DescribeDDoSBlockList(const Model::DescribeDDoSBlockListRequest &request);
                void DescribeDDoSBlockListAsync(const Model::DescribeDDoSBlockListRequest& request, const DescribeDDoSBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSBlockListOutcomeCallable DescribeDDoSBlockListCallable(const Model::DescribeDDoSBlockListRequest& request);

                /**
                 *本接口（DescribeDDoSMajorAttackEvent）用于查询DDoS主攻击事件列表。
                 * @param req DescribeDDoSMajorAttackEventRequest
                 * @return DescribeDDoSMajorAttackEventOutcome
                 */
                DescribeDDoSMajorAttackEventOutcome DescribeDDoSMajorAttackEvent(const Model::DescribeDDoSMajorAttackEventRequest &request);
                void DescribeDDoSMajorAttackEventAsync(const Model::DescribeDDoSMajorAttackEventRequest& request, const DescribeDDoSMajorAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSMajorAttackEventOutcomeCallable DescribeDDoSMajorAttackEventCallable(const Model::DescribeDDoSMajorAttackEventRequest& request);

                /**
                 *查询DDoS防护配置详情
                 * @param req DescribeDDoSPolicyRequest
                 * @return DescribeDDoSPolicyOutcome
                 */
                DescribeDDoSPolicyOutcome DescribeDDoSPolicy(const Model::DescribeDDoSPolicyRequest &request);
                void DescribeDDoSPolicyAsync(const Model::DescribeDDoSPolicyRequest& request, const DescribeDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSPolicyOutcomeCallable DescribeDDoSPolicyCallable(const Model::DescribeDDoSPolicyRequest& request);

                /**
                 *查询默认证书列表
                 * @param req DescribeDefaultCertificatesRequest
                 * @return DescribeDefaultCertificatesOutcome
                 */
                DescribeDefaultCertificatesOutcome DescribeDefaultCertificates(const Model::DescribeDefaultCertificatesRequest &request);
                void DescribeDefaultCertificatesAsync(const Model::DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultCertificatesOutcomeCallable DescribeDefaultCertificatesCallable(const Model::DescribeDefaultCertificatesRequest& request);

                /**
                 *获取DNS请求数统计曲线
                 * @param req DescribeDnsDataRequest
                 * @return DescribeDnsDataOutcome
                 */
                DescribeDnsDataOutcome DescribeDnsData(const Model::DescribeDnsDataRequest &request);
                void DescribeDnsDataAsync(const Model::DescribeDnsDataRequest& request, const DescribeDnsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsDataOutcomeCallable DescribeDnsDataCallable(const Model::DescribeDnsDataRequest& request);

                /**
                 *查询 DNS 记录列表，支持搜索、分页、排序、过滤。
                 * @param req DescribeDnsRecordsRequest
                 * @return DescribeDnsRecordsOutcome
                 */
                DescribeDnsRecordsOutcome DescribeDnsRecords(const Model::DescribeDnsRecordsRequest &request);
                void DescribeDnsRecordsAsync(const Model::DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsRecordsOutcomeCallable DescribeDnsRecordsCallable(const Model::DescribeDnsRecordsRequest& request);

                /**
                 *用于查询 DNSSEC 相关信息
                 * @param req DescribeDnssecRequest
                 * @return DescribeDnssecOutcome
                 */
                DescribeDnssecOutcome DescribeDnssec(const Model::DescribeDnssecRequest &request);
                void DescribeDnssecAsync(const Model::DescribeDnssecRequest& request, const DescribeDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnssecOutcomeCallable DescribeDnssecCallable(const Model::DescribeDnssecRequest& request);

                /**
                 *用于查询域名配置信息
                 * @param req DescribeHostsSettingRequest
                 * @return DescribeHostsSettingOutcome
                 */
                DescribeHostsSettingOutcome DescribeHostsSetting(const Model::DescribeHostsSettingRequest &request);
                void DescribeHostsSettingAsync(const Model::DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsSettingOutcomeCallable DescribeHostsSettingCallable(const Model::DescribeHostsSettingRequest& request);

                /**
                 *查询站点的验证信息。
                 * @param req DescribeIdentificationsRequest
                 * @return DescribeIdentificationsOutcome
                 */
                DescribeIdentificationsOutcome DescribeIdentifications(const Model::DescribeIdentificationsRequest &request);
                void DescribeIdentificationsAsync(const Model::DescribeIdentificationsRequest& request, const DescribeIdentificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentificationsOutcomeCallable DescribeIdentificationsCallable(const Model::DescribeIdentificationsRequest& request);

                /**
                 *获取负载均衡列表
                 * @param req DescribeLoadBalancingRequest
                 * @return DescribeLoadBalancingOutcome
                 */
                DescribeLoadBalancingOutcome DescribeLoadBalancing(const Model::DescribeLoadBalancingRequest &request);
                void DescribeLoadBalancingAsync(const Model::DescribeLoadBalancingRequest& request, const DescribeLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancingOutcomeCallable DescribeLoadBalancingCallable(const Model::DescribeLoadBalancingRequest& request);

                /**
                 *本接口（DescribeLogSets）用于获取日志集列表。
                 * @param req DescribeLogSetsRequest
                 * @return DescribeLogSetsOutcome
                 */
                DescribeLogSetsOutcome DescribeLogSets(const Model::DescribeLogSetsRequest &request);
                void DescribeLogSetsAsync(const Model::DescribeLogSetsRequest& request, const DescribeLogSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogSetsOutcomeCallable DescribeLogSetsCallable(const Model::DescribeLogSetsRequest& request);

                /**
                 *本接口（DescribeLogTopicTaskDetail）用于获取日志推送任务详细信息。
                 * @param req DescribeLogTopicTaskDetailRequest
                 * @return DescribeLogTopicTaskDetailOutcome
                 */
                DescribeLogTopicTaskDetailOutcome DescribeLogTopicTaskDetail(const Model::DescribeLogTopicTaskDetailRequest &request);
                void DescribeLogTopicTaskDetailAsync(const Model::DescribeLogTopicTaskDetailRequest& request, const DescribeLogTopicTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTopicTaskDetailOutcomeCallable DescribeLogTopicTaskDetailCallable(const Model::DescribeLogTopicTaskDetailRequest& request);

                /**
                 *本接口（DescribeLogTopicTasks）用于获取日志推送任务列表。
                 * @param req DescribeLogTopicTasksRequest
                 * @return DescribeLogTopicTasksOutcome
                 */
                DescribeLogTopicTasksOutcome DescribeLogTopicTasks(const Model::DescribeLogTopicTasksRequest &request);
                void DescribeLogTopicTasksAsync(const Model::DescribeLogTopicTasksRequest& request, const DescribeLogTopicTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTopicTasksOutcomeCallable DescribeLogTopicTasksCallable(const Model::DescribeLogTopicTasksRequest& request);

                /**
                 *获取源站组列表
                 * @param req DescribeOriginGroupRequest
                 * @return DescribeOriginGroupOutcome
                 */
                DescribeOriginGroupOutcome DescribeOriginGroup(const Model::DescribeOriginGroupRequest &request);
                void DescribeOriginGroupAsync(const Model::DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupOutcomeCallable DescribeOriginGroupCallable(const Model::DescribeOriginGroupRequest& request);

                /**
                 *本接口（DescribeOverviewL7Data）用于查询七层监控类时序流量数据。
                 * @param req DescribeOverviewL7DataRequest
                 * @return DescribeOverviewL7DataOutcome
                 */
                DescribeOverviewL7DataOutcome DescribeOverviewL7Data(const Model::DescribeOverviewL7DataRequest &request);
                void DescribeOverviewL7DataAsync(const Model::DescribeOverviewL7DataRequest& request, const DescribeOverviewL7DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewL7DataOutcomeCallable DescribeOverviewL7DataCallable(const Model::DescribeOverviewL7DataRequest& request);

                /**
                 *查询预热任务状态
                 * @param req DescribePrefetchTasksRequest
                 * @return DescribePrefetchTasksOutcome
                 */
                DescribePrefetchTasksOutcome DescribePrefetchTasks(const Model::DescribePrefetchTasksRequest &request);
                void DescribePrefetchTasksAsync(const Model::DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrefetchTasksOutcomeCallable DescribePrefetchTasksCallable(const Model::DescribePrefetchTasksRequest& request);

                /**
                 *查询清除缓存历史记录
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *查询速率限制智能客户端过滤学习出来的规则
                 * @param req DescribeRateLimitIntelligenceRuleRequest
                 * @return DescribeRateLimitIntelligenceRuleOutcome
                 */
                DescribeRateLimitIntelligenceRuleOutcome DescribeRateLimitIntelligenceRule(const Model::DescribeRateLimitIntelligenceRuleRequest &request);
                void DescribeRateLimitIntelligenceRuleAsync(const Model::DescribeRateLimitIntelligenceRuleRequest& request, const DescribeRateLimitIntelligenceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRateLimitIntelligenceRuleOutcomeCallable DescribeRateLimitIntelligenceRuleCallable(const Model::DescribeRateLimitIntelligenceRuleRequest& request);

                /**
                 *查询规则引擎规则。
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *返回规则引擎可应用匹配请求的设置列表及其详细建议配置信息
                 * @param req DescribeRulesSettingRequest
                 * @return DescribeRulesSettingOutcome
                 */
                DescribeRulesSettingOutcome DescribeRulesSetting(const Model::DescribeRulesSettingRequest &request);
                void DescribeRulesSettingAsync(const Model::DescribeRulesSettingRequest& request, const DescribeRulesSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesSettingOutcomeCallable DescribeRulesSettingCallable(const Model::DescribeRulesSettingRequest& request);

                /**
                 *获取托管规则组
                 * @param req DescribeSecurityGroupManagedRulesRequest
                 * @return DescribeSecurityGroupManagedRulesOutcome
                 */
                DescribeSecurityGroupManagedRulesOutcome DescribeSecurityGroupManagedRules(const Model::DescribeSecurityGroupManagedRulesRequest &request);
                void DescribeSecurityGroupManagedRulesAsync(const Model::DescribeSecurityGroupManagedRulesRequest& request, const DescribeSecurityGroupManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupManagedRulesOutcomeCallable DescribeSecurityGroupManagedRulesCallable(const Model::DescribeSecurityGroupManagedRulesRequest& request);

                /**
                 *查询安全防护配置详情。请求参数中ZoneId+Entity或TemplateId至少填一项。
                 * @param req DescribeSecurityPolicyRequest
                 * @return DescribeSecurityPolicyOutcome
                 */
                DescribeSecurityPolicyOutcome DescribeSecurityPolicy(const Model::DescribeSecurityPolicyRequest &request);
                void DescribeSecurityPolicyAsync(const Model::DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyOutcomeCallable DescribeSecurityPolicyCallable(const Model::DescribeSecurityPolicyRequest& request);

                /**
                 *查询全部安全实例
                 * @param req DescribeSecurityPolicyListRequest
                 * @return DescribeSecurityPolicyListOutcome
                 */
                DescribeSecurityPolicyListOutcome DescribeSecurityPolicyList(const Model::DescribeSecurityPolicyListRequest &request);
                void DescribeSecurityPolicyListAsync(const Model::DescribeSecurityPolicyListRequest& request, const DescribeSecurityPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyListOutcomeCallable DescribeSecurityPolicyListCallable(const Model::DescribeSecurityPolicyListRequest& request);

                /**
                 *查询所有地域信息
                 * @param req DescribeSecurityPolicyRegionsRequest
                 * @return DescribeSecurityPolicyRegionsOutcome
                 */
                DescribeSecurityPolicyRegionsOutcome DescribeSecurityPolicyRegions(const Model::DescribeSecurityPolicyRegionsRequest &request);
                void DescribeSecurityPolicyRegionsAsync(const Model::DescribeSecurityPolicyRegionsRequest& request, const DescribeSecurityPolicyRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyRegionsOutcomeCallable DescribeSecurityPolicyRegionsCallable(const Model::DescribeSecurityPolicyRegionsRequest& request);

                /**
                 *查询Bot用户画像规则
                 * @param req DescribeSecurityPortraitRulesRequest
                 * @return DescribeSecurityPortraitRulesOutcome
                 */
                DescribeSecurityPortraitRulesOutcome DescribeSecurityPortraitRules(const Model::DescribeSecurityPortraitRulesRequest &request);
                void DescribeSecurityPortraitRulesAsync(const Model::DescribeSecurityPortraitRulesRequest& request, const DescribeSecurityPortraitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPortraitRulesOutcomeCallable DescribeSecurityPortraitRulesCallable(const Model::DescribeSecurityPortraitRulesRequest& request);

                /**
                 *查询安全规则详情
                 * @param req DescribeSecurityRuleIdRequest
                 * @return DescribeSecurityRuleIdOutcome
                 */
                DescribeSecurityRuleIdOutcome DescribeSecurityRuleId(const Model::DescribeSecurityRuleIdRequest &request);
                void DescribeSecurityRuleIdAsync(const Model::DescribeSecurityRuleIdRequest& request, const DescribeSecurityRuleIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityRuleIdOutcomeCallable DescribeSecurityRuleIdCallable(const Model::DescribeSecurityRuleIdRequest& request);

                /**
                 *本接口（DescribeSingleL7AnalysisData）用于查询七层数据分析类单值流量数据列表。
                 * @param req DescribeSingleL7AnalysisDataRequest
                 * @return DescribeSingleL7AnalysisDataOutcome
                 */
                DescribeSingleL7AnalysisDataOutcome DescribeSingleL7AnalysisData(const Model::DescribeSingleL7AnalysisDataRequest &request);
                void DescribeSingleL7AnalysisDataAsync(const Model::DescribeSingleL7AnalysisDataRequest& request, const DescribeSingleL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSingleL7AnalysisDataOutcomeCallable DescribeSingleL7AnalysisDataCallable(const Model::DescribeSingleL7AnalysisDataRequest& request);

                /**
                 *用于查询拨测分地区数据
                 * @param req DescribeSpeedTestingDetailsRequest
                 * @return DescribeSpeedTestingDetailsOutcome
                 */
                DescribeSpeedTestingDetailsOutcome DescribeSpeedTestingDetails(const Model::DescribeSpeedTestingDetailsRequest &request);
                void DescribeSpeedTestingDetailsAsync(const Model::DescribeSpeedTestingDetailsRequest& request, const DescribeSpeedTestingDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpeedTestingDetailsOutcomeCallable DescribeSpeedTestingDetailsCallable(const Model::DescribeSpeedTestingDetailsRequest& request);

                /**
                 *查询站点拨测结果
                 * @param req DescribeSpeedTestingMetricDataRequest
                 * @return DescribeSpeedTestingMetricDataOutcome
                 */
                DescribeSpeedTestingMetricDataOutcome DescribeSpeedTestingMetricData(const Model::DescribeSpeedTestingMetricDataRequest &request);
                void DescribeSpeedTestingMetricDataAsync(const Model::DescribeSpeedTestingMetricDataRequest& request, const DescribeSpeedTestingMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpeedTestingMetricDataOutcomeCallable DescribeSpeedTestingMetricDataCallable(const Model::DescribeSpeedTestingMetricDataRequest& request);

                /**
                 *查询站点拨测配额
                 * @param req DescribeSpeedTestingQuotaRequest
                 * @return DescribeSpeedTestingQuotaOutcome
                 */
                DescribeSpeedTestingQuotaOutcome DescribeSpeedTestingQuota(const Model::DescribeSpeedTestingQuotaRequest &request);
                void DescribeSpeedTestingQuotaAsync(const Model::DescribeSpeedTestingQuotaRequest& request, const DescribeSpeedTestingQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpeedTestingQuotaOutcomeCallable DescribeSpeedTestingQuotaCallable(const Model::DescribeSpeedTestingQuotaRequest& request);

                /**
                 *本接口（DescribeTimingL4Data）用于查询四层时序流量数据列表。
                 * @param req DescribeTimingL4DataRequest
                 * @return DescribeTimingL4DataOutcome
                 */
                DescribeTimingL4DataOutcome DescribeTimingL4Data(const Model::DescribeTimingL4DataRequest &request);
                void DescribeTimingL4DataAsync(const Model::DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL4DataOutcomeCallable DescribeTimingL4DataCallable(const Model::DescribeTimingL4DataRequest& request);

                /**
                 *本接口（DescribeTimingL7AnalysisData）查询七层数据分析类时序数据。
                 * @param req DescribeTimingL7AnalysisDataRequest
                 * @return DescribeTimingL7AnalysisDataOutcome
                 */
                DescribeTimingL7AnalysisDataOutcome DescribeTimingL7AnalysisData(const Model::DescribeTimingL7AnalysisDataRequest &request);
                void DescribeTimingL7AnalysisDataAsync(const Model::DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7AnalysisDataOutcomeCallable DescribeTimingL7AnalysisDataCallable(const Model::DescribeTimingL7AnalysisDataRequest& request);

                /**
                 *本接口（DescribeTimingL7CacheData）用于查询七层缓存分析时序类流量数据。
                 * @param req DescribeTimingL7CacheDataRequest
                 * @return DescribeTimingL7CacheDataOutcome
                 */
                DescribeTimingL7CacheDataOutcome DescribeTimingL7CacheData(const Model::DescribeTimingL7CacheDataRequest &request);
                void DescribeTimingL7CacheDataAsync(const Model::DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7CacheDataOutcomeCallable DescribeTimingL7CacheDataCallable(const Model::DescribeTimingL7CacheDataRequest& request);

                /**
                 *本接口（DescribeTopL7AnalysisData）用于查询七层流量前topN的数据。
                 * @param req DescribeTopL7AnalysisDataRequest
                 * @return DescribeTopL7AnalysisDataOutcome
                 */
                DescribeTopL7AnalysisDataOutcome DescribeTopL7AnalysisData(const Model::DescribeTopL7AnalysisDataRequest &request);
                void DescribeTopL7AnalysisDataAsync(const Model::DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7AnalysisDataOutcomeCallable DescribeTopL7AnalysisDataCallable(const Model::DescribeTopL7AnalysisDataRequest& request);

                /**
                 *本接口（DescribeTopL7CacheData）用于查询七层缓存分析topN流量数据。
                 * @param req DescribeTopL7CacheDataRequest
                 * @return DescribeTopL7CacheDataOutcome
                 */
                DescribeTopL7CacheDataOutcome DescribeTopL7CacheData(const Model::DescribeTopL7CacheDataRequest &request);
                void DescribeTopL7CacheDataAsync(const Model::DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7CacheDataOutcomeCallable DescribeTopL7CacheDataCallable(const Model::DescribeTopL7CacheDataRequest& request);

                /**
                 *本接口（DescribeWebManagedRulesData）用于查询WAF攻击的时序数据。
                 * @param req DescribeWebManagedRulesDataRequest
                 * @return DescribeWebManagedRulesDataOutcome
                 */
                DescribeWebManagedRulesDataOutcome DescribeWebManagedRulesData(const Model::DescribeWebManagedRulesDataRequest &request);
                void DescribeWebManagedRulesDataAsync(const Model::DescribeWebManagedRulesDataRequest& request, const DescribeWebManagedRulesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesDataOutcomeCallable DescribeWebManagedRulesDataCallable(const Model::DescribeWebManagedRulesDataRequest& request);

                /**
                 *本接口（DescribeWebManagedRulesHitRuleDetail）用于查询WAF攻击命中规则详情。
                 * @param req DescribeWebManagedRulesHitRuleDetailRequest
                 * @return DescribeWebManagedRulesHitRuleDetailOutcome
                 */
                DescribeWebManagedRulesHitRuleDetailOutcome DescribeWebManagedRulesHitRuleDetail(const Model::DescribeWebManagedRulesHitRuleDetailRequest &request);
                void DescribeWebManagedRulesHitRuleDetailAsync(const Model::DescribeWebManagedRulesHitRuleDetailRequest& request, const DescribeWebManagedRulesHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesHitRuleDetailOutcomeCallable DescribeWebManagedRulesHitRuleDetailCallable(const Model::DescribeWebManagedRulesHitRuleDetailRequest& request);

                /**
                 *本接口（DescribeWebManagedRulesLog）用于查询Web攻击日志。
                 * @param req DescribeWebManagedRulesLogRequest
                 * @return DescribeWebManagedRulesLogOutcome
                 */
                DescribeWebManagedRulesLogOutcome DescribeWebManagedRulesLog(const Model::DescribeWebManagedRulesLogRequest &request);
                void DescribeWebManagedRulesLogAsync(const Model::DescribeWebManagedRulesLogRequest& request, const DescribeWebManagedRulesLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesLogOutcomeCallable DescribeWebManagedRulesLogCallable(const Model::DescribeWebManagedRulesLogRequest& request);

                /**
                 *本接口（DescribeWebProtectionAttackEvents）用于查询CC相关攻击事件列表。
                 * @param req DescribeWebProtectionAttackEventsRequest
                 * @return DescribeWebProtectionAttackEventsOutcome
                 */
                DescribeWebProtectionAttackEventsOutcome DescribeWebProtectionAttackEvents(const Model::DescribeWebProtectionAttackEventsRequest &request);
                void DescribeWebProtectionAttackEventsAsync(const Model::DescribeWebProtectionAttackEventsRequest& request, const DescribeWebProtectionAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionAttackEventsOutcomeCallable DescribeWebProtectionAttackEventsCallable(const Model::DescribeWebProtectionAttackEventsRequest& request);

                /**
                 *本接口（DescribeWebProtectionClientIpList）用于查询CC防护客户端（攻击源）IP信息。
                 * @param req DescribeWebProtectionClientIpListRequest
                 * @return DescribeWebProtectionClientIpListOutcome
                 */
                DescribeWebProtectionClientIpListOutcome DescribeWebProtectionClientIpList(const Model::DescribeWebProtectionClientIpListRequest &request);
                void DescribeWebProtectionClientIpListAsync(const Model::DescribeWebProtectionClientIpListRequest& request, const DescribeWebProtectionClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionClientIpListOutcomeCallable DescribeWebProtectionClientIpListCallable(const Model::DescribeWebProtectionClientIpListRequest& request);

                /**
                 *本接口（DescribeWebProtectionData）用于查询CC防护时序数据。
                 * @param req DescribeWebProtectionDataRequest
                 * @return DescribeWebProtectionDataOutcome
                 */
                DescribeWebProtectionDataOutcome DescribeWebProtectionData(const Model::DescribeWebProtectionDataRequest &request);
                void DescribeWebProtectionDataAsync(const Model::DescribeWebProtectionDataRequest& request, const DescribeWebProtectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionDataOutcomeCallable DescribeWebProtectionDataCallable(const Model::DescribeWebProtectionDataRequest& request);

                /**
                 *本接口（DescribeWebProtectionHitRuleDetail）用于查询CC防护命中规则详情列表。
                 * @param req DescribeWebProtectionHitRuleDetailRequest
                 * @return DescribeWebProtectionHitRuleDetailOutcome
                 */
                DescribeWebProtectionHitRuleDetailOutcome DescribeWebProtectionHitRuleDetail(const Model::DescribeWebProtectionHitRuleDetailRequest &request);
                void DescribeWebProtectionHitRuleDetailAsync(const Model::DescribeWebProtectionHitRuleDetailRequest& request, const DescribeWebProtectionHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionHitRuleDetailOutcomeCallable DescribeWebProtectionHitRuleDetailCallable(const Model::DescribeWebProtectionHitRuleDetailRequest& request);

                /**
                 *本接口（DescribeWebProtectionTopData）用于查询CC防护的Top数据。
                 * @param req DescribeWebProtectionTopDataRequest
                 * @return DescribeWebProtectionTopDataOutcome
                 */
                DescribeWebProtectionTopDataOutcome DescribeWebProtectionTopData(const Model::DescribeWebProtectionTopDataRequest &request);
                void DescribeWebProtectionTopDataAsync(const Model::DescribeWebProtectionTopDataRequest& request, const DescribeWebProtectionTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionTopDataOutcomeCallable DescribeWebProtectionTopDataCallable(const Model::DescribeWebProtectionTopDataRequest& request);

                /**
                 *查询所有DDoS防护分区
                 * @param req DescribeZoneDDoSPolicyRequest
                 * @return DescribeZoneDDoSPolicyOutcome
                 */
                DescribeZoneDDoSPolicyOutcome DescribeZoneDDoSPolicy(const Model::DescribeZoneDDoSPolicyRequest &request);
                void DescribeZoneDDoSPolicyAsync(const Model::DescribeZoneDDoSPolicyRequest& request, const DescribeZoneDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneDDoSPolicyOutcomeCallable DescribeZoneDDoSPolicyCallable(const Model::DescribeZoneDDoSPolicyRequest& request);

                /**
                 *用于查询站点的所有配置信息。
                 * @param req DescribeZoneSettingRequest
                 * @return DescribeZoneSettingOutcome
                 */
                DescribeZoneSettingOutcome DescribeZoneSetting(const Model::DescribeZoneSettingRequest &request);
                void DescribeZoneSettingAsync(const Model::DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneSettingOutcomeCallable DescribeZoneSettingCallable(const Model::DescribeZoneSettingRequest& request);

                /**
                 *用户查询用户站点信息列表，支持分页。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

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
                 *用于验证站点所有权。
                 * @param req IdentifyZoneRequest
                 * @return IdentifyZoneOutcome
                 */
                IdentifyZoneOutcome IdentifyZone(const Model::IdentifyZoneRequest &request);
                void IdentifyZoneAsync(const Model::IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdentifyZoneOutcomeCallable IdentifyZoneCallable(const Model::IdentifyZoneRequest& request);

                /**
                 *本接口（ModifyAlarmConfig）用于修改用户告警配置。
                 * @param req ModifyAlarmConfigRequest
                 * @return ModifyAlarmConfigOutcome
                 */
                ModifyAlarmConfigOutcome ModifyAlarmConfig(const Model::ModifyAlarmConfigRequest &request);
                void ModifyAlarmConfigAsync(const Model::ModifyAlarmConfigRequest& request, const ModifyAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmConfigOutcomeCallable ModifyAlarmConfigCallable(const Model::ModifyAlarmConfigRequest& request);

                /**
                 *此接口（ModifyAlarmDefaultThreshold）用于修改告警默认阈值。
                 * @param req ModifyAlarmDefaultThresholdRequest
                 * @return ModifyAlarmDefaultThresholdOutcome
                 */
                ModifyAlarmDefaultThresholdOutcome ModifyAlarmDefaultThreshold(const Model::ModifyAlarmDefaultThresholdRequest &request);
                void ModifyAlarmDefaultThresholdAsync(const Model::ModifyAlarmDefaultThresholdRequest& request, const ModifyAlarmDefaultThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmDefaultThresholdOutcomeCallable ModifyAlarmDefaultThresholdCallable(const Model::ModifyAlarmDefaultThresholdRequest& request);

                /**
                 *修改别称域名。
                 * @param req ModifyAliasDomainRequest
                 * @return ModifyAliasDomainOutcome
                 */
                ModifyAliasDomainOutcome ModifyAliasDomain(const Model::ModifyAliasDomainRequest &request);
                void ModifyAliasDomainAsync(const Model::ModifyAliasDomainRequest& request, const ModifyAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAliasDomainOutcomeCallable ModifyAliasDomainCallable(const Model::ModifyAliasDomainRequest& request);

                /**
                 *修改别称域名状态。
                 * @param req ModifyAliasDomainStatusRequest
                 * @return ModifyAliasDomainStatusOutcome
                 */
                ModifyAliasDomainStatusOutcome ModifyAliasDomainStatus(const Model::ModifyAliasDomainStatusRequest &request);
                void ModifyAliasDomainStatusAsync(const Model::ModifyAliasDomainStatusRequest& request, const ModifyAliasDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAliasDomainStatusOutcomeCallable ModifyAliasDomainStatusCallable(const Model::ModifyAliasDomainStatusRequest& request);

                /**
                 *修改应用代理
                 * @param req ModifyApplicationProxyRequest
                 * @return ModifyApplicationProxyOutcome
                 */
                ModifyApplicationProxyOutcome ModifyApplicationProxy(const Model::ModifyApplicationProxyRequest &request);
                void ModifyApplicationProxyAsync(const Model::ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyOutcomeCallable ModifyApplicationProxyCallable(const Model::ModifyApplicationProxyRequest& request);

                /**
                 *修改应用代理规则
                 * @param req ModifyApplicationProxyRuleRequest
                 * @return ModifyApplicationProxyRuleOutcome
                 */
                ModifyApplicationProxyRuleOutcome ModifyApplicationProxyRule(const Model::ModifyApplicationProxyRuleRequest &request);
                void ModifyApplicationProxyRuleAsync(const Model::ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleOutcomeCallable ModifyApplicationProxyRuleCallable(const Model::ModifyApplicationProxyRuleRequest& request);

                /**
                 *修改应用代理规则的状态
                 * @param req ModifyApplicationProxyRuleStatusRequest
                 * @return ModifyApplicationProxyRuleStatusOutcome
                 */
                ModifyApplicationProxyRuleStatusOutcome ModifyApplicationProxyRuleStatus(const Model::ModifyApplicationProxyRuleStatusRequest &request);
                void ModifyApplicationProxyRuleStatusAsync(const Model::ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleStatusOutcomeCallable ModifyApplicationProxyRuleStatusCallable(const Model::ModifyApplicationProxyRuleStatusRequest& request);

                /**
                 *修改应用代理的状态
                 * @param req ModifyApplicationProxyStatusRequest
                 * @return ModifyApplicationProxyStatusOutcome
                 */
                ModifyApplicationProxyStatusOutcome ModifyApplicationProxyStatus(const Model::ModifyApplicationProxyStatusRequest &request);
                void ModifyApplicationProxyStatusAsync(const Model::ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyStatusOutcomeCallable ModifyApplicationProxyStatusCallable(const Model::ModifyApplicationProxyStatusRequest& request);

                /**
                 *修改DDoS防护分区配置
                 * @param req ModifyDDoSPolicyRequest
                 * @return ModifyDDoSPolicyOutcome
                 */
                ModifyDDoSPolicyOutcome ModifyDDoSPolicy(const Model::ModifyDDoSPolicyRequest &request);
                void ModifyDDoSPolicyAsync(const Model::ModifyDDoSPolicyRequest& request, const ModifyDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSPolicyOutcomeCallable ModifyDDoSPolicyCallable(const Model::ModifyDDoSPolicyRequest& request);

                /**
                 *域名DDoS高可用开关
                 * @param req ModifyDDoSPolicyHostRequest
                 * @return ModifyDDoSPolicyHostOutcome
                 */
                ModifyDDoSPolicyHostOutcome ModifyDDoSPolicyHost(const Model::ModifyDDoSPolicyHostRequest &request);
                void ModifyDDoSPolicyHostAsync(const Model::ModifyDDoSPolicyHostRequest& request, const ModifyDDoSPolicyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSPolicyHostOutcomeCallable ModifyDDoSPolicyHostCallable(const Model::ModifyDDoSPolicyHostRequest& request);

                /**
                 *修改默认证书状态
                 * @param req ModifyDefaultCertificateRequest
                 * @return ModifyDefaultCertificateOutcome
                 */
                ModifyDefaultCertificateOutcome ModifyDefaultCertificate(const Model::ModifyDefaultCertificateRequest &request);
                void ModifyDefaultCertificateAsync(const Model::ModifyDefaultCertificateRequest& request, const ModifyDefaultCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultCertificateOutcomeCallable ModifyDefaultCertificateCallable(const Model::ModifyDefaultCertificateRequest& request);

                /**
                 *修改 DNS 记录
                 * @param req ModifyDnsRecordRequest
                 * @return ModifyDnsRecordOutcome
                 */
                ModifyDnsRecordOutcome ModifyDnsRecord(const Model::ModifyDnsRecordRequest &request);
                void ModifyDnsRecordAsync(const Model::ModifyDnsRecordRequest& request, const ModifyDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnsRecordOutcomeCallable ModifyDnsRecordCallable(const Model::ModifyDnsRecordRequest& request);

                /**
                 *设置站点DNSSEC状态
                 * @param req ModifyDnssecRequest
                 * @return ModifyDnssecOutcome
                 */
                ModifyDnssecOutcome ModifyDnssec(const Model::ModifyDnssecRequest &request);
                void ModifyDnssecAsync(const Model::ModifyDnssecRequest& request, const ModifyDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnssecOutcomeCallable ModifyDnssecCallable(const Model::ModifyDnssecRequest& request);

                /**
                 *用于修改域名证书
                 * @param req ModifyHostsCertificateRequest
                 * @return ModifyHostsCertificateOutcome
                 */
                ModifyHostsCertificateOutcome ModifyHostsCertificate(const Model::ModifyHostsCertificateRequest &request);
                void ModifyHostsCertificateAsync(const Model::ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsCertificateOutcomeCallable ModifyHostsCertificateCallable(const Model::ModifyHostsCertificateRequest& request);

                /**
                 *修改负载均衡
                 * @param req ModifyLoadBalancingRequest
                 * @return ModifyLoadBalancingOutcome
                 */
                ModifyLoadBalancingOutcome ModifyLoadBalancing(const Model::ModifyLoadBalancingRequest &request);
                void ModifyLoadBalancingAsync(const Model::ModifyLoadBalancingRequest& request, const ModifyLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancingOutcomeCallable ModifyLoadBalancingCallable(const Model::ModifyLoadBalancingRequest& request);

                /**
                 *修改负载均衡状态
                 * @param req ModifyLoadBalancingStatusRequest
                 * @return ModifyLoadBalancingStatusOutcome
                 */
                ModifyLoadBalancingStatusOutcome ModifyLoadBalancingStatus(const Model::ModifyLoadBalancingStatusRequest &request);
                void ModifyLoadBalancingStatusAsync(const Model::ModifyLoadBalancingStatusRequest& request, const ModifyLoadBalancingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancingStatusOutcomeCallable ModifyLoadBalancingStatusCallable(const Model::ModifyLoadBalancingStatusRequest& request);

                /**
                 *本接口（ModifyLogTopicTask）用于修改日志推送任务信息。
                 * @param req ModifyLogTopicTaskRequest
                 * @return ModifyLogTopicTaskOutcome
                 */
                ModifyLogTopicTaskOutcome ModifyLogTopicTask(const Model::ModifyLogTopicTaskRequest &request);
                void ModifyLogTopicTaskAsync(const Model::ModifyLogTopicTaskRequest& request, const ModifyLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogTopicTaskOutcomeCallable ModifyLogTopicTaskCallable(const Model::ModifyLogTopicTaskRequest& request);

                /**
                 *修改源站组
                 * @param req ModifyOriginGroupRequest
                 * @return ModifyOriginGroupOutcome
                 */
                ModifyOriginGroupOutcome ModifyOriginGroup(const Model::ModifyOriginGroupRequest &request);
                void ModifyOriginGroupAsync(const Model::ModifyOriginGroupRequest& request, const ModifyOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOriginGroupOutcomeCallable ModifyOriginGroupCallable(const Model::ModifyOriginGroupRequest& request);

                /**
                 *修改规则引擎规则。
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *修改规则引擎规则优先级
                 * @param req ModifyRulePriorityRequest
                 * @return ModifyRulePriorityOutcome
                 */
                ModifyRulePriorityOutcome ModifyRulePriority(const Model::ModifyRulePriorityRequest &request);
                void ModifyRulePriorityAsync(const Model::ModifyRulePriorityRequest& request, const ModifyRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRulePriorityOutcomeCallable ModifyRulePriorityCallable(const Model::ModifyRulePriorityRequest& request);

                /**
                 *修改Web&Bot安全配置。
                 * @param req ModifySecurityPolicyRequest
                 * @return ModifySecurityPolicyOutcome
                 */
                ModifySecurityPolicyOutcome ModifySecurityPolicy(const Model::ModifySecurityPolicyRequest &request);
                void ModifySecurityPolicyAsync(const Model::ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyOutcomeCallable ModifySecurityPolicyCallable(const Model::ModifySecurityPolicyRequest& request);

                /**
                 *修改安全配置托管规则
                 * @param req ModifySecurityWafGroupPolicyRequest
                 * @return ModifySecurityWafGroupPolicyOutcome
                 */
                ModifySecurityWafGroupPolicyOutcome ModifySecurityWafGroupPolicy(const Model::ModifySecurityWafGroupPolicyRequest &request);
                void ModifySecurityWafGroupPolicyAsync(const Model::ModifySecurityWafGroupPolicyRequest& request, const ModifySecurityWafGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityWafGroupPolicyOutcomeCallable ModifySecurityWafGroupPolicyCallable(const Model::ModifySecurityWafGroupPolicyRequest& request);

                /**
                 *修改站点信息。
                 * @param req ModifyZoneRequest
                 * @return ModifyZoneOutcome
                 */
                ModifyZoneOutcome ModifyZone(const Model::ModifyZoneRequest &request);
                void ModifyZoneAsync(const Model::ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneOutcomeCallable ModifyZoneCallable(const Model::ModifyZoneRequest& request);

                /**
                 *开启，关闭 CNAME 加速。
                 * @param req ModifyZoneCnameSpeedUpRequest
                 * @return ModifyZoneCnameSpeedUpOutcome
                 */
                ModifyZoneCnameSpeedUpOutcome ModifyZoneCnameSpeedUp(const Model::ModifyZoneCnameSpeedUpRequest &request);
                void ModifyZoneCnameSpeedUpAsync(const Model::ModifyZoneCnameSpeedUpRequest& request, const ModifyZoneCnameSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneCnameSpeedUpOutcomeCallable ModifyZoneCnameSpeedUpCallable(const Model::ModifyZoneCnameSpeedUpRequest& request);

                /**
                 *用于修改站点配置
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
                 *当客户取回站定的同时会取回此站点下关联的别称域名，此时入参为ZoneId；当客户接入站点发现已被别称域名接入时通过验证之后可取回域名，此时入参为ZoneName。
                 * @param req ReclaimAliasDomainRequest
                 * @return ReclaimAliasDomainOutcome
                 */
                ReclaimAliasDomainOutcome ReclaimAliasDomain(const Model::ReclaimAliasDomainRequest &request);
                void ReclaimAliasDomainAsync(const Model::ReclaimAliasDomainRequest& request, const ReclaimAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReclaimAliasDomainOutcomeCallable ReclaimAliasDomainCallable(const Model::ReclaimAliasDomainRequest& request);

                /**
                 *站点被其他用户接入后，验证了站点所有权之后，可以找回该站点。
                 * @param req ReclaimZoneRequest
                 * @return ReclaimZoneOutcome
                 */
                ReclaimZoneOutcome ReclaimZone(const Model::ReclaimZoneRequest &request);
                void ReclaimZoneAsync(const Model::ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReclaimZoneOutcomeCallable ReclaimZoneCallable(const Model::ReclaimZoneRequest& request);

                /**
                 *本接口（SwitchLogTopicTask）用于开启/关闭推送任务。
                 * @param req SwitchLogTopicTaskRequest
                 * @return SwitchLogTopicTaskOutcome
                 */
                SwitchLogTopicTaskOutcome SwitchLogTopicTask(const Model::SwitchLogTopicTaskRequest &request);
                void SwitchLogTopicTaskAsync(const Model::SwitchLogTopicTaskRequest& request, const SwitchLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchLogTopicTaskOutcomeCallable SwitchLogTopicTaskCallable(const Model::SwitchLogTopicTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
