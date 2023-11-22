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
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskResponse.h>
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
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAccelerationDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAccelerationDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginProtectionRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginProtectionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingResponse.h>
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
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupResponse.h>
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
                typedef Outcome<Core::Error, Model::DeleteOriginGroupResponse> DeleteOriginGroupOutcome;
                typedef std::future<DeleteOriginGroupOutcome> DeleteOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteOriginGroupRequest&, DeleteOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOriginGroupAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeContentQuotaResponse> DescribeContentQuotaOutcome;
                typedef std::future<DescribeContentQuotaOutcome> DescribeContentQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeContentQuotaRequest&, DescribeContentQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentQuotaAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationsResponse> DescribeIdentificationsOutcome;
                typedef std::future<DescribeIdentificationsOutcome> DescribeIdentificationsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationsRequest&, DescribeIdentificationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupResponse> DescribeOriginGroupOutcome;
                typedef std::future<DescribeOriginGroupOutcome> DescribeOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupRequest&, DescribeOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginProtectionResponse> DescribeOriginProtectionOutcome;
                typedef std::future<DescribeOriginProtectionOutcome> DescribeOriginProtectionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginProtectionRequest&, DescribeOriginProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewL7DataResponse> DescribeOverviewL7DataOutcome;
                typedef std::future<DescribeOverviewL7DataOutcome> DescribeOverviewL7DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOverviewL7DataRequest&, DescribeOverviewL7DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewL7DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesSettingResponse> DescribeRulesSettingOutcome;
                typedef std::future<DescribeRulesSettingOutcome> DescribeRulesSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesSettingRequest&, DescribeRulesSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesSettingAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyHostsCertificateResponse> ModifyHostsCertificateOutcome;
                typedef std::future<ModifyHostsCertificateOutcome> ModifyHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyHostsCertificateRequest&, ModifyHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOriginGroupResponse> ModifyOriginGroupOutcome;
                typedef std::future<ModifyOriginGroupOutcome> ModifyOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyOriginGroupRequest&, ModifyOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOriginGroupAsyncHandler;
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
                 *创建源站组，以源站组的方式管理业务源站。此处配置的源站组可于**添加加速域名**和**四层代理**等功能中引用。
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
                 *当源站资源更新，但节点缓存 TTL 未过期时，用户仍会访问到旧的资源，此时可以通过该接口实现节点资源更新。触发更新的方法有以下两种：<li>直接删除：不做任何校验，直接删除节点缓存，用户请求时触发回源拉取；</li><li>标记过期：将节点资源置为过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>

清除缓存任务详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
                 * @param req CreatePurgeTaskRequest
                 * @return CreatePurgeTaskOutcome
                 */
                CreatePurgeTaskOutcome CreatePurgeTask(const Model::CreatePurgeTaskRequest &request);
                void CreatePurgeTaskAsync(const Model::CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePurgeTaskOutcomeCallable CreatePurgeTaskCallable(const Model::CreatePurgeTaskRequest& request);

                /**
                 *规则引擎创建规则。
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
                 *删除源站组，若源站组仍然被服务（例如：四层代理，域名服务，负载均衡，规则引起）引用，将不允许删除。
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
                 *您可以通过本接口查看站点下的域名信息，包括加速域名、源站以及域名状态等信息。您可以查看站点下全部域名的信息，也可以指定过滤条件查询对应的域名信息。
                 * @param req DescribeAccelerationDomainsRequest
                 * @return DescribeAccelerationDomainsOutcome
                 */
                DescribeAccelerationDomainsOutcome DescribeAccelerationDomains(const Model::DescribeAccelerationDomainsRequest &request);
                void DescribeAccelerationDomainsAsync(const Model::DescribeAccelerationDomainsRequest& request, const DescribeAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerationDomainsOutcomeCallable DescribeAccelerationDomainsCallable(const Model::DescribeAccelerationDomainsRequest& request);

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
                 *获取源站组列表
                 * @param req DescribeOriginGroupRequest
                 * @return DescribeOriginGroupOutcome
                 */
                DescribeOriginGroupOutcome DescribeOriginGroup(const Model::DescribeOriginGroupRequest &request);
                void DescribeOriginGroupAsync(const Model::DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupOutcomeCallable DescribeOriginGroupCallable(const Model::DescribeOriginGroupRequest& request);

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
                 *用于查询站点的所有配置信息。
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
                 *修改源站组配置，新提交的源站记录将会覆盖原有源站组中的源站记录。
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
