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

#ifndef TENCENTCLOUD_SMOP_V20201203_SMOPCLIENT_H_
#define TENCENTCLOUD_SMOP_V20201203_SMOPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/smop/v20201203/model/SubmitTaskEventRequest.h>
#include <tencentcloud/smop/v20201203/model/SubmitTaskEventResponse.h>


namespace TencentCloud
{
    namespace Smop
    {
        namespace V20201203
        {
            class SmopClient : public AbstractClient
            {
            public:
                SmopClient(const Credential &credential, const std::string &region);
                SmopClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SubmitTaskEventResponse> SubmitTaskEventOutcome;
                typedef std::future<SubmitTaskEventOutcome> SubmitTaskEventOutcomeCallable;
                typedef std::function<void(const SmopClient*, const Model::SubmitTaskEventRequest&, SubmitTaskEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTaskEventAsyncHandler;



                /**
                 *smop产品下线，接口也一起下线

提交任务事件接口
                 * @param req SubmitTaskEventRequest
                 * @return SubmitTaskEventOutcome
                 */
                SubmitTaskEventOutcome SubmitTaskEvent(const Model::SubmitTaskEventRequest &request);
                void SubmitTaskEventAsync(const Model::SubmitTaskEventRequest& request, const SubmitTaskEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTaskEventOutcomeCallable SubmitTaskEventCallable(const Model::SubmitTaskEventRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMOP_V20201203_SMOPCLIENT_H_
