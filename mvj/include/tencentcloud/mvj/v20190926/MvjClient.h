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

#ifndef TENCENTCLOUD_MVJ_V20190926_MVJCLIENT_H_
#define TENCENTCLOUD_MVJ_V20190926_MVJCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mvj/v20190926/model/MarketingValueJudgementRequest.h>
#include <tencentcloud/mvj/v20190926/model/MarketingValueJudgementResponse.h>


namespace TencentCloud
{
    namespace Mvj
    {
        namespace V20190926
        {
            class MvjClient : public AbstractClient
            {
            public:
                MvjClient(const Credential &credential, const std::string &region);
                MvjClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::MarketingValueJudgementResponse> MarketingValueJudgementOutcome;
                typedef std::future<MarketingValueJudgementOutcome> MarketingValueJudgementOutcomeCallable;
                typedef std::function<void(const MvjClient*, const Model::MarketingValueJudgementRequest&, MarketingValueJudgementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MarketingValueJudgementAsyncHandler;



                /**
                 *欢迎使用营销价值判断（Marketing Value Judgement，简称 MVJ）。

营销价值判断（MVJ）是针对零售场景的风控服务，通过识别高价值顾客，以帮助零售商保障营销资金
                 * @param req MarketingValueJudgementRequest
                 * @return MarketingValueJudgementOutcome
                 */
                MarketingValueJudgementOutcome MarketingValueJudgement(const Model::MarketingValueJudgementRequest &request);
                void MarketingValueJudgementAsync(const Model::MarketingValueJudgementRequest& request, const MarketingValueJudgementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MarketingValueJudgementOutcomeCallable MarketingValueJudgementCallable(const Model::MarketingValueJudgementRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MVJ_V20190926_MVJCLIENT_H_
