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

#ifndef TENCENTCLOUD_LP_V20200224_LPCLIENT_H_
#define TENCENTCLOUD_LP_V20200224_LPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lp/v20200224/model/QueryLoginProtectionRequest.h>
#include <tencentcloud/lp/v20200224/model/QueryLoginProtectionResponse.h>


namespace TencentCloud
{
    namespace Lp
    {
        namespace V20200224
        {
            class LpClient : public AbstractClient
            {
            public:
                LpClient(const Credential &credential, const std::string &region);
                LpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::QueryLoginProtectionResponse> QueryLoginProtectionOutcome;
                typedef std::future<QueryLoginProtectionOutcome> QueryLoginProtectionOutcomeCallable;
                typedef std::function<void(const LpClient*, const Model::QueryLoginProtectionRequest&, QueryLoginProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryLoginProtectionAsyncHandler;



                /**
                 *登录保护服务（LoginProtection，LP）针对网站和 APP 的用户登录场景，实时检测是否存在盗号、撞库等恶意登录行为，帮助开发者发现异常登录，降低恶意用户登录给业务带来的风险。
                 * @param req QueryLoginProtectionRequest
                 * @return QueryLoginProtectionOutcome
                 */
                QueryLoginProtectionOutcome QueryLoginProtection(const Model::QueryLoginProtectionRequest &request);
                void QueryLoginProtectionAsync(const Model::QueryLoginProtectionRequest& request, const QueryLoginProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryLoginProtectionOutcomeCallable QueryLoginProtectionCallable(const Model::QueryLoginProtectionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LP_V20200224_LPCLIENT_H_
