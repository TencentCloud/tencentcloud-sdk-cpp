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

#ifndef TENCENTCLOUD_CONFIG_V20220802_CONFIGCLIENT_H_
#define TENCENTCLOUD_CONFIG_V20220802_CONFIGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/config/v20220802/model/AddAggregateCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/AddAggregateCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/AddAggregateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/AddAggregateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/AddAlarmPolicyRequest.h>
#include <tencentcloud/config/v20220802/model/AddAlarmPolicyResponse.h>
#include <tencentcloud/config/v20220802/model/AddCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/AddCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/AddConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/AddConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/CloseAggregateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/CloseAggregateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/CloseConfigRecorderRequest.h>
#include <tencentcloud/config/v20220802/model/CloseConfigRecorderResponse.h>
#include <tencentcloud/config/v20220802/model/CloseConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/CloseConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/CreateAggregatorRequest.h>
#include <tencentcloud/config/v20220802/model/CreateAggregatorResponse.h>
#include <tencentcloud/config/v20220802/model/CreateRemediationRequest.h>
#include <tencentcloud/config/v20220802/model/CreateRemediationResponse.h>
#include <tencentcloud/config/v20220802/model/DeleteAggregateCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DeleteAggregateCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/DeleteAggregateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/DeleteAggregateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/DeleteAlarmPolicyRequest.h>
#include <tencentcloud/config/v20220802/model/DeleteAlarmPolicyResponse.h>
#include <tencentcloud/config/v20220802/model/DeleteCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DeleteCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/DeleteConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/DeleteConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/DeleteRemediationsRequest.h>
#include <tencentcloud/config/v20220802/model/DeleteRemediationsResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateConfigDeliverRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateConfigDeliverResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregatorRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeAggregatorResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeConfigDeliverRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeConfigDeliverResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeConfigRecorderRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeConfigRecorderResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeDiscoveredResourceRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeDiscoveredResourceResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeSystemCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeSystemCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/DescribeSystemRuleRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeSystemRuleResponse.h>
#include <tencentcloud/config/v20220802/model/DetachAggregateConfigRuleToCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DetachAggregateConfigRuleToCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/DetachConfigRuleToCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/DetachConfigRuleToCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/ListAggregateCompliancePacksRequest.h>
#include <tencentcloud/config/v20220802/model/ListAggregateCompliancePacksResponse.h>
#include <tencentcloud/config/v20220802/model/ListAggregateConfigRuleEvaluationResultsRequest.h>
#include <tencentcloud/config/v20220802/model/ListAggregateConfigRuleEvaluationResultsResponse.h>
#include <tencentcloud/config/v20220802/model/ListAggregateConfigRulesRequest.h>
#include <tencentcloud/config/v20220802/model/ListAggregateConfigRulesResponse.h>
#include <tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesRequest.h>
#include <tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesResponse.h>
#include <tencentcloud/config/v20220802/model/ListAggregatorsRequest.h>
#include <tencentcloud/config/v20220802/model/ListAggregatorsResponse.h>
#include <tencentcloud/config/v20220802/model/ListAlarmPolicyRequest.h>
#include <tencentcloud/config/v20220802/model/ListAlarmPolicyResponse.h>
#include <tencentcloud/config/v20220802/model/ListCompliancePacksRequest.h>
#include <tencentcloud/config/v20220802/model/ListCompliancePacksResponse.h>
#include <tencentcloud/config/v20220802/model/ListConfigRuleEvaluationResultsRequest.h>
#include <tencentcloud/config/v20220802/model/ListConfigRuleEvaluationResultsResponse.h>
#include <tencentcloud/config/v20220802/model/ListConfigRulesRequest.h>
#include <tencentcloud/config/v20220802/model/ListConfigRulesResponse.h>
#include <tencentcloud/config/v20220802/model/ListDiscoveredResourcesRequest.h>
#include <tencentcloud/config/v20220802/model/ListDiscoveredResourcesResponse.h>
#include <tencentcloud/config/v20220802/model/ListRemediationExecutionsRequest.h>
#include <tencentcloud/config/v20220802/model/ListRemediationExecutionsResponse.h>
#include <tencentcloud/config/v20220802/model/ListRemediationsRequest.h>
#include <tencentcloud/config/v20220802/model/ListRemediationsResponse.h>
#include <tencentcloud/config/v20220802/model/ListResourceTypesRequest.h>
#include <tencentcloud/config/v20220802/model/ListResourceTypesResponse.h>
#include <tencentcloud/config/v20220802/model/ListSystemCompliancePacksRequest.h>
#include <tencentcloud/config/v20220802/model/ListSystemCompliancePacksResponse.h>
#include <tencentcloud/config/v20220802/model/ListSystemRulesRequest.h>
#include <tencentcloud/config/v20220802/model/ListSystemRulesResponse.h>
#include <tencentcloud/config/v20220802/model/OpenAggregateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/OpenAggregateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/OpenConfigRecorderRequest.h>
#include <tencentcloud/config/v20220802/model/OpenConfigRecorderResponse.h>
#include <tencentcloud/config/v20220802/model/OpenConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/OpenConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/PutEvaluationsRequest.h>
#include <tencentcloud/config/v20220802/model/PutEvaluationsResponse.h>
#include <tencentcloud/config/v20220802/model/StartAggregateConfigRuleEvaluationRequest.h>
#include <tencentcloud/config/v20220802/model/StartAggregateConfigRuleEvaluationResponse.h>
#include <tencentcloud/config/v20220802/model/StartConfigRuleEvaluationRequest.h>
#include <tencentcloud/config/v20220802/model/StartConfigRuleEvaluationResponse.h>
#include <tencentcloud/config/v20220802/model/StartRemediationRequest.h>
#include <tencentcloud/config/v20220802/model/StartRemediationResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackStatusRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateCompliancePackStatusResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateConfigDeliverRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateConfigDeliverResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateAggregateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateAlarmPolicyRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateAlarmPolicyResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateCompliancePackRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateCompliancePackResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateCompliancePackStatusRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateCompliancePackStatusResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateConfigDeliverRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateConfigDeliverResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateConfigRecorderRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateConfigRecorderResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateConfigRuleRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateConfigRuleResponse.h>
#include <tencentcloud/config/v20220802/model/UpdateRemediationRequest.h>
#include <tencentcloud/config/v20220802/model/UpdateRemediationResponse.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            class ConfigClient : public AbstractClient
            {
            public:
                ConfigClient(const Credential &credential, const std::string &region);
                ConfigClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAggregateCompliancePackResponse> AddAggregateCompliancePackOutcome;
                typedef std::future<AddAggregateCompliancePackOutcome> AddAggregateCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::AddAggregateCompliancePackRequest&, AddAggregateCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAggregateCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAggregateConfigRuleResponse> AddAggregateConfigRuleOutcome;
                typedef std::future<AddAggregateConfigRuleOutcome> AddAggregateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::AddAggregateConfigRuleRequest&, AddAggregateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAggregateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAlarmPolicyResponse> AddAlarmPolicyOutcome;
                typedef std::future<AddAlarmPolicyOutcome> AddAlarmPolicyOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::AddAlarmPolicyRequest&, AddAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCompliancePackResponse> AddCompliancePackOutcome;
                typedef std::future<AddCompliancePackOutcome> AddCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::AddCompliancePackRequest&, AddCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::AddConfigRuleResponse> AddConfigRuleOutcome;
                typedef std::future<AddConfigRuleOutcome> AddConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::AddConfigRuleRequest&, AddConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseAggregateConfigRuleResponse> CloseAggregateConfigRuleOutcome;
                typedef std::future<CloseAggregateConfigRuleOutcome> CloseAggregateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::CloseAggregateConfigRuleRequest&, CloseAggregateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAggregateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseConfigRecorderResponse> CloseConfigRecorderOutcome;
                typedef std::future<CloseConfigRecorderOutcome> CloseConfigRecorderOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::CloseConfigRecorderRequest&, CloseConfigRecorderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseConfigRecorderAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseConfigRuleResponse> CloseConfigRuleOutcome;
                typedef std::future<CloseConfigRuleOutcome> CloseConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::CloseConfigRuleRequest&, CloseConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAggregatorResponse> CreateAggregatorOutcome;
                typedef std::future<CreateAggregatorOutcome> CreateAggregatorOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::CreateAggregatorRequest&, CreateAggregatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAggregatorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRemediationResponse> CreateRemediationOutcome;
                typedef std::future<CreateRemediationOutcome> CreateRemediationOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::CreateRemediationRequest&, CreateRemediationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRemediationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAggregateCompliancePackResponse> DeleteAggregateCompliancePackOutcome;
                typedef std::future<DeleteAggregateCompliancePackOutcome> DeleteAggregateCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DeleteAggregateCompliancePackRequest&, DeleteAggregateCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAggregateCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAggregateConfigRuleResponse> DeleteAggregateConfigRuleOutcome;
                typedef std::future<DeleteAggregateConfigRuleOutcome> DeleteAggregateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DeleteAggregateConfigRuleRequest&, DeleteAggregateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAggregateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmPolicyResponse> DeleteAlarmPolicyOutcome;
                typedef std::future<DeleteAlarmPolicyOutcome> DeleteAlarmPolicyOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DeleteAlarmPolicyRequest&, DeleteAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompliancePackResponse> DeleteCompliancePackOutcome;
                typedef std::future<DeleteCompliancePackOutcome> DeleteCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DeleteCompliancePackRequest&, DeleteCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigRuleResponse> DeleteConfigRuleOutcome;
                typedef std::future<DeleteConfigRuleOutcome> DeleteConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DeleteConfigRuleRequest&, DeleteConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRemediationsResponse> DeleteRemediationsOutcome;
                typedef std::future<DeleteRemediationsOutcome> DeleteRemediationsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DeleteRemediationsRequest&, DeleteRemediationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRemediationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggregateCompliancePackResponse> DescribeAggregateCompliancePackOutcome;
                typedef std::future<DescribeAggregateCompliancePackOutcome> DescribeAggregateCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeAggregateCompliancePackRequest&, DescribeAggregateCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregateCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggregateConfigDeliverResponse> DescribeAggregateConfigDeliverOutcome;
                typedef std::future<DescribeAggregateConfigDeliverOutcome> DescribeAggregateConfigDeliverOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeAggregateConfigDeliverRequest&, DescribeAggregateConfigDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregateConfigDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggregateConfigRuleResponse> DescribeAggregateConfigRuleOutcome;
                typedef std::future<DescribeAggregateConfigRuleOutcome> DescribeAggregateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeAggregateConfigRuleRequest&, DescribeAggregateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggregateDiscoveredResourceResponse> DescribeAggregateDiscoveredResourceOutcome;
                typedef std::future<DescribeAggregateDiscoveredResourceOutcome> DescribeAggregateDiscoveredResourceOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeAggregateDiscoveredResourceRequest&, DescribeAggregateDiscoveredResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregateDiscoveredResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAggregatorResponse> DescribeAggregatorOutcome;
                typedef std::future<DescribeAggregatorOutcome> DescribeAggregatorOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeAggregatorRequest&, DescribeAggregatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregatorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompliancePackResponse> DescribeCompliancePackOutcome;
                typedef std::future<DescribeCompliancePackOutcome> DescribeCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeCompliancePackRequest&, DescribeCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigDeliverResponse> DescribeConfigDeliverOutcome;
                typedef std::future<DescribeConfigDeliverOutcome> DescribeConfigDeliverOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeConfigDeliverRequest&, DescribeConfigDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigRecorderResponse> DescribeConfigRecorderOutcome;
                typedef std::future<DescribeConfigRecorderOutcome> DescribeConfigRecorderOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeConfigRecorderRequest&, DescribeConfigRecorderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigRecorderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigRuleResponse> DescribeConfigRuleOutcome;
                typedef std::future<DescribeConfigRuleOutcome> DescribeConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeConfigRuleRequest&, DescribeConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiscoveredResourceResponse> DescribeDiscoveredResourceOutcome;
                typedef std::future<DescribeDiscoveredResourceOutcome> DescribeDiscoveredResourceOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeDiscoveredResourceRequest&, DescribeDiscoveredResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiscoveredResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemCompliancePackResponse> DescribeSystemCompliancePackOutcome;
                typedef std::future<DescribeSystemCompliancePackOutcome> DescribeSystemCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeSystemCompliancePackRequest&, DescribeSystemCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemRuleResponse> DescribeSystemRuleOutcome;
                typedef std::future<DescribeSystemRuleOutcome> DescribeSystemRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeSystemRuleRequest&, DescribeSystemRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachAggregateConfigRuleToCompliancePackResponse> DetachAggregateConfigRuleToCompliancePackOutcome;
                typedef std::future<DetachAggregateConfigRuleToCompliancePackOutcome> DetachAggregateConfigRuleToCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DetachAggregateConfigRuleToCompliancePackRequest&, DetachAggregateConfigRuleToCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachAggregateConfigRuleToCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachConfigRuleToCompliancePackResponse> DetachConfigRuleToCompliancePackOutcome;
                typedef std::future<DetachConfigRuleToCompliancePackOutcome> DetachConfigRuleToCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DetachConfigRuleToCompliancePackRequest&, DetachConfigRuleToCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachConfigRuleToCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAggregateCompliancePacksResponse> ListAggregateCompliancePacksOutcome;
                typedef std::future<ListAggregateCompliancePacksOutcome> ListAggregateCompliancePacksOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAggregateCompliancePacksRequest&, ListAggregateCompliancePacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateCompliancePacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAggregateConfigRuleEvaluationResultsResponse> ListAggregateConfigRuleEvaluationResultsOutcome;
                typedef std::future<ListAggregateConfigRuleEvaluationResultsOutcome> ListAggregateConfigRuleEvaluationResultsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAggregateConfigRuleEvaluationResultsRequest&, ListAggregateConfigRuleEvaluationResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateConfigRuleEvaluationResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAggregateConfigRulesResponse> ListAggregateConfigRulesOutcome;
                typedef std::future<ListAggregateConfigRulesOutcome> ListAggregateConfigRulesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAggregateConfigRulesRequest&, ListAggregateConfigRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateConfigRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAggregateDiscoveredResourcesResponse> ListAggregateDiscoveredResourcesOutcome;
                typedef std::future<ListAggregateDiscoveredResourcesOutcome> ListAggregateDiscoveredResourcesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAggregateDiscoveredResourcesRequest&, ListAggregateDiscoveredResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateDiscoveredResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAggregatorsResponse> ListAggregatorsOutcome;
                typedef std::future<ListAggregatorsOutcome> ListAggregatorsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAggregatorsRequest&, ListAggregatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAlarmPolicyResponse> ListAlarmPolicyOutcome;
                typedef std::future<ListAlarmPolicyOutcome> ListAlarmPolicyOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAlarmPolicyRequest&, ListAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCompliancePacksResponse> ListCompliancePacksOutcome;
                typedef std::future<ListCompliancePacksOutcome> ListCompliancePacksOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListCompliancePacksRequest&, ListCompliancePacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCompliancePacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConfigRuleEvaluationResultsResponse> ListConfigRuleEvaluationResultsOutcome;
                typedef std::future<ListConfigRuleEvaluationResultsOutcome> ListConfigRuleEvaluationResultsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListConfigRuleEvaluationResultsRequest&, ListConfigRuleEvaluationResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigRuleEvaluationResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConfigRulesResponse> ListConfigRulesOutcome;
                typedef std::future<ListConfigRulesOutcome> ListConfigRulesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListConfigRulesRequest&, ListConfigRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDiscoveredResourcesResponse> ListDiscoveredResourcesOutcome;
                typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListDiscoveredResourcesRequest&, ListDiscoveredResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDiscoveredResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRemediationExecutionsResponse> ListRemediationExecutionsOutcome;
                typedef std::future<ListRemediationExecutionsOutcome> ListRemediationExecutionsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListRemediationExecutionsRequest&, ListRemediationExecutionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRemediationExecutionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRemediationsResponse> ListRemediationsOutcome;
                typedef std::future<ListRemediationsOutcome> ListRemediationsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListRemediationsRequest&, ListRemediationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRemediationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListResourceTypesResponse> ListResourceTypesOutcome;
                typedef std::future<ListResourceTypesOutcome> ListResourceTypesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListResourceTypesRequest&, ListResourceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSystemCompliancePacksResponse> ListSystemCompliancePacksOutcome;
                typedef std::future<ListSystemCompliancePacksOutcome> ListSystemCompliancePacksOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListSystemCompliancePacksRequest&, ListSystemCompliancePacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemCompliancePacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSystemRulesResponse> ListSystemRulesOutcome;
                typedef std::future<ListSystemRulesOutcome> ListSystemRulesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListSystemRulesRequest&, ListSystemRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAggregateConfigRuleResponse> OpenAggregateConfigRuleOutcome;
                typedef std::future<OpenAggregateConfigRuleOutcome> OpenAggregateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::OpenAggregateConfigRuleRequest&, OpenAggregateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAggregateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenConfigRecorderResponse> OpenConfigRecorderOutcome;
                typedef std::future<OpenConfigRecorderOutcome> OpenConfigRecorderOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::OpenConfigRecorderRequest&, OpenConfigRecorderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenConfigRecorderAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenConfigRuleResponse> OpenConfigRuleOutcome;
                typedef std::future<OpenConfigRuleOutcome> OpenConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::OpenConfigRuleRequest&, OpenConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::PutEvaluationsResponse> PutEvaluationsOutcome;
                typedef std::future<PutEvaluationsOutcome> PutEvaluationsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::PutEvaluationsRequest&, PutEvaluationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutEvaluationsAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAggregateConfigRuleEvaluationResponse> StartAggregateConfigRuleEvaluationOutcome;
                typedef std::future<StartAggregateConfigRuleEvaluationOutcome> StartAggregateConfigRuleEvaluationOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::StartAggregateConfigRuleEvaluationRequest&, StartAggregateConfigRuleEvaluationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAggregateConfigRuleEvaluationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartConfigRuleEvaluationResponse> StartConfigRuleEvaluationOutcome;
                typedef std::future<StartConfigRuleEvaluationOutcome> StartConfigRuleEvaluationOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::StartConfigRuleEvaluationRequest&, StartConfigRuleEvaluationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartConfigRuleEvaluationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartRemediationResponse> StartRemediationOutcome;
                typedef std::future<StartRemediationOutcome> StartRemediationOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::StartRemediationRequest&, StartRemediationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartRemediationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAggregateCompliancePackResponse> UpdateAggregateCompliancePackOutcome;
                typedef std::future<UpdateAggregateCompliancePackOutcome> UpdateAggregateCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateCompliancePackRequest&, UpdateAggregateCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAggregateCompliancePackStatusResponse> UpdateAggregateCompliancePackStatusOutcome;
                typedef std::future<UpdateAggregateCompliancePackStatusOutcome> UpdateAggregateCompliancePackStatusOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateCompliancePackStatusRequest&, UpdateAggregateCompliancePackStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateCompliancePackStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAggregateConfigDeliverResponse> UpdateAggregateConfigDeliverOutcome;
                typedef std::future<UpdateAggregateConfigDeliverOutcome> UpdateAggregateConfigDeliverOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateConfigDeliverRequest&, UpdateAggregateConfigDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateConfigDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAggregateConfigRuleResponse> UpdateAggregateConfigRuleOutcome;
                typedef std::future<UpdateAggregateConfigRuleOutcome> UpdateAggregateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateAggregateConfigRuleRequest&, UpdateAggregateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAggregateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlarmPolicyResponse> UpdateAlarmPolicyOutcome;
                typedef std::future<UpdateAlarmPolicyOutcome> UpdateAlarmPolicyOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateAlarmPolicyRequest&, UpdateAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCompliancePackResponse> UpdateCompliancePackOutcome;
                typedef std::future<UpdateCompliancePackOutcome> UpdateCompliancePackOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateCompliancePackRequest&, UpdateCompliancePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCompliancePackAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCompliancePackStatusResponse> UpdateCompliancePackStatusOutcome;
                typedef std::future<UpdateCompliancePackStatusOutcome> UpdateCompliancePackStatusOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateCompliancePackStatusRequest&, UpdateCompliancePackStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCompliancePackStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConfigDeliverResponse> UpdateConfigDeliverOutcome;
                typedef std::future<UpdateConfigDeliverOutcome> UpdateConfigDeliverOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateConfigDeliverRequest&, UpdateConfigDeliverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigDeliverAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConfigRecorderResponse> UpdateConfigRecorderOutcome;
                typedef std::future<UpdateConfigRecorderOutcome> UpdateConfigRecorderOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateConfigRecorderRequest&, UpdateConfigRecorderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigRecorderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConfigRuleResponse> UpdateConfigRuleOutcome;
                typedef std::future<UpdateConfigRuleOutcome> UpdateConfigRuleOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateConfigRuleRequest&, UpdateConfigRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRemediationResponse> UpdateRemediationOutcome;
                typedef std::future<UpdateRemediationOutcome> UpdateRemediationOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::UpdateRemediationRequest&, UpdateRemediationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRemediationAsyncHandler;



                /**
                 *账号组新建合规包
                 * @param req AddAggregateCompliancePackRequest
                 * @return AddAggregateCompliancePackOutcome
                 */
                AddAggregateCompliancePackOutcome AddAggregateCompliancePack(const Model::AddAggregateCompliancePackRequest &request);
                void AddAggregateCompliancePackAsync(const Model::AddAggregateCompliancePackRequest& request, const AddAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAggregateCompliancePackOutcomeCallable AddAggregateCompliancePackCallable(const Model::AddAggregateCompliancePackRequest& request);

                /**
                 *账号组新建规则
                 * @param req AddAggregateConfigRuleRequest
                 * @return AddAggregateConfigRuleOutcome
                 */
                AddAggregateConfigRuleOutcome AddAggregateConfigRule(const Model::AddAggregateConfigRuleRequest &request);
                void AddAggregateConfigRuleAsync(const Model::AddAggregateConfigRuleRequest& request, const AddAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAggregateConfigRuleOutcomeCallable AddAggregateConfigRuleCallable(const Model::AddAggregateConfigRuleRequest& request);

                /**
                 *新增告警监控规则
                 * @param req AddAlarmPolicyRequest
                 * @return AddAlarmPolicyOutcome
                 */
                AddAlarmPolicyOutcome AddAlarmPolicy(const Model::AddAlarmPolicyRequest &request);
                void AddAlarmPolicyAsync(const Model::AddAlarmPolicyRequest& request, const AddAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAlarmPolicyOutcomeCallable AddAlarmPolicyCallable(const Model::AddAlarmPolicyRequest& request);

                /**
                 *新建合规包
                 * @param req AddCompliancePackRequest
                 * @return AddCompliancePackOutcome
                 */
                AddCompliancePackOutcome AddCompliancePack(const Model::AddCompliancePackRequest &request);
                void AddCompliancePackAsync(const Model::AddCompliancePackRequest& request, const AddCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCompliancePackOutcomeCallable AddCompliancePackCallable(const Model::AddCompliancePackRequest& request);

                /**
                 *新建 规则
                 * @param req AddConfigRuleRequest
                 * @return AddConfigRuleOutcome
                 */
                AddConfigRuleOutcome AddConfigRule(const Model::AddConfigRuleRequest &request);
                void AddConfigRuleAsync(const Model::AddConfigRuleRequest& request, const AddConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddConfigRuleOutcomeCallable AddConfigRuleCallable(const Model::AddConfigRuleRequest& request);

                /**
                 *账号组关闭规则
                 * @param req CloseAggregateConfigRuleRequest
                 * @return CloseAggregateConfigRuleOutcome
                 */
                CloseAggregateConfigRuleOutcome CloseAggregateConfigRule(const Model::CloseAggregateConfigRuleRequest &request);
                void CloseAggregateConfigRuleAsync(const Model::CloseAggregateConfigRuleRequest& request, const CloseAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAggregateConfigRuleOutcomeCallable CloseAggregateConfigRuleCallable(const Model::CloseAggregateConfigRuleRequest& request);

                /**
                 *资源监控管理-关闭监控
                 * @param req CloseConfigRecorderRequest
                 * @return CloseConfigRecorderOutcome
                 */
                CloseConfigRecorderOutcome CloseConfigRecorder(const Model::CloseConfigRecorderRequest &request);
                void CloseConfigRecorderAsync(const Model::CloseConfigRecorderRequest& request, const CloseConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseConfigRecorderOutcomeCallable CloseConfigRecorderCallable(const Model::CloseConfigRecorderRequest& request);

                /**
                 *关闭规则
                 * @param req CloseConfigRuleRequest
                 * @return CloseConfigRuleOutcome
                 */
                CloseConfigRuleOutcome CloseConfigRule(const Model::CloseConfigRuleRequest &request);
                void CloseConfigRuleAsync(const Model::CloseConfigRuleRequest& request, const CloseConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseConfigRuleOutcomeCallable CloseConfigRuleCallable(const Model::CloseConfigRuleRequest& request);

                /**
                 *新建账号组
                 * @param req CreateAggregatorRequest
                 * @return CreateAggregatorOutcome
                 */
                CreateAggregatorOutcome CreateAggregator(const Model::CreateAggregatorRequest &request);
                void CreateAggregatorAsync(const Model::CreateAggregatorRequest& request, const CreateAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAggregatorOutcomeCallable CreateAggregatorCallable(const Model::CreateAggregatorRequest& request);

                /**
                 *新增规则修正设置
                 * @param req CreateRemediationRequest
                 * @return CreateRemediationOutcome
                 */
                CreateRemediationOutcome CreateRemediation(const Model::CreateRemediationRequest &request);
                void CreateRemediationAsync(const Model::CreateRemediationRequest& request, const CreateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRemediationOutcomeCallable CreateRemediationCallable(const Model::CreateRemediationRequest& request);

                /**
                 *账号组删除合规包
                 * @param req DeleteAggregateCompliancePackRequest
                 * @return DeleteAggregateCompliancePackOutcome
                 */
                DeleteAggregateCompliancePackOutcome DeleteAggregateCompliancePack(const Model::DeleteAggregateCompliancePackRequest &request);
                void DeleteAggregateCompliancePackAsync(const Model::DeleteAggregateCompliancePackRequest& request, const DeleteAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAggregateCompliancePackOutcomeCallable DeleteAggregateCompliancePackCallable(const Model::DeleteAggregateCompliancePackRequest& request);

                /**
                 *账号组删除规则
                 * @param req DeleteAggregateConfigRuleRequest
                 * @return DeleteAggregateConfigRuleOutcome
                 */
                DeleteAggregateConfigRuleOutcome DeleteAggregateConfigRule(const Model::DeleteAggregateConfigRuleRequest &request);
                void DeleteAggregateConfigRuleAsync(const Model::DeleteAggregateConfigRuleRequest& request, const DeleteAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAggregateConfigRuleOutcomeCallable DeleteAggregateConfigRuleCallable(const Model::DeleteAggregateConfigRuleRequest& request);

                /**
                 *删除告警规则
                 * @param req DeleteAlarmPolicyRequest
                 * @return DeleteAlarmPolicyOutcome
                 */
                DeleteAlarmPolicyOutcome DeleteAlarmPolicy(const Model::DeleteAlarmPolicyRequest &request);
                void DeleteAlarmPolicyAsync(const Model::DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmPolicyOutcomeCallable DeleteAlarmPolicyCallable(const Model::DeleteAlarmPolicyRequest& request);

                /**
                 *删除合规包
                 * @param req DeleteCompliancePackRequest
                 * @return DeleteCompliancePackOutcome
                 */
                DeleteCompliancePackOutcome DeleteCompliancePack(const Model::DeleteCompliancePackRequest &request);
                void DeleteCompliancePackAsync(const Model::DeleteCompliancePackRequest& request, const DeleteCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompliancePackOutcomeCallable DeleteCompliancePackCallable(const Model::DeleteCompliancePackRequest& request);

                /**
                 *删除规则
                 * @param req DeleteConfigRuleRequest
                 * @return DeleteConfigRuleOutcome
                 */
                DeleteConfigRuleOutcome DeleteConfigRule(const Model::DeleteConfigRuleRequest &request);
                void DeleteConfigRuleAsync(const Model::DeleteConfigRuleRequest& request, const DeleteConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigRuleOutcomeCallable DeleteConfigRuleCallable(const Model::DeleteConfigRuleRequest& request);

                /**
                 *删除规则修正设置
                 * @param req DeleteRemediationsRequest
                 * @return DeleteRemediationsOutcome
                 */
                DeleteRemediationsOutcome DeleteRemediations(const Model::DeleteRemediationsRequest &request);
                void DeleteRemediationsAsync(const Model::DeleteRemediationsRequest& request, const DeleteRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRemediationsOutcomeCallable DeleteRemediationsCallable(const Model::DeleteRemediationsRequest& request);

                /**
                 *账号组合规包详情
                 * @param req DescribeAggregateCompliancePackRequest
                 * @return DescribeAggregateCompliancePackOutcome
                 */
                DescribeAggregateCompliancePackOutcome DescribeAggregateCompliancePack(const Model::DescribeAggregateCompliancePackRequest &request);
                void DescribeAggregateCompliancePackAsync(const Model::DescribeAggregateCompliancePackRequest& request, const DescribeAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggregateCompliancePackOutcomeCallable DescribeAggregateCompliancePackCallable(const Model::DescribeAggregateCompliancePackRequest& request);

                /**
                 *账号组获取投递设置详情
                 * @param req DescribeAggregateConfigDeliverRequest
                 * @return DescribeAggregateConfigDeliverOutcome
                 */
                DescribeAggregateConfigDeliverOutcome DescribeAggregateConfigDeliver(const Model::DescribeAggregateConfigDeliverRequest &request);
                void DescribeAggregateConfigDeliverAsync(const Model::DescribeAggregateConfigDeliverRequest& request, const DescribeAggregateConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggregateConfigDeliverOutcomeCallable DescribeAggregateConfigDeliverCallable(const Model::DescribeAggregateConfigDeliverRequest& request);

                /**
                 *账号组获取规则详情
                 * @param req DescribeAggregateConfigRuleRequest
                 * @return DescribeAggregateConfigRuleOutcome
                 */
                DescribeAggregateConfigRuleOutcome DescribeAggregateConfigRule(const Model::DescribeAggregateConfigRuleRequest &request);
                void DescribeAggregateConfigRuleAsync(const Model::DescribeAggregateConfigRuleRequest& request, const DescribeAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggregateConfigRuleOutcomeCallable DescribeAggregateConfigRuleCallable(const Model::DescribeAggregateConfigRuleRequest& request);

                /**
                 *账号组资源详情
                 * @param req DescribeAggregateDiscoveredResourceRequest
                 * @return DescribeAggregateDiscoveredResourceOutcome
                 */
                DescribeAggregateDiscoveredResourceOutcome DescribeAggregateDiscoveredResource(const Model::DescribeAggregateDiscoveredResourceRequest &request);
                void DescribeAggregateDiscoveredResourceAsync(const Model::DescribeAggregateDiscoveredResourceRequest& request, const DescribeAggregateDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggregateDiscoveredResourceOutcomeCallable DescribeAggregateDiscoveredResourceCallable(const Model::DescribeAggregateDiscoveredResourceRequest& request);

                /**
                 *账号组详情
                 * @param req DescribeAggregatorRequest
                 * @return DescribeAggregatorOutcome
                 */
                DescribeAggregatorOutcome DescribeAggregator(const Model::DescribeAggregatorRequest &request);
                void DescribeAggregatorAsync(const Model::DescribeAggregatorRequest& request, const DescribeAggregatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAggregatorOutcomeCallable DescribeAggregatorCallable(const Model::DescribeAggregatorRequest& request);

                /**
                 *合规包详情
                 * @param req DescribeCompliancePackRequest
                 * @return DescribeCompliancePackOutcome
                 */
                DescribeCompliancePackOutcome DescribeCompliancePack(const Model::DescribeCompliancePackRequest &request);
                void DescribeCompliancePackAsync(const Model::DescribeCompliancePackRequest& request, const DescribeCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompliancePackOutcomeCallable DescribeCompliancePackCallable(const Model::DescribeCompliancePackRequest& request);

                /**
                 *获取投递设置详情
                 * @param req DescribeConfigDeliverRequest
                 * @return DescribeConfigDeliverOutcome
                 */
                DescribeConfigDeliverOutcome DescribeConfigDeliver(const Model::DescribeConfigDeliverRequest &request);
                void DescribeConfigDeliverAsync(const Model::DescribeConfigDeliverRequest& request, const DescribeConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigDeliverOutcomeCallable DescribeConfigDeliverCallable(const Model::DescribeConfigDeliverRequest& request);

                /**
                 *获取监控详情
                 * @param req DescribeConfigRecorderRequest
                 * @return DescribeConfigRecorderOutcome
                 */
                DescribeConfigRecorderOutcome DescribeConfigRecorder(const Model::DescribeConfigRecorderRequest &request);
                void DescribeConfigRecorderAsync(const Model::DescribeConfigRecorderRequest& request, const DescribeConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigRecorderOutcomeCallable DescribeConfigRecorderCallable(const Model::DescribeConfigRecorderRequest& request);

                /**
                 *获取规则详情
                 * @param req DescribeConfigRuleRequest
                 * @return DescribeConfigRuleOutcome
                 */
                DescribeConfigRuleOutcome DescribeConfigRule(const Model::DescribeConfigRuleRequest &request);
                void DescribeConfigRuleAsync(const Model::DescribeConfigRuleRequest& request, const DescribeConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigRuleOutcomeCallable DescribeConfigRuleCallable(const Model::DescribeConfigRuleRequest& request);

                /**
                 *资源详情
                 * @param req DescribeDiscoveredResourceRequest
                 * @return DescribeDiscoveredResourceOutcome
                 */
                DescribeDiscoveredResourceOutcome DescribeDiscoveredResource(const Model::DescribeDiscoveredResourceRequest &request);
                void DescribeDiscoveredResourceAsync(const Model::DescribeDiscoveredResourceRequest& request, const DescribeDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiscoveredResourceOutcomeCallable DescribeDiscoveredResourceCallable(const Model::DescribeDiscoveredResourceRequest& request);

                /**
                 *获取系统合规包详情
                 * @param req DescribeSystemCompliancePackRequest
                 * @return DescribeSystemCompliancePackOutcome
                 */
                DescribeSystemCompliancePackOutcome DescribeSystemCompliancePack(const Model::DescribeSystemCompliancePackRequest &request);
                void DescribeSystemCompliancePackAsync(const Model::DescribeSystemCompliancePackRequest& request, const DescribeSystemCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemCompliancePackOutcomeCallable DescribeSystemCompliancePackCallable(const Model::DescribeSystemCompliancePackRequest& request);

                /**
                 *预设规则详情
                 * @param req DescribeSystemRuleRequest
                 * @return DescribeSystemRuleOutcome
                 */
                DescribeSystemRuleOutcome DescribeSystemRule(const Model::DescribeSystemRuleRequest &request);
                void DescribeSystemRuleAsync(const Model::DescribeSystemRuleRequest& request, const DescribeSystemRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemRuleOutcomeCallable DescribeSystemRuleCallable(const Model::DescribeSystemRuleRequest& request);

                /**
                 *账号组合规包移除规则
                 * @param req DetachAggregateConfigRuleToCompliancePackRequest
                 * @return DetachAggregateConfigRuleToCompliancePackOutcome
                 */
                DetachAggregateConfigRuleToCompliancePackOutcome DetachAggregateConfigRuleToCompliancePack(const Model::DetachAggregateConfigRuleToCompliancePackRequest &request);
                void DetachAggregateConfigRuleToCompliancePackAsync(const Model::DetachAggregateConfigRuleToCompliancePackRequest& request, const DetachAggregateConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachAggregateConfigRuleToCompliancePackOutcomeCallable DetachAggregateConfigRuleToCompliancePackCallable(const Model::DetachAggregateConfigRuleToCompliancePackRequest& request);

                /**
                 *合规包移除规则
                 * @param req DetachConfigRuleToCompliancePackRequest
                 * @return DetachConfigRuleToCompliancePackOutcome
                 */
                DetachConfigRuleToCompliancePackOutcome DetachConfigRuleToCompliancePack(const Model::DetachConfigRuleToCompliancePackRequest &request);
                void DetachConfigRuleToCompliancePackAsync(const Model::DetachConfigRuleToCompliancePackRequest& request, const DetachConfigRuleToCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachConfigRuleToCompliancePackOutcomeCallable DetachConfigRuleToCompliancePackCallable(const Model::DetachConfigRuleToCompliancePackRequest& request);

                /**
                 *账号组获取合规包列表
                 * @param req ListAggregateCompliancePacksRequest
                 * @return ListAggregateCompliancePacksOutcome
                 */
                ListAggregateCompliancePacksOutcome ListAggregateCompliancePacks(const Model::ListAggregateCompliancePacksRequest &request);
                void ListAggregateCompliancePacksAsync(const Model::ListAggregateCompliancePacksRequest& request, const ListAggregateCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAggregateCompliancePacksOutcomeCallable ListAggregateCompliancePacksCallable(const Model::ListAggregateCompliancePacksRequest& request);

                /**
                 *账号组获取评估结果--规则维度（某个规则下资源的评估结果列表）
                 * @param req ListAggregateConfigRuleEvaluationResultsRequest
                 * @return ListAggregateConfigRuleEvaluationResultsOutcome
                 */
                ListAggregateConfigRuleEvaluationResultsOutcome ListAggregateConfigRuleEvaluationResults(const Model::ListAggregateConfigRuleEvaluationResultsRequest &request);
                void ListAggregateConfigRuleEvaluationResultsAsync(const Model::ListAggregateConfigRuleEvaluationResultsRequest& request, const ListAggregateConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAggregateConfigRuleEvaluationResultsOutcomeCallable ListAggregateConfigRuleEvaluationResultsCallable(const Model::ListAggregateConfigRuleEvaluationResultsRequest& request);

                /**
                 *账号组获取规则列表
                 * @param req ListAggregateConfigRulesRequest
                 * @return ListAggregateConfigRulesOutcome
                 */
                ListAggregateConfigRulesOutcome ListAggregateConfigRules(const Model::ListAggregateConfigRulesRequest &request);
                void ListAggregateConfigRulesAsync(const Model::ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAggregateConfigRulesOutcomeCallable ListAggregateConfigRulesCallable(const Model::ListAggregateConfigRulesRequest& request);

                /**
                 *账号组获取资源列表
                 * @param req ListAggregateDiscoveredResourcesRequest
                 * @return ListAggregateDiscoveredResourcesOutcome
                 */
                ListAggregateDiscoveredResourcesOutcome ListAggregateDiscoveredResources(const Model::ListAggregateDiscoveredResourcesRequest &request);
                void ListAggregateDiscoveredResourcesAsync(const Model::ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAggregateDiscoveredResourcesOutcomeCallable ListAggregateDiscoveredResourcesCallable(const Model::ListAggregateDiscoveredResourcesRequest& request);

                /**
                 *账号组列表
                 * @param req ListAggregatorsRequest
                 * @return ListAggregatorsOutcome
                 */
                ListAggregatorsOutcome ListAggregators(const Model::ListAggregatorsRequest &request);
                void ListAggregatorsAsync(const Model::ListAggregatorsRequest& request, const ListAggregatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAggregatorsOutcomeCallable ListAggregatorsCallable(const Model::ListAggregatorsRequest& request);

                /**
                 *告警规则列表
                 * @param req ListAlarmPolicyRequest
                 * @return ListAlarmPolicyOutcome
                 */
                ListAlarmPolicyOutcome ListAlarmPolicy(const Model::ListAlarmPolicyRequest &request);
                void ListAlarmPolicyAsync(const Model::ListAlarmPolicyRequest& request, const ListAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAlarmPolicyOutcomeCallable ListAlarmPolicyCallable(const Model::ListAlarmPolicyRequest& request);

                /**
                 *获取合规包列表
                 * @param req ListCompliancePacksRequest
                 * @return ListCompliancePacksOutcome
                 */
                ListCompliancePacksOutcome ListCompliancePacks(const Model::ListCompliancePacksRequest &request);
                void ListCompliancePacksAsync(const Model::ListCompliancePacksRequest& request, const ListCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCompliancePacksOutcomeCallable ListCompliancePacksCallable(const Model::ListCompliancePacksRequest& request);

                /**
                 * 获取评估结果--规则维度（某个规则下资源的评估结果列表）
                 * @param req ListConfigRuleEvaluationResultsRequest
                 * @return ListConfigRuleEvaluationResultsOutcome
                 */
                ListConfigRuleEvaluationResultsOutcome ListConfigRuleEvaluationResults(const Model::ListConfigRuleEvaluationResultsRequest &request);
                void ListConfigRuleEvaluationResultsAsync(const Model::ListConfigRuleEvaluationResultsRequest& request, const ListConfigRuleEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConfigRuleEvaluationResultsOutcomeCallable ListConfigRuleEvaluationResultsCallable(const Model::ListConfigRuleEvaluationResultsRequest& request);

                /**
                 *获取规则列表
                 * @param req ListConfigRulesRequest
                 * @return ListConfigRulesOutcome
                 */
                ListConfigRulesOutcome ListConfigRules(const Model::ListConfigRulesRequest &request);
                void ListConfigRulesAsync(const Model::ListConfigRulesRequest& request, const ListConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConfigRulesOutcomeCallable ListConfigRulesCallable(const Model::ListConfigRulesRequest& request);

                /**
                 *获取资源列表
                 * @param req ListDiscoveredResourcesRequest
                 * @return ListDiscoveredResourcesOutcome
                 */
                ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest &request);
                void ListDiscoveredResourcesAsync(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const Model::ListDiscoveredResourcesRequest& request);

                /**
                 *修正记录
                 * @param req ListRemediationExecutionsRequest
                 * @return ListRemediationExecutionsOutcome
                 */
                ListRemediationExecutionsOutcome ListRemediationExecutions(const Model::ListRemediationExecutionsRequest &request);
                void ListRemediationExecutionsAsync(const Model::ListRemediationExecutionsRequest& request, const ListRemediationExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRemediationExecutionsOutcomeCallable ListRemediationExecutionsCallable(const Model::ListRemediationExecutionsRequest& request);

                /**
                 *修正设置列表
                 * @param req ListRemediationsRequest
                 * @return ListRemediationsOutcome
                 */
                ListRemediationsOutcome ListRemediations(const Model::ListRemediationsRequest &request);
                void ListRemediationsAsync(const Model::ListRemediationsRequest& request, const ListRemediationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRemediationsOutcomeCallable ListRemediationsCallable(const Model::ListRemediationsRequest& request);

                /**
                 *获取资源类型列表
                 * @param req ListResourceTypesRequest
                 * @return ListResourceTypesOutcome
                 */
                ListResourceTypesOutcome ListResourceTypes(const Model::ListResourceTypesRequest &request);
                void ListResourceTypesAsync(const Model::ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListResourceTypesOutcomeCallable ListResourceTypesCallable(const Model::ListResourceTypesRequest& request);

                /**
                 *获取系统合规包列表
                 * @param req ListSystemCompliancePacksRequest
                 * @return ListSystemCompliancePacksOutcome
                 */
                ListSystemCompliancePacksOutcome ListSystemCompliancePacks(const Model::ListSystemCompliancePacksRequest &request);
                void ListSystemCompliancePacksAsync(const Model::ListSystemCompliancePacksRequest& request, const ListSystemCompliancePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSystemCompliancePacksOutcomeCallable ListSystemCompliancePacksCallable(const Model::ListSystemCompliancePacksRequest& request);

                /**
                 *获取预设规则列表
                 * @param req ListSystemRulesRequest
                 * @return ListSystemRulesOutcome
                 */
                ListSystemRulesOutcome ListSystemRules(const Model::ListSystemRulesRequest &request);
                void ListSystemRulesAsync(const Model::ListSystemRulesRequest& request, const ListSystemRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSystemRulesOutcomeCallable ListSystemRulesCallable(const Model::ListSystemRulesRequest& request);

                /**
                 *账号组开启规则
                 * @param req OpenAggregateConfigRuleRequest
                 * @return OpenAggregateConfigRuleOutcome
                 */
                OpenAggregateConfigRuleOutcome OpenAggregateConfigRule(const Model::OpenAggregateConfigRuleRequest &request);
                void OpenAggregateConfigRuleAsync(const Model::OpenAggregateConfigRuleRequest& request, const OpenAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAggregateConfigRuleOutcomeCallable OpenAggregateConfigRuleCallable(const Model::OpenAggregateConfigRuleRequest& request);

                /**
                 *资源监控管理-开启监控
                 * @param req OpenConfigRecorderRequest
                 * @return OpenConfigRecorderOutcome
                 */
                OpenConfigRecorderOutcome OpenConfigRecorder(const Model::OpenConfigRecorderRequest &request);
                void OpenConfigRecorderAsync(const Model::OpenConfigRecorderRequest& request, const OpenConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenConfigRecorderOutcomeCallable OpenConfigRecorderCallable(const Model::OpenConfigRecorderRequest& request);

                /**
                 *开启规则
                 * @param req OpenConfigRuleRequest
                 * @return OpenConfigRuleOutcome
                 */
                OpenConfigRuleOutcome OpenConfigRule(const Model::OpenConfigRuleRequest &request);
                void OpenConfigRuleAsync(const Model::OpenConfigRuleRequest& request, const OpenConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenConfigRuleOutcomeCallable OpenConfigRuleCallable(const Model::OpenConfigRuleRequest& request);

                /**
                 *上报自定义规则评估结果
                 * @param req PutEvaluationsRequest
                 * @return PutEvaluationsOutcome
                 */
                PutEvaluationsOutcome PutEvaluations(const Model::PutEvaluationsRequest &request);
                void PutEvaluationsAsync(const Model::PutEvaluationsRequest& request, const PutEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutEvaluationsOutcomeCallable PutEvaluationsCallable(const Model::PutEvaluationsRequest& request);

                /**
                 *账号组触发评估
                 * @param req StartAggregateConfigRuleEvaluationRequest
                 * @return StartAggregateConfigRuleEvaluationOutcome
                 */
                StartAggregateConfigRuleEvaluationOutcome StartAggregateConfigRuleEvaluation(const Model::StartAggregateConfigRuleEvaluationRequest &request);
                void StartAggregateConfigRuleEvaluationAsync(const Model::StartAggregateConfigRuleEvaluationRequest& request, const StartAggregateConfigRuleEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAggregateConfigRuleEvaluationOutcomeCallable StartAggregateConfigRuleEvaluationCallable(const Model::StartAggregateConfigRuleEvaluationRequest& request);

                /**
                 *触发评估
                 * @param req StartConfigRuleEvaluationRequest
                 * @return StartConfigRuleEvaluationOutcome
                 */
                StartConfigRuleEvaluationOutcome StartConfigRuleEvaluation(const Model::StartConfigRuleEvaluationRequest &request);
                void StartConfigRuleEvaluationAsync(const Model::StartConfigRuleEvaluationRequest& request, const StartConfigRuleEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartConfigRuleEvaluationOutcomeCallable StartConfigRuleEvaluationCallable(const Model::StartConfigRuleEvaluationRequest& request);

                /**
                 *手动执行规则修复
                 * @param req StartRemediationRequest
                 * @return StartRemediationOutcome
                 */
                StartRemediationOutcome StartRemediation(const Model::StartRemediationRequest &request);
                void StartRemediationAsync(const Model::StartRemediationRequest& request, const StartRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartRemediationOutcomeCallable StartRemediationCallable(const Model::StartRemediationRequest& request);

                /**
                 *账号组编辑合规包
                 * @param req UpdateAggregateCompliancePackRequest
                 * @return UpdateAggregateCompliancePackOutcome
                 */
                UpdateAggregateCompliancePackOutcome UpdateAggregateCompliancePack(const Model::UpdateAggregateCompliancePackRequest &request);
                void UpdateAggregateCompliancePackAsync(const Model::UpdateAggregateCompliancePackRequest& request, const UpdateAggregateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAggregateCompliancePackOutcomeCallable UpdateAggregateCompliancePackCallable(const Model::UpdateAggregateCompliancePackRequest& request);

                /**
                 *账号组开启、关闭合规包
                 * @param req UpdateAggregateCompliancePackStatusRequest
                 * @return UpdateAggregateCompliancePackStatusOutcome
                 */
                UpdateAggregateCompliancePackStatusOutcome UpdateAggregateCompliancePackStatus(const Model::UpdateAggregateCompliancePackStatusRequest &request);
                void UpdateAggregateCompliancePackStatusAsync(const Model::UpdateAggregateCompliancePackStatusRequest& request, const UpdateAggregateCompliancePackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAggregateCompliancePackStatusOutcomeCallable UpdateAggregateCompliancePackStatusCallable(const Model::UpdateAggregateCompliancePackStatusRequest& request);

                /**
                 *账号组编辑投递设置
                 * @param req UpdateAggregateConfigDeliverRequest
                 * @return UpdateAggregateConfigDeliverOutcome
                 */
                UpdateAggregateConfigDeliverOutcome UpdateAggregateConfigDeliver(const Model::UpdateAggregateConfigDeliverRequest &request);
                void UpdateAggregateConfigDeliverAsync(const Model::UpdateAggregateConfigDeliverRequest& request, const UpdateAggregateConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAggregateConfigDeliverOutcomeCallable UpdateAggregateConfigDeliverCallable(const Model::UpdateAggregateConfigDeliverRequest& request);

                /**
                 *账号组编辑规则
                 * @param req UpdateAggregateConfigRuleRequest
                 * @return UpdateAggregateConfigRuleOutcome
                 */
                UpdateAggregateConfigRuleOutcome UpdateAggregateConfigRule(const Model::UpdateAggregateConfigRuleRequest &request);
                void UpdateAggregateConfigRuleAsync(const Model::UpdateAggregateConfigRuleRequest& request, const UpdateAggregateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAggregateConfigRuleOutcomeCallable UpdateAggregateConfigRuleCallable(const Model::UpdateAggregateConfigRuleRequest& request);

                /**
                 *更新告警规则
                 * @param req UpdateAlarmPolicyRequest
                 * @return UpdateAlarmPolicyOutcome
                 */
                UpdateAlarmPolicyOutcome UpdateAlarmPolicy(const Model::UpdateAlarmPolicyRequest &request);
                void UpdateAlarmPolicyAsync(const Model::UpdateAlarmPolicyRequest& request, const UpdateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlarmPolicyOutcomeCallable UpdateAlarmPolicyCallable(const Model::UpdateAlarmPolicyRequest& request);

                /**
                 *编辑合规包
                 * @param req UpdateCompliancePackRequest
                 * @return UpdateCompliancePackOutcome
                 */
                UpdateCompliancePackOutcome UpdateCompliancePack(const Model::UpdateCompliancePackRequest &request);
                void UpdateCompliancePackAsync(const Model::UpdateCompliancePackRequest& request, const UpdateCompliancePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCompliancePackOutcomeCallable UpdateCompliancePackCallable(const Model::UpdateCompliancePackRequest& request);

                /**
                 *开启、关闭合规包
                 * @param req UpdateCompliancePackStatusRequest
                 * @return UpdateCompliancePackStatusOutcome
                 */
                UpdateCompliancePackStatusOutcome UpdateCompliancePackStatus(const Model::UpdateCompliancePackStatusRequest &request);
                void UpdateCompliancePackStatusAsync(const Model::UpdateCompliancePackStatusRequest& request, const UpdateCompliancePackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCompliancePackStatusOutcomeCallable UpdateCompliancePackStatusCallable(const Model::UpdateCompliancePackStatusRequest& request);

                /**
                 *编辑投递设置
                 * @param req UpdateConfigDeliverRequest
                 * @return UpdateConfigDeliverOutcome
                 */
                UpdateConfigDeliverOutcome UpdateConfigDeliver(const Model::UpdateConfigDeliverRequest &request);
                void UpdateConfigDeliverAsync(const Model::UpdateConfigDeliverRequest& request, const UpdateConfigDeliverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConfigDeliverOutcomeCallable UpdateConfigDeliverCallable(const Model::UpdateConfigDeliverRequest& request);

                /**
                 *编辑监控范围
                 * @param req UpdateConfigRecorderRequest
                 * @return UpdateConfigRecorderOutcome
                 */
                UpdateConfigRecorderOutcome UpdateConfigRecorder(const Model::UpdateConfigRecorderRequest &request);
                void UpdateConfigRecorderAsync(const Model::UpdateConfigRecorderRequest& request, const UpdateConfigRecorderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConfigRecorderOutcomeCallable UpdateConfigRecorderCallable(const Model::UpdateConfigRecorderRequest& request);

                /**
                 *编辑规则
                 * @param req UpdateConfigRuleRequest
                 * @return UpdateConfigRuleOutcome
                 */
                UpdateConfigRuleOutcome UpdateConfigRule(const Model::UpdateConfigRuleRequest &request);
                void UpdateConfigRuleAsync(const Model::UpdateConfigRuleRequest& request, const UpdateConfigRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConfigRuleOutcomeCallable UpdateConfigRuleCallable(const Model::UpdateConfigRuleRequest& request);

                /**
                 *新增告警监控规则
                 * @param req UpdateRemediationRequest
                 * @return UpdateRemediationOutcome
                 */
                UpdateRemediationOutcome UpdateRemediation(const Model::UpdateRemediationRequest &request);
                void UpdateRemediationAsync(const Model::UpdateRemediationRequest& request, const UpdateRemediationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRemediationOutcomeCallable UpdateRemediationCallable(const Model::UpdateRemediationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_CONFIGCLIENT_H_
