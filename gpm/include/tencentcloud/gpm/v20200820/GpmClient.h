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

#ifndef TENCENTCLOUD_GPM_V20200820_GPMCLIENT_H_
#define TENCENTCLOUD_GPM_V20200820_GPMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gpm/v20200820/model/CancelMatchingRequest.h>
#include <tencentcloud/gpm/v20200820/model/CancelMatchingResponse.h>
#include <tencentcloud/gpm/v20200820/model/CreateMatchRequest.h>
#include <tencentcloud/gpm/v20200820/model/CreateMatchResponse.h>
#include <tencentcloud/gpm/v20200820/model/CreateRuleRequest.h>
#include <tencentcloud/gpm/v20200820/model/CreateRuleResponse.h>
#include <tencentcloud/gpm/v20200820/model/DeleteMatchRequest.h>
#include <tencentcloud/gpm/v20200820/model/DeleteMatchResponse.h>
#include <tencentcloud/gpm/v20200820/model/DeleteRuleRequest.h>
#include <tencentcloud/gpm/v20200820/model/DeleteRuleResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeDataRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeDataResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchCodesRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchCodesResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchesRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchesResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchingProgressRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeMatchingProgressResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeRuleRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeRuleResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeRulesRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeRulesResponse.h>
#include <tencentcloud/gpm/v20200820/model/DescribeTokenRequest.h>
#include <tencentcloud/gpm/v20200820/model/DescribeTokenResponse.h>
#include <tencentcloud/gpm/v20200820/model/ModifyMatchRequest.h>
#include <tencentcloud/gpm/v20200820/model/ModifyMatchResponse.h>
#include <tencentcloud/gpm/v20200820/model/ModifyRuleRequest.h>
#include <tencentcloud/gpm/v20200820/model/ModifyRuleResponse.h>
#include <tencentcloud/gpm/v20200820/model/ModifyTokenRequest.h>
#include <tencentcloud/gpm/v20200820/model/ModifyTokenResponse.h>
#include <tencentcloud/gpm/v20200820/model/StartMatchingRequest.h>
#include <tencentcloud/gpm/v20200820/model/StartMatchingResponse.h>
#include <tencentcloud/gpm/v20200820/model/StartMatchingBackfillRequest.h>
#include <tencentcloud/gpm/v20200820/model/StartMatchingBackfillResponse.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            class GpmClient : public AbstractClient
            {
            public:
                GpmClient(const Credential &credential, const std::string &region);
                GpmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelMatchingResponse> CancelMatchingOutcome;
                typedef std::future<CancelMatchingOutcome> CancelMatchingOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::CancelMatchingRequest&, CancelMatchingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelMatchingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMatchResponse> CreateMatchOutcome;
                typedef std::future<CreateMatchOutcome> CreateMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::CreateMatchRequest&, CreateMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMatchResponse> DeleteMatchOutcome;
                typedef std::future<DeleteMatchOutcome> DeleteMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DeleteMatchRequest&, DeleteMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMatchAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataResponse> DescribeDataOutcome;
                typedef std::future<DescribeDataOutcome> DescribeDataOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeDataRequest&, DescribeDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMatchResponse> DescribeMatchOutcome;
                typedef std::future<DescribeMatchOutcome> DescribeMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchRequest&, DescribeMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMatchCodesResponse> DescribeMatchCodesOutcome;
                typedef std::future<DescribeMatchCodesOutcome> DescribeMatchCodesOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchCodesRequest&, DescribeMatchCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMatchesResponse> DescribeMatchesOutcome;
                typedef std::future<DescribeMatchesOutcome> DescribeMatchesOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchesRequest&, DescribeMatchesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMatchingProgressResponse> DescribeMatchingProgressOutcome;
                typedef std::future<DescribeMatchingProgressOutcome> DescribeMatchingProgressOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchingProgressRequest&, DescribeMatchingProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchingProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleResponse> DescribeRuleOutcome;
                typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeRuleRequest&, DescribeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenResponse> DescribeTokenOutcome;
                typedef std::future<DescribeTokenOutcome> DescribeTokenOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeTokenRequest&, DescribeTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMatchResponse> ModifyMatchOutcome;
                typedef std::future<ModifyMatchOutcome> ModifyMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::ModifyMatchRequest&, ModifyMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTokenResponse> ModifyTokenOutcome;
                typedef std::future<ModifyTokenOutcome> ModifyTokenOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::ModifyTokenRequest&, ModifyTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMatchingResponse> StartMatchingOutcome;
                typedef std::future<StartMatchingOutcome> StartMatchingOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::StartMatchingRequest&, StartMatchingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMatchingAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMatchingBackfillResponse> StartMatchingBackfillOutcome;
                typedef std::future<StartMatchingBackfillOutcome> StartMatchingBackfillOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::StartMatchingBackfillRequest&, StartMatchingBackfillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMatchingBackfillAsyncHandler;



                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

取消匹配。
                 * @param req CancelMatchingRequest
                 * @return CancelMatchingOutcome
                 */
                CancelMatchingOutcome CancelMatching(const Model::CancelMatchingRequest &request);
                void CancelMatchingAsync(const Model::CancelMatchingRequest& request, const CancelMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelMatchingOutcomeCallable CancelMatchingCallable(const Model::CancelMatchingRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

创建匹配
                 * @param req CreateMatchRequest
                 * @return CreateMatchOutcome
                 */
                CreateMatchOutcome CreateMatch(const Model::CreateMatchRequest &request);
                void CreateMatchAsync(const Model::CreateMatchRequest& request, const CreateMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMatchOutcomeCallable CreateMatchCallable(const Model::CreateMatchRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

创建规则
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

删除匹配
                 * @param req DeleteMatchRequest
                 * @return DeleteMatchOutcome
                 */
                DeleteMatchOutcome DeleteMatch(const Model::DeleteMatchRequest &request);
                void DeleteMatchAsync(const Model::DeleteMatchRequest& request, const DeleteMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMatchOutcomeCallable DeleteMatchCallable(const Model::DeleteMatchRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

删除规则
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

统计数据
                 * @param req DescribeDataRequest
                 * @return DescribeDataOutcome
                 */
                DescribeDataOutcome DescribeData(const Model::DescribeDataRequest &request);
                void DescribeDataAsync(const Model::DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataOutcomeCallable DescribeDataCallable(const Model::DescribeDataRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

查询匹配详情
                 * @param req DescribeMatchRequest
                 * @return DescribeMatchOutcome
                 */
                DescribeMatchOutcome DescribeMatch(const Model::DescribeMatchRequest &request);
                void DescribeMatchAsync(const Model::DescribeMatchRequest& request, const DescribeMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchOutcomeCallable DescribeMatchCallable(const Model::DescribeMatchRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

分页查询匹配Code
                 * @param req DescribeMatchCodesRequest
                 * @return DescribeMatchCodesOutcome
                 */
                DescribeMatchCodesOutcome DescribeMatchCodes(const Model::DescribeMatchCodesRequest &request);
                void DescribeMatchCodesAsync(const Model::DescribeMatchCodesRequest& request, const DescribeMatchCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchCodesOutcomeCallable DescribeMatchCodesCallable(const Model::DescribeMatchCodesRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

分页查询匹配列表
                 * @param req DescribeMatchesRequest
                 * @return DescribeMatchesOutcome
                 */
                DescribeMatchesOutcome DescribeMatches(const Model::DescribeMatchesRequest &request);
                void DescribeMatchesAsync(const Model::DescribeMatchesRequest& request, const DescribeMatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchesOutcomeCallable DescribeMatchesCallable(const Model::DescribeMatchesRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

查询匹配进度。
                 * @param req DescribeMatchingProgressRequest
                 * @return DescribeMatchingProgressOutcome
                 */
                DescribeMatchingProgressOutcome DescribeMatchingProgress(const Model::DescribeMatchingProgressRequest &request);
                void DescribeMatchingProgressAsync(const Model::DescribeMatchingProgressRequest& request, const DescribeMatchingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchingProgressOutcomeCallable DescribeMatchingProgressCallable(const Model::DescribeMatchingProgressRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

查询规则详情
                 * @param req DescribeRuleRequest
                 * @return DescribeRuleOutcome
                 */
                DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest &request);
                void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

分页查询规则集列表
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

查询匹配Token，Token用于push消息验证。
                 * @param req DescribeTokenRequest
                 * @return DescribeTokenOutcome
                 */
                DescribeTokenOutcome DescribeToken(const Model::DescribeTokenRequest &request);
                void DescribeTokenAsync(const Model::DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenOutcomeCallable DescribeTokenCallable(const Model::DescribeTokenRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

修改匹配
                 * @param req ModifyMatchRequest
                 * @return ModifyMatchOutcome
                 */
                ModifyMatchOutcome ModifyMatch(const Model::ModifyMatchRequest &request);
                void ModifyMatchAsync(const Model::ModifyMatchRequest& request, const ModifyMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMatchOutcomeCallable ModifyMatchCallable(const Model::ModifyMatchRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

修改规则（描述、标签）
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

修改匹配Token。
                 * @param req ModifyTokenRequest
                 * @return ModifyTokenOutcome
                 */
                ModifyTokenOutcome ModifyToken(const Model::ModifyTokenRequest &request);
                void ModifyTokenAsync(const Model::ModifyTokenRequest& request, const ModifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTokenOutcomeCallable ModifyTokenCallable(const Model::ModifyTokenRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

支持传入一个玩家或多个玩家发起匹配，在同一个请求内的玩家将被分到同一个对局。
                 * @param req StartMatchingRequest
                 * @return StartMatchingOutcome
                 */
                StartMatchingOutcome StartMatching(const Model::StartMatchingRequest &request);
                void StartMatchingAsync(const Model::StartMatchingRequest& request, const StartMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMatchingOutcomeCallable StartMatchingCallable(const Model::StartMatchingRequest& request);

                /**
                 *此接口无法使用，游戏玩家匹配GPM已于6.1正式下架，感谢您的支持

通过调用StartMatchingBackfill，用户可以传入一个回填的匹配请求，GPM为回填请求搜索符合条件的ticket并形成一个新的match。
                 * @param req StartMatchingBackfillRequest
                 * @return StartMatchingBackfillOutcome
                 */
                StartMatchingBackfillOutcome StartMatchingBackfill(const Model::StartMatchingBackfillRequest &request);
                void StartMatchingBackfillAsync(const Model::StartMatchingBackfillRequest& request, const StartMatchingBackfillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMatchingBackfillOutcomeCallable StartMatchingBackfillCallable(const Model::StartMatchingBackfillRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_GPMCLIENT_H_
