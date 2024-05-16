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

#ifndef TENCENTCLOUD_VTC_V20240223_VTCCLIENT_H_
#define TENCENTCLOUD_VTC_V20240223_VTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vtc/v20240223/model/ConfirmVideoTranslateJobRequest.h>
#include <tencentcloud/vtc/v20240223/model/ConfirmVideoTranslateJobResponse.h>
#include <tencentcloud/vtc/v20240223/model/DescribeVideoTranslateJobRequest.h>
#include <tencentcloud/vtc/v20240223/model/DescribeVideoTranslateJobResponse.h>
#include <tencentcloud/vtc/v20240223/model/SubmitVideoTranslateJobRequest.h>
#include <tencentcloud/vtc/v20240223/model/SubmitVideoTranslateJobResponse.h>


namespace TencentCloud
{
    namespace Vtc
    {
        namespace V20240223
        {
            class VtcClient : public AbstractClient
            {
            public:
                VtcClient(const Credential &credential, const std::string &region);
                VtcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ConfirmVideoTranslateJobResponse> ConfirmVideoTranslateJobOutcome;
                typedef std::future<ConfirmVideoTranslateJobOutcome> ConfirmVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VtcClient*, const Model::ConfirmVideoTranslateJobRequest&, ConfirmVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmVideoTranslateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoTranslateJobResponse> DescribeVideoTranslateJobOutcome;
                typedef std::future<DescribeVideoTranslateJobOutcome> DescribeVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VtcClient*, const Model::DescribeVideoTranslateJobRequest&, DescribeVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoTranslateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoTranslateJobResponse> SubmitVideoTranslateJobOutcome;
                typedef std::future<SubmitVideoTranslateJobOutcome> SubmitVideoTranslateJobOutcomeCallable;
                typedef std::function<void(const VtcClient*, const Model::SubmitVideoTranslateJobRequest&, SubmitVideoTranslateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoTranslateJobAsyncHandler;



                /**
                 *确认视频翻译结果
                 * @param req ConfirmVideoTranslateJobRequest
                 * @return ConfirmVideoTranslateJobOutcome
                 */
                ConfirmVideoTranslateJobOutcome ConfirmVideoTranslateJob(const Model::ConfirmVideoTranslateJobRequest &request);
                void ConfirmVideoTranslateJobAsync(const Model::ConfirmVideoTranslateJobRequest& request, const ConfirmVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmVideoTranslateJobOutcomeCallable ConfirmVideoTranslateJobCallable(const Model::ConfirmVideoTranslateJobRequest& request);

                /**
                 *查询视频翻译任务
                 * @param req DescribeVideoTranslateJobRequest
                 * @return DescribeVideoTranslateJobOutcome
                 */
                DescribeVideoTranslateJobOutcome DescribeVideoTranslateJob(const Model::DescribeVideoTranslateJobRequest &request);
                void DescribeVideoTranslateJobAsync(const Model::DescribeVideoTranslateJobRequest& request, const DescribeVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoTranslateJobOutcomeCallable DescribeVideoTranslateJobCallable(const Model::DescribeVideoTranslateJobRequest& request);

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

#endif // !TENCENTCLOUD_VTC_V20240223_VTCCLIENT_H_
