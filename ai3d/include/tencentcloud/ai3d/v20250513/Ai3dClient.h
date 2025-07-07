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

#ifndef TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_
#define TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DJobResponse.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            class Ai3dClient : public AbstractClient
            {
            public:
                Ai3dClient(const Credential &credential, const std::string &region);
                Ai3dClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DJobResponse> QueryHunyuanTo3DJobOutcome;
                typedef std::future<QueryHunyuanTo3DJobOutcome> QueryHunyuanTo3DJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuanTo3DJobRequest&, QueryHunyuanTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DJobResponse> SubmitHunyuanTo3DJobOutcome;
                typedef std::future<SubmitHunyuanTo3DJobOutcome> SubmitHunyuanTo3DJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DJobRequest&, SubmitHunyuanTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DJobAsyncHandler;



                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req QueryHunyuanTo3DJobRequest
                 * @return QueryHunyuanTo3DJobOutcome
                 */
                QueryHunyuanTo3DJobOutcome QueryHunyuanTo3DJob(const Model::QueryHunyuanTo3DJobRequest &request);
                void QueryHunyuanTo3DJobAsync(const Model::QueryHunyuanTo3DJobRequest& request, const QueryHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DJobOutcomeCallable QueryHunyuanTo3DJobCallable(const Model::QueryHunyuanTo3DJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitHunyuanTo3DJobRequest
                 * @return SubmitHunyuanTo3DJobOutcome
                 */
                SubmitHunyuanTo3DJobOutcome SubmitHunyuanTo3DJob(const Model::SubmitHunyuanTo3DJobRequest &request);
                void SubmitHunyuanTo3DJobAsync(const Model::SubmitHunyuanTo3DJobRequest& request, const SubmitHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DJobOutcomeCallable SubmitHunyuanTo3DJobCallable(const Model::SubmitHunyuanTo3DJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_
