/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLOUDMATE_V20251030_CLOUDMATECLIENT_H_
#define TENCENTCLOUD_CLOUDMATE_V20251030_CLOUDMATECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudmate/v20251030/model/CloudMateAgentRequest.h>
#include <tencentcloud/cloudmate/v20251030/model/CloudMateAgentResponse.h>


namespace TencentCloud
{
    namespace Cloudmate
    {
        namespace V20251030
        {
            class CloudmateClient : public AbstractClient
            {
            public:
                CloudmateClient(const Credential &credential, const std::string &region);
                CloudmateClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CloudMateAgentResponse> CloudMateAgentOutcome;
                typedef std::future<CloudMateAgentOutcome> CloudMateAgentOutcomeCallable;
                typedef std::function<void(const CloudmateClient*, const Model::CloudMateAgentRequest&, CloudMateAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloudMateAgentAsyncHandler;



                /**
                 *发起智能诊断对话
注意：使用该API时，请务必设置请求域名（Endpoint）为 cloudmate.ai.tencentcloudapi.com
                 * @param req CloudMateAgentRequest
                 * @return CloudMateAgentOutcome
                 */
                CloudMateAgentOutcome CloudMateAgent(const Model::CloudMateAgentRequest &request);
                void CloudMateAgentAsync(const Model::CloudMateAgentRequest& request, const CloudMateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloudMateAgentOutcomeCallable CloudMateAgentCallable(const Model::CloudMateAgentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDMATE_V20251030_CLOUDMATECLIENT_H_
