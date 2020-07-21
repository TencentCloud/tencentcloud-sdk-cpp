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

#ifndef TENCENTCLOUD_AMS_V20200608_AMSCLIENT_H_
#define TENCENTCLOUD_AMS_V20200608_AMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ams/v20200608/model/CreateAudioModerationTaskRequest.h>
#include <tencentcloud/ams/v20200608/model/CreateAudioModerationTaskResponse.h>
#include <tencentcloud/ams/v20200608/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/ams/v20200608/model/DescribeTaskDetailResponse.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            class AmsClient : public AbstractClient
            {
            public:
                AmsClient(const Credential &credential, const std::string &region);
                AmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateAudioModerationTaskResponse> CreateAudioModerationTaskOutcome;
                typedef std::future<CreateAudioModerationTaskOutcome> CreateAudioModerationTaskOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::CreateAudioModerationTaskRequest&, CreateAudioModerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAudioModerationTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;



                /**
                 *通过URL或存储通创建审核任务
                 * @param req CreateAudioModerationTaskRequest
                 * @return CreateAudioModerationTaskOutcome
                 */
                CreateAudioModerationTaskOutcome CreateAudioModerationTask(const Model::CreateAudioModerationTaskRequest &request);
                void CreateAudioModerationTaskAsync(const Model::CreateAudioModerationTaskRequest& request, const CreateAudioModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAudioModerationTaskOutcomeCallable CreateAudioModerationTaskCallable(const Model::CreateAudioModerationTaskRequest& request);

                /**
                 *查看任务详情
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_AMSCLIENT_H_
