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
#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushRequest.h>
#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushResponse.h>


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

                typedef Outcome<Error, Model::QueryActivityAntiRushResponse> QueryActivityAntiRushOutcome;
                typedef std::future<QueryActivityAntiRushOutcome> QueryActivityAntiRushOutcomeCallable;
                typedef std::function<void(const AaClient*, const Model::QueryActivityAntiRushRequest&, QueryActivityAntiRushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityAntiRushAsyncHandler;



                /**
                 *腾讯云活动防刷（ActivityAntiRush，AA）是针对电商、O2O、P2P、游戏、支付等行业在促销活动中遇到“羊毛党”恶意刷取优惠福利的行为时，通过防刷引擎，精准识别出“薅羊毛”恶意行为的活动防刷服务，避免了企业被刷带来的巨大经济损失。
                 * @param req QueryActivityAntiRushRequest
                 * @return QueryActivityAntiRushOutcome
                 */
                QueryActivityAntiRushOutcome QueryActivityAntiRush(const Model::QueryActivityAntiRushRequest &request);
                void QueryActivityAntiRushAsync(const Model::QueryActivityAntiRushRequest& request, const QueryActivityAntiRushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityAntiRushOutcomeCallable QueryActivityAntiRushCallable(const Model::QueryActivityAntiRushRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_AACLIENT_H_
