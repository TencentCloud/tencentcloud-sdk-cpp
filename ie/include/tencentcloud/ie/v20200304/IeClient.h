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
#include <tencentcloud/ie/v20200304/model/CreateMediaProcessTaskRequest.h>
#include <tencentcloud/ie/v20200304/model/CreateMediaProcessTaskResponse.h>
#include <tencentcloud/ie/v20200304/model/CreateMediaQualityRestorationTaskRequest.h>
#include <tencentcloud/ie/v20200304/model/CreateMediaQualityRestorationTaskResponse.h>
#include <tencentcloud/ie/v20200304/model/CreateQualityControlTaskRequest.h>
#include <tencentcloud/ie/v20200304/model/CreateQualityControlTaskResponse.h>
#include <tencentcloud/ie/v20200304/model/DescribeEditingTaskResultRequest.h>
#include <tencentcloud/ie/v20200304/model/DescribeEditingTaskResultResponse.h>
#include <tencentcloud/ie/v20200304/model/DescribeMediaProcessTaskResultRequest.h>
#include <tencentcloud/ie/v20200304/model/DescribeMediaProcessTaskResultResponse.h>
#include <tencentcloud/ie/v20200304/model/DescribeMediaQualityRestorationTaskRusultRequest.h>
#include <tencentcloud/ie/v20200304/model/DescribeMediaQualityRestorationTaskRusultResponse.h>
#include <tencentcloud/ie/v20200304/model/DescribeQualityControlTaskResultRequest.h>
#include <tencentcloud/ie/v20200304/model/DescribeQualityControlTaskResultResponse.h>
#include <tencentcloud/ie/v20200304/model/StopMediaProcessTaskRequest.h>
#include <tencentcloud/ie/v20200304/model/StopMediaProcessTaskResponse.h>
#include <tencentcloud/ie/v20200304/model/StopMediaQualityRestorationTaskRequest.h>
#include <tencentcloud/ie/v20200304/model/StopMediaQualityRestorationTaskResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateEditingTaskResponse> CreateEditingTaskOutcome;
                typedef std::future<CreateEditingTaskOutcome> CreateEditingTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::CreateEditingTaskRequest&, CreateEditingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEditingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMediaProcessTaskResponse> CreateMediaProcessTaskOutcome;
                typedef std::future<CreateMediaProcessTaskOutcome> CreateMediaProcessTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::CreateMediaProcessTaskRequest&, CreateMediaProcessTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaProcessTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMediaQualityRestorationTaskResponse> CreateMediaQualityRestorationTaskOutcome;
                typedef std::future<CreateMediaQualityRestorationTaskOutcome> CreateMediaQualityRestorationTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::CreateMediaQualityRestorationTaskRequest&, CreateMediaQualityRestorationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaQualityRestorationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQualityControlTaskResponse> CreateQualityControlTaskOutcome;
                typedef std::future<CreateQualityControlTaskOutcome> CreateQualityControlTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::CreateQualityControlTaskRequest&, CreateQualityControlTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityControlTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEditingTaskResultResponse> DescribeEditingTaskResultOutcome;
                typedef std::future<DescribeEditingTaskResultOutcome> DescribeEditingTaskResultOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::DescribeEditingTaskResultRequest&, DescribeEditingTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEditingTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaProcessTaskResultResponse> DescribeMediaProcessTaskResultOutcome;
                typedef std::future<DescribeMediaProcessTaskResultOutcome> DescribeMediaProcessTaskResultOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::DescribeMediaProcessTaskResultRequest&, DescribeMediaProcessTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaProcessTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaQualityRestorationTaskRusultResponse> DescribeMediaQualityRestorationTaskRusultOutcome;
                typedef std::future<DescribeMediaQualityRestorationTaskRusultOutcome> DescribeMediaQualityRestorationTaskRusultOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::DescribeMediaQualityRestorationTaskRusultRequest&, DescribeMediaQualityRestorationTaskRusultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaQualityRestorationTaskRusultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityControlTaskResultResponse> DescribeQualityControlTaskResultOutcome;
                typedef std::future<DescribeQualityControlTaskResultOutcome> DescribeQualityControlTaskResultOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::DescribeQualityControlTaskResultRequest&, DescribeQualityControlTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityControlTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMediaProcessTaskResponse> StopMediaProcessTaskOutcome;
                typedef std::future<StopMediaProcessTaskOutcome> StopMediaProcessTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::StopMediaProcessTaskRequest&, StopMediaProcessTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMediaProcessTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMediaQualityRestorationTaskResponse> StopMediaQualityRestorationTaskOutcome;
                typedef std::future<StopMediaQualityRestorationTaskOutcome> StopMediaQualityRestorationTaskOutcomeCallable;
                typedef std::function<void(const IeClient*, const Model::StopMediaQualityRestorationTaskRequest&, StopMediaQualityRestorationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMediaQualityRestorationTaskAsyncHandler;



                /**
                 *创建编辑理解任务，可以同时选择视频标签识别、分类识别、智能拆条、智能集锦、智能封面和片头片尾识别中的一项或者多项能力。
                 * @param req CreateEditingTaskRequest
                 * @return CreateEditingTaskOutcome
                 */
                CreateEditingTaskOutcome CreateEditingTask(const Model::CreateEditingTaskRequest &request);
                void CreateEditingTaskAsync(const Model::CreateEditingTaskRequest& request, const CreateEditingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEditingTaskOutcomeCallable CreateEditingTaskCallable(const Model::CreateEditingTaskRequest& request);

                /**
                 *用于创建编辑处理任务，如媒体截取、媒体编辑、媒体拼接、媒体字幕。
                 * @param req CreateMediaProcessTaskRequest
                 * @return CreateMediaProcessTaskOutcome
                 */
                CreateMediaProcessTaskOutcome CreateMediaProcessTask(const Model::CreateMediaProcessTaskRequest &request);
                void CreateMediaProcessTaskAsync(const Model::CreateMediaProcessTaskRequest& request, const CreateMediaProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaProcessTaskOutcomeCallable CreateMediaProcessTaskCallable(const Model::CreateMediaProcessTaskRequest& request);

                /**
                 *创建画质重生任务，对视频进行转码、去噪、去划痕、去毛刺、超分、细节增强和色彩增强。
                 * @param req CreateMediaQualityRestorationTaskRequest
                 * @return CreateMediaQualityRestorationTaskOutcome
                 */
                CreateMediaQualityRestorationTaskOutcome CreateMediaQualityRestorationTask(const Model::CreateMediaQualityRestorationTaskRequest &request);
                void CreateMediaQualityRestorationTaskAsync(const Model::CreateMediaQualityRestorationTaskRequest& request, const CreateMediaQualityRestorationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaQualityRestorationTaskOutcomeCallable CreateMediaQualityRestorationTaskCallable(const Model::CreateMediaQualityRestorationTaskRequest& request);

                /**
                 *通过接口可以智能检测视频画面中抖动重影、模糊、低光照、过曝光、黑边、白边、黑屏、白屏、花屏、噪点、马赛克、二维码等在内的多个场景，还可以自动检测视频无音频异常、无声音片段。
                 * @param req CreateQualityControlTaskRequest
                 * @return CreateQualityControlTaskOutcome
                 */
                CreateQualityControlTaskOutcome CreateQualityControlTask(const Model::CreateQualityControlTaskRequest &request);
                void CreateQualityControlTaskAsync(const Model::CreateQualityControlTaskRequest& request, const CreateQualityControlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQualityControlTaskOutcomeCallable CreateQualityControlTaskCallable(const Model::CreateQualityControlTaskRequest& request);

                /**
                 *获取编辑理解任务结果。
                 * @param req DescribeEditingTaskResultRequest
                 * @return DescribeEditingTaskResultOutcome
                 */
                DescribeEditingTaskResultOutcome DescribeEditingTaskResult(const Model::DescribeEditingTaskResultRequest &request);
                void DescribeEditingTaskResultAsync(const Model::DescribeEditingTaskResultRequest& request, const DescribeEditingTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEditingTaskResultOutcomeCallable DescribeEditingTaskResultCallable(const Model::DescribeEditingTaskResultRequest& request);

                /**
                 *用于获取编辑处理任务的结果。
                 * @param req DescribeMediaProcessTaskResultRequest
                 * @return DescribeMediaProcessTaskResultOutcome
                 */
                DescribeMediaProcessTaskResultOutcome DescribeMediaProcessTaskResult(const Model::DescribeMediaProcessTaskResultRequest &request);
                void DescribeMediaProcessTaskResultAsync(const Model::DescribeMediaProcessTaskResultRequest& request, const DescribeMediaProcessTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaProcessTaskResultOutcomeCallable DescribeMediaProcessTaskResultCallable(const Model::DescribeMediaProcessTaskResultRequest& request);

                /**
                 *获取画质重生任务结果，查看结束后的文件信息
                 * @param req DescribeMediaQualityRestorationTaskRusultRequest
                 * @return DescribeMediaQualityRestorationTaskRusultOutcome
                 */
                DescribeMediaQualityRestorationTaskRusultOutcome DescribeMediaQualityRestorationTaskRusult(const Model::DescribeMediaQualityRestorationTaskRusultRequest &request);
                void DescribeMediaQualityRestorationTaskRusultAsync(const Model::DescribeMediaQualityRestorationTaskRusultRequest& request, const DescribeMediaQualityRestorationTaskRusultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaQualityRestorationTaskRusultOutcomeCallable DescribeMediaQualityRestorationTaskRusultCallable(const Model::DescribeMediaQualityRestorationTaskRusultRequest& request);

                /**
                 *获取媒体质检任务结果
                 * @param req DescribeQualityControlTaskResultRequest
                 * @return DescribeQualityControlTaskResultOutcome
                 */
                DescribeQualityControlTaskResultOutcome DescribeQualityControlTaskResult(const Model::DescribeQualityControlTaskResultRequest &request);
                void DescribeQualityControlTaskResultAsync(const Model::DescribeQualityControlTaskResultRequest& request, const DescribeQualityControlTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityControlTaskResultOutcomeCallable DescribeQualityControlTaskResultCallable(const Model::DescribeQualityControlTaskResultRequest& request);

                /**
                 *用于停止正在进行中的编辑处理任务。
                 * @param req StopMediaProcessTaskRequest
                 * @return StopMediaProcessTaskOutcome
                 */
                StopMediaProcessTaskOutcome StopMediaProcessTask(const Model::StopMediaProcessTaskRequest &request);
                void StopMediaProcessTaskAsync(const Model::StopMediaProcessTaskRequest& request, const StopMediaProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMediaProcessTaskOutcomeCallable StopMediaProcessTaskCallable(const Model::StopMediaProcessTaskRequest& request);

                /**
                 *删除正在进行的画质重生任务
                 * @param req StopMediaQualityRestorationTaskRequest
                 * @return StopMediaQualityRestorationTaskOutcome
                 */
                StopMediaQualityRestorationTaskOutcome StopMediaQualityRestorationTask(const Model::StopMediaQualityRestorationTaskRequest &request);
                void StopMediaQualityRestorationTaskAsync(const Model::StopMediaQualityRestorationTaskRequest& request, const StopMediaQualityRestorationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMediaQualityRestorationTaskOutcomeCallable StopMediaQualityRestorationTaskCallable(const Model::StopMediaQualityRestorationTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_IECLIENT_H_
