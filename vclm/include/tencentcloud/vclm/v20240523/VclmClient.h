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
#include <tencentcloud/vclm/v20240523/model/ConfirmVideoTranslateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/ConfirmVideoTranslateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribePortraitSingJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribePortraitSingJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoTranslateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoTranslateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitPortraitSingJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitPortraitSingJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitVideoStylizationJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitVideoStylizationJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitVideoTranslateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitVideoTranslateJobResponse.h>


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
                typedef Outcome<Core::Error, Model::ConfirmVideoTranslateJobResponse> ConfirmVideoTranslateJobOutcome;
                typedef std::future<ConfirmVideoTranslateJobOutcome> ConfirmVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::ConfirmVideoTranslateJobRequest&, ConfirmVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmVideoTranslateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAnimateJobResponse> DescribeImageAnimateJobOutcome;
                typedef std::future<DescribeImageAnimateJobOutcome> DescribeImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeImageAnimateJobRequest&, DescribeImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortraitSingJobResponse> DescribePortraitSingJobOutcome;
                typedef std::future<DescribePortraitSingJobOutcome> DescribePortraitSingJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribePortraitSingJobRequest&, DescribePortraitSingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortraitSingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoStylizationJobResponse> DescribeVideoStylizationJobOutcome;
                typedef std::future<DescribeVideoStylizationJobOutcome> DescribeVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeVideoStylizationJobRequest&, DescribeVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoStylizationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoTranslateJobResponse> DescribeVideoTranslateJobOutcome;
                typedef std::future<DescribeVideoTranslateJobOutcome> DescribeVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeVideoTranslateJobRequest&, DescribeVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoTranslateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitImageAnimateJobResponse> SubmitImageAnimateJobOutcome;
                typedef std::future<SubmitImageAnimateJobOutcome> SubmitImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitImageAnimateJobRequest&, SubmitImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitPortraitSingJobResponse> SubmitPortraitSingJobOutcome;
                typedef std::future<SubmitPortraitSingJobOutcome> SubmitPortraitSingJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitPortraitSingJobRequest&, SubmitPortraitSingJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPortraitSingJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoStylizationJobResponse> SubmitVideoStylizationJobOutcome;
                typedef std::future<SubmitVideoStylizationJobOutcome> SubmitVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitVideoStylizationJobRequest&, SubmitVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoStylizationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoTranslateJobResponse> SubmitVideoTranslateJobOutcome;
                typedef std::future<SubmitVideoTranslateJobOutcome> SubmitVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitVideoTranslateJobRequest&, SubmitVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoTranslateJobAsyncHandler;



                /**
                 *检查图片跳舞输入图
                 * @param req CheckAnimateImageJobRequest
                 * @return CheckAnimateImageJobOutcome
                 */
                CheckAnimateImageJobOutcome CheckAnimateImageJob(const Model::CheckAnimateImageJobRequest &request);
                void CheckAnimateImageJobAsync(const Model::CheckAnimateImageJobRequest& request, const CheckAnimateImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAnimateImageJobOutcomeCallable CheckAnimateImageJobCallable(const Model::CheckAnimateImageJobRequest& request);

                /**
                 *确认视频转译结果
                 * @param req ConfirmVideoTranslateJobRequest
                 * @return ConfirmVideoTranslateJobOutcome
                 */
                ConfirmVideoTranslateJobOutcome ConfirmVideoTranslateJob(const Model::ConfirmVideoTranslateJobRequest &request);
                void ConfirmVideoTranslateJobAsync(const Model::ConfirmVideoTranslateJobRequest& request, const ConfirmVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmVideoTranslateJobOutcomeCallable ConfirmVideoTranslateJobCallable(const Model::ConfirmVideoTranslateJobRequest& request);

                /**
                 *用于查询图片跳舞任务。图片跳舞能力支持舞蹈动作结合图片生成跳舞视频，满足社交娱乐、互动营销等场景的需求。
                 * @param req DescribeImageAnimateJobRequest
                 * @return DescribeImageAnimateJobOutcome
                 */
                DescribeImageAnimateJobOutcome DescribeImageAnimateJob(const Model::DescribeImageAnimateJobRequest &request);
                void DescribeImageAnimateJobAsync(const Model::DescribeImageAnimateJobRequest& request, const DescribeImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAnimateJobOutcomeCallable DescribeImageAnimateJobCallable(const Model::DescribeImageAnimateJobRequest& request);

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
                 *用于查询视频风格化任务。视频风格化支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req DescribeVideoStylizationJobRequest
                 * @return DescribeVideoStylizationJobOutcome
                 */
                DescribeVideoStylizationJobOutcome DescribeVideoStylizationJob(const Model::DescribeVideoStylizationJobRequest &request);
                void DescribeVideoStylizationJobAsync(const Model::DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoStylizationJobOutcomeCallable DescribeVideoStylizationJobCallable(const Model::DescribeVideoStylizationJobRequest& request);

                /**
                 *查询视频转译任务
                 * @param req DescribeVideoTranslateJobRequest
                 * @return DescribeVideoTranslateJobOutcome
                 */
                DescribeVideoTranslateJobOutcome DescribeVideoTranslateJob(const Model::DescribeVideoTranslateJobRequest &request);
                void DescribeVideoTranslateJobAsync(const Model::DescribeVideoTranslateJobRequest& request, const DescribeVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoTranslateJobOutcomeCallable DescribeVideoTranslateJobCallable(const Model::DescribeVideoTranslateJobRequest& request);

                /**
                 *用于提交图片跳舞任务。图片跳舞能力支持舞蹈动作结合图片生成跳舞视频，满足社交娱乐、互动营销等场景的需求。
                 * @param req SubmitImageAnimateJobRequest
                 * @return SubmitImageAnimateJobOutcome
                 */
                SubmitImageAnimateJobOutcome SubmitImageAnimateJob(const Model::SubmitImageAnimateJobRequest &request);
                void SubmitImageAnimateJobAsync(const Model::SubmitImageAnimateJobRequest& request, const SubmitImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitImageAnimateJobOutcomeCallable SubmitImageAnimateJobCallable(const Model::SubmitImageAnimateJobRequest& request);

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
                 *用于提交视频风格化任务。支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req SubmitVideoStylizationJobRequest
                 * @return SubmitVideoStylizationJobOutcome
                 */
                SubmitVideoStylizationJobOutcome SubmitVideoStylizationJob(const Model::SubmitVideoStylizationJobRequest &request);
                void SubmitVideoStylizationJobAsync(const Model::SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitVideoStylizationJobOutcomeCallable SubmitVideoStylizationJobCallable(const Model::SubmitVideoStylizationJobRequest& request);

                /**
                 *###### 支持音色种别列表
| 音色名称                 | 性别 | 音色ID |音色试听ID |
| ------------------------ | ---- | ------ |------ |
| Florian Multilingual     | 男   | 701001 |
| Seraphina                | 女   | 701002 |
| Ada Multilingual         | 女   | 701003 |
| Ollie Multilingual       | 男   | 701004 |
| Ava Multilingual         | 女   | 701005 |
| Andrew Multilingual      | 男   | 701006 |
| Emma Multilingual        | 女   | 701007 |
| Brian Multilingual       | 男   | 701008 |
| Jenny Multilingual       | 女   | 701009 |
| Ryan Multilingual        | 男   | 701010 |
| Adam Multilingual        | 男   | 701011 |
| AlloyTurbo Multilingual  | 男   | 701012 |
| Amanda Multilingual      | 女   | 701013 |
| Brandon Multilingual     | 男   | 701014 |
| Christopher Multilingual | 男   | 701015 |
| Cora Multilingual        | 女   | 701016 |
| Davis Multilingual       | 男   | 701017 |
| Derek Multilingual       | 男   | 701018 |
| Dustin Multilingual      | 男   | 701019 |
| Evelyn Multilingual      | 女   | 701020 |
| Lewis Multilingual       | 男   | 701021 |
| Lola Multilingual        | 女   | 701022 |
| Nancy Multilingual       | 女   | 701023 |
| NovaTurbo Multilingual   | 女   | 701024 |
| Phoebe Multilingual      | 女   | 701025 |
| Samuel Multilingual      | 男   | 701026 |
| Serena Multilingual      | 女   | 701027 |
| Steffan Multilingual     | 男   | 701028 |
| Arabella Multilingual    | 女   | 701029 |
| Isidora Multilingual     | 女   | 701030 |
| Tristan Multilingual     | 男   | 701031 |
| Ximena Multilingual      | 女   | 701032 |
| Remy Multilingual        | 男   | 701033 |
| Vivienne Multilingual    | 女   | 701034 |
| Lucien Multilingual      | 男   | 701035 |
| Alessio Multilingual     | 男   | 701036 |
| Giuseppe Multilingual    | 男   | 701037 |
| Isabella Multilingual    | 女   | 701038 |
| Marcello Multilingual    | 男   | 701039 |
| Masaru Multilingual      | 男   | 701040 |
| Hyunsu Multilingual      | 男   | 701041 |
| Macerio Multilingual     | 男   | 701042 |
| Thalita Multilingual     | 女   | 701043 |
| 晓辰 多语言              | 女   | 701044 |
| 晓晓 多语言              | 女   | 701045 |
| 晓宇 多语言              | 女   | 701046 |
| 云逸 多语言              | 男   | 701047 |
| Yunfan Multilingual      | 男   | 701048 |
| Yunxiao Multilingual     | 男   | 701049 |
| 晓晓 方言                | 女   | 701050 |
                 * @param req SubmitVideoTranslateJobRequest
                 * @return SubmitVideoTranslateJobOutcome
                 */
                SubmitVideoTranslateJobOutcome SubmitVideoTranslateJob(const Model::SubmitVideoTranslateJobRequest &request);
                void SubmitVideoTranslateJobAsync(const Model::SubmitVideoTranslateJobRequest& request, const SubmitVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitVideoTranslateJobOutcomeCallable SubmitVideoTranslateJobCallable(const Model::SubmitVideoTranslateJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_
