/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FWM_V20250611_FWMCLIENT_H_
#define TENCENTCLOUD_FWM_V20250611_FWMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/fwm/v20250611/model/CancelIgnorePolicyRiskRequest.h>
#include <tencentcloud/fwm/v20250611/model/CancelIgnorePolicyRiskResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateAnalyzePolicyTaskRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateAnalyzePolicyTaskResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleGroupRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateEdgeAclRuleGroupResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateNatAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateNatAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateNatAclRuleGroupRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateNatAclRuleGroupResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleGroupRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateSecurityGroupRuleGroupResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateStrategyRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateStrategyResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateVpcAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateVpcAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/CreateVpcAclRuleGroupRequest.h>
#include <tencentcloud/fwm/v20250611/model/CreateVpcAclRuleGroupResponse.h>
#include <tencentcloud/fwm/v20250611/model/DeleteEdgeAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/DeleteEdgeAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/DeleteNatAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/DeleteNatAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/DeleteRuleGroupRequest.h>
#include <tencentcloud/fwm/v20250611/model/DeleteRuleGroupResponse.h>
#include <tencentcloud/fwm/v20250611/model/DeleteSecurityGroupRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/DeleteSecurityGroupRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/DeleteStrategyRequest.h>
#include <tencentcloud/fwm/v20250611/model/DeleteStrategyResponse.h>
#include <tencentcloud/fwm/v20250611/model/DeleteVpcAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/DeleteVpcAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeEdgeAclRulesRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeEdgeAclRulesResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeNatAclRulesRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeNatAclRulesResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeOrganMembersRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeOrganMembersResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeOrganSummaryRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeOrganSummaryResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribePolicyRiskAccountProductStatsRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribePolicyRiskAccountProductStatsResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeRiskAnalysisDetailsRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeRiskAnalysisDetailsResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeRiskCategoryStatsRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeRiskCategoryStatsResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeRiskListRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeRiskListResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRulesRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeSecurityGroupRulesResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategiesRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategiesResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategyRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategyResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategyAccountsRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategyAccountsResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategyDispatchStatusRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeStrategyDispatchStatusResponse.h>
#include <tencentcloud/fwm/v20250611/model/DescribeVpcAclRulesRequest.h>
#include <tencentcloud/fwm/v20250611/model/DescribeVpcAclRulesResponse.h>
#include <tencentcloud/fwm/v20250611/model/DispatchStrategyRequest.h>
#include <tencentcloud/fwm/v20250611/model/DispatchStrategyResponse.h>
#include <tencentcloud/fwm/v20250611/model/IgnorePolicyRiskRequest.h>
#include <tencentcloud/fwm/v20250611/model/IgnorePolicyRiskResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleSequenceRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyEdgeAclRuleSequenceResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyNatAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyNatAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyNatAclRuleSequenceRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyNatAclRuleSequenceResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyRuleGroupRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyRuleGroupResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifySecurityGroupRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifySecurityGroupRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyStrategyRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyStrategyResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyStrategySequenceRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyStrategySequenceResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleResponse.h>
#include <tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleSequenceRequest.h>
#include <tencentcloud/fwm/v20250611/model/ModifyVpcAclRuleSequenceResponse.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            class FwmClient : public AbstractClient
            {
            public:
                FwmClient(const Credential &credential, const std::string &region);
                FwmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelIgnorePolicyRiskResponse> CancelIgnorePolicyRiskOutcome;
                typedef std::future<CancelIgnorePolicyRiskOutcome> CancelIgnorePolicyRiskOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CancelIgnorePolicyRiskRequest&, CancelIgnorePolicyRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelIgnorePolicyRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnalyzePolicyTaskResponse> CreateAnalyzePolicyTaskOutcome;
                typedef std::future<CreateAnalyzePolicyTaskOutcome> CreateAnalyzePolicyTaskOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateAnalyzePolicyTaskRequest&, CreateAnalyzePolicyTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnalyzePolicyTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeAclRuleResponse> CreateEdgeAclRuleOutcome;
                typedef std::future<CreateEdgeAclRuleOutcome> CreateEdgeAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateEdgeAclRuleRequest&, CreateEdgeAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeAclRuleGroupResponse> CreateEdgeAclRuleGroupOutcome;
                typedef std::future<CreateEdgeAclRuleGroupOutcome> CreateEdgeAclRuleGroupOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateEdgeAclRuleGroupRequest&, CreateEdgeAclRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeAclRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatAclRuleResponse> CreateNatAclRuleOutcome;
                typedef std::future<CreateNatAclRuleOutcome> CreateNatAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateNatAclRuleRequest&, CreateNatAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatAclRuleGroupResponse> CreateNatAclRuleGroupOutcome;
                typedef std::future<CreateNatAclRuleGroupOutcome> CreateNatAclRuleGroupOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateNatAclRuleGroupRequest&, CreateNatAclRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatAclRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupRuleResponse> CreateSecurityGroupRuleOutcome;
                typedef std::future<CreateSecurityGroupRuleOutcome> CreateSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateSecurityGroupRuleRequest&, CreateSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupRuleGroupResponse> CreateSecurityGroupRuleGroupOutcome;
                typedef std::future<CreateSecurityGroupRuleGroupOutcome> CreateSecurityGroupRuleGroupOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateSecurityGroupRuleGroupRequest&, CreateSecurityGroupRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStrategyResponse> CreateStrategyOutcome;
                typedef std::future<CreateStrategyOutcome> CreateStrategyOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateStrategyRequest&, CreateStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcAclRuleResponse> CreateVpcAclRuleOutcome;
                typedef std::future<CreateVpcAclRuleOutcome> CreateVpcAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateVpcAclRuleRequest&, CreateVpcAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcAclRuleGroupResponse> CreateVpcAclRuleGroupOutcome;
                typedef std::future<CreateVpcAclRuleGroupOutcome> CreateVpcAclRuleGroupOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::CreateVpcAclRuleGroupRequest&, CreateVpcAclRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAclRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeAclRuleResponse> DeleteEdgeAclRuleOutcome;
                typedef std::future<DeleteEdgeAclRuleOutcome> DeleteEdgeAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DeleteEdgeAclRuleRequest&, DeleteEdgeAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatAclRuleResponse> DeleteNatAclRuleOutcome;
                typedef std::future<DeleteNatAclRuleOutcome> DeleteNatAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DeleteNatAclRuleRequest&, DeleteNatAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleGroupResponse> DeleteRuleGroupOutcome;
                typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DeleteRuleGroupRequest&, DeleteRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupRuleResponse> DeleteSecurityGroupRuleOutcome;
                typedef std::future<DeleteSecurityGroupRuleOutcome> DeleteSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DeleteSecurityGroupRuleRequest&, DeleteSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStrategyResponse> DeleteStrategyOutcome;
                typedef std::future<DeleteStrategyOutcome> DeleteStrategyOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DeleteStrategyRequest&, DeleteStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcAclRuleResponse> DeleteVpcAclRuleOutcome;
                typedef std::future<DeleteVpcAclRuleOutcome> DeleteVpcAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DeleteVpcAclRuleRequest&, DeleteVpcAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeAclRulesResponse> DescribeEdgeAclRulesOutcome;
                typedef std::future<DescribeEdgeAclRulesOutcome> DescribeEdgeAclRulesOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeEdgeAclRulesRequest&, DescribeEdgeAclRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeAclRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatAclRulesResponse> DescribeNatAclRulesOutcome;
                typedef std::future<DescribeNatAclRulesOutcome> DescribeNatAclRulesOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeNatAclRulesRequest&, DescribeNatAclRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatAclRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganMembersResponse> DescribeOrganMembersOutcome;
                typedef std::future<DescribeOrganMembersOutcome> DescribeOrganMembersOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeOrganMembersRequest&, DescribeOrganMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganSummaryResponse> DescribeOrganSummaryOutcome;
                typedef std::future<DescribeOrganSummaryOutcome> DescribeOrganSummaryOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeOrganSummaryRequest&, DescribeOrganSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyRiskAccountProductStatsResponse> DescribePolicyRiskAccountProductStatsOutcome;
                typedef std::future<DescribePolicyRiskAccountProductStatsOutcome> DescribePolicyRiskAccountProductStatsOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribePolicyRiskAccountProductStatsRequest&, DescribePolicyRiskAccountProductStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyRiskAccountProductStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskAnalysisDetailsResponse> DescribeRiskAnalysisDetailsOutcome;
                typedef std::future<DescribeRiskAnalysisDetailsOutcome> DescribeRiskAnalysisDetailsOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeRiskAnalysisDetailsRequest&, DescribeRiskAnalysisDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskAnalysisDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCategoryStatsResponse> DescribeRiskCategoryStatsOutcome;
                typedef std::future<DescribeRiskCategoryStatsOutcome> DescribeRiskCategoryStatsOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeRiskCategoryStatsRequest&, DescribeRiskCategoryStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCategoryStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskListResponse> DescribeRiskListOutcome;
                typedef std::future<DescribeRiskListOutcome> DescribeRiskListOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeRiskListRequest&, DescribeRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupRuleResponse> DescribeSecurityGroupRuleOutcome;
                typedef std::future<DescribeSecurityGroupRuleOutcome> DescribeSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeSecurityGroupRuleRequest&, DescribeSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupRulesResponse> DescribeSecurityGroupRulesOutcome;
                typedef std::future<DescribeSecurityGroupRulesOutcome> DescribeSecurityGroupRulesOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeSecurityGroupRulesRequest&, DescribeSecurityGroupRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategiesResponse> DescribeStrategiesOutcome;
                typedef std::future<DescribeStrategiesOutcome> DescribeStrategiesOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeStrategiesRequest&, DescribeStrategiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyResponse> DescribeStrategyOutcome;
                typedef std::future<DescribeStrategyOutcome> DescribeStrategyOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeStrategyRequest&, DescribeStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyAccountsResponse> DescribeStrategyAccountsOutcome;
                typedef std::future<DescribeStrategyAccountsOutcome> DescribeStrategyAccountsOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeStrategyAccountsRequest&, DescribeStrategyAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyDispatchStatusResponse> DescribeStrategyDispatchStatusOutcome;
                typedef std::future<DescribeStrategyDispatchStatusOutcome> DescribeStrategyDispatchStatusOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeStrategyDispatchStatusRequest&, DescribeStrategyDispatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyDispatchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAclRulesResponse> DescribeVpcAclRulesOutcome;
                typedef std::future<DescribeVpcAclRulesOutcome> DescribeVpcAclRulesOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DescribeVpcAclRulesRequest&, DescribeVpcAclRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAclRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DispatchStrategyResponse> DispatchStrategyOutcome;
                typedef std::future<DispatchStrategyOutcome> DispatchStrategyOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::DispatchStrategyRequest&, DispatchStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DispatchStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnorePolicyRiskResponse> IgnorePolicyRiskOutcome;
                typedef std::future<IgnorePolicyRiskOutcome> IgnorePolicyRiskOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::IgnorePolicyRiskRequest&, IgnorePolicyRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnorePolicyRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeAclRuleResponse> ModifyEdgeAclRuleOutcome;
                typedef std::future<ModifyEdgeAclRuleOutcome> ModifyEdgeAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyEdgeAclRuleRequest&, ModifyEdgeAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeAclRuleSequenceResponse> ModifyEdgeAclRuleSequenceOutcome;
                typedef std::future<ModifyEdgeAclRuleSequenceOutcome> ModifyEdgeAclRuleSequenceOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyEdgeAclRuleSequenceRequest&, ModifyEdgeAclRuleSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeAclRuleSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatAclRuleResponse> ModifyNatAclRuleOutcome;
                typedef std::future<ModifyNatAclRuleOutcome> ModifyNatAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyNatAclRuleRequest&, ModifyNatAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatAclRuleSequenceResponse> ModifyNatAclRuleSequenceOutcome;
                typedef std::future<ModifyNatAclRuleSequenceOutcome> ModifyNatAclRuleSequenceOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyNatAclRuleSequenceRequest&, ModifyNatAclRuleSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatAclRuleSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleGroupResponse> ModifyRuleGroupOutcome;
                typedef std::future<ModifyRuleGroupOutcome> ModifyRuleGroupOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyRuleGroupRequest&, ModifyRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupRuleResponse> ModifySecurityGroupRuleOutcome;
                typedef std::future<ModifySecurityGroupRuleOutcome> ModifySecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifySecurityGroupRuleRequest&, ModifySecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStrategyResponse> ModifyStrategyOutcome;
                typedef std::future<ModifyStrategyOutcome> ModifyStrategyOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyStrategyRequest&, ModifyStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStrategySequenceResponse> ModifyStrategySequenceOutcome;
                typedef std::future<ModifyStrategySequenceOutcome> ModifyStrategySequenceOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyStrategySequenceRequest&, ModifyStrategySequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategySequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAclRuleResponse> ModifyVpcAclRuleOutcome;
                typedef std::future<ModifyVpcAclRuleOutcome> ModifyVpcAclRuleOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyVpcAclRuleRequest&, ModifyVpcAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAclRuleSequenceResponse> ModifyVpcAclRuleSequenceOutcome;
                typedef std::future<ModifyVpcAclRuleSequenceOutcome> ModifyVpcAclRuleSequenceOutcomeCallable;
                typedef std::function<void(const FwmClient*, const Model::ModifyVpcAclRuleSequenceRequest&, ModifyVpcAclRuleSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAclRuleSequenceAsyncHandler;



                /**
                 *取消忽略策略风险
                 * @param req CancelIgnorePolicyRiskRequest
                 * @return CancelIgnorePolicyRiskOutcome
                 */
                CancelIgnorePolicyRiskOutcome CancelIgnorePolicyRisk(const Model::CancelIgnorePolicyRiskRequest &request);
                void CancelIgnorePolicyRiskAsync(const Model::CancelIgnorePolicyRiskRequest& request, const CancelIgnorePolicyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelIgnorePolicyRiskOutcomeCallable CancelIgnorePolicyRiskCallable(const Model::CancelIgnorePolicyRiskRequest& request);

                /**
                 *创建策略风险分析任务
                 * @param req CreateAnalyzePolicyTaskRequest
                 * @return CreateAnalyzePolicyTaskOutcome
                 */
                CreateAnalyzePolicyTaskOutcome CreateAnalyzePolicyTask(const Model::CreateAnalyzePolicyTaskRequest &request);
                void CreateAnalyzePolicyTaskAsync(const Model::CreateAnalyzePolicyTaskRequest& request, const CreateAnalyzePolicyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnalyzePolicyTaskOutcomeCallable CreateAnalyzePolicyTaskCallable(const Model::CreateAnalyzePolicyTaskRequest& request);

                /**
                 *向已有的互联网边界ACL规则组中添加规则。需要先创建规则组，然后通过此接口添加规则。
                 * @param req CreateEdgeAclRuleRequest
                 * @return CreateEdgeAclRuleOutcome
                 */
                CreateEdgeAclRuleOutcome CreateEdgeAclRule(const Model::CreateEdgeAclRuleRequest &request);
                void CreateEdgeAclRuleAsync(const Model::CreateEdgeAclRuleRequest& request, const CreateEdgeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeAclRuleOutcomeCallable CreateEdgeAclRuleCallable(const Model::CreateEdgeAclRuleRequest& request);

                /**
                 *创建互联网边界ACL规则组，支持同时创建多条规则。Product 必须为 cfw_edge_acl。规则支持 IP、域名、参数模板、实例、标签等多种源/目标类型。
                 * @param req CreateEdgeAclRuleGroupRequest
                 * @return CreateEdgeAclRuleGroupOutcome
                 */
                CreateEdgeAclRuleGroupOutcome CreateEdgeAclRuleGroup(const Model::CreateEdgeAclRuleGroupRequest &request);
                void CreateEdgeAclRuleGroupAsync(const Model::CreateEdgeAclRuleGroupRequest& request, const CreateEdgeAclRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeAclRuleGroupOutcomeCallable CreateEdgeAclRuleGroupCallable(const Model::CreateEdgeAclRuleGroupRequest& request);

                /**
                 *在已有规则组中添加NAT ACL规则
                 * @param req CreateNatAclRuleRequest
                 * @return CreateNatAclRuleOutcome
                 */
                CreateNatAclRuleOutcome CreateNatAclRule(const Model::CreateNatAclRuleRequest &request);
                void CreateNatAclRuleAsync(const Model::CreateNatAclRuleRequest& request, const CreateNatAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatAclRuleOutcomeCallable CreateNatAclRuleCallable(const Model::CreateNatAclRuleRequest& request);

                /**
                 *创建NAT ACL规则组（NAT边界防火墙规则组管理）
                 * @param req CreateNatAclRuleGroupRequest
                 * @return CreateNatAclRuleGroupOutcome
                 */
                CreateNatAclRuleGroupOutcome CreateNatAclRuleGroup(const Model::CreateNatAclRuleGroupRequest &request);
                void CreateNatAclRuleGroupAsync(const Model::CreateNatAclRuleGroupRequest& request, const CreateNatAclRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatAclRuleGroupOutcomeCallable CreateNatAclRuleGroupCallable(const Model::CreateNatAclRuleGroupRequest& request);

                /**
                 *规则组编辑时添加规则（规则组管理）
                 * @param req CreateSecurityGroupRuleRequest
                 * @return CreateSecurityGroupRuleOutcome
                 */
                CreateSecurityGroupRuleOutcome CreateSecurityGroupRule(const Model::CreateSecurityGroupRuleRequest &request);
                void CreateSecurityGroupRuleAsync(const Model::CreateSecurityGroupRuleRequest& request, const CreateSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupRuleOutcomeCallable CreateSecurityGroupRuleCallable(const Model::CreateSecurityGroupRuleRequest& request);

                /**
                 *创建规则组（规则组管理）
                 * @param req CreateSecurityGroupRuleGroupRequest
                 * @return CreateSecurityGroupRuleGroupOutcome
                 */
                CreateSecurityGroupRuleGroupOutcome CreateSecurityGroupRuleGroup(const Model::CreateSecurityGroupRuleGroupRequest &request);
                void CreateSecurityGroupRuleGroupAsync(const Model::CreateSecurityGroupRuleGroupRequest& request, const CreateSecurityGroupRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupRuleGroupOutcomeCallable CreateSecurityGroupRuleGroupCallable(const Model::CreateSecurityGroupRuleGroupRequest& request);

                /**
                 *创建策略
                 * @param req CreateStrategyRequest
                 * @return CreateStrategyOutcome
                 */
                CreateStrategyOutcome CreateStrategy(const Model::CreateStrategyRequest &request);
                void CreateStrategyAsync(const Model::CreateStrategyRequest& request, const CreateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStrategyOutcomeCallable CreateStrategyCallable(const Model::CreateStrategyRequest& request);

                /**
                 *在已有规则组中添加VPC ACL规则
                 * @param req CreateVpcAclRuleRequest
                 * @return CreateVpcAclRuleOutcome
                 */
                CreateVpcAclRuleOutcome CreateVpcAclRule(const Model::CreateVpcAclRuleRequest &request);
                void CreateVpcAclRuleAsync(const Model::CreateVpcAclRuleRequest& request, const CreateVpcAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcAclRuleOutcomeCallable CreateVpcAclRuleCallable(const Model::CreateVpcAclRuleRequest& request);

                /**
                 *创建VPC ACL规则组（VPC间防火墙规则组管理）
                 * @param req CreateVpcAclRuleGroupRequest
                 * @return CreateVpcAclRuleGroupOutcome
                 */
                CreateVpcAclRuleGroupOutcome CreateVpcAclRuleGroup(const Model::CreateVpcAclRuleGroupRequest &request);
                void CreateVpcAclRuleGroupAsync(const Model::CreateVpcAclRuleGroupRequest& request, const CreateVpcAclRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcAclRuleGroupOutcomeCallable CreateVpcAclRuleGroupCallable(const Model::CreateVpcAclRuleGroupRequest& request);

                /**
                 *批量删除互联网边界ACL规则。支持一次删除多条规则。
                 * @param req DeleteEdgeAclRuleRequest
                 * @return DeleteEdgeAclRuleOutcome
                 */
                DeleteEdgeAclRuleOutcome DeleteEdgeAclRule(const Model::DeleteEdgeAclRuleRequest &request);
                void DeleteEdgeAclRuleAsync(const Model::DeleteEdgeAclRuleRequest& request, const DeleteEdgeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeAclRuleOutcomeCallable DeleteEdgeAclRuleCallable(const Model::DeleteEdgeAclRuleRequest& request);

                /**
                 *删除NAT ACL规则
                 * @param req DeleteNatAclRuleRequest
                 * @return DeleteNatAclRuleOutcome
                 */
                DeleteNatAclRuleOutcome DeleteNatAclRule(const Model::DeleteNatAclRuleRequest &request);
                void DeleteNatAclRuleAsync(const Model::DeleteNatAclRuleRequest& request, const DeleteNatAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatAclRuleOutcomeCallable DeleteNatAclRuleCallable(const Model::DeleteNatAclRuleRequest& request);

                /**
                 *删除规则组
                 * @param req DeleteRuleGroupRequest
                 * @return DeleteRuleGroupOutcome
                 */
                DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest &request);
                void DeleteRuleGroupAsync(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request);

                /**
                 *删除规则（规则组管理）
                 * @param req DeleteSecurityGroupRuleRequest
                 * @return DeleteSecurityGroupRuleOutcome
                 */
                DeleteSecurityGroupRuleOutcome DeleteSecurityGroupRule(const Model::DeleteSecurityGroupRuleRequest &request);
                void DeleteSecurityGroupRuleAsync(const Model::DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupRuleOutcomeCallable DeleteSecurityGroupRuleCallable(const Model::DeleteSecurityGroupRuleRequest& request);

                /**
                 *删除策略
                 * @param req DeleteStrategyRequest
                 * @return DeleteStrategyOutcome
                 */
                DeleteStrategyOutcome DeleteStrategy(const Model::DeleteStrategyRequest &request);
                void DeleteStrategyAsync(const Model::DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStrategyOutcomeCallable DeleteStrategyCallable(const Model::DeleteStrategyRequest& request);

                /**
                 *删除VPC ACL规则
                 * @param req DeleteVpcAclRuleRequest
                 * @return DeleteVpcAclRuleOutcome
                 */
                DeleteVpcAclRuleOutcome DeleteVpcAclRule(const Model::DeleteVpcAclRuleRequest &request);
                void DeleteVpcAclRuleAsync(const Model::DeleteVpcAclRuleRequest& request, const DeleteVpcAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcAclRuleOutcomeCallable DeleteVpcAclRuleCallable(const Model::DeleteVpcAclRuleRequest& request);

                /**
                 *查询指定规则组下的互联网边界ACL规则列表。支持分页和多种过滤条件。
                 * @param req DescribeEdgeAclRulesRequest
                 * @return DescribeEdgeAclRulesOutcome
                 */
                DescribeEdgeAclRulesOutcome DescribeEdgeAclRules(const Model::DescribeEdgeAclRulesRequest &request);
                void DescribeEdgeAclRulesAsync(const Model::DescribeEdgeAclRulesRequest& request, const DescribeEdgeAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeAclRulesOutcomeCallable DescribeEdgeAclRulesCallable(const Model::DescribeEdgeAclRulesRequest& request);

                /**
                 *查询NAT ACL规则列表
                 * @param req DescribeNatAclRulesRequest
                 * @return DescribeNatAclRulesOutcome
                 */
                DescribeNatAclRulesOutcome DescribeNatAclRules(const Model::DescribeNatAclRulesRequest &request);
                void DescribeNatAclRulesAsync(const Model::DescribeNatAclRulesRequest& request, const DescribeNatAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatAclRulesOutcomeCallable DescribeNatAclRulesCallable(const Model::DescribeNatAclRulesRequest& request);

                /**
                 *查询集团下所有纳管成员账号列表，支持分页、排序和多条件筛选，仅管理员可调用
                 * @param req DescribeOrganMembersRequest
                 * @return DescribeOrganMembersOutcome
                 */
                DescribeOrganMembersOutcome DescribeOrganMembers(const Model::DescribeOrganMembersRequest &request);
                void DescribeOrganMembersAsync(const Model::DescribeOrganMembersRequest& request, const DescribeOrganMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganMembersOutcomeCallable DescribeOrganMembersCallable(const Model::DescribeOrganMembersRequest& request);

                /**
                 *获取集团概览信息，包括集团名称、管理员信息、成员数量等
                 * @param req DescribeOrganSummaryRequest
                 * @return DescribeOrganSummaryOutcome
                 */
                DescribeOrganSummaryOutcome DescribeOrganSummary(const Model::DescribeOrganSummaryRequest &request);
                void DescribeOrganSummaryAsync(const Model::DescribeOrganSummaryRequest& request, const DescribeOrganSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganSummaryOutcomeCallable DescribeOrganSummaryCallable(const Model::DescribeOrganSummaryRequest& request);

                /**
                 *查询账号+产品维度风险统计，按账号分组返回各产品的体检策略数、待整改风险数、整改率、最近体检时间等信息，支持按账号名称/ID搜索以及仅看待整改、仅超时未体检筛选
                 * @param req DescribePolicyRiskAccountProductStatsRequest
                 * @return DescribePolicyRiskAccountProductStatsOutcome
                 */
                DescribePolicyRiskAccountProductStatsOutcome DescribePolicyRiskAccountProductStats(const Model::DescribePolicyRiskAccountProductStatsRequest &request);
                void DescribePolicyRiskAccountProductStatsAsync(const Model::DescribePolicyRiskAccountProductStatsRequest& request, const DescribePolicyRiskAccountProductStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyRiskAccountProductStatsOutcomeCallable DescribePolicyRiskAccountProductStatsCallable(const Model::DescribePolicyRiskAccountProductStatsRequest& request);

                /**
                 *获取实时分析风险详情
                 * @param req DescribeRiskAnalysisDetailsRequest
                 * @return DescribeRiskAnalysisDetailsOutcome
                 */
                DescribeRiskAnalysisDetailsOutcome DescribeRiskAnalysisDetails(const Model::DescribeRiskAnalysisDetailsRequest &request);
                void DescribeRiskAnalysisDetailsAsync(const Model::DescribeRiskAnalysisDetailsRequest& request, const DescribeRiskAnalysisDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskAnalysisDetailsOutcomeCallable DescribeRiskAnalysisDetailsCallable(const Model::DescribeRiskAnalysisDetailsRequest& request);

                /**
                 *查询策略体检风险分类统计数据,包含各类风险的规则数量、处置状态、整改率等信息
                 * @param req DescribeRiskCategoryStatsRequest
                 * @return DescribeRiskCategoryStatsOutcome
                 */
                DescribeRiskCategoryStatsOutcome DescribeRiskCategoryStats(const Model::DescribeRiskCategoryStatsRequest &request);
                void DescribeRiskCategoryStatsAsync(const Model::DescribeRiskCategoryStatsRequest& request, const DescribeRiskCategoryStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCategoryStatsOutcomeCallable DescribeRiskCategoryStatsCallable(const Model::DescribeRiskCategoryStatsRequest& request);

                /**
                 *查询用户所有规则的策略问题
                 * @param req DescribeRiskListRequest
                 * @return DescribeRiskListOutcome
                 */
                DescribeRiskListOutcome DescribeRiskList(const Model::DescribeRiskListRequest &request);
                void DescribeRiskListAsync(const Model::DescribeRiskListRequest& request, const DescribeRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskListOutcomeCallable DescribeRiskListCallable(const Model::DescribeRiskListRequest& request);

                /**
                 *查询规则详情（规则组管理）
                 * @param req DescribeSecurityGroupRuleRequest
                 * @return DescribeSecurityGroupRuleOutcome
                 */
                DescribeSecurityGroupRuleOutcome DescribeSecurityGroupRule(const Model::DescribeSecurityGroupRuleRequest &request);
                void DescribeSecurityGroupRuleAsync(const Model::DescribeSecurityGroupRuleRequest& request, const DescribeSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupRuleOutcomeCallable DescribeSecurityGroupRuleCallable(const Model::DescribeSecurityGroupRuleRequest& request);

                /**
                 *查询规则组中规则列表接口
                 * @param req DescribeSecurityGroupRulesRequest
                 * @return DescribeSecurityGroupRulesOutcome
                 */
                DescribeSecurityGroupRulesOutcome DescribeSecurityGroupRules(const Model::DescribeSecurityGroupRulesRequest &request);
                void DescribeSecurityGroupRulesAsync(const Model::DescribeSecurityGroupRulesRequest& request, const DescribeSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupRulesOutcomeCallable DescribeSecurityGroupRulesCallable(const Model::DescribeSecurityGroupRulesRequest& request);

                /**
                 *查询策略列表
                 * @param req DescribeStrategiesRequest
                 * @return DescribeStrategiesOutcome
                 */
                DescribeStrategiesOutcome DescribeStrategies(const Model::DescribeStrategiesRequest &request);
                void DescribeStrategiesAsync(const Model::DescribeStrategiesRequest& request, const DescribeStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategiesOutcomeCallable DescribeStrategiesCallable(const Model::DescribeStrategiesRequest& request);

                /**
                 *查询策略详情
                 * @param req DescribeStrategyRequest
                 * @return DescribeStrategyOutcome
                 */
                DescribeStrategyOutcome DescribeStrategy(const Model::DescribeStrategyRequest &request);
                void DescribeStrategyAsync(const Model::DescribeStrategyRequest& request, const DescribeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyOutcomeCallable DescribeStrategyCallable(const Model::DescribeStrategyRequest& request);

                /**
                 *查看防火墙管理规则下发账号列表
                 * @param req DescribeStrategyAccountsRequest
                 * @return DescribeStrategyAccountsOutcome
                 */
                DescribeStrategyAccountsOutcome DescribeStrategyAccounts(const Model::DescribeStrategyAccountsRequest &request);
                void DescribeStrategyAccountsAsync(const Model::DescribeStrategyAccountsRequest& request, const DescribeStrategyAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyAccountsOutcomeCallable DescribeStrategyAccountsCallable(const Model::DescribeStrategyAccountsRequest& request);

                /**
                 *查询策略下发状态
                 * @param req DescribeStrategyDispatchStatusRequest
                 * @return DescribeStrategyDispatchStatusOutcome
                 */
                DescribeStrategyDispatchStatusOutcome DescribeStrategyDispatchStatus(const Model::DescribeStrategyDispatchStatusRequest &request);
                void DescribeStrategyDispatchStatusAsync(const Model::DescribeStrategyDispatchStatusRequest& request, const DescribeStrategyDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyDispatchStatusOutcomeCallable DescribeStrategyDispatchStatusCallable(const Model::DescribeStrategyDispatchStatusRequest& request);

                /**
                 *查询VPC ACL规则列表
                 * @param req DescribeVpcAclRulesRequest
                 * @return DescribeVpcAclRulesOutcome
                 */
                DescribeVpcAclRulesOutcome DescribeVpcAclRules(const Model::DescribeVpcAclRulesRequest &request);
                void DescribeVpcAclRulesAsync(const Model::DescribeVpcAclRulesRequest& request, const DescribeVpcAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAclRulesOutcomeCallable DescribeVpcAclRulesCallable(const Model::DescribeVpcAclRulesRequest& request);

                /**
                 *下发策略
                 * @param req DispatchStrategyRequest
                 * @return DispatchStrategyOutcome
                 */
                DispatchStrategyOutcome DispatchStrategy(const Model::DispatchStrategyRequest &request);
                void DispatchStrategyAsync(const Model::DispatchStrategyRequest& request, const DispatchStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DispatchStrategyOutcomeCallable DispatchStrategyCallable(const Model::DispatchStrategyRequest& request);

                /**
                 *忽略策略问题
                 * @param req IgnorePolicyRiskRequest
                 * @return IgnorePolicyRiskOutcome
                 */
                IgnorePolicyRiskOutcome IgnorePolicyRisk(const Model::IgnorePolicyRiskRequest &request);
                void IgnorePolicyRiskAsync(const Model::IgnorePolicyRiskRequest& request, const IgnorePolicyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnorePolicyRiskOutcomeCallable IgnorePolicyRiskCallable(const Model::IgnorePolicyRiskRequest& request);

                /**
                 *修改互联网边界ACL规则。Rule 参数中必须包含 RuleId 用于指定要修改的规则。
                 * @param req ModifyEdgeAclRuleRequest
                 * @return ModifyEdgeAclRuleOutcome
                 */
                ModifyEdgeAclRuleOutcome ModifyEdgeAclRule(const Model::ModifyEdgeAclRuleRequest &request);
                void ModifyEdgeAclRuleAsync(const Model::ModifyEdgeAclRuleRequest& request, const ModifyEdgeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeAclRuleOutcomeCallable ModifyEdgeAclRuleCallable(const Model::ModifyEdgeAclRuleRequest& request);

                /**
                 *批量调整互联网边界ACL规则的执行顺序。Sequences 参数必须包含所有受影响的规则序号映射关系。
                 * @param req ModifyEdgeAclRuleSequenceRequest
                 * @return ModifyEdgeAclRuleSequenceOutcome
                 */
                ModifyEdgeAclRuleSequenceOutcome ModifyEdgeAclRuleSequence(const Model::ModifyEdgeAclRuleSequenceRequest &request);
                void ModifyEdgeAclRuleSequenceAsync(const Model::ModifyEdgeAclRuleSequenceRequest& request, const ModifyEdgeAclRuleSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeAclRuleSequenceOutcomeCallable ModifyEdgeAclRuleSequenceCallable(const Model::ModifyEdgeAclRuleSequenceRequest& request);

                /**
                 *修改NAT ACL规则
                 * @param req ModifyNatAclRuleRequest
                 * @return ModifyNatAclRuleOutcome
                 */
                ModifyNatAclRuleOutcome ModifyNatAclRule(const Model::ModifyNatAclRuleRequest &request);
                void ModifyNatAclRuleAsync(const Model::ModifyNatAclRuleRequest& request, const ModifyNatAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatAclRuleOutcomeCallable ModifyNatAclRuleCallable(const Model::ModifyNatAclRuleRequest& request);

                /**
                 *调整NAT ACL规则优先级顺序
                 * @param req ModifyNatAclRuleSequenceRequest
                 * @return ModifyNatAclRuleSequenceOutcome
                 */
                ModifyNatAclRuleSequenceOutcome ModifyNatAclRuleSequence(const Model::ModifyNatAclRuleSequenceRequest &request);
                void ModifyNatAclRuleSequenceAsync(const Model::ModifyNatAclRuleSequenceRequest& request, const ModifyNatAclRuleSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatAclRuleSequenceOutcomeCallable ModifyNatAclRuleSequenceCallable(const Model::ModifyNatAclRuleSequenceRequest& request);

                /**
                 *修改规则组信息（规则组管理）
                 * @param req ModifyRuleGroupRequest
                 * @return ModifyRuleGroupOutcome
                 */
                ModifyRuleGroupOutcome ModifyRuleGroup(const Model::ModifyRuleGroupRequest &request);
                void ModifyRuleGroupAsync(const Model::ModifyRuleGroupRequest& request, const ModifyRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleGroupOutcomeCallable ModifyRuleGroupCallable(const Model::ModifyRuleGroupRequest& request);

                /**
                 *修改规则（规则组管理）
                 * @param req ModifySecurityGroupRuleRequest
                 * @return ModifySecurityGroupRuleOutcome
                 */
                ModifySecurityGroupRuleOutcome ModifySecurityGroupRule(const Model::ModifySecurityGroupRuleRequest &request);
                void ModifySecurityGroupRuleAsync(const Model::ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupRuleOutcomeCallable ModifySecurityGroupRuleCallable(const Model::ModifySecurityGroupRuleRequest& request);

                /**
                 *修改策略信息
                 * @param req ModifyStrategyRequest
                 * @return ModifyStrategyOutcome
                 */
                ModifyStrategyOutcome ModifyStrategy(const Model::ModifyStrategyRequest &request);
                void ModifyStrategyAsync(const Model::ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStrategyOutcomeCallable ModifyStrategyCallable(const Model::ModifyStrategyRequest& request);

                /**
                 *快速排序修改策略优先级
                 * @param req ModifyStrategySequenceRequest
                 * @return ModifyStrategySequenceOutcome
                 */
                ModifyStrategySequenceOutcome ModifyStrategySequence(const Model::ModifyStrategySequenceRequest &request);
                void ModifyStrategySequenceAsync(const Model::ModifyStrategySequenceRequest& request, const ModifyStrategySequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStrategySequenceOutcomeCallable ModifyStrategySequenceCallable(const Model::ModifyStrategySequenceRequest& request);

                /**
                 *修改VPC ACL规则
                 * @param req ModifyVpcAclRuleRequest
                 * @return ModifyVpcAclRuleOutcome
                 */
                ModifyVpcAclRuleOutcome ModifyVpcAclRule(const Model::ModifyVpcAclRuleRequest &request);
                void ModifyVpcAclRuleAsync(const Model::ModifyVpcAclRuleRequest& request, const ModifyVpcAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAclRuleOutcomeCallable ModifyVpcAclRuleCallable(const Model::ModifyVpcAclRuleRequest& request);

                /**
                 *调整VPC ACL规则优先级顺序
                 * @param req ModifyVpcAclRuleSequenceRequest
                 * @return ModifyVpcAclRuleSequenceOutcome
                 */
                ModifyVpcAclRuleSequenceOutcome ModifyVpcAclRuleSequence(const Model::ModifyVpcAclRuleSequenceRequest &request);
                void ModifyVpcAclRuleSequenceAsync(const Model::ModifyVpcAclRuleSequenceRequest& request, const ModifyVpcAclRuleSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAclRuleSequenceOutcomeCallable ModifyVpcAclRuleSequenceCallable(const Model::ModifyVpcAclRuleSequenceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_FWMCLIENT_H_
