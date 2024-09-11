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

#ifndef TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_
#define TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageCredentialsRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageCredentialsResponse.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            class VodClient : public AbstractClient
            {
            public:
                VodClient(const Credential &credential, const std::string &region);
                VodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateStorageCredentialsResponse> CreateStorageCredentialsOutcome;
                typedef std::future<CreateStorageCredentialsOutcome> CreateStorageCredentialsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageCredentialsRequest&, CreateStorageCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageCredentialsAsyncHandler;



                /**
                 *用于按指定策略，生成专业版应用的临时访问凭证，比如生成用于客户端上传的临时凭证。
                 * @param req CreateStorageCredentialsRequest
                 * @return CreateStorageCredentialsOutcome
                 */
                CreateStorageCredentialsOutcome CreateStorageCredentials(const Model::CreateStorageCredentialsRequest &request);
                void CreateStorageCredentialsAsync(const Model::CreateStorageCredentialsRequest& request, const CreateStorageCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageCredentialsOutcomeCallable CreateStorageCredentialsCallable(const Model::CreateStorageCredentialsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_
