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

#ifndef TENCENTCLOUD_HASIM_V20210716_HASIMCLIENT_H_
#define TENCENTCLOUD_HASIM_V20210716_HASIMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hasim/v20210716/model/CreateRuleRequest.h>
#include <tencentcloud/hasim/v20210716/model/CreateRuleResponse.h>
#include <tencentcloud/hasim/v20210716/model/CreateTacticRequest.h>
#include <tencentcloud/hasim/v20210716/model/CreateTacticResponse.h>
#include <tencentcloud/hasim/v20210716/model/CreateTagRequest.h>
#include <tencentcloud/hasim/v20210716/model/CreateTagResponse.h>
#include <tencentcloud/hasim/v20210716/model/DeleteRuleRequest.h>
#include <tencentcloud/hasim/v20210716/model/DeleteRuleResponse.h>
#include <tencentcloud/hasim/v20210716/model/DeleteTacticRequest.h>
#include <tencentcloud/hasim/v20210716/model/DeleteTacticResponse.h>
#include <tencentcloud/hasim/v20210716/model/DeleteTagRequest.h>
#include <tencentcloud/hasim/v20210716/model/DeleteTagResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeLinkRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeLinkResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeLinksRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeLinksResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeOrdersRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeOrdersResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeRuleRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeRuleResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeRulesRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeRulesResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeTacticRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeTacticResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeTacticsRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeTacticsResponse.h>
#include <tencentcloud/hasim/v20210716/model/DescribeTagsRequest.h>
#include <tencentcloud/hasim/v20210716/model/DescribeTagsResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyLinkAdvancedLogRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyLinkAdvancedLogResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyLinkTacticRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyLinkTacticResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyLinkTeleRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyLinkTeleResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyRuleRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyRuleResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyRuleStatusRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyRuleStatusResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyTacticRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyTacticResponse.h>
#include <tencentcloud/hasim/v20210716/model/ModifyTagRequest.h>
#include <tencentcloud/hasim/v20210716/model/ModifyTagResponse.h>
#include <tencentcloud/hasim/v20210716/model/RenewLinkInfoRequest.h>
#include <tencentcloud/hasim/v20210716/model/RenewLinkInfoResponse.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            class HasimClient : public AbstractClient
            {
            public:
                HasimClient(const Credential &credential, const std::string &region);
                HasimClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTacticResponse> CreateTacticOutcome;
                typedef std::future<CreateTacticOutcome> CreateTacticOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::CreateTacticRequest&, CreateTacticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTacticAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagResponse> CreateTagOutcome;
                typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::CreateTagRequest&, CreateTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTacticResponse> DeleteTacticOutcome;
                typedef std::future<DeleteTacticOutcome> DeleteTacticOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DeleteTacticRequest&, DeleteTacticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTacticAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagResponse> DeleteTagOutcome;
                typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DeleteTagRequest&, DeleteTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLinkResponse> DescribeLinkOutcome;
                typedef std::future<DescribeLinkOutcome> DescribeLinkOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeLinkRequest&, DescribeLinkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLinkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLinksResponse> DescribeLinksOutcome;
                typedef std::future<DescribeLinksOutcome> DescribeLinksOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeLinksRequest&, DescribeLinksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLinksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleResponse> DescribeRuleOutcome;
                typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeRuleRequest&, DescribeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTacticResponse> DescribeTacticOutcome;
                typedef std::future<DescribeTacticOutcome> DescribeTacticOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeTacticRequest&, DescribeTacticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTacticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTacticsResponse> DescribeTacticsOutcome;
                typedef std::future<DescribeTacticsOutcome> DescribeTacticsOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeTacticsRequest&, DescribeTacticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTacticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLinkAdvancedLogResponse> ModifyLinkAdvancedLogOutcome;
                typedef std::future<ModifyLinkAdvancedLogOutcome> ModifyLinkAdvancedLogOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyLinkAdvancedLogRequest&, ModifyLinkAdvancedLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLinkAdvancedLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLinkTacticResponse> ModifyLinkTacticOutcome;
                typedef std::future<ModifyLinkTacticOutcome> ModifyLinkTacticOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyLinkTacticRequest&, ModifyLinkTacticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLinkTacticAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLinkTeleResponse> ModifyLinkTeleOutcome;
                typedef std::future<ModifyLinkTeleOutcome> ModifyLinkTeleOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyLinkTeleRequest&, ModifyLinkTeleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLinkTeleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleStatusResponse> ModifyRuleStatusOutcome;
                typedef std::future<ModifyRuleStatusOutcome> ModifyRuleStatusOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyRuleStatusRequest&, ModifyRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTacticResponse> ModifyTacticOutcome;
                typedef std::future<ModifyTacticOutcome> ModifyTacticOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyTacticRequest&, ModifyTacticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTacticAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTagResponse> ModifyTagOutcome;
                typedef std::future<ModifyTagOutcome> ModifyTagOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::ModifyTagRequest&, ModifyTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewLinkInfoResponse> RenewLinkInfoOutcome;
                typedef std::future<RenewLinkInfoOutcome> RenewLinkInfoOutcomeCallable;
                typedef std::function<void(const HasimClient*, const Model::RenewLinkInfoRequest&, RenewLinkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewLinkInfoAsyncHandler;



                /**
                 *创建自动化规则
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建云兔切换策略
                 * @param req CreateTacticRequest
                 * @return CreateTacticOutcome
                 */
                CreateTacticOutcome CreateTactic(const Model::CreateTacticRequest &request);
                void CreateTacticAsync(const Model::CreateTacticRequest& request, const CreateTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTacticOutcomeCallable CreateTacticCallable(const Model::CreateTacticRequest& request);

                /**
                 *创建标签
                 * @param req CreateTagRequest
                 * @return CreateTagOutcome
                 */
                CreateTagOutcome CreateTag(const Model::CreateTagRequest &request);
                void CreateTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagOutcomeCallable CreateTagCallable(const Model::CreateTagRequest& request);

                /**
                 *删除自动化规则
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除策略
                 * @param req DeleteTacticRequest
                 * @return DeleteTacticOutcome
                 */
                DeleteTacticOutcome DeleteTactic(const Model::DeleteTacticRequest &request);
                void DeleteTacticAsync(const Model::DeleteTacticRequest& request, const DeleteTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTacticOutcomeCallable DeleteTacticCallable(const Model::DeleteTacticRequest& request);

                /**
                 *删除标签
                 * @param req DeleteTagRequest
                 * @return DeleteTagOutcome
                 */
                DeleteTagOutcome DeleteTag(const Model::DeleteTagRequest &request);
                void DeleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagOutcomeCallable DeleteTagCallable(const Model::DeleteTagRequest& request);

                /**
                 *查询云兔连接详细信息
                 * @param req DescribeLinkRequest
                 * @return DescribeLinkOutcome
                 */
                DescribeLinkOutcome DescribeLink(const Model::DescribeLinkRequest &request);
                void DescribeLinkAsync(const Model::DescribeLinkRequest& request, const DescribeLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLinkOutcomeCallable DescribeLinkCallable(const Model::DescribeLinkRequest& request);

                /**
                 *查询云兔连接列表
                 * @param req DescribeLinksRequest
                 * @return DescribeLinksOutcome
                 */
                DescribeLinksOutcome DescribeLinks(const Model::DescribeLinksRequest &request);
                void DescribeLinksAsync(const Model::DescribeLinksRequest& request, const DescribeLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLinksOutcomeCallable DescribeLinksCallable(const Model::DescribeLinksRequest& request);

                /**
                 *查询订单列表
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *查询自动化规则
                 * @param req DescribeRuleRequest
                 * @return DescribeRuleOutcome
                 */
                DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest &request);
                void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request);

                /**
                 *查询自动化规则列表
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *查询云兔切换策略信息
                 * @param req DescribeTacticRequest
                 * @return DescribeTacticOutcome
                 */
                DescribeTacticOutcome DescribeTactic(const Model::DescribeTacticRequest &request);
                void DescribeTacticAsync(const Model::DescribeTacticRequest& request, const DescribeTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTacticOutcomeCallable DescribeTacticCallable(const Model::DescribeTacticRequest& request);

                /**
                 *查询云兔切换策略列表
                 * @param req DescribeTacticsRequest
                 * @return DescribeTacticsOutcome
                 */
                DescribeTacticsOutcome DescribeTactics(const Model::DescribeTacticsRequest &request);
                void DescribeTacticsAsync(const Model::DescribeTacticsRequest& request, const DescribeTacticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTacticsOutcomeCallable DescribeTacticsCallable(const Model::DescribeTacticsRequest& request);

                /**
                 *查询标签列表
                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *编辑云兔高级日志状态
                 * @param req ModifyLinkAdvancedLogRequest
                 * @return ModifyLinkAdvancedLogOutcome
                 */
                ModifyLinkAdvancedLogOutcome ModifyLinkAdvancedLog(const Model::ModifyLinkAdvancedLogRequest &request);
                void ModifyLinkAdvancedLogAsync(const Model::ModifyLinkAdvancedLogRequest& request, const ModifyLinkAdvancedLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLinkAdvancedLogOutcomeCallable ModifyLinkAdvancedLogCallable(const Model::ModifyLinkAdvancedLogRequest& request);

                /**
                 *编辑云兔策略
                 * @param req ModifyLinkTacticRequest
                 * @return ModifyLinkTacticOutcome
                 */
                ModifyLinkTacticOutcome ModifyLinkTactic(const Model::ModifyLinkTacticRequest &request);
                void ModifyLinkTacticAsync(const Model::ModifyLinkTacticRequest& request, const ModifyLinkTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLinkTacticOutcomeCallable ModifyLinkTacticCallable(const Model::ModifyLinkTacticRequest& request);

                /**
                 *修改云兔运营商
                 * @param req ModifyLinkTeleRequest
                 * @return ModifyLinkTeleOutcome
                 */
                ModifyLinkTeleOutcome ModifyLinkTele(const Model::ModifyLinkTeleRequest &request);
                void ModifyLinkTeleAsync(const Model::ModifyLinkTeleRequest& request, const ModifyLinkTeleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLinkTeleOutcomeCallable ModifyLinkTeleCallable(const Model::ModifyLinkTeleRequest& request);

                /**
                 *编辑自动化规则
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *编辑自动化规则状态
                 * @param req ModifyRuleStatusRequest
                 * @return ModifyRuleStatusOutcome
                 */
                ModifyRuleStatusOutcome ModifyRuleStatus(const Model::ModifyRuleStatusRequest &request);
                void ModifyRuleStatusAsync(const Model::ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleStatusOutcomeCallable ModifyRuleStatusCallable(const Model::ModifyRuleStatusRequest& request);

                /**
                 *修改云兔切换策略
                 * @param req ModifyTacticRequest
                 * @return ModifyTacticOutcome
                 */
                ModifyTacticOutcome ModifyTactic(const Model::ModifyTacticRequest &request);
                void ModifyTacticAsync(const Model::ModifyTacticRequest& request, const ModifyTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTacticOutcomeCallable ModifyTacticCallable(const Model::ModifyTacticRequest& request);

                /**
                 *编辑标签
                 * @param req ModifyTagRequest
                 * @return ModifyTagOutcome
                 */
                ModifyTagOutcome ModifyTag(const Model::ModifyTagRequest &request);
                void ModifyTagAsync(const Model::ModifyTagRequest& request, const ModifyTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTagOutcomeCallable ModifyTagCallable(const Model::ModifyTagRequest& request);

                /**
                 *刷新云兔连接信息同步
                 * @param req RenewLinkInfoRequest
                 * @return RenewLinkInfoOutcome
                 */
                RenewLinkInfoOutcome RenewLinkInfo(const Model::RenewLinkInfoRequest &request);
                void RenewLinkInfoAsync(const Model::RenewLinkInfoRequest& request, const RenewLinkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewLinkInfoOutcomeCallable RenewLinkInfoCallable(const Model::RenewLinkInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_HASIMCLIENT_H_
