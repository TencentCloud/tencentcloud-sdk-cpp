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

#ifndef TENCENTCLOUD_SVP_V20240125_SVPCLIENT_H_
#define TENCENTCLOUD_SVP_V20240125_SVPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/svp/v20240125/model/CreateSavingPlanOrderRequest.h>
#include <tencentcloud/svp/v20240125/model/CreateSavingPlanOrderResponse.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            class SvpClient : public AbstractClient
            {
            public:
                SvpClient(const Credential &credential, const std::string &region);
                SvpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateSavingPlanOrderResponse> CreateSavingPlanOrderOutcome;
                typedef std::future<CreateSavingPlanOrderOutcome> CreateSavingPlanOrderOutcomeCallable;
                typedef std::function<void(const SvpClient*, const Model::CreateSavingPlanOrderRequest&, CreateSavingPlanOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSavingPlanOrderAsyncHandler;



                /**
                 *创建节省计划订单
                 * @param req CreateSavingPlanOrderRequest
                 * @return CreateSavingPlanOrderOutcome
                 */
                CreateSavingPlanOrderOutcome CreateSavingPlanOrder(const Model::CreateSavingPlanOrderRequest &request);
                void CreateSavingPlanOrderAsync(const Model::CreateSavingPlanOrderRequest& request, const CreateSavingPlanOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSavingPlanOrderOutcomeCallable CreateSavingPlanOrderCallable(const Model::CreateSavingPlanOrderRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_SVPCLIENT_H_
