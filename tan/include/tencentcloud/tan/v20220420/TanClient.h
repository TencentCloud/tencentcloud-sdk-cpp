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

#ifndef TENCENTCLOUD_TAN_V20220420_TANCLIENT_H_
#define TENCENTCLOUD_TAN_V20220420_TANCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tan/v20220420/model/CreateBlockNodeRecordsRequest.h>
#include <tencentcloud/tan/v20220420/model/CreateBlockNodeRecordsResponse.h>


namespace TencentCloud
{
    namespace Tan
    {
        namespace V20220420
        {
            class TanClient : public AbstractClient
            {
            public:
                TanClient(const Credential &credential, const std::string &region);
                TanClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateBlockNodeRecordsResponse> CreateBlockNodeRecordsOutcome;
                typedef std::future<CreateBlockNodeRecordsOutcome> CreateBlockNodeRecordsOutcomeCallable;
                typedef std::function<void(const TanClient*, const Model::CreateBlockNodeRecordsRequest&, CreateBlockNodeRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlockNodeRecordsAsyncHandler;



                /**
                 *产品下线

推送节点数据
                 * @param req CreateBlockNodeRecordsRequest
                 * @return CreateBlockNodeRecordsOutcome
                 */
                CreateBlockNodeRecordsOutcome CreateBlockNodeRecords(const Model::CreateBlockNodeRecordsRequest &request);
                void CreateBlockNodeRecordsAsync(const Model::CreateBlockNodeRecordsRequest& request, const CreateBlockNodeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlockNodeRecordsOutcomeCallable CreateBlockNodeRecordsCallable(const Model::CreateBlockNodeRecordsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAN_V20220420_TANCLIENT_H_
