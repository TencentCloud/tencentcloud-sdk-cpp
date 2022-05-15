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

#ifndef TENCENTCLOUD_BI_V20220105_BICLIENT_H_
#define TENCENTCLOUD_BI_V20220105_BICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenResponse.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            class BiClient : public AbstractClient
            {
            public:
                BiClient(const Credential &credential, const std::string &region);
                BiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyEmbedIntervalResponse> ApplyEmbedIntervalOutcome;
                typedef std::future<ApplyEmbedIntervalOutcome> ApplyEmbedIntervalOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ApplyEmbedIntervalRequest&, ApplyEmbedIntervalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyEmbedIntervalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmbedTokenResponse> CreateEmbedTokenOutcome;
                typedef std::future<CreateEmbedTokenOutcome> CreateEmbedTokenOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateEmbedTokenRequest&, CreateEmbedTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmbedTokenAsyncHandler;



                /**
                 *申请延长Token可用时间接口-强鉴权
                 * @param req ApplyEmbedIntervalRequest
                 * @return ApplyEmbedIntervalOutcome
                 */
                ApplyEmbedIntervalOutcome ApplyEmbedInterval(const Model::ApplyEmbedIntervalRequest &request);
                void ApplyEmbedIntervalAsync(const Model::ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyEmbedIntervalOutcomeCallable ApplyEmbedIntervalCallable(const Model::ApplyEmbedIntervalRequest& request);

                /**
                 *创建嵌出报表-强鉴权
                 * @param req CreateEmbedTokenRequest
                 * @return CreateEmbedTokenOutcome
                 */
                CreateEmbedTokenOutcome CreateEmbedToken(const Model::CreateEmbedTokenRequest &request);
                void CreateEmbedTokenAsync(const Model::CreateEmbedTokenRequest& request, const CreateEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmbedTokenOutcomeCallable CreateEmbedTokenCallable(const Model::CreateEmbedTokenRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_BICLIENT_H_
