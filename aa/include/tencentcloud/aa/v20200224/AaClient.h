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

#ifndef TENCENTCLOUD_AA_V20200224_AACLIENT_H_
#define TENCENTCLOUD_AA_V20200224_AACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/aa/v20200224/model/ManageMarketingRiskRequest.h>
#include <tencentcloud/aa/v20200224/model/ManageMarketingRiskResponse.h>
#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushRequest.h>
#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushResponse.h>
#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushAdvancedRequest.h>
#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushAdvancedResponse.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            class AaClient : public AbstractClient
            {
            public:
                AaClient(const Credential &credential, const std::string &region);
                AaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ManageMarketingRiskResponse> ManageMarketingRiskOutcome;
                typedef std::future<ManageMarketingRiskOutcome> ManageMarketingRiskOutcomeCallable;
                typedef std::function<void(const AaClient*, const Model::ManageMarketingRiskRequest&, ManageMarketingRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageMarketingRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryActivityAntiRushResponse> QueryActivityAntiRushOutcome;
                typedef std::future<QueryActivityAntiRushOutcome> QueryActivityAntiRushOutcomeCallable;
                typedef std::function<void(const AaClient*, const Model::QueryActivityAntiRushRequest&, QueryActivityAntiRushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityAntiRushAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryActivityAntiRushAdvancedResponse> QueryActivityAntiRushAdvancedOutcome;
                typedef std::future<QueryActivityAntiRushAdvancedOutcome> QueryActivityAntiRushAdvancedOutcomeCallable;
                typedef std::function<void(const AaClient*, const Model::QueryActivityAntiRushAdvancedRequest&, QueryActivityAntiRushAdvancedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityAntiRushAdvancedAsyncHandler;



                /**
                 *活动防刷、注册保护、登录保护等营销产品的高级版本
                 * @param req ManageMarketingRiskRequest
                 * @return ManageMarketingRiskOutcome
                 */
                ManageMarketingRiskOutcome ManageMarketingRisk(const Model::ManageMarketingRiskRequest &request);
                void ManageMarketingRiskAsync(const Model::ManageMarketingRiskRequest& request, const ManageMarketingRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageMarketingRiskOutcomeCallable ManageMarketingRiskCallable(const Model::ManageMarketingRiskRequest& request);

                /**
                 *腾讯云活动防刷（ActivityAntiRush，AA）是针对电商、O2O、P2P、游戏、支付等行业在促销活动中遇到“羊毛党”恶意刷取优惠福利的行为时，通过防刷引擎，精准识别出“薅羊毛”恶意行为的活动防刷服务，避免了企业被刷带来的巨大经济损失。
                 * @param req QueryActivityAntiRushRequest
                 * @return QueryActivityAntiRushOutcome
                 */
                QueryActivityAntiRushOutcome QueryActivityAntiRush(const Model::QueryActivityAntiRushRequest &request);
                void QueryActivityAntiRushAsync(const Model::QueryActivityAntiRushRequest& request, const QueryActivityAntiRushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityAntiRushOutcomeCallable QueryActivityAntiRushCallable(const Model::QueryActivityAntiRushRequest& request);

                /**
                 *活动防刷高级版，支持对网赚众包、网赚防刷、引流反诈骗场景的检测识别
                 * @param req QueryActivityAntiRushAdvancedRequest
                 * @return QueryActivityAntiRushAdvancedOutcome
                 */
                QueryActivityAntiRushAdvancedOutcome QueryActivityAntiRushAdvanced(const Model::QueryActivityAntiRushAdvancedRequest &request);
                void QueryActivityAntiRushAdvancedAsync(const Model::QueryActivityAntiRushAdvancedRequest& request, const QueryActivityAntiRushAdvancedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityAntiRushAdvancedOutcomeCallable QueryActivityAntiRushAdvancedCallable(const Model::QueryActivityAntiRushAdvancedRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_AACLIENT_H_
