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

#ifndef TENCENTCLOUD_HAI_V20230812_HAICLIENT_H_
#define TENCENTCLOUD_HAI_V20230812_HAICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hai/v20230812/model/RunInstancesRequest.h>
#include <tencentcloud/hai/v20230812/model/RunInstancesResponse.h>
#include <tencentcloud/hai/v20230812/model/TerminateInstancesRequest.h>
#include <tencentcloud/hai/v20230812/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            class HaiClient : public AbstractClient
            {
            public:
                HaiClient(const Credential &credential, const std::string &region);
                HaiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const HaiClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *本接口 (RunInstances) 用于创建一个或多个指定配置的实例。
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

                /**
                 *本接口 (TerminateInstances) 用于主动退还实例。
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_HAICLIENT_H_
