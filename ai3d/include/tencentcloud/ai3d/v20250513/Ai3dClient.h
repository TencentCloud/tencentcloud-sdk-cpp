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
#include <tencentcloud/ai3d/v20250513/model/Convert3DFormatRequest.h>
#include <tencentcloud/ai3d/v20250513/model/Convert3DFormatResponse.h>
#include <tencentcloud/ai3d/v20250513/model/DescribeHunyuanTo3DUVJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/DescribeHunyuanTo3DUVJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/DescribeReduceFaceJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/DescribeReduceFaceJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/DescribeTextureTo3DJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/DescribeTextureTo3DJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuan3DPartJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuan3DPartJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuan3DPartJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuan3DPartJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DUVJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DUVJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitReduceFaceJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitReduceFaceJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitTextureTo3DJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitTextureTo3DJobResponse.h>


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

                typedef Outcome<Core::Error, Model::Convert3DFormatResponse> Convert3DFormatOutcome;
                typedef std::future<Convert3DFormatOutcome> Convert3DFormatOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::Convert3DFormatRequest&, Convert3DFormatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Convert3DFormatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHunyuanTo3DUVJobResponse> DescribeHunyuanTo3DUVJobOutcome;
                typedef std::future<DescribeHunyuanTo3DUVJobOutcome> DescribeHunyuanTo3DUVJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::DescribeHunyuanTo3DUVJobRequest&, DescribeHunyuanTo3DUVJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHunyuanTo3DUVJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReduceFaceJobResponse> DescribeReduceFaceJobOutcome;
                typedef std::future<DescribeReduceFaceJobOutcome> DescribeReduceFaceJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::DescribeReduceFaceJobRequest&, DescribeReduceFaceJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReduceFaceJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTextureTo3DJobResponse> DescribeTextureTo3DJobOutcome;
                typedef std::future<DescribeTextureTo3DJobOutcome> DescribeTextureTo3DJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::DescribeTextureTo3DJobRequest&, DescribeTextureTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTextureTo3DJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuan3DPartJobResponse> QueryHunyuan3DPartJobOutcome;
                typedef std::future<QueryHunyuan3DPartJobOutcome> QueryHunyuan3DPartJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuan3DPartJobRequest&, QueryHunyuan3DPartJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuan3DPartJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DProJobResponse> QueryHunyuanTo3DProJobOutcome;
                typedef std::future<QueryHunyuanTo3DProJobOutcome> QueryHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuanTo3DProJobRequest&, QueryHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DRapidJobResponse> QueryHunyuanTo3DRapidJobOutcome;
                typedef std::future<QueryHunyuanTo3DRapidJobOutcome> QueryHunyuanTo3DRapidJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuanTo3DRapidJobRequest&, QueryHunyuanTo3DRapidJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DRapidJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuan3DPartJobResponse> SubmitHunyuan3DPartJobOutcome;
                typedef std::future<SubmitHunyuan3DPartJobOutcome> SubmitHunyuan3DPartJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuan3DPartJobRequest&, SubmitHunyuan3DPartJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuan3DPartJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DProJobResponse> SubmitHunyuanTo3DProJobOutcome;
                typedef std::future<SubmitHunyuanTo3DProJobOutcome> SubmitHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DProJobRequest&, SubmitHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DRapidJobResponse> SubmitHunyuanTo3DRapidJobOutcome;
                typedef std::future<SubmitHunyuanTo3DRapidJobOutcome> SubmitHunyuanTo3DRapidJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DRapidJobRequest&, SubmitHunyuanTo3DRapidJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DRapidJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DUVJobResponse> SubmitHunyuanTo3DUVJobOutcome;
                typedef std::future<SubmitHunyuanTo3DUVJobOutcome> SubmitHunyuanTo3DUVJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DUVJobRequest&, SubmitHunyuanTo3DUVJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DUVJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitReduceFaceJobResponse> SubmitReduceFaceJobOutcome;
                typedef std::future<SubmitReduceFaceJobOutcome> SubmitReduceFaceJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitReduceFaceJobRequest&, SubmitReduceFaceJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitReduceFaceJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTextureTo3DJobResponse> SubmitTextureTo3DJobOutcome;
                typedef std::future<SubmitTextureTo3DJobOutcome> SubmitTextureTo3DJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitTextureTo3DJobRequest&, SubmitTextureTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextureTo3DJobAsyncHandler;



                /**
                 *输入3D模型文件后，可进行3D模型文件格式转换。
                 * @param req Convert3DFormatRequest
                 * @return Convert3DFormatOutcome
                 */
                Convert3DFormatOutcome Convert3DFormat(const Model::Convert3DFormatRequest &request);
                void Convert3DFormatAsync(const Model::Convert3DFormatRequest& request, const Convert3DFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Convert3DFormatOutcomeCallable Convert3DFormatCallable(const Model::Convert3DFormatRequest& request);

                /**
                 *查询组件拆分任务。
                 * @param req DescribeHunyuanTo3DUVJobRequest
                 * @return DescribeHunyuanTo3DUVJobOutcome
                 */
                DescribeHunyuanTo3DUVJobOutcome DescribeHunyuanTo3DUVJob(const Model::DescribeHunyuanTo3DUVJobRequest &request);
                void DescribeHunyuanTo3DUVJobAsync(const Model::DescribeHunyuanTo3DUVJobRequest& request, const DescribeHunyuanTo3DUVJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHunyuanTo3DUVJobOutcomeCallable DescribeHunyuanTo3DUVJobCallable(const Model::DescribeHunyuanTo3DUVJobRequest& request);

                /**
                 *混元生3D接口，采用 Polygon 1.5模型，输入3D 高模后，可生成布线规整，较低面数的3D 模型。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req DescribeReduceFaceJobRequest
                 * @return DescribeReduceFaceJobOutcome
                 */
                DescribeReduceFaceJobOutcome DescribeReduceFaceJob(const Model::DescribeReduceFaceJobRequest &request);
                void DescribeReduceFaceJobAsync(const Model::DescribeReduceFaceJobRequest& request, const DescribeReduceFaceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReduceFaceJobOutcomeCallable DescribeReduceFaceJobCallable(const Model::DescribeReduceFaceJobRequest& request);

                /**
                 *混元生3D接口，输入单几何模型和参考图或文字描述后，可生成对应的纹理贴图。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req DescribeTextureTo3DJobRequest
                 * @return DescribeTextureTo3DJobOutcome
                 */
                DescribeTextureTo3DJobOutcome DescribeTextureTo3DJob(const Model::DescribeTextureTo3DJobRequest &request);
                void DescribeTextureTo3DJobAsync(const Model::DescribeTextureTo3DJobRequest& request, const DescribeTextureTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTextureTo3DJobOutcomeCallable DescribeTextureTo3DJobCallable(const Model::DescribeTextureTo3DJobRequest& request);

                /**
                 *查询组件生成任务。
                 * @param req QueryHunyuan3DPartJobRequest
                 * @return QueryHunyuan3DPartJobOutcome
                 */
                QueryHunyuan3DPartJobOutcome QueryHunyuan3DPartJob(const Model::QueryHunyuan3DPartJobRequest &request);
                void QueryHunyuan3DPartJobAsync(const Model::QueryHunyuan3DPartJobRequest& request, const QueryHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuan3DPartJobOutcomeCallable QueryHunyuan3DPartJobCallable(const Model::QueryHunyuan3DPartJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供3个并发，代表最多能同时处理3个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req QueryHunyuanTo3DProJobRequest
                 * @return QueryHunyuanTo3DProJobOutcome
                 */
                QueryHunyuanTo3DProJobOutcome QueryHunyuanTo3DProJob(const Model::QueryHunyuanTo3DProJobRequest &request);
                void QueryHunyuanTo3DProJobAsync(const Model::QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DProJobOutcomeCallable QueryHunyuanTo3DProJobCallable(const Model::QueryHunyuanTo3DProJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req QueryHunyuanTo3DRapidJobRequest
                 * @return QueryHunyuanTo3DRapidJobOutcome
                 */
                QueryHunyuanTo3DRapidJobOutcome QueryHunyuanTo3DRapidJob(const Model::QueryHunyuanTo3DRapidJobRequest &request);
                void QueryHunyuanTo3DRapidJobAsync(const Model::QueryHunyuanTo3DRapidJobRequest& request, const QueryHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DRapidJobOutcomeCallable QueryHunyuanTo3DRapidJobCallable(const Model::QueryHunyuanTo3DRapidJobRequest& request);

                /**
                 *输入3D模型文件后，根据模型结构自动进行组件识别生成。
                 * @param req SubmitHunyuan3DPartJobRequest
                 * @return SubmitHunyuan3DPartJobOutcome
                 */
                SubmitHunyuan3DPartJobOutcome SubmitHunyuan3DPartJob(const Model::SubmitHunyuan3DPartJobRequest &request);
                void SubmitHunyuan3DPartJobAsync(const Model::SubmitHunyuan3DPartJobRequest& request, const SubmitHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuan3DPartJobOutcomeCallable SubmitHunyuan3DPartJobCallable(const Model::SubmitHunyuan3DPartJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供3个并发，代表最多能同时处理3个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitHunyuanTo3DProJobRequest
                 * @return SubmitHunyuanTo3DProJobOutcome
                 */
                SubmitHunyuanTo3DProJobOutcome SubmitHunyuanTo3DProJob(const Model::SubmitHunyuanTo3DProJobRequest &request);
                void SubmitHunyuanTo3DProJobAsync(const Model::SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DProJobOutcomeCallable SubmitHunyuanTo3DProJobCallable(const Model::SubmitHunyuanTo3DProJobRequest& request);

                /**
                 *混元生3D接口，基于混元大模型，根据输入的文本描述/图片智能生成3D。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitHunyuanTo3DRapidJobRequest
                 * @return SubmitHunyuanTo3DRapidJobOutcome
                 */
                SubmitHunyuanTo3DRapidJobOutcome SubmitHunyuanTo3DRapidJob(const Model::SubmitHunyuanTo3DRapidJobRequest &request);
                void SubmitHunyuanTo3DRapidJobAsync(const Model::SubmitHunyuanTo3DRapidJobRequest& request, const SubmitHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DRapidJobOutcomeCallable SubmitHunyuanTo3DRapidJobCallable(const Model::SubmitHunyuanTo3DRapidJobRequest& request);

                /**
                 *输入模型后，可根据模型纹理进行UV展开，输出对应UV贴图。
                 * @param req SubmitHunyuanTo3DUVJobRequest
                 * @return SubmitHunyuanTo3DUVJobOutcome
                 */
                SubmitHunyuanTo3DUVJobOutcome SubmitHunyuanTo3DUVJob(const Model::SubmitHunyuanTo3DUVJobRequest &request);
                void SubmitHunyuanTo3DUVJobAsync(const Model::SubmitHunyuanTo3DUVJobRequest& request, const SubmitHunyuanTo3DUVJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DUVJobOutcomeCallable SubmitHunyuanTo3DUVJobCallable(const Model::SubmitHunyuanTo3DUVJobRequest& request);

                /**
                 *混元生3D接口，采用 Polygon 1.5模型，输入3D 高模后，可生成布线规整，较低面数的3D 模型。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitReduceFaceJobRequest
                 * @return SubmitReduceFaceJobOutcome
                 */
                SubmitReduceFaceJobOutcome SubmitReduceFaceJob(const Model::SubmitReduceFaceJobRequest &request);
                void SubmitReduceFaceJobAsync(const Model::SubmitReduceFaceJobRequest& request, const SubmitReduceFaceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitReduceFaceJobOutcomeCallable SubmitReduceFaceJobCallable(const Model::SubmitReduceFaceJobRequest& request);

                /**
                 *混元生3D接口，输入单几何模型和参考图或文字描述后，可生成对应的纹理贴图。
默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后，才能开始处理下一个任务。
                 * @param req SubmitTextureTo3DJobRequest
                 * @return SubmitTextureTo3DJobOutcome
                 */
                SubmitTextureTo3DJobOutcome SubmitTextureTo3DJob(const Model::SubmitTextureTo3DJobRequest &request);
                void SubmitTextureTo3DJobAsync(const Model::SubmitTextureTo3DJobRequest& request, const SubmitTextureTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTextureTo3DJobOutcomeCallable SubmitTextureTo3DJobCallable(const Model::SubmitTextureTo3DJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_
