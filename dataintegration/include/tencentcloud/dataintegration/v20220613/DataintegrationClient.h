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

#ifndef TENCENTCLOUD_DATAINTEGRATION_V20220613_DATAINTEGRATIONCLIENT_H_
#define TENCENTCLOUD_DATAINTEGRATION_V20220613_DATAINTEGRATIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dataintegration/v20220613/model/SendMessageRequest.h>
#include <tencentcloud/dataintegration/v20220613/model/SendMessageResponse.h>


namespace TencentCloud
{
    namespace Dataintegration
    {
        namespace V20220613
        {
            class DataintegrationClient : public AbstractClient
            {
            public:
                DataintegrationClient(const Credential &credential, const std::string &region);
                DataintegrationClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SendMessageResponse> SendMessageOutcome;
                typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
                typedef std::function<void(const DataintegrationClient*, const Model::SendMessageRequest&, SendMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;



                /**
                 *使用SDK将数据上报到DIP
                 * @param req SendMessageRequest
                 * @return SendMessageOutcome
                 */
                SendMessageOutcome SendMessage(const Model::SendMessageRequest &request);
                void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DATAINTEGRATION_V20220613_DATAINTEGRATIONCLIENT_H_
