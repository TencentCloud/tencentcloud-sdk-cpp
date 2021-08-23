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

#ifndef TENCENTCLOUD_TICM_V20181127_TICMCLIENT_H_
#define TENCENTCLOUD_TICM_V20181127_TICMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ticm/v20181127/model/DescribeVideoTaskRequest.h>
#include <tencentcloud/ticm/v20181127/model/DescribeVideoTaskResponse.h>
#include <tencentcloud/ticm/v20181127/model/ImageModerationRequest.h>
#include <tencentcloud/ticm/v20181127/model/ImageModerationResponse.h>
#include <tencentcloud/ticm/v20181127/model/VideoModerationRequest.h>
#include <tencentcloud/ticm/v20181127/model/VideoModerationResponse.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            class TicmClient : public AbstractClient
            {
            public:
                TicmClient(const Credential &credential, const std::string &region);
                TicmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeVideoTaskResponse> DescribeVideoTaskOutcome;
                typedef std::future<DescribeVideoTaskOutcome> DescribeVideoTaskOutcomeCallable;
                typedef std::function<void(const TicmClient*, const Model::DescribeVideoTaskRequest&, DescribeVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const TicmClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::VideoModerationResponse> VideoModerationOutcome;
                typedef std::future<VideoModerationOutcome> VideoModerationOutcomeCallable;
                typedef std::function<void(const TicmClient*, const Model::VideoModerationRequest&, VideoModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VideoModerationAsyncHandler;



                /**
                 *提交完视频审核任务后，可以通过本接口来获取当前处理的进度和结果
                 * @param req DescribeVideoTaskRequest
                 * @return DescribeVideoTaskOutcome
                 */
                DescribeVideoTaskOutcome DescribeVideoTask(const Model::DescribeVideoTaskRequest &request);
                void DescribeVideoTaskAsync(const Model::DescribeVideoTaskRequest& request, const DescribeVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoTaskOutcomeCallable DescribeVideoTaskCallable(const Model::DescribeVideoTaskRequest& request);

                /**
                 *本接口提供多种维度的图像审核能力，支持色情和性感内容识别，政治人物和涉政敏感场景识别，以及暴恐人物、场景、旗帜标识等违禁内容的识别。
                 * @param req ImageModerationRequest
                 * @return ImageModerationOutcome
                 */
                ImageModerationOutcome ImageModeration(const Model::ImageModerationRequest &request);
                void ImageModerationAsync(const Model::ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageModerationOutcomeCallable ImageModerationCallable(const Model::ImageModerationRequest& request);

                /**
                 *本接口提供多种维度的视频审核能力，支持色情和性感内容识别，政治人物和涉政敏感场景识别，以及暴恐人物、场景、旗帜标识等违禁内容的识别。
                 * @param req VideoModerationRequest
                 * @return VideoModerationOutcome
                 */
                VideoModerationOutcome VideoModeration(const Model::VideoModerationRequest &request);
                void VideoModerationAsync(const Model::VideoModerationRequest& request, const VideoModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VideoModerationOutcomeCallable VideoModerationCallable(const Model::VideoModerationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_TICMCLIENT_H_
