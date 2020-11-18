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

#ifndef TENCENTCLOUD_BA_V20200720_BACLIENT_H_
#define TENCENTCLOUD_BA_V20200720_BACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ba/v20200720/model/CreateWeappQRUrlRequest.h>
#include <tencentcloud/ba/v20200720/model/CreateWeappQRUrlResponse.h>


namespace TencentCloud
{
    namespace Ba
    {
        namespace V20200720
        {
            class BaClient : public AbstractClient
            {
            public:
                BaClient(const Credential &credential, const std::string &region);
                BaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateWeappQRUrlResponse> CreateWeappQRUrlOutcome;
                typedef std::future<CreateWeappQRUrlOutcome> CreateWeappQRUrlOutcomeCallable;
                typedef std::function<void(const BaClient*, const Model::CreateWeappQRUrlRequest&, CreateWeappQRUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWeappQRUrlAsyncHandler;



                /**
                 *创建渠道备案小程序二维码
                 * @param req CreateWeappQRUrlRequest
                 * @return CreateWeappQRUrlOutcome
                 */
                CreateWeappQRUrlOutcome CreateWeappQRUrl(const Model::CreateWeappQRUrlRequest &request);
                void CreateWeappQRUrlAsync(const Model::CreateWeappQRUrlRequest& request, const CreateWeappQRUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWeappQRUrlOutcomeCallable CreateWeappQRUrlCallable(const Model::CreateWeappQRUrlRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BA_V20200720_BACLIENT_H_
