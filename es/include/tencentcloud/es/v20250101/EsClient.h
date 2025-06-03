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

#ifndef TENCENTCLOUD_ES_V20250101_ESCLIENT_H_
#define TENCENTCLOUD_ES_V20250101_ESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/es/v20250101/model/ChatCompletionsRequest.h>
#include <tencentcloud/es/v20250101/model/ChatCompletionsResponse.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentRequest.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentResponse.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentAsyncRequest.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentAsyncResponse.h>
#include <tencentcloud/es/v20250101/model/GetDocumentChunkResultRequest.h>
#include <tencentcloud/es/v20250101/model/GetDocumentChunkResultResponse.h>
#include <tencentcloud/es/v20250101/model/GetDocumentParseResultRequest.h>
#include <tencentcloud/es/v20250101/model/GetDocumentParseResultResponse.h>
#include <tencentcloud/es/v20250101/model/GetTextEmbeddingRequest.h>
#include <tencentcloud/es/v20250101/model/GetTextEmbeddingResponse.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentRequest.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentResponse.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentAsyncRequest.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentAsyncResponse.h>
#include <tencentcloud/es/v20250101/model/RunRerankRequest.h>
#include <tencentcloud/es/v20250101/model/RunRerankResponse.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            class EsClient : public AbstractClient
            {
            public:
                EsClient(const Credential &credential, const std::string &region);
                EsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChatCompletionsResponse> ChatCompletionsOutcome;
                typedef std::future<ChatCompletionsOutcome> ChatCompletionsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ChatCompletionsRequest&, ChatCompletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatCompletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChunkDocumentResponse> ChunkDocumentOutcome;
                typedef std::future<ChunkDocumentOutcome> ChunkDocumentOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ChunkDocumentRequest&, ChunkDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChunkDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::ChunkDocumentAsyncResponse> ChunkDocumentAsyncOutcome;
                typedef std::future<ChunkDocumentAsyncOutcome> ChunkDocumentAsyncOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ChunkDocumentAsyncRequest&, ChunkDocumentAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChunkDocumentAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocumentChunkResultResponse> GetDocumentChunkResultOutcome;
                typedef std::future<GetDocumentChunkResultOutcome> GetDocumentChunkResultOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetDocumentChunkResultRequest&, GetDocumentChunkResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocumentChunkResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocumentParseResultResponse> GetDocumentParseResultOutcome;
                typedef std::future<GetDocumentParseResultOutcome> GetDocumentParseResultOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetDocumentParseResultRequest&, GetDocumentParseResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocumentParseResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTextEmbeddingResponse> GetTextEmbeddingOutcome;
                typedef std::future<GetTextEmbeddingOutcome> GetTextEmbeddingOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetTextEmbeddingRequest&, GetTextEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTextEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseDocumentResponse> ParseDocumentOutcome;
                typedef std::future<ParseDocumentOutcome> ParseDocumentOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ParseDocumentRequest&, ParseDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseDocumentAsyncResponse> ParseDocumentAsyncOutcome;
                typedef std::future<ParseDocumentAsyncOutcome> ParseDocumentAsyncOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ParseDocumentAsyncRequest&, ParseDocumentAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseDocumentAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::RunRerankResponse> RunRerankOutcome;
                typedef std::future<RunRerankOutcome> RunRerankOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RunRerankRequest&, RunRerankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunRerankAsyncHandler;



                /**
                 *本服务支持一系列高性能的大语言模型，包括DeepSeek以及腾讯自主研发的混元大模型，结合混合搜索等先进搜索技术，快速高效实现RAG，有效解决幻觉和知识更新问题。
本接口有单账号调用上限控制，如您有提高并发限制的需求请[联系我们](https://cloud.tencent.com/act/event/Online_service)  。
                 * @param req ChatCompletionsRequest
                 * @return ChatCompletionsOutcome
                 */
                ChatCompletionsOutcome ChatCompletions(const Model::ChatCompletionsRequest &request);
                void ChatCompletionsAsync(const Model::ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionsOutcomeCallable ChatCompletionsCallable(const Model::ChatCompletionsRequest& request);

                /**
                 *文本切片是将长文本分割为短片段的技术，用于适配模型输入、提升处理效率或信息检索，平衡片段长度与语义连贯性，适用于NLP、数据分析等场景。
本接口为分隔符规则切片接口，有单账号调用上限控制，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service)  。
                 * @param req ChunkDocumentRequest
                 * @return ChunkDocumentOutcome
                 */
                ChunkDocumentOutcome ChunkDocument(const Model::ChunkDocumentRequest &request);
                void ChunkDocumentAsync(const Model::ChunkDocumentRequest& request, const ChunkDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChunkDocumentOutcomeCallable ChunkDocumentCallable(const Model::ChunkDocumentRequest& request);

                /**
                 *文本切片是将长文本分割为短片段的技术，用于适配模型输入、提升处理效率或信息检索，平衡片段长度与语义连贯性，适用于NLP、数据分析等场景。
本接口为异步接口，有单账号调用上限控制，如您有提高并发限制的需求请[联系我们](https://cloud.tencent.com/act/event/Online_service) 。
                 * @param req ChunkDocumentAsyncRequest
                 * @return ChunkDocumentAsyncOutcome
                 */
                ChunkDocumentAsyncOutcome ChunkDocumentAsync(const Model::ChunkDocumentAsyncRequest &request);
                void ChunkDocumentAsyncAsync(const Model::ChunkDocumentAsyncRequest& request, const ChunkDocumentAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChunkDocumentAsyncOutcomeCallable ChunkDocumentAsyncCallable(const Model::ChunkDocumentAsyncRequest& request);

                /**
                 *获取文档切片结果
                 * @param req GetDocumentChunkResultRequest
                 * @return GetDocumentChunkResultOutcome
                 */
                GetDocumentChunkResultOutcome GetDocumentChunkResult(const Model::GetDocumentChunkResultRequest &request);
                void GetDocumentChunkResultAsync(const Model::GetDocumentChunkResultRequest& request, const GetDocumentChunkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDocumentChunkResultOutcomeCallable GetDocumentChunkResultCallable(const Model::GetDocumentChunkResultRequest& request);

                /**
                 *本接口用于获取文档解析异步处理结果。
                 * @param req GetDocumentParseResultRequest
                 * @return GetDocumentParseResultOutcome
                 */
                GetDocumentParseResultOutcome GetDocumentParseResult(const Model::GetDocumentParseResultRequest &request);
                void GetDocumentParseResultAsync(const Model::GetDocumentParseResultRequest& request, const GetDocumentParseResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDocumentParseResultOutcomeCallable GetDocumentParseResultCallable(const Model::GetDocumentParseResultRequest& request);

                /**
                 *Embedding是一种将高维数据映射到低维空间的技术，通常用于将非结构化数据，如文本、图像或音频转化为向量表示，使其更容易输入机器模型进行处理，并且向量之间的距离可以反映对象之间的相似性。
本接口有单账号调用上限控制，如您有提高并发限制的需求请[联系我们](https://cloud.tencent.com/act/event/Online_service)  。
                 * @param req GetTextEmbeddingRequest
                 * @return GetTextEmbeddingOutcome
                 */
                GetTextEmbeddingOutcome GetTextEmbedding(const Model::GetTextEmbeddingRequest &request);
                void GetTextEmbeddingAsync(const Model::GetTextEmbeddingRequest& request, const GetTextEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTextEmbeddingOutcomeCallable GetTextEmbeddingCallable(const Model::GetTextEmbeddingRequest& request);

                /**
                 *本服务可将各类格式文档精准转换为标准格式，满足企业知识库建设、技术文档迁移、内容平台结构化存储等需求。
本接口有单账号调用上限控制，如您有提高并发限制的需求请[联系我们](https://cloud.tencent.com/act/event/Online_service)。
                 * @param req ParseDocumentRequest
                 * @return ParseDocumentOutcome
                 */
                ParseDocumentOutcome ParseDocument(const Model::ParseDocumentRequest &request);
                void ParseDocumentAsync(const Model::ParseDocumentRequest& request, const ParseDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseDocumentOutcomeCallable ParseDocumentCallable(const Model::ParseDocumentRequest& request);

                /**
                 *本服务可将各类格式文档精准转换为标准格式，满足企业知识库建设、技术文档迁移、内容平台结构化存储等需求。
本接口为异步接口，有单账号调用上限控制，如您有提高并发限制的需求请[联系我们](https://cloud.tencent.com/act/event/Online_service)  。
                 * @param req ParseDocumentAsyncRequest
                 * @return ParseDocumentAsyncOutcome
                 */
                ParseDocumentAsyncOutcome ParseDocumentAsync(const Model::ParseDocumentAsyncRequest &request);
                void ParseDocumentAsyncAsync(const Model::ParseDocumentAsyncRequest& request, const ParseDocumentAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseDocumentAsyncOutcomeCallable ParseDocumentAsyncCallable(const Model::ParseDocumentAsyncRequest& request);

                /**
                 *重排是指在 RAG 过程中，通过评估文档与查询之间的相关性，将最相关的文档放在前面，确保语言模型在生成回答时优先考虑排名靠前的上下文，提高生成结果的准确性和可信度，也可以通过这种方式进行过滤，减少大模型成本。
本接口有单账号调用上限控制，如您有提高并发限制的需求请[联系我们](https://cloud.tencent.com/act/event/Online_service)  。
                 * @param req RunRerankRequest
                 * @return RunRerankOutcome
                 */
                RunRerankOutcome RunRerank(const Model::RunRerankRequest &request);
                void RunRerankAsync(const Model::RunRerankRequest& request, const RunRerankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunRerankOutcomeCallable RunRerankCallable(const Model::RunRerankRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_ESCLIENT_H_
