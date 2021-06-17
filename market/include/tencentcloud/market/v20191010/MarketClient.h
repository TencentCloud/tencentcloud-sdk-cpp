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
#include <tencentcloud/market/v20191010/model/GetCateTreeRequest.h>
#include <tencentcloud/market/v20191010/model/GetCateTreeResponse.h>
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

                typedef Outcome<Error, Model::GetCateTreeResponse> GetCateTreeOutcome;
                typedef std::future<GetCateTreeOutcome> GetCateTreeOutcomeCallable;
                typedef std::function<void(const MarketClient*, const Model::GetCateTreeRequest&, GetCateTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCateTreeAsyncHandler;
                typedef Outcome<Error, Model::GetUsagePlanUsageAmountResponse> GetUsagePlanUsageAmountOutcome;
                typedef std::future<GetUsagePlanUsageAmountOutcome> GetUsagePlanUsageAmountOutcomeCallable;
                typedef std::function<void(const MarketClient*, const Model::GetUsagePlanUsageAmountRequest&, GetUsagePlanUsageAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUsagePlanUsageAmountAsyncHandler;



                /**
                 *获取分类名称
                 * @param req GetCateTreeRequest
                 * @return GetCateTreeOutcome
                 */
                GetCateTreeOutcome GetCateTree(const Model::GetCateTreeRequest &request);
                void GetCateTreeAsync(const Model::GetCateTreeRequest& request, const GetCateTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCateTreeOutcomeCallable GetCateTreeCallable(const Model::GetCateTreeRequest& request);

                /**
                 *该接口可以根据InstanceId查询实例的api的使用情况。

默认接口请求频率限制：20次/秒。
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
