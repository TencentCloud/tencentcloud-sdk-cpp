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

#ifndef TENCENTCLOUD_DAYU_V20180709_DAYUCLIENT_H_
#define TENCENTCLOUD_DAYU_V20180709_DAYUCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dayu/v20180709/model/CreateBasicDDoSAlarmThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateBasicDDoSAlarmThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateBoundIPRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateBoundIPResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateCCFrequencyRulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateCCFrequencyRulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateCCSelfDefinePolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateCCSelfDefinePolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateDDoSPolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateDDoSPolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateDDoSPolicyCaseRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateDDoSPolicyCaseResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateInstanceNameRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateInstanceNameResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL4HealthConfigRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL4HealthConfigResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7CCRuleRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7CCRuleResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7HealthConfigRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7HealthConfigResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7RuleCertRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7RuleCertResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7RulesUploadRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateL7RulesUploadResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateNetReturnRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateNetReturnResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateNewL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateNewL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateNewL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateNewL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateNewL7RulesUploadRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateNewL7RulesUploadResponse.h>
#include <tencentcloud/dayu/v20180709/model/CreateUnblockIpRequest.h>
#include <tencentcloud/dayu/v20180709/model/CreateUnblockIpResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteCCFrequencyRulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteCCFrequencyRulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteCCSelfDefinePolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteCCSelfDefinePolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyCaseRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyCaseResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteNewL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteNewL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DeleteNewL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DeleteNewL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeActionLogRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeActionLogResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBGPIPL7RuleMaxCntRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBGPIPL7RuleMaxCntResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBaradDataRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBaradDataResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBasicCCThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBasicCCThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBasicDeviceThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBasicDeviceThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBizHttpStatusRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBizHttpStatusResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBizTrendRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeBizTrendResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCAlarmThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCAlarmThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCEvListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCEvListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCFrequencyRulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCFrequencyRulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCIpAllowDenyRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCIpAllowDenyResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCSelfDefinePolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCSelfDefinePolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCTrendRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCTrendResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCUrlAllowRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeCCUrlAllowResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSAlarmThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSAlarmThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSAttackIPRegionMapRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSAttackIPRegionMapResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSAttackSourceRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSAttackSourceResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSCountRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSCountResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSDefendStatusRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSDefendStatusResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSEvInfoRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSEvInfoResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSEvListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSEvListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSIpLogRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSIpLogResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetCountRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetCountResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvInfoRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvInfoResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetIpLogRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetIpLogResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetTrendRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetTrendResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSPolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSPolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSTrendRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSTrendResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSUsedStatisRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeDDoSUsedStatisResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeIPProductInfoRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeIPProductInfoResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeInsurePacksRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeInsurePacksResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeIpBlockListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeIpBlockListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeIpUnBlockListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeIpUnBlockListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeL4HealthConfigRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeL4HealthConfigResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeL4RulesErrHealthRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeL4RulesErrHealthResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeL7HealthConfigRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeL7HealthConfigResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeNewL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeNewL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeNewL4RulesErrHealthRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeNewL4RulesErrHealthResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeNewL7RulesErrHealthRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeNewL7RulesErrHealthResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribePackIndexRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribePackIndexResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribePcapRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribePcapResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribePolicyCaseRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribePolicyCaseResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeResIpListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeResIpListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeResourceListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeResourceListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeRuleSetsRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeRuleSetsResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeSchedulingDomainListRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeSchedulingDomainListResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeSecIndexRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeSecIndexResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeSourceIpSegmentRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeSourceIpSegmentResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeTransmitStatisRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeTransmitStatisResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribeUnBlockStatisRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribeUnBlockStatisResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribleL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribleL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribleL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribleL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribleNewL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribleNewL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/DescribleRegionCountRequest.h>
#include <tencentcloud/dayu/v20180709/model/DescribleRegionCountResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCAlarmThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCAlarmThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesStatusRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesStatusResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCHostProtectionRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCHostProtectionResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCIpAllowDenyRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCIpAllowDenyResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCLevelRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCLevelResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCPolicySwitchRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCPolicySwitchResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCSelfDefinePolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCSelfDefinePolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCUrlAllowRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyCCUrlAllowResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSAIStatusRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSAIStatusResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSAlarmThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSAlarmThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSDefendStatusRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSDefendStatusResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSLevelRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSLevelResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyCaseRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyCaseResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyNameRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyNameResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSSwitchRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSSwitchResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSThresholdRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSThresholdResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSWaterKeyRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyDDoSWaterKeyResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyElasticLimitRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyElasticLimitResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL4HealthRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL4HealthResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL4KeepTimeRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL4KeepTimeResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL4RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL4RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL7RulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyL7RulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyNetReturnSwitchRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyNetReturnSwitchResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyNewDomainRulesRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyNewDomainRulesResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyNewL4RuleRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyNewL4RuleResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyResBindDDoSPolicyRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyResBindDDoSPolicyResponse.h>
#include <tencentcloud/dayu/v20180709/model/ModifyResourceRenewFlagRequest.h>
#include <tencentcloud/dayu/v20180709/model/ModifyResourceRenewFlagResponse.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            class DayuClient : public AbstractClient
            {
            public:
                DayuClient(const Credential &credential, const std::string &region);
                DayuClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateBasicDDoSAlarmThresholdResponse> CreateBasicDDoSAlarmThresholdOutcome;
                typedef std::future<CreateBasicDDoSAlarmThresholdOutcome> CreateBasicDDoSAlarmThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateBasicDDoSAlarmThresholdRequest&, CreateBasicDDoSAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicDDoSAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBoundIPResponse> CreateBoundIPOutcome;
                typedef std::future<CreateBoundIPOutcome> CreateBoundIPOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateBoundIPRequest&, CreateBoundIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBoundIPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCFrequencyRulesResponse> CreateCCFrequencyRulesOutcome;
                typedef std::future<CreateCCFrequencyRulesOutcome> CreateCCFrequencyRulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateCCFrequencyRulesRequest&, CreateCCFrequencyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCFrequencyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCSelfDefinePolicyResponse> CreateCCSelfDefinePolicyOutcome;
                typedef std::future<CreateCCSelfDefinePolicyOutcome> CreateCCSelfDefinePolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateCCSelfDefinePolicyRequest&, CreateCCSelfDefinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCSelfDefinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSPolicyResponse> CreateDDoSPolicyOutcome;
                typedef std::future<CreateDDoSPolicyOutcome> CreateDDoSPolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateDDoSPolicyRequest&, CreateDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSPolicyCaseResponse> CreateDDoSPolicyCaseOutcome;
                typedef std::future<CreateDDoSPolicyCaseOutcome> CreateDDoSPolicyCaseOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateDDoSPolicyCaseRequest&, CreateDDoSPolicyCaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSPolicyCaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceNameResponse> CreateInstanceNameOutcome;
                typedef std::future<CreateInstanceNameOutcome> CreateInstanceNameOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateInstanceNameRequest&, CreateInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4HealthConfigResponse> CreateL4HealthConfigOutcome;
                typedef std::future<CreateL4HealthConfigOutcome> CreateL4HealthConfigOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL4HealthConfigRequest&, CreateL4HealthConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4HealthConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4RulesResponse> CreateL4RulesOutcome;
                typedef std::future<CreateL4RulesOutcome> CreateL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL4RulesRequest&, CreateL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7CCRuleResponse> CreateL7CCRuleOutcome;
                typedef std::future<CreateL7CCRuleOutcome> CreateL7CCRuleOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL7CCRuleRequest&, CreateL7CCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7CCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7HealthConfigResponse> CreateL7HealthConfigOutcome;
                typedef std::future<CreateL7HealthConfigOutcome> CreateL7HealthConfigOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL7HealthConfigRequest&, CreateL7HealthConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7HealthConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7RuleCertResponse> CreateL7RuleCertOutcome;
                typedef std::future<CreateL7RuleCertOutcome> CreateL7RuleCertOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL7RuleCertRequest&, CreateL7RuleCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7RuleCertAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7RulesResponse> CreateL7RulesOutcome;
                typedef std::future<CreateL7RulesOutcome> CreateL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL7RulesRequest&, CreateL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7RulesUploadResponse> CreateL7RulesUploadOutcome;
                typedef std::future<CreateL7RulesUploadOutcome> CreateL7RulesUploadOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateL7RulesUploadRequest&, CreateL7RulesUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7RulesUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetReturnResponse> CreateNetReturnOutcome;
                typedef std::future<CreateNetReturnOutcome> CreateNetReturnOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateNetReturnRequest&, CreateNetReturnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetReturnAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNewL4RulesResponse> CreateNewL4RulesOutcome;
                typedef std::future<CreateNewL4RulesOutcome> CreateNewL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateNewL4RulesRequest&, CreateNewL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNewL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNewL7RulesResponse> CreateNewL7RulesOutcome;
                typedef std::future<CreateNewL7RulesOutcome> CreateNewL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateNewL7RulesRequest&, CreateNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNewL7RulesUploadResponse> CreateNewL7RulesUploadOutcome;
                typedef std::future<CreateNewL7RulesUploadOutcome> CreateNewL7RulesUploadOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateNewL7RulesUploadRequest&, CreateNewL7RulesUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNewL7RulesUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUnblockIpResponse> CreateUnblockIpOutcome;
                typedef std::future<CreateUnblockIpOutcome> CreateUnblockIpOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::CreateUnblockIpRequest&, CreateUnblockIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUnblockIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCFrequencyRulesResponse> DeleteCCFrequencyRulesOutcome;
                typedef std::future<DeleteCCFrequencyRulesOutcome> DeleteCCFrequencyRulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteCCFrequencyRulesRequest&, DeleteCCFrequencyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCFrequencyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCSelfDefinePolicyResponse> DeleteCCSelfDefinePolicyOutcome;
                typedef std::future<DeleteCCSelfDefinePolicyOutcome> DeleteCCSelfDefinePolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteCCSelfDefinePolicyRequest&, DeleteCCSelfDefinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCSelfDefinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSPolicyResponse> DeleteDDoSPolicyOutcome;
                typedef std::future<DeleteDDoSPolicyOutcome> DeleteDDoSPolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteDDoSPolicyRequest&, DeleteDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSPolicyCaseResponse> DeleteDDoSPolicyCaseOutcome;
                typedef std::future<DeleteDDoSPolicyCaseOutcome> DeleteDDoSPolicyCaseOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteDDoSPolicyCaseRequest&, DeleteDDoSPolicyCaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSPolicyCaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL4RulesResponse> DeleteL4RulesOutcome;
                typedef std::future<DeleteL4RulesOutcome> DeleteL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteL4RulesRequest&, DeleteL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL7RulesResponse> DeleteL7RulesOutcome;
                typedef std::future<DeleteL7RulesOutcome> DeleteL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteL7RulesRequest&, DeleteL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNewL4RulesResponse> DeleteNewL4RulesOutcome;
                typedef std::future<DeleteNewL4RulesOutcome> DeleteNewL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteNewL4RulesRequest&, DeleteNewL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNewL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNewL7RulesResponse> DeleteNewL7RulesOutcome;
                typedef std::future<DeleteNewL7RulesOutcome> DeleteNewL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DeleteNewL7RulesRequest&, DeleteNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActionLogResponse> DescribeActionLogOutcome;
                typedef std::future<DescribeActionLogOutcome> DescribeActionLogOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeActionLogRequest&, DescribeActionLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBGPIPL7RuleMaxCntResponse> DescribeBGPIPL7RuleMaxCntOutcome;
                typedef std::future<DescribeBGPIPL7RuleMaxCntOutcome> DescribeBGPIPL7RuleMaxCntOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeBGPIPL7RuleMaxCntRequest&, DescribeBGPIPL7RuleMaxCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBGPIPL7RuleMaxCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaradDataResponse> DescribeBaradDataOutcome;
                typedef std::future<DescribeBaradDataOutcome> DescribeBaradDataOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeBaradDataRequest&, DescribeBaradDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaradDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicCCThresholdResponse> DescribeBasicCCThresholdOutcome;
                typedef std::future<DescribeBasicCCThresholdOutcome> DescribeBasicCCThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeBasicCCThresholdRequest&, DescribeBasicCCThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicCCThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicDeviceThresholdResponse> DescribeBasicDeviceThresholdOutcome;
                typedef std::future<DescribeBasicDeviceThresholdOutcome> DescribeBasicDeviceThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeBasicDeviceThresholdRequest&, DescribeBasicDeviceThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicDeviceThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizHttpStatusResponse> DescribeBizHttpStatusOutcome;
                typedef std::future<DescribeBizHttpStatusOutcome> DescribeBizHttpStatusOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeBizHttpStatusRequest&, DescribeBizHttpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizHttpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizTrendResponse> DescribeBizTrendOutcome;
                typedef std::future<DescribeBizTrendOutcome> DescribeBizTrendOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeBizTrendRequest&, DescribeBizTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCAlarmThresholdResponse> DescribeCCAlarmThresholdOutcome;
                typedef std::future<DescribeCCAlarmThresholdOutcome> DescribeCCAlarmThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCAlarmThresholdRequest&, DescribeCCAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCEvListResponse> DescribeCCEvListOutcome;
                typedef std::future<DescribeCCEvListOutcome> DescribeCCEvListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCEvListRequest&, DescribeCCEvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCEvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCFrequencyRulesResponse> DescribeCCFrequencyRulesOutcome;
                typedef std::future<DescribeCCFrequencyRulesOutcome> DescribeCCFrequencyRulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCFrequencyRulesRequest&, DescribeCCFrequencyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCFrequencyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCIpAllowDenyResponse> DescribeCCIpAllowDenyOutcome;
                typedef std::future<DescribeCCIpAllowDenyOutcome> DescribeCCIpAllowDenyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCIpAllowDenyRequest&, DescribeCCIpAllowDenyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCIpAllowDenyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCSelfDefinePolicyResponse> DescribeCCSelfDefinePolicyOutcome;
                typedef std::future<DescribeCCSelfDefinePolicyOutcome> DescribeCCSelfDefinePolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCSelfDefinePolicyRequest&, DescribeCCSelfDefinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCSelfDefinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCTrendResponse> DescribeCCTrendOutcome;
                typedef std::future<DescribeCCTrendOutcome> DescribeCCTrendOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCTrendRequest&, DescribeCCTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCUrlAllowResponse> DescribeCCUrlAllowOutcome;
                typedef std::future<DescribeCCUrlAllowOutcome> DescribeCCUrlAllowOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeCCUrlAllowRequest&, DescribeCCUrlAllowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCUrlAllowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAlarmThresholdResponse> DescribeDDoSAlarmThresholdOutcome;
                typedef std::future<DescribeDDoSAlarmThresholdOutcome> DescribeDDoSAlarmThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSAlarmThresholdRequest&, DescribeDDoSAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackIPRegionMapResponse> DescribeDDoSAttackIPRegionMapOutcome;
                typedef std::future<DescribeDDoSAttackIPRegionMapOutcome> DescribeDDoSAttackIPRegionMapOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSAttackIPRegionMapRequest&, DescribeDDoSAttackIPRegionMapOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackIPRegionMapAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackSourceResponse> DescribeDDoSAttackSourceOutcome;
                typedef std::future<DescribeDDoSAttackSourceOutcome> DescribeDDoSAttackSourceOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSAttackSourceRequest&, DescribeDDoSAttackSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSCountResponse> DescribeDDoSCountOutcome;
                typedef std::future<DescribeDDoSCountOutcome> DescribeDDoSCountOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSCountRequest&, DescribeDDoSCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSDefendStatusResponse> DescribeDDoSDefendStatusOutcome;
                typedef std::future<DescribeDDoSDefendStatusOutcome> DescribeDDoSDefendStatusOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSDefendStatusRequest&, DescribeDDoSDefendStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSDefendStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSEvInfoResponse> DescribeDDoSEvInfoOutcome;
                typedef std::future<DescribeDDoSEvInfoOutcome> DescribeDDoSEvInfoOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSEvInfoRequest&, DescribeDDoSEvInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSEvInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSEvListResponse> DescribeDDoSEvListOutcome;
                typedef std::future<DescribeDDoSEvListOutcome> DescribeDDoSEvListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSEvListRequest&, DescribeDDoSEvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSEvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSIpLogResponse> DescribeDDoSIpLogOutcome;
                typedef std::future<DescribeDDoSIpLogOutcome> DescribeDDoSIpLogOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSIpLogRequest&, DescribeDDoSIpLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSIpLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSNetCountResponse> DescribeDDoSNetCountOutcome;
                typedef std::future<DescribeDDoSNetCountOutcome> DescribeDDoSNetCountOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSNetCountRequest&, DescribeDDoSNetCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSNetCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSNetEvInfoResponse> DescribeDDoSNetEvInfoOutcome;
                typedef std::future<DescribeDDoSNetEvInfoOutcome> DescribeDDoSNetEvInfoOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSNetEvInfoRequest&, DescribeDDoSNetEvInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSNetEvInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSNetEvListResponse> DescribeDDoSNetEvListOutcome;
                typedef std::future<DescribeDDoSNetEvListOutcome> DescribeDDoSNetEvListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSNetEvListRequest&, DescribeDDoSNetEvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSNetEvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSNetIpLogResponse> DescribeDDoSNetIpLogOutcome;
                typedef std::future<DescribeDDoSNetIpLogOutcome> DescribeDDoSNetIpLogOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSNetIpLogRequest&, DescribeDDoSNetIpLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSNetIpLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSNetTrendResponse> DescribeDDoSNetTrendOutcome;
                typedef std::future<DescribeDDoSNetTrendOutcome> DescribeDDoSNetTrendOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSNetTrendRequest&, DescribeDDoSNetTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSNetTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSPolicyResponse> DescribeDDoSPolicyOutcome;
                typedef std::future<DescribeDDoSPolicyOutcome> DescribeDDoSPolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSPolicyRequest&, DescribeDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSTrendResponse> DescribeDDoSTrendOutcome;
                typedef std::future<DescribeDDoSTrendOutcome> DescribeDDoSTrendOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSTrendRequest&, DescribeDDoSTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSUsedStatisResponse> DescribeDDoSUsedStatisOutcome;
                typedef std::future<DescribeDDoSUsedStatisOutcome> DescribeDDoSUsedStatisOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeDDoSUsedStatisRequest&, DescribeDDoSUsedStatisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSUsedStatisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPProductInfoResponse> DescribeIPProductInfoOutcome;
                typedef std::future<DescribeIPProductInfoOutcome> DescribeIPProductInfoOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeIPProductInfoRequest&, DescribeIPProductInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPProductInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInsurePacksResponse> DescribeInsurePacksOutcome;
                typedef std::future<DescribeInsurePacksOutcome> DescribeInsurePacksOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeInsurePacksRequest&, DescribeInsurePacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInsurePacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpBlockListResponse> DescribeIpBlockListOutcome;
                typedef std::future<DescribeIpBlockListOutcome> DescribeIpBlockListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeIpBlockListRequest&, DescribeIpBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpUnBlockListResponse> DescribeIpUnBlockListOutcome;
                typedef std::future<DescribeIpUnBlockListOutcome> DescribeIpUnBlockListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeIpUnBlockListRequest&, DescribeIpUnBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpUnBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4HealthConfigResponse> DescribeL4HealthConfigOutcome;
                typedef std::future<DescribeL4HealthConfigOutcome> DescribeL4HealthConfigOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeL4HealthConfigRequest&, DescribeL4HealthConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4HealthConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4RulesErrHealthResponse> DescribeL4RulesErrHealthOutcome;
                typedef std::future<DescribeL4RulesErrHealthOutcome> DescribeL4RulesErrHealthOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeL4RulesErrHealthRequest&, DescribeL4RulesErrHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4RulesErrHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7HealthConfigResponse> DescribeL7HealthConfigOutcome;
                typedef std::future<DescribeL7HealthConfigOutcome> DescribeL7HealthConfigOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeL7HealthConfigRequest&, DescribeL7HealthConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7HealthConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL4RulesResponse> DescribeNewL4RulesOutcome;
                typedef std::future<DescribeNewL4RulesOutcome> DescribeNewL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeNewL4RulesRequest&, DescribeNewL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL4RulesErrHealthResponse> DescribeNewL4RulesErrHealthOutcome;
                typedef std::future<DescribeNewL4RulesErrHealthOutcome> DescribeNewL4RulesErrHealthOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeNewL4RulesErrHealthRequest&, DescribeNewL4RulesErrHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL4RulesErrHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL7RulesErrHealthResponse> DescribeNewL7RulesErrHealthOutcome;
                typedef std::future<DescribeNewL7RulesErrHealthOutcome> DescribeNewL7RulesErrHealthOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeNewL7RulesErrHealthRequest&, DescribeNewL7RulesErrHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL7RulesErrHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackIndexResponse> DescribePackIndexOutcome;
                typedef std::future<DescribePackIndexOutcome> DescribePackIndexOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribePackIndexRequest&, DescribePackIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePcapResponse> DescribePcapOutcome;
                typedef std::future<DescribePcapOutcome> DescribePcapOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribePcapRequest&, DescribePcapOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePcapAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyCaseResponse> DescribePolicyCaseOutcome;
                typedef std::future<DescribePolicyCaseOutcome> DescribePolicyCaseOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribePolicyCaseRequest&, DescribePolicyCaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyCaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResIpListResponse> DescribeResIpListOutcome;
                typedef std::future<DescribeResIpListOutcome> DescribeResIpListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeResIpListRequest&, DescribeResIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceListResponse> DescribeResourceListOutcome;
                typedef std::future<DescribeResourceListOutcome> DescribeResourceListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeResourceListRequest&, DescribeResourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleSetsResponse> DescribeRuleSetsOutcome;
                typedef std::future<DescribeRuleSetsOutcome> DescribeRuleSetsOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeRuleSetsRequest&, DescribeRuleSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulingDomainListResponse> DescribeSchedulingDomainListOutcome;
                typedef std::future<DescribeSchedulingDomainListOutcome> DescribeSchedulingDomainListOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeSchedulingDomainListRequest&, DescribeSchedulingDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulingDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecIndexResponse> DescribeSecIndexOutcome;
                typedef std::future<DescribeSecIndexOutcome> DescribeSecIndexOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeSecIndexRequest&, DescribeSecIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceIpSegmentResponse> DescribeSourceIpSegmentOutcome;
                typedef std::future<DescribeSourceIpSegmentOutcome> DescribeSourceIpSegmentOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeSourceIpSegmentRequest&, DescribeSourceIpSegmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceIpSegmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTransmitStatisResponse> DescribeTransmitStatisOutcome;
                typedef std::future<DescribeTransmitStatisOutcome> DescribeTransmitStatisOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeTransmitStatisRequest&, DescribeTransmitStatisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransmitStatisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnBlockStatisResponse> DescribeUnBlockStatisOutcome;
                typedef std::future<DescribeUnBlockStatisOutcome> DescribeUnBlockStatisOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribeUnBlockStatisRequest&, DescribeUnBlockStatisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnBlockStatisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribleL4RulesResponse> DescribleL4RulesOutcome;
                typedef std::future<DescribleL4RulesOutcome> DescribleL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribleL4RulesRequest&, DescribleL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribleL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribleL7RulesResponse> DescribleL7RulesOutcome;
                typedef std::future<DescribleL7RulesOutcome> DescribleL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribleL7RulesRequest&, DescribleL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribleL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribleNewL7RulesResponse> DescribleNewL7RulesOutcome;
                typedef std::future<DescribleNewL7RulesOutcome> DescribleNewL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribleNewL7RulesRequest&, DescribleNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribleNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribleRegionCountResponse> DescribleRegionCountOutcome;
                typedef std::future<DescribleRegionCountOutcome> DescribleRegionCountOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::DescribleRegionCountRequest&, DescribleRegionCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribleRegionCountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCAlarmThresholdResponse> ModifyCCAlarmThresholdOutcome;
                typedef std::future<ModifyCCAlarmThresholdOutcome> ModifyCCAlarmThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCAlarmThresholdRequest&, ModifyCCAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCFrequencyRulesResponse> ModifyCCFrequencyRulesOutcome;
                typedef std::future<ModifyCCFrequencyRulesOutcome> ModifyCCFrequencyRulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCFrequencyRulesRequest&, ModifyCCFrequencyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCFrequencyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCFrequencyRulesStatusResponse> ModifyCCFrequencyRulesStatusOutcome;
                typedef std::future<ModifyCCFrequencyRulesStatusOutcome> ModifyCCFrequencyRulesStatusOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCFrequencyRulesStatusRequest&, ModifyCCFrequencyRulesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCFrequencyRulesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCHostProtectionResponse> ModifyCCHostProtectionOutcome;
                typedef std::future<ModifyCCHostProtectionOutcome> ModifyCCHostProtectionOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCHostProtectionRequest&, ModifyCCHostProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCHostProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCIpAllowDenyResponse> ModifyCCIpAllowDenyOutcome;
                typedef std::future<ModifyCCIpAllowDenyOutcome> ModifyCCIpAllowDenyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCIpAllowDenyRequest&, ModifyCCIpAllowDenyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCIpAllowDenyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCLevelResponse> ModifyCCLevelOutcome;
                typedef std::future<ModifyCCLevelOutcome> ModifyCCLevelOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCLevelRequest&, ModifyCCLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCPolicySwitchResponse> ModifyCCPolicySwitchOutcome;
                typedef std::future<ModifyCCPolicySwitchOutcome> ModifyCCPolicySwitchOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCPolicySwitchRequest&, ModifyCCPolicySwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCPolicySwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCSelfDefinePolicyResponse> ModifyCCSelfDefinePolicyOutcome;
                typedef std::future<ModifyCCSelfDefinePolicyOutcome> ModifyCCSelfDefinePolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCSelfDefinePolicyRequest&, ModifyCCSelfDefinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCSelfDefinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCThresholdResponse> ModifyCCThresholdOutcome;
                typedef std::future<ModifyCCThresholdOutcome> ModifyCCThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCThresholdRequest&, ModifyCCThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCUrlAllowResponse> ModifyCCUrlAllowOutcome;
                typedef std::future<ModifyCCUrlAllowOutcome> ModifyCCUrlAllowOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyCCUrlAllowRequest&, ModifyCCUrlAllowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCUrlAllowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSAIStatusResponse> ModifyDDoSAIStatusOutcome;
                typedef std::future<ModifyDDoSAIStatusOutcome> ModifyDDoSAIStatusOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSAIStatusRequest&, ModifyDDoSAIStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSAIStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSAlarmThresholdResponse> ModifyDDoSAlarmThresholdOutcome;
                typedef std::future<ModifyDDoSAlarmThresholdOutcome> ModifyDDoSAlarmThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSAlarmThresholdRequest&, ModifyDDoSAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSDefendStatusResponse> ModifyDDoSDefendStatusOutcome;
                typedef std::future<ModifyDDoSDefendStatusOutcome> ModifyDDoSDefendStatusOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSDefendStatusRequest&, ModifyDDoSDefendStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSDefendStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSLevelResponse> ModifyDDoSLevelOutcome;
                typedef std::future<ModifyDDoSLevelOutcome> ModifyDDoSLevelOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSLevelRequest&, ModifyDDoSLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSPolicyResponse> ModifyDDoSPolicyOutcome;
                typedef std::future<ModifyDDoSPolicyOutcome> ModifyDDoSPolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSPolicyRequest&, ModifyDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSPolicyCaseResponse> ModifyDDoSPolicyCaseOutcome;
                typedef std::future<ModifyDDoSPolicyCaseOutcome> ModifyDDoSPolicyCaseOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSPolicyCaseRequest&, ModifyDDoSPolicyCaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSPolicyCaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSPolicyNameResponse> ModifyDDoSPolicyNameOutcome;
                typedef std::future<ModifyDDoSPolicyNameOutcome> ModifyDDoSPolicyNameOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSPolicyNameRequest&, ModifyDDoSPolicyNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSPolicyNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSSwitchResponse> ModifyDDoSSwitchOutcome;
                typedef std::future<ModifyDDoSSwitchOutcome> ModifyDDoSSwitchOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSSwitchRequest&, ModifyDDoSSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSThresholdResponse> ModifyDDoSThresholdOutcome;
                typedef std::future<ModifyDDoSThresholdOutcome> ModifyDDoSThresholdOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSThresholdRequest&, ModifyDDoSThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSWaterKeyResponse> ModifyDDoSWaterKeyOutcome;
                typedef std::future<ModifyDDoSWaterKeyOutcome> ModifyDDoSWaterKeyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyDDoSWaterKeyRequest&, ModifyDDoSWaterKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSWaterKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyElasticLimitResponse> ModifyElasticLimitOutcome;
                typedef std::future<ModifyElasticLimitOutcome> ModifyElasticLimitOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyElasticLimitRequest&, ModifyElasticLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4HealthResponse> ModifyL4HealthOutcome;
                typedef std::future<ModifyL4HealthOutcome> ModifyL4HealthOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyL4HealthRequest&, ModifyL4HealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4HealthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4KeepTimeResponse> ModifyL4KeepTimeOutcome;
                typedef std::future<ModifyL4KeepTimeOutcome> ModifyL4KeepTimeOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyL4KeepTimeRequest&, ModifyL4KeepTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4KeepTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4RulesResponse> ModifyL4RulesOutcome;
                typedef std::future<ModifyL4RulesOutcome> ModifyL4RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyL4RulesRequest&, ModifyL4RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7RulesResponse> ModifyL7RulesOutcome;
                typedef std::future<ModifyL7RulesOutcome> ModifyL7RulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyL7RulesRequest&, ModifyL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetReturnSwitchResponse> ModifyNetReturnSwitchOutcome;
                typedef std::future<ModifyNetReturnSwitchOutcome> ModifyNetReturnSwitchOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyNetReturnSwitchRequest&, ModifyNetReturnSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetReturnSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNewDomainRulesResponse> ModifyNewDomainRulesOutcome;
                typedef std::future<ModifyNewDomainRulesOutcome> ModifyNewDomainRulesOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyNewDomainRulesRequest&, ModifyNewDomainRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNewDomainRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNewL4RuleResponse> ModifyNewL4RuleOutcome;
                typedef std::future<ModifyNewL4RuleOutcome> ModifyNewL4RuleOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyNewL4RuleRequest&, ModifyNewL4RuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNewL4RuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResBindDDoSPolicyResponse> ModifyResBindDDoSPolicyOutcome;
                typedef std::future<ModifyResBindDDoSPolicyOutcome> ModifyResBindDDoSPolicyOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyResBindDDoSPolicyRequest&, ModifyResBindDDoSPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResBindDDoSPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceRenewFlagResponse> ModifyResourceRenewFlagOutcome;
                typedef std::future<ModifyResourceRenewFlagOutcome> ModifyResourceRenewFlagOutcomeCallable;
                typedef std::function<void(const DayuClient*, const Model::ModifyResourceRenewFlagRequest&, ModifyResourceRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceRenewFlagAsyncHandler;



                /**
                 *设置基础防护的DDoS告警阈值，只支持基础防护产品
                 * @param req CreateBasicDDoSAlarmThresholdRequest
                 * @return CreateBasicDDoSAlarmThresholdOutcome
                 */
                CreateBasicDDoSAlarmThresholdOutcome CreateBasicDDoSAlarmThreshold(const Model::CreateBasicDDoSAlarmThresholdRequest &request);
                void CreateBasicDDoSAlarmThresholdAsync(const Model::CreateBasicDDoSAlarmThresholdRequest& request, const CreateBasicDDoSAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBasicDDoSAlarmThresholdOutcomeCallable CreateBasicDDoSAlarmThresholdCallable(const Model::CreateBasicDDoSAlarmThresholdRequest& request);

                /**
                 *绑定IP到高防包实例，支持独享包、共享包；需要注意的是此接口绑定或解绑IP是异步接口，当处于绑定或解绑中时，则不允许再进行绑定或解绑，需要等待当前绑定或解绑完成。
                 * @param req CreateBoundIPRequest
                 * @return CreateBoundIPOutcome
                 */
                CreateBoundIPOutcome CreateBoundIP(const Model::CreateBoundIPRequest &request);
                void CreateBoundIPAsync(const Model::CreateBoundIPRequest& request, const CreateBoundIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBoundIPOutcomeCallable CreateBoundIPCallable(const Model::CreateBoundIPRequest& request);

                /**
                 *添加CC防护的访问频率控制规则
                 * @param req CreateCCFrequencyRulesRequest
                 * @return CreateCCFrequencyRulesOutcome
                 */
                CreateCCFrequencyRulesOutcome CreateCCFrequencyRules(const Model::CreateCCFrequencyRulesRequest &request);
                void CreateCCFrequencyRulesAsync(const Model::CreateCCFrequencyRulesRequest& request, const CreateCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCFrequencyRulesOutcomeCallable CreateCCFrequencyRulesCallable(const Model::CreateCCFrequencyRulesRequest& request);

                /**
                 *创建CC自定义策略
                 * @param req CreateCCSelfDefinePolicyRequest
                 * @return CreateCCSelfDefinePolicyOutcome
                 */
                CreateCCSelfDefinePolicyOutcome CreateCCSelfDefinePolicy(const Model::CreateCCSelfDefinePolicyRequest &request);
                void CreateCCSelfDefinePolicyAsync(const Model::CreateCCSelfDefinePolicyRequest& request, const CreateCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCSelfDefinePolicyOutcomeCallable CreateCCSelfDefinePolicyCallable(const Model::CreateCCSelfDefinePolicyRequest& request);

                /**
                 *添加DDoS高级策略
                 * @param req CreateDDoSPolicyRequest
                 * @return CreateDDoSPolicyOutcome
                 */
                CreateDDoSPolicyOutcome CreateDDoSPolicy(const Model::CreateDDoSPolicyRequest &request);
                void CreateDDoSPolicyAsync(const Model::CreateDDoSPolicyRequest& request, const CreateDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSPolicyOutcomeCallable CreateDDoSPolicyCallable(const Model::CreateDDoSPolicyRequest& request);

                /**
                 *添加策略场景
                 * @param req CreateDDoSPolicyCaseRequest
                 * @return CreateDDoSPolicyCaseOutcome
                 */
                CreateDDoSPolicyCaseOutcome CreateDDoSPolicyCase(const Model::CreateDDoSPolicyCaseRequest &request);
                void CreateDDoSPolicyCaseAsync(const Model::CreateDDoSPolicyCaseRequest& request, const CreateDDoSPolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSPolicyCaseOutcomeCallable CreateDDoSPolicyCaseCallable(const Model::CreateDDoSPolicyCaseRequest& request);

                /**
                 *资源实例重命名，支持独享包、共享包、高防IP、高防IP专业版；
                 * @param req CreateInstanceNameRequest
                 * @return CreateInstanceNameOutcome
                 */
                CreateInstanceNameOutcome CreateInstanceName(const Model::CreateInstanceNameRequest &request);
                void CreateInstanceNameAsync(const Model::CreateInstanceNameRequest& request, const CreateInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceNameOutcomeCallable CreateInstanceNameCallable(const Model::CreateInstanceNameRequest& request);

                /**
                 *上传四层健康检查配置
                 * @param req CreateL4HealthConfigRequest
                 * @return CreateL4HealthConfigOutcome
                 */
                CreateL4HealthConfigOutcome CreateL4HealthConfig(const Model::CreateL4HealthConfigRequest &request);
                void CreateL4HealthConfigAsync(const Model::CreateL4HealthConfigRequest& request, const CreateL4HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4HealthConfigOutcomeCallable CreateL4HealthConfigCallable(const Model::CreateL4HealthConfigRequest& request);

                /**
                 *添加L4转发规则
                 * @param req CreateL4RulesRequest
                 * @return CreateL4RulesOutcome
                 */
                CreateL4RulesOutcome CreateL4Rules(const Model::CreateL4RulesRequest &request);
                void CreateL4RulesAsync(const Model::CreateL4RulesRequest& request, const CreateL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4RulesOutcomeCallable CreateL4RulesCallable(const Model::CreateL4RulesRequest& request);

                /**
                 *此接口是7层CC的访问频控自定义规则（IP+Host维度，不支持具体的URI），此接口已弃用，请调用新接口CreateCCFrequencyRules，新接口同时支持IP+Host维度以及具体的URI；
                 * @param req CreateL7CCRuleRequest
                 * @return CreateL7CCRuleOutcome
                 */
                CreateL7CCRuleOutcome CreateL7CCRule(const Model::CreateL7CCRuleRequest &request);
                void CreateL7CCRuleAsync(const Model::CreateL7CCRuleRequest& request, const CreateL7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7CCRuleOutcomeCallable CreateL7CCRuleCallable(const Model::CreateL7CCRuleRequest& request);

                /**
                 *上传七层健康检查配置
                 * @param req CreateL7HealthConfigRequest
                 * @return CreateL7HealthConfigOutcome
                 */
                CreateL7HealthConfigOutcome CreateL7HealthConfig(const Model::CreateL7HealthConfigRequest &request);
                void CreateL7HealthConfigAsync(const Model::CreateL7HealthConfigRequest& request, const CreateL7HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7HealthConfigOutcomeCallable CreateL7HealthConfigCallable(const Model::CreateL7HealthConfigRequest& request);

                /**
                 *配置7层转发规则的证书
                 * @param req CreateL7RuleCertRequest
                 * @return CreateL7RuleCertOutcome
                 */
                CreateL7RuleCertOutcome CreateL7RuleCert(const Model::CreateL7RuleCertRequest &request);
                void CreateL7RuleCertAsync(const Model::CreateL7RuleCertRequest& request, const CreateL7RuleCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7RuleCertOutcomeCallable CreateL7RuleCertCallable(const Model::CreateL7RuleCertRequest& request);

                /**
                 *添加7层(网站)转发规则
                 * @param req CreateL7RulesRequest
                 * @return CreateL7RulesOutcome
                 */
                CreateL7RulesOutcome CreateL7Rules(const Model::CreateL7RulesRequest &request);
                void CreateL7RulesAsync(const Model::CreateL7RulesRequest& request, const CreateL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7RulesOutcomeCallable CreateL7RulesCallable(const Model::CreateL7RulesRequest& request);

                /**
                 *批量上传7层转发规则
                 * @param req CreateL7RulesUploadRequest
                 * @return CreateL7RulesUploadOutcome
                 */
                CreateL7RulesUploadOutcome CreateL7RulesUpload(const Model::CreateL7RulesUploadRequest &request);
                void CreateL7RulesUploadAsync(const Model::CreateL7RulesUploadRequest& request, const CreateL7RulesUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7RulesUploadOutcomeCallable CreateL7RulesUploadCallable(const Model::CreateL7RulesUploadRequest& request);

                /**
                 *高防IP专业版一键切回源站
                 * @param req CreateNetReturnRequest
                 * @return CreateNetReturnOutcome
                 */
                CreateNetReturnOutcome CreateNetReturn(const Model::CreateNetReturnRequest &request);
                void CreateNetReturnAsync(const Model::CreateNetReturnRequest& request, const CreateNetReturnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetReturnOutcomeCallable CreateNetReturnCallable(const Model::CreateNetReturnRequest& request);

                /**
                 *添加L4转发规则
                 * @param req CreateNewL4RulesRequest
                 * @return CreateNewL4RulesOutcome
                 */
                CreateNewL4RulesOutcome CreateNewL4Rules(const Model::CreateNewL4RulesRequest &request);
                void CreateNewL4RulesAsync(const Model::CreateNewL4RulesRequest& request, const CreateNewL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNewL4RulesOutcomeCallable CreateNewL4RulesCallable(const Model::CreateNewL4RulesRequest& request);

                /**
                 *添加7层转发规则
                 * @param req CreateNewL7RulesRequest
                 * @return CreateNewL7RulesOutcome
                 */
                CreateNewL7RulesOutcome CreateNewL7Rules(const Model::CreateNewL7RulesRequest &request);
                void CreateNewL7RulesAsync(const Model::CreateNewL7RulesRequest& request, const CreateNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNewL7RulesOutcomeCallable CreateNewL7RulesCallable(const Model::CreateNewL7RulesRequest& request);

                /**
                 *批量上传7层转发规则
                 * @param req CreateNewL7RulesUploadRequest
                 * @return CreateNewL7RulesUploadOutcome
                 */
                CreateNewL7RulesUploadOutcome CreateNewL7RulesUpload(const Model::CreateNewL7RulesUploadRequest &request);
                void CreateNewL7RulesUploadAsync(const Model::CreateNewL7RulesUploadRequest& request, const CreateNewL7RulesUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNewL7RulesUploadOutcomeCallable CreateNewL7RulesUploadCallable(const Model::CreateNewL7RulesUploadRequest& request);

                /**
                 *IP解封操作
                 * @param req CreateUnblockIpRequest
                 * @return CreateUnblockIpOutcome
                 */
                CreateUnblockIpOutcome CreateUnblockIp(const Model::CreateUnblockIpRequest &request);
                void CreateUnblockIpAsync(const Model::CreateUnblockIpRequest& request, const CreateUnblockIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUnblockIpOutcomeCallable CreateUnblockIpCallable(const Model::CreateUnblockIpRequest& request);

                /**
                 *删除CC防护的访问频率控制规则
                 * @param req DeleteCCFrequencyRulesRequest
                 * @return DeleteCCFrequencyRulesOutcome
                 */
                DeleteCCFrequencyRulesOutcome DeleteCCFrequencyRules(const Model::DeleteCCFrequencyRulesRequest &request);
                void DeleteCCFrequencyRulesAsync(const Model::DeleteCCFrequencyRulesRequest& request, const DeleteCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCFrequencyRulesOutcomeCallable DeleteCCFrequencyRulesCallable(const Model::DeleteCCFrequencyRulesRequest& request);

                /**
                 *删除CC自定义策略
                 * @param req DeleteCCSelfDefinePolicyRequest
                 * @return DeleteCCSelfDefinePolicyOutcome
                 */
                DeleteCCSelfDefinePolicyOutcome DeleteCCSelfDefinePolicy(const Model::DeleteCCSelfDefinePolicyRequest &request);
                void DeleteCCSelfDefinePolicyAsync(const Model::DeleteCCSelfDefinePolicyRequest& request, const DeleteCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCSelfDefinePolicyOutcomeCallable DeleteCCSelfDefinePolicyCallable(const Model::DeleteCCSelfDefinePolicyRequest& request);

                /**
                 *删除DDoS高级策略
                 * @param req DeleteDDoSPolicyRequest
                 * @return DeleteDDoSPolicyOutcome
                 */
                DeleteDDoSPolicyOutcome DeleteDDoSPolicy(const Model::DeleteDDoSPolicyRequest &request);
                void DeleteDDoSPolicyAsync(const Model::DeleteDDoSPolicyRequest& request, const DeleteDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSPolicyOutcomeCallable DeleteDDoSPolicyCallable(const Model::DeleteDDoSPolicyRequest& request);

                /**
                 *删除策略场景
                 * @param req DeleteDDoSPolicyCaseRequest
                 * @return DeleteDDoSPolicyCaseOutcome
                 */
                DeleteDDoSPolicyCaseOutcome DeleteDDoSPolicyCase(const Model::DeleteDDoSPolicyCaseRequest &request);
                void DeleteDDoSPolicyCaseAsync(const Model::DeleteDDoSPolicyCaseRequest& request, const DeleteDDoSPolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSPolicyCaseOutcomeCallable DeleteDDoSPolicyCaseCallable(const Model::DeleteDDoSPolicyCaseRequest& request);

                /**
                 *删除四层转发规则
                 * @param req DeleteL4RulesRequest
                 * @return DeleteL4RulesOutcome
                 */
                DeleteL4RulesOutcome DeleteL4Rules(const Model::DeleteL4RulesRequest &request);
                void DeleteL4RulesAsync(const Model::DeleteL4RulesRequest& request, const DeleteL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL4RulesOutcomeCallable DeleteL4RulesCallable(const Model::DeleteL4RulesRequest& request);

                /**
                 *删除七层转发规则
                 * @param req DeleteL7RulesRequest
                 * @return DeleteL7RulesOutcome
                 */
                DeleteL7RulesOutcome DeleteL7Rules(const Model::DeleteL7RulesRequest &request);
                void DeleteL7RulesAsync(const Model::DeleteL7RulesRequest& request, const DeleteL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL7RulesOutcomeCallable DeleteL7RulesCallable(const Model::DeleteL7RulesRequest& request);

                /**
                 *删除L4转发规则
                 * @param req DeleteNewL4RulesRequest
                 * @return DeleteNewL4RulesOutcome
                 */
                DeleteNewL4RulesOutcome DeleteNewL4Rules(const Model::DeleteNewL4RulesRequest &request);
                void DeleteNewL4RulesAsync(const Model::DeleteNewL4RulesRequest& request, const DeleteNewL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNewL4RulesOutcomeCallable DeleteNewL4RulesCallable(const Model::DeleteNewL4RulesRequest& request);

                /**
                 *删除L7转发规则
                 * @param req DeleteNewL7RulesRequest
                 * @return DeleteNewL7RulesOutcome
                 */
                DeleteNewL7RulesOutcome DeleteNewL7Rules(const Model::DeleteNewL7RulesRequest &request);
                void DeleteNewL7RulesAsync(const Model::DeleteNewL7RulesRequest& request, const DeleteNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNewL7RulesOutcomeCallable DeleteNewL7RulesCallable(const Model::DeleteNewL7RulesRequest& request);

                /**
                 *获取操作日志
                 * @param req DescribeActionLogRequest
                 * @return DescribeActionLogOutcome
                 */
                DescribeActionLogOutcome DescribeActionLog(const Model::DescribeActionLogRequest &request);
                void DescribeActionLogAsync(const Model::DescribeActionLogRequest& request, const DescribeActionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActionLogOutcomeCallable DescribeActionLogCallable(const Model::DescribeActionLogRequest& request);

                /**
                 *获取高防IP可添加的最多7层规则数量

                 * @param req DescribeBGPIPL7RuleMaxCntRequest
                 * @return DescribeBGPIPL7RuleMaxCntOutcome
                 */
                DescribeBGPIPL7RuleMaxCntOutcome DescribeBGPIPL7RuleMaxCnt(const Model::DescribeBGPIPL7RuleMaxCntRequest &request);
                void DescribeBGPIPL7RuleMaxCntAsync(const Model::DescribeBGPIPL7RuleMaxCntRequest& request, const DescribeBGPIPL7RuleMaxCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBGPIPL7RuleMaxCntOutcomeCallable DescribeBGPIPL7RuleMaxCntCallable(const Model::DescribeBGPIPL7RuleMaxCntRequest& request);

                /**
                 *为大禹子产品提供业务转发指标数据的接口
                 * @param req DescribeBaradDataRequest
                 * @return DescribeBaradDataOutcome
                 */
                DescribeBaradDataOutcome DescribeBaradData(const Model::DescribeBaradDataRequest &request);
                void DescribeBaradDataAsync(const Model::DescribeBaradDataRequest& request, const DescribeBaradDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaradDataOutcomeCallable DescribeBaradDataCallable(const Model::DescribeBaradDataRequest& request);

                /**
                 *获取基础防护CC防护阈值
                 * @param req DescribeBasicCCThresholdRequest
                 * @return DescribeBasicCCThresholdOutcome
                 */
                DescribeBasicCCThresholdOutcome DescribeBasicCCThreshold(const Model::DescribeBasicCCThresholdRequest &request);
                void DescribeBasicCCThresholdAsync(const Model::DescribeBasicCCThresholdRequest& request, const DescribeBasicCCThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicCCThresholdOutcomeCallable DescribeBasicCCThresholdCallable(const Model::DescribeBasicCCThresholdRequest& request);

                /**
                 *获取基础防护黑洞阈值
                 * @param req DescribeBasicDeviceThresholdRequest
                 * @return DescribeBasicDeviceThresholdOutcome
                 */
                DescribeBasicDeviceThresholdOutcome DescribeBasicDeviceThreshold(const Model::DescribeBasicDeviceThresholdRequest &request);
                void DescribeBasicDeviceThresholdAsync(const Model::DescribeBasicDeviceThresholdRequest& request, const DescribeBasicDeviceThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicDeviceThresholdOutcomeCallable DescribeBasicDeviceThresholdCallable(const Model::DescribeBasicDeviceThresholdRequest& request);

                /**
                 *获取业务流量状态码统计
                 * @param req DescribeBizHttpStatusRequest
                 * @return DescribeBizHttpStatusOutcome
                 */
                DescribeBizHttpStatusOutcome DescribeBizHttpStatus(const Model::DescribeBizHttpStatusRequest &request);
                void DescribeBizHttpStatusAsync(const Model::DescribeBizHttpStatusRequest& request, const DescribeBizHttpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizHttpStatusOutcomeCallable DescribeBizHttpStatusCallable(const Model::DescribeBizHttpStatusRequest& request);

                /**
                 *获取业务流量曲线
                 * @param req DescribeBizTrendRequest
                 * @return DescribeBizTrendOutcome
                 */
                DescribeBizTrendOutcome DescribeBizTrend(const Model::DescribeBizTrendRequest &request);
                void DescribeBizTrendAsync(const Model::DescribeBizTrendRequest& request, const DescribeBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizTrendOutcomeCallable DescribeBizTrendCallable(const Model::DescribeBizTrendRequest& request);

                /**
                 *获取高防包、高防IP、高防IP专业版、棋牌盾产品设置CC攻击的告警通知阈值
                 * @param req DescribeCCAlarmThresholdRequest
                 * @return DescribeCCAlarmThresholdOutcome
                 */
                DescribeCCAlarmThresholdOutcome DescribeCCAlarmThreshold(const Model::DescribeCCAlarmThresholdRequest &request);
                void DescribeCCAlarmThresholdAsync(const Model::DescribeCCAlarmThresholdRequest& request, const DescribeCCAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCAlarmThresholdOutcomeCallable DescribeCCAlarmThresholdCallable(const Model::DescribeCCAlarmThresholdRequest& request);

                /**
                 *获取CC攻击事件列表
                 * @param req DescribeCCEvListRequest
                 * @return DescribeCCEvListOutcome
                 */
                DescribeCCEvListOutcome DescribeCCEvList(const Model::DescribeCCEvListRequest &request);
                void DescribeCCEvListAsync(const Model::DescribeCCEvListRequest& request, const DescribeCCEvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCEvListOutcomeCallable DescribeCCEvListCallable(const Model::DescribeCCEvListRequest& request);

                /**
                 *获取CC防护的访问频率控制规则
                 * @param req DescribeCCFrequencyRulesRequest
                 * @return DescribeCCFrequencyRulesOutcome
                 */
                DescribeCCFrequencyRulesOutcome DescribeCCFrequencyRules(const Model::DescribeCCFrequencyRulesRequest &request);
                void DescribeCCFrequencyRulesAsync(const Model::DescribeCCFrequencyRulesRequest& request, const DescribeCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCFrequencyRulesOutcomeCallable DescribeCCFrequencyRulesCallable(const Model::DescribeCCFrequencyRulesRequest& request);

                /**
                 *获取CC的IP黑白名单
                 * @param req DescribeCCIpAllowDenyRequest
                 * @return DescribeCCIpAllowDenyOutcome
                 */
                DescribeCCIpAllowDenyOutcome DescribeCCIpAllowDeny(const Model::DescribeCCIpAllowDenyRequest &request);
                void DescribeCCIpAllowDenyAsync(const Model::DescribeCCIpAllowDenyRequest& request, const DescribeCCIpAllowDenyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCIpAllowDenyOutcomeCallable DescribeCCIpAllowDenyCallable(const Model::DescribeCCIpAllowDenyRequest& request);

                /**
                 *获取CC自定义策略
                 * @param req DescribeCCSelfDefinePolicyRequest
                 * @return DescribeCCSelfDefinePolicyOutcome
                 */
                DescribeCCSelfDefinePolicyOutcome DescribeCCSelfDefinePolicy(const Model::DescribeCCSelfDefinePolicyRequest &request);
                void DescribeCCSelfDefinePolicyAsync(const Model::DescribeCCSelfDefinePolicyRequest& request, const DescribeCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCSelfDefinePolicyOutcomeCallable DescribeCCSelfDefinePolicyCallable(const Model::DescribeCCSelfDefinePolicyRequest& request);

                /**
                 *获取CC攻击指标数据，包括总请求峰值(QPS)和攻击请求(QPS)
                 * @param req DescribeCCTrendRequest
                 * @return DescribeCCTrendOutcome
                 */
                DescribeCCTrendOutcome DescribeCCTrend(const Model::DescribeCCTrendRequest &request);
                void DescribeCCTrendAsync(const Model::DescribeCCTrendRequest& request, const DescribeCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCTrendOutcomeCallable DescribeCCTrendCallable(const Model::DescribeCCTrendRequest& request);

                /**
                 *获取CC的Url白名单
                 * @param req DescribeCCUrlAllowRequest
                 * @return DescribeCCUrlAllowOutcome
                 */
                DescribeCCUrlAllowOutcome DescribeCCUrlAllow(const Model::DescribeCCUrlAllowRequest &request);
                void DescribeCCUrlAllowAsync(const Model::DescribeCCUrlAllowRequest& request, const DescribeCCUrlAllowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCUrlAllowOutcomeCallable DescribeCCUrlAllowCallable(const Model::DescribeCCUrlAllowRequest& request);

                /**
                 *获取高防包、高防IP、高防IP专业版、棋牌盾产品设置DDoS攻击的告警通知阈值
                 * @param req DescribeDDoSAlarmThresholdRequest
                 * @return DescribeDDoSAlarmThresholdOutcome
                 */
                DescribeDDoSAlarmThresholdOutcome DescribeDDoSAlarmThreshold(const Model::DescribeDDoSAlarmThresholdRequest &request);
                void DescribeDDoSAlarmThresholdAsync(const Model::DescribeDDoSAlarmThresholdRequest& request, const DescribeDDoSAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAlarmThresholdOutcomeCallable DescribeDDoSAlarmThresholdCallable(const Model::DescribeDDoSAlarmThresholdRequest& request);

                /**
                 *获取DDoS攻击源IP地域分布图，支持全球攻击分布和国内省份攻击分布；
                 * @param req DescribeDDoSAttackIPRegionMapRequest
                 * @return DescribeDDoSAttackIPRegionMapOutcome
                 */
                DescribeDDoSAttackIPRegionMapOutcome DescribeDDoSAttackIPRegionMap(const Model::DescribeDDoSAttackIPRegionMapRequest &request);
                void DescribeDDoSAttackIPRegionMapAsync(const Model::DescribeDDoSAttackIPRegionMapRequest& request, const DescribeDDoSAttackIPRegionMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackIPRegionMapOutcomeCallable DescribeDDoSAttackIPRegionMapCallable(const Model::DescribeDDoSAttackIPRegionMapRequest& request);

                /**
                 *获取DDoS攻击源列表
                 * @param req DescribeDDoSAttackSourceRequest
                 * @return DescribeDDoSAttackSourceOutcome
                 */
                DescribeDDoSAttackSourceOutcome DescribeDDoSAttackSource(const Model::DescribeDDoSAttackSourceRequest &request);
                void DescribeDDoSAttackSourceAsync(const Model::DescribeDDoSAttackSourceRequest& request, const DescribeDDoSAttackSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackSourceOutcomeCallable DescribeDDoSAttackSourceCallable(const Model::DescribeDDoSAttackSourceRequest& request);

                /**
                 *获取DDoS攻击占比分析
                 * @param req DescribeDDoSCountRequest
                 * @return DescribeDDoSCountOutcome
                 */
                DescribeDDoSCountOutcome DescribeDDoSCount(const Model::DescribeDDoSCountRequest &request);
                void DescribeDDoSCountAsync(const Model::DescribeDDoSCountRequest& request, const DescribeDDoSCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSCountOutcomeCallable DescribeDDoSCountCallable(const Model::DescribeDDoSCountRequest& request);

                /**
                 *获取DDoS防护状态（临时关闭状态），支持产品：基础防护，独享包，共享包，高防IP，高防IP专业版；调用此接口是获取当前是否有设置临时关闭DDoS防护状态，如果有设置会返回临时关闭的时长等参数。
                 * @param req DescribeDDoSDefendStatusRequest
                 * @return DescribeDDoSDefendStatusOutcome
                 */
                DescribeDDoSDefendStatusOutcome DescribeDDoSDefendStatus(const Model::DescribeDDoSDefendStatusRequest &request);
                void DescribeDDoSDefendStatusAsync(const Model::DescribeDDoSDefendStatusRequest& request, const DescribeDDoSDefendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSDefendStatusOutcomeCallable DescribeDDoSDefendStatusCallable(const Model::DescribeDDoSDefendStatusRequest& request);

                /**
                 *获取DDoS攻击事件详情
                 * @param req DescribeDDoSEvInfoRequest
                 * @return DescribeDDoSEvInfoOutcome
                 */
                DescribeDDoSEvInfoOutcome DescribeDDoSEvInfo(const Model::DescribeDDoSEvInfoRequest &request);
                void DescribeDDoSEvInfoAsync(const Model::DescribeDDoSEvInfoRequest& request, const DescribeDDoSEvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSEvInfoOutcomeCallable DescribeDDoSEvInfoCallable(const Model::DescribeDDoSEvInfoRequest& request);

                /**
                 *获取DDoS攻击事件列表
                 * @param req DescribeDDoSEvListRequest
                 * @return DescribeDDoSEvListOutcome
                 */
                DescribeDDoSEvListOutcome DescribeDDoSEvList(const Model::DescribeDDoSEvListRequest &request);
                void DescribeDDoSEvListAsync(const Model::DescribeDDoSEvListRequest& request, const DescribeDDoSEvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSEvListOutcomeCallable DescribeDDoSEvListCallable(const Model::DescribeDDoSEvListRequest& request);

                /**
                 *获取DDoSIP攻击日志
                 * @param req DescribeDDoSIpLogRequest
                 * @return DescribeDDoSIpLogOutcome
                 */
                DescribeDDoSIpLogOutcome DescribeDDoSIpLog(const Model::DescribeDDoSIpLogRequest &request);
                void DescribeDDoSIpLogAsync(const Model::DescribeDDoSIpLogRequest& request, const DescribeDDoSIpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSIpLogOutcomeCallable DescribeDDoSIpLogCallable(const Model::DescribeDDoSIpLogRequest& request);

                /**
                 *获取高防IP专业版资源的DDoS攻击占比分析
                 * @param req DescribeDDoSNetCountRequest
                 * @return DescribeDDoSNetCountOutcome
                 */
                DescribeDDoSNetCountOutcome DescribeDDoSNetCount(const Model::DescribeDDoSNetCountRequest &request);
                void DescribeDDoSNetCountAsync(const Model::DescribeDDoSNetCountRequest& request, const DescribeDDoSNetCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSNetCountOutcomeCallable DescribeDDoSNetCountCallable(const Model::DescribeDDoSNetCountRequest& request);

                /**
                 *获取高防IP专业版资源的DDoS攻击事件详情
                 * @param req DescribeDDoSNetEvInfoRequest
                 * @return DescribeDDoSNetEvInfoOutcome
                 */
                DescribeDDoSNetEvInfoOutcome DescribeDDoSNetEvInfo(const Model::DescribeDDoSNetEvInfoRequest &request);
                void DescribeDDoSNetEvInfoAsync(const Model::DescribeDDoSNetEvInfoRequest& request, const DescribeDDoSNetEvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSNetEvInfoOutcomeCallable DescribeDDoSNetEvInfoCallable(const Model::DescribeDDoSNetEvInfoRequest& request);

                /**
                 *获取高防IP专业版资源的DDoS攻击事件列表
                 * @param req DescribeDDoSNetEvListRequest
                 * @return DescribeDDoSNetEvListOutcome
                 */
                DescribeDDoSNetEvListOutcome DescribeDDoSNetEvList(const Model::DescribeDDoSNetEvListRequest &request);
                void DescribeDDoSNetEvListAsync(const Model::DescribeDDoSNetEvListRequest& request, const DescribeDDoSNetEvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSNetEvListOutcomeCallable DescribeDDoSNetEvListCallable(const Model::DescribeDDoSNetEvListRequest& request);

                /**
                 *获取高防IP专业版资源的DDoSIP攻击日志
                 * @param req DescribeDDoSNetIpLogRequest
                 * @return DescribeDDoSNetIpLogOutcome
                 */
                DescribeDDoSNetIpLogOutcome DescribeDDoSNetIpLog(const Model::DescribeDDoSNetIpLogRequest &request);
                void DescribeDDoSNetIpLogAsync(const Model::DescribeDDoSNetIpLogRequest& request, const DescribeDDoSNetIpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSNetIpLogOutcomeCallable DescribeDDoSNetIpLogCallable(const Model::DescribeDDoSNetIpLogRequest& request);

                /**
                 *获取高防IP专业版资源的DDoS攻击指标数据
                 * @param req DescribeDDoSNetTrendRequest
                 * @return DescribeDDoSNetTrendOutcome
                 */
                DescribeDDoSNetTrendOutcome DescribeDDoSNetTrend(const Model::DescribeDDoSNetTrendRequest &request);
                void DescribeDDoSNetTrendAsync(const Model::DescribeDDoSNetTrendRequest& request, const DescribeDDoSNetTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSNetTrendOutcomeCallable DescribeDDoSNetTrendCallable(const Model::DescribeDDoSNetTrendRequest& request);

                /**
                 *获取DDoS高级策略
                 * @param req DescribeDDoSPolicyRequest
                 * @return DescribeDDoSPolicyOutcome
                 */
                DescribeDDoSPolicyOutcome DescribeDDoSPolicy(const Model::DescribeDDoSPolicyRequest &request);
                void DescribeDDoSPolicyAsync(const Model::DescribeDDoSPolicyRequest& request, const DescribeDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSPolicyOutcomeCallable DescribeDDoSPolicyCallable(const Model::DescribeDDoSPolicyRequest& request);

                /**
                 *获取DDoS攻击流量带宽和攻击包速率数据
                 * @param req DescribeDDoSTrendRequest
                 * @return DescribeDDoSTrendOutcome
                 */
                DescribeDDoSTrendOutcome DescribeDDoSTrend(const Model::DescribeDDoSTrendRequest &request);
                void DescribeDDoSTrendAsync(const Model::DescribeDDoSTrendRequest& request, const DescribeDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSTrendOutcomeCallable DescribeDDoSTrendCallable(const Model::DescribeDDoSTrendRequest& request);

                /**
                 *统计用户的高防资源的使用天数和DDoS攻击防护次数
                 * @param req DescribeDDoSUsedStatisRequest
                 * @return DescribeDDoSUsedStatisOutcome
                 */
                DescribeDDoSUsedStatisOutcome DescribeDDoSUsedStatis(const Model::DescribeDDoSUsedStatisRequest &request);
                void DescribeDDoSUsedStatisAsync(const Model::DescribeDDoSUsedStatisRequest& request, const DescribeDDoSUsedStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSUsedStatisOutcomeCallable DescribeDDoSUsedStatisCallable(const Model::DescribeDDoSUsedStatisRequest& request);

                /**
                 *获取独享包或共享包IP对应的云资产信息，只支持独享包和共享包的IP
                 * @param req DescribeIPProductInfoRequest
                 * @return DescribeIPProductInfoOutcome
                 */
                DescribeIPProductInfoOutcome DescribeIPProductInfo(const Model::DescribeIPProductInfoRequest &request);
                void DescribeIPProductInfoAsync(const Model::DescribeIPProductInfoRequest& request, const DescribeIPProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPProductInfoOutcomeCallable DescribeIPProductInfoCallable(const Model::DescribeIPProductInfoRequest& request);

                /**
                 *获取保险包套餐列表
                 * @param req DescribeInsurePacksRequest
                 * @return DescribeInsurePacksOutcome
                 */
                DescribeInsurePacksOutcome DescribeInsurePacks(const Model::DescribeInsurePacksRequest &request);
                void DescribeInsurePacksAsync(const Model::DescribeInsurePacksRequest& request, const DescribeInsurePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInsurePacksOutcomeCallable DescribeInsurePacksCallable(const Model::DescribeInsurePacksRequest& request);

                /**
                 *获取IP封堵列表
                 * @param req DescribeIpBlockListRequest
                 * @return DescribeIpBlockListOutcome
                 */
                DescribeIpBlockListOutcome DescribeIpBlockList(const Model::DescribeIpBlockListRequest &request);
                void DescribeIpBlockListAsync(const Model::DescribeIpBlockListRequest& request, const DescribeIpBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpBlockListOutcomeCallable DescribeIpBlockListCallable(const Model::DescribeIpBlockListRequest& request);

                /**
                 *获取IP解封记录
                 * @param req DescribeIpUnBlockListRequest
                 * @return DescribeIpUnBlockListOutcome
                 */
                DescribeIpUnBlockListOutcome DescribeIpUnBlockList(const Model::DescribeIpUnBlockListRequest &request);
                void DescribeIpUnBlockListAsync(const Model::DescribeIpUnBlockListRequest& request, const DescribeIpUnBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpUnBlockListOutcomeCallable DescribeIpUnBlockListCallable(const Model::DescribeIpUnBlockListRequest& request);

                /**
                 *导出四层健康检查配置
                 * @param req DescribeL4HealthConfigRequest
                 * @return DescribeL4HealthConfigOutcome
                 */
                DescribeL4HealthConfigOutcome DescribeL4HealthConfig(const Model::DescribeL4HealthConfigRequest &request);
                void DescribeL4HealthConfigAsync(const Model::DescribeL4HealthConfigRequest& request, const DescribeL4HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4HealthConfigOutcomeCallable DescribeL4HealthConfigCallable(const Model::DescribeL4HealthConfigRequest& request);

                /**
                 *获取L4转发规则健康检查异常结果
                 * @param req DescribeL4RulesErrHealthRequest
                 * @return DescribeL4RulesErrHealthOutcome
                 */
                DescribeL4RulesErrHealthOutcome DescribeL4RulesErrHealth(const Model::DescribeL4RulesErrHealthRequest &request);
                void DescribeL4RulesErrHealthAsync(const Model::DescribeL4RulesErrHealthRequest& request, const DescribeL4RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4RulesErrHealthOutcomeCallable DescribeL4RulesErrHealthCallable(const Model::DescribeL4RulesErrHealthRequest& request);

                /**
                 *导出七层健康检查配置
                 * @param req DescribeL7HealthConfigRequest
                 * @return DescribeL7HealthConfigOutcome
                 */
                DescribeL7HealthConfigOutcome DescribeL7HealthConfig(const Model::DescribeL7HealthConfigRequest &request);
                void DescribeL7HealthConfigAsync(const Model::DescribeL7HealthConfigRequest& request, const DescribeL7HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7HealthConfigOutcomeCallable DescribeL7HealthConfigCallable(const Model::DescribeL7HealthConfigRequest& request);

                /**
                 *获取L4转发规则
                 * @param req DescribeNewL4RulesRequest
                 * @return DescribeNewL4RulesOutcome
                 */
                DescribeNewL4RulesOutcome DescribeNewL4Rules(const Model::DescribeNewL4RulesRequest &request);
                void DescribeNewL4RulesAsync(const Model::DescribeNewL4RulesRequest& request, const DescribeNewL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL4RulesOutcomeCallable DescribeNewL4RulesCallable(const Model::DescribeNewL4RulesRequest& request);

                /**
                 *获取L4转发规则健康检查异常结果
                 * @param req DescribeNewL4RulesErrHealthRequest
                 * @return DescribeNewL4RulesErrHealthOutcome
                 */
                DescribeNewL4RulesErrHealthOutcome DescribeNewL4RulesErrHealth(const Model::DescribeNewL4RulesErrHealthRequest &request);
                void DescribeNewL4RulesErrHealthAsync(const Model::DescribeNewL4RulesErrHealthRequest& request, const DescribeNewL4RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL4RulesErrHealthOutcomeCallable DescribeNewL4RulesErrHealthCallable(const Model::DescribeNewL4RulesErrHealthRequest& request);

                /**
                 *获取L7转发规则健康检查异常结果
                 * @param req DescribeNewL7RulesErrHealthRequest
                 * @return DescribeNewL7RulesErrHealthOutcome
                 */
                DescribeNewL7RulesErrHealthOutcome DescribeNewL7RulesErrHealth(const Model::DescribeNewL7RulesErrHealthRequest &request);
                void DescribeNewL7RulesErrHealthAsync(const Model::DescribeNewL7RulesErrHealthRequest& request, const DescribeNewL7RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL7RulesErrHealthOutcomeCallable DescribeNewL7RulesErrHealthCallable(const Model::DescribeNewL7RulesErrHealthRequest& request);

                /**
                 *获取产品总览统计，支持高防包、高防IP、高防IP专业版；
                 * @param req DescribePackIndexRequest
                 * @return DescribePackIndexOutcome
                 */
                DescribePackIndexOutcome DescribePackIndex(const Model::DescribePackIndexRequest &request);
                void DescribePackIndexAsync(const Model::DescribePackIndexRequest& request, const DescribePackIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackIndexOutcomeCallable DescribePackIndexCallable(const Model::DescribePackIndexRequest& request);

                /**
                 *下载攻击事件的pcap包
                 * @param req DescribePcapRequest
                 * @return DescribePcapOutcome
                 */
                DescribePcapOutcome DescribePcap(const Model::DescribePcapRequest &request);
                void DescribePcapAsync(const Model::DescribePcapRequest& request, const DescribePcapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePcapOutcomeCallable DescribePcapCallable(const Model::DescribePcapRequest& request);

                /**
                 *获取策略场景
                 * @param req DescribePolicyCaseRequest
                 * @return DescribePolicyCaseOutcome
                 */
                DescribePolicyCaseOutcome DescribePolicyCase(const Model::DescribePolicyCaseRequest &request);
                void DescribePolicyCaseAsync(const Model::DescribePolicyCaseRequest& request, const DescribePolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyCaseOutcomeCallable DescribePolicyCaseCallable(const Model::DescribePolicyCaseRequest& request);

                /**
                 *获取资源的IP列表
                 * @param req DescribeResIpListRequest
                 * @return DescribeResIpListOutcome
                 */
                DescribeResIpListOutcome DescribeResIpList(const Model::DescribeResIpListRequest &request);
                void DescribeResIpListAsync(const Model::DescribeResIpListRequest& request, const DescribeResIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResIpListOutcomeCallable DescribeResIpListCallable(const Model::DescribeResIpListRequest& request);

                /**
                 *获取资源列表
                 * @param req DescribeResourceListRequest
                 * @return DescribeResourceListOutcome
                 */
                DescribeResourceListOutcome DescribeResourceList(const Model::DescribeResourceListRequest &request);
                void DescribeResourceListAsync(const Model::DescribeResourceListRequest& request, const DescribeResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceListOutcomeCallable DescribeResourceListCallable(const Model::DescribeResourceListRequest& request);

                /**
                 *获取资源的规则数
                 * @param req DescribeRuleSetsRequest
                 * @return DescribeRuleSetsOutcome
                 */
                DescribeRuleSetsOutcome DescribeRuleSets(const Model::DescribeRuleSetsRequest &request);
                void DescribeRuleSetsAsync(const Model::DescribeRuleSetsRequest& request, const DescribeRuleSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleSetsOutcomeCallable DescribeRuleSetsCallable(const Model::DescribeRuleSetsRequest& request);

                /**
                 *获取调度域名列表
                 * @param req DescribeSchedulingDomainListRequest
                 * @return DescribeSchedulingDomainListOutcome
                 */
                DescribeSchedulingDomainListOutcome DescribeSchedulingDomainList(const Model::DescribeSchedulingDomainListRequest &request);
                void DescribeSchedulingDomainListAsync(const Model::DescribeSchedulingDomainListRequest& request, const DescribeSchedulingDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulingDomainListOutcomeCallable DescribeSchedulingDomainListCallable(const Model::DescribeSchedulingDomainListRequest& request);

                /**
                 *获取本月安全统计
                 * @param req DescribeSecIndexRequest
                 * @return DescribeSecIndexOutcome
                 */
                DescribeSecIndexOutcome DescribeSecIndex(const Model::DescribeSecIndexRequest &request);
                void DescribeSecIndexAsync(const Model::DescribeSecIndexRequest& request, const DescribeSecIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecIndexOutcomeCallable DescribeSecIndexCallable(const Model::DescribeSecIndexRequest& request);

                /**
                 *获取回源IP段，支持的产品：高防IP，高防IP专业版；
                 * @param req DescribeSourceIpSegmentRequest
                 * @return DescribeSourceIpSegmentOutcome
                 */
                DescribeSourceIpSegmentOutcome DescribeSourceIpSegment(const Model::DescribeSourceIpSegmentRequest &request);
                void DescribeSourceIpSegmentAsync(const Model::DescribeSourceIpSegmentRequest& request, const DescribeSourceIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceIpSegmentOutcomeCallable DescribeSourceIpSegmentCallable(const Model::DescribeSourceIpSegmentRequest& request);

                /**
                 *获取业务转发统计数据，支持转发流量和转发包速率
                 * @param req DescribeTransmitStatisRequest
                 * @return DescribeTransmitStatisOutcome
                 */
                DescribeTransmitStatisOutcome DescribeTransmitStatis(const Model::DescribeTransmitStatisRequest &request);
                void DescribeTransmitStatisAsync(const Model::DescribeTransmitStatisRequest& request, const DescribeTransmitStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTransmitStatisOutcomeCallable DescribeTransmitStatisCallable(const Model::DescribeTransmitStatisRequest& request);

                /**
                 *获取黑洞解封次数
                 * @param req DescribeUnBlockStatisRequest
                 * @return DescribeUnBlockStatisOutcome
                 */
                DescribeUnBlockStatisOutcome DescribeUnBlockStatis(const Model::DescribeUnBlockStatisRequest &request);
                void DescribeUnBlockStatisAsync(const Model::DescribeUnBlockStatisRequest& request, const DescribeUnBlockStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnBlockStatisOutcomeCallable DescribeUnBlockStatisCallable(const Model::DescribeUnBlockStatisRequest& request);

                /**
                 *获取四层转发规则
                 * @param req DescribleL4RulesRequest
                 * @return DescribleL4RulesOutcome
                 */
                DescribleL4RulesOutcome DescribleL4Rules(const Model::DescribleL4RulesRequest &request);
                void DescribleL4RulesAsync(const Model::DescribleL4RulesRequest& request, const DescribleL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribleL4RulesOutcomeCallable DescribleL4RulesCallable(const Model::DescribleL4RulesRequest& request);

                /**
                 *获取七层转发规则
                 * @param req DescribleL7RulesRequest
                 * @return DescribleL7RulesOutcome
                 */
                DescribleL7RulesOutcome DescribleL7Rules(const Model::DescribleL7RulesRequest &request);
                void DescribleL7RulesAsync(const Model::DescribleL7RulesRequest& request, const DescribleL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribleL7RulesOutcomeCallable DescribleL7RulesCallable(const Model::DescribleL7RulesRequest& request);

                /**
                 *获取7层规则
                 * @param req DescribleNewL7RulesRequest
                 * @return DescribleNewL7RulesOutcome
                 */
                DescribleNewL7RulesOutcome DescribleNewL7Rules(const Model::DescribleNewL7RulesRequest &request);
                void DescribleNewL7RulesAsync(const Model::DescribleNewL7RulesRequest& request, const DescribleNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribleNewL7RulesOutcomeCallable DescribleNewL7RulesCallable(const Model::DescribleNewL7RulesRequest& request);

                /**
                 *获取地域的资源实例数
                 * @param req DescribleRegionCountRequest
                 * @return DescribleRegionCountOutcome
                 */
                DescribleRegionCountOutcome DescribleRegionCount(const Model::DescribleRegionCountRequest &request);
                void DescribleRegionCountAsync(const Model::DescribleRegionCountRequest& request, const DescribleRegionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribleRegionCountOutcomeCallable DescribleRegionCountCallable(const Model::DescribleRegionCountRequest& request);

                /**
                 *为高防包、高防IP、高防IP专业版、棋牌盾产品设置CC攻击的告警通知阈值
                 * @param req ModifyCCAlarmThresholdRequest
                 * @return ModifyCCAlarmThresholdOutcome
                 */
                ModifyCCAlarmThresholdOutcome ModifyCCAlarmThreshold(const Model::ModifyCCAlarmThresholdRequest &request);
                void ModifyCCAlarmThresholdAsync(const Model::ModifyCCAlarmThresholdRequest& request, const ModifyCCAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCAlarmThresholdOutcomeCallable ModifyCCAlarmThresholdCallable(const Model::ModifyCCAlarmThresholdRequest& request);

                /**
                 *修改CC防护的访问频率控制规则
                 * @param req ModifyCCFrequencyRulesRequest
                 * @return ModifyCCFrequencyRulesOutcome
                 */
                ModifyCCFrequencyRulesOutcome ModifyCCFrequencyRules(const Model::ModifyCCFrequencyRulesRequest &request);
                void ModifyCCFrequencyRulesAsync(const Model::ModifyCCFrequencyRulesRequest& request, const ModifyCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCFrequencyRulesOutcomeCallable ModifyCCFrequencyRulesCallable(const Model::ModifyCCFrequencyRulesRequest& request);

                /**
                 *开启或关闭CC防护的访问频率控制规则
                 * @param req ModifyCCFrequencyRulesStatusRequest
                 * @return ModifyCCFrequencyRulesStatusOutcome
                 */
                ModifyCCFrequencyRulesStatusOutcome ModifyCCFrequencyRulesStatus(const Model::ModifyCCFrequencyRulesStatusRequest &request);
                void ModifyCCFrequencyRulesStatusAsync(const Model::ModifyCCFrequencyRulesStatusRequest& request, const ModifyCCFrequencyRulesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCFrequencyRulesStatusOutcomeCallable ModifyCCFrequencyRulesStatusCallable(const Model::ModifyCCFrequencyRulesStatusRequest& request);

                /**
                 *开启或关闭CC域名防护
                 * @param req ModifyCCHostProtectionRequest
                 * @return ModifyCCHostProtectionOutcome
                 */
                ModifyCCHostProtectionOutcome ModifyCCHostProtection(const Model::ModifyCCHostProtectionRequest &request);
                void ModifyCCHostProtectionAsync(const Model::ModifyCCHostProtectionRequest& request, const ModifyCCHostProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCHostProtectionOutcomeCallable ModifyCCHostProtectionCallable(const Model::ModifyCCHostProtectionRequest& request);

                /**
                 *添加或删除CC的IP黑白名单
                 * @param req ModifyCCIpAllowDenyRequest
                 * @return ModifyCCIpAllowDenyOutcome
                 */
                ModifyCCIpAllowDenyOutcome ModifyCCIpAllowDeny(const Model::ModifyCCIpAllowDenyRequest &request);
                void ModifyCCIpAllowDenyAsync(const Model::ModifyCCIpAllowDenyRequest& request, const ModifyCCIpAllowDenyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCIpAllowDenyOutcomeCallable ModifyCCIpAllowDenyCallable(const Model::ModifyCCIpAllowDenyRequest& request);

                /**
                 *修改CC防护等级
                 * @param req ModifyCCLevelRequest
                 * @return ModifyCCLevelOutcome
                 */
                ModifyCCLevelOutcome ModifyCCLevel(const Model::ModifyCCLevelRequest &request);
                void ModifyCCLevelAsync(const Model::ModifyCCLevelRequest& request, const ModifyCCLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCLevelOutcomeCallable ModifyCCLevelCallable(const Model::ModifyCCLevelRequest& request);

                /**
                 *修改CC自定义策略开关
                 * @param req ModifyCCPolicySwitchRequest
                 * @return ModifyCCPolicySwitchOutcome
                 */
                ModifyCCPolicySwitchOutcome ModifyCCPolicySwitch(const Model::ModifyCCPolicySwitchRequest &request);
                void ModifyCCPolicySwitchAsync(const Model::ModifyCCPolicySwitchRequest& request, const ModifyCCPolicySwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCPolicySwitchOutcomeCallable ModifyCCPolicySwitchCallable(const Model::ModifyCCPolicySwitchRequest& request);

                /**
                 *修改CC自定义策略
                 * @param req ModifyCCSelfDefinePolicyRequest
                 * @return ModifyCCSelfDefinePolicyOutcome
                 */
                ModifyCCSelfDefinePolicyOutcome ModifyCCSelfDefinePolicy(const Model::ModifyCCSelfDefinePolicyRequest &request);
                void ModifyCCSelfDefinePolicyAsync(const Model::ModifyCCSelfDefinePolicyRequest& request, const ModifyCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCSelfDefinePolicyOutcomeCallable ModifyCCSelfDefinePolicyCallable(const Model::ModifyCCSelfDefinePolicyRequest& request);

                /**
                 *修改CC的防护阈值
                 * @param req ModifyCCThresholdRequest
                 * @return ModifyCCThresholdOutcome
                 */
                ModifyCCThresholdOutcome ModifyCCThreshold(const Model::ModifyCCThresholdRequest &request);
                void ModifyCCThresholdAsync(const Model::ModifyCCThresholdRequest& request, const ModifyCCThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCThresholdOutcomeCallable ModifyCCThresholdCallable(const Model::ModifyCCThresholdRequest& request);

                /**
                 *添加或删除CC的URL白名单
                 * @param req ModifyCCUrlAllowRequest
                 * @return ModifyCCUrlAllowOutcome
                 */
                ModifyCCUrlAllowOutcome ModifyCCUrlAllow(const Model::ModifyCCUrlAllowRequest &request);
                void ModifyCCUrlAllowAsync(const Model::ModifyCCUrlAllowRequest& request, const ModifyCCUrlAllowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCUrlAllowOutcomeCallable ModifyCCUrlAllowCallable(const Model::ModifyCCUrlAllowRequest& request);

                /**
                 *读取或修改DDoS的AI防护状态
                 * @param req ModifyDDoSAIStatusRequest
                 * @return ModifyDDoSAIStatusOutcome
                 */
                ModifyDDoSAIStatusOutcome ModifyDDoSAIStatus(const Model::ModifyDDoSAIStatusRequest &request);
                void ModifyDDoSAIStatusAsync(const Model::ModifyDDoSAIStatusRequest& request, const ModifyDDoSAIStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSAIStatusOutcomeCallable ModifyDDoSAIStatusCallable(const Model::ModifyDDoSAIStatusRequest& request);

                /**
                 *为高防包、高防IP、高防IP专业版、棋牌盾等产品设置DDoS攻击的告警通知阈值
                 * @param req ModifyDDoSAlarmThresholdRequest
                 * @return ModifyDDoSAlarmThresholdOutcome
                 */
                ModifyDDoSAlarmThresholdOutcome ModifyDDoSAlarmThreshold(const Model::ModifyDDoSAlarmThresholdRequest &request);
                void ModifyDDoSAlarmThresholdAsync(const Model::ModifyDDoSAlarmThresholdRequest& request, const ModifyDDoSAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSAlarmThresholdOutcomeCallable ModifyDDoSAlarmThresholdCallable(const Model::ModifyDDoSAlarmThresholdRequest& request);

                /**
                 *开启或关闭DDoS防护状态，调用此接口允许临时关闭DDoS防护一段时间，等时间到了会自动开启DDoS防护；
                 * @param req ModifyDDoSDefendStatusRequest
                 * @return ModifyDDoSDefendStatusOutcome
                 */
                ModifyDDoSDefendStatusOutcome ModifyDDoSDefendStatus(const Model::ModifyDDoSDefendStatusRequest &request);
                void ModifyDDoSDefendStatusAsync(const Model::ModifyDDoSDefendStatusRequest& request, const ModifyDDoSDefendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSDefendStatusOutcomeCallable ModifyDDoSDefendStatusCallable(const Model::ModifyDDoSDefendStatusRequest& request);

                /**
                 *读取或修改DDoS的防护等级
                 * @param req ModifyDDoSLevelRequest
                 * @return ModifyDDoSLevelOutcome
                 */
                ModifyDDoSLevelOutcome ModifyDDoSLevel(const Model::ModifyDDoSLevelRequest &request);
                void ModifyDDoSLevelAsync(const Model::ModifyDDoSLevelRequest& request, const ModifyDDoSLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSLevelOutcomeCallable ModifyDDoSLevelCallable(const Model::ModifyDDoSLevelRequest& request);

                /**
                 *修改DDoS高级策略
                 * @param req ModifyDDoSPolicyRequest
                 * @return ModifyDDoSPolicyOutcome
                 */
                ModifyDDoSPolicyOutcome ModifyDDoSPolicy(const Model::ModifyDDoSPolicyRequest &request);
                void ModifyDDoSPolicyAsync(const Model::ModifyDDoSPolicyRequest& request, const ModifyDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSPolicyOutcomeCallable ModifyDDoSPolicyCallable(const Model::ModifyDDoSPolicyRequest& request);

                /**
                 *修改策略场景
                 * @param req ModifyDDoSPolicyCaseRequest
                 * @return ModifyDDoSPolicyCaseOutcome
                 */
                ModifyDDoSPolicyCaseOutcome ModifyDDoSPolicyCase(const Model::ModifyDDoSPolicyCaseRequest &request);
                void ModifyDDoSPolicyCaseAsync(const Model::ModifyDDoSPolicyCaseRequest& request, const ModifyDDoSPolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSPolicyCaseOutcomeCallable ModifyDDoSPolicyCaseCallable(const Model::ModifyDDoSPolicyCaseRequest& request);

                /**
                 *修改DDoS高级策略名称
                 * @param req ModifyDDoSPolicyNameRequest
                 * @return ModifyDDoSPolicyNameOutcome
                 */
                ModifyDDoSPolicyNameOutcome ModifyDDoSPolicyName(const Model::ModifyDDoSPolicyNameRequest &request);
                void ModifyDDoSPolicyNameAsync(const Model::ModifyDDoSPolicyNameRequest& request, const ModifyDDoSPolicyNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSPolicyNameOutcomeCallable ModifyDDoSPolicyNameCallable(const Model::ModifyDDoSPolicyNameRequest& request);

                /**
                 *开启或关闭DDoS防护，只支持基础防护产品；
                 * @param req ModifyDDoSSwitchRequest
                 * @return ModifyDDoSSwitchOutcome
                 */
                ModifyDDoSSwitchOutcome ModifyDDoSSwitch(const Model::ModifyDDoSSwitchRequest &request);
                void ModifyDDoSSwitchAsync(const Model::ModifyDDoSSwitchRequest& request, const ModifyDDoSSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSSwitchOutcomeCallable ModifyDDoSSwitchCallable(const Model::ModifyDDoSSwitchRequest& request);

                /**
                 *修改DDoS清洗阈值
                 * @param req ModifyDDoSThresholdRequest
                 * @return ModifyDDoSThresholdOutcome
                 */
                ModifyDDoSThresholdOutcome ModifyDDoSThreshold(const Model::ModifyDDoSThresholdRequest &request);
                void ModifyDDoSThresholdAsync(const Model::ModifyDDoSThresholdRequest& request, const ModifyDDoSThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSThresholdOutcomeCallable ModifyDDoSThresholdCallable(const Model::ModifyDDoSThresholdRequest& request);

                /**
                 *支持水印密钥的添加，删除，开启，关闭
                 * @param req ModifyDDoSWaterKeyRequest
                 * @return ModifyDDoSWaterKeyOutcome
                 */
                ModifyDDoSWaterKeyOutcome ModifyDDoSWaterKey(const Model::ModifyDDoSWaterKeyRequest &request);
                void ModifyDDoSWaterKeyAsync(const Model::ModifyDDoSWaterKeyRequest& request, const ModifyDDoSWaterKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSWaterKeyOutcomeCallable ModifyDDoSWaterKeyCallable(const Model::ModifyDDoSWaterKeyRequest& request);

                /**
                 *修改弹性防护阈值
                 * @param req ModifyElasticLimitRequest
                 * @return ModifyElasticLimitOutcome
                 */
                ModifyElasticLimitOutcome ModifyElasticLimit(const Model::ModifyElasticLimitRequest &request);
                void ModifyElasticLimitAsync(const Model::ModifyElasticLimitRequest& request, const ModifyElasticLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyElasticLimitOutcomeCallable ModifyElasticLimitCallable(const Model::ModifyElasticLimitRequest& request);

                /**
                 *修改L4转发规则健康检查参数，支持的子产品：高防IP、高防IP专业版
                 * @param req ModifyL4HealthRequest
                 * @return ModifyL4HealthOutcome
                 */
                ModifyL4HealthOutcome ModifyL4Health(const Model::ModifyL4HealthRequest &request);
                void ModifyL4HealthAsync(const Model::ModifyL4HealthRequest& request, const ModifyL4HealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4HealthOutcomeCallable ModifyL4HealthCallable(const Model::ModifyL4HealthRequest& request);

                /**
                 *修改L4转发规则的会话保持，支持的子产品：高防IP、高防IP专业版
                 * @param req ModifyL4KeepTimeRequest
                 * @return ModifyL4KeepTimeOutcome
                 */
                ModifyL4KeepTimeOutcome ModifyL4KeepTime(const Model::ModifyL4KeepTimeRequest &request);
                void ModifyL4KeepTimeAsync(const Model::ModifyL4KeepTimeRequest& request, const ModifyL4KeepTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4KeepTimeOutcomeCallable ModifyL4KeepTimeCallable(const Model::ModifyL4KeepTimeRequest& request);

                /**
                 *修改L4转发规则
                 * @param req ModifyL4RulesRequest
                 * @return ModifyL4RulesOutcome
                 */
                ModifyL4RulesOutcome ModifyL4Rules(const Model::ModifyL4RulesRequest &request);
                void ModifyL4RulesAsync(const Model::ModifyL4RulesRequest& request, const ModifyL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4RulesOutcomeCallable ModifyL4RulesCallable(const Model::ModifyL4RulesRequest& request);

                /**
                 *修改L7转发规则
                 * @param req ModifyL7RulesRequest
                 * @return ModifyL7RulesOutcome
                 */
                ModifyL7RulesOutcome ModifyL7Rules(const Model::ModifyL7RulesRequest &request);
                void ModifyL7RulesAsync(const Model::ModifyL7RulesRequest& request, const ModifyL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7RulesOutcomeCallable ModifyL7RulesCallable(const Model::ModifyL7RulesRequest& request);

                /**
                 *在客户收攻击或者被封堵时，切回到源站，并设置回切的时长
                 * @param req ModifyNetReturnSwitchRequest
                 * @return ModifyNetReturnSwitchOutcome
                 */
                ModifyNetReturnSwitchOutcome ModifyNetReturnSwitch(const Model::ModifyNetReturnSwitchRequest &request);
                void ModifyNetReturnSwitchAsync(const Model::ModifyNetReturnSwitchRequest& request, const ModifyNetReturnSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetReturnSwitchOutcomeCallable ModifyNetReturnSwitchCallable(const Model::ModifyNetReturnSwitchRequest& request);

                /**
                 *修改7层转发规则
                 * @param req ModifyNewDomainRulesRequest
                 * @return ModifyNewDomainRulesOutcome
                 */
                ModifyNewDomainRulesOutcome ModifyNewDomainRules(const Model::ModifyNewDomainRulesRequest &request);
                void ModifyNewDomainRulesAsync(const Model::ModifyNewDomainRulesRequest& request, const ModifyNewDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNewDomainRulesOutcomeCallable ModifyNewDomainRulesCallable(const Model::ModifyNewDomainRulesRequest& request);

                /**
                 *修改4层转发规则
                 * @param req ModifyNewL4RuleRequest
                 * @return ModifyNewL4RuleOutcome
                 */
                ModifyNewL4RuleOutcome ModifyNewL4Rule(const Model::ModifyNewL4RuleRequest &request);
                void ModifyNewL4RuleAsync(const Model::ModifyNewL4RuleRequest& request, const ModifyNewL4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNewL4RuleOutcomeCallable ModifyNewL4RuleCallable(const Model::ModifyNewL4RuleRequest& request);

                /**
                 *资源实例绑定DDoS高级策略
                 * @param req ModifyResBindDDoSPolicyRequest
                 * @return ModifyResBindDDoSPolicyOutcome
                 */
                ModifyResBindDDoSPolicyOutcome ModifyResBindDDoSPolicy(const Model::ModifyResBindDDoSPolicyRequest &request);
                void ModifyResBindDDoSPolicyAsync(const Model::ModifyResBindDDoSPolicyRequest& request, const ModifyResBindDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResBindDDoSPolicyOutcomeCallable ModifyResBindDDoSPolicyCallable(const Model::ModifyResBindDDoSPolicyRequest& request);

                /**
                 *修改资源自动续费标记
                 * @param req ModifyResourceRenewFlagRequest
                 * @return ModifyResourceRenewFlagOutcome
                 */
                ModifyResourceRenewFlagOutcome ModifyResourceRenewFlag(const Model::ModifyResourceRenewFlagRequest &request);
                void ModifyResourceRenewFlagAsync(const Model::ModifyResourceRenewFlagRequest& request, const ModifyResourceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceRenewFlagOutcomeCallable ModifyResourceRenewFlagCallable(const Model::ModifyResourceRenewFlagRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_DAYUCLIENT_H_
