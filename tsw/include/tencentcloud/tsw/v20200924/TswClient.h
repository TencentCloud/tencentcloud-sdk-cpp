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

#ifndef TENCENTCLOUD_TSW_V20200924_TSWCLIENT_H_
#define TENCENTCLOUD_TSW_V20200924_TSWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tsw/v20200924/model/DescribeAgentShellRequest.h>
#include <tencentcloud/tsw/v20200924/model/DescribeAgentShellResponse.h>


namespace TencentCloud
{
    namespace Tsw
    {
        namespace V20200924
        {
            class TswClient : public AbstractClient
            {
            public:
                TswClient(const Credential &credential, const std::string &region);
                TswClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeAgentShellResponse> DescribeAgentShellOutcome;
                typedef std::future<DescribeAgentShellOutcome> DescribeAgentShellOutcomeCallable;
                typedef std::function<void(const TswClient*, const Model::DescribeAgentShellRequest&, DescribeAgentShellOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentShellAsyncHandler;



                /**
                 *获取服务接入信息
                 * @param req DescribeAgentShellRequest
                 * @return DescribeAgentShellOutcome
                 */
                DescribeAgentShellOutcome DescribeAgentShell(const Model::DescribeAgentShellRequest &request);
                void DescribeAgentShellAsync(const Model::DescribeAgentShellRequest& request, const DescribeAgentShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentShellOutcomeCallable DescribeAgentShellCallable(const Model::DescribeAgentShellRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSW_V20200924_TSWCLIENT_H_
