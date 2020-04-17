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

#ifndef TENCENTCLOUD_IE_V20200304_IECLIENT_H_
#define TENCENTCLOUD_IE_V20200304_IECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ie/v20200304/model/CreateEditingTaskRequest.h>
#include <tencentcloud/ie/v20200304/model/CreateEditingTaskResponse.h>
#include <tencentcloud/ie/v20200304/model/DescribeEditingTaskResultRequest.h>
#include <tencentcloud/ie/v20200304/model/DescribeEditingTaskResultResponse.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            class IeClient : public AbstractClient
            {
            public:
                IeClient(const Credential &credential, const std::string &region);
                IeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateEditingTaskResponse> CreateEditingTaskOutcome;
                typedef std::future<CreateEditingTaskOutcome> CreateEditingTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::CreateEditingTaskRequest&, CreateEditingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEditingTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeEditingTaskResultResponse> DescribeEditingTaskResultOutcome;
                typedef std::future<DescribeEditingTaskResultOutcome> DescribeEditingTaskResultOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::DescribeEditingTaskResultRequest&, DescribeEditingTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEditingTaskResultAsyncHandler;



                /**
                 *创建智能编辑任务，可以同时选择视频标签识别、分类识别、智能拆条、智能集锦、智能封面和片头片尾识别中的一项或者多项能力。
                 * @param req CreateEditingTaskRequest
                 * @return CreateEditingTaskOutcome
                 */
                CreateEditingTaskOutcome CreateEditingTask(const Model::CreateEditingTaskRequest &request);
                void CreateEditingTaskAsync(const Model::CreateEditingTaskRequest& request, const CreateEditingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEditingTaskOutcomeCallable CreateEditingTaskCallable(const Model::CreateEditingTaskRequest& request);

                /**
                 *获取智能编辑任务结果。
                 * @param req DescribeEditingTaskResultRequest
                 * @return DescribeEditingTaskResultOutcome
                 */
                DescribeEditingTaskResultOutcome DescribeEditingTaskResult(const Model::DescribeEditingTaskResultRequest &request);
                void DescribeEditingTaskResultAsync(const Model::DescribeEditingTaskResultRequest& request, const DescribeEditingTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEditingTaskResultOutcomeCallable DescribeEditingTaskResultCallable(const Model::DescribeEditingTaskResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_IECLIENT_H_
