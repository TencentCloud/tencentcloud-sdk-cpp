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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_GOOSEFSCLIENT_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_GOOSEFSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskRequest.h>
#include <tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskResponse.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            class GoosefsClient : public AbstractClient
            {
            public:
                GoosefsClient(const Credential &credential, const std::string &region);
                GoosefsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDataRepositoryTaskResponse> CreateDataRepositoryTaskOutcome;
                typedef std::future<CreateDataRepositoryTaskOutcome> CreateDataRepositoryTaskOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::CreateDataRepositoryTaskRequest&, CreateDataRepositoryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataRepositoryTaskAsyncHandler;



                /**
                 *创建数据流通任务,包括从将文件系统的数据上传到存储桶下, 以及从存储桶下载到文件系统里。
                 * @param req CreateDataRepositoryTaskRequest
                 * @return CreateDataRepositoryTaskOutcome
                 */
                CreateDataRepositoryTaskOutcome CreateDataRepositoryTask(const Model::CreateDataRepositoryTaskRequest &request);
                void CreateDataRepositoryTaskAsync(const Model::CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataRepositoryTaskOutcomeCallable CreateDataRepositoryTaskCallable(const Model::CreateDataRepositoryTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_GOOSEFSCLIENT_H_
