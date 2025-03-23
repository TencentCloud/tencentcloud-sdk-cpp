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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressRequest.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressResponse.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerRequest.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBoundIPRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBoundIPResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCPrecisionPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCPrecisionPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCReqLimitPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCReqLimitPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSAIRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSAIResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSConnectLimitRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSConnectLimitResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateL7RuleCertsRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateL7RuleCertsResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateNewL7RulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateNewL7RulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePortAclConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePortAclConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePortAclConfigListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePortAclConfigListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCLevelPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCLevelPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCPrecisionPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCPrecisionPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCRequestLimitPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCRequestLimitPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCThresholdPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCThresholdPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePortAclConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePortAclConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBGPIPL7RulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBGPIPL7RulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBgpBizTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBgpBizTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizHttpStatusRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizHttpStatusResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizMonitorTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizMonitorTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCPrecisionPlyListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCPrecisionPlyListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCReqLimitPolicyListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCReqLimitPolicyListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCThresholdListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCThresholdListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcGeoIPBlockConfigListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcGeoIPBlockConfigListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSConnectLimitListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSConnectLimitListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeIpBlockListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeIpBlockListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeL7RulesBySSLCertIdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeL7RulesBySSLCertIdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPortAclListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPortAclListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesErrHealthRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesErrHealthResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewAttackTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewAttackTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewCCTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewCCTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewDDoSEventListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewDDoSEventListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewDDoSTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewDDoSTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewIndexRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewIndexResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribePendingRiskInfoRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribePendingRiskInfoResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCLevelPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCLevelPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCPrecisionPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCPrecisionPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCReqLimitPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCReqLimitPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCThresholdPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCThresholdPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSLevelRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSLevelResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyNewDomainRulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyNewDomainRulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPortAclConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPortAclConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigResponse.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            class AntiddosClient : public AbstractClient
            {
            public:
                AntiddosClient(const Credential &credential, const std::string &region);
                AntiddosClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateDDoSEipAddressResponse> AssociateDDoSEipAddressOutcome;
                typedef std::future<AssociateDDoSEipAddressOutcome> AssociateDDoSEipAddressOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::AssociateDDoSEipAddressRequest&, AssociateDDoSEipAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDDoSEipAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateDDoSEipLoadBalancerResponse> AssociateDDoSEipLoadBalancerOutcome;
                typedef std::future<AssociateDDoSEipLoadBalancerOutcome> AssociateDDoSEipLoadBalancerOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::AssociateDDoSEipLoadBalancerRequest&, AssociateDDoSEipLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDDoSEipLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlackWhiteIpListResponse> CreateBlackWhiteIpListOutcome;
                typedef std::future<CreateBlackWhiteIpListOutcome> CreateBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateBlackWhiteIpListRequest&, CreateBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBoundIPResponse> CreateBoundIPOutcome;
                typedef std::future<CreateBoundIPOutcome> CreateBoundIPOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateBoundIPRequest&, CreateBoundIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBoundIPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCPrecisionPolicyResponse> CreateCCPrecisionPolicyOutcome;
                typedef std::future<CreateCCPrecisionPolicyOutcome> CreateCCPrecisionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCCPrecisionPolicyRequest&, CreateCCPrecisionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCPrecisionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCReqLimitPolicyResponse> CreateCCReqLimitPolicyOutcome;
                typedef std::future<CreateCCReqLimitPolicyOutcome> CreateCCReqLimitPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCCReqLimitPolicyRequest&, CreateCCReqLimitPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCReqLimitPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcBlackWhiteIpListResponse> CreateCcBlackWhiteIpListOutcome;
                typedef std::future<CreateCcBlackWhiteIpListOutcome> CreateCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCcBlackWhiteIpListRequest&, CreateCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcGeoIPBlockConfigResponse> CreateCcGeoIPBlockConfigOutcome;
                typedef std::future<CreateCcGeoIPBlockConfigOutcome> CreateCcGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCcGeoIPBlockConfigRequest&, CreateCcGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSAIResponse> CreateDDoSAIOutcome;
                typedef std::future<CreateDDoSAIOutcome> CreateDDoSAIOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSAIRequest&, CreateDDoSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSAIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSBlackWhiteIpListResponse> CreateDDoSBlackWhiteIpListOutcome;
                typedef std::future<CreateDDoSBlackWhiteIpListOutcome> CreateDDoSBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSBlackWhiteIpListRequest&, CreateDDoSBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSConnectLimitResponse> CreateDDoSConnectLimitOutcome;
                typedef std::future<CreateDDoSConnectLimitOutcome> CreateDDoSConnectLimitOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSConnectLimitRequest&, CreateDDoSConnectLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSConnectLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSGeoIPBlockConfigResponse> CreateDDoSGeoIPBlockConfigOutcome;
                typedef std::future<CreateDDoSGeoIPBlockConfigOutcome> CreateDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSGeoIPBlockConfigRequest&, CreateDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSSpeedLimitConfigResponse> CreateDDoSSpeedLimitConfigOutcome;
                typedef std::future<CreateDDoSSpeedLimitConfigOutcome> CreateDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSSpeedLimitConfigRequest&, CreateDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefaultAlarmThresholdResponse> CreateDefaultAlarmThresholdOutcome;
                typedef std::future<CreateDefaultAlarmThresholdOutcome> CreateDefaultAlarmThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDefaultAlarmThresholdRequest&, CreateDefaultAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIPAlarmThresholdConfigResponse> CreateIPAlarmThresholdConfigOutcome;
                typedef std::future<CreateIPAlarmThresholdConfigOutcome> CreateIPAlarmThresholdConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateIPAlarmThresholdConfigRequest&, CreateIPAlarmThresholdConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPAlarmThresholdConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7RuleCertsResponse> CreateL7RuleCertsOutcome;
                typedef std::future<CreateL7RuleCertsOutcome> CreateL7RuleCertsOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateL7RuleCertsRequest&, CreateL7RuleCertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7RuleCertsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNewL7RulesResponse> CreateNewL7RulesOutcome;
                typedef std::future<CreateNewL7RulesOutcome> CreateNewL7RulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateNewL7RulesRequest&, CreateNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePacketFilterConfigResponse> CreatePacketFilterConfigOutcome;
                typedef std::future<CreatePacketFilterConfigOutcome> CreatePacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreatePacketFilterConfigRequest&, CreatePacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePortAclConfigResponse> CreatePortAclConfigOutcome;
                typedef std::future<CreatePortAclConfigOutcome> CreatePortAclConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreatePortAclConfigRequest&, CreatePortAclConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePortAclConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePortAclConfigListResponse> CreatePortAclConfigListOutcome;
                typedef std::future<CreatePortAclConfigListOutcome> CreatePortAclConfigListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreatePortAclConfigListRequest&, CreatePortAclConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePortAclConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProtocolBlockConfigResponse> CreateProtocolBlockConfigOutcome;
                typedef std::future<CreateProtocolBlockConfigOutcome> CreateProtocolBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateProtocolBlockConfigRequest&, CreateProtocolBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtocolBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchedulingDomainResponse> CreateSchedulingDomainOutcome;
                typedef std::future<CreateSchedulingDomainOutcome> CreateSchedulingDomainOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateSchedulingDomainRequest&, CreateSchedulingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulingDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWaterPrintConfigResponse> CreateWaterPrintConfigOutcome;
                typedef std::future<CreateWaterPrintConfigOutcome> CreateWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateWaterPrintConfigRequest&, CreateWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWaterPrintConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWaterPrintKeyResponse> CreateWaterPrintKeyOutcome;
                typedef std::future<CreateWaterPrintKeyOutcome> CreateWaterPrintKeyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateWaterPrintKeyRequest&, CreateWaterPrintKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWaterPrintKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCLevelPolicyResponse> DeleteCCLevelPolicyOutcome;
                typedef std::future<DeleteCCLevelPolicyOutcome> DeleteCCLevelPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCLevelPolicyRequest&, DeleteCCLevelPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCLevelPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCPrecisionPolicyResponse> DeleteCCPrecisionPolicyOutcome;
                typedef std::future<DeleteCCPrecisionPolicyOutcome> DeleteCCPrecisionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCPrecisionPolicyRequest&, DeleteCCPrecisionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCPrecisionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCRequestLimitPolicyResponse> DeleteCCRequestLimitPolicyOutcome;
                typedef std::future<DeleteCCRequestLimitPolicyOutcome> DeleteCCRequestLimitPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCRequestLimitPolicyRequest&, DeleteCCRequestLimitPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCRequestLimitPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCThresholdPolicyResponse> DeleteCCThresholdPolicyOutcome;
                typedef std::future<DeleteCCThresholdPolicyOutcome> DeleteCCThresholdPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCThresholdPolicyRequest&, DeleteCCThresholdPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCThresholdPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcBlackWhiteIpListResponse> DeleteCcBlackWhiteIpListOutcome;
                typedef std::future<DeleteCcBlackWhiteIpListOutcome> DeleteCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCcBlackWhiteIpListRequest&, DeleteCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcGeoIPBlockConfigResponse> DeleteCcGeoIPBlockConfigOutcome;
                typedef std::future<DeleteCcGeoIPBlockConfigOutcome> DeleteCcGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCcGeoIPBlockConfigRequest&, DeleteCcGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSBlackWhiteIpListResponse> DeleteDDoSBlackWhiteIpListOutcome;
                typedef std::future<DeleteDDoSBlackWhiteIpListOutcome> DeleteDDoSBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSBlackWhiteIpListRequest&, DeleteDDoSBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSGeoIPBlockConfigResponse> DeleteDDoSGeoIPBlockConfigOutcome;
                typedef std::future<DeleteDDoSGeoIPBlockConfigOutcome> DeleteDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSGeoIPBlockConfigRequest&, DeleteDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSSpeedLimitConfigResponse> DeleteDDoSSpeedLimitConfigOutcome;
                typedef std::future<DeleteDDoSSpeedLimitConfigOutcome> DeleteDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSSpeedLimitConfigRequest&, DeleteDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePacketFilterConfigResponse> DeletePacketFilterConfigOutcome;
                typedef std::future<DeletePacketFilterConfigOutcome> DeletePacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeletePacketFilterConfigRequest&, DeletePacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePortAclConfigResponse> DeletePortAclConfigOutcome;
                typedef std::future<DeletePortAclConfigOutcome> DeletePortAclConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeletePortAclConfigRequest&, DeletePortAclConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePortAclConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWaterPrintConfigResponse> DeleteWaterPrintConfigOutcome;
                typedef std::future<DeleteWaterPrintConfigOutcome> DeleteWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteWaterPrintConfigRequest&, DeleteWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterPrintConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWaterPrintKeyResponse> DeleteWaterPrintKeyOutcome;
                typedef std::future<DeleteWaterPrintKeyOutcome> DeleteWaterPrintKeyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteWaterPrintKeyRequest&, DeleteWaterPrintKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterPrintKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBGPIPL7RulesResponse> DescribeBGPIPL7RulesOutcome;
                typedef std::future<DescribeBGPIPL7RulesOutcome> DescribeBGPIPL7RulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBGPIPL7RulesRequest&, DescribeBGPIPL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBGPIPL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicDeviceStatusResponse> DescribeBasicDeviceStatusOutcome;
                typedef std::future<DescribeBasicDeviceStatusOutcome> DescribeBasicDeviceStatusOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBasicDeviceStatusRequest&, DescribeBasicDeviceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicDeviceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBgpBizTrendResponse> DescribeBgpBizTrendOutcome;
                typedef std::future<DescribeBgpBizTrendOutcome> DescribeBgpBizTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBgpBizTrendRequest&, DescribeBgpBizTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpBizTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizHttpStatusResponse> DescribeBizHttpStatusOutcome;
                typedef std::future<DescribeBizHttpStatusOutcome> DescribeBizHttpStatusOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBizHttpStatusRequest&, DescribeBizHttpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizHttpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizMonitorTrendResponse> DescribeBizMonitorTrendOutcome;
                typedef std::future<DescribeBizMonitorTrendOutcome> DescribeBizMonitorTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBizMonitorTrendRequest&, DescribeBizMonitorTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizMonitorTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizTrendResponse> DescribeBizTrendOutcome;
                typedef std::future<DescribeBizTrendOutcome> DescribeBizTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBizTrendRequest&, DescribeBizTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCLevelListResponse> DescribeCCLevelListOutcome;
                typedef std::future<DescribeCCLevelListOutcome> DescribeCCLevelListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCLevelListRequest&, DescribeCCLevelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCLevelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCLevelPolicyResponse> DescribeCCLevelPolicyOutcome;
                typedef std::future<DescribeCCLevelPolicyOutcome> DescribeCCLevelPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCLevelPolicyRequest&, DescribeCCLevelPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCLevelPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCPrecisionPlyListResponse> DescribeCCPrecisionPlyListOutcome;
                typedef std::future<DescribeCCPrecisionPlyListOutcome> DescribeCCPrecisionPlyListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCPrecisionPlyListRequest&, DescribeCCPrecisionPlyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCPrecisionPlyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCReqLimitPolicyListResponse> DescribeCCReqLimitPolicyListOutcome;
                typedef std::future<DescribeCCReqLimitPolicyListOutcome> DescribeCCReqLimitPolicyListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCReqLimitPolicyListRequest&, DescribeCCReqLimitPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCReqLimitPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCThresholdListResponse> DescribeCCThresholdListOutcome;
                typedef std::future<DescribeCCThresholdListOutcome> DescribeCCThresholdListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCThresholdListRequest&, DescribeCCThresholdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCThresholdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCTrendResponse> DescribeCCTrendOutcome;
                typedef std::future<DescribeCCTrendOutcome> DescribeCCTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCTrendRequest&, DescribeCCTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcBlackWhiteIpListResponse> DescribeCcBlackWhiteIpListOutcome;
                typedef std::future<DescribeCcBlackWhiteIpListOutcome> DescribeCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCcBlackWhiteIpListRequest&, DescribeCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcGeoIPBlockConfigListResponse> DescribeCcGeoIPBlockConfigListOutcome;
                typedef std::future<DescribeCcGeoIPBlockConfigListOutcome> DescribeCcGeoIPBlockConfigListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCcGeoIPBlockConfigListRequest&, DescribeCcGeoIPBlockConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcGeoIPBlockConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSBlackWhiteIpListResponse> DescribeDDoSBlackWhiteIpListOutcome;
                typedef std::future<DescribeDDoSBlackWhiteIpListOutcome> DescribeDDoSBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSBlackWhiteIpListRequest&, DescribeDDoSBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSConnectLimitListResponse> DescribeDDoSConnectLimitListOutcome;
                typedef std::future<DescribeDDoSConnectLimitListOutcome> DescribeDDoSConnectLimitListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSConnectLimitListRequest&, DescribeDDoSConnectLimitListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSConnectLimitListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSTrendResponse> DescribeDDoSTrendOutcome;
                typedef std::future<DescribeDDoSTrendOutcome> DescribeDDoSTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSTrendRequest&, DescribeDDoSTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultAlarmThresholdResponse> DescribeDefaultAlarmThresholdOutcome;
                typedef std::future<DescribeDefaultAlarmThresholdOutcome> DescribeDefaultAlarmThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDefaultAlarmThresholdRequest&, DescribeDefaultAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpBlockListResponse> DescribeIpBlockListOutcome;
                typedef std::future<DescribeIpBlockListOutcome> DescribeIpBlockListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeIpBlockListRequest&, DescribeIpBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7RulesBySSLCertIdResponse> DescribeL7RulesBySSLCertIdOutcome;
                typedef std::future<DescribeL7RulesBySSLCertIdOutcome> DescribeL7RulesBySSLCertIdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeL7RulesBySSLCertIdRequest&, DescribeL7RulesBySSLCertIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7RulesBySSLCertIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListBGPIPInstancesResponse> DescribeListBGPIPInstancesOutcome;
                typedef std::future<DescribeListBGPIPInstancesOutcome> DescribeListBGPIPInstancesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBGPIPInstancesRequest&, DescribeListBGPIPInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBGPIPInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListBGPInstancesResponse> DescribeListBGPInstancesOutcome;
                typedef std::future<DescribeListBGPInstancesOutcome> DescribeListBGPInstancesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBGPInstancesRequest&, DescribeListBGPInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBGPInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListBlackWhiteIpListResponse> DescribeListBlackWhiteIpListOutcome;
                typedef std::future<DescribeListBlackWhiteIpListOutcome> DescribeListBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBlackWhiteIpListRequest&, DescribeListBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListDDoSAIResponse> DescribeListDDoSAIOutcome;
                typedef std::future<DescribeListDDoSAIOutcome> DescribeListDDoSAIOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSAIRequest&, DescribeListDDoSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSAIAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListDDoSGeoIPBlockConfigResponse> DescribeListDDoSGeoIPBlockConfigOutcome;
                typedef std::future<DescribeListDDoSGeoIPBlockConfigOutcome> DescribeListDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSGeoIPBlockConfigRequest&, DescribeListDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListDDoSSpeedLimitConfigResponse> DescribeListDDoSSpeedLimitConfigOutcome;
                typedef std::future<DescribeListDDoSSpeedLimitConfigOutcome> DescribeListDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSSpeedLimitConfigRequest&, DescribeListDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListIPAlarmConfigResponse> DescribeListIPAlarmConfigOutcome;
                typedef std::future<DescribeListIPAlarmConfigOutcome> DescribeListIPAlarmConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListIPAlarmConfigRequest&, DescribeListIPAlarmConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListIPAlarmConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListListenerResponse> DescribeListListenerOutcome;
                typedef std::future<DescribeListListenerOutcome> DescribeListListenerOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListListenerRequest&, DescribeListListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListPacketFilterConfigResponse> DescribeListPacketFilterConfigOutcome;
                typedef std::future<DescribeListPacketFilterConfigOutcome> DescribeListPacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListPacketFilterConfigRequest&, DescribeListPacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListPacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListPortAclListResponse> DescribeListPortAclListOutcome;
                typedef std::future<DescribeListPortAclListOutcome> DescribeListPortAclListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListPortAclListRequest&, DescribeListPortAclListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListPortAclListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListProtocolBlockConfigResponse> DescribeListProtocolBlockConfigOutcome;
                typedef std::future<DescribeListProtocolBlockConfigOutcome> DescribeListProtocolBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListProtocolBlockConfigRequest&, DescribeListProtocolBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListProtocolBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListSchedulingDomainResponse> DescribeListSchedulingDomainOutcome;
                typedef std::future<DescribeListSchedulingDomainOutcome> DescribeListSchedulingDomainOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListSchedulingDomainRequest&, DescribeListSchedulingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListSchedulingDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListWaterPrintConfigResponse> DescribeListWaterPrintConfigOutcome;
                typedef std::future<DescribeListWaterPrintConfigOutcome> DescribeListWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListWaterPrintConfigRequest&, DescribeListWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListWaterPrintConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL7RulesResponse> DescribeNewL7RulesOutcome;
                typedef std::future<DescribeNewL7RulesOutcome> DescribeNewL7RulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeNewL7RulesRequest&, DescribeNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL7RulesErrHealthResponse> DescribeNewL7RulesErrHealthOutcome;
                typedef std::future<DescribeNewL7RulesErrHealthOutcome> DescribeNewL7RulesErrHealthOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeNewL7RulesErrHealthRequest&, DescribeNewL7RulesErrHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL7RulesErrHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewAttackTrendResponse> DescribeOverviewAttackTrendOutcome;
                typedef std::future<DescribeOverviewAttackTrendOutcome> DescribeOverviewAttackTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeOverviewAttackTrendRequest&, DescribeOverviewAttackTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewAttackTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewCCTrendResponse> DescribeOverviewCCTrendOutcome;
                typedef std::future<DescribeOverviewCCTrendOutcome> DescribeOverviewCCTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeOverviewCCTrendRequest&, DescribeOverviewCCTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewCCTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewDDoSEventListResponse> DescribeOverviewDDoSEventListOutcome;
                typedef std::future<DescribeOverviewDDoSEventListOutcome> DescribeOverviewDDoSEventListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeOverviewDDoSEventListRequest&, DescribeOverviewDDoSEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewDDoSEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewDDoSTrendResponse> DescribeOverviewDDoSTrendOutcome;
                typedef std::future<DescribeOverviewDDoSTrendOutcome> DescribeOverviewDDoSTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeOverviewDDoSTrendRequest&, DescribeOverviewDDoSTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewDDoSTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewIndexResponse> DescribeOverviewIndexOutcome;
                typedef std::future<DescribeOverviewIndexOutcome> DescribeOverviewIndexOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeOverviewIndexRequest&, DescribeOverviewIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePendingRiskInfoResponse> DescribePendingRiskInfoOutcome;
                typedef std::future<DescribePendingRiskInfoOutcome> DescribePendingRiskInfoOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribePendingRiskInfoRequest&, DescribePendingRiskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePendingRiskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateDDoSEipAddressResponse> DisassociateDDoSEipAddressOutcome;
                typedef std::future<DisassociateDDoSEipAddressOutcome> DisassociateDDoSEipAddressOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DisassociateDDoSEipAddressRequest&, DisassociateDDoSEipAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDDoSEipAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCLevelPolicyResponse> ModifyCCLevelPolicyOutcome;
                typedef std::future<ModifyCCLevelPolicyOutcome> ModifyCCLevelPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCCLevelPolicyRequest&, ModifyCCLevelPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCLevelPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCPrecisionPolicyResponse> ModifyCCPrecisionPolicyOutcome;
                typedef std::future<ModifyCCPrecisionPolicyOutcome> ModifyCCPrecisionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCCPrecisionPolicyRequest&, ModifyCCPrecisionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCPrecisionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCReqLimitPolicyResponse> ModifyCCReqLimitPolicyOutcome;
                typedef std::future<ModifyCCReqLimitPolicyOutcome> ModifyCCReqLimitPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCCReqLimitPolicyRequest&, ModifyCCReqLimitPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCReqLimitPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCThresholdPolicyResponse> ModifyCCThresholdPolicyOutcome;
                typedef std::future<ModifyCCThresholdPolicyOutcome> ModifyCCThresholdPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCCThresholdPolicyRequest&, ModifyCCThresholdPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCThresholdPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcBlackWhiteIpListResponse> ModifyCcBlackWhiteIpListOutcome;
                typedef std::future<ModifyCcBlackWhiteIpListOutcome> ModifyCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCcBlackWhiteIpListRequest&, ModifyCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSBlackWhiteIpListResponse> ModifyDDoSBlackWhiteIpListOutcome;
                typedef std::future<ModifyDDoSBlackWhiteIpListOutcome> ModifyDDoSBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSBlackWhiteIpListRequest&, ModifyDDoSBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSGeoIPBlockConfigResponse> ModifyDDoSGeoIPBlockConfigOutcome;
                typedef std::future<ModifyDDoSGeoIPBlockConfigOutcome> ModifyDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSGeoIPBlockConfigRequest&, ModifyDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSLevelResponse> ModifyDDoSLevelOutcome;
                typedef std::future<ModifyDDoSLevelOutcome> ModifyDDoSLevelOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSLevelRequest&, ModifyDDoSLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSSpeedLimitConfigResponse> ModifyDDoSSpeedLimitConfigOutcome;
                typedef std::future<ModifyDDoSSpeedLimitConfigOutcome> ModifyDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSSpeedLimitConfigRequest&, ModifyDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSThresholdResponse> ModifyDDoSThresholdOutcome;
                typedef std::future<ModifyDDoSThresholdOutcome> ModifyDDoSThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSThresholdRequest&, ModifyDDoSThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainUsrNameResponse> ModifyDomainUsrNameOutcome;
                typedef std::future<ModifyDomainUsrNameOutcome> ModifyDomainUsrNameOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDomainUsrNameRequest&, ModifyDomainUsrNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainUsrNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNewDomainRulesResponse> ModifyNewDomainRulesOutcome;
                typedef std::future<ModifyNewDomainRulesOutcome> ModifyNewDomainRulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyNewDomainRulesRequest&, ModifyNewDomainRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNewDomainRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPacketFilterConfigResponse> ModifyPacketFilterConfigOutcome;
                typedef std::future<ModifyPacketFilterConfigOutcome> ModifyPacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyPacketFilterConfigRequest&, ModifyPacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPortAclConfigResponse> ModifyPortAclConfigOutcome;
                typedef std::future<ModifyPortAclConfigOutcome> ModifyPortAclConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyPortAclConfigRequest&, ModifyPortAclConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPortAclConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchWaterPrintConfigResponse> SwitchWaterPrintConfigOutcome;
                typedef std::future<SwitchWaterPrintConfigOutcome> SwitchWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::SwitchWaterPrintConfigRequest&, SwitchWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchWaterPrintConfigAsyncHandler;



                /**
                 *本接口 (AssociateDDoSEipAddress) 用于将高防弹性公网IP绑定到实例或弹性网卡的指定内网 IP 上。
                 * @param req AssociateDDoSEipAddressRequest
                 * @return AssociateDDoSEipAddressOutcome
                 */
                AssociateDDoSEipAddressOutcome AssociateDDoSEipAddress(const Model::AssociateDDoSEipAddressRequest &request);
                void AssociateDDoSEipAddressAsync(const Model::AssociateDDoSEipAddressRequest& request, const AssociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDDoSEipAddressOutcomeCallable AssociateDDoSEipAddressCallable(const Model::AssociateDDoSEipAddressRequest& request);

                /**
                 *本接口 (AssociateDDoSEipLoadBalancer) 用于将高防弹性公网IP绑定到负载均衡指定内网 IP 上。
                 * @param req AssociateDDoSEipLoadBalancerRequest
                 * @return AssociateDDoSEipLoadBalancerOutcome
                 */
                AssociateDDoSEipLoadBalancerOutcome AssociateDDoSEipLoadBalancer(const Model::AssociateDDoSEipLoadBalancerRequest &request);
                void AssociateDDoSEipLoadBalancerAsync(const Model::AssociateDDoSEipLoadBalancerRequest& request, const AssociateDDoSEipLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDDoSEipLoadBalancerOutcomeCallable AssociateDDoSEipLoadBalancerCallable(const Model::AssociateDDoSEipLoadBalancerRequest& request);

                /**
                 *添加DDoS防护的IP黑白名单
                 * @param req CreateBlackWhiteIpListRequest
                 * @return CreateBlackWhiteIpListOutcome
                 */
                CreateBlackWhiteIpListOutcome CreateBlackWhiteIpList(const Model::CreateBlackWhiteIpListRequest &request);
                void CreateBlackWhiteIpListAsync(const Model::CreateBlackWhiteIpListRequest& request, const CreateBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlackWhiteIpListOutcomeCallable CreateBlackWhiteIpListCallable(const Model::CreateBlackWhiteIpListRequest& request);

                /**
                 *绑定IP到高防包实例，支持独享包、共享包（新版）；需要注意的是此接口绑定或解绑IP是异步接口，当处于绑定或解绑中时，则不允许再进行绑定或解绑，需要等待当前绑定或解绑完成。
                 * @param req CreateBoundIPRequest
                 * @return CreateBoundIPOutcome
                 */
                CreateBoundIPOutcome CreateBoundIP(const Model::CreateBoundIPRequest &request);
                void CreateBoundIPAsync(const Model::CreateBoundIPRequest& request, const CreateBoundIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBoundIPOutcomeCallable CreateBoundIPCallable(const Model::CreateBoundIPRequest& request);

                /**
                 *新增CC精准防护策略
                 * @param req CreateCCPrecisionPolicyRequest
                 * @return CreateCCPrecisionPolicyOutcome
                 */
                CreateCCPrecisionPolicyOutcome CreateCCPrecisionPolicy(const Model::CreateCCPrecisionPolicyRequest &request);
                void CreateCCPrecisionPolicyAsync(const Model::CreateCCPrecisionPolicyRequest& request, const CreateCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCPrecisionPolicyOutcomeCallable CreateCCPrecisionPolicyCallable(const Model::CreateCCPrecisionPolicyRequest& request);

                /**
                 *新增CC频率限制策略
                 * @param req CreateCCReqLimitPolicyRequest
                 * @return CreateCCReqLimitPolicyOutcome
                 */
                CreateCCReqLimitPolicyOutcome CreateCCReqLimitPolicy(const Model::CreateCCReqLimitPolicyRequest &request);
                void CreateCCReqLimitPolicyAsync(const Model::CreateCCReqLimitPolicyRequest& request, const CreateCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCReqLimitPolicyOutcomeCallable CreateCCReqLimitPolicyCallable(const Model::CreateCCReqLimitPolicyRequest& request);

                /**
                 *新建CC四层黑白名单
                 * @param req CreateCcBlackWhiteIpListRequest
                 * @return CreateCcBlackWhiteIpListOutcome
                 */
                CreateCcBlackWhiteIpListOutcome CreateCcBlackWhiteIpList(const Model::CreateCcBlackWhiteIpListRequest &request);
                void CreateCcBlackWhiteIpListAsync(const Model::CreateCcBlackWhiteIpListRequest& request, const CreateCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcBlackWhiteIpListOutcomeCallable CreateCcBlackWhiteIpListCallable(const Model::CreateCcBlackWhiteIpListRequest& request);

                /**
                 *新建CC防护的地域封禁配置
                 * @param req CreateCcGeoIPBlockConfigRequest
                 * @return CreateCcGeoIPBlockConfigOutcome
                 */
                CreateCcGeoIPBlockConfigOutcome CreateCcGeoIPBlockConfig(const Model::CreateCcGeoIPBlockConfigRequest &request);
                void CreateCcGeoIPBlockConfigAsync(const Model::CreateCcGeoIPBlockConfigRequest& request, const CreateCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcGeoIPBlockConfigOutcomeCallable CreateCcGeoIPBlockConfigCallable(const Model::CreateCcGeoIPBlockConfigRequest& request);

                /**
                 *设置DDoS防护的AI防护开关
                 * @param req CreateDDoSAIRequest
                 * @return CreateDDoSAIOutcome
                 */
                CreateDDoSAIOutcome CreateDDoSAI(const Model::CreateDDoSAIRequest &request);
                void CreateDDoSAIAsync(const Model::CreateDDoSAIRequest& request, const CreateDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSAIOutcomeCallable CreateDDoSAICallable(const Model::CreateDDoSAIRequest& request);

                /**
                 *添加DDoS防护的IP网段黑白名单
                 * @param req CreateDDoSBlackWhiteIpListRequest
                 * @return CreateDDoSBlackWhiteIpListOutcome
                 */
                CreateDDoSBlackWhiteIpListOutcome CreateDDoSBlackWhiteIpList(const Model::CreateDDoSBlackWhiteIpListRequest &request);
                void CreateDDoSBlackWhiteIpListAsync(const Model::CreateDDoSBlackWhiteIpListRequest& request, const CreateDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSBlackWhiteIpListOutcomeCallable CreateDDoSBlackWhiteIpListCallable(const Model::CreateDDoSBlackWhiteIpListRequest& request);

                /**
                 *配置DDoS连接抑制选项
                 * @param req CreateDDoSConnectLimitRequest
                 * @return CreateDDoSConnectLimitOutcome
                 */
                CreateDDoSConnectLimitOutcome CreateDDoSConnectLimit(const Model::CreateDDoSConnectLimitRequest &request);
                void CreateDDoSConnectLimitAsync(const Model::CreateDDoSConnectLimitRequest& request, const CreateDDoSConnectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSConnectLimitOutcomeCallable CreateDDoSConnectLimitCallable(const Model::CreateDDoSConnectLimitRequest& request);

                /**
                 *添加DDoS防护的区域封禁配置
                 * @param req CreateDDoSGeoIPBlockConfigRequest
                 * @return CreateDDoSGeoIPBlockConfigOutcome
                 */
                CreateDDoSGeoIPBlockConfigOutcome CreateDDoSGeoIPBlockConfig(const Model::CreateDDoSGeoIPBlockConfigRequest &request);
                void CreateDDoSGeoIPBlockConfigAsync(const Model::CreateDDoSGeoIPBlockConfigRequest& request, const CreateDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSGeoIPBlockConfigOutcomeCallable CreateDDoSGeoIPBlockConfigCallable(const Model::CreateDDoSGeoIPBlockConfigRequest& request);

                /**
                 *添加DDoS防护的访问限速配置
                 * @param req CreateDDoSSpeedLimitConfigRequest
                 * @return CreateDDoSSpeedLimitConfigOutcome
                 */
                CreateDDoSSpeedLimitConfigOutcome CreateDDoSSpeedLimitConfig(const Model::CreateDDoSSpeedLimitConfigRequest &request);
                void CreateDDoSSpeedLimitConfigAsync(const Model::CreateDDoSSpeedLimitConfigRequest& request, const CreateDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSSpeedLimitConfigOutcomeCallable CreateDDoSSpeedLimitConfigCallable(const Model::CreateDDoSSpeedLimitConfigRequest& request);

                /**
                 *设置单IP默认告警阈值配置
                 * @param req CreateDefaultAlarmThresholdRequest
                 * @return CreateDefaultAlarmThresholdOutcome
                 */
                CreateDefaultAlarmThresholdOutcome CreateDefaultAlarmThreshold(const Model::CreateDefaultAlarmThresholdRequest &request);
                void CreateDefaultAlarmThresholdAsync(const Model::CreateDefaultAlarmThresholdRequest& request, const CreateDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultAlarmThresholdOutcomeCallable CreateDefaultAlarmThresholdCallable(const Model::CreateDefaultAlarmThresholdRequest& request);

                /**
                 *设置单IP告警阈值配置
                 * @param req CreateIPAlarmThresholdConfigRequest
                 * @return CreateIPAlarmThresholdConfigOutcome
                 */
                CreateIPAlarmThresholdConfigOutcome CreateIPAlarmThresholdConfig(const Model::CreateIPAlarmThresholdConfigRequest &request);
                void CreateIPAlarmThresholdConfigAsync(const Model::CreateIPAlarmThresholdConfigRequest& request, const CreateIPAlarmThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIPAlarmThresholdConfigOutcomeCallable CreateIPAlarmThresholdConfigCallable(const Model::CreateIPAlarmThresholdConfigRequest& request);

                /**
                 *批量配置L7转发规则的证书供SSL测调用
                 * @param req CreateL7RuleCertsRequest
                 * @return CreateL7RuleCertsOutcome
                 */
                CreateL7RuleCertsOutcome CreateL7RuleCerts(const Model::CreateL7RuleCertsRequest &request);
                void CreateL7RuleCertsAsync(const Model::CreateL7RuleCertsRequest& request, const CreateL7RuleCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7RuleCertsOutcomeCallable CreateL7RuleCertsCallable(const Model::CreateL7RuleCertsRequest& request);

                /**
                 *添加7层转发规则
                 * @param req CreateNewL7RulesRequest
                 * @return CreateNewL7RulesOutcome
                 */
                CreateNewL7RulesOutcome CreateNewL7Rules(const Model::CreateNewL7RulesRequest &request);
                void CreateNewL7RulesAsync(const Model::CreateNewL7RulesRequest& request, const CreateNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNewL7RulesOutcomeCallable CreateNewL7RulesCallable(const Model::CreateNewL7RulesRequest& request);

                /**
                 *添加DDoS防护的特征过滤规则
                 * @param req CreatePacketFilterConfigRequest
                 * @return CreatePacketFilterConfigOutcome
                 */
                CreatePacketFilterConfigOutcome CreatePacketFilterConfig(const Model::CreatePacketFilterConfigRequest &request);
                void CreatePacketFilterConfigAsync(const Model::CreatePacketFilterConfigRequest& request, const CreatePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePacketFilterConfigOutcomeCallable CreatePacketFilterConfigCallable(const Model::CreatePacketFilterConfigRequest& request);

                /**
                 *添加DDoS防护的端口acl策略
                 * @param req CreatePortAclConfigRequest
                 * @return CreatePortAclConfigOutcome
                 */
                CreatePortAclConfigOutcome CreatePortAclConfig(const Model::CreatePortAclConfigRequest &request);
                void CreatePortAclConfigAsync(const Model::CreatePortAclConfigRequest& request, const CreatePortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePortAclConfigOutcomeCallable CreatePortAclConfigCallable(const Model::CreatePortAclConfigRequest& request);

                /**
                 *批量添加DDoS防护的端口acl策略
                 * @param req CreatePortAclConfigListRequest
                 * @return CreatePortAclConfigListOutcome
                 */
                CreatePortAclConfigListOutcome CreatePortAclConfigList(const Model::CreatePortAclConfigListRequest &request);
                void CreatePortAclConfigListAsync(const Model::CreatePortAclConfigListRequest& request, const CreatePortAclConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePortAclConfigListOutcomeCallable CreatePortAclConfigListCallable(const Model::CreatePortAclConfigListRequest& request);

                /**
                 *设置DDoS防护的协议封禁配置
                 * @param req CreateProtocolBlockConfigRequest
                 * @return CreateProtocolBlockConfigOutcome
                 */
                CreateProtocolBlockConfigOutcome CreateProtocolBlockConfig(const Model::CreateProtocolBlockConfigRequest &request);
                void CreateProtocolBlockConfigAsync(const Model::CreateProtocolBlockConfigRequest& request, const CreateProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProtocolBlockConfigOutcomeCallable CreateProtocolBlockConfigCallable(const Model::CreateProtocolBlockConfigRequest& request);

                /**
                 *创建一个域名，可用于在封堵时调度切换IP
                 * @param req CreateSchedulingDomainRequest
                 * @return CreateSchedulingDomainOutcome
                 */
                CreateSchedulingDomainOutcome CreateSchedulingDomain(const Model::CreateSchedulingDomainRequest &request);
                void CreateSchedulingDomainAsync(const Model::CreateSchedulingDomainRequest& request, const CreateSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchedulingDomainOutcomeCallable CreateSchedulingDomainCallable(const Model::CreateSchedulingDomainRequest& request);

                /**
                 *添加DDoS防护的水印防护配置
                 * @param req CreateWaterPrintConfigRequest
                 * @return CreateWaterPrintConfigOutcome
                 */
                CreateWaterPrintConfigOutcome CreateWaterPrintConfig(const Model::CreateWaterPrintConfigRequest &request);
                void CreateWaterPrintConfigAsync(const Model::CreateWaterPrintConfigRequest& request, const CreateWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWaterPrintConfigOutcomeCallable CreateWaterPrintConfigCallable(const Model::CreateWaterPrintConfigRequest& request);

                /**
                 *添加DDoS防护的水印防护密钥
                 * @param req CreateWaterPrintKeyRequest
                 * @return CreateWaterPrintKeyOutcome
                 */
                CreateWaterPrintKeyOutcome CreateWaterPrintKey(const Model::CreateWaterPrintKeyRequest &request);
                void CreateWaterPrintKeyAsync(const Model::CreateWaterPrintKeyRequest& request, const CreateWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWaterPrintKeyOutcomeCallable CreateWaterPrintKeyCallable(const Model::CreateWaterPrintKeyRequest& request);

                /**
                 *删除CC分级策略
                 * @param req DeleteCCLevelPolicyRequest
                 * @return DeleteCCLevelPolicyOutcome
                 */
                DeleteCCLevelPolicyOutcome DeleteCCLevelPolicy(const Model::DeleteCCLevelPolicyRequest &request);
                void DeleteCCLevelPolicyAsync(const Model::DeleteCCLevelPolicyRequest& request, const DeleteCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCLevelPolicyOutcomeCallable DeleteCCLevelPolicyCallable(const Model::DeleteCCLevelPolicyRequest& request);

                /**
                 *删除CC精准防护策略
                 * @param req DeleteCCPrecisionPolicyRequest
                 * @return DeleteCCPrecisionPolicyOutcome
                 */
                DeleteCCPrecisionPolicyOutcome DeleteCCPrecisionPolicy(const Model::DeleteCCPrecisionPolicyRequest &request);
                void DeleteCCPrecisionPolicyAsync(const Model::DeleteCCPrecisionPolicyRequest& request, const DeleteCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCPrecisionPolicyOutcomeCallable DeleteCCPrecisionPolicyCallable(const Model::DeleteCCPrecisionPolicyRequest& request);

                /**
                 *删除CC频率限制策略
                 * @param req DeleteCCRequestLimitPolicyRequest
                 * @return DeleteCCRequestLimitPolicyOutcome
                 */
                DeleteCCRequestLimitPolicyOutcome DeleteCCRequestLimitPolicy(const Model::DeleteCCRequestLimitPolicyRequest &request);
                void DeleteCCRequestLimitPolicyAsync(const Model::DeleteCCRequestLimitPolicyRequest& request, const DeleteCCRequestLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCRequestLimitPolicyOutcomeCallable DeleteCCRequestLimitPolicyCallable(const Model::DeleteCCRequestLimitPolicyRequest& request);

                /**
                 *删除CC清洗阈值策略
                 * @param req DeleteCCThresholdPolicyRequest
                 * @return DeleteCCThresholdPolicyOutcome
                 */
                DeleteCCThresholdPolicyOutcome DeleteCCThresholdPolicy(const Model::DeleteCCThresholdPolicyRequest &request);
                void DeleteCCThresholdPolicyAsync(const Model::DeleteCCThresholdPolicyRequest& request, const DeleteCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCThresholdPolicyOutcomeCallable DeleteCCThresholdPolicyCallable(const Model::DeleteCCThresholdPolicyRequest& request);

                /**
                 *删除CC四层黑白名单
                 * @param req DeleteCcBlackWhiteIpListRequest
                 * @return DeleteCcBlackWhiteIpListOutcome
                 */
                DeleteCcBlackWhiteIpListOutcome DeleteCcBlackWhiteIpList(const Model::DeleteCcBlackWhiteIpListRequest &request);
                void DeleteCcBlackWhiteIpListAsync(const Model::DeleteCcBlackWhiteIpListRequest& request, const DeleteCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcBlackWhiteIpListOutcomeCallable DeleteCcBlackWhiteIpListCallable(const Model::DeleteCcBlackWhiteIpListRequest& request);

                /**
                 *删除CC防护的区域封禁配置
                 * @param req DeleteCcGeoIPBlockConfigRequest
                 * @return DeleteCcGeoIPBlockConfigOutcome
                 */
                DeleteCcGeoIPBlockConfigOutcome DeleteCcGeoIPBlockConfig(const Model::DeleteCcGeoIPBlockConfigRequest &request);
                void DeleteCcGeoIPBlockConfigAsync(const Model::DeleteCcGeoIPBlockConfigRequest& request, const DeleteCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcGeoIPBlockConfigOutcomeCallable DeleteCcGeoIPBlockConfigCallable(const Model::DeleteCcGeoIPBlockConfigRequest& request);

                /**
                 *删除DDoS防护的IP网段黑白名单
                 * @param req DeleteDDoSBlackWhiteIpListRequest
                 * @return DeleteDDoSBlackWhiteIpListOutcome
                 */
                DeleteDDoSBlackWhiteIpListOutcome DeleteDDoSBlackWhiteIpList(const Model::DeleteDDoSBlackWhiteIpListRequest &request);
                void DeleteDDoSBlackWhiteIpListAsync(const Model::DeleteDDoSBlackWhiteIpListRequest& request, const DeleteDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSBlackWhiteIpListOutcomeCallable DeleteDDoSBlackWhiteIpListCallable(const Model::DeleteDDoSBlackWhiteIpListRequest& request);

                /**
                 *删除DDoS防护的区域封禁配置
                 * @param req DeleteDDoSGeoIPBlockConfigRequest
                 * @return DeleteDDoSGeoIPBlockConfigOutcome
                 */
                DeleteDDoSGeoIPBlockConfigOutcome DeleteDDoSGeoIPBlockConfig(const Model::DeleteDDoSGeoIPBlockConfigRequest &request);
                void DeleteDDoSGeoIPBlockConfigAsync(const Model::DeleteDDoSGeoIPBlockConfigRequest& request, const DeleteDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSGeoIPBlockConfigOutcomeCallable DeleteDDoSGeoIPBlockConfigCallable(const Model::DeleteDDoSGeoIPBlockConfigRequest& request);

                /**
                 *删除DDoS防护的访问限速配置
                 * @param req DeleteDDoSSpeedLimitConfigRequest
                 * @return DeleteDDoSSpeedLimitConfigOutcome
                 */
                DeleteDDoSSpeedLimitConfigOutcome DeleteDDoSSpeedLimitConfig(const Model::DeleteDDoSSpeedLimitConfigRequest &request);
                void DeleteDDoSSpeedLimitConfigAsync(const Model::DeleteDDoSSpeedLimitConfigRequest& request, const DeleteDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSSpeedLimitConfigOutcomeCallable DeleteDDoSSpeedLimitConfigCallable(const Model::DeleteDDoSSpeedLimitConfigRequest& request);

                /**
                 *删除DDoS防护的特征过滤规则
                 * @param req DeletePacketFilterConfigRequest
                 * @return DeletePacketFilterConfigOutcome
                 */
                DeletePacketFilterConfigOutcome DeletePacketFilterConfig(const Model::DeletePacketFilterConfigRequest &request);
                void DeletePacketFilterConfigAsync(const Model::DeletePacketFilterConfigRequest& request, const DeletePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePacketFilterConfigOutcomeCallable DeletePacketFilterConfigCallable(const Model::DeletePacketFilterConfigRequest& request);

                /**
                 *删除DDoS防护的端口acl策略
                 * @param req DeletePortAclConfigRequest
                 * @return DeletePortAclConfigOutcome
                 */
                DeletePortAclConfigOutcome DeletePortAclConfig(const Model::DeletePortAclConfigRequest &request);
                void DeletePortAclConfigAsync(const Model::DeletePortAclConfigRequest& request, const DeletePortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePortAclConfigOutcomeCallable DeletePortAclConfigCallable(const Model::DeletePortAclConfigRequest& request);

                /**
                 *删除DDoS防护的水印防护配置
                 * @param req DeleteWaterPrintConfigRequest
                 * @return DeleteWaterPrintConfigOutcome
                 */
                DeleteWaterPrintConfigOutcome DeleteWaterPrintConfig(const Model::DeleteWaterPrintConfigRequest &request);
                void DeleteWaterPrintConfigAsync(const Model::DeleteWaterPrintConfigRequest& request, const DeleteWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWaterPrintConfigOutcomeCallable DeleteWaterPrintConfigCallable(const Model::DeleteWaterPrintConfigRequest& request);

                /**
                 *删除DDoS防护的水印防护密钥
                 * @param req DeleteWaterPrintKeyRequest
                 * @return DeleteWaterPrintKeyOutcome
                 */
                DeleteWaterPrintKeyOutcome DeleteWaterPrintKey(const Model::DeleteWaterPrintKeyRequest &request);
                void DeleteWaterPrintKeyAsync(const Model::DeleteWaterPrintKeyRequest& request, const DeleteWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWaterPrintKeyOutcomeCallable DeleteWaterPrintKeyCallable(const Model::DeleteWaterPrintKeyRequest& request);

                /**
                 *高防IP获取7层规则
                 * @param req DescribeBGPIPL7RulesRequest
                 * @return DescribeBGPIPL7RulesOutcome
                 */
                DescribeBGPIPL7RulesOutcome DescribeBGPIPL7Rules(const Model::DescribeBGPIPL7RulesRequest &request);
                void DescribeBGPIPL7RulesAsync(const Model::DescribeBGPIPL7RulesRequest& request, const DescribeBGPIPL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBGPIPL7RulesOutcomeCallable DescribeBGPIPL7RulesCallable(const Model::DescribeBGPIPL7RulesRequest& request);

                /**
                 *获取基础防护攻击状态
                 * @param req DescribeBasicDeviceStatusRequest
                 * @return DescribeBasicDeviceStatusOutcome
                 */
                DescribeBasicDeviceStatusOutcome DescribeBasicDeviceStatus(const Model::DescribeBasicDeviceStatusRequest &request);
                void DescribeBasicDeviceStatusAsync(const Model::DescribeBasicDeviceStatusRequest& request, const DescribeBasicDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicDeviceStatusOutcomeCallable DescribeBasicDeviceStatusCallable(const Model::DescribeBasicDeviceStatusRequest& request);

                /**
                 *获取高防包流量折线图
                 * @param req DescribeBgpBizTrendRequest
                 * @return DescribeBgpBizTrendOutcome
                 */
                DescribeBgpBizTrendOutcome DescribeBgpBizTrend(const Model::DescribeBgpBizTrendRequest &request);
                void DescribeBgpBizTrendAsync(const Model::DescribeBgpBizTrendRequest& request, const DescribeBgpBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBgpBizTrendOutcomeCallable DescribeBgpBizTrendCallable(const Model::DescribeBgpBizTrendRequest& request);

                /**
                 *获取业务流量状态码统计列表
                 * @param req DescribeBizHttpStatusRequest
                 * @return DescribeBizHttpStatusOutcome
                 */
                DescribeBizHttpStatusOutcome DescribeBizHttpStatus(const Model::DescribeBizHttpStatusRequest &request);
                void DescribeBizHttpStatusAsync(const Model::DescribeBizHttpStatusRequest& request, const DescribeBizHttpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizHttpStatusOutcomeCallable DescribeBizHttpStatusCallable(const Model::DescribeBizHttpStatusRequest& request);

                /**
                 *获取高防IP业务监控流量曲线
                 * @param req DescribeBizMonitorTrendRequest
                 * @return DescribeBizMonitorTrendOutcome
                 */
                DescribeBizMonitorTrendOutcome DescribeBizMonitorTrend(const Model::DescribeBizMonitorTrendRequest &request);
                void DescribeBizMonitorTrendAsync(const Model::DescribeBizMonitorTrendRequest& request, const DescribeBizMonitorTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizMonitorTrendOutcomeCallable DescribeBizMonitorTrendCallable(const Model::DescribeBizMonitorTrendRequest& request);

                /**
                 *获取业务流量曲线
                 * @param req DescribeBizTrendRequest
                 * @return DescribeBizTrendOutcome
                 */
                DescribeBizTrendOutcome DescribeBizTrend(const Model::DescribeBizTrendRequest &request);
                void DescribeBizTrendAsync(const Model::DescribeBizTrendRequest& request, const DescribeBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizTrendOutcomeCallable DescribeBizTrendCallable(const Model::DescribeBizTrendRequest& request);

                /**
                 *获取边界防护CC防护等级列表
                 * @param req DescribeCCLevelListRequest
                 * @return DescribeCCLevelListOutcome
                 */
                DescribeCCLevelListOutcome DescribeCCLevelList(const Model::DescribeCCLevelListRequest &request);
                void DescribeCCLevelListAsync(const Model::DescribeCCLevelListRequest& request, const DescribeCCLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCLevelListOutcomeCallable DescribeCCLevelListCallable(const Model::DescribeCCLevelListRequest& request);

                /**
                 *获取CC分级策略
                 * @param req DescribeCCLevelPolicyRequest
                 * @return DescribeCCLevelPolicyOutcome
                 */
                DescribeCCLevelPolicyOutcome DescribeCCLevelPolicy(const Model::DescribeCCLevelPolicyRequest &request);
                void DescribeCCLevelPolicyAsync(const Model::DescribeCCLevelPolicyRequest& request, const DescribeCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCLevelPolicyOutcomeCallable DescribeCCLevelPolicyCallable(const Model::DescribeCCLevelPolicyRequest& request);

                /**
                 *获取CC精准防护列表
                 * @param req DescribeCCPrecisionPlyListRequest
                 * @return DescribeCCPrecisionPlyListOutcome
                 */
                DescribeCCPrecisionPlyListOutcome DescribeCCPrecisionPlyList(const Model::DescribeCCPrecisionPlyListRequest &request);
                void DescribeCCPrecisionPlyListAsync(const Model::DescribeCCPrecisionPlyListRequest& request, const DescribeCCPrecisionPlyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCPrecisionPlyListOutcomeCallable DescribeCCPrecisionPlyListCallable(const Model::DescribeCCPrecisionPlyListRequest& request);

                /**
                 *获取CC频率限制策略列表
                 * @param req DescribeCCReqLimitPolicyListRequest
                 * @return DescribeCCReqLimitPolicyListOutcome
                 */
                DescribeCCReqLimitPolicyListOutcome DescribeCCReqLimitPolicyList(const Model::DescribeCCReqLimitPolicyListRequest &request);
                void DescribeCCReqLimitPolicyListAsync(const Model::DescribeCCReqLimitPolicyListRequest& request, const DescribeCCReqLimitPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCReqLimitPolicyListOutcomeCallable DescribeCCReqLimitPolicyListCallable(const Model::DescribeCCReqLimitPolicyListRequest& request);

                /**
                 *获取CC清洗阈值列表
                 * @param req DescribeCCThresholdListRequest
                 * @return DescribeCCThresholdListOutcome
                 */
                DescribeCCThresholdListOutcome DescribeCCThresholdList(const Model::DescribeCCThresholdListRequest &request);
                void DescribeCCThresholdListAsync(const Model::DescribeCCThresholdListRequest& request, const DescribeCCThresholdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCThresholdListOutcomeCallable DescribeCCThresholdListCallable(const Model::DescribeCCThresholdListRequest& request);

                /**
                 *获取CC攻击指标数据，包括总请求峰值(QPS)和攻击请求(QPS)以及总请求次数和攻击请求次数
                 * @param req DescribeCCTrendRequest
                 * @return DescribeCCTrendOutcome
                 */
                DescribeCCTrendOutcome DescribeCCTrend(const Model::DescribeCCTrendRequest &request);
                void DescribeCCTrendAsync(const Model::DescribeCCTrendRequest& request, const DescribeCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCTrendOutcomeCallable DescribeCCTrendCallable(const Model::DescribeCCTrendRequest& request);

                /**
                 *获取CC四层黑白名单列表
                 * @param req DescribeCcBlackWhiteIpListRequest
                 * @return DescribeCcBlackWhiteIpListOutcome
                 */
                DescribeCcBlackWhiteIpListOutcome DescribeCcBlackWhiteIpList(const Model::DescribeCcBlackWhiteIpListRequest &request);
                void DescribeCcBlackWhiteIpListAsync(const Model::DescribeCcBlackWhiteIpListRequest& request, const DescribeCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcBlackWhiteIpListOutcomeCallable DescribeCcBlackWhiteIpListCallable(const Model::DescribeCcBlackWhiteIpListRequest& request);

                /**
                 *获取CC防护的区域封禁配置列表
                 * @param req DescribeCcGeoIPBlockConfigListRequest
                 * @return DescribeCcGeoIPBlockConfigListOutcome
                 */
                DescribeCcGeoIPBlockConfigListOutcome DescribeCcGeoIPBlockConfigList(const Model::DescribeCcGeoIPBlockConfigListRequest &request);
                void DescribeCcGeoIPBlockConfigListAsync(const Model::DescribeCcGeoIPBlockConfigListRequest& request, const DescribeCcGeoIPBlockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcGeoIPBlockConfigListOutcomeCallable DescribeCcGeoIPBlockConfigListCallable(const Model::DescribeCcGeoIPBlockConfigListRequest& request);

                /**
                 *获取DDoS防护的IP网段黑白名单
                 * @param req DescribeDDoSBlackWhiteIpListRequest
                 * @return DescribeDDoSBlackWhiteIpListOutcome
                 */
                DescribeDDoSBlackWhiteIpListOutcome DescribeDDoSBlackWhiteIpList(const Model::DescribeDDoSBlackWhiteIpListRequest &request);
                void DescribeDDoSBlackWhiteIpListAsync(const Model::DescribeDDoSBlackWhiteIpListRequest& request, const DescribeDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSBlackWhiteIpListOutcomeCallable DescribeDDoSBlackWhiteIpListCallable(const Model::DescribeDDoSBlackWhiteIpListRequest& request);

                /**
                 *获取DDoS连接抑制配置列表
                 * @param req DescribeDDoSConnectLimitListRequest
                 * @return DescribeDDoSConnectLimitListOutcome
                 */
                DescribeDDoSConnectLimitListOutcome DescribeDDoSConnectLimitList(const Model::DescribeDDoSConnectLimitListRequest &request);
                void DescribeDDoSConnectLimitListAsync(const Model::DescribeDDoSConnectLimitListRequest& request, const DescribeDDoSConnectLimitListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSConnectLimitListOutcomeCallable DescribeDDoSConnectLimitListCallable(const Model::DescribeDDoSConnectLimitListRequest& request);

                /**
                 *获取DDoS攻击流量带宽和攻击包速率数据
                 * @param req DescribeDDoSTrendRequest
                 * @return DescribeDDoSTrendOutcome
                 */
                DescribeDDoSTrendOutcome DescribeDDoSTrend(const Model::DescribeDDoSTrendRequest &request);
                void DescribeDDoSTrendAsync(const Model::DescribeDDoSTrendRequest& request, const DescribeDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSTrendOutcomeCallable DescribeDDoSTrendCallable(const Model::DescribeDDoSTrendRequest& request);

                /**
                 *获取单IP默认告警阈值配置
                 * @param req DescribeDefaultAlarmThresholdRequest
                 * @return DescribeDefaultAlarmThresholdOutcome
                 */
                DescribeDefaultAlarmThresholdOutcome DescribeDefaultAlarmThreshold(const Model::DescribeDefaultAlarmThresholdRequest &request);
                void DescribeDefaultAlarmThresholdAsync(const Model::DescribeDefaultAlarmThresholdRequest& request, const DescribeDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultAlarmThresholdOutcomeCallable DescribeDefaultAlarmThresholdCallable(const Model::DescribeDefaultAlarmThresholdRequest& request);

                /**
                 *获取IP封堵列表
                 * @param req DescribeIpBlockListRequest
                 * @return DescribeIpBlockListOutcome
                 */
                DescribeIpBlockListOutcome DescribeIpBlockList(const Model::DescribeIpBlockListRequest &request);
                void DescribeIpBlockListAsync(const Model::DescribeIpBlockListRequest& request, const DescribeIpBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpBlockListOutcomeCallable DescribeIpBlockListCallable(const Model::DescribeIpBlockListRequest& request);

                /**
                 *查询与证书ID对于域名匹配的七层规则
                 * @param req DescribeL7RulesBySSLCertIdRequest
                 * @return DescribeL7RulesBySSLCertIdOutcome
                 */
                DescribeL7RulesBySSLCertIdOutcome DescribeL7RulesBySSLCertId(const Model::DescribeL7RulesBySSLCertIdRequest &request);
                void DescribeL7RulesBySSLCertIdAsync(const Model::DescribeL7RulesBySSLCertIdRequest& request, const DescribeL7RulesBySSLCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7RulesBySSLCertIdOutcomeCallable DescribeL7RulesBySSLCertIdCallable(const Model::DescribeL7RulesBySSLCertIdRequest& request);

                /**
                 *获取高防IP资产实例列表
                 * @param req DescribeListBGPIPInstancesRequest
                 * @return DescribeListBGPIPInstancesOutcome
                 */
                DescribeListBGPIPInstancesOutcome DescribeListBGPIPInstances(const Model::DescribeListBGPIPInstancesRequest &request);
                void DescribeListBGPIPInstancesAsync(const Model::DescribeListBGPIPInstancesRequest& request, const DescribeListBGPIPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBGPIPInstancesOutcomeCallable DescribeListBGPIPInstancesCallable(const Model::DescribeListBGPIPInstancesRequest& request);

                /**
                 *获取高防包资产实例列表
                 * @param req DescribeListBGPInstancesRequest
                 * @return DescribeListBGPInstancesOutcome
                 */
                DescribeListBGPInstancesOutcome DescribeListBGPInstances(const Model::DescribeListBGPInstancesRequest &request);
                void DescribeListBGPInstancesAsync(const Model::DescribeListBGPInstancesRequest& request, const DescribeListBGPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBGPInstancesOutcomeCallable DescribeListBGPInstancesCallable(const Model::DescribeListBGPInstancesRequest& request);

                /**
                 *获取DDoS防护的IP黑白名单列表
                 * @param req DescribeListBlackWhiteIpListRequest
                 * @return DescribeListBlackWhiteIpListOutcome
                 */
                DescribeListBlackWhiteIpListOutcome DescribeListBlackWhiteIpList(const Model::DescribeListBlackWhiteIpListRequest &request);
                void DescribeListBlackWhiteIpListAsync(const Model::DescribeListBlackWhiteIpListRequest& request, const DescribeListBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBlackWhiteIpListOutcomeCallable DescribeListBlackWhiteIpListCallable(const Model::DescribeListBlackWhiteIpListRequest& request);

                /**
                 *获取DDoS防护的AI防护开关列表
                 * @param req DescribeListDDoSAIRequest
                 * @return DescribeListDDoSAIOutcome
                 */
                DescribeListDDoSAIOutcome DescribeListDDoSAI(const Model::DescribeListDDoSAIRequest &request);
                void DescribeListDDoSAIAsync(const Model::DescribeListDDoSAIRequest& request, const DescribeListDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSAIOutcomeCallable DescribeListDDoSAICallable(const Model::DescribeListDDoSAIRequest& request);

                /**
                 *获取DDoS防护的区域封禁配置列表
                 * @param req DescribeListDDoSGeoIPBlockConfigRequest
                 * @return DescribeListDDoSGeoIPBlockConfigOutcome
                 */
                DescribeListDDoSGeoIPBlockConfigOutcome DescribeListDDoSGeoIPBlockConfig(const Model::DescribeListDDoSGeoIPBlockConfigRequest &request);
                void DescribeListDDoSGeoIPBlockConfigAsync(const Model::DescribeListDDoSGeoIPBlockConfigRequest& request, const DescribeListDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSGeoIPBlockConfigOutcomeCallable DescribeListDDoSGeoIPBlockConfigCallable(const Model::DescribeListDDoSGeoIPBlockConfigRequest& request);

                /**
                 *获取DDoS防护的访问限速配置列表
                 * @param req DescribeListDDoSSpeedLimitConfigRequest
                 * @return DescribeListDDoSSpeedLimitConfigOutcome
                 */
                DescribeListDDoSSpeedLimitConfigOutcome DescribeListDDoSSpeedLimitConfig(const Model::DescribeListDDoSSpeedLimitConfigRequest &request);
                void DescribeListDDoSSpeedLimitConfigAsync(const Model::DescribeListDDoSSpeedLimitConfigRequest& request, const DescribeListDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSSpeedLimitConfigOutcomeCallable DescribeListDDoSSpeedLimitConfigCallable(const Model::DescribeListDDoSSpeedLimitConfigRequest& request);

                /**
                 *获取单IP告警阈值配置列表
                 * @param req DescribeListIPAlarmConfigRequest
                 * @return DescribeListIPAlarmConfigOutcome
                 */
                DescribeListIPAlarmConfigOutcome DescribeListIPAlarmConfig(const Model::DescribeListIPAlarmConfigRequest &request);
                void DescribeListIPAlarmConfigAsync(const Model::DescribeListIPAlarmConfigRequest& request, const DescribeListIPAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListIPAlarmConfigOutcomeCallable DescribeListIPAlarmConfigCallable(const Model::DescribeListIPAlarmConfigRequest& request);

                /**
                 *获取转发监听器列表
                 * @param req DescribeListListenerRequest
                 * @return DescribeListListenerOutcome
                 */
                DescribeListListenerOutcome DescribeListListener(const Model::DescribeListListenerRequest &request);
                void DescribeListListenerAsync(const Model::DescribeListListenerRequest& request, const DescribeListListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListListenerOutcomeCallable DescribeListListenerCallable(const Model::DescribeListListenerRequest& request);

                /**
                 *获取DDoS防护的特征过滤规则列表
                 * @param req DescribeListPacketFilterConfigRequest
                 * @return DescribeListPacketFilterConfigOutcome
                 */
                DescribeListPacketFilterConfigOutcome DescribeListPacketFilterConfig(const Model::DescribeListPacketFilterConfigRequest &request);
                void DescribeListPacketFilterConfigAsync(const Model::DescribeListPacketFilterConfigRequest& request, const DescribeListPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListPacketFilterConfigOutcomeCallable DescribeListPacketFilterConfigCallable(const Model::DescribeListPacketFilterConfigRequest& request);

                /**
                 *获取DDoS防护的端口acl策略列表
                 * @param req DescribeListPortAclListRequest
                 * @return DescribeListPortAclListOutcome
                 */
                DescribeListPortAclListOutcome DescribeListPortAclList(const Model::DescribeListPortAclListRequest &request);
                void DescribeListPortAclListAsync(const Model::DescribeListPortAclListRequest& request, const DescribeListPortAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListPortAclListOutcomeCallable DescribeListPortAclListCallable(const Model::DescribeListPortAclListRequest& request);

                /**
                 *获取DDoS防护的协议封禁配置列表
                 * @param req DescribeListProtocolBlockConfigRequest
                 * @return DescribeListProtocolBlockConfigOutcome
                 */
                DescribeListProtocolBlockConfigOutcome DescribeListProtocolBlockConfig(const Model::DescribeListProtocolBlockConfigRequest &request);
                void DescribeListProtocolBlockConfigAsync(const Model::DescribeListProtocolBlockConfigRequest& request, const DescribeListProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListProtocolBlockConfigOutcomeCallable DescribeListProtocolBlockConfigCallable(const Model::DescribeListProtocolBlockConfigRequest& request);

                /**
                 *获取智能调度域名列表
                 * @param req DescribeListSchedulingDomainRequest
                 * @return DescribeListSchedulingDomainOutcome
                 */
                DescribeListSchedulingDomainOutcome DescribeListSchedulingDomain(const Model::DescribeListSchedulingDomainRequest &request);
                void DescribeListSchedulingDomainAsync(const Model::DescribeListSchedulingDomainRequest& request, const DescribeListSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListSchedulingDomainOutcomeCallable DescribeListSchedulingDomainCallable(const Model::DescribeListSchedulingDomainRequest& request);

                /**
                 *获取DDoS防护的水印防护配置列表
                 * @param req DescribeListWaterPrintConfigRequest
                 * @return DescribeListWaterPrintConfigOutcome
                 */
                DescribeListWaterPrintConfigOutcome DescribeListWaterPrintConfig(const Model::DescribeListWaterPrintConfigRequest &request);
                void DescribeListWaterPrintConfigAsync(const Model::DescribeListWaterPrintConfigRequest& request, const DescribeListWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListWaterPrintConfigOutcomeCallable DescribeListWaterPrintConfigCallable(const Model::DescribeListWaterPrintConfigRequest& request);

                /**
                 *高防IP获取7层规则
                 * @param req DescribeNewL7RulesRequest
                 * @return DescribeNewL7RulesOutcome
                 */
                DescribeNewL7RulesOutcome DescribeNewL7Rules(const Model::DescribeNewL7RulesRequest &request);
                void DescribeNewL7RulesAsync(const Model::DescribeNewL7RulesRequest& request, const DescribeNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL7RulesOutcomeCallable DescribeNewL7RulesCallable(const Model::DescribeNewL7RulesRequest& request);

                /**
                 *获取L7转发规则健康检查异常结果列表
                 * @param req DescribeNewL7RulesErrHealthRequest
                 * @return DescribeNewL7RulesErrHealthOutcome
                 */
                DescribeNewL7RulesErrHealthOutcome DescribeNewL7RulesErrHealth(const Model::DescribeNewL7RulesErrHealthRequest &request);
                void DescribeNewL7RulesErrHealthAsync(const Model::DescribeNewL7RulesErrHealthRequest& request, const DescribeNewL7RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL7RulesErrHealthOutcomeCallable DescribeNewL7RulesErrHealthCallable(const Model::DescribeNewL7RulesErrHealthRequest& request);

                /**
                 *拉取防护概览攻击趋势
                 * @param req DescribeOverviewAttackTrendRequest
                 * @return DescribeOverviewAttackTrendOutcome
                 */
                DescribeOverviewAttackTrendOutcome DescribeOverviewAttackTrend(const Model::DescribeOverviewAttackTrendRequest &request);
                void DescribeOverviewAttackTrendAsync(const Model::DescribeOverviewAttackTrendRequest& request, const DescribeOverviewAttackTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewAttackTrendOutcomeCallable DescribeOverviewAttackTrendCallable(const Model::DescribeOverviewAttackTrendRequest& request);

                /**
                 *获取防护概览总请求峰值(QPS)和攻击请求(QPS)以及总请求次数和攻击请求次数
                 * @param req DescribeOverviewCCTrendRequest
                 * @return DescribeOverviewCCTrendOutcome
                 */
                DescribeOverviewCCTrendOutcome DescribeOverviewCCTrend(const Model::DescribeOverviewCCTrendRequest &request);
                void DescribeOverviewCCTrendAsync(const Model::DescribeOverviewCCTrendRequest& request, const DescribeOverviewCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewCCTrendOutcomeCallable DescribeOverviewCCTrendCallable(const Model::DescribeOverviewCCTrendRequest& request);

                /**
                 *获取防护概览的ddos攻击事件
                 * @param req DescribeOverviewDDoSEventListRequest
                 * @return DescribeOverviewDDoSEventListOutcome
                 */
                DescribeOverviewDDoSEventListOutcome DescribeOverviewDDoSEventList(const Model::DescribeOverviewDDoSEventListRequest &request);
                void DescribeOverviewDDoSEventListAsync(const Model::DescribeOverviewDDoSEventListRequest& request, const DescribeOverviewDDoSEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewDDoSEventListOutcomeCallable DescribeOverviewDDoSEventListCallable(const Model::DescribeOverviewDDoSEventListRequest& request);

                /**
                 *获取防护概览DDoS攻击流量带宽和攻击包速率数据
                 * @param req DescribeOverviewDDoSTrendRequest
                 * @return DescribeOverviewDDoSTrendOutcome
                 */
                DescribeOverviewDDoSTrendOutcome DescribeOverviewDDoSTrend(const Model::DescribeOverviewDDoSTrendRequest &request);
                void DescribeOverviewDDoSTrendAsync(const Model::DescribeOverviewDDoSTrendRequest& request, const DescribeOverviewDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewDDoSTrendOutcomeCallable DescribeOverviewDDoSTrendCallable(const Model::DescribeOverviewDDoSTrendRequest& request);

                /**
                 *拉取防护概览指标
                 * @param req DescribeOverviewIndexRequest
                 * @return DescribeOverviewIndexOutcome
                 */
                DescribeOverviewIndexOutcome DescribeOverviewIndex(const Model::DescribeOverviewIndexRequest &request);
                void DescribeOverviewIndexAsync(const Model::DescribeOverviewIndexRequest& request, const DescribeOverviewIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewIndexOutcomeCallable DescribeOverviewIndexCallable(const Model::DescribeOverviewIndexRequest& request);

                /**
                 *查询账号维度待处理风险信息，包括是否为付费用户，查询攻击中、封堵中、过期资源数量等
                 * @param req DescribePendingRiskInfoRequest
                 * @return DescribePendingRiskInfoOutcome
                 */
                DescribePendingRiskInfoOutcome DescribePendingRiskInfo(const Model::DescribePendingRiskInfoRequest &request);
                void DescribePendingRiskInfoAsync(const Model::DescribePendingRiskInfoRequest& request, const DescribePendingRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePendingRiskInfoOutcomeCallable DescribePendingRiskInfoCallable(const Model::DescribePendingRiskInfoRequest& request);

                /**
                 *本接口 (DisassociateDDoSEipAddress) 用于解绑高防弹性公网IP。
                 * @param req DisassociateDDoSEipAddressRequest
                 * @return DisassociateDDoSEipAddressOutcome
                 */
                DisassociateDDoSEipAddressOutcome DisassociateDDoSEipAddress(const Model::DisassociateDDoSEipAddressRequest &request);
                void DisassociateDDoSEipAddressAsync(const Model::DisassociateDDoSEipAddressRequest& request, const DisassociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateDDoSEipAddressOutcomeCallable DisassociateDDoSEipAddressCallable(const Model::DisassociateDDoSEipAddressRequest& request);

                /**
                 *修改CC防护等级
                 * @param req ModifyCCLevelPolicyRequest
                 * @return ModifyCCLevelPolicyOutcome
                 */
                ModifyCCLevelPolicyOutcome ModifyCCLevelPolicy(const Model::ModifyCCLevelPolicyRequest &request);
                void ModifyCCLevelPolicyAsync(const Model::ModifyCCLevelPolicyRequest& request, const ModifyCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCLevelPolicyOutcomeCallable ModifyCCLevelPolicyCallable(const Model::ModifyCCLevelPolicyRequest& request);

                /**
                 *修改CC精准防护策略
                 * @param req ModifyCCPrecisionPolicyRequest
                 * @return ModifyCCPrecisionPolicyOutcome
                 */
                ModifyCCPrecisionPolicyOutcome ModifyCCPrecisionPolicy(const Model::ModifyCCPrecisionPolicyRequest &request);
                void ModifyCCPrecisionPolicyAsync(const Model::ModifyCCPrecisionPolicyRequest& request, const ModifyCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCPrecisionPolicyOutcomeCallable ModifyCCPrecisionPolicyCallable(const Model::ModifyCCPrecisionPolicyRequest& request);

                /**
                 *修改CC频率限制策略
                 * @param req ModifyCCReqLimitPolicyRequest
                 * @return ModifyCCReqLimitPolicyOutcome
                 */
                ModifyCCReqLimitPolicyOutcome ModifyCCReqLimitPolicy(const Model::ModifyCCReqLimitPolicyRequest &request);
                void ModifyCCReqLimitPolicyAsync(const Model::ModifyCCReqLimitPolicyRequest& request, const ModifyCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCReqLimitPolicyOutcomeCallable ModifyCCReqLimitPolicyCallable(const Model::ModifyCCReqLimitPolicyRequest& request);

                /**
                 *修改CC清洗阈值
                 * @param req ModifyCCThresholdPolicyRequest
                 * @return ModifyCCThresholdPolicyOutcome
                 */
                ModifyCCThresholdPolicyOutcome ModifyCCThresholdPolicy(const Model::ModifyCCThresholdPolicyRequest &request);
                void ModifyCCThresholdPolicyAsync(const Model::ModifyCCThresholdPolicyRequest& request, const ModifyCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCThresholdPolicyOutcomeCallable ModifyCCThresholdPolicyCallable(const Model::ModifyCCThresholdPolicyRequest& request);

                /**
                 *修改CC四层黑白名单
                 * @param req ModifyCcBlackWhiteIpListRequest
                 * @return ModifyCcBlackWhiteIpListOutcome
                 */
                ModifyCcBlackWhiteIpListOutcome ModifyCcBlackWhiteIpList(const Model::ModifyCcBlackWhiteIpListRequest &request);
                void ModifyCcBlackWhiteIpListAsync(const Model::ModifyCcBlackWhiteIpListRequest& request, const ModifyCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcBlackWhiteIpListOutcomeCallable ModifyCcBlackWhiteIpListCallable(const Model::ModifyCcBlackWhiteIpListRequest& request);

                /**
                 *修改DDoS黑白名单列表
                 * @param req ModifyDDoSBlackWhiteIpListRequest
                 * @return ModifyDDoSBlackWhiteIpListOutcome
                 */
                ModifyDDoSBlackWhiteIpListOutcome ModifyDDoSBlackWhiteIpList(const Model::ModifyDDoSBlackWhiteIpListRequest &request);
                void ModifyDDoSBlackWhiteIpListAsync(const Model::ModifyDDoSBlackWhiteIpListRequest& request, const ModifyDDoSBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSBlackWhiteIpListOutcomeCallable ModifyDDoSBlackWhiteIpListCallable(const Model::ModifyDDoSBlackWhiteIpListRequest& request);

                /**
                 *修改DDoS防护的区域封禁配置
                 * @param req ModifyDDoSGeoIPBlockConfigRequest
                 * @return ModifyDDoSGeoIPBlockConfigOutcome
                 */
                ModifyDDoSGeoIPBlockConfigOutcome ModifyDDoSGeoIPBlockConfig(const Model::ModifyDDoSGeoIPBlockConfigRequest &request);
                void ModifyDDoSGeoIPBlockConfigAsync(const Model::ModifyDDoSGeoIPBlockConfigRequest& request, const ModifyDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSGeoIPBlockConfigOutcomeCallable ModifyDDoSGeoIPBlockConfigCallable(const Model::ModifyDDoSGeoIPBlockConfigRequest& request);

                /**
                 *读取或修改DDoS的防护等级
                 * @param req ModifyDDoSLevelRequest
                 * @return ModifyDDoSLevelOutcome
                 */
                ModifyDDoSLevelOutcome ModifyDDoSLevel(const Model::ModifyDDoSLevelRequest &request);
                void ModifyDDoSLevelAsync(const Model::ModifyDDoSLevelRequest& request, const ModifyDDoSLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSLevelOutcomeCallable ModifyDDoSLevelCallable(const Model::ModifyDDoSLevelRequest& request);

                /**
                 *修改DDoS防护的访问限速配置
                 * @param req ModifyDDoSSpeedLimitConfigRequest
                 * @return ModifyDDoSSpeedLimitConfigOutcome
                 */
                ModifyDDoSSpeedLimitConfigOutcome ModifyDDoSSpeedLimitConfig(const Model::ModifyDDoSSpeedLimitConfigRequest &request);
                void ModifyDDoSSpeedLimitConfigAsync(const Model::ModifyDDoSSpeedLimitConfigRequest& request, const ModifyDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSSpeedLimitConfigOutcomeCallable ModifyDDoSSpeedLimitConfigCallable(const Model::ModifyDDoSSpeedLimitConfigRequest& request);

                /**
                 *修改DDoS清洗阈值
                 * @param req ModifyDDoSThresholdRequest
                 * @return ModifyDDoSThresholdOutcome
                 */
                ModifyDDoSThresholdOutcome ModifyDDoSThreshold(const Model::ModifyDDoSThresholdRequest &request);
                void ModifyDDoSThresholdAsync(const Model::ModifyDDoSThresholdRequest& request, const ModifyDDoSThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSThresholdOutcomeCallable ModifyDDoSThresholdCallable(const Model::ModifyDDoSThresholdRequest& request);

                /**
                 *修改智能解析域名名称
                 * @param req ModifyDomainUsrNameRequest
                 * @return ModifyDomainUsrNameOutcome
                 */
                ModifyDomainUsrNameOutcome ModifyDomainUsrName(const Model::ModifyDomainUsrNameRequest &request);
                void ModifyDomainUsrNameAsync(const Model::ModifyDomainUsrNameRequest& request, const ModifyDomainUsrNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainUsrNameOutcomeCallable ModifyDomainUsrNameCallable(const Model::ModifyDomainUsrNameRequest& request);

                /**
                 *修改7层转发规则
                 * @param req ModifyNewDomainRulesRequest
                 * @return ModifyNewDomainRulesOutcome
                 */
                ModifyNewDomainRulesOutcome ModifyNewDomainRules(const Model::ModifyNewDomainRulesRequest &request);
                void ModifyNewDomainRulesAsync(const Model::ModifyNewDomainRulesRequest& request, const ModifyNewDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNewDomainRulesOutcomeCallable ModifyNewDomainRulesCallable(const Model::ModifyNewDomainRulesRequest& request);

                /**
                 *修改DDoS防护的特征过滤规则
                 * @param req ModifyPacketFilterConfigRequest
                 * @return ModifyPacketFilterConfigOutcome
                 */
                ModifyPacketFilterConfigOutcome ModifyPacketFilterConfig(const Model::ModifyPacketFilterConfigRequest &request);
                void ModifyPacketFilterConfigAsync(const Model::ModifyPacketFilterConfigRequest& request, const ModifyPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPacketFilterConfigOutcomeCallable ModifyPacketFilterConfigCallable(const Model::ModifyPacketFilterConfigRequest& request);

                /**
                 *修改DDoS防护的端口acl策略
                 * @param req ModifyPortAclConfigRequest
                 * @return ModifyPortAclConfigOutcome
                 */
                ModifyPortAclConfigOutcome ModifyPortAclConfig(const Model::ModifyPortAclConfigRequest &request);
                void ModifyPortAclConfigAsync(const Model::ModifyPortAclConfigRequest& request, const ModifyPortAclConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPortAclConfigOutcomeCallable ModifyPortAclConfigCallable(const Model::ModifyPortAclConfigRequest& request);

                /**
                 *开启或关闭DDoS防护的水印防护配置，此功能为付费增值服务，有需求请联系售后
                 * @param req SwitchWaterPrintConfigRequest
                 * @return SwitchWaterPrintConfigOutcome
                 */
                SwitchWaterPrintConfigOutcome SwitchWaterPrintConfig(const Model::SwitchWaterPrintConfigRequest &request);
                void SwitchWaterPrintConfigAsync(const Model::SwitchWaterPrintConfigRequest& request, const SwitchWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchWaterPrintConfigOutcomeCallable SwitchWaterPrintConfigCallable(const Model::SwitchWaterPrintConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_
