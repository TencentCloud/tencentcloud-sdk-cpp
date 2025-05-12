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

#ifndef TENCENTCLOUD_GAAP_V20180529_GAAPCLIENT_H_
#define TENCENTCLOUD_GAAP_V20180529_GAAPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gaap/v20180529/model/AddRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/AddRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/BanAndRecoverProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/BanAndRecoverProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/BindListenerRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/BindListenerRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/BindRuleRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/BindRuleRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/CheckProxyCreateRequest.h>
#include <tencentcloud/gaap/v20180529/model/CheckProxyCreateResponse.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/CloseSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/CloseSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateCertificateRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateCertificateResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateCustomHeaderRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateCustomHeaderResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainErrorPageInfoRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainErrorPageInfoResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateGlobalDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateGlobalDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateGlobalDomainDnsRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateGlobalDomainDnsResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPListenerRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPListenerResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPSListenerRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPSListenerResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateRuleRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateRuleResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateTCPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateTCPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateUDPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateUDPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteCertificateRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteCertificateResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainErrorPageInfoRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainErrorPageInfoResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteGlobalDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteGlobalDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteGlobalDomainDnsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteGlobalDomainDnsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteRuleRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteRuleResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsByDestRegionRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsByDestRegionResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAuthSignatureRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAuthSignatureResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeBlackHeaderRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeBlackHeaderResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificateDetailRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificatesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificatesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCountryAreaMappingRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCountryAreaMappingResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCrossBorderProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCrossBorderProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCustomHeaderRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCustomHeaderResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDestRegionsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDestRegionsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoByIdsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoByIdsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGlobalDomainDnsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGlobalDomainDnsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGlobalDomainsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGlobalDomainsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupAndStatisticsProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupAndStatisticsProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupDomainConfigRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupDomainConfigResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPSListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPSListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesStatusRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesStatusResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyAndStatisticsListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyAndStatisticsListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyDetailRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyDetailResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupDetailsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupDetailsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupListRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupListResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServerStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServerStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersStatusRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersStatusResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRegionAndPriceRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRegionAndPriceResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeResourcesByTagRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeResourcesByTagResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRuleRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRuleRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesByRuleIdsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesByRuleIdsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityPolicyDetailRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityPolicyDetailResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeTCPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeTCPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeUDPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeUDPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DestroyProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DestroyProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DisableGlobalDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/DisableGlobalDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/EnableGlobalDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/EnableGlobalDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/InquiryPriceCreateProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/InquiryPriceCreateProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateAttributesRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateAttributesResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGlobalDomainAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGlobalDomainAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGlobalDomainDnsRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGlobalDomainDnsResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGroupDomainConfigRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGroupDomainConfigResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPSListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPSListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesProjectRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesProjectResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyConfigurationRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyConfigurationResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyGroupAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyGroupAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRealServerNameRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRealServerNameResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRuleAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRuleAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifySecurityRuleRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifySecurityRuleResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyTCPListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyTCPListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyUDPListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyUDPListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/OpenSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/OpenSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/RemoveRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/RemoveRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/SetAuthenticationRequest.h>
#include <tencentcloud/gaap/v20180529/model/SetAuthenticationResponse.h>
#include <tencentcloud/gaap/v20180529/model/SetTlsVersionRequest.h>
#include <tencentcloud/gaap/v20180529/model/SetTlsVersionResponse.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            class GaapClient : public AbstractClient
            {
            public:
                GaapClient(const Credential &credential, const std::string &region);
                GaapClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddRealServersResponse> AddRealServersOutcome;
                typedef std::future<AddRealServersOutcome> AddRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::AddRealServersRequest&, AddRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::BanAndRecoverProxyResponse> BanAndRecoverProxyOutcome;
                typedef std::future<BanAndRecoverProxyOutcome> BanAndRecoverProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::BanAndRecoverProxyRequest&, BanAndRecoverProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BanAndRecoverProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindListenerRealServersResponse> BindListenerRealServersOutcome;
                typedef std::future<BindListenerRealServersOutcome> BindListenerRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::BindListenerRealServersRequest&, BindListenerRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindListenerRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::BindRuleRealServersResponse> BindRuleRealServersOutcome;
                typedef std::future<BindRuleRealServersOutcome> BindRuleRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::BindRuleRealServersRequest&, BindRuleRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRuleRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckProxyCreateResponse> CheckProxyCreateOutcome;
                typedef std::future<CheckProxyCreateOutcome> CheckProxyCreateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CheckProxyCreateRequest&, CheckProxyCreateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckProxyCreateAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseProxiesResponse> CloseProxiesOutcome;
                typedef std::future<CloseProxiesOutcome> CloseProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CloseProxiesRequest&, CloseProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseProxyGroupResponse> CloseProxyGroupOutcome;
                typedef std::future<CloseProxyGroupOutcome> CloseProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CloseProxyGroupRequest&, CloseProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseSecurityPolicyResponse> CloseSecurityPolicyOutcome;
                typedef std::future<CloseSecurityPolicyOutcome> CloseSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CloseSecurityPolicyRequest&, CloseSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateResponse> CreateCertificateOutcome;
                typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateCertificateRequest&, CreateCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomHeaderResponse> CreateCustomHeaderOutcome;
                typedef std::future<CreateCustomHeaderOutcome> CreateCustomHeaderOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateCustomHeaderRequest&, CreateCustomHeaderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomHeaderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainErrorPageInfoResponse> CreateDomainErrorPageInfoOutcome;
                typedef std::future<CreateDomainErrorPageInfoOutcome> CreateDomainErrorPageInfoOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateDomainErrorPageInfoRequest&, CreateDomainErrorPageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainErrorPageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalDomainResponse> CreateGlobalDomainOutcome;
                typedef std::future<CreateGlobalDomainOutcome> CreateGlobalDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateGlobalDomainRequest&, CreateGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalDomainDnsResponse> CreateGlobalDomainDnsOutcome;
                typedef std::future<CreateGlobalDomainDnsOutcome> CreateGlobalDomainDnsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateGlobalDomainDnsRequest&, CreateGlobalDomainDnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDomainDnsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHTTPListenerResponse> CreateHTTPListenerOutcome;
                typedef std::future<CreateHTTPListenerOutcome> CreateHTTPListenerOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateHTTPListenerRequest&, CreateHTTPListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHTTPListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHTTPSListenerResponse> CreateHTTPSListenerOutcome;
                typedef std::future<CreateHTTPSListenerOutcome> CreateHTTPSListenerOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateHTTPSListenerRequest&, CreateHTTPSListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHTTPSListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxyResponse> CreateProxyOutcome;
                typedef std::future<CreateProxyOutcome> CreateProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateProxyRequest&, CreateProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxyGroupResponse> CreateProxyGroupOutcome;
                typedef std::future<CreateProxyGroupOutcome> CreateProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateProxyGroupRequest&, CreateProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxyGroupDomainResponse> CreateProxyGroupDomainOutcome;
                typedef std::future<CreateProxyGroupDomainOutcome> CreateProxyGroupDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateProxyGroupDomainRequest&, CreateProxyGroupDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyGroupDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPolicyResponse> CreateSecurityPolicyOutcome;
                typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateSecurityPolicyRequest&, CreateSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityRulesResponse> CreateSecurityRulesOutcome;
                typedef std::future<CreateSecurityRulesOutcome> CreateSecurityRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateSecurityRulesRequest&, CreateSecurityRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTCPListenersResponse> CreateTCPListenersOutcome;
                typedef std::future<CreateTCPListenersOutcome> CreateTCPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateTCPListenersRequest&, CreateTCPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTCPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUDPListenersResponse> CreateUDPListenersOutcome;
                typedef std::future<CreateUDPListenersOutcome> CreateUDPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateUDPListenersRequest&, CreateUDPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUDPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCertificateResponse> DeleteCertificateOutcome;
                typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteCertificateRequest&, DeleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainResponse> DeleteDomainOutcome;
                typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteDomainRequest&, DeleteDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainErrorPageInfoResponse> DeleteDomainErrorPageInfoOutcome;
                typedef std::future<DeleteDomainErrorPageInfoOutcome> DeleteDomainErrorPageInfoOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteDomainErrorPageInfoRequest&, DeleteDomainErrorPageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainErrorPageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalDomainResponse> DeleteGlobalDomainOutcome;
                typedef std::future<DeleteGlobalDomainOutcome> DeleteGlobalDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteGlobalDomainRequest&, DeleteGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalDomainDnsResponse> DeleteGlobalDomainDnsOutcome;
                typedef std::future<DeleteGlobalDomainDnsOutcome> DeleteGlobalDomainDnsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteGlobalDomainDnsRequest&, DeleteGlobalDomainDnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDomainDnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenersResponse> DeleteListenersOutcome;
                typedef std::future<DeleteListenersOutcome> DeleteListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteListenersRequest&, DeleteListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProxyGroupResponse> DeleteProxyGroupOutcome;
                typedef std::future<DeleteProxyGroupOutcome> DeleteProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteProxyGroupRequest&, DeleteProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityPolicyResponse> DeleteSecurityPolicyOutcome;
                typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteSecurityPolicyRequest&, DeleteSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityRulesResponse> DeleteSecurityRulesOutcome;
                typedef std::future<DeleteSecurityRulesOutcome> DeleteSecurityRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteSecurityRulesRequest&, DeleteSecurityRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessRegionsResponse> DescribeAccessRegionsOutcome;
                typedef std::future<DescribeAccessRegionsOutcome> DescribeAccessRegionsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeAccessRegionsRequest&, DescribeAccessRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessRegionsByDestRegionResponse> DescribeAccessRegionsByDestRegionOutcome;
                typedef std::future<DescribeAccessRegionsByDestRegionOutcome> DescribeAccessRegionsByDestRegionOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeAccessRegionsByDestRegionRequest&, DescribeAccessRegionsByDestRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRegionsByDestRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthSignatureResponse> DescribeAuthSignatureOutcome;
                typedef std::future<DescribeAuthSignatureOutcome> DescribeAuthSignatureOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeAuthSignatureRequest&, DescribeAuthSignatureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthSignatureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlackHeaderResponse> DescribeBlackHeaderOutcome;
                typedef std::future<DescribeBlackHeaderOutcome> DescribeBlackHeaderOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeBlackHeaderRequest&, DescribeBlackHeaderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlackHeaderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateDetailResponse> DescribeCertificateDetailOutcome;
                typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCertificateDetailRequest&, DescribeCertificateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificatesResponse> DescribeCertificatesOutcome;
                typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCertificatesRequest&, DescribeCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCountryAreaMappingResponse> DescribeCountryAreaMappingOutcome;
                typedef std::future<DescribeCountryAreaMappingOutcome> DescribeCountryAreaMappingOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCountryAreaMappingRequest&, DescribeCountryAreaMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCountryAreaMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderProxiesResponse> DescribeCrossBorderProxiesOutcome;
                typedef std::future<DescribeCrossBorderProxiesOutcome> DescribeCrossBorderProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCrossBorderProxiesRequest&, DescribeCrossBorderProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomHeaderResponse> DescribeCustomHeaderOutcome;
                typedef std::future<DescribeCustomHeaderOutcome> DescribeCustomHeaderOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCustomHeaderRequest&, DescribeCustomHeaderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomHeaderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDestRegionsResponse> DescribeDestRegionsOutcome;
                typedef std::future<DescribeDestRegionsOutcome> DescribeDestRegionsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeDestRegionsRequest&, DescribeDestRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDestRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainErrorPageInfoResponse> DescribeDomainErrorPageInfoOutcome;
                typedef std::future<DescribeDomainErrorPageInfoOutcome> DescribeDomainErrorPageInfoOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeDomainErrorPageInfoRequest&, DescribeDomainErrorPageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainErrorPageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainErrorPageInfoByIdsResponse> DescribeDomainErrorPageInfoByIdsOutcome;
                typedef std::future<DescribeDomainErrorPageInfoByIdsOutcome> DescribeDomainErrorPageInfoByIdsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeDomainErrorPageInfoByIdsRequest&, DescribeDomainErrorPageInfoByIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainErrorPageInfoByIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalDomainDnsResponse> DescribeGlobalDomainDnsOutcome;
                typedef std::future<DescribeGlobalDomainDnsOutcome> DescribeGlobalDomainDnsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeGlobalDomainDnsRequest&, DescribeGlobalDomainDnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDomainDnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalDomainsResponse> DescribeGlobalDomainsOutcome;
                typedef std::future<DescribeGlobalDomainsOutcome> DescribeGlobalDomainsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeGlobalDomainsRequest&, DescribeGlobalDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupAndStatisticsProxyResponse> DescribeGroupAndStatisticsProxyOutcome;
                typedef std::future<DescribeGroupAndStatisticsProxyOutcome> DescribeGroupAndStatisticsProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeGroupAndStatisticsProxyRequest&, DescribeGroupAndStatisticsProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAndStatisticsProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupDomainConfigResponse> DescribeGroupDomainConfigOutcome;
                typedef std::future<DescribeGroupDomainConfigOutcome> DescribeGroupDomainConfigOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeGroupDomainConfigRequest&, DescribeGroupDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHTTPListenersResponse> DescribeHTTPListenersOutcome;
                typedef std::future<DescribeHTTPListenersOutcome> DescribeHTTPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeHTTPListenersRequest&, DescribeHTTPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHTTPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHTTPSListenersResponse> DescribeHTTPSListenersOutcome;
                typedef std::future<DescribeHTTPSListenersOutcome> DescribeHTTPSListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeHTTPSListenersRequest&, DescribeHTTPSListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHTTPSListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerRealServersResponse> DescribeListenerRealServersOutcome;
                typedef std::future<DescribeListenerRealServersOutcome> DescribeListenerRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeListenerRealServersRequest&, DescribeListenerRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerStatisticsResponse> DescribeListenerStatisticsOutcome;
                typedef std::future<DescribeListenerStatisticsOutcome> DescribeListenerStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeListenerStatisticsRequest&, DescribeListenerStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxiesResponse> DescribeProxiesOutcome;
                typedef std::future<DescribeProxiesOutcome> DescribeProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxiesRequest&, DescribeProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxiesStatusResponse> DescribeProxiesStatusOutcome;
                typedef std::future<DescribeProxiesStatusOutcome> DescribeProxiesStatusOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxiesStatusRequest&, DescribeProxiesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxiesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyAndStatisticsListenersResponse> DescribeProxyAndStatisticsListenersOutcome;
                typedef std::future<DescribeProxyAndStatisticsListenersOutcome> DescribeProxyAndStatisticsListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyAndStatisticsListenersRequest&, DescribeProxyAndStatisticsListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyAndStatisticsListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyDetailResponse> DescribeProxyDetailOutcome;
                typedef std::future<DescribeProxyDetailOutcome> DescribeProxyDetailOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyDetailRequest&, DescribeProxyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyGroupDetailsResponse> DescribeProxyGroupDetailsOutcome;
                typedef std::future<DescribeProxyGroupDetailsOutcome> DescribeProxyGroupDetailsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyGroupDetailsRequest&, DescribeProxyGroupDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyGroupDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyGroupListResponse> DescribeProxyGroupListOutcome;
                typedef std::future<DescribeProxyGroupListOutcome> DescribeProxyGroupListOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyGroupListRequest&, DescribeProxyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyGroupStatisticsResponse> DescribeProxyGroupStatisticsOutcome;
                typedef std::future<DescribeProxyGroupStatisticsOutcome> DescribeProxyGroupStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyGroupStatisticsRequest&, DescribeProxyGroupStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyGroupStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyStatisticsResponse> DescribeProxyStatisticsOutcome;
                typedef std::future<DescribeProxyStatisticsOutcome> DescribeProxyStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyStatisticsRequest&, DescribeProxyStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealServerStatisticsResponse> DescribeRealServerStatisticsOutcome;
                typedef std::future<DescribeRealServerStatisticsOutcome> DescribeRealServerStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRealServerStatisticsRequest&, DescribeRealServerStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealServerStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealServersResponse> DescribeRealServersOutcome;
                typedef std::future<DescribeRealServersOutcome> DescribeRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRealServersRequest&, DescribeRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealServersStatusResponse> DescribeRealServersStatusOutcome;
                typedef std::future<DescribeRealServersStatusOutcome> DescribeRealServersStatusOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRealServersStatusRequest&, DescribeRealServersStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealServersStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionAndPriceResponse> DescribeRegionAndPriceOutcome;
                typedef std::future<DescribeRegionAndPriceOutcome> DescribeRegionAndPriceOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRegionAndPriceRequest&, DescribeRegionAndPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionAndPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByTagResponse> DescribeResourcesByTagOutcome;
                typedef std::future<DescribeResourcesByTagOutcome> DescribeResourcesByTagOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeResourcesByTagRequest&, DescribeResourcesByTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleRealServersResponse> DescribeRuleRealServersOutcome;
                typedef std::future<DescribeRuleRealServersOutcome> DescribeRuleRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRuleRealServersRequest&, DescribeRuleRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesByRuleIdsResponse> DescribeRulesByRuleIdsOutcome;
                typedef std::future<DescribeRulesByRuleIdsOutcome> DescribeRulesByRuleIdsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRulesByRuleIdsRequest&, DescribeRulesByRuleIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesByRuleIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyDetailResponse> DescribeSecurityPolicyDetailOutcome;
                typedef std::future<DescribeSecurityPolicyDetailOutcome> DescribeSecurityPolicyDetailOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeSecurityPolicyDetailRequest&, DescribeSecurityPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityRulesResponse> DescribeSecurityRulesOutcome;
                typedef std::future<DescribeSecurityRulesOutcome> DescribeSecurityRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeSecurityRulesRequest&, DescribeSecurityRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTCPListenersResponse> DescribeTCPListenersOutcome;
                typedef std::future<DescribeTCPListenersOutcome> DescribeTCPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeTCPListenersRequest&, DescribeTCPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTCPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUDPListenersResponse> DescribeUDPListenersOutcome;
                typedef std::future<DescribeUDPListenersOutcome> DescribeUDPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeUDPListenersRequest&, DescribeUDPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUDPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyProxiesResponse> DestroyProxiesOutcome;
                typedef std::future<DestroyProxiesOutcome> DestroyProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DestroyProxiesRequest&, DestroyProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableGlobalDomainResponse> DisableGlobalDomainOutcome;
                typedef std::future<DisableGlobalDomainOutcome> DisableGlobalDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DisableGlobalDomainRequest&, DisableGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGlobalDomainResponse> EnableGlobalDomainOutcome;
                typedef std::future<EnableGlobalDomainOutcome> EnableGlobalDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::EnableGlobalDomainRequest&, EnableGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateProxyResponse> InquiryPriceCreateProxyOutcome;
                typedef std::future<InquiryPriceCreateProxyOutcome> InquiryPriceCreateProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::InquiryPriceCreateProxyRequest&, InquiryPriceCreateProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateResponse> ModifyCertificateOutcome;
                typedef std::future<ModifyCertificateOutcome> ModifyCertificateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyCertificateRequest&, ModifyCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateAttributesResponse> ModifyCertificateAttributesOutcome;
                typedef std::future<ModifyCertificateAttributesOutcome> ModifyCertificateAttributesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyCertificateAttributesRequest&, ModifyCertificateAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalDomainAttributeResponse> ModifyGlobalDomainAttributeOutcome;
                typedef std::future<ModifyGlobalDomainAttributeOutcome> ModifyGlobalDomainAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyGlobalDomainAttributeRequest&, ModifyGlobalDomainAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalDomainAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalDomainDnsResponse> ModifyGlobalDomainDnsOutcome;
                typedef std::future<ModifyGlobalDomainDnsOutcome> ModifyGlobalDomainDnsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyGlobalDomainDnsRequest&, ModifyGlobalDomainDnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalDomainDnsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupDomainConfigResponse> ModifyGroupDomainConfigOutcome;
                typedef std::future<ModifyGroupDomainConfigOutcome> ModifyGroupDomainConfigOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyGroupDomainConfigRequest&, ModifyGroupDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHTTPListenerAttributeResponse> ModifyHTTPListenerAttributeOutcome;
                typedef std::future<ModifyHTTPListenerAttributeOutcome> ModifyHTTPListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyHTTPListenerAttributeRequest&, ModifyHTTPListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHTTPListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHTTPSListenerAttributeResponse> ModifyHTTPSListenerAttributeOutcome;
                typedef std::future<ModifyHTTPSListenerAttributeOutcome> ModifyHTTPSListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyHTTPSListenerAttributeRequest&, ModifyHTTPSListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHTTPSListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxiesAttributeResponse> ModifyProxiesAttributeOutcome;
                typedef std::future<ModifyProxiesAttributeOutcome> ModifyProxiesAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxiesAttributeRequest&, ModifyProxiesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxiesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxiesProjectResponse> ModifyProxiesProjectOutcome;
                typedef std::future<ModifyProxiesProjectOutcome> ModifyProxiesProjectOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxiesProjectRequest&, ModifyProxiesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxiesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxyConfigurationResponse> ModifyProxyConfigurationOutcome;
                typedef std::future<ModifyProxyConfigurationOutcome> ModifyProxyConfigurationOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxyConfigurationRequest&, ModifyProxyConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxyConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxyGroupAttributeResponse> ModifyProxyGroupAttributeOutcome;
                typedef std::future<ModifyProxyGroupAttributeOutcome> ModifyProxyGroupAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxyGroupAttributeRequest&, ModifyProxyGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxyGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRealServerNameResponse> ModifyRealServerNameOutcome;
                typedef std::future<ModifyRealServerNameOutcome> ModifyRealServerNameOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyRealServerNameRequest&, ModifyRealServerNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealServerNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleAttributeResponse> ModifyRuleAttributeOutcome;
                typedef std::future<ModifyRuleAttributeOutcome> ModifyRuleAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyRuleAttributeRequest&, ModifyRuleAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityRuleResponse> ModifySecurityRuleOutcome;
                typedef std::future<ModifySecurityRuleOutcome> ModifySecurityRuleOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifySecurityRuleRequest&, ModifySecurityRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTCPListenerAttributeResponse> ModifyTCPListenerAttributeOutcome;
                typedef std::future<ModifyTCPListenerAttributeOutcome> ModifyTCPListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyTCPListenerAttributeRequest&, ModifyTCPListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTCPListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUDPListenerAttributeResponse> ModifyUDPListenerAttributeOutcome;
                typedef std::future<ModifyUDPListenerAttributeOutcome> ModifyUDPListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyUDPListenerAttributeRequest&, ModifyUDPListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUDPListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenProxiesResponse> OpenProxiesOutcome;
                typedef std::future<OpenProxiesOutcome> OpenProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::OpenProxiesRequest&, OpenProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenProxyGroupResponse> OpenProxyGroupOutcome;
                typedef std::future<OpenProxyGroupOutcome> OpenProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::OpenProxyGroupRequest&, OpenProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenSecurityPolicyResponse> OpenSecurityPolicyOutcome;
                typedef std::future<OpenSecurityPolicyOutcome> OpenSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::OpenSecurityPolicyRequest&, OpenSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveRealServersResponse> RemoveRealServersOutcome;
                typedef std::future<RemoveRealServersOutcome> RemoveRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::RemoveRealServersRequest&, RemoveRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAuthenticationResponse> SetAuthenticationOutcome;
                typedef std::future<SetAuthenticationOutcome> SetAuthenticationOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::SetAuthenticationRequest&, SetAuthenticationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAuthenticationAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTlsVersionResponse> SetTlsVersionOutcome;
                typedef std::future<SetTlsVersionOutcome> SetTlsVersionOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::SetTlsVersionRequest&, SetTlsVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTlsVersionAsyncHandler;



                /**
                 *添加源站(服务器)信息，支持IP或域名
                 * @param req AddRealServersRequest
                 * @return AddRealServersOutcome
                 */
                AddRealServersOutcome AddRealServers(const Model::AddRealServersRequest &request);
                void AddRealServersAsync(const Model::AddRealServersRequest& request, const AddRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRealServersOutcomeCallable AddRealServersCallable(const Model::AddRealServersRequest& request);

                /**
                 *本接口（BanAndRecoverProxy）用于联通封禁解封GAAP跨境通道实例，支持按照客户UIN维度下发请求。被封禁的实例带宽上限将会被限制到0Mbps，无法正常处理客户端和源站之间的请求。
                 * @param req BanAndRecoverProxyRequest
                 * @return BanAndRecoverProxyOutcome
                 */
                BanAndRecoverProxyOutcome BanAndRecoverProxy(const Model::BanAndRecoverProxyRequest &request);
                void BanAndRecoverProxyAsync(const Model::BanAndRecoverProxyRequest& request, const BanAndRecoverProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BanAndRecoverProxyOutcomeCallable BanAndRecoverProxyCallable(const Model::BanAndRecoverProxyRequest& request);

                /**
                 *本接口（BindListenerRealServers）用于TCP/UDP监听器绑定解绑源站。
注意：本接口会解绑之前绑定的源站，绑定本次调用所选择的源站。例如：原来绑定的源站为A，B，C，本次调用的选择绑定的源站为C，D，E，那么调用后所绑定的源站为C，D，E。
                 * @param req BindListenerRealServersRequest
                 * @return BindListenerRealServersOutcome
                 */
                BindListenerRealServersOutcome BindListenerRealServers(const Model::BindListenerRealServersRequest &request);
                void BindListenerRealServersAsync(const Model::BindListenerRealServersRequest& request, const BindListenerRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindListenerRealServersOutcomeCallable BindListenerRealServersCallable(const Model::BindListenerRealServersRequest& request);

                /**
                 *该接口用于7层监听器的转发规则绑定源站。注意：本接口会解绑之前绑定的源站，绑定本次调用所选择的源站。
                 * @param req BindRuleRealServersRequest
                 * @return BindRuleRealServersOutcome
                 */
                BindRuleRealServersOutcome BindRuleRealServers(const Model::BindRuleRealServersRequest &request);
                void BindRuleRealServersAsync(const Model::BindRuleRealServersRequest& request, const BindRuleRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRuleRealServersOutcomeCallable BindRuleRealServersCallable(const Model::BindRuleRealServersRequest& request);

                /**
                 *本接口(CheckProxyCreate)用于查询能否创建指定配置的加速通道。
                 * @param req CheckProxyCreateRequest
                 * @return CheckProxyCreateOutcome
                 */
                CheckProxyCreateOutcome CheckProxyCreate(const Model::CheckProxyCreateRequest &request);
                void CheckProxyCreateAsync(const Model::CheckProxyCreateRequest& request, const CheckProxyCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckProxyCreateOutcomeCallable CheckProxyCreateCallable(const Model::CheckProxyCreateRequest& request);

                /**
                 *本接口（CloseProxies）用于关闭通道。通道关闭后，不再产生流量，但每天仍然收取通道基础配置费用。
                 * @param req CloseProxiesRequest
                 * @return CloseProxiesOutcome
                 */
                CloseProxiesOutcome CloseProxies(const Model::CloseProxiesRequest &request);
                void CloseProxiesAsync(const Model::CloseProxiesRequest& request, const CloseProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseProxiesOutcomeCallable CloseProxiesCallable(const Model::CloseProxiesRequest& request);

                /**
                 *本接口（CloseProxyGroup）用于关闭通道组。通道组关闭后，不再产生流量，但每天仍然收取通道基础配置费用。
                 * @param req CloseProxyGroupRequest
                 * @return CloseProxyGroupOutcome
                 */
                CloseProxyGroupOutcome CloseProxyGroup(const Model::CloseProxyGroupRequest &request);
                void CloseProxyGroupAsync(const Model::CloseProxyGroupRequest& request, const CloseProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseProxyGroupOutcomeCallable CloseProxyGroupCallable(const Model::CloseProxyGroupRequest& request);

                /**
                 *关闭安全策略
                 * @param req CloseSecurityPolicyRequest
                 * @return CloseSecurityPolicyOutcome
                 */
                CloseSecurityPolicyOutcome CloseSecurityPolicy(const Model::CloseSecurityPolicyRequest &request);
                void CloseSecurityPolicyAsync(const Model::CloseSecurityPolicyRequest& request, const CloseSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseSecurityPolicyOutcomeCallable CloseSecurityPolicyCallable(const Model::CloseSecurityPolicyRequest& request);

                /**
                 *本接口（CreateCertificate）用于创建Gaap相关证书和配置文件，包括基础认证配置文件，客户端CA证书，服务器SSL证书，Gaap SSL证书以及源站CA证书。
                 * @param req CreateCertificateRequest
                 * @return CreateCertificateOutcome
                 */
                CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest &request);
                void CreateCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateOutcomeCallable CreateCertificateCallable(const Model::CreateCertificateRequest& request);

                /**
                 *本接口（CreateCustomHeader）用于创建HTTP/HTTPS监听器的自定义header，客户端请求通过访问该监听器时，会将监听器中配置的header信息发送到源站。
                 * @param req CreateCustomHeaderRequest
                 * @return CreateCustomHeaderOutcome
                 */
                CreateCustomHeaderOutcome CreateCustomHeader(const Model::CreateCustomHeaderRequest &request);
                void CreateCustomHeaderAsync(const Model::CreateCustomHeaderRequest& request, const CreateCustomHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomHeaderOutcomeCallable CreateCustomHeaderCallable(const Model::CreateCustomHeaderRequest& request);

                /**
                 *本接口（CreateDomain）用于创建HTTP/HTTPS监听器的访问域名，客户端请求通过访问该域名来请求后端业务。
该接口仅支持version3.0的通道。
                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *定制域名指定错误码的错误响应
                 * @param req CreateDomainErrorPageInfoRequest
                 * @return CreateDomainErrorPageInfoOutcome
                 */
                CreateDomainErrorPageInfoOutcome CreateDomainErrorPageInfo(const Model::CreateDomainErrorPageInfoRequest &request);
                void CreateDomainErrorPageInfoAsync(const Model::CreateDomainErrorPageInfoRequest& request, const CreateDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainErrorPageInfoOutcomeCallable CreateDomainErrorPageInfoCallable(const Model::CreateDomainErrorPageInfoRequest& request);

                /**
                 *用来创建统一域名
                 * @param req CreateGlobalDomainRequest
                 * @return CreateGlobalDomainOutcome
                 */
                CreateGlobalDomainOutcome CreateGlobalDomain(const Model::CreateGlobalDomainRequest &request);
                void CreateGlobalDomainAsync(const Model::CreateGlobalDomainRequest& request, const CreateGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalDomainOutcomeCallable CreateGlobalDomainCallable(const Model::CreateGlobalDomainRequest& request);

                /**
                 *创建域名解析记录
                 * @param req CreateGlobalDomainDnsRequest
                 * @return CreateGlobalDomainDnsOutcome
                 */
                CreateGlobalDomainDnsOutcome CreateGlobalDomainDns(const Model::CreateGlobalDomainDnsRequest &request);
                void CreateGlobalDomainDnsAsync(const Model::CreateGlobalDomainDnsRequest& request, const CreateGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalDomainDnsOutcomeCallable CreateGlobalDomainDnsCallable(const Model::CreateGlobalDomainDnsRequest& request);

                /**
                 *该接口（CreateHTTPListener）用于在通道实例下创建HTTP协议类型的监听器。
                 * @param req CreateHTTPListenerRequest
                 * @return CreateHTTPListenerOutcome
                 */
                CreateHTTPListenerOutcome CreateHTTPListener(const Model::CreateHTTPListenerRequest &request);
                void CreateHTTPListenerAsync(const Model::CreateHTTPListenerRequest& request, const CreateHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHTTPListenerOutcomeCallable CreateHTTPListenerCallable(const Model::CreateHTTPListenerRequest& request);

                /**
                 *该接口（CreateHTTPSListener）用于在通道实例下创建HTTPS协议类型的监听器。
                 * @param req CreateHTTPSListenerRequest
                 * @return CreateHTTPSListenerOutcome
                 */
                CreateHTTPSListenerOutcome CreateHTTPSListener(const Model::CreateHTTPSListenerRequest &request);
                void CreateHTTPSListenerAsync(const Model::CreateHTTPSListenerRequest& request, const CreateHTTPSListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHTTPSListenerOutcomeCallable CreateHTTPSListenerCallable(const Model::CreateHTTPSListenerRequest& request);

                /**
                 *本接口（CreateProxy）用于创建/复制一个指定配置的加速通道。当复制通道时，需要设置新通道的基本配置参数，并设置ClonedProxyId来指定被复制的通道。
                 * @param req CreateProxyRequest
                 * @return CreateProxyOutcome
                 */
                CreateProxyOutcome CreateProxy(const Model::CreateProxyRequest &request);
                void CreateProxyAsync(const Model::CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxyOutcomeCallable CreateProxyCallable(const Model::CreateProxyRequest& request);

                /**
                 *本接口（CreateProxyGroup）用于创建通道组。
                 * @param req CreateProxyGroupRequest
                 * @return CreateProxyGroupOutcome
                 */
                CreateProxyGroupOutcome CreateProxyGroup(const Model::CreateProxyGroupRequest &request);
                void CreateProxyGroupAsync(const Model::CreateProxyGroupRequest& request, const CreateProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxyGroupOutcomeCallable CreateProxyGroupCallable(const Model::CreateProxyGroupRequest& request);

                /**
                 *本接口（CreateProxyGroupDomain）用于创建通道组域名，并开启域名解析。
                 * @param req CreateProxyGroupDomainRequest
                 * @return CreateProxyGroupDomainOutcome
                 */
                CreateProxyGroupDomainOutcome CreateProxyGroupDomain(const Model::CreateProxyGroupDomainRequest &request);
                void CreateProxyGroupDomainAsync(const Model::CreateProxyGroupDomainRequest& request, const CreateProxyGroupDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxyGroupDomainOutcomeCallable CreateProxyGroupDomainCallable(const Model::CreateProxyGroupDomainRequest& request);

                /**
                 *该接口（CreateRule）用于创建HTTP/HTTPS监听器转发规则。
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建安全策略
                 * @param req CreateSecurityPolicyRequest
                 * @return CreateSecurityPolicyOutcome
                 */
                CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest &request);
                void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request);

                /**
                 *添加安全策略规则
                 * @param req CreateSecurityRulesRequest
                 * @return CreateSecurityRulesOutcome
                 */
                CreateSecurityRulesOutcome CreateSecurityRules(const Model::CreateSecurityRulesRequest &request);
                void CreateSecurityRulesAsync(const Model::CreateSecurityRulesRequest& request, const CreateSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityRulesOutcomeCallable CreateSecurityRulesCallable(const Model::CreateSecurityRulesRequest& request);

                /**
                 *该接口（CreateTCPListeners）用于批量创建单通道或者通道组的TCP协议类型的监听器。
                 * @param req CreateTCPListenersRequest
                 * @return CreateTCPListenersOutcome
                 */
                CreateTCPListenersOutcome CreateTCPListeners(const Model::CreateTCPListenersRequest &request);
                void CreateTCPListenersAsync(const Model::CreateTCPListenersRequest& request, const CreateTCPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTCPListenersOutcomeCallable CreateTCPListenersCallable(const Model::CreateTCPListenersRequest& request);

                /**
                 *该接口（CreateUDPListeners）用于批量创建单通道或者通道组的UDP协议类型的监听器。
                 * @param req CreateUDPListenersRequest
                 * @return CreateUDPListenersOutcome
                 */
                CreateUDPListenersOutcome CreateUDPListeners(const Model::CreateUDPListenersRequest &request);
                void CreateUDPListenersAsync(const Model::CreateUDPListenersRequest& request, const CreateUDPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUDPListenersOutcomeCallable CreateUDPListenersCallable(const Model::CreateUDPListenersRequest& request);

                /**
                 *本接口（DeleteCertificate）用于删除证书。
                 * @param req DeleteCertificateRequest
                 * @return DeleteCertificateOutcome
                 */
                DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest &request);
                void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request);

                /**
                 *本接口（DeleteDomain）仅适用于7层监听器，用于删除该监听器下对应域名及域名下的所有规则，所有已绑定源站的规则将自动解绑。
                 * @param req DeleteDomainRequest
                 * @return DeleteDomainOutcome
                 */
                DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest &request);
                void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request);

                /**
                 *删除域名的定制错误
                 * @param req DeleteDomainErrorPageInfoRequest
                 * @return DeleteDomainErrorPageInfoOutcome
                 */
                DeleteDomainErrorPageInfoOutcome DeleteDomainErrorPageInfo(const Model::DeleteDomainErrorPageInfoRequest &request);
                void DeleteDomainErrorPageInfoAsync(const Model::DeleteDomainErrorPageInfoRequest& request, const DeleteDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainErrorPageInfoOutcomeCallable DeleteDomainErrorPageInfoCallable(const Model::DeleteDomainErrorPageInfoRequest& request);

                /**
                 *删除统一域名
                 * @param req DeleteGlobalDomainRequest
                 * @return DeleteGlobalDomainOutcome
                 */
                DeleteGlobalDomainOutcome DeleteGlobalDomain(const Model::DeleteGlobalDomainRequest &request);
                void DeleteGlobalDomainAsync(const Model::DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalDomainOutcomeCallable DeleteGlobalDomainCallable(const Model::DeleteGlobalDomainRequest& request);

                /**
                 *删除域名的某条解析记录
                 * @param req DeleteGlobalDomainDnsRequest
                 * @return DeleteGlobalDomainDnsOutcome
                 */
                DeleteGlobalDomainDnsOutcome DeleteGlobalDomainDns(const Model::DeleteGlobalDomainDnsRequest &request);
                void DeleteGlobalDomainDnsAsync(const Model::DeleteGlobalDomainDnsRequest& request, const DeleteGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalDomainDnsOutcomeCallable DeleteGlobalDomainDnsCallable(const Model::DeleteGlobalDomainDnsRequest& request);

                /**
                 *该接口（DeleteListeners）用于批量删除通道或通道组的监听器，包括4/7层监听器。
                 * @param req DeleteListenersRequest
                 * @return DeleteListenersOutcome
                 */
                DeleteListenersOutcome DeleteListeners(const Model::DeleteListenersRequest &request);
                void DeleteListenersAsync(const Model::DeleteListenersRequest& request, const DeleteListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenersOutcomeCallable DeleteListenersCallable(const Model::DeleteListenersRequest& request);

                /**
                 *本接口（DeleteProxyGroup）用于删除通道组。
                 * @param req DeleteProxyGroupRequest
                 * @return DeleteProxyGroupOutcome
                 */
                DeleteProxyGroupOutcome DeleteProxyGroup(const Model::DeleteProxyGroupRequest &request);
                void DeleteProxyGroupAsync(const Model::DeleteProxyGroupRequest& request, const DeleteProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProxyGroupOutcomeCallable DeleteProxyGroupCallable(const Model::DeleteProxyGroupRequest& request);

                /**
                 *该接口（DeleteRule）用于删除HTTP/HTTPS监听器的转发规则。
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除安全策略
                 * @param req DeleteSecurityPolicyRequest
                 * @return DeleteSecurityPolicyOutcome
                 */
                DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request);
                void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request);

                /**
                 *删除安全策略规则
                 * @param req DeleteSecurityRulesRequest
                 * @return DeleteSecurityRulesOutcome
                 */
                DeleteSecurityRulesOutcome DeleteSecurityRules(const Model::DeleteSecurityRulesRequest &request);
                void DeleteSecurityRulesAsync(const Model::DeleteSecurityRulesRequest& request, const DeleteSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityRulesOutcomeCallable DeleteSecurityRulesCallable(const Model::DeleteSecurityRulesRequest& request);

                /**
                 *本接口（DescribeAccessRegions）用于查询加速区域，即客户端接入区域。
                 * @param req DescribeAccessRegionsRequest
                 * @return DescribeAccessRegionsOutcome
                 */
                DescribeAccessRegionsOutcome DescribeAccessRegions(const Model::DescribeAccessRegionsRequest &request);
                void DescribeAccessRegionsAsync(const Model::DescribeAccessRegionsRequest& request, const DescribeAccessRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessRegionsOutcomeCallable DescribeAccessRegionsCallable(const Model::DescribeAccessRegionsRequest& request);

                /**
                 *本接口（DescribeAccessRegionsByDestRegion）根据源站区域查询可用的加速区域列表。
                 * @param req DescribeAccessRegionsByDestRegionRequest
                 * @return DescribeAccessRegionsByDestRegionOutcome
                 */
                DescribeAccessRegionsByDestRegionOutcome DescribeAccessRegionsByDestRegion(const Model::DescribeAccessRegionsByDestRegionRequest &request);
                void DescribeAccessRegionsByDestRegionAsync(const Model::DescribeAccessRegionsByDestRegionRequest& request, const DescribeAccessRegionsByDestRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessRegionsByDestRegionOutcomeCallable DescribeAccessRegionsByDestRegionCallable(const Model::DescribeAccessRegionsByDestRegionRequest& request);

                /**
                 *为了防止在下单、询价、后付费开通等过程中确保来源合法以及订单参数没有被篡改过，各个业务方使用下单、询价等场景需调用计费签名接口获取签名，获取签名的请求需带上签名以验证身份，本接口可以获取计费签名。
                 * @param req DescribeAuthSignatureRequest
                 * @return DescribeAuthSignatureOutcome
                 */
                DescribeAuthSignatureOutcome DescribeAuthSignature(const Model::DescribeAuthSignatureRequest &request);
                void DescribeAuthSignatureAsync(const Model::DescribeAuthSignatureRequest& request, const DescribeAuthSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthSignatureOutcomeCallable DescribeAuthSignatureCallable(const Model::DescribeAuthSignatureRequest& request);

                /**
                 *本接口（DescribeBlackHeader）用于查询禁用的自定义header 名称
                 * @param req DescribeBlackHeaderRequest
                 * @return DescribeBlackHeaderOutcome
                 */
                DescribeBlackHeaderOutcome DescribeBlackHeader(const Model::DescribeBlackHeaderRequest &request);
                void DescribeBlackHeaderAsync(const Model::DescribeBlackHeaderRequest& request, const DescribeBlackHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlackHeaderOutcomeCallable DescribeBlackHeaderCallable(const Model::DescribeBlackHeaderRequest& request);

                /**
                 *本接口（DescribeCertificateDetail）用于查询证书详情，包括证书ID，证书名字，证书类型，证书内容以及密钥等信息。
                 * @param req DescribeCertificateDetailRequest
                 * @return DescribeCertificateDetailOutcome
                 */
                DescribeCertificateDetailOutcome DescribeCertificateDetail(const Model::DescribeCertificateDetailRequest &request);
                void DescribeCertificateDetailAsync(const Model::DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateDetailOutcomeCallable DescribeCertificateDetailCallable(const Model::DescribeCertificateDetailRequest& request);

                /**
                 *本接口（DescribeCertificates）用来查询可以使用的证书列表。
                 * @param req DescribeCertificatesRequest
                 * @return DescribeCertificatesOutcome
                 */
                DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest &request);
                void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request);

                /**
                 *本接口（DescribeCountryAreaMapping）用于获取国家地区编码映射表。
                 * @param req DescribeCountryAreaMappingRequest
                 * @return DescribeCountryAreaMappingOutcome
                 */
                DescribeCountryAreaMappingOutcome DescribeCountryAreaMapping(const Model::DescribeCountryAreaMappingRequest &request);
                void DescribeCountryAreaMappingAsync(const Model::DescribeCountryAreaMappingRequest& request, const DescribeCountryAreaMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCountryAreaMappingOutcomeCallable DescribeCountryAreaMappingCallable(const Model::DescribeCountryAreaMappingRequest& request);

                /**
                 *本接口（DescribeCrossBorderProxies）用于查询跨境通道实例列表。
                 * @param req DescribeCrossBorderProxiesRequest
                 * @return DescribeCrossBorderProxiesOutcome
                 */
                DescribeCrossBorderProxiesOutcome DescribeCrossBorderProxies(const Model::DescribeCrossBorderProxiesRequest &request);
                void DescribeCrossBorderProxiesAsync(const Model::DescribeCrossBorderProxiesRequest& request, const DescribeCrossBorderProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderProxiesOutcomeCallable DescribeCrossBorderProxiesCallable(const Model::DescribeCrossBorderProxiesRequest& request);

                /**
                 *本接口（DescribeCustomHeader）用于自定义header列表
                 * @param req DescribeCustomHeaderRequest
                 * @return DescribeCustomHeaderOutcome
                 */
                DescribeCustomHeaderOutcome DescribeCustomHeader(const Model::DescribeCustomHeaderRequest &request);
                void DescribeCustomHeaderAsync(const Model::DescribeCustomHeaderRequest& request, const DescribeCustomHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomHeaderOutcomeCallable DescribeCustomHeaderCallable(const Model::DescribeCustomHeaderRequest& request);

                /**
                 *本接口（DescribeDestRegions）用于查询源站区域，即源站服务器所在区域。
                 * @param req DescribeDestRegionsRequest
                 * @return DescribeDestRegionsOutcome
                 */
                DescribeDestRegionsOutcome DescribeDestRegions(const Model::DescribeDestRegionsRequest &request);
                void DescribeDestRegionsAsync(const Model::DescribeDestRegionsRequest& request, const DescribeDestRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDestRegionsOutcomeCallable DescribeDestRegionsCallable(const Model::DescribeDestRegionsRequest& request);

                /**
                 *查询指定域名的错误响应
                 * @param req DescribeDomainErrorPageInfoRequest
                 * @return DescribeDomainErrorPageInfoOutcome
                 */
                DescribeDomainErrorPageInfoOutcome DescribeDomainErrorPageInfo(const Model::DescribeDomainErrorPageInfoRequest &request);
                void DescribeDomainErrorPageInfoAsync(const Model::DescribeDomainErrorPageInfoRequest& request, const DescribeDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainErrorPageInfoOutcomeCallable DescribeDomainErrorPageInfoCallable(const Model::DescribeDomainErrorPageInfoRequest& request);

                /**
                 *根据定制错误ID查询错误响应
                 * @param req DescribeDomainErrorPageInfoByIdsRequest
                 * @return DescribeDomainErrorPageInfoByIdsOutcome
                 */
                DescribeDomainErrorPageInfoByIdsOutcome DescribeDomainErrorPageInfoByIds(const Model::DescribeDomainErrorPageInfoByIdsRequest &request);
                void DescribeDomainErrorPageInfoByIdsAsync(const Model::DescribeDomainErrorPageInfoByIdsRequest& request, const DescribeDomainErrorPageInfoByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainErrorPageInfoByIdsOutcomeCallable DescribeDomainErrorPageInfoByIdsCallable(const Model::DescribeDomainErrorPageInfoByIdsRequest& request);

                /**
                 *查询域名解析列表
                 * @param req DescribeGlobalDomainDnsRequest
                 * @return DescribeGlobalDomainDnsOutcome
                 */
                DescribeGlobalDomainDnsOutcome DescribeGlobalDomainDns(const Model::DescribeGlobalDomainDnsRequest &request);
                void DescribeGlobalDomainDnsAsync(const Model::DescribeGlobalDomainDnsRequest& request, const DescribeGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalDomainDnsOutcomeCallable DescribeGlobalDomainDnsCallable(const Model::DescribeGlobalDomainDnsRequest& request);

                /**
                 *查询域名列表
                 * @param req DescribeGlobalDomainsRequest
                 * @return DescribeGlobalDomainsOutcome
                 */
                DescribeGlobalDomainsOutcome DescribeGlobalDomains(const Model::DescribeGlobalDomainsRequest &request);
                void DescribeGlobalDomainsAsync(const Model::DescribeGlobalDomainsRequest& request, const DescribeGlobalDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalDomainsOutcomeCallable DescribeGlobalDomainsCallable(const Model::DescribeGlobalDomainsRequest& request);

                /**
                 *该接口为内部接口，用于查询可以获取统计数据的通道组和通道信息
                 * @param req DescribeGroupAndStatisticsProxyRequest
                 * @return DescribeGroupAndStatisticsProxyOutcome
                 */
                DescribeGroupAndStatisticsProxyOutcome DescribeGroupAndStatisticsProxy(const Model::DescribeGroupAndStatisticsProxyRequest &request);
                void DescribeGroupAndStatisticsProxyAsync(const Model::DescribeGroupAndStatisticsProxyRequest& request, const DescribeGroupAndStatisticsProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupAndStatisticsProxyOutcomeCallable DescribeGroupAndStatisticsProxyCallable(const Model::DescribeGroupAndStatisticsProxyRequest& request);

                /**
                 *本接口（DescribeGroupDomainConfig）用于获取通道组域名解析配置详情。
                 * @param req DescribeGroupDomainConfigRequest
                 * @return DescribeGroupDomainConfigOutcome
                 */
                DescribeGroupDomainConfigOutcome DescribeGroupDomainConfig(const Model::DescribeGroupDomainConfigRequest &request);
                void DescribeGroupDomainConfigAsync(const Model::DescribeGroupDomainConfigRequest& request, const DescribeGroupDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupDomainConfigOutcomeCallable DescribeGroupDomainConfigCallable(const Model::DescribeGroupDomainConfigRequest& request);

                /**
                 *该接口（DescribeHTTPListeners）用来查询HTTP监听器信息。
                 * @param req DescribeHTTPListenersRequest
                 * @return DescribeHTTPListenersOutcome
                 */
                DescribeHTTPListenersOutcome DescribeHTTPListeners(const Model::DescribeHTTPListenersRequest &request);
                void DescribeHTTPListenersAsync(const Model::DescribeHTTPListenersRequest& request, const DescribeHTTPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHTTPListenersOutcomeCallable DescribeHTTPListenersCallable(const Model::DescribeHTTPListenersRequest& request);

                /**
                 *本接口（DescribeHTTPSListeners）用来查询HTTPS监听器信息。
                 * @param req DescribeHTTPSListenersRequest
                 * @return DescribeHTTPSListenersOutcome
                 */
                DescribeHTTPSListenersOutcome DescribeHTTPSListeners(const Model::DescribeHTTPSListenersRequest &request);
                void DescribeHTTPSListenersAsync(const Model::DescribeHTTPSListenersRequest& request, const DescribeHTTPSListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHTTPSListenersOutcomeCallable DescribeHTTPSListenersCallable(const Model::DescribeHTTPSListenersRequest& request);

                /**
                 *该接口（DescribeListenerRealServers）用于查询TCP/UDP监听器源站列表，包括该监听器已经绑定的源站列表以及可以绑定的源站列表。
                 * @param req DescribeListenerRealServersRequest
                 * @return DescribeListenerRealServersOutcome
                 */
                DescribeListenerRealServersOutcome DescribeListenerRealServers(const Model::DescribeListenerRealServersRequest &request);
                void DescribeListenerRealServersAsync(const Model::DescribeListenerRealServersRequest& request, const DescribeListenerRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerRealServersOutcomeCallable DescribeListenerRealServersCallable(const Model::DescribeListenerRealServersRequest& request);

                /**
                 *该接口用于查询监听器统计数据，包括出入带宽，出入包量，并发数据。支持300秒, 3600秒和86400秒的细粒度，取值为细粒度范围内最大值。
                 * @param req DescribeListenerStatisticsRequest
                 * @return DescribeListenerStatisticsOutcome
                 */
                DescribeListenerStatisticsOutcome DescribeListenerStatistics(const Model::DescribeListenerStatisticsRequest &request);
                void DescribeListenerStatisticsAsync(const Model::DescribeListenerStatisticsRequest& request, const DescribeListenerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerStatisticsOutcomeCallable DescribeListenerStatisticsCallable(const Model::DescribeListenerStatisticsRequest& request);

                /**
                 *本接口（DescribeProxies）用于查询通道实例列表。
                 * @param req DescribeProxiesRequest
                 * @return DescribeProxiesOutcome
                 */
                DescribeProxiesOutcome DescribeProxies(const Model::DescribeProxiesRequest &request);
                void DescribeProxiesAsync(const Model::DescribeProxiesRequest& request, const DescribeProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxiesOutcomeCallable DescribeProxiesCallable(const Model::DescribeProxiesRequest& request);

                /**
                 *本接口（DescribeProxiesStatus）用于查询通道状态列表。
                 * @param req DescribeProxiesStatusRequest
                 * @return DescribeProxiesStatusOutcome
                 */
                DescribeProxiesStatusOutcome DescribeProxiesStatus(const Model::DescribeProxiesStatusRequest &request);
                void DescribeProxiesStatusAsync(const Model::DescribeProxiesStatusRequest& request, const DescribeProxiesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxiesStatusOutcomeCallable DescribeProxiesStatusCallable(const Model::DescribeProxiesStatusRequest& request);

                /**
                 *该接口为内部接口，用于查询可以获取统计数据的通道和监听器信息
                 * @param req DescribeProxyAndStatisticsListenersRequest
                 * @return DescribeProxyAndStatisticsListenersOutcome
                 */
                DescribeProxyAndStatisticsListenersOutcome DescribeProxyAndStatisticsListeners(const Model::DescribeProxyAndStatisticsListenersRequest &request);
                void DescribeProxyAndStatisticsListenersAsync(const Model::DescribeProxyAndStatisticsListenersRequest& request, const DescribeProxyAndStatisticsListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyAndStatisticsListenersOutcomeCallable DescribeProxyAndStatisticsListenersCallable(const Model::DescribeProxyAndStatisticsListenersRequest& request);

                /**
                 *本接口（DescribeProxyDetail）用于查询通道详情。
                 * @param req DescribeProxyDetailRequest
                 * @return DescribeProxyDetailOutcome
                 */
                DescribeProxyDetailOutcome DescribeProxyDetail(const Model::DescribeProxyDetailRequest &request);
                void DescribeProxyDetailAsync(const Model::DescribeProxyDetailRequest& request, const DescribeProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyDetailOutcomeCallable DescribeProxyDetailCallable(const Model::DescribeProxyDetailRequest& request);

                /**
                 *本接口（DescribeProxyGroupDetails）用于查询通道组详情。
                 * @param req DescribeProxyGroupDetailsRequest
                 * @return DescribeProxyGroupDetailsOutcome
                 */
                DescribeProxyGroupDetailsOutcome DescribeProxyGroupDetails(const Model::DescribeProxyGroupDetailsRequest &request);
                void DescribeProxyGroupDetailsAsync(const Model::DescribeProxyGroupDetailsRequest& request, const DescribeProxyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyGroupDetailsOutcomeCallable DescribeProxyGroupDetailsCallable(const Model::DescribeProxyGroupDetailsRequest& request);

                /**
                 *本接口（DescribeProxyGroupList）用于拉取通道组列表及各通道组基本信息。
                 * @param req DescribeProxyGroupListRequest
                 * @return DescribeProxyGroupListOutcome
                 */
                DescribeProxyGroupListOutcome DescribeProxyGroupList(const Model::DescribeProxyGroupListRequest &request);
                void DescribeProxyGroupListAsync(const Model::DescribeProxyGroupListRequest& request, const DescribeProxyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyGroupListOutcomeCallable DescribeProxyGroupListCallable(const Model::DescribeProxyGroupListRequest& request);

                /**
                 *该接口用于查询监听器统计数据，包括出入带宽，出入包量，并发数据。支持300, 3600和86400的细粒度，取值为细粒度范围内最大值。
                 * @param req DescribeProxyGroupStatisticsRequest
                 * @return DescribeProxyGroupStatisticsOutcome
                 */
                DescribeProxyGroupStatisticsOutcome DescribeProxyGroupStatistics(const Model::DescribeProxyGroupStatisticsRequest &request);
                void DescribeProxyGroupStatisticsAsync(const Model::DescribeProxyGroupStatisticsRequest& request, const DescribeProxyGroupStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyGroupStatisticsOutcomeCallable DescribeProxyGroupStatisticsCallable(const Model::DescribeProxyGroupStatisticsRequest& request);

                /**
                 *该接口用于查询监听器统计数据，包括出入带宽，出入包量，并发，丢包和时延数据。支持300, 3600和86400的细粒度，取值为细粒度范围内最大值。
                 * @param req DescribeProxyStatisticsRequest
                 * @return DescribeProxyStatisticsOutcome
                 */
                DescribeProxyStatisticsOutcome DescribeProxyStatistics(const Model::DescribeProxyStatisticsRequest &request);
                void DescribeProxyStatisticsAsync(const Model::DescribeProxyStatisticsRequest& request, const DescribeProxyStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyStatisticsOutcomeCallable DescribeProxyStatisticsCallable(const Model::DescribeProxyStatisticsRequest& request);

                /**
                 *该接口（DescribeRealServerStatistics）用于查询源站健康检查结果的统计数据。源站状态展示位为1：正常或者0：异常。查询的源站需要在监听器或者规则上进行了绑定，查询时需指定绑定的监听器或者规则ID。该接口支持1分钟细粒度的源站状态统计数据展示。
                 * @param req DescribeRealServerStatisticsRequest
                 * @return DescribeRealServerStatisticsOutcome
                 */
                DescribeRealServerStatisticsOutcome DescribeRealServerStatistics(const Model::DescribeRealServerStatisticsRequest &request);
                void DescribeRealServerStatisticsAsync(const Model::DescribeRealServerStatisticsRequest& request, const DescribeRealServerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealServerStatisticsOutcomeCallable DescribeRealServerStatisticsCallable(const Model::DescribeRealServerStatisticsRequest& request);

                /**
                 *本接口（DescribeRealServers）用于查询源站信息，可以根据项目名查询所有的源站信息，此外支持指定IP或者域名的源站模糊查询。
                 * @param req DescribeRealServersRequest
                 * @return DescribeRealServersOutcome
                 */
                DescribeRealServersOutcome DescribeRealServers(const Model::DescribeRealServersRequest &request);
                void DescribeRealServersAsync(const Model::DescribeRealServersRequest& request, const DescribeRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealServersOutcomeCallable DescribeRealServersCallable(const Model::DescribeRealServersRequest& request);

                /**
                 *本接口（DescribeRealServersStatus）用于查询源站是否已被规则或者监听器绑定
                 * @param req DescribeRealServersStatusRequest
                 * @return DescribeRealServersStatusOutcome
                 */
                DescribeRealServersStatusOutcome DescribeRealServersStatus(const Model::DescribeRealServersStatusRequest &request);
                void DescribeRealServersStatusAsync(const Model::DescribeRealServersStatusRequest& request, const DescribeRealServersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealServersStatusOutcomeCallable DescribeRealServersStatusCallable(const Model::DescribeRealServersStatusRequest& request);

                /**
                 *该接口（DescribeRegionAndPrice）用于获取源站区域和带宽梯度价格
                 * @param req DescribeRegionAndPriceRequest
                 * @return DescribeRegionAndPriceOutcome
                 */
                DescribeRegionAndPriceOutcome DescribeRegionAndPrice(const Model::DescribeRegionAndPriceRequest &request);
                void DescribeRegionAndPriceAsync(const Model::DescribeRegionAndPriceRequest& request, const DescribeRegionAndPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionAndPriceOutcomeCallable DescribeRegionAndPriceCallable(const Model::DescribeRegionAndPriceRequest& request);

                /**
                 *本接口（DescribeResourcesByTag）用于根据标签来查询对应的资源信息，包括通道，通道组和源站。
                 * @param req DescribeResourcesByTagRequest
                 * @return DescribeResourcesByTagOutcome
                 */
                DescribeResourcesByTagOutcome DescribeResourcesByTag(const Model::DescribeResourcesByTagRequest &request);
                void DescribeResourcesByTagAsync(const Model::DescribeResourcesByTagRequest& request, const DescribeResourcesByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByTagOutcomeCallable DescribeResourcesByTagCallable(const Model::DescribeResourcesByTagRequest& request);

                /**
                 *本接口（DescribeRuleRealServers）用于查询转发规则相关的源站信息， 包括该规则可绑定的源站信息和已绑定的源站信息。
                 * @param req DescribeRuleRealServersRequest
                 * @return DescribeRuleRealServersOutcome
                 */
                DescribeRuleRealServersOutcome DescribeRuleRealServers(const Model::DescribeRuleRealServersRequest &request);
                void DescribeRuleRealServersAsync(const Model::DescribeRuleRealServersRequest& request, const DescribeRuleRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleRealServersOutcomeCallable DescribeRuleRealServersCallable(const Model::DescribeRuleRealServersRequest& request);

                /**
                 *本接口（DescribeRules）用于查询监听器下的所有规则信息，包括规则域名，路径以及该规则下所绑定的源站列表。当通道版本为3.0时，该接口会返回该域名对应的高级认证配置信息。
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *本接口（DescribeRulesByRuleIds）用于根据规则ID拉取规则信息列表。支持一个或者多个规则信息的拉取。一次最多支持10个规则信息的拉取。
                 * @param req DescribeRulesByRuleIdsRequest
                 * @return DescribeRulesByRuleIdsOutcome
                 */
                DescribeRulesByRuleIdsOutcome DescribeRulesByRuleIds(const Model::DescribeRulesByRuleIdsRequest &request);
                void DescribeRulesByRuleIdsAsync(const Model::DescribeRulesByRuleIdsRequest& request, const DescribeRulesByRuleIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesByRuleIdsOutcomeCallable DescribeRulesByRuleIdsCallable(const Model::DescribeRulesByRuleIdsRequest& request);

                /**
                 *获取安全策略详情
                 * @param req DescribeSecurityPolicyDetailRequest
                 * @return DescribeSecurityPolicyDetailOutcome
                 */
                DescribeSecurityPolicyDetailOutcome DescribeSecurityPolicyDetail(const Model::DescribeSecurityPolicyDetailRequest &request);
                void DescribeSecurityPolicyDetailAsync(const Model::DescribeSecurityPolicyDetailRequest& request, const DescribeSecurityPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyDetailOutcomeCallable DescribeSecurityPolicyDetailCallable(const Model::DescribeSecurityPolicyDetailRequest& request);

                /**
                 *本接口（DescribeSecurityRules）用于根据安全规则ID查询安全规则详情列表。支持一个或多个安全规则的查询。一次最多支持20个安全规则的查询。
                 * @param req DescribeSecurityRulesRequest
                 * @return DescribeSecurityRulesOutcome
                 */
                DescribeSecurityRulesOutcome DescribeSecurityRules(const Model::DescribeSecurityRulesRequest &request);
                void DescribeSecurityRulesAsync(const Model::DescribeSecurityRulesRequest& request, const DescribeSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityRulesOutcomeCallable DescribeSecurityRulesCallable(const Model::DescribeSecurityRulesRequest& request);

                /**
                 *该接口（DescribeTCPListeners）用于查询单通道或者通道组下的TCP监听器信息。
                 * @param req DescribeTCPListenersRequest
                 * @return DescribeTCPListenersOutcome
                 */
                DescribeTCPListenersOutcome DescribeTCPListeners(const Model::DescribeTCPListenersRequest &request);
                void DescribeTCPListenersAsync(const Model::DescribeTCPListenersRequest& request, const DescribeTCPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTCPListenersOutcomeCallable DescribeTCPListenersCallable(const Model::DescribeTCPListenersRequest& request);

                /**
                 *查询异步任务执行状态
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *该接口（DescribeUDPListeners）用于查询单通道或者通道组下的UDP监听器信息
                 * @param req DescribeUDPListenersRequest
                 * @return DescribeUDPListenersOutcome
                 */
                DescribeUDPListenersOutcome DescribeUDPListeners(const Model::DescribeUDPListenersRequest &request);
                void DescribeUDPListenersAsync(const Model::DescribeUDPListenersRequest& request, const DescribeUDPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUDPListenersOutcomeCallable DescribeUDPListenersCallable(const Model::DescribeUDPListenersRequest& request);

                /**
                 *本接口（DestroyProxies）用于销毁。通道销毁后，不再产生任何费用。
                 * @param req DestroyProxiesRequest
                 * @return DestroyProxiesOutcome
                 */
                DestroyProxiesOutcome DestroyProxies(const Model::DestroyProxiesRequest &request);
                void DestroyProxiesAsync(const Model::DestroyProxiesRequest& request, const DestroyProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyProxiesOutcomeCallable DestroyProxiesCallable(const Model::DestroyProxiesRequest& request);

                /**
                 *暂停域名解析
                 * @param req DisableGlobalDomainRequest
                 * @return DisableGlobalDomainOutcome
                 */
                DisableGlobalDomainOutcome DisableGlobalDomain(const Model::DisableGlobalDomainRequest &request);
                void DisableGlobalDomainAsync(const Model::DisableGlobalDomainRequest& request, const DisableGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableGlobalDomainOutcomeCallable DisableGlobalDomainCallable(const Model::DisableGlobalDomainRequest& request);

                /**
                 *开启域名解析
                 * @param req EnableGlobalDomainRequest
                 * @return EnableGlobalDomainOutcome
                 */
                EnableGlobalDomainOutcome EnableGlobalDomain(const Model::EnableGlobalDomainRequest &request);
                void EnableGlobalDomainAsync(const Model::EnableGlobalDomainRequest& request, const EnableGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGlobalDomainOutcomeCallable EnableGlobalDomainCallable(const Model::EnableGlobalDomainRequest& request);

                /**
                 *本接口（InquiryPriceCreateProxy）用于创建加速通道询价。
                 * @param req InquiryPriceCreateProxyRequest
                 * @return InquiryPriceCreateProxyOutcome
                 */
                InquiryPriceCreateProxyOutcome InquiryPriceCreateProxy(const Model::InquiryPriceCreateProxyRequest &request);
                void InquiryPriceCreateProxyAsync(const Model::InquiryPriceCreateProxyRequest& request, const InquiryPriceCreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateProxyOutcomeCallable InquiryPriceCreateProxyCallable(const Model::InquiryPriceCreateProxyRequest& request);

                /**
                 *本接口（ModifyCertificate）用于修改监听器下的域名对应的证书。该接口仅适用于version3.0的通道。
                 * @param req ModifyCertificateRequest
                 * @return ModifyCertificateOutcome
                 */
                ModifyCertificateOutcome ModifyCertificate(const Model::ModifyCertificateRequest &request);
                void ModifyCertificateAsync(const Model::ModifyCertificateRequest& request, const ModifyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateOutcomeCallable ModifyCertificateCallable(const Model::ModifyCertificateRequest& request);

                /**
                 *本接口（ModifyCertificateAttributes）用于修改证书，包括证书名字以及证书内容。
                 * @param req ModifyCertificateAttributesRequest
                 * @return ModifyCertificateAttributesOutcome
                 */
                ModifyCertificateAttributesOutcome ModifyCertificateAttributes(const Model::ModifyCertificateAttributesRequest &request);
                void ModifyCertificateAttributesAsync(const Model::ModifyCertificateAttributesRequest& request, const ModifyCertificateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateAttributesOutcomeCallable ModifyCertificateAttributesCallable(const Model::ModifyCertificateAttributesRequest& request);

                /**
                 *本接口（ModifyDomain）用于监听器下的域名。当通道版本为3.0时，支持对该域名所对应的证书修改。
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *修改域名属性
                 * @param req ModifyGlobalDomainAttributeRequest
                 * @return ModifyGlobalDomainAttributeOutcome
                 */
                ModifyGlobalDomainAttributeOutcome ModifyGlobalDomainAttribute(const Model::ModifyGlobalDomainAttributeRequest &request);
                void ModifyGlobalDomainAttributeAsync(const Model::ModifyGlobalDomainAttributeRequest& request, const ModifyGlobalDomainAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalDomainAttributeOutcomeCallable ModifyGlobalDomainAttributeCallable(const Model::ModifyGlobalDomainAttributeRequest& request);

                /**
                 *修改域名解析记录
                 * @param req ModifyGlobalDomainDnsRequest
                 * @return ModifyGlobalDomainDnsOutcome
                 */
                ModifyGlobalDomainDnsOutcome ModifyGlobalDomainDns(const Model::ModifyGlobalDomainDnsRequest &request);
                void ModifyGlobalDomainDnsAsync(const Model::ModifyGlobalDomainDnsRequest& request, const ModifyGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalDomainDnsOutcomeCallable ModifyGlobalDomainDnsCallable(const Model::ModifyGlobalDomainDnsRequest& request);

                /**
                 *本接口（ModifyGroupDomainConfig）用于配置通道组就近接入域名。
                 * @param req ModifyGroupDomainConfigRequest
                 * @return ModifyGroupDomainConfigOutcome
                 */
                ModifyGroupDomainConfigOutcome ModifyGroupDomainConfig(const Model::ModifyGroupDomainConfigRequest &request);
                void ModifyGroupDomainConfigAsync(const Model::ModifyGroupDomainConfigRequest& request, const ModifyGroupDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupDomainConfigOutcomeCallable ModifyGroupDomainConfigCallable(const Model::ModifyGroupDomainConfigRequest& request);

                /**
                 *该接口（ModifyHTTPListenerAttribute）用于修改通道的HTTP监听器配置信息，目前仅支持修改监听器的名称。
注意：通道组通道暂时不支持HTTP/HTTPS监听器。
                 * @param req ModifyHTTPListenerAttributeRequest
                 * @return ModifyHTTPListenerAttributeOutcome
                 */
                ModifyHTTPListenerAttributeOutcome ModifyHTTPListenerAttribute(const Model::ModifyHTTPListenerAttributeRequest &request);
                void ModifyHTTPListenerAttributeAsync(const Model::ModifyHTTPListenerAttributeRequest& request, const ModifyHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHTTPListenerAttributeOutcomeCallable ModifyHTTPListenerAttributeCallable(const Model::ModifyHTTPListenerAttributeRequest& request);

                /**
                 *该接口（ModifyHTTPSListenerAttribute）用于修改HTTPS监听器配置，当前不支持通道组和v1版本通道。
                 * @param req ModifyHTTPSListenerAttributeRequest
                 * @return ModifyHTTPSListenerAttributeOutcome
                 */
                ModifyHTTPSListenerAttributeOutcome ModifyHTTPSListenerAttribute(const Model::ModifyHTTPSListenerAttributeRequest &request);
                void ModifyHTTPSListenerAttributeAsync(const Model::ModifyHTTPSListenerAttributeRequest& request, const ModifyHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHTTPSListenerAttributeOutcomeCallable ModifyHTTPSListenerAttributeCallable(const Model::ModifyHTTPSListenerAttributeRequest& request);

                /**
                 *本接口（ModifyProxiesAttribute）用于修改实例的属性（目前只支持修改通道的名称）。
                 * @param req ModifyProxiesAttributeRequest
                 * @return ModifyProxiesAttributeOutcome
                 */
                ModifyProxiesAttributeOutcome ModifyProxiesAttribute(const Model::ModifyProxiesAttributeRequest &request);
                void ModifyProxiesAttributeAsync(const Model::ModifyProxiesAttributeRequest& request, const ModifyProxiesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxiesAttributeOutcomeCallable ModifyProxiesAttributeCallable(const Model::ModifyProxiesAttributeRequest& request);

                /**
                 *本接口（ModifyProxiesProject）用于修改通道所属项目。
                 * @param req ModifyProxiesProjectRequest
                 * @return ModifyProxiesProjectOutcome
                 */
                ModifyProxiesProjectOutcome ModifyProxiesProject(const Model::ModifyProxiesProjectRequest &request);
                void ModifyProxiesProjectAsync(const Model::ModifyProxiesProjectRequest& request, const ModifyProxiesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxiesProjectOutcomeCallable ModifyProxiesProjectCallable(const Model::ModifyProxiesProjectRequest& request);

                /**
                 *本接口（ModifyProxyConfiguration）用于修改通道的配置。根据当前业务的容量需求，扩容或缩容相关通道的配置。仅支持Scalarable为1的通道,Scalarable可通过接口DescribeProxies获取。
                 * @param req ModifyProxyConfigurationRequest
                 * @return ModifyProxyConfigurationOutcome
                 */
                ModifyProxyConfigurationOutcome ModifyProxyConfiguration(const Model::ModifyProxyConfigurationRequest &request);
                void ModifyProxyConfigurationAsync(const Model::ModifyProxyConfigurationRequest& request, const ModifyProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxyConfigurationOutcomeCallable ModifyProxyConfigurationCallable(const Model::ModifyProxyConfigurationRequest& request);

                /**
                 *本接口（ModifyProxyGroupAttribute）用于修改通道组属性，目前仅支持修改通道组名称与项目ID。
                 * @param req ModifyProxyGroupAttributeRequest
                 * @return ModifyProxyGroupAttributeOutcome
                 */
                ModifyProxyGroupAttributeOutcome ModifyProxyGroupAttribute(const Model::ModifyProxyGroupAttributeRequest &request);
                void ModifyProxyGroupAttributeAsync(const Model::ModifyProxyGroupAttributeRequest& request, const ModifyProxyGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxyGroupAttributeOutcomeCallable ModifyProxyGroupAttributeCallable(const Model::ModifyProxyGroupAttributeRequest& request);

                /**
                 *本接口（ModifyRealServerName）用于修改源站的名称
                 * @param req ModifyRealServerNameRequest
                 * @return ModifyRealServerNameOutcome
                 */
                ModifyRealServerNameOutcome ModifyRealServerName(const Model::ModifyRealServerNameRequest &request);
                void ModifyRealServerNameAsync(const Model::ModifyRealServerNameRequest& request, const ModifyRealServerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRealServerNameOutcomeCallable ModifyRealServerNameCallable(const Model::ModifyRealServerNameRequest& request);

                /**
                 *本接口（ModifyRuleAttribute）用于修改转发规则的信息，包括健康检查的配置以及转发策略。
                 * @param req ModifyRuleAttributeRequest
                 * @return ModifyRuleAttributeOutcome
                 */
                ModifyRuleAttributeOutcome ModifyRuleAttribute(const Model::ModifyRuleAttributeRequest &request);
                void ModifyRuleAttributeAsync(const Model::ModifyRuleAttributeRequest& request, const ModifyRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleAttributeOutcomeCallable ModifyRuleAttributeCallable(const Model::ModifyRuleAttributeRequest& request);

                /**
                 *修改安全策略规则名
                 * @param req ModifySecurityRuleRequest
                 * @return ModifySecurityRuleOutcome
                 */
                ModifySecurityRuleOutcome ModifySecurityRule(const Model::ModifySecurityRuleRequest &request);
                void ModifySecurityRuleAsync(const Model::ModifySecurityRuleRequest& request, const ModifySecurityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityRuleOutcomeCallable ModifySecurityRuleCallable(const Model::ModifySecurityRuleRequest& request);

                /**
                 *本接口（ModifyTCPListenerAttribute）用于修改通道实例下TCP监听器配置，包括健康检查的配置，调度策略。
                 * @param req ModifyTCPListenerAttributeRequest
                 * @return ModifyTCPListenerAttributeOutcome
                 */
                ModifyTCPListenerAttributeOutcome ModifyTCPListenerAttribute(const Model::ModifyTCPListenerAttributeRequest &request);
                void ModifyTCPListenerAttributeAsync(const Model::ModifyTCPListenerAttributeRequest& request, const ModifyTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTCPListenerAttributeOutcomeCallable ModifyTCPListenerAttributeCallable(const Model::ModifyTCPListenerAttributeRequest& request);

                /**
                 *本接口（ModifyUDPListenerAttribute）用于修改通道实例下UDP监听器配置，包括监听器名称和调度策略的修改。
                 * @param req ModifyUDPListenerAttributeRequest
                 * @return ModifyUDPListenerAttributeOutcome
                 */
                ModifyUDPListenerAttributeOutcome ModifyUDPListenerAttribute(const Model::ModifyUDPListenerAttributeRequest &request);
                void ModifyUDPListenerAttributeAsync(const Model::ModifyUDPListenerAttributeRequest& request, const ModifyUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUDPListenerAttributeOutcomeCallable ModifyUDPListenerAttributeCallable(const Model::ModifyUDPListenerAttributeRequest& request);

                /**
                 *该接口（OpenProxies）用于开启一条或者多条通道。
                 * @param req OpenProxiesRequest
                 * @return OpenProxiesOutcome
                 */
                OpenProxiesOutcome OpenProxies(const Model::OpenProxiesRequest &request);
                void OpenProxiesAsync(const Model::OpenProxiesRequest& request, const OpenProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProxiesOutcomeCallable OpenProxiesCallable(const Model::OpenProxiesRequest& request);

                /**
                 *该接口（OpenProxyGroup）用于开启一条通道组中的所有通道
                 * @param req OpenProxyGroupRequest
                 * @return OpenProxyGroupOutcome
                 */
                OpenProxyGroupOutcome OpenProxyGroup(const Model::OpenProxyGroupRequest &request);
                void OpenProxyGroupAsync(const Model::OpenProxyGroupRequest& request, const OpenProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProxyGroupOutcomeCallable OpenProxyGroupCallable(const Model::OpenProxyGroupRequest& request);

                /**
                 *开启安全策略
                 * @param req OpenSecurityPolicyRequest
                 * @return OpenSecurityPolicyOutcome
                 */
                OpenSecurityPolicyOutcome OpenSecurityPolicy(const Model::OpenSecurityPolicyRequest &request);
                void OpenSecurityPolicyAsync(const Model::OpenSecurityPolicyRequest& request, const OpenSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenSecurityPolicyOutcomeCallable OpenSecurityPolicyCallable(const Model::OpenSecurityPolicyRequest& request);

                /**
                 *删除已添加的源站(服务器)IP或域名
                 * @param req RemoveRealServersRequest
                 * @return RemoveRealServersOutcome
                 */
                RemoveRealServersOutcome RemoveRealServers(const Model::RemoveRealServersRequest &request);
                void RemoveRealServersAsync(const Model::RemoveRealServersRequest& request, const RemoveRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveRealServersOutcomeCallable RemoveRealServersCallable(const Model::RemoveRealServersRequest& request);

                /**
                 *本接口（SetAuthentication）用于通道的高级认证配置，包括认证方式选择，以及各种认证方式对应的证书选择。仅支持Version3.0的通道。
                 * @param req SetAuthenticationRequest
                 * @return SetAuthenticationOutcome
                 */
                SetAuthenticationOutcome SetAuthentication(const Model::SetAuthenticationRequest &request);
                void SetAuthenticationAsync(const Model::SetAuthenticationRequest& request, const SetAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAuthenticationOutcomeCallable SetAuthenticationCallable(const Model::SetAuthenticationRequest& request);

                /**
                 *设置监听器TLS配置
                 * @param req SetTlsVersionRequest
                 * @return SetTlsVersionOutcome
                 */
                SetTlsVersionOutcome SetTlsVersion(const Model::SetTlsVersionRequest &request);
                void SetTlsVersionAsync(const Model::SetTlsVersionRequest& request, const SetTlsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTlsVersionOutcomeCallable SetTlsVersionCallable(const Model::SetTlsVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_GAAPCLIENT_H_
