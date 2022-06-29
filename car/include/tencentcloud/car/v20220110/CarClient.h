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

#ifndef TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
#define TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentResponse.h>
#include <tencentcloud/car/v20220110/model/CreateSessionRequest.h>
#include <tencentcloud/car/v20220110/model/CreateSessionResponse.h>
#include <tencentcloud/car/v20220110/model/DestroySessionRequest.h>
#include <tencentcloud/car/v20220110/model/DestroySessionResponse.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            class CarClient : public AbstractClient
            {
            public:
                CarClient(const Credential &credential, const std::string &region);
                CarClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyConcurrentResponse> ApplyConcurrentOutcome;
                typedef std::future<ApplyConcurrentOutcome> ApplyConcurrentOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ApplyConcurrentRequest&, ApplyConcurrentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConcurrentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySessionResponse> DestroySessionOutcome;
                typedef std::future<DestroySessionOutcome> DestroySessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DestroySessionRequest&, DestroySessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySessionAsyncHandler;



                /**
                 *申请并发
                 * @param req ApplyConcurrentRequest
                 * @return ApplyConcurrentOutcome
                 */
                ApplyConcurrentOutcome ApplyConcurrent(const Model::ApplyConcurrentRequest &request);
                void ApplyConcurrentAsync(const Model::ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConcurrentOutcomeCallable ApplyConcurrentCallable(const Model::ApplyConcurrentRequest& request);

                /**
                 *创建会话
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *销毁会话
                 * @param req DestroySessionRequest
                 * @return DestroySessionOutcome
                 */
                DestroySessionOutcome DestroySession(const Model::DestroySessionRequest &request);
                void DestroySessionAsync(const Model::DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroySessionOutcomeCallable DestroySessionCallable(const Model::DestroySessionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
