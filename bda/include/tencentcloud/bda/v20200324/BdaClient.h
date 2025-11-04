/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BDA_V20200324_BDACLIENT_H_
#define TENCENTCLOUD_BDA_V20200324_BDACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bda/v20200324/model/CreateSegmentationTaskRequest.h>
#include <tencentcloud/bda/v20200324/model/CreateSegmentationTaskResponse.h>
#include <tencentcloud/bda/v20200324/model/DescribeSegmentationTaskRequest.h>
#include <tencentcloud/bda/v20200324/model/DescribeSegmentationTaskResponse.h>
#include <tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicRequest.h>
#include <tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicResponse.h>
#include <tencentcloud/bda/v20200324/model/SegmentPortraitPicRequest.h>
#include <tencentcloud/bda/v20200324/model/SegmentPortraitPicResponse.h>
#include <tencentcloud/bda/v20200324/model/TerminateSegmentationTaskRequest.h>
#include <tencentcloud/bda/v20200324/model/TerminateSegmentationTaskResponse.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            class BdaClient : public AbstractClient
            {
            public:
                BdaClient(const Credential &credential, const std::string &region);
                BdaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateSegmentationTaskResponse> CreateSegmentationTaskOutcome;
                typedef std::future<CreateSegmentationTaskOutcome> CreateSegmentationTaskOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::CreateSegmentationTaskRequest&, CreateSegmentationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSegmentationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSegmentationTaskResponse> DescribeSegmentationTaskOutcome;
                typedef std::future<DescribeSegmentationTaskOutcome> DescribeSegmentationTaskOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::DescribeSegmentationTaskRequest&, DescribeSegmentationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSegmentationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SegmentCustomizedPortraitPicResponse> SegmentCustomizedPortraitPicOutcome;
                typedef std::future<SegmentCustomizedPortraitPicOutcome> SegmentCustomizedPortraitPicOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::SegmentCustomizedPortraitPicRequest&, SegmentCustomizedPortraitPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SegmentCustomizedPortraitPicAsyncHandler;
                typedef Outcome<Core::Error, Model::SegmentPortraitPicResponse> SegmentPortraitPicOutcome;
                typedef std::future<SegmentPortraitPicOutcome> SegmentPortraitPicOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::SegmentPortraitPicRequest&, SegmentPortraitPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SegmentPortraitPicAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateSegmentationTaskResponse> TerminateSegmentationTaskOutcome;
                typedef std::future<TerminateSegmentationTaskOutcome> TerminateSegmentationTaskOutcomeCallable;
                typedef std::function<void(const BdaClient*, const Model::TerminateSegmentationTaskRequest&, TerminateSegmentationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateSegmentationTaskAsyncHandler;



                /**
                 *本接口为人像分割在线处理接口组中的提交任务接口，可以对提交的资源进行处理视频流/图片流识别视频作品中的人像区域，进行一键抠像、背景替换、人像虚化等后期处理。
                 * @param req CreateSegmentationTaskRequest
                 * @return CreateSegmentationTaskOutcome
                 */
                CreateSegmentationTaskOutcome CreateSegmentationTask(const Model::CreateSegmentationTaskRequest &request);
                void CreateSegmentationTaskAsync(const Model::CreateSegmentationTaskRequest& request, const CreateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSegmentationTaskOutcomeCallable CreateSegmentationTaskCallable(const Model::CreateSegmentationTaskRequest& request);

                /**
                 *可以查看单条任务的处理情况，包括处理状态，处理结果。
                 * @param req DescribeSegmentationTaskRequest
                 * @return DescribeSegmentationTaskOutcome
                 */
                DescribeSegmentationTaskOutcome DescribeSegmentationTask(const Model::DescribeSegmentationTaskRequest &request);
                void DescribeSegmentationTaskAsync(const Model::DescribeSegmentationTaskRequest& request, const DescribeSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSegmentationTaskOutcomeCallable DescribeSegmentationTaskCallable(const Model::DescribeSegmentationTaskRequest& request);

                /**
                 *在前后景分割的基础上优化多分类分割，支持对头发、五官等的分割，既作为换发型、挂件等底层技术，也可用于抠人头、抠人脸等玩法
                 * @param req SegmentCustomizedPortraitPicRequest
                 * @return SegmentCustomizedPortraitPicOutcome
                 */
                SegmentCustomizedPortraitPicOutcome SegmentCustomizedPortraitPic(const Model::SegmentCustomizedPortraitPicRequest &request);
                void SegmentCustomizedPortraitPicAsync(const Model::SegmentCustomizedPortraitPicRequest& request, const SegmentCustomizedPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SegmentCustomizedPortraitPicOutcomeCallable SegmentCustomizedPortraitPicCallable(const Model::SegmentCustomizedPortraitPicRequest& request);

                /**
                 *即二分类人像分割，识别传入图片中人体的完整轮廓，进行抠像。
                 * @param req SegmentPortraitPicRequest
                 * @return SegmentPortraitPicOutcome
                 */
                SegmentPortraitPicOutcome SegmentPortraitPic(const Model::SegmentPortraitPicRequest &request);
                void SegmentPortraitPicAsync(const Model::SegmentPortraitPicRequest& request, const SegmentPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SegmentPortraitPicOutcomeCallable SegmentPortraitPicCallable(const Model::SegmentPortraitPicRequest& request);

                /**
                 *终止指定视频人像分割处理任务
                 * @param req TerminateSegmentationTaskRequest
                 * @return TerminateSegmentationTaskOutcome
                 */
                TerminateSegmentationTaskOutcome TerminateSegmentationTask(const Model::TerminateSegmentationTaskRequest &request);
                void TerminateSegmentationTaskAsync(const Model::TerminateSegmentationTaskRequest& request, const TerminateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateSegmentationTaskOutcomeCallable TerminateSegmentationTaskCallable(const Model::TerminateSegmentationTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_BDACLIENT_H_
