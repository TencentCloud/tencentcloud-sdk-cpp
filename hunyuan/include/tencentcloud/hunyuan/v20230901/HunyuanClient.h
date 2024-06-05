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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatCompletionsRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatCompletionsResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatProRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatProResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatStdRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatStdResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetEmbeddingRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetEmbeddingResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobResponse.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            class HunyuanClient : public AbstractClient
            {
            public:
                HunyuanClient(const Credential &credential, const std::string &region);
                HunyuanClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChatCompletionsResponse> ChatCompletionsOutcome;
                typedef std::future<ChatCompletionsOutcome> ChatCompletionsOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatCompletionsRequest&, ChatCompletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatCompletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatProResponse> ChatProOutcome;
                typedef std::future<ChatProOutcome> ChatProOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatProRequest&, ChatProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatProAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatStdResponse> ChatStdOutcome;
                typedef std::future<ChatStdOutcome> ChatStdOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatStdRequest&, ChatStdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatStdAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmbeddingResponse> GetEmbeddingOutcome;
                typedef std::future<GetEmbeddingOutcome> GetEmbeddingOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetEmbeddingRequest&, GetEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTokenCountResponse> GetTokenCountOutcome;
                typedef std::future<GetTokenCountOutcome> GetTokenCountOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetTokenCountRequest&, GetTokenCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenCountAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanImageJobResponse> QueryHunyuanImageJobOutcome;
                typedef std::future<QueryHunyuanImageJobOutcome> QueryHunyuanImageJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuanImageJobRequest&, QueryHunyuanImageJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanImageJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanImageJobResponse> SubmitHunyuanImageJobOutcome;
                typedef std::future<SubmitHunyuanImageJobOutcome> SubmitHunyuanImageJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuanImageJobRequest&, SubmitHunyuanImageJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanImageJobAsyncHandler;



                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认每种模型单账号限制并发数为 5 路，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req ChatCompletionsRequest
                 * @return ChatCompletionsOutcome
                 */
                ChatCompletionsOutcome ChatCompletions(const Model::ChatCompletionsRequest &request);
                void ChatCompletionsAsync(const Model::ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionsOutcomeCallable ChatCompletionsCallable(const Model::ChatCompletionsRequest& request);

                /**
                 *<span style="font-size:1.5em;">注意：本接口将于 5 月 15 日下线；下线后将不再提供文档指引，接口本身可继续调用，建议使用 [hunyuan](https://cloud.tencent.com/document/api/1729/105701) 接入。</span>

腾讯混元大模型（hunyuan-pro）是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认单账号限制并发数为 5 路，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
                 * @param req ChatProRequest
                 * @return ChatProOutcome
                 */
                ChatProOutcome ChatPro(const Model::ChatProRequest &request);
                void ChatProAsync(const Model::ChatProRequest& request, const ChatProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatProOutcomeCallable ChatProCallable(const Model::ChatProRequest& request);

                /**
                 *<span style="font-size:1.5em;">注意：本接口将于 5 月 15 日下线；下线后将不再提供文档指引，接口本身可继续调用，建议使用 [hunyuan](https://cloud.tencent.com/document/api/1729/105701) 接入。</span>

腾讯混元大模型（hunyuan-standard）是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认单账号限制并发数为 5 路，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
                 * @param req ChatStdRequest
                 * @return ChatStdOutcome
                 */
                ChatStdOutcome ChatStd(const Model::ChatStdRequest &request);
                void ChatStdAsync(const Model::ChatStdRequest& request, const ChatStdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatStdOutcomeCallable ChatStdCallable(const Model::ChatStdRequest& request);

                /**
                 *腾讯混元 Embedding 接口，可以将文本转化为高质量的向量数据。
                 * @param req GetEmbeddingRequest
                 * @return GetEmbeddingOutcome
                 */
                GetEmbeddingOutcome GetEmbedding(const Model::GetEmbeddingRequest &request);
                void GetEmbeddingAsync(const Model::GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmbeddingOutcomeCallable GetEmbeddingCallable(const Model::GetEmbeddingRequest& request);

                /**
                 *该接口用于计算文本对应Token数、字符数。
                 * @param req GetTokenCountRequest
                 * @return GetTokenCountOutcome
                 */
                GetTokenCountOutcome GetTokenCount(const Model::GetTokenCountRequest &request);
                void GetTokenCountAsync(const Model::GetTokenCountRequest& request, const GetTokenCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTokenCountOutcomeCallable GetTokenCountCallable(const Model::GetTokenCountRequest& request);

                /**
                 *混元生图接口基于混元大模型，将根据输入的文本描述，智能生成与之相关的结果图。分为提交任务和查询任务2个接口。
提交任务：输入文本等，提交一个混元生图异步任务，获得任务 ID。
查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。
并发任务数（并发）说明：并发任务数指能同时处理的任务数量。混元生图默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req QueryHunyuanImageJobRequest
                 * @return QueryHunyuanImageJobOutcome
                 */
                QueryHunyuanImageJobOutcome QueryHunyuanImageJob(const Model::QueryHunyuanImageJobRequest &request);
                void QueryHunyuanImageJobAsync(const Model::QueryHunyuanImageJobRequest& request, const QueryHunyuanImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanImageJobOutcomeCallable QueryHunyuanImageJobCallable(const Model::QueryHunyuanImageJobRequest& request);

                /**
                 *混元生图接口基于混元大模型，将根据输入的文本描述，智能生成与之相关的结果图。分为提交任务和查询任务2个接口。
提交任务：输入文本等，提交一个混元生图异步任务，获得任务 ID。
查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。
并发任务数（并发）说明：并发任务数指能同时处理的任务数量。混元生图默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req SubmitHunyuanImageJobRequest
                 * @return SubmitHunyuanImageJobOutcome
                 */
                SubmitHunyuanImageJobOutcome SubmitHunyuanImageJob(const Model::SubmitHunyuanImageJobRequest &request);
                void SubmitHunyuanImageJobAsync(const Model::SubmitHunyuanImageJobRequest& request, const SubmitHunyuanImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanImageJobOutcomeCallable SubmitHunyuanImageJobCallable(const Model::SubmitHunyuanImageJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
