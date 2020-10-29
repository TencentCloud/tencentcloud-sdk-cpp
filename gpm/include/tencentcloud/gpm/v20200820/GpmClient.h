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
#include <tencentcloud/gpm/v20200820/model/ModifyMatchRequest.h>
#include <tencentcloud/gpm/v20200820/model/ModifyMatchResponse.h>
#include <tencentcloud/gpm/v20200820/model/ModifyRuleRequest.h>
#include <tencentcloud/gpm/v20200820/model/ModifyRuleResponse.h>
#include <tencentcloud/gpm/v20200820/model/StartMatchingRequest.h>
#include <tencentcloud/gpm/v20200820/model/StartMatchingResponse.h>


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

                typedef Outcome<Error, Model::CancelMatchingResponse> CancelMatchingOutcome;
                typedef std::future<CancelMatchingOutcome> CancelMatchingOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::CancelMatchingRequest&, CancelMatchingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelMatchingAsyncHandler;
                typedef Outcome<Error, Model::CreateMatchResponse> CreateMatchOutcome;
                typedef std::future<CreateMatchOutcome> CreateMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::CreateMatchRequest&, CreateMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMatchAsyncHandler;
                typedef Outcome<Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteMatchResponse> DeleteMatchOutcome;
                typedef std::future<DeleteMatchOutcome> DeleteMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DeleteMatchRequest&, DeleteMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMatchAsyncHandler;
                typedef Outcome<Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeDataResponse> DescribeDataOutcome;
                typedef std::future<DescribeDataOutcome> DescribeDataOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeDataRequest&, DescribeDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeMatchResponse> DescribeMatchOutcome;
                typedef std::future<DescribeMatchOutcome> DescribeMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchRequest&, DescribeMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchAsyncHandler;
                typedef Outcome<Error, Model::DescribeMatchCodesResponse> DescribeMatchCodesOutcome;
                typedef std::future<DescribeMatchCodesOutcome> DescribeMatchCodesOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchCodesRequest&, DescribeMatchCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchCodesAsyncHandler;
                typedef Outcome<Error, Model::DescribeMatchesResponse> DescribeMatchesOutcome;
                typedef std::future<DescribeMatchesOutcome> DescribeMatchesOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchesRequest&, DescribeMatchesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchesAsyncHandler;
                typedef Outcome<Error, Model::DescribeMatchingProgressResponse> DescribeMatchingProgressOutcome;
                typedef std::future<DescribeMatchingProgressOutcome> DescribeMatchingProgressOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeMatchingProgressRequest&, DescribeMatchingProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMatchingProgressAsyncHandler;
                typedef Outcome<Error, Model::DescribeRuleResponse> DescribeRuleOutcome;
                typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeRuleRequest&, DescribeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Error, Model::ModifyMatchResponse> ModifyMatchOutcome;
                typedef std::future<ModifyMatchOutcome> ModifyMatchOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::ModifyMatchRequest&, ModifyMatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMatchAsyncHandler;
                typedef Outcome<Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Error, Model::StartMatchingResponse> StartMatchingOutcome;
                typedef std::future<StartMatchingOutcome> StartMatchingOutcomeCallable;
                typedef std::function<void(const GpmClient*, const Model::StartMatchingRequest&, StartMatchingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMatchingAsyncHandler;



                /**
                 *取消匹配。
                 * @param req CancelMatchingRequest
                 * @return CancelMatchingOutcome
                 */
                CancelMatchingOutcome CancelMatching(const Model::CancelMatchingRequest &request);
                void CancelMatchingAsync(const Model::CancelMatchingRequest& request, const CancelMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelMatchingOutcomeCallable CancelMatchingCallable(const Model::CancelMatchingRequest& request);

                /**
                 *创建匹配
                 * @param req CreateMatchRequest
                 * @return CreateMatchOutcome
                 */
                CreateMatchOutcome CreateMatch(const Model::CreateMatchRequest &request);
                void CreateMatchAsync(const Model::CreateMatchRequest& request, const CreateMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMatchOutcomeCallable CreateMatchCallable(const Model::CreateMatchRequest& request);

                /**
                 *创建规则
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *删除匹配
                 * @param req DeleteMatchRequest
                 * @return DeleteMatchOutcome
                 */
                DeleteMatchOutcome DeleteMatch(const Model::DeleteMatchRequest &request);
                void DeleteMatchAsync(const Model::DeleteMatchRequest& request, const DeleteMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMatchOutcomeCallable DeleteMatchCallable(const Model::DeleteMatchRequest& request);

                /**
                 *删除规则
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *统计数据
                 * @param req DescribeDataRequest
                 * @return DescribeDataOutcome
                 */
                DescribeDataOutcome DescribeData(const Model::DescribeDataRequest &request);
                void DescribeDataAsync(const Model::DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataOutcomeCallable DescribeDataCallable(const Model::DescribeDataRequest& request);

                /**
                 *查询匹配详情
                 * @param req DescribeMatchRequest
                 * @return DescribeMatchOutcome
                 */
                DescribeMatchOutcome DescribeMatch(const Model::DescribeMatchRequest &request);
                void DescribeMatchAsync(const Model::DescribeMatchRequest& request, const DescribeMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchOutcomeCallable DescribeMatchCallable(const Model::DescribeMatchRequest& request);

                /**
                 *分页查询匹配Code
                 * @param req DescribeMatchCodesRequest
                 * @return DescribeMatchCodesOutcome
                 */
                DescribeMatchCodesOutcome DescribeMatchCodes(const Model::DescribeMatchCodesRequest &request);
                void DescribeMatchCodesAsync(const Model::DescribeMatchCodesRequest& request, const DescribeMatchCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchCodesOutcomeCallable DescribeMatchCodesCallable(const Model::DescribeMatchCodesRequest& request);

                /**
                 *分页查询匹配列表
                 * @param req DescribeMatchesRequest
                 * @return DescribeMatchesOutcome
                 */
                DescribeMatchesOutcome DescribeMatches(const Model::DescribeMatchesRequest &request);
                void DescribeMatchesAsync(const Model::DescribeMatchesRequest& request, const DescribeMatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchesOutcomeCallable DescribeMatchesCallable(const Model::DescribeMatchesRequest& request);

                /**
                 *查询匹配进度。
                 * @param req DescribeMatchingProgressRequest
                 * @return DescribeMatchingProgressOutcome
                 */
                DescribeMatchingProgressOutcome DescribeMatchingProgress(const Model::DescribeMatchingProgressRequest &request);
                void DescribeMatchingProgressAsync(const Model::DescribeMatchingProgressRequest& request, const DescribeMatchingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMatchingProgressOutcomeCallable DescribeMatchingProgressCallable(const Model::DescribeMatchingProgressRequest& request);

                /**
                 *查询规则详情
                 * @param req DescribeRuleRequest
                 * @return DescribeRuleOutcome
                 */
                DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest &request);
                void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request);

                /**
                 *分页查询规则集列表
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *修改匹配
                 * @param req ModifyMatchRequest
                 * @return ModifyMatchOutcome
                 */
                ModifyMatchOutcome ModifyMatch(const Model::ModifyMatchRequest &request);
                void ModifyMatchAsync(const Model::ModifyMatchRequest& request, const ModifyMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMatchOutcomeCallable ModifyMatchCallable(const Model::ModifyMatchRequest& request);

                /**
                 *修改规则（描述、标签）
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *支持传入一个玩家或多个玩家发起匹配，在同一个请求内的玩家将被分到同一个对局。
                 * @param req StartMatchingRequest
                 * @return StartMatchingOutcome
                 */
                StartMatchingOutcome StartMatching(const Model::StartMatchingRequest &request);
                void StartMatchingAsync(const Model::StartMatchingRequest& request, const StartMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMatchingOutcomeCallable StartMatchingCallable(const Model::StartMatchingRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_GPMCLIENT_H_
