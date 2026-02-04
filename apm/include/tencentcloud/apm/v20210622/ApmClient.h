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

#ifndef TENCENTCLOUD_APM_V20210622_APMCLIENT_H_
#define TENCENTCLOUD_APM_V20210622_APMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apm/v20210622/model/CreateApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/CreateApmInstanceResponse.h>
#include <tencentcloud/apm/v20210622/model/CreateApmPrometheusRuleRequest.h>
#include <tencentcloud/apm/v20210622/model/CreateApmPrometheusRuleResponse.h>
#include <tencentcloud/apm/v20210622/model/CreateApmSampleConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/CreateApmSampleConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/CreateProfileTaskRequest.h>
#include <tencentcloud/apm/v20210622/model/CreateProfileTaskResponse.h>
#include <tencentcloud/apm/v20210622/model/DeleteApmSampleConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/DeleteApmSampleConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAgentRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAgentResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAllVulCountRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAllVulCountResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmApplicationConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmApplicationConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAssociationRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAssociationResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmPrometheusRuleRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmPrometheusRuleResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmSampleConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmSampleConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmServiceMetricRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmServiceMetricResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmVulnerabilityCountRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmVulnerabilityCountResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmVulnerabilityDetailRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmVulnerabilityDetailResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralApmApplicationConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralApmApplicationConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralOTSpanListRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralOTSpanListResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralSpanListRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralSpanListResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeMetricRecordsRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeMetricRecordsResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeOPRAllVulCountRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeOPRAllVulCountResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeServiceOverviewRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeServiceOverviewResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeTagValuesRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeTagValuesResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeTopologyNewRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeTopologyNewResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmApplicationConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmApplicationConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmAssociationRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmAssociationResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmPrometheusRuleRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmPrometheusRuleResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmSampleConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmSampleConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyGeneralApmApplicationConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyGeneralApmApplicationConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/TerminateApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/TerminateApmInstanceResponse.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            class ApmClient : public AbstractClient
            {
            public:
                ApmClient(const Credential &credential, const std::string &region);
                ApmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApmInstanceResponse> CreateApmInstanceOutcome;
                typedef std::future<CreateApmInstanceOutcome> CreateApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::CreateApmInstanceRequest&, CreateApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApmInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApmPrometheusRuleResponse> CreateApmPrometheusRuleOutcome;
                typedef std::future<CreateApmPrometheusRuleOutcome> CreateApmPrometheusRuleOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::CreateApmPrometheusRuleRequest&, CreateApmPrometheusRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApmPrometheusRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApmSampleConfigResponse> CreateApmSampleConfigOutcome;
                typedef std::future<CreateApmSampleConfigOutcome> CreateApmSampleConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::CreateApmSampleConfigRequest&, CreateApmSampleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApmSampleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProfileTaskResponse> CreateProfileTaskOutcome;
                typedef std::future<CreateProfileTaskOutcome> CreateProfileTaskOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::CreateProfileTaskRequest&, CreateProfileTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProfileTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApmSampleConfigResponse> DeleteApmSampleConfigOutcome;
                typedef std::future<DeleteApmSampleConfigOutcome> DeleteApmSampleConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DeleteApmSampleConfigRequest&, DeleteApmSampleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApmSampleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmAgentResponse> DescribeApmAgentOutcome;
                typedef std::future<DescribeApmAgentOutcome> DescribeApmAgentOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmAgentRequest&, DescribeApmAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmAllVulCountResponse> DescribeApmAllVulCountOutcome;
                typedef std::future<DescribeApmAllVulCountOutcome> DescribeApmAllVulCountOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmAllVulCountRequest&, DescribeApmAllVulCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmAllVulCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmApplicationConfigResponse> DescribeApmApplicationConfigOutcome;
                typedef std::future<DescribeApmApplicationConfigOutcome> DescribeApmApplicationConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmApplicationConfigRequest&, DescribeApmApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmAssociationResponse> DescribeApmAssociationOutcome;
                typedef std::future<DescribeApmAssociationOutcome> DescribeApmAssociationOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmAssociationRequest&, DescribeApmAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmAssociationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmInstancesResponse> DescribeApmInstancesOutcome;
                typedef std::future<DescribeApmInstancesOutcome> DescribeApmInstancesOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmInstancesRequest&, DescribeApmInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmPrometheusRuleResponse> DescribeApmPrometheusRuleOutcome;
                typedef std::future<DescribeApmPrometheusRuleOutcome> DescribeApmPrometheusRuleOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmPrometheusRuleRequest&, DescribeApmPrometheusRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmPrometheusRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmSampleConfigResponse> DescribeApmSampleConfigOutcome;
                typedef std::future<DescribeApmSampleConfigOutcome> DescribeApmSampleConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmSampleConfigRequest&, DescribeApmSampleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmSampleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmServiceMetricResponse> DescribeApmServiceMetricOutcome;
                typedef std::future<DescribeApmServiceMetricOutcome> DescribeApmServiceMetricOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmServiceMetricRequest&, DescribeApmServiceMetricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmServiceMetricAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmVulnerabilityCountResponse> DescribeApmVulnerabilityCountOutcome;
                typedef std::future<DescribeApmVulnerabilityCountOutcome> DescribeApmVulnerabilityCountOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmVulnerabilityCountRequest&, DescribeApmVulnerabilityCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmVulnerabilityCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmVulnerabilityDetailResponse> DescribeApmVulnerabilityDetailOutcome;
                typedef std::future<DescribeApmVulnerabilityDetailOutcome> DescribeApmVulnerabilityDetailOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmVulnerabilityDetailRequest&, DescribeApmVulnerabilityDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmVulnerabilityDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralApmApplicationConfigResponse> DescribeGeneralApmApplicationConfigOutcome;
                typedef std::future<DescribeGeneralApmApplicationConfigOutcome> DescribeGeneralApmApplicationConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralApmApplicationConfigRequest&, DescribeGeneralApmApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralApmApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralMetricDataResponse> DescribeGeneralMetricDataOutcome;
                typedef std::future<DescribeGeneralMetricDataOutcome> DescribeGeneralMetricDataOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralMetricDataRequest&, DescribeGeneralMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralOTSpanListResponse> DescribeGeneralOTSpanListOutcome;
                typedef std::future<DescribeGeneralOTSpanListOutcome> DescribeGeneralOTSpanListOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralOTSpanListRequest&, DescribeGeneralOTSpanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralOTSpanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralSpanListResponse> DescribeGeneralSpanListOutcome;
                typedef std::future<DescribeGeneralSpanListOutcome> DescribeGeneralSpanListOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralSpanListRequest&, DescribeGeneralSpanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralSpanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricRecordsResponse> DescribeMetricRecordsOutcome;
                typedef std::future<DescribeMetricRecordsOutcome> DescribeMetricRecordsOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeMetricRecordsRequest&, DescribeMetricRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOPRAllVulCountResponse> DescribeOPRAllVulCountOutcome;
                typedef std::future<DescribeOPRAllVulCountOutcome> DescribeOPRAllVulCountOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeOPRAllVulCountRequest&, DescribeOPRAllVulCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOPRAllVulCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceOverviewResponse> DescribeServiceOverviewOutcome;
                typedef std::future<DescribeServiceOverviewOutcome> DescribeServiceOverviewOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeServiceOverviewRequest&, DescribeServiceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagValuesResponse> DescribeTagValuesOutcome;
                typedef std::future<DescribeTagValuesOutcome> DescribeTagValuesOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeTagValuesRequest&, DescribeTagValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopologyNewResponse> DescribeTopologyNewOutcome;
                typedef std::future<DescribeTopologyNewOutcome> DescribeTopologyNewOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeTopologyNewRequest&, DescribeTopologyNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopologyNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmApplicationConfigResponse> ModifyApmApplicationConfigOutcome;
                typedef std::future<ModifyApmApplicationConfigOutcome> ModifyApmApplicationConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmApplicationConfigRequest&, ModifyApmApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmAssociationResponse> ModifyApmAssociationOutcome;
                typedef std::future<ModifyApmAssociationOutcome> ModifyApmAssociationOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmAssociationRequest&, ModifyApmAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmAssociationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmInstanceResponse> ModifyApmInstanceOutcome;
                typedef std::future<ModifyApmInstanceOutcome> ModifyApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmInstanceRequest&, ModifyApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmPrometheusRuleResponse> ModifyApmPrometheusRuleOutcome;
                typedef std::future<ModifyApmPrometheusRuleOutcome> ModifyApmPrometheusRuleOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmPrometheusRuleRequest&, ModifyApmPrometheusRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmPrometheusRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmSampleConfigResponse> ModifyApmSampleConfigOutcome;
                typedef std::future<ModifyApmSampleConfigOutcome> ModifyApmSampleConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmSampleConfigRequest&, ModifyApmSampleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmSampleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGeneralApmApplicationConfigResponse> ModifyGeneralApmApplicationConfigOutcome;
                typedef std::future<ModifyGeneralApmApplicationConfigOutcome> ModifyGeneralApmApplicationConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyGeneralApmApplicationConfigRequest&, ModifyGeneralApmApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGeneralApmApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateApmInstanceResponse> TerminateApmInstanceOutcome;
                typedef std::future<TerminateApmInstanceOutcome> TerminateApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::TerminateApmInstanceRequest&, TerminateApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateApmInstanceAsyncHandler;



                /**
                 *业务购买 APM 业务系统，调用该接口创建
                 * @param req CreateApmInstanceRequest
                 * @return CreateApmInstanceOutcome
                 */
                CreateApmInstanceOutcome CreateApmInstance(const Model::CreateApmInstanceRequest &request);
                void CreateApmInstanceAsync(const Model::CreateApmInstanceRequest& request, const CreateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApmInstanceOutcomeCallable CreateApmInstanceCallable(const Model::CreateApmInstanceRequest& request);

                /**
                 *用于创建apm业务系统与Prometheus实例的指标匹配规则
                 * @param req CreateApmPrometheusRuleRequest
                 * @return CreateApmPrometheusRuleOutcome
                 */
                CreateApmPrometheusRuleOutcome CreateApmPrometheusRule(const Model::CreateApmPrometheusRuleRequest &request);
                void CreateApmPrometheusRuleAsync(const Model::CreateApmPrometheusRuleRequest& request, const CreateApmPrometheusRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApmPrometheusRuleOutcomeCallable CreateApmPrometheusRuleCallable(const Model::CreateApmPrometheusRuleRequest& request);

                /**
                 *创建采样配置接口
                 * @param req CreateApmSampleConfigRequest
                 * @return CreateApmSampleConfigOutcome
                 */
                CreateApmSampleConfigOutcome CreateApmSampleConfig(const Model::CreateApmSampleConfigRequest &request);
                void CreateApmSampleConfigAsync(const Model::CreateApmSampleConfigRequest& request, const CreateApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApmSampleConfigOutcomeCallable CreateApmSampleConfigCallable(const Model::CreateApmSampleConfigRequest& request);

                /**
                 *创建事件任务
                 * @param req CreateProfileTaskRequest
                 * @return CreateProfileTaskOutcome
                 */
                CreateProfileTaskOutcome CreateProfileTask(const Model::CreateProfileTaskRequest &request);
                void CreateProfileTaskAsync(const Model::CreateProfileTaskRequest& request, const CreateProfileTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProfileTaskOutcomeCallable CreateProfileTaskCallable(const Model::CreateProfileTaskRequest& request);

                /**
                 *删除采样配置接口
                 * @param req DeleteApmSampleConfigRequest
                 * @return DeleteApmSampleConfigOutcome
                 */
                DeleteApmSampleConfigOutcome DeleteApmSampleConfig(const Model::DeleteApmSampleConfigRequest &request);
                void DeleteApmSampleConfigAsync(const Model::DeleteApmSampleConfigRequest& request, const DeleteApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApmSampleConfigOutcomeCallable DeleteApmSampleConfigCallable(const Model::DeleteApmSampleConfigRequest& request);

                /**
                 *获取 APM 接入点
                 * @param req DescribeApmAgentRequest
                 * @return DescribeApmAgentOutcome
                 */
                DescribeApmAgentOutcome DescribeApmAgent(const Model::DescribeApmAgentRequest &request);
                void DescribeApmAgentAsync(const Model::DescribeApmAgentRequest& request, const DescribeApmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmAgentOutcomeCallable DescribeApmAgentCallable(const Model::DescribeApmAgentRequest& request);

                /**
                 *查询用户所有漏洞信息
                 * @param req DescribeApmAllVulCountRequest
                 * @return DescribeApmAllVulCountOutcome
                 */
                DescribeApmAllVulCountOutcome DescribeApmAllVulCount(const Model::DescribeApmAllVulCountRequest &request);
                void DescribeApmAllVulCountAsync(const Model::DescribeApmAllVulCountRequest& request, const DescribeApmAllVulCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmAllVulCountOutcomeCallable DescribeApmAllVulCountCallable(const Model::DescribeApmAllVulCountRequest& request);

                /**
                 *查询应用配置接口
                 * @param req DescribeApmApplicationConfigRequest
                 * @return DescribeApmApplicationConfigOutcome
                 */
                DescribeApmApplicationConfigOutcome DescribeApmApplicationConfig(const Model::DescribeApmApplicationConfigRequest &request);
                void DescribeApmApplicationConfigAsync(const Model::DescribeApmApplicationConfigRequest& request, const DescribeApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmApplicationConfigOutcomeCallable DescribeApmApplicationConfigCallable(const Model::DescribeApmApplicationConfigRequest& request);

                /**
                 *用于查询apm业务系统与其他产品的关联关系
                 * @param req DescribeApmAssociationRequest
                 * @return DescribeApmAssociationOutcome
                 */
                DescribeApmAssociationOutcome DescribeApmAssociation(const Model::DescribeApmAssociationRequest &request);
                void DescribeApmAssociationAsync(const Model::DescribeApmAssociationRequest& request, const DescribeApmAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmAssociationOutcomeCallable DescribeApmAssociationCallable(const Model::DescribeApmAssociationRequest& request);

                /**
                 *获取 APM 业务系统列表
                 * @param req DescribeApmInstancesRequest
                 * @return DescribeApmInstancesOutcome
                 */
                DescribeApmInstancesOutcome DescribeApmInstances(const Model::DescribeApmInstancesRequest &request);
                void DescribeApmInstancesAsync(const Model::DescribeApmInstancesRequest& request, const DescribeApmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmInstancesOutcomeCallable DescribeApmInstancesCallable(const Model::DescribeApmInstancesRequest& request);

                /**
                 *用于查询apm业务系统与Prometheus实例的指标匹配规则
                 * @param req DescribeApmPrometheusRuleRequest
                 * @return DescribeApmPrometheusRuleOutcome
                 */
                DescribeApmPrometheusRuleOutcome DescribeApmPrometheusRule(const Model::DescribeApmPrometheusRuleRequest &request);
                void DescribeApmPrometheusRuleAsync(const Model::DescribeApmPrometheusRuleRequest& request, const DescribeApmPrometheusRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmPrometheusRuleOutcomeCallable DescribeApmPrometheusRuleCallable(const Model::DescribeApmPrometheusRuleRequest& request);

                /**
                 *查询采样配置接口
                 * @param req DescribeApmSampleConfigRequest
                 * @return DescribeApmSampleConfigOutcome
                 */
                DescribeApmSampleConfigOutcome DescribeApmSampleConfig(const Model::DescribeApmSampleConfigRequest &request);
                void DescribeApmSampleConfigAsync(const Model::DescribeApmSampleConfigRequest& request, const DescribeApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmSampleConfigOutcomeCallable DescribeApmSampleConfigCallable(const Model::DescribeApmSampleConfigRequest& request);

                /**
                 *获取 APM 应用指标列表
                 * @param req DescribeApmServiceMetricRequest
                 * @return DescribeApmServiceMetricOutcome
                 */
                DescribeApmServiceMetricOutcome DescribeApmServiceMetric(const Model::DescribeApmServiceMetricRequest &request);
                void DescribeApmServiceMetricAsync(const Model::DescribeApmServiceMetricRequest& request, const DescribeApmServiceMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmServiceMetricOutcomeCallable DescribeApmServiceMetricCallable(const Model::DescribeApmServiceMetricRequest& request);

                /**
                 *查询漏洞指标
                 * @param req DescribeApmVulnerabilityCountRequest
                 * @return DescribeApmVulnerabilityCountOutcome
                 */
                DescribeApmVulnerabilityCountOutcome DescribeApmVulnerabilityCount(const Model::DescribeApmVulnerabilityCountRequest &request);
                void DescribeApmVulnerabilityCountAsync(const Model::DescribeApmVulnerabilityCountRequest& request, const DescribeApmVulnerabilityCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmVulnerabilityCountOutcomeCallable DescribeApmVulnerabilityCountCallable(const Model::DescribeApmVulnerabilityCountRequest& request);

                /**
                 *查询漏洞详情
                 * @param req DescribeApmVulnerabilityDetailRequest
                 * @return DescribeApmVulnerabilityDetailOutcome
                 */
                DescribeApmVulnerabilityDetailOutcome DescribeApmVulnerabilityDetail(const Model::DescribeApmVulnerabilityDetailRequest &request);
                void DescribeApmVulnerabilityDetailAsync(const Model::DescribeApmVulnerabilityDetailRequest& request, const DescribeApmVulnerabilityDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmVulnerabilityDetailOutcomeCallable DescribeApmVulnerabilityDetailCallable(const Model::DescribeApmVulnerabilityDetailRequest& request);

                /**
                 *查询应用配置信息
                 * @param req DescribeGeneralApmApplicationConfigRequest
                 * @return DescribeGeneralApmApplicationConfigOutcome
                 */
                DescribeGeneralApmApplicationConfigOutcome DescribeGeneralApmApplicationConfig(const Model::DescribeGeneralApmApplicationConfigRequest &request);
                void DescribeGeneralApmApplicationConfigAsync(const Model::DescribeGeneralApmApplicationConfigRequest& request, const DescribeGeneralApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralApmApplicationConfigOutcomeCallable DescribeGeneralApmApplicationConfigCallable(const Model::DescribeGeneralApmApplicationConfigRequest& request);

                /**
                 *获取指标数据通用接口。用户根据需要上送请求参数，返回对应的指标数据。
接口调用频率限制为：20次/秒，1200次/分钟。单请求的数据点数限制为1440个。

获取指标数据通用接口用法：DescribeGeneralMetricData 是通用的指标数据查询接口，支持灵活的获取指标数据。该接口的查询方式类似于使用如下 SQL 语句：SELECT {Metrics} FROM {ViewName} WHERE {Filters} GROUP BY {GroupBy}。在发起请求前，请确定如下关键入参：
1. 视图（ViewName）
决定您要查询的数据领域。
例如：service_metric（服务监控视图）、db_metric（数据库视图）等。关于 APM 支持的视图，请参考 [指标视图](https://cloud.tencent.com/document/product/248/101681#069b06a9-2593-49db-b694-dea4200f3b19)。

2. 指标（Metrics）
用于指定返回结果中包含的一个或多个指标项。
例如：request_count（请求数）、duration_avg（平均耗时）、error_rate（错误率）。关于APM 支持的指标，请参考 [APM 指标协议标准](https://cloud.tencent.com/document/product/248/101681)，每种视图（ViewName）支持专属的指标集。
3. 过滤（Filters）
支持一个或多个键值对（Key-Value）形式的过滤条件。
例如：只查某个特定服务 service.name = "order-service"。通用维度和每种视图（ViewName）支持专属专属维度，可以用作过滤条件中的键（Key），更多详情请参考 [APM 指标协议标准](https://cloud.tencent.com/document/product/248/101681)。

4. 聚合（GroupBy）
支持一个或多个聚合维度，相当于 SQL 的 GROUP BY。
例如：按接口名称 operation 分组，查看每个接口的性能。通用维度和每种视图（ViewName）支持专属专属维度，可以用作聚合维度，更多详情请参考 [APM 指标协议标准](https://cloud.tencent.com/document/product/248/101681)。
5. 粒度 (Period) 
该参数决定了是否需要以时间切片聚合。
    - Period = 1：时间序列模式：返回结果中按时间切片聚合，时间序列（TimeSerial）和数据序列（DataSerial）中包含的多个值一一对应，分别代表特定时间切片上的聚合结果。时间序列模式主要用于展示时间趋势图。
    - Period = 0：汇总统计模式：返回结果中，数据序列（DataSerial）中只包含唯一的值，代表整个时间区间内的汇总数据。
                 * @param req DescribeGeneralMetricDataRequest
                 * @return DescribeGeneralMetricDataOutcome
                 */
                DescribeGeneralMetricDataOutcome DescribeGeneralMetricData(const Model::DescribeGeneralMetricDataRequest &request);
                void DescribeGeneralMetricDataAsync(const Model::DescribeGeneralMetricDataRequest& request, const DescribeGeneralMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralMetricDataOutcomeCallable DescribeGeneralMetricDataCallable(const Model::DescribeGeneralMetricDataRequest& request);

                /**
                 *通用查询 OpenTelemetry 调用链列表
                 * @param req DescribeGeneralOTSpanListRequest
                 * @return DescribeGeneralOTSpanListOutcome
                 */
                DescribeGeneralOTSpanListOutcome DescribeGeneralOTSpanList(const Model::DescribeGeneralOTSpanListRequest &request);
                void DescribeGeneralOTSpanListAsync(const Model::DescribeGeneralOTSpanListRequest& request, const DescribeGeneralOTSpanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralOTSpanListOutcomeCallable DescribeGeneralOTSpanListCallable(const Model::DescribeGeneralOTSpanListRequest& request);

                /**
                 *通用查询调用链列表
                 * @param req DescribeGeneralSpanListRequest
                 * @return DescribeGeneralSpanListOutcome
                 */
                DescribeGeneralSpanListOutcome DescribeGeneralSpanList(const Model::DescribeGeneralSpanListRequest &request);
                void DescribeGeneralSpanListAsync(const Model::DescribeGeneralSpanListRequest& request, const DescribeGeneralSpanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralSpanListOutcomeCallable DescribeGeneralSpanListCallable(const Model::DescribeGeneralSpanListRequest& request);

                /**
                 *查询指标列表接口，查询指标更推荐使用DescribeGeneralMetricData接口
                 * @param req DescribeMetricRecordsRequest
                 * @return DescribeMetricRecordsOutcome
                 */
                DescribeMetricRecordsOutcome DescribeMetricRecords(const Model::DescribeMetricRecordsRequest &request);
                void DescribeMetricRecordsAsync(const Model::DescribeMetricRecordsRequest& request, const DescribeMetricRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricRecordsOutcomeCallable DescribeMetricRecordsCallable(const Model::DescribeMetricRecordsRequest& request);

                /**
                 *查询用户所有漏洞信息
                 * @param req DescribeOPRAllVulCountRequest
                 * @return DescribeOPRAllVulCountOutcome
                 */
                DescribeOPRAllVulCountOutcome DescribeOPRAllVulCount(const Model::DescribeOPRAllVulCountRequest &request);
                void DescribeOPRAllVulCountAsync(const Model::DescribeOPRAllVulCountRequest& request, const DescribeOPRAllVulCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOPRAllVulCountOutcomeCallable DescribeOPRAllVulCountCallable(const Model::DescribeOPRAllVulCountRequest& request);

                /**
                 *应用概览数据拉取
                 * @param req DescribeServiceOverviewRequest
                 * @return DescribeServiceOverviewOutcome
                 */
                DescribeServiceOverviewOutcome DescribeServiceOverview(const Model::DescribeServiceOverviewRequest &request);
                void DescribeServiceOverviewAsync(const Model::DescribeServiceOverviewRequest& request, const DescribeServiceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceOverviewOutcomeCallable DescribeServiceOverviewCallable(const Model::DescribeServiceOverviewRequest& request);

                /**
                 *根据维度名和过滤条件，查询维度数据.
                 * @param req DescribeTagValuesRequest
                 * @return DescribeTagValuesOutcome
                 */
                DescribeTagValuesOutcome DescribeTagValues(const Model::DescribeTagValuesRequest &request);
                void DescribeTagValuesAsync(const Model::DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagValuesOutcomeCallable DescribeTagValuesCallable(const Model::DescribeTagValuesRequest& request);

                /**
                 *根据应用名查询服务拓扑图
                 * @param req DescribeTopologyNewRequest
                 * @return DescribeTopologyNewOutcome
                 */
                DescribeTopologyNewOutcome DescribeTopologyNew(const Model::DescribeTopologyNewRequest &request);
                void DescribeTopologyNewAsync(const Model::DescribeTopologyNewRequest& request, const DescribeTopologyNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopologyNewOutcomeCallable DescribeTopologyNewCallable(const Model::DescribeTopologyNewRequest& request);

                /**
                 *修改应用配置接口
                 * @param req ModifyApmApplicationConfigRequest
                 * @return ModifyApmApplicationConfigOutcome
                 */
                ModifyApmApplicationConfigOutcome ModifyApmApplicationConfig(const Model::ModifyApmApplicationConfigRequest &request);
                void ModifyApmApplicationConfigAsync(const Model::ModifyApmApplicationConfigRequest& request, const ModifyApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmApplicationConfigOutcomeCallable ModifyApmApplicationConfigCallable(const Model::ModifyApmApplicationConfigRequest& request);

                /**
                 *用于修改apm业务系统与其他产品的关联关系（包括创建和删除）
                 * @param req ModifyApmAssociationRequest
                 * @return ModifyApmAssociationOutcome
                 */
                ModifyApmAssociationOutcome ModifyApmAssociation(const Model::ModifyApmAssociationRequest &request);
                void ModifyApmAssociationAsync(const Model::ModifyApmAssociationRequest& request, const ModifyApmAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmAssociationOutcomeCallable ModifyApmAssociationCallable(const Model::ModifyApmAssociationRequest& request);

                /**
                 *修改APM业务系统接口
                 * @param req ModifyApmInstanceRequest
                 * @return ModifyApmInstanceOutcome
                 */
                ModifyApmInstanceOutcome ModifyApmInstance(const Model::ModifyApmInstanceRequest &request);
                void ModifyApmInstanceAsync(const Model::ModifyApmInstanceRequest& request, const ModifyApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmInstanceOutcomeCallable ModifyApmInstanceCallable(const Model::ModifyApmInstanceRequest& request);

                /**
                 *用于修改apm业务系统与Prometheus实例的指标匹配规则
                 * @param req ModifyApmPrometheusRuleRequest
                 * @return ModifyApmPrometheusRuleOutcome
                 */
                ModifyApmPrometheusRuleOutcome ModifyApmPrometheusRule(const Model::ModifyApmPrometheusRuleRequest &request);
                void ModifyApmPrometheusRuleAsync(const Model::ModifyApmPrometheusRuleRequest& request, const ModifyApmPrometheusRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmPrometheusRuleOutcomeCallable ModifyApmPrometheusRuleCallable(const Model::ModifyApmPrometheusRuleRequest& request);

                /**
                 *修改采样配置接口
                 * @param req ModifyApmSampleConfigRequest
                 * @return ModifyApmSampleConfigOutcome
                 */
                ModifyApmSampleConfigOutcome ModifyApmSampleConfig(const Model::ModifyApmSampleConfigRequest &request);
                void ModifyApmSampleConfigAsync(const Model::ModifyApmSampleConfigRequest& request, const ModifyApmSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmSampleConfigOutcomeCallable ModifyApmSampleConfigCallable(const Model::ModifyApmSampleConfigRequest& request);

                /**
                 *对外开放的openApi，客户可以灵活的指定需要修改的字段，再加入需要修改的服务列表.
                 * @param req ModifyGeneralApmApplicationConfigRequest
                 * @return ModifyGeneralApmApplicationConfigOutcome
                 */
                ModifyGeneralApmApplicationConfigOutcome ModifyGeneralApmApplicationConfig(const Model::ModifyGeneralApmApplicationConfigRequest &request);
                void ModifyGeneralApmApplicationConfigAsync(const Model::ModifyGeneralApmApplicationConfigRequest& request, const ModifyGeneralApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGeneralApmApplicationConfigOutcomeCallable ModifyGeneralApmApplicationConfigCallable(const Model::ModifyGeneralApmApplicationConfigRequest& request);

                /**
                 *销毁 APM 业务系统
                 * @param req TerminateApmInstanceRequest
                 * @return TerminateApmInstanceOutcome
                 */
                TerminateApmInstanceOutcome TerminateApmInstance(const Model::TerminateApmInstanceRequest &request);
                void TerminateApmInstanceAsync(const Model::TerminateApmInstanceRequest& request, const TerminateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateApmInstanceOutcomeCallable TerminateApmInstanceCallable(const Model::TerminateApmInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_APMCLIENT_H_
