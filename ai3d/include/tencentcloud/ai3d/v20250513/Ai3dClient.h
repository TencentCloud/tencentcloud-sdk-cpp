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
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobResponse.h>


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
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DProJobResponse> QueryHunyuanTo3DProJobOutcome;
                typedef std::future<QueryHunyuanTo3DProJobOutcome> QueryHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuanTo3DProJobRequest&, QueryHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DRapidJobResponse> QueryHunyuanTo3DRapidJobOutcome;
                typedef std::future<QueryHunyuanTo3DRapidJobOutcome> QueryHunyuanTo3DRapidJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuanTo3DRapidJobRequest&, QueryHunyuanTo3DRapidJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DRapidJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DJobResponse> SubmitHunyuanTo3DJobOutcome;
                typedef std::future<SubmitHunyuanTo3DJobOutcome> SubmitHunyuanTo3DJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DJobRequest&, SubmitHunyuanTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DProJobResponse> SubmitHunyuanTo3DProJobOutcome;
                typedef std::future<SubmitHunyuanTo3DProJobOutcome> SubmitHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DProJobRequest&, SubmitHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DRapidJobResponse> SubmitHunyuanTo3DRapidJobOutcome;
                typedef std::future<SubmitHunyuanTo3DRapidJobOutcome> SubmitHunyuanTo3DRapidJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DRapidJobRequest&, SubmitHunyuanTo3DRapidJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DRapidJobAsyncHandler;



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
                 * @param req QueryHunyuanTo3DProJobRequest
                 * @return QueryHunyuanTo3DProJobOutcome
                 */
                QueryHunyuanTo3DProJobOutcome QueryHunyuanTo3DProJob(const Model::QueryHunyuanTo3DProJobRequest &request);
                void QueryHunyuanTo3DProJobAsync(const Model::QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DProJobOutcomeCallable QueryHunyuanTo3DProJobCallable(const Model::QueryHunyuanTo3DProJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供3个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req QueryHunyuanTo3DRapidJobRequest
                 * @return QueryHunyuanTo3DRapidJobOutcome
                 */
                QueryHunyuanTo3DRapidJobOutcome QueryHunyuanTo3DRapidJob(const Model::QueryHunyuanTo3DRapidJobRequest &request);
                void QueryHunyuanTo3DRapidJobAsync(const Model::QueryHunyuanTo3DRapidJobRequest& request, const QueryHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DRapidJobOutcomeCallable QueryHunyuanTo3DRapidJobCallable(const Model::QueryHunyuanTo3DRapidJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitHunyuanTo3DJobRequest
                 * @return SubmitHunyuanTo3DJobOutcome
                 */
                SubmitHunyuanTo3DJobOutcome SubmitHunyuanTo3DJob(const Model::SubmitHunyuanTo3DJobRequest &request);
                void SubmitHunyuanTo3DJobAsync(const Model::SubmitHunyuanTo3DJobRequest& request, const SubmitHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DJobOutcomeCallable SubmitHunyuanTo3DJobCallable(const Model::SubmitHunyuanTo3DJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitHunyuanTo3DProJobRequest
                 * @return SubmitHunyuanTo3DProJobOutcome
                 */
                SubmitHunyuanTo3DProJobOutcome SubmitHunyuanTo3DProJob(const Model::SubmitHunyuanTo3DProJobRequest &request);
                void SubmitHunyuanTo3DProJobAsync(const Model::SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DProJobOutcomeCallable SubmitHunyuanTo3DProJobCallable(const Model::SubmitHunyuanTo3DProJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供3个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitHunyuanTo3DRapidJobRequest
                 * @return SubmitHunyuanTo3DRapidJobOutcome
                 */
                SubmitHunyuanTo3DRapidJobOutcome SubmitHunyuanTo3DRapidJob(const Model::SubmitHunyuanTo3DRapidJobRequest &request);
                void SubmitHunyuanTo3DRapidJobAsync(const Model::SubmitHunyuanTo3DRapidJobRequest& request, const SubmitHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DRapidJobOutcomeCallable SubmitHunyuanTo3DRapidJobCallable(const Model::SubmitHunyuanTo3DRapidJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_
