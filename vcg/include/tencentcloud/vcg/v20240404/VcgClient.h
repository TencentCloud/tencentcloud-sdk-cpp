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

#ifndef TENCENTCLOUD_VCG_V20240404_VCGCLIENT_H_
#define TENCENTCLOUD_VCG_V20240404_VCGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vcg/v20240404/model/DescribeVideoStylizationJobRequest.h>
#include <tencentcloud/vcg/v20240404/model/DescribeVideoStylizationJobResponse.h>
#include <tencentcloud/vcg/v20240404/model/SubmitVideoStylizationJobRequest.h>
#include <tencentcloud/vcg/v20240404/model/SubmitVideoStylizationJobResponse.h>


namespace TencentCloud
{
    namespace Vcg
    {
        namespace V20240404
        {
            class VcgClient : public AbstractClient
            {
            public:
                VcgClient(const Credential &credential, const std::string &region);
                VcgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeVideoStylizationJobResponse> DescribeVideoStylizationJobOutcome;
                typedef std::future<DescribeVideoStylizationJobOutcome> DescribeVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VcgClient*, const Model::DescribeVideoStylizationJobRequest&, DescribeVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoStylizationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoStylizationJobResponse> SubmitVideoStylizationJobOutcome;
                typedef std::future<SubmitVideoStylizationJobOutcome> SubmitVideoStylizationJobOutcomeCallable;
                typedef std::function<void(const VcgClient*, const Model::SubmitVideoStylizationJobRequest&, SubmitVideoStylizationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoStylizationJobAsyncHandler;



                /**
                 *用于查询视频风格化任务。视频风格化支持将输入视频生成特定风格的视频。生成后的视频画面风格多样、流畅自然，能够满足社交娱乐、互动营销、视频素材制作等场景的需求。
                 * @param req DescribeVideoStylizationJobRequest
                 * @return DescribeVideoStylizationJobOutcome
                 */
                DescribeVideoStylizationJobOutcome DescribeVideoStylizationJob(const Model::DescribeVideoStylizationJobRequest &request);
                void DescribeVideoStylizationJobAsync(const Model::DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoStylizationJobOutcomeCallable DescribeVideoStylizationJobCallable(const Model::DescribeVideoStylizationJobRequest& request);

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

#endif // !TENCENTCLOUD_VCG_V20240404_VCGCLIENT_H_
