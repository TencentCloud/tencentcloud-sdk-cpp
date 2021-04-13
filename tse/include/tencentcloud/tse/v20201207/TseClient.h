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

#ifndef TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_
#define TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tse/v20201207/model/ManageConfigRequest.h>
#include <tencentcloud/tse/v20201207/model/ManageConfigResponse.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            class TseClient : public AbstractClient
            {
            public:
                TseClient(const Credential &credential, const std::string &region);
                TseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ManageConfigResponse> ManageConfigOutcome;
                typedef std::future<ManageConfigOutcome> ManageConfigOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ManageConfigRequest&, ManageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageConfigAsyncHandler;



                /**
                 *管理配置
                 * @param req ManageConfigRequest
                 * @return ManageConfigOutcome
                 */
                ManageConfigOutcome ManageConfig(const Model::ManageConfigRequest &request);
                void ManageConfigAsync(const Model::ManageConfigRequest& request, const ManageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageConfigOutcomeCallable ManageConfigCallable(const Model::ManageConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_
