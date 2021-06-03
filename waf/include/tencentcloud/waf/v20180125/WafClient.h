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

#ifndef TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
#define TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateAttackDownloadTaskRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateAttackDownloadTaskResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAttackDownloadRecordResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteDownloadRecordRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteDownloadRecordResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusResponse.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            class WafClient : public AbstractClient
            {
            public:
                WafClient(const Credential &credential, const std::string &region);
                WafClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddCustomRuleResponse> AddCustomRuleOutcome;
                typedef std::future<AddCustomRuleOutcome> AddCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddCustomRuleRequest&, AddCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateAttackDownloadTaskResponse> CreateAttackDownloadTaskOutcome;
                typedef std::future<CreateAttackDownloadTaskOutcome> CreateAttackDownloadTaskOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateAttackDownloadTaskRequest&, CreateAttackDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAttackDownloadTaskAsyncHandler;
                typedef Outcome<Error, Model::DeleteAttackDownloadRecordResponse> DeleteAttackDownloadRecordOutcome;
                typedef std::future<DeleteAttackDownloadRecordOutcome> DeleteAttackDownloadRecordOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAttackDownloadRecordRequest&, DeleteAttackDownloadRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttackDownloadRecordAsyncHandler;
                typedef Outcome<Error, Model::DeleteDownloadRecordResponse> DeleteDownloadRecordOutcome;
                typedef std::future<DeleteDownloadRecordOutcome> DeleteDownloadRecordOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteDownloadRecordRequest&, DeleteDownloadRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDownloadRecordAsyncHandler;
                typedef Outcome<Error, Model::DeleteSessionResponse> DeleteSessionOutcome;
                typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteSessionRequest&, DeleteSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSessionAsyncHandler;
                typedef Outcome<Error, Model::DescribeCustomRulesResponse> DescribeCustomRulesOutcome;
                typedef std::future<DescribeCustomRulesOutcome> DescribeCustomRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCustomRulesRequest&, DescribeCustomRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowTrendResponse> DescribeFlowTrendOutcome;
                typedef std::future<DescribeFlowTrendOutcome> DescribeFlowTrendOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeFlowTrendRequest&, DescribeFlowTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTrendAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserClbWafRegionsResponse> DescribeUserClbWafRegionsOutcome;
                typedef std::future<DescribeUserClbWafRegionsOutcome> DescribeUserClbWafRegionsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserClbWafRegionsRequest&, DescribeUserClbWafRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClbWafRegionsAsyncHandler;
                typedef Outcome<Error, Model::ModifyCustomRuleStatusResponse> ModifyCustomRuleStatusOutcome;
                typedef std::future<ModifyCustomRuleStatusOutcome> ModifyCustomRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomRuleStatusRequest&, ModifyCustomRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomRuleStatusAsyncHandler;



                /**
                 *增加自定义策略
                 * @param req AddCustomRuleRequest
                 * @return AddCustomRuleOutcome
                 */
                AddCustomRuleOutcome AddCustomRule(const Model::AddCustomRuleRequest &request);
                void AddCustomRuleAsync(const Model::AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomRuleOutcomeCallable AddCustomRuleCallable(const Model::AddCustomRuleRequest& request);

                /**
                 *创建攻击日志下载任务
                 * @param req CreateAttackDownloadTaskRequest
                 * @return CreateAttackDownloadTaskOutcome
                 */
                CreateAttackDownloadTaskOutcome CreateAttackDownloadTask(const Model::CreateAttackDownloadTaskRequest &request);
                void CreateAttackDownloadTaskAsync(const Model::CreateAttackDownloadTaskRequest& request, const CreateAttackDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAttackDownloadTaskOutcomeCallable CreateAttackDownloadTaskCallable(const Model::CreateAttackDownloadTaskRequest& request);

                /**
                 *删除攻击日志下载任务记录
                 * @param req DeleteAttackDownloadRecordRequest
                 * @return DeleteAttackDownloadRecordOutcome
                 */
                DeleteAttackDownloadRecordOutcome DeleteAttackDownloadRecord(const Model::DeleteAttackDownloadRecordRequest &request);
                void DeleteAttackDownloadRecordAsync(const Model::DeleteAttackDownloadRecordRequest& request, const DeleteAttackDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttackDownloadRecordOutcomeCallable DeleteAttackDownloadRecordCallable(const Model::DeleteAttackDownloadRecordRequest& request);

                /**
                 *删除访问日志下载记录
                 * @param req DeleteDownloadRecordRequest
                 * @return DeleteDownloadRecordOutcome
                 */
                DeleteDownloadRecordOutcome DeleteDownloadRecord(const Model::DeleteDownloadRecordRequest &request);
                void DeleteDownloadRecordAsync(const Model::DeleteDownloadRecordRequest& request, const DeleteDownloadRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDownloadRecordOutcomeCallable DeleteDownloadRecordCallable(const Model::DeleteDownloadRecordRequest& request);

                /**
                 *删除CC攻击的session设置
                 * @param req DeleteSessionRequest
                 * @return DeleteSessionOutcome
                 */
                DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest &request);
                void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request);

                /**
                 *获取防护配置中的自定义策略列表
                 * @param req DescribeCustomRulesRequest
                 * @return DescribeCustomRulesOutcome
                 */
                DescribeCustomRulesOutcome DescribeCustomRules(const Model::DescribeCustomRulesRequest &request);
                void DescribeCustomRulesAsync(const Model::DescribeCustomRulesRequest& request, const DescribeCustomRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRulesOutcomeCallable DescribeCustomRulesCallable(const Model::DescribeCustomRulesRequest& request);

                /**
                 *获取waf流量访问趋势
                 * @param req DescribeFlowTrendRequest
                 * @return DescribeFlowTrendOutcome
                 */
                DescribeFlowTrendOutcome DescribeFlowTrend(const Model::DescribeFlowTrendRequest &request);
                void DescribeFlowTrendAsync(const Model::DescribeFlowTrendRequest& request, const DescribeFlowTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTrendOutcomeCallable DescribeFlowTrendCallable(const Model::DescribeFlowTrendRequest& request);

                /**
                 *在负载均衡型WAF的添加、编辑域名配置的时候，需要展示负载均衡型WAF（clb-waf)支持的地域列表，通过DescribeUserClbWafRegions既可以获得当前对客户已经开放的地域列表
                 * @param req DescribeUserClbWafRegionsRequest
                 * @return DescribeUserClbWafRegionsOutcome
                 */
                DescribeUserClbWafRegionsOutcome DescribeUserClbWafRegions(const Model::DescribeUserClbWafRegionsRequest &request);
                void DescribeUserClbWafRegionsAsync(const Model::DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserClbWafRegionsOutcomeCallable DescribeUserClbWafRegionsCallable(const Model::DescribeUserClbWafRegionsRequest& request);

                /**
                 *开启或禁用自定义策略
                 * @param req ModifyCustomRuleStatusRequest
                 * @return ModifyCustomRuleStatusOutcome
                 */
                ModifyCustomRuleStatusOutcome ModifyCustomRuleStatus(const Model::ModifyCustomRuleStatusRequest &request);
                void ModifyCustomRuleStatusAsync(const Model::ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomRuleStatusOutcomeCallable ModifyCustomRuleStatusCallable(const Model::ModifyCustomRuleStatusRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
