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

#ifndef TENCENTCLOUD_MARKET_V20191010_MARKETCLIENT_H_
#define TENCENTCLOUD_MARKET_V20191010_MARKETCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/market/v20191010/model/FlowProductRemindRequest.h>
#include <tencentcloud/market/v20191010/model/FlowProductRemindResponse.h>
#include <tencentcloud/market/v20191010/model/GetUsagePlanUsageAmountRequest.h>
#include <tencentcloud/market/v20191010/model/GetUsagePlanUsageAmountResponse.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            class MarketClient : public AbstractClient
            {
            public:
                MarketClient(const Credential &credential, const std::string &region);
                MarketClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::FlowProductRemindResponse> FlowProductRemindOutcome;
                typedef std::future<FlowProductRemindOutcome> FlowProductRemindOutcomeCallable;
                typedef std::function<void(const MarketClient*, const Model::FlowProductRemindRequest&, FlowProductRemindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlowProductRemindAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUsagePlanUsageAmountResponse> GetUsagePlanUsageAmountOutcome;
                typedef std::future<GetUsagePlanUsageAmountOutcome> GetUsagePlanUsageAmountOutcomeCallable;
                typedef std::function<void(const MarketClient*, const Model::GetUsagePlanUsageAmountRequest&, GetUsagePlanUsageAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUsagePlanUsageAmountAsyncHandler;



                /**
                 *计量商品用量提醒，用于服务商调用云服务，云服务向客户发送提醒信息
                 * @param req FlowProductRemindRequest
                 * @return FlowProductRemindOutcome
                 */
                FlowProductRemindOutcome FlowProductRemind(const Model::FlowProductRemindRequest &request);
                void FlowProductRemindAsync(const Model::FlowProductRemindRequest& request, const FlowProductRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlowProductRemindOutcomeCallable FlowProductRemindCallable(const Model::FlowProductRemindRequest& request);

                /**
                 *该接口可以根据InstanceId查询实例的api的使用情况。
                 * @param req GetUsagePlanUsageAmountRequest
                 * @return GetUsagePlanUsageAmountOutcome
                 */
                GetUsagePlanUsageAmountOutcome GetUsagePlanUsageAmount(const Model::GetUsagePlanUsageAmountRequest &request);
                void GetUsagePlanUsageAmountAsync(const Model::GetUsagePlanUsageAmountRequest& request, const GetUsagePlanUsageAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUsagePlanUsageAmountOutcomeCallable GetUsagePlanUsageAmountCallable(const Model::GetUsagePlanUsageAmountRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MARKETCLIENT_H_
