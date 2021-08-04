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

#ifndef TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
#define TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rum/v20210622/model/CreateProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateProjectResponse.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            class RumClient : public AbstractClient
            {
            public:
                RumClient(const Credential &credential, const std::string &region);
                RumClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;



                /**
                 *创建项目（归属于某个团队）
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
