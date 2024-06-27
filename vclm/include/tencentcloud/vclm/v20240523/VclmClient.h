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
#include <tencentcloud/vclm/v20240523/model/ConfirmVideoTranslateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/ConfirmVideoTranslateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoTranslateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeVideoTranslateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobResponse.h>
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

                typedef Outcome<Core::Error, Model::ConfirmVideoTranslateJobResponse> ConfirmVideoTranslateJobOutcome;
                typedef std::future<ConfirmVideoTranslateJobOutcome> ConfirmVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::ConfirmVideoTranslateJobRequest&, ConfirmVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmVideoTranslateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAnimateJobResponse> DescribeImageAnimateJobOutcome;
                typedef std::future<DescribeImageAnimateJobOutcome> DescribeImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeImageAnimateJobRequest&, DescribeImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoStylizationJobResponse> DescribeVideoStylizationJobOutcome;
                typedef std::future<DescribeVideoStylizationJobOutcome> DescribeVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeVideoStylizationJobRequest&, DescribeVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoStylizationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoTranslateJobResponse> DescribeVideoTranslateJobOutcome;
                typedef std::future<DescribeVideoTranslateJobOutcome> DescribeVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeVideoTranslateJobRequest&, DescribeVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoTranslateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitImageAnimateJobResponse> SubmitImageAnimateJobOutcome;
                typedef std::future<SubmitImageAnimateJobOutcome> SubmitImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitImageAnimateJobRequest&, SubmitImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoStylizationJobResponse> SubmitVideoStylizationJobOutcome;
                typedef std::future<SubmitVideoStylizationJobOutcome> SubmitVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitVideoStylizationJobRequest&, SubmitVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoStylizationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoTranslateJobResponse> SubmitVideoTranslateJobOutcome;
                typedef std::future<SubmitVideoTranslateJobOutcome> SubmitVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitVideoTranslateJobRequest&, SubmitVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoTranslateJobAsyncHandler;



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
                 *用于查询视频风格化任务。视频风格化支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req DescribeVideoStylizationJobRequest
                 * @return DescribeVideoStylizationJobOutcome
                 */
                DescribeVideoStylizationJobOutcome DescribeVideoStylizationJob(const Model::DescribeVideoStylizationJobRequest &request);
                void DescribeVideoStylizationJobAsync(const Model::DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoStylizationJobOutcomeCallable DescribeVideoStylizationJobCallable(const Model::DescribeVideoStylizationJobRequest& request);

                /**
                 *查询视频翻译任务
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
                 *用于提交视频风格化任务。支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req SubmitVideoStylizationJobRequest
                 * @return SubmitVideoStylizationJobOutcome
                 */
                SubmitVideoStylizationJobOutcome SubmitVideoStylizationJob(const Model::SubmitVideoStylizationJobRequest &request);
                void SubmitVideoStylizationJobAsync(const Model::SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitVideoStylizationJobOutcomeCallable SubmitVideoStylizationJobCallable(const Model::SubmitVideoStylizationJobRequest& request);

                /**
                 *提交视频转译任务
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
