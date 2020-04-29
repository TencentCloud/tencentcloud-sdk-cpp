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

#ifndef TENCENTCLOUD_RP_V20200224_RPCLIENT_H_
#define TENCENTCLOUD_RP_V20200224_RPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rp/v20200224/model/QueryRegisterProtectionRequest.h>
#include <tencentcloud/rp/v20200224/model/QueryRegisterProtectionResponse.h>


namespace TencentCloud
{
    namespace Rp
    {
        namespace V20200224
        {
            class RpClient : public AbstractClient
            {
            public:
                RpClient(const Credential &credential, const std::string &region);
                RpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::QueryRegisterProtectionResponse> QueryRegisterProtectionOutcome;
                typedef std::future<QueryRegisterProtectionOutcome> QueryRegisterProtectionOutcomeCallable;
                typedef std::function<void(const RpClient*, const Model::QueryRegisterProtectionRequest&, QueryRegisterProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRegisterProtectionAsyncHandler;



                /**
                 *注册保护服务（RegisterProtection，RP）针对网站、APP 的线上注册场景，遇到 “恶意注册” 、“小号注册” 、“注册器注册” 等恶意行为，提供基于天御 DNA 算法的恶意防护引擎，从账号、设备、行为三个维度有效识别 “恶意注册”，从“源头”上防范业务风险。  
                 * @param req QueryRegisterProtectionRequest
                 * @return QueryRegisterProtectionOutcome
                 */
                QueryRegisterProtectionOutcome QueryRegisterProtection(const Model::QueryRegisterProtectionRequest &request);
                void QueryRegisterProtectionAsync(const Model::QueryRegisterProtectionRequest& request, const QueryRegisterProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRegisterProtectionOutcomeCallable QueryRegisterProtectionCallable(const Model::QueryRegisterProtectionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RP_V20200224_RPCLIENT_H_
