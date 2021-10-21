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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_ADVISORCLIENT_H_
#define TENCENTCLOUD_ADVISOR_V20200721_ADVISORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/advisor/v20200721/model/DescribeStrategiesRequest.h>
#include <tencentcloud/advisor/v20200721/model/DescribeStrategiesResponse.h>
#include <tencentcloud/advisor/v20200721/model/DescribeTaskStrategyRisksRequest.h>
#include <tencentcloud/advisor/v20200721/model/DescribeTaskStrategyRisksResponse.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            class AdvisorClient : public AbstractClient
            {
            public:
                AdvisorClient(const Credential &credential, const std::string &region);
                AdvisorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeStrategiesResponse> DescribeStrategiesOutcome;
                typedef std::future<DescribeStrategiesOutcome> DescribeStrategiesOutcomeCallable;
                typedef std::function<void(const AdvisorClient*, const Model::DescribeStrategiesRequest&, DescribeStrategiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStrategyRisksResponse> DescribeTaskStrategyRisksOutcome;
                typedef std::future<DescribeTaskStrategyRisksOutcome> DescribeTaskStrategyRisksOutcomeCallable;
                typedef std::function<void(const AdvisorClient*, const Model::DescribeTaskStrategyRisksRequest&, DescribeTaskStrategyRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStrategyRisksAsyncHandler;



                /**
                 *用于查询评估项的信息
                 * @param req DescribeStrategiesRequest
                 * @return DescribeStrategiesOutcome
                 */
                DescribeStrategiesOutcome DescribeStrategies(const Model::DescribeStrategiesRequest &request);
                void DescribeStrategiesAsync(const Model::DescribeStrategiesRequest& request, const DescribeStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategiesOutcomeCallable DescribeStrategiesCallable(const Model::DescribeStrategiesRequest& request);

                /**
                 *查询评估项风险实例列表
                 * @param req DescribeTaskStrategyRisksRequest
                 * @return DescribeTaskStrategyRisksOutcome
                 */
                DescribeTaskStrategyRisksOutcome DescribeTaskStrategyRisks(const Model::DescribeTaskStrategyRisksRequest &request);
                void DescribeTaskStrategyRisksAsync(const Model::DescribeTaskStrategyRisksRequest& request, const DescribeTaskStrategyRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStrategyRisksOutcomeCallable DescribeTaskStrategyRisksCallable(const Model::DescribeTaskStrategyRisksRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_ADVISORCLIENT_H_
