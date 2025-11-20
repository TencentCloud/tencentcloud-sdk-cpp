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

#ifndef TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_
#define TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vclm/v20240523/model/CheckAnimateImageJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/CheckAnimateImageJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeHumanActorJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeHumanActorJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageToVideoGeneralJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageToVideoGeneralJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribePortraitSingJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribePortraitSingJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeTemplateToVideoJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeTemplateToVideoJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitHumanActorJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitHumanActorJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoGeneralJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoGeneralJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitPortraitSingJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitPortraitSingJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitTemplateToVideoJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitTemplateToVideoJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitVideoStylizationJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitVideoStylizationJobResponse.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            class VclmClient : public AbstractClient
            {
            public:
                VclmClient(const Credential &credential, const std::string &region);
                VclmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckAnimateImageJobResponse> CheckAnimateImageJobOutcome;
                typedef std::future<CheckAnimateImageJobOutcome> CheckAnimateImageJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::CheckAnimateImageJobRequest&, CheckAnimateImageJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAnimateImageJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHumanActorJobResponse> DescribeHumanActorJobOutcome;
                typedef std::future<DescribeHumanActorJobOutcome> DescribeHumanActorJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeHumanActorJobRequest&, DescribeHumanActorJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHumanActorJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAnimateJobResponse> DescribeImageAnimateJobOutcome;
                typedef std::future<DescribeImageAnimateJobOutcome> DescribeImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeImageAnimateJobRequest&, DescribeImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageToVideoGeneralJobResponse> DescribeImageToVideoGeneralJobOutcome;
                typedef std::future<DescribeImageToVideoGeneralJobOutcome> DescribeImageToVideoGeneralJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeImageToVideoGeneralJobRequest&, DescribeImageToVideoGeneralJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageToVideoGeneralJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortraitSingJobResponse> DescribePortraitSingJobOutcome;
                typedef std::future<DescribePortraitSingJobOutcome> DescribePortraitSingJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribePortraitSingJobRequest&, DescribePortraitSingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortraitSingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateToVideoJobResponse> DescribeTemplateToVideoJobOutcome;
                typedef std::future<DescribeTemplateToVideoJobOutcome> DescribeTemplateToVideoJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeTemplateToVideoJobRequest&, DescribeTemplateToVideoJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateToVideoJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoStylizationJobResponse> DescribeVideoStylizationJobOutcome;
                typedef std::future<DescribeVideoStylizationJobOutcome> DescribeVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeVideoStylizationJobRequest&, DescribeVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoStylizationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHumanActorJobResponse> SubmitHumanActorJobOutcome;
                typedef std::future<SubmitHumanActorJobOutcome> SubmitHumanActorJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitHumanActorJobRequest&, SubmitHumanActorJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHumanActorJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitImageAnimateJobResponse> SubmitImageAnimateJobOutcome;
                typedef std::future<SubmitImageAnimateJobOutcome> SubmitImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitImageAnimateJobRequest&, SubmitImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitImageToVideoGeneralJobResponse> SubmitImageToVideoGeneralJobOutcome;
                typedef std::future<SubmitImageToVideoGeneralJobOutcome> SubmitImageToVideoGeneralJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitImageToVideoGeneralJobRequest&, SubmitImageToVideoGeneralJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageToVideoGeneralJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitPortraitSingJobResponse> SubmitPortraitSingJobOutcome;
                typedef std::future<SubmitPortraitSingJobOutcome> SubmitPortraitSingJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitPortraitSingJobRequest&, SubmitPortraitSingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPortraitSingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTemplateToVideoJobResponse> SubmitTemplateToVideoJobOutcome;
                typedef std::future<SubmitTemplateToVideoJobOutcome> SubmitTemplateToVideoJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitTemplateToVideoJobRequest&, SubmitTemplateToVideoJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTemplateToVideoJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoStylizationJobResponse> SubmitVideoStylizationJobOutcome;
                typedef std::future<SubmitVideoStylizationJobOutcome> SubmitVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitVideoStylizationJobRequest&, SubmitVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoStylizationJobAsyncHandler;



                /**
                 *检查图片跳舞输入图
                 * @param req CheckAnimateImageJobRequest
                 * @return CheckAnimateImageJobOutcome
                 */
                CheckAnimateImageJobOutcome CheckAnimateImageJob(const Model::CheckAnimateImageJobRequest &request);
                void CheckAnimateImageJobAsync(const Model::CheckAnimateImageJobRequest& request, const CheckAnimateImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAnimateImageJobOutcomeCallable CheckAnimateImageJobCallable(const Model::CheckAnimateImageJobRequest& request);

                /**
                 *通过JobId提交请求，获取人像驱动任务的结果信息。
                 * @param req DescribeHumanActorJobRequest
                 * @return DescribeHumanActorJobOutcome
                 */
                DescribeHumanActorJobOutcome DescribeHumanActorJob(const Model::DescribeHumanActorJobRequest &request);
                void DescribeHumanActorJobAsync(const Model::DescribeHumanActorJobRequest& request, const DescribeHumanActorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHumanActorJobOutcomeCallable DescribeHumanActorJobCallable(const Model::DescribeHumanActorJobRequest& request);

                /**
                 *用于查询图片跳舞任务。图片跳舞能力支持舞蹈动作结合图片生成跳舞视频，满足社交娱乐、互动营销等场景的需求。
                 * @param req DescribeImageAnimateJobRequest
                 * @return DescribeImageAnimateJobOutcome
                 */
                DescribeImageAnimateJobOutcome DescribeImageAnimateJob(const Model::DescribeImageAnimateJobRequest &request);
                void DescribeImageAnimateJobAsync(const Model::DescribeImageAnimateJobRequest& request, const DescribeImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAnimateJobOutcomeCallable DescribeImageAnimateJobCallable(const Model::DescribeImageAnimateJobRequest& request);

                /**
                 *查询图生视频通用能力任务接口
                 * @param req DescribeImageToVideoGeneralJobRequest
                 * @return DescribeImageToVideoGeneralJobOutcome
                 */
                DescribeImageToVideoGeneralJobOutcome DescribeImageToVideoGeneralJob(const Model::DescribeImageToVideoGeneralJobRequest &request);
                void DescribeImageToVideoGeneralJobAsync(const Model::DescribeImageToVideoGeneralJobRequest& request, const DescribeImageToVideoGeneralJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageToVideoGeneralJobOutcomeCallable DescribeImageToVideoGeneralJobCallable(const Model::DescribeImageToVideoGeneralJobRequest& request);

                /**
                 *用于查询图片唱演任务。
支持提交音频和图片生成唱演视频，满足社交娱乐、互动营销等场景的需求。
                 * @param req DescribePortraitSingJobRequest
                 * @return DescribePortraitSingJobOutcome
                 */
                DescribePortraitSingJobOutcome DescribePortraitSingJob(const Model::DescribePortraitSingJobRequest &request);
                void DescribePortraitSingJobAsync(const Model::DescribePortraitSingJobRequest& request, const DescribePortraitSingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortraitSingJobOutcomeCallable DescribePortraitSingJobCallable(const Model::DescribePortraitSingJobRequest& request);

                /**
                 *用于查询视频特效任务。
                 * @param req DescribeTemplateToVideoJobRequest
                 * @return DescribeTemplateToVideoJobOutcome
                 */
                DescribeTemplateToVideoJobOutcome DescribeTemplateToVideoJob(const Model::DescribeTemplateToVideoJobRequest &request);
                void DescribeTemplateToVideoJobAsync(const Model::DescribeTemplateToVideoJobRequest& request, const DescribeTemplateToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateToVideoJobOutcomeCallable DescribeTemplateToVideoJobCallable(const Model::DescribeTemplateToVideoJobRequest& request);

                /**
                 *用于查询视频风格化任务。视频风格化支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req DescribeVideoStylizationJobRequest
                 * @return DescribeVideoStylizationJobOutcome
                 */
                DescribeVideoStylizationJobOutcome DescribeVideoStylizationJob(const Model::DescribeVideoStylizationJobRequest &request);
                void DescribeVideoStylizationJobAsync(const Model::DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoStylizationJobOutcomeCallable DescribeVideoStylizationJobCallable(const Model::DescribeVideoStylizationJobRequest& request);

                /**
                 *用于提交人像驱动任务
支持提交音频和图文来生成对应视频，满足动态交互、内容生产等场景需求。
                 * @param req SubmitHumanActorJobRequest
                 * @return SubmitHumanActorJobOutcome
                 */
                SubmitHumanActorJobOutcome SubmitHumanActorJob(const Model::SubmitHumanActorJobRequest &request);
                void SubmitHumanActorJobAsync(const Model::SubmitHumanActorJobRequest& request, const SubmitHumanActorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHumanActorJobOutcomeCallable SubmitHumanActorJobCallable(const Model::SubmitHumanActorJobRequest& request);

                /**
                 *用于提交图片跳舞任务。图片跳舞能力支持舞蹈动作结合图片生成跳舞视频，满足社交娱乐、互动营销等场景的需求。
                 * @param req SubmitImageAnimateJobRequest
                 * @return SubmitImageAnimateJobOutcome
                 */
                SubmitImageAnimateJobOutcome SubmitImageAnimateJob(const Model::SubmitImageAnimateJobRequest &request);
                void SubmitImageAnimateJobAsync(const Model::SubmitImageAnimateJobRequest& request, const SubmitImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitImageAnimateJobOutcomeCallable SubmitImageAnimateJobCallable(const Model::SubmitImageAnimateJobRequest& request);

                /**
                 *图生视频通用能力接口
                 * @param req SubmitImageToVideoGeneralJobRequest
                 * @return SubmitImageToVideoGeneralJobOutcome
                 */
                SubmitImageToVideoGeneralJobOutcome SubmitImageToVideoGeneralJob(const Model::SubmitImageToVideoGeneralJobRequest &request);
                void SubmitImageToVideoGeneralJobAsync(const Model::SubmitImageToVideoGeneralJobRequest& request, const SubmitImageToVideoGeneralJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitImageToVideoGeneralJobOutcomeCallable SubmitImageToVideoGeneralJobCallable(const Model::SubmitImageToVideoGeneralJobRequest& request);

                /**
                 *用于提交图片唱演任务。
支持提交音频和图片生成唱演视频，满足社交娱乐、互动营销等场景的需求。
                 * @param req SubmitPortraitSingJobRequest
                 * @return SubmitPortraitSingJobOutcome
                 */
                SubmitPortraitSingJobOutcome SubmitPortraitSingJob(const Model::SubmitPortraitSingJobRequest &request);
                void SubmitPortraitSingJobAsync(const Model::SubmitPortraitSingJobRequest& request, const SubmitPortraitSingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitPortraitSingJobOutcomeCallable SubmitPortraitSingJobCallable(const Model::SubmitPortraitSingJobRequest& request);

                /**
                 *提交视频特效任务接口
                 * @param req SubmitTemplateToVideoJobRequest
                 * @return SubmitTemplateToVideoJobOutcome
                 */
                SubmitTemplateToVideoJobOutcome SubmitTemplateToVideoJob(const Model::SubmitTemplateToVideoJobRequest &request);
                void SubmitTemplateToVideoJobAsync(const Model::SubmitTemplateToVideoJobRequest& request, const SubmitTemplateToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTemplateToVideoJobOutcomeCallable SubmitTemplateToVideoJobCallable(const Model::SubmitTemplateToVideoJobRequest& request);

                /**
                 *用于提交视频风格化任务。支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req SubmitVideoStylizationJobRequest
                 * @return SubmitVideoStylizationJobOutcome
                 */
                SubmitVideoStylizationJobOutcome SubmitVideoStylizationJob(const Model::SubmitVideoStylizationJobRequest &request);
                void SubmitVideoStylizationJobAsync(const Model::SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitVideoStylizationJobOutcomeCallable SubmitVideoStylizationJobCallable(const Model::SubmitVideoStylizationJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_
