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

#ifndef TENCENTCLOUD_TEO_V20220106_TEOCLIENT_H_
#define TENCENTCLOUD_TEO_V20220106_TEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/teo/v20220106/model/CheckCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/CheckCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRulesRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRulesResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateCustomErrorPageRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateCustomErrorPageResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateDnsRecordRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateDnsRecordResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateOriginGroupRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateOriginGroupResponse.h>
#include <tencentcloud/teo/v20220106/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220106/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220106/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220106/model/CreatePurgeTaskResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteOriginGroupRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteOriginGroupResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeBotLogRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeBotLogResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeBotManagedRulesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeBotManagedRulesResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeCnameStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeCnameStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDoSPolicyRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDoSPolicyResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackEventRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackEventResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackEventDetailRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackEventDetailResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackSourceEventRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackSourceEventResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackTopDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosAttackTopDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosMajorAttackEventRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDDosMajorAttackEventResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnssecRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnssecResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeIdentificationRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeIdentificationResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeOriginGroupRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeOriginGroupResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeOriginGroupDetailRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeOriginGroupDetailResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeOverviewL7DataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeOverviewL7DataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyListRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyListResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyManagedRulesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyManagedRulesResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyManagedRulesIdRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyManagedRulesIdResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyRegionsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPolicyRegionsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPortraitRulesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeSecurityPortraitRulesResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeTimingL4DataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeTimingL4DataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeTimingL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeTimingL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeTimingL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeTimingL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeTopL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeTopL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeTopL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeTopL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesAttackEventsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesAttackEventsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesLogRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesLogResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesTopDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebManagedRulesTopDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebProtectionAttackEventsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebProtectionAttackEventsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebProtectionDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebProtectionDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebProtectionLogRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeWebProtectionLogResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneDDoSPolicyRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneDDoSPolicyResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneDetailsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneDetailsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneSettingRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZonesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZonesResponse.h>
#include <tencentcloud/teo/v20220106/model/DownloadL7LogsRequest.h>
#include <tencentcloud/teo/v20220106/model/DownloadL7LogsResponse.h>
#include <tencentcloud/teo/v20220106/model/IdentifyZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/IdentifyZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/ImportDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/ImportDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDDoSPolicyRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDDoSPolicyResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDDoSPolicyHostRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDDoSPolicyHostResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDefaultCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDefaultCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnsRecordRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnsRecordResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnssecRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnssecResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyOriginGroupResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifySecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneCnameSpeedUpRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneCnameSpeedUpResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneSettingResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ReclaimZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/ReclaimZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/ScanDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/ScanDnsRecordsResponse.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            class TeoClient : public AbstractClient
            {
            public:
                TeoClient(const Credential &credential, const std::string &region);
                TeoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckCertificateResponse> CheckCertificateOutcome;
                typedef std::future<CheckCertificateOutcome> CheckCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CheckCertificateRequest&, CheckCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyResponse> CreateApplicationProxyOutcome;
                typedef std::future<CreateApplicationProxyOutcome> CreateApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRequest&, CreateApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRuleResponse> CreateApplicationProxyRuleOutcome;
                typedef std::future<CreateApplicationProxyRuleOutcome> CreateApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRuleRequest&, CreateApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRulesResponse> CreateApplicationProxyRulesOutcome;
                typedef std::future<CreateApplicationProxyRulesOutcome> CreateApplicationProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRulesRequest&, CreateApplicationProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomErrorPageResponse> CreateCustomErrorPageOutcome;
                typedef std::future<CreateCustomErrorPageOutcome> CreateCustomErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCustomErrorPageRequest&, CreateCustomErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDnsRecordResponse> CreateDnsRecordOutcome;
                typedef std::future<CreateDnsRecordOutcome> CreateDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateDnsRecordRequest&, CreateDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancingResponse> CreateLoadBalancingOutcome;
                typedef std::future<CreateLoadBalancingOutcome> CreateLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLoadBalancingRequest&, CreateLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOriginGroupResponse> CreateOriginGroupOutcome;
                typedef std::future<CreateOriginGroupOutcome> CreateOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateOriginGroupRequest&, CreateOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrefetchTaskResponse> CreatePrefetchTaskOutcome;
                typedef std::future<CreatePrefetchTaskOutcome> CreatePrefetchTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePrefetchTaskRequest&, CreatePrefetchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrefetchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePurgeTaskResponse> CreatePurgeTaskOutcome;
                typedef std::future<CreatePurgeTaskOutcome> CreatePurgeTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePurgeTaskRequest&, CreatePurgeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePurgeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteOriginGroupResponse> DeleteOriginGroupOutcome;
                typedef std::future<DeleteOriginGroupOutcome> DeleteOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteOriginGroupRequest&, DeleteOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProxyResponse> DescribeApplicationProxyOutcome;
                typedef std::future<DescribeApplicationProxyOutcome> DescribeApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeApplicationProxyRequest&, DescribeApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProxyDetailResponse> DescribeApplicationProxyDetailOutcome;
                typedef std::future<DescribeApplicationProxyDetailOutcome> DescribeApplicationProxyDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeApplicationProxyDetailRequest&, DescribeApplicationProxyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProxyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotLogResponse> DescribeBotLogOutcome;
                typedef std::future<DescribeBotLogOutcome> DescribeBotLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotLogRequest&, DescribeBotLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotManagedRulesResponse> DescribeBotManagedRulesOutcome;
                typedef std::future<DescribeBotManagedRulesOutcome> DescribeBotManagedRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotManagedRulesRequest&, DescribeBotManagedRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotManagedRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCnameStatusResponse> DescribeCnameStatusOutcome;
                typedef std::future<DescribeCnameStatusOutcome> DescribeCnameStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeCnameStatusRequest&, DescribeCnameStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCnameStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSPolicyResponse> DescribeDDoSPolicyOutcome;
                typedef std::future<DescribeDDoSPolicyOutcome> DescribeDDoSPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSPolicyRequest&, DescribeDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDosAttackDataResponse> DescribeDDosAttackDataOutcome;
                typedef std::future<DescribeDDosAttackDataOutcome> DescribeDDosAttackDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDosAttackDataRequest&, DescribeDDosAttackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosAttackDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDosAttackEventResponse> DescribeDDosAttackEventOutcome;
                typedef std::future<DescribeDDosAttackEventOutcome> DescribeDDosAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDosAttackEventRequest&, DescribeDDosAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDosAttackEventDetailResponse> DescribeDDosAttackEventDetailOutcome;
                typedef std::future<DescribeDDosAttackEventDetailOutcome> DescribeDDosAttackEventDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDosAttackEventDetailRequest&, DescribeDDosAttackEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosAttackEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDosAttackSourceEventResponse> DescribeDDosAttackSourceEventOutcome;
                typedef std::future<DescribeDDosAttackSourceEventOutcome> DescribeDDosAttackSourceEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDosAttackSourceEventRequest&, DescribeDDosAttackSourceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosAttackSourceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDosAttackTopDataResponse> DescribeDDosAttackTopDataOutcome;
                typedef std::future<DescribeDDosAttackTopDataOutcome> DescribeDDosAttackTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDosAttackTopDataRequest&, DescribeDDosAttackTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosAttackTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDosMajorAttackEventResponse> DescribeDDosMajorAttackEventOutcome;
                typedef std::future<DescribeDDosMajorAttackEventOutcome> DescribeDDosMajorAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDosMajorAttackEventRequest&, DescribeDDosMajorAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosMajorAttackEventAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeHostsCertificateResponse> DescribeHostsCertificateOutcome;
                typedef std::future<DescribeHostsCertificateOutcome> DescribeHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsCertificateRequest&, DescribeHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationResponse> DescribeIdentificationOutcome;
                typedef std::future<DescribeIdentificationOutcome> DescribeIdentificationOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationRequest&, DescribeIdentificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancingResponse> DescribeLoadBalancingOutcome;
                typedef std::future<DescribeLoadBalancingOutcome> DescribeLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLoadBalancingRequest&, DescribeLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancingDetailResponse> DescribeLoadBalancingDetailOutcome;
                typedef std::future<DescribeLoadBalancingDetailOutcome> DescribeLoadBalancingDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLoadBalancingDetailRequest&, DescribeLoadBalancingDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancingDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupResponse> DescribeOriginGroupOutcome;
                typedef std::future<DescribeOriginGroupOutcome> DescribeOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupRequest&, DescribeOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupDetailResponse> DescribeOriginGroupDetailOutcome;
                typedef std::future<DescribeOriginGroupDetailOutcome> DescribeOriginGroupDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupDetailRequest&, DescribeOriginGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewL7DataResponse> DescribeOverviewL7DataOutcome;
                typedef std::future<DescribeOverviewL7DataOutcome> DescribeOverviewL7DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOverviewL7DataRequest&, DescribeOverviewL7DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewL7DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyResponse> DescribeSecurityPolicyOutcome;
                typedef std::future<DescribeSecurityPolicyOutcome> DescribeSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyRequest&, DescribeSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyListResponse> DescribeSecurityPolicyListOutcome;
                typedef std::future<DescribeSecurityPolicyListOutcome> DescribeSecurityPolicyListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyListRequest&, DescribeSecurityPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyManagedRulesResponse> DescribeSecurityPolicyManagedRulesOutcome;
                typedef std::future<DescribeSecurityPolicyManagedRulesOutcome> DescribeSecurityPolicyManagedRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyManagedRulesRequest&, DescribeSecurityPolicyManagedRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyManagedRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyManagedRulesIdResponse> DescribeSecurityPolicyManagedRulesIdOutcome;
                typedef std::future<DescribeSecurityPolicyManagedRulesIdOutcome> DescribeSecurityPolicyManagedRulesIdOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyManagedRulesIdRequest&, DescribeSecurityPolicyManagedRulesIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyManagedRulesIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyRegionsResponse> DescribeSecurityPolicyRegionsOutcome;
                typedef std::future<DescribeSecurityPolicyRegionsOutcome> DescribeSecurityPolicyRegionsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPolicyRegionsRequest&, DescribeSecurityPolicyRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPortraitRulesResponse> DescribeSecurityPortraitRulesOutcome;
                typedef std::future<DescribeSecurityPortraitRulesOutcome> DescribeSecurityPortraitRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityPortraitRulesRequest&, DescribeSecurityPortraitRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPortraitRulesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesAttackEventsResponse> DescribeWebManagedRulesAttackEventsOutcome;
                typedef std::future<DescribeWebManagedRulesAttackEventsOutcome> DescribeWebManagedRulesAttackEventsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesAttackEventsRequest&, DescribeWebManagedRulesAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesDataResponse> DescribeWebManagedRulesDataOutcome;
                typedef std::future<DescribeWebManagedRulesDataOutcome> DescribeWebManagedRulesDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesDataRequest&, DescribeWebManagedRulesDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesLogResponse> DescribeWebManagedRulesLogOutcome;
                typedef std::future<DescribeWebManagedRulesLogOutcome> DescribeWebManagedRulesLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesLogRequest&, DescribeWebManagedRulesLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesTopDataResponse> DescribeWebManagedRulesTopDataOutcome;
                typedef std::future<DescribeWebManagedRulesTopDataOutcome> DescribeWebManagedRulesTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesTopDataRequest&, DescribeWebManagedRulesTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionAttackEventsResponse> DescribeWebProtectionAttackEventsOutcome;
                typedef std::future<DescribeWebProtectionAttackEventsOutcome> DescribeWebProtectionAttackEventsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionAttackEventsRequest&, DescribeWebProtectionAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionDataResponse> DescribeWebProtectionDataOutcome;
                typedef std::future<DescribeWebProtectionDataOutcome> DescribeWebProtectionDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionDataRequest&, DescribeWebProtectionDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionLogResponse> DescribeWebProtectionLogOutcome;
                typedef std::future<DescribeWebProtectionLogOutcome> DescribeWebProtectionLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionLogRequest&, DescribeWebProtectionLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneDDoSPolicyResponse> DescribeZoneDDoSPolicyOutcome;
                typedef std::future<DescribeZoneDDoSPolicyOutcome> DescribeZoneDDoSPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneDDoSPolicyRequest&, DescribeZoneDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneDetailsResponse> DescribeZoneDetailsOutcome;
                typedef std::future<DescribeZoneDetailsOutcome> DescribeZoneDetailsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneDetailsRequest&, DescribeZoneDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneSettingResponse> DescribeZoneSettingOutcome;
                typedef std::future<DescribeZoneSettingOutcome> DescribeZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneSettingRequest&, DescribeZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL7LogsResponse> DownloadL7LogsOutcome;
                typedef std::future<DownloadL7LogsOutcome> DownloadL7LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL7LogsRequest&, DownloadL7LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL7LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::IdentifyZoneResponse> IdentifyZoneOutcome;
                typedef std::future<IdentifyZoneOutcome> IdentifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IdentifyZoneRequest&, IdentifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportDnsRecordsResponse> ImportDnsRecordsOutcome;
                typedef std::future<ImportDnsRecordsOutcome> ImportDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ImportDnsRecordsRequest&, ImportDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportDnsRecordsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyOriginGroupResponse> ModifyOriginGroupOutcome;
                typedef std::future<ModifyOriginGroupOutcome> ModifyOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyOriginGroupRequest&, ModifyOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyResponse> ModifySecurityPolicyOutcome;
                typedef std::future<ModifySecurityPolicyOutcome> ModifySecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityPolicyRequest&, ModifySecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ReclaimZoneResponse> ReclaimZoneOutcome;
                typedef std::future<ReclaimZoneOutcome> ReclaimZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ReclaimZoneRequest&, ReclaimZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReclaimZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanDnsRecordsResponse> ScanDnsRecordsOutcome;
                typedef std::future<ScanDnsRecordsOutcome> ScanDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ScanDnsRecordsRequest&, ScanDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanDnsRecordsAsyncHandler;



                /**
                 *校验证书
                 * @param req CheckCertificateRequest
                 * @return CheckCertificateOutcome
                 */
                CheckCertificateOutcome CheckCertificate(const Model::CheckCertificateRequest &request);
                void CheckCertificateAsync(const Model::CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateOutcomeCallable CheckCertificateCallable(const Model::CheckCertificateRequest& request);

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
                 *批量创建应用代理规则
                 * @param req CreateApplicationProxyRulesRequest
                 * @return CreateApplicationProxyRulesOutcome
                 */
                CreateApplicationProxyRulesOutcome CreateApplicationProxyRules(const Model::CreateApplicationProxyRulesRequest &request);
                void CreateApplicationProxyRulesAsync(const Model::CreateApplicationProxyRulesRequest& request, const CreateApplicationProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyRulesOutcomeCallable CreateApplicationProxyRulesCallable(const Model::CreateApplicationProxyRulesRequest& request);

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
                 *创建负载均衡
                 * @param req CreateLoadBalancingRequest
                 * @return CreateLoadBalancingOutcome
                 */
                CreateLoadBalancingOutcome CreateLoadBalancing(const Model::CreateLoadBalancingRequest &request);
                void CreateLoadBalancingAsync(const Model::CreateLoadBalancingRequest& request, const CreateLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancingOutcomeCallable CreateLoadBalancingCallable(const Model::CreateLoadBalancingRequest& request);

                /**
                 *源站组创建
                 * @param req CreateOriginGroupRequest
                 * @return CreateOriginGroupOutcome
                 */
                CreateOriginGroupOutcome CreateOriginGroup(const Model::CreateOriginGroupRequest &request);
                void CreateOriginGroupAsync(const Model::CreateOriginGroupRequest& request, const CreateOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOriginGroupOutcomeCallable CreateOriginGroupCallable(const Model::CreateOriginGroupRequest& request);

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
                 *用于用户接入新的站点
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

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
                 *源站组删除
                 * @param req DeleteOriginGroupRequest
                 * @return DeleteOriginGroupOutcome
                 */
                DeleteOriginGroupOutcome DeleteOriginGroup(const Model::DeleteOriginGroupRequest &request);
                void DeleteOriginGroupAsync(const Model::DeleteOriginGroupRequest& request, const DeleteOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOriginGroupOutcomeCallable DeleteOriginGroupCallable(const Model::DeleteOriginGroupRequest& request);

                /**
                 *删除站点
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *获取应用代理列表
                 * @param req DescribeApplicationProxyRequest
                 * @return DescribeApplicationProxyOutcome
                 */
                DescribeApplicationProxyOutcome DescribeApplicationProxy(const Model::DescribeApplicationProxyRequest &request);
                void DescribeApplicationProxyAsync(const Model::DescribeApplicationProxyRequest& request, const DescribeApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProxyOutcomeCallable DescribeApplicationProxyCallable(const Model::DescribeApplicationProxyRequest& request);

                /**
                 *获取应用代理详细信息
                 * @param req DescribeApplicationProxyDetailRequest
                 * @return DescribeApplicationProxyDetailOutcome
                 */
                DescribeApplicationProxyDetailOutcome DescribeApplicationProxyDetail(const Model::DescribeApplicationProxyDetailRequest &request);
                void DescribeApplicationProxyDetailAsync(const Model::DescribeApplicationProxyDetailRequest& request, const DescribeApplicationProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProxyDetailOutcomeCallable DescribeApplicationProxyDetailCallable(const Model::DescribeApplicationProxyDetailRequest& request);

                /**
                 *查询Bot攻击日志
                 * @param req DescribeBotLogRequest
                 * @return DescribeBotLogOutcome
                 */
                DescribeBotLogOutcome DescribeBotLog(const Model::DescribeBotLogRequest &request);
                void DescribeBotLogAsync(const Model::DescribeBotLogRequest& request, const DescribeBotLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotLogOutcomeCallable DescribeBotLogCallable(const Model::DescribeBotLogRequest& request);

                /**
                 *分页查询Bot托管规则
                 * @param req DescribeBotManagedRulesRequest
                 * @return DescribeBotManagedRulesOutcome
                 */
                DescribeBotManagedRulesOutcome DescribeBotManagedRules(const Model::DescribeBotManagedRulesRequest &request);
                void DescribeBotManagedRulesAsync(const Model::DescribeBotManagedRulesRequest& request, const DescribeBotManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotManagedRulesOutcomeCallable DescribeBotManagedRulesCallable(const Model::DescribeBotManagedRulesRequest& request);

                /**
                 *查询域名 CNAME 状态
                 * @param req DescribeCnameStatusRequest
                 * @return DescribeCnameStatusOutcome
                 */
                DescribeCnameStatusOutcome DescribeCnameStatus(const Model::DescribeCnameStatusRequest &request);
                void DescribeCnameStatusAsync(const Model::DescribeCnameStatusRequest& request, const DescribeCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCnameStatusOutcomeCallable DescribeCnameStatusCallable(const Model::DescribeCnameStatusRequest& request);

                /**
                 *查询DDoS防护配置详情
                 * @param req DescribeDDoSPolicyRequest
                 * @return DescribeDDoSPolicyOutcome
                 */
                DescribeDDoSPolicyOutcome DescribeDDoSPolicy(const Model::DescribeDDoSPolicyRequest &request);
                void DescribeDDoSPolicyAsync(const Model::DescribeDDoSPolicyRequest& request, const DescribeDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSPolicyOutcomeCallable DescribeDDoSPolicyCallable(const Model::DescribeDDoSPolicyRequest& request);

                /**
                 *查询DDos攻击数据
                 * @param req DescribeDDosAttackDataRequest
                 * @return DescribeDDosAttackDataOutcome
                 */
                DescribeDDosAttackDataOutcome DescribeDDosAttackData(const Model::DescribeDDosAttackDataRequest &request);
                void DescribeDDosAttackDataAsync(const Model::DescribeDDosAttackDataRequest& request, const DescribeDDosAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDosAttackDataOutcomeCallable DescribeDDosAttackDataCallable(const Model::DescribeDDosAttackDataRequest& request);

                /**
                 *查询DDos攻击事件
                 * @param req DescribeDDosAttackEventRequest
                 * @return DescribeDDosAttackEventOutcome
                 */
                DescribeDDosAttackEventOutcome DescribeDDosAttackEvent(const Model::DescribeDDosAttackEventRequest &request);
                void DescribeDDosAttackEventAsync(const Model::DescribeDDosAttackEventRequest& request, const DescribeDDosAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDosAttackEventOutcomeCallable DescribeDDosAttackEventCallable(const Model::DescribeDDosAttackEventRequest& request);

                /**
                 *查询DDos攻击事件详情
                 * @param req DescribeDDosAttackEventDetailRequest
                 * @return DescribeDDosAttackEventDetailOutcome
                 */
                DescribeDDosAttackEventDetailOutcome DescribeDDosAttackEventDetail(const Model::DescribeDDosAttackEventDetailRequest &request);
                void DescribeDDosAttackEventDetailAsync(const Model::DescribeDDosAttackEventDetailRequest& request, const DescribeDDosAttackEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDosAttackEventDetailOutcomeCallable DescribeDDosAttackEventDetailCallable(const Model::DescribeDDosAttackEventDetailRequest& request);

                /**
                 *查询DDos攻击源
                 * @param req DescribeDDosAttackSourceEventRequest
                 * @return DescribeDDosAttackSourceEventOutcome
                 */
                DescribeDDosAttackSourceEventOutcome DescribeDDosAttackSourceEvent(const Model::DescribeDDosAttackSourceEventRequest &request);
                void DescribeDDosAttackSourceEventAsync(const Model::DescribeDDosAttackSourceEventRequest& request, const DescribeDDosAttackSourceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDosAttackSourceEventOutcomeCallable DescribeDDosAttackSourceEventCallable(const Model::DescribeDDosAttackSourceEventRequest& request);

                /**
                 *查询DDos攻击Top数据
                 * @param req DescribeDDosAttackTopDataRequest
                 * @return DescribeDDosAttackTopDataOutcome
                 */
                DescribeDDosAttackTopDataOutcome DescribeDDosAttackTopData(const Model::DescribeDDosAttackTopDataRequest &request);
                void DescribeDDosAttackTopDataAsync(const Model::DescribeDDosAttackTopDataRequest& request, const DescribeDDosAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDosAttackTopDataOutcomeCallable DescribeDDosAttackTopDataCallable(const Model::DescribeDDosAttackTopDataRequest& request);

                /**
                 *查询DDos主攻击事件
                 * @param req DescribeDDosMajorAttackEventRequest
                 * @return DescribeDDosMajorAttackEventOutcome
                 */
                DescribeDDosMajorAttackEventOutcome DescribeDDosMajorAttackEvent(const Model::DescribeDDosMajorAttackEventRequest &request);
                void DescribeDDosMajorAttackEventAsync(const Model::DescribeDDosMajorAttackEventRequest& request, const DescribeDDosMajorAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDosMajorAttackEventOutcomeCallable DescribeDDosMajorAttackEventCallable(const Model::DescribeDDosMajorAttackEventRequest& request);

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
                 *查询域名证书列表，支持搜索、分页、排序、过滤。
                 * @param req DescribeHostsCertificateRequest
                 * @return DescribeHostsCertificateOutcome
                 */
                DescribeHostsCertificateOutcome DescribeHostsCertificate(const Model::DescribeHostsCertificateRequest &request);
                void DescribeHostsCertificateAsync(const Model::DescribeHostsCertificateRequest& request, const DescribeHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsCertificateOutcomeCallable DescribeHostsCertificateCallable(const Model::DescribeHostsCertificateRequest& request);

                /**
                 *用于查询域名配置信息
                 * @param req DescribeHostsSettingRequest
                 * @return DescribeHostsSettingOutcome
                 */
                DescribeHostsSettingOutcome DescribeHostsSetting(const Model::DescribeHostsSettingRequest &request);
                void DescribeHostsSettingAsync(const Model::DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsSettingOutcomeCallable DescribeHostsSettingCallable(const Model::DescribeHostsSettingRequest& request);

                /**
                 *查询验证结果
                 * @param req DescribeIdentificationRequest
                 * @return DescribeIdentificationOutcome
                 */
                DescribeIdentificationOutcome DescribeIdentification(const Model::DescribeIdentificationRequest &request);
                void DescribeIdentificationAsync(const Model::DescribeIdentificationRequest& request, const DescribeIdentificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentificationOutcomeCallable DescribeIdentificationCallable(const Model::DescribeIdentificationRequest& request);

                /**
                 *获取负载均衡列表
                 * @param req DescribeLoadBalancingRequest
                 * @return DescribeLoadBalancingOutcome
                 */
                DescribeLoadBalancingOutcome DescribeLoadBalancing(const Model::DescribeLoadBalancingRequest &request);
                void DescribeLoadBalancingAsync(const Model::DescribeLoadBalancingRequest& request, const DescribeLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancingOutcomeCallable DescribeLoadBalancingCallable(const Model::DescribeLoadBalancingRequest& request);

                /**
                 *获取负载均衡详细信息
                 * @param req DescribeLoadBalancingDetailRequest
                 * @return DescribeLoadBalancingDetailOutcome
                 */
                DescribeLoadBalancingDetailOutcome DescribeLoadBalancingDetail(const Model::DescribeLoadBalancingDetailRequest &request);
                void DescribeLoadBalancingDetailAsync(const Model::DescribeLoadBalancingDetailRequest& request, const DescribeLoadBalancingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancingDetailOutcomeCallable DescribeLoadBalancingDetailCallable(const Model::DescribeLoadBalancingDetailRequest& request);

                /**
                 *获取源站组信息列表
                 * @param req DescribeOriginGroupRequest
                 * @return DescribeOriginGroupOutcome
                 */
                DescribeOriginGroupOutcome DescribeOriginGroup(const Model::DescribeOriginGroupRequest &request);
                void DescribeOriginGroupAsync(const Model::DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupOutcomeCallable DescribeOriginGroupCallable(const Model::DescribeOriginGroupRequest& request);

                /**
                 *获取源站组详细信息
                 * @param req DescribeOriginGroupDetailRequest
                 * @return DescribeOriginGroupDetailOutcome
                 */
                DescribeOriginGroupDetailOutcome DescribeOriginGroupDetail(const Model::DescribeOriginGroupDetailRequest &request);
                void DescribeOriginGroupDetailAsync(const Model::DescribeOriginGroupDetailRequest& request, const DescribeOriginGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupDetailOutcomeCallable DescribeOriginGroupDetailCallable(const Model::DescribeOriginGroupDetailRequest& request);

                /**
                 *查询七层监控类时序流量数据
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
                 *查询安全防护配置详情
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
                 *分页查询门神规则
                 * @param req DescribeSecurityPolicyManagedRulesRequest
                 * @return DescribeSecurityPolicyManagedRulesOutcome
                 */
                DescribeSecurityPolicyManagedRulesOutcome DescribeSecurityPolicyManagedRules(const Model::DescribeSecurityPolicyManagedRulesRequest &request);
                void DescribeSecurityPolicyManagedRulesAsync(const Model::DescribeSecurityPolicyManagedRulesRequest& request, const DescribeSecurityPolicyManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyManagedRulesOutcomeCallable DescribeSecurityPolicyManagedRulesCallable(const Model::DescribeSecurityPolicyManagedRulesRequest& request);

                /**
                 *规则id查询门神规则详情
                 * @param req DescribeSecurityPolicyManagedRulesIdRequest
                 * @return DescribeSecurityPolicyManagedRulesIdOutcome
                 */
                DescribeSecurityPolicyManagedRulesIdOutcome DescribeSecurityPolicyManagedRulesId(const Model::DescribeSecurityPolicyManagedRulesIdRequest &request);
                void DescribeSecurityPolicyManagedRulesIdAsync(const Model::DescribeSecurityPolicyManagedRulesIdRequest& request, const DescribeSecurityPolicyManagedRulesIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyManagedRulesIdOutcomeCallable DescribeSecurityPolicyManagedRulesIdCallable(const Model::DescribeSecurityPolicyManagedRulesIdRequest& request);

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
                 *四层时序流量数据查询
                 * @param req DescribeTimingL4DataRequest
                 * @return DescribeTimingL4DataOutcome
                 */
                DescribeTimingL4DataOutcome DescribeTimingL4Data(const Model::DescribeTimingL4DataRequest &request);
                void DescribeTimingL4DataAsync(const Model::DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL4DataOutcomeCallable DescribeTimingL4DataCallable(const Model::DescribeTimingL4DataRequest& request);

                /**
                 *查询七层数据分析类时序流量数据
                 * @param req DescribeTimingL7AnalysisDataRequest
                 * @return DescribeTimingL7AnalysisDataOutcome
                 */
                DescribeTimingL7AnalysisDataOutcome DescribeTimingL7AnalysisData(const Model::DescribeTimingL7AnalysisDataRequest &request);
                void DescribeTimingL7AnalysisDataAsync(const Model::DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7AnalysisDataOutcomeCallable DescribeTimingL7AnalysisDataCallable(const Model::DescribeTimingL7AnalysisDataRequest& request);

                /**
                 *七层查询缓存分析时序类流量数据
                 * @param req DescribeTimingL7CacheDataRequest
                 * @return DescribeTimingL7CacheDataOutcome
                 */
                DescribeTimingL7CacheDataOutcome DescribeTimingL7CacheData(const Model::DescribeTimingL7CacheDataRequest &request);
                void DescribeTimingL7CacheDataAsync(const Model::DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7CacheDataOutcomeCallable DescribeTimingL7CacheDataCallable(const Model::DescribeTimingL7CacheDataRequest& request);

                /**
                 *查询top类流量数据
                 * @param req DescribeTopL7AnalysisDataRequest
                 * @return DescribeTopL7AnalysisDataOutcome
                 */
                DescribeTopL7AnalysisDataOutcome DescribeTopL7AnalysisData(const Model::DescribeTopL7AnalysisDataRequest &request);
                void DescribeTopL7AnalysisDataAsync(const Model::DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7AnalysisDataOutcomeCallable DescribeTopL7AnalysisDataCallable(const Model::DescribeTopL7AnalysisDataRequest& request);

                /**
                 *七层查询缓存分析top类流量数据
                 * @param req DescribeTopL7CacheDataRequest
                 * @return DescribeTopL7CacheDataOutcome
                 */
                DescribeTopL7CacheDataOutcome DescribeTopL7CacheData(const Model::DescribeTopL7CacheDataRequest &request);
                void DescribeTopL7CacheDataAsync(const Model::DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7CacheDataOutcomeCallable DescribeTopL7CacheDataCallable(const Model::DescribeTopL7CacheDataRequest& request);

                /**
                 *查询Web托管攻击事件
                 * @param req DescribeWebManagedRulesAttackEventsRequest
                 * @return DescribeWebManagedRulesAttackEventsOutcome
                 */
                DescribeWebManagedRulesAttackEventsOutcome DescribeWebManagedRulesAttackEvents(const Model::DescribeWebManagedRulesAttackEventsRequest &request);
                void DescribeWebManagedRulesAttackEventsAsync(const Model::DescribeWebManagedRulesAttackEventsRequest& request, const DescribeWebManagedRulesAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesAttackEventsOutcomeCallable DescribeWebManagedRulesAttackEventsCallable(const Model::DescribeWebManagedRulesAttackEventsRequest& request);

                /**
                 *查询Web托管规则数据
                 * @param req DescribeWebManagedRulesDataRequest
                 * @return DescribeWebManagedRulesDataOutcome
                 */
                DescribeWebManagedRulesDataOutcome DescribeWebManagedRulesData(const Model::DescribeWebManagedRulesDataRequest &request);
                void DescribeWebManagedRulesDataAsync(const Model::DescribeWebManagedRulesDataRequest& request, const DescribeWebManagedRulesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesDataOutcomeCallable DescribeWebManagedRulesDataCallable(const Model::DescribeWebManagedRulesDataRequest& request);

                /**
                 *查询Web托管日志
                 * @param req DescribeWebManagedRulesLogRequest
                 * @return DescribeWebManagedRulesLogOutcome
                 */
                DescribeWebManagedRulesLogOutcome DescribeWebManagedRulesLog(const Model::DescribeWebManagedRulesLogRequest &request);
                void DescribeWebManagedRulesLogAsync(const Model::DescribeWebManagedRulesLogRequest& request, const DescribeWebManagedRulesLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesLogOutcomeCallable DescribeWebManagedRulesLogCallable(const Model::DescribeWebManagedRulesLogRequest& request);

                /**
                 *查询Web托管规则Top数据
                 * @param req DescribeWebManagedRulesTopDataRequest
                 * @return DescribeWebManagedRulesTopDataOutcome
                 */
                DescribeWebManagedRulesTopDataOutcome DescribeWebManagedRulesTopData(const Model::DescribeWebManagedRulesTopDataRequest &request);
                void DescribeWebManagedRulesTopDataAsync(const Model::DescribeWebManagedRulesTopDataRequest& request, const DescribeWebManagedRulesTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesTopDataOutcomeCallable DescribeWebManagedRulesTopDataCallable(const Model::DescribeWebManagedRulesTopDataRequest& request);

                /**
                 *查询web防护攻击事件
                 * @param req DescribeWebProtectionAttackEventsRequest
                 * @return DescribeWebProtectionAttackEventsOutcome
                 */
                DescribeWebProtectionAttackEventsOutcome DescribeWebProtectionAttackEvents(const Model::DescribeWebProtectionAttackEventsRequest &request);
                void DescribeWebProtectionAttackEventsAsync(const Model::DescribeWebProtectionAttackEventsRequest& request, const DescribeWebProtectionAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionAttackEventsOutcomeCallable DescribeWebProtectionAttackEventsCallable(const Model::DescribeWebProtectionAttackEventsRequest& request);

                /**
                 *查询web防护数据
                 * @param req DescribeWebProtectionDataRequest
                 * @return DescribeWebProtectionDataOutcome
                 */
                DescribeWebProtectionDataOutcome DescribeWebProtectionData(const Model::DescribeWebProtectionDataRequest &request);
                void DescribeWebProtectionDataAsync(const Model::DescribeWebProtectionDataRequest& request, const DescribeWebProtectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionDataOutcomeCallable DescribeWebProtectionDataCallable(const Model::DescribeWebProtectionDataRequest& request);

                /**
                 *查询web防护日志
                 * @param req DescribeWebProtectionLogRequest
                 * @return DescribeWebProtectionLogOutcome
                 */
                DescribeWebProtectionLogOutcome DescribeWebProtectionLog(const Model::DescribeWebProtectionLogRequest &request);
                void DescribeWebProtectionLogAsync(const Model::DescribeWebProtectionLogRequest& request, const DescribeWebProtectionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionLogOutcomeCallable DescribeWebProtectionLogCallable(const Model::DescribeWebProtectionLogRequest& request);

                /**
                 *查询所有DDoS防护分区
                 * @param req DescribeZoneDDoSPolicyRequest
                 * @return DescribeZoneDDoSPolicyOutcome
                 */
                DescribeZoneDDoSPolicyOutcome DescribeZoneDDoSPolicy(const Model::DescribeZoneDDoSPolicyRequest &request);
                void DescribeZoneDDoSPolicyAsync(const Model::DescribeZoneDDoSPolicyRequest& request, const DescribeZoneDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneDDoSPolicyOutcomeCallable DescribeZoneDDoSPolicyCallable(const Model::DescribeZoneDDoSPolicyRequest& request);

                /**
                 *根据站点 ID 查询站点的详细信息
                 * @param req DescribeZoneDetailsRequest
                 * @return DescribeZoneDetailsOutcome
                 */
                DescribeZoneDetailsOutcome DescribeZoneDetails(const Model::DescribeZoneDetailsRequest &request);
                void DescribeZoneDetailsAsync(const Model::DescribeZoneDetailsRequest& request, const DescribeZoneDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneDetailsOutcomeCallable DescribeZoneDetailsCallable(const Model::DescribeZoneDetailsRequest& request);

                /**
                 *用于查询站点的所有配置信息。
                 * @param req DescribeZoneSettingRequest
                 * @return DescribeZoneSettingOutcome
                 */
                DescribeZoneSettingOutcome DescribeZoneSetting(const Model::DescribeZoneSettingRequest &request);
                void DescribeZoneSettingAsync(const Model::DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneSettingOutcomeCallable DescribeZoneSettingCallable(const Model::DescribeZoneSettingRequest& request);

                /**
                 *用户查询用户站点信息列表，支持分页
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *查询七层离线日志
                 * @param req DownloadL7LogsRequest
                 * @return DownloadL7LogsOutcome
                 */
                DownloadL7LogsOutcome DownloadL7Logs(const Model::DownloadL7LogsRequest &request);
                void DownloadL7LogsAsync(const Model::DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL7LogsOutcomeCallable DownloadL7LogsCallable(const Model::DownloadL7LogsRequest& request);

                /**
                 *用于验证站点所有权
                 * @param req IdentifyZoneRequest
                 * @return IdentifyZoneOutcome
                 */
                IdentifyZoneOutcome IdentifyZone(const Model::IdentifyZoneRequest &request);
                void IdentifyZoneAsync(const Model::IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdentifyZoneOutcomeCallable IdentifyZoneCallable(const Model::IdentifyZoneRequest& request);

                /**
                 *导入 DNS 记录
                 * @param req ImportDnsRecordsRequest
                 * @return ImportDnsRecordsOutcome
                 */
                ImportDnsRecordsOutcome ImportDnsRecords(const Model::ImportDnsRecordsRequest &request);
                void ImportDnsRecordsAsync(const Model::ImportDnsRecordsRequest& request, const ImportDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportDnsRecordsOutcomeCallable ImportDnsRecordsCallable(const Model::ImportDnsRecordsRequest& request);

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
                 *修改 DNSSEC 状态
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
                 *源站组修改
                 * @param req ModifyOriginGroupRequest
                 * @return ModifyOriginGroupOutcome
                 */
                ModifyOriginGroupOutcome ModifyOriginGroup(const Model::ModifyOriginGroupRequest &request);
                void ModifyOriginGroupAsync(const Model::ModifyOriginGroupRequest& request, const ModifyOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOriginGroupOutcomeCallable ModifyOriginGroupCallable(const Model::ModifyOriginGroupRequest& request);

                /**
                 *修改Web&Bot安全配置
                 * @param req ModifySecurityPolicyRequest
                 * @return ModifySecurityPolicyOutcome
                 */
                ModifySecurityPolicyOutcome ModifySecurityPolicy(const Model::ModifySecurityPolicyRequest &request);
                void ModifySecurityPolicyAsync(const Model::ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyOutcomeCallable ModifySecurityPolicyCallable(const Model::ModifySecurityPolicyRequest& request);

                /**
                 *用该站点信息
                 * @param req ModifyZoneRequest
                 * @return ModifyZoneOutcome
                 */
                ModifyZoneOutcome ModifyZone(const Model::ModifyZoneRequest &request);
                void ModifyZoneAsync(const Model::ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneOutcomeCallable ModifyZoneCallable(const Model::ModifyZoneRequest& request);

                /**
                 *开启，关闭 CNAME 加速
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
                 *用于开启，关闭站点
                 * @param req ModifyZoneStatusRequest
                 * @return ModifyZoneStatusOutcome
                 */
                ModifyZoneStatusOutcome ModifyZoneStatus(const Model::ModifyZoneStatusRequest &request);
                void ModifyZoneStatusAsync(const Model::ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneStatusOutcomeCallable ModifyZoneStatusCallable(const Model::ModifyZoneStatusRequest& request);

                /**
                 *站点被其他用户接入后，验证了站点所有权之后，可以找回该站点
                 * @param req ReclaimZoneRequest
                 * @return ReclaimZoneOutcome
                 */
                ReclaimZoneOutcome ReclaimZone(const Model::ReclaimZoneRequest &request);
                void ReclaimZoneAsync(const Model::ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReclaimZoneOutcomeCallable ReclaimZoneCallable(const Model::ReclaimZoneRequest& request);

                /**
                 *扫描站点历史解析记录
                 * @param req ScanDnsRecordsRequest
                 * @return ScanDnsRecordsOutcome
                 */
                ScanDnsRecordsOutcome ScanDnsRecords(const Model::ScanDnsRecordsRequest &request);
                void ScanDnsRecordsAsync(const Model::ScanDnsRecordsRequest& request, const ScanDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanDnsRecordsOutcomeCallable ScanDnsRecordsCallable(const Model::ScanDnsRecordsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_TEOCLIENT_H_
