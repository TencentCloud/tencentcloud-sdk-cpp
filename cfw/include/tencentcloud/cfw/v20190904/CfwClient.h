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

#ifndef TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
#define TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSyncAssetStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSyncAssetStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyItemSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyItemSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/RunSyncAssetRequest.h>
#include <tencentcloud/cfw/v20190904/model/RunSyncAssetResponse.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            class CfwClient : public AbstractClient
            {
            public:
                CfwClient(const Credential &credential, const std::string &region);
                CfwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateAcRulesResponse> CreateAcRulesOutcome;
                typedef std::future<CreateAcRulesOutcome> CreateAcRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAcRulesRequest&, CreateAcRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcRulesAsyncHandler;
                typedef Outcome<Error, Model::DeleteAcRuleResponse> DeleteAcRuleOutcome;
                typedef std::future<DeleteAcRuleOutcome> DeleteAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAcRuleRequest&, DeleteAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAcRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteAllAccessControlRuleResponse> DeleteAllAccessControlRuleOutcome;
                typedef std::future<DeleteAllAccessControlRuleOutcome> DeleteAllAccessControlRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAllAccessControlRuleRequest&, DeleteAllAccessControlRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllAccessControlRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeAcListsResponse> DescribeAcListsOutcome;
                typedef std::future<DescribeAcListsOutcome> DescribeAcListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAcListsRequest&, DescribeAcListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcListsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatRuleOverviewResponse> DescribeNatRuleOverviewOutcome;
                typedef std::future<DescribeNatRuleOverviewOutcome> DescribeNatRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatRuleOverviewRequest&, DescribeNatRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatRuleOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeRuleOverviewResponse> DescribeRuleOverviewOutcome;
                typedef std::future<DescribeRuleOverviewOutcome> DescribeRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeRuleOverviewRequest&, DescribeRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeSwitchListsResponse> DescribeSwitchListsOutcome;
                typedef std::future<DescribeSwitchListsOutcome> DescribeSwitchListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSwitchListsRequest&, DescribeSwitchListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSwitchListsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSyncAssetStatusResponse> DescribeSyncAssetStatusOutcome;
                typedef std::future<DescribeSyncAssetStatusOutcome> DescribeSyncAssetStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSyncAssetStatusRequest&, DescribeSyncAssetStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncAssetStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeTableStatusResponse> DescribeTableStatusOutcome;
                typedef std::future<DescribeTableStatusOutcome> DescribeTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTableStatusRequest&, DescribeTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcRuleOverviewResponse> DescribeVpcRuleOverviewOutcome;
                typedef std::future<DescribeVpcRuleOverviewOutcome> DescribeVpcRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeVpcRuleOverviewRequest&, DescribeVpcRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcRuleOverviewAsyncHandler;
                typedef Outcome<Error, Model::ModifyAcRuleResponse> ModifyAcRuleOutcome;
                typedef std::future<ModifyAcRuleOutcome> ModifyAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAcRuleRequest&, ModifyAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAcRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyAllRuleStatusResponse> ModifyAllRuleStatusOutcome;
                typedef std::future<ModifyAllRuleStatusOutcome> ModifyAllRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllRuleStatusRequest&, ModifyAllRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllRuleStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifyAllSwitchStatusResponse> ModifyAllSwitchStatusOutcome;
                typedef std::future<ModifyAllSwitchStatusOutcome> ModifyAllSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllSwitchStatusRequest&, ModifyAllSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllSwitchStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifyItemSwitchStatusResponse> ModifyItemSwitchStatusOutcome;
                typedef std::future<ModifyItemSwitchStatusOutcome> ModifyItemSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyItemSwitchStatusRequest&, ModifyItemSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyItemSwitchStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifySequenceRulesResponse> ModifySequenceRulesOutcome;
                typedef std::future<ModifySequenceRulesOutcome> ModifySequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySequenceRulesRequest&, ModifySequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySequenceRulesAsyncHandler;
                typedef Outcome<Error, Model::ModifyTableStatusResponse> ModifyTableStatusOutcome;
                typedef std::future<ModifyTableStatusOutcome> ModifyTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyTableStatusRequest&, ModifyTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableStatusAsyncHandler;
                typedef Outcome<Error, Model::RunSyncAssetResponse> RunSyncAssetOutcome;
                typedef std::future<RunSyncAssetOutcome> RunSyncAssetOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RunSyncAssetRequest&, RunSyncAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunSyncAssetAsyncHandler;



                /**
                 *创建规则
                 * @param req CreateAcRulesRequest
                 * @return CreateAcRulesOutcome
                 */
                CreateAcRulesOutcome CreateAcRules(const Model::CreateAcRulesRequest &request);
                void CreateAcRulesAsync(const Model::CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAcRulesOutcomeCallable CreateAcRulesCallable(const Model::CreateAcRulesRequest& request);

                /**
                 *删除规则
                 * @param req DeleteAcRuleRequest
                 * @return DeleteAcRuleOutcome
                 */
                DeleteAcRuleOutcome DeleteAcRule(const Model::DeleteAcRuleRequest &request);
                void DeleteAcRuleAsync(const Model::DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAcRuleOutcomeCallable DeleteAcRuleCallable(const Model::DeleteAcRuleRequest& request);

                /**
                 *全部删除规则
                 * @param req DeleteAllAccessControlRuleRequest
                 * @return DeleteAllAccessControlRuleOutcome
                 */
                DeleteAllAccessControlRuleOutcome DeleteAllAccessControlRule(const Model::DeleteAllAccessControlRuleRequest &request);
                void DeleteAllAccessControlRuleAsync(const Model::DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllAccessControlRuleOutcomeCallable DeleteAllAccessControlRuleCallable(const Model::DeleteAllAccessControlRuleRequest& request);

                /**
                 *访问控制列表
                 * @param req DescribeAcListsRequest
                 * @return DescribeAcListsOutcome
                 */
                DescribeAcListsOutcome DescribeAcLists(const Model::DescribeAcListsRequest &request);
                void DescribeAcListsAsync(const Model::DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAcListsOutcomeCallable DescribeAcListsCallable(const Model::DescribeAcListsRequest& request);

                /**
                 *nat规则列表概况
                 * @param req DescribeNatRuleOverviewRequest
                 * @return DescribeNatRuleOverviewOutcome
                 */
                DescribeNatRuleOverviewOutcome DescribeNatRuleOverview(const Model::DescribeNatRuleOverviewRequest &request);
                void DescribeNatRuleOverviewAsync(const Model::DescribeNatRuleOverviewRequest& request, const DescribeNatRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatRuleOverviewOutcomeCallable DescribeNatRuleOverviewCallable(const Model::DescribeNatRuleOverviewRequest& request);

                /**
                 *查询规则列表概况
                 * @param req DescribeRuleOverviewRequest
                 * @return DescribeRuleOverviewOutcome
                 */
                DescribeRuleOverviewOutcome DescribeRuleOverview(const Model::DescribeRuleOverviewRequest &request);
                void DescribeRuleOverviewAsync(const Model::DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOverviewOutcomeCallable DescribeRuleOverviewCallable(const Model::DescribeRuleOverviewRequest& request);

                /**
                 *防火墙开关列表
                 * @param req DescribeSwitchListsRequest
                 * @return DescribeSwitchListsOutcome
                 */
                DescribeSwitchListsOutcome DescribeSwitchLists(const Model::DescribeSwitchListsRequest &request);
                void DescribeSwitchListsAsync(const Model::DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSwitchListsOutcomeCallable DescribeSwitchListsCallable(const Model::DescribeSwitchListsRequest& request);

                /**
                 *同步资产状态查询-互联网&VPC
                 * @param req DescribeSyncAssetStatusRequest
                 * @return DescribeSyncAssetStatusOutcome
                 */
                DescribeSyncAssetStatusOutcome DescribeSyncAssetStatus(const Model::DescribeSyncAssetStatusRequest &request);
                void DescribeSyncAssetStatusAsync(const Model::DescribeSyncAssetStatusRequest& request, const DescribeSyncAssetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncAssetStatusOutcomeCallable DescribeSyncAssetStatusCallable(const Model::DescribeSyncAssetStatusRequest& request);

                /**
                 *查询规则表状态
                 * @param req DescribeTableStatusRequest
                 * @return DescribeTableStatusOutcome
                 */
                DescribeTableStatusOutcome DescribeTableStatus(const Model::DescribeTableStatusRequest &request);
                void DescribeTableStatusAsync(const Model::DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableStatusOutcomeCallable DescribeTableStatusCallable(const Model::DescribeTableStatusRequest& request);

                /**
                 *vpc规则列表概况
                 * @param req DescribeVpcRuleOverviewRequest
                 * @return DescribeVpcRuleOverviewOutcome
                 */
                DescribeVpcRuleOverviewOutcome DescribeVpcRuleOverview(const Model::DescribeVpcRuleOverviewRequest &request);
                void DescribeVpcRuleOverviewAsync(const Model::DescribeVpcRuleOverviewRequest& request, const DescribeVpcRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcRuleOverviewOutcomeCallable DescribeVpcRuleOverviewCallable(const Model::DescribeVpcRuleOverviewRequest& request);

                /**
                 *修改规则
                 * @param req ModifyAcRuleRequest
                 * @return ModifyAcRuleOutcome
                 */
                ModifyAcRuleOutcome ModifyAcRule(const Model::ModifyAcRuleRequest &request);
                void ModifyAcRuleAsync(const Model::ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAcRuleOutcomeCallable ModifyAcRuleCallable(const Model::ModifyAcRuleRequest& request);

                /**
                 *启用停用全部规则
                 * @param req ModifyAllRuleStatusRequest
                 * @return ModifyAllRuleStatusOutcome
                 */
                ModifyAllRuleStatusOutcome ModifyAllRuleStatus(const Model::ModifyAllRuleStatusRequest &request);
                void ModifyAllRuleStatusAsync(const Model::ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllRuleStatusOutcomeCallable ModifyAllRuleStatusCallable(const Model::ModifyAllRuleStatusRequest& request);

                /**
                 *一键开启和关闭
                 * @param req ModifyAllSwitchStatusRequest
                 * @return ModifyAllSwitchStatusOutcome
                 */
                ModifyAllSwitchStatusOutcome ModifyAllSwitchStatus(const Model::ModifyAllSwitchStatusRequest &request);
                void ModifyAllSwitchStatusAsync(const Model::ModifyAllSwitchStatusRequest& request, const ModifyAllSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllSwitchStatusOutcomeCallable ModifyAllSwitchStatusCallable(const Model::ModifyAllSwitchStatusRequest& request);

                /**
                 *修改单个防火墙开关
                 * @param req ModifyItemSwitchStatusRequest
                 * @return ModifyItemSwitchStatusOutcome
                 */
                ModifyItemSwitchStatusOutcome ModifyItemSwitchStatus(const Model::ModifyItemSwitchStatusRequest &request);
                void ModifyItemSwitchStatusAsync(const Model::ModifyItemSwitchStatusRequest& request, const ModifyItemSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyItemSwitchStatusOutcomeCallable ModifyItemSwitchStatusCallable(const Model::ModifyItemSwitchStatusRequest& request);

                /**
                 *修改规则执行顺序
                 * @param req ModifySequenceRulesRequest
                 * @return ModifySequenceRulesOutcome
                 */
                ModifySequenceRulesOutcome ModifySequenceRules(const Model::ModifySequenceRulesRequest &request);
                void ModifySequenceRulesAsync(const Model::ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySequenceRulesOutcomeCallable ModifySequenceRulesCallable(const Model::ModifySequenceRulesRequest& request);

                /**
                 *修改规则表状态
                 * @param req ModifyTableStatusRequest
                 * @return ModifyTableStatusOutcome
                 */
                ModifyTableStatusOutcome ModifyTableStatus(const Model::ModifyTableStatusRequest &request);
                void ModifyTableStatusAsync(const Model::ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableStatusOutcomeCallable ModifyTableStatusCallable(const Model::ModifyTableStatusRequest& request);

                /**
                 *同步资产-互联网&VPC
                 * @param req RunSyncAssetRequest
                 * @return RunSyncAssetOutcome
                 */
                RunSyncAssetOutcome RunSyncAsset(const Model::RunSyncAssetRequest &request);
                void RunSyncAssetAsync(const Model::RunSyncAssetRequest& request, const RunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunSyncAssetOutcomeCallable RunSyncAssetCallable(const Model::RunSyncAssetRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
