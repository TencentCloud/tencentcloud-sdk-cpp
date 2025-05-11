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
#include <tencentcloud/hunyuan/v20230901/model/ActivateServiceRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ActivateServiceResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatCompletionsRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatCompletionsResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatTranslationsRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatTranslationsResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/CreateThreadRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/CreateThreadResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/FilesDeletionsRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/FilesDeletionsResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/FilesListRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/FilesListResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/FilesUploadsRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/FilesUploadsResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetEmbeddingRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetEmbeddingResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetThreadRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetThreadResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageListRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageListResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GroupChatCompletionsRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GroupChatCompletionsResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/ImageQuestionRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ImageQuestionResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageChatJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageChatJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanImageJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/QueryHunyuanTo3DJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/RunThreadRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/RunThreadResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SetPayModeRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SetPayModeResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageChatJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageChatJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DJobRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DJobResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/TextToImageLiteRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/TextToImageLiteResponse.h>


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

                typedef Outcome<Core::Error, Model::ActivateServiceResponse> ActivateServiceOutcome;
                typedef std::future<ActivateServiceOutcome> ActivateServiceOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ActivateServiceRequest&, ActivateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatCompletionsResponse> ChatCompletionsOutcome;
                typedef std::future<ChatCompletionsOutcome> ChatCompletionsOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatCompletionsRequest&, ChatCompletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatCompletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatTranslationsResponse> ChatTranslationsOutcome;
                typedef std::future<ChatTranslationsOutcome> ChatTranslationsOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatTranslationsRequest&, ChatTranslationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatTranslationsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateThreadResponse> CreateThreadOutcome;
                typedef std::future<CreateThreadOutcome> CreateThreadOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::CreateThreadRequest&, CreateThreadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateThreadAsyncHandler;
                typedef Outcome<Core::Error, Model::FilesDeletionsResponse> FilesDeletionsOutcome;
                typedef std::future<FilesDeletionsOutcome> FilesDeletionsOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::FilesDeletionsRequest&, FilesDeletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FilesDeletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::FilesListResponse> FilesListOutcome;
                typedef std::future<FilesListOutcome> FilesListOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::FilesListRequest&, FilesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FilesListAsyncHandler;
                typedef Outcome<Core::Error, Model::FilesUploadsResponse> FilesUploadsOutcome;
                typedef std::future<FilesUploadsOutcome> FilesUploadsOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::FilesUploadsRequest&, FilesUploadsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FilesUploadsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmbeddingResponse> GetEmbeddingOutcome;
                typedef std::future<GetEmbeddingOutcome> GetEmbeddingOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetEmbeddingRequest&, GetEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::GetThreadResponse> GetThreadOutcome;
                typedef std::future<GetThreadOutcome> GetThreadOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetThreadRequest&, GetThreadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetThreadAsyncHandler;
                typedef Outcome<Core::Error, Model::GetThreadMessageResponse> GetThreadMessageOutcome;
                typedef std::future<GetThreadMessageOutcome> GetThreadMessageOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetThreadMessageRequest&, GetThreadMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetThreadMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::GetThreadMessageListResponse> GetThreadMessageListOutcome;
                typedef std::future<GetThreadMessageListOutcome> GetThreadMessageListOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetThreadMessageListRequest&, GetThreadMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetThreadMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTokenCountResponse> GetTokenCountOutcome;
                typedef std::future<GetTokenCountOutcome> GetTokenCountOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetTokenCountRequest&, GetTokenCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupChatCompletionsResponse> GroupChatCompletionsOutcome;
                typedef std::future<GroupChatCompletionsOutcome> GroupChatCompletionsOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GroupChatCompletionsRequest&, GroupChatCompletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupChatCompletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageQuestionResponse> ImageQuestionOutcome;
                typedef std::future<ImageQuestionOutcome> ImageQuestionOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ImageQuestionRequest&, ImageQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanImageChatJobResponse> QueryHunyuanImageChatJobOutcome;
                typedef std::future<QueryHunyuanImageChatJobOutcome> QueryHunyuanImageChatJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuanImageChatJobRequest&, QueryHunyuanImageChatJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanImageChatJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanImageJobResponse> QueryHunyuanImageJobOutcome;
                typedef std::future<QueryHunyuanImageJobOutcome> QueryHunyuanImageJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuanImageJobRequest&, QueryHunyuanImageJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanImageJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DJobResponse> QueryHunyuanTo3DJobOutcome;
                typedef std::future<QueryHunyuanTo3DJobOutcome> QueryHunyuanTo3DJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::QueryHunyuanTo3DJobRequest&, QueryHunyuanTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RunThreadResponse> RunThreadOutcome;
                typedef std::future<RunThreadOutcome> RunThreadOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::RunThreadRequest&, RunThreadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunThreadAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPayModeResponse> SetPayModeOutcome;
                typedef std::future<SetPayModeOutcome> SetPayModeOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SetPayModeRequest&, SetPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanImageChatJobResponse> SubmitHunyuanImageChatJobOutcome;
                typedef std::future<SubmitHunyuanImageChatJobOutcome> SubmitHunyuanImageChatJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuanImageChatJobRequest&, SubmitHunyuanImageChatJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanImageChatJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanImageJobResponse> SubmitHunyuanImageJobOutcome;
                typedef std::future<SubmitHunyuanImageJobOutcome> SubmitHunyuanImageJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuanImageJobRequest&, SubmitHunyuanImageJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanImageJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DJobResponse> SubmitHunyuanTo3DJobOutcome;
                typedef std::future<SubmitHunyuanTo3DJobOutcome> SubmitHunyuanTo3DJobOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::SubmitHunyuanTo3DJobRequest&, SubmitHunyuanTo3DJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DJobAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToImageLiteResponse> TextToImageLiteOutcome;
                typedef std::future<TextToImageLiteOutcome> TextToImageLiteOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::TextToImageLiteRequest&, TextToImageLiteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToImageLiteAsyncHandler;



                /**
                 *开通服务
                 * @param req ActivateServiceRequest
                 * @return ActivateServiceOutcome
                 */
                ActivateServiceOutcome ActivateService(const Model::ActivateServiceRequest &request);
                void ActivateServiceAsync(const Model::ActivateServiceRequest& request, const ActivateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateServiceOutcomeCallable ActivateServiceCallable(const Model::ActivateServiceRequest& request);

                /**
                 *如需使用OpenAI兼容接口， 请参考文档：[OpenAI 兼容接口](https://cloud.tencent.com/document/product/1729/111007)

腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req ChatCompletionsRequest
                 * @return ChatCompletionsOutcome
                 */
                ChatCompletionsOutcome ChatCompletions(const Model::ChatCompletionsRequest &request);
                void ChatCompletionsAsync(const Model::ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionsOutcomeCallable ChatCompletionsCallable(const Model::ChatCompletionsRequest& request);

                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req ChatTranslationsRequest
                 * @return ChatTranslationsOutcome
                 */
                ChatTranslationsOutcome ChatTranslations(const Model::ChatTranslationsRequest &request);
                void ChatTranslationsAsync(const Model::ChatTranslationsRequest& request, const ChatTranslationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatTranslationsOutcomeCallable ChatTranslationsCallable(const Model::ChatTranslationsRequest& request);

                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req CreateThreadRequest
                 * @return CreateThreadOutcome
                 */
                CreateThreadOutcome CreateThread(const Model::CreateThreadRequest &request);
                void CreateThreadAsync(const Model::CreateThreadRequest& request, const CreateThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateThreadOutcomeCallable CreateThreadCallable(const Model::CreateThreadRequest& request);

                /**
                 *删除文件。
                 * @param req FilesDeletionsRequest
                 * @return FilesDeletionsOutcome
                 */
                FilesDeletionsOutcome FilesDeletions(const Model::FilesDeletionsRequest &request);
                void FilesDeletionsAsync(const Model::FilesDeletionsRequest& request, const FilesDeletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FilesDeletionsOutcomeCallable FilesDeletionsCallable(const Model::FilesDeletionsRequest& request);

                /**
                 *文件列表。
                 * @param req FilesListRequest
                 * @return FilesListOutcome
                 */
                FilesListOutcome FilesList(const Model::FilesListRequest &request);
                void FilesListAsync(const Model::FilesListRequest& request, const FilesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FilesListOutcomeCallable FilesListCallable(const Model::FilesListRequest& request);

                /**
                 *上传用于不同用途的文件。
当前用途仅支持 hunyuan 等模型的文档理解。
                 * @param req FilesUploadsRequest
                 * @return FilesUploadsOutcome
                 */
                FilesUploadsOutcome FilesUploads(const Model::FilesUploadsRequest &request);
                void FilesUploadsAsync(const Model::FilesUploadsRequest& request, const FilesUploadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FilesUploadsOutcomeCallable FilesUploadsCallable(const Model::FilesUploadsRequest& request);

                /**
                 *腾讯混元 Embedding 接口，可以将文本转化为高质量的向量数据。向量维度为1024维。
                 * @param req GetEmbeddingRequest
                 * @return GetEmbeddingOutcome
                 */
                GetEmbeddingOutcome GetEmbedding(const Model::GetEmbeddingRequest &request);
                void GetEmbeddingAsync(const Model::GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmbeddingOutcomeCallable GetEmbeddingCallable(const Model::GetEmbeddingRequest& request);

                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req GetThreadRequest
                 * @return GetThreadOutcome
                 */
                GetThreadOutcome GetThread(const Model::GetThreadRequest &request);
                void GetThreadAsync(const Model::GetThreadRequest& request, const GetThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetThreadOutcomeCallable GetThreadCallable(const Model::GetThreadRequest& request);

                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req GetThreadMessageRequest
                 * @return GetThreadMessageOutcome
                 */
                GetThreadMessageOutcome GetThreadMessage(const Model::GetThreadMessageRequest &request);
                void GetThreadMessageAsync(const Model::GetThreadMessageRequest& request, const GetThreadMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetThreadMessageOutcomeCallable GetThreadMessageCallable(const Model::GetThreadMessageRequest& request);

                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req GetThreadMessageListRequest
                 * @return GetThreadMessageListOutcome
                 */
                GetThreadMessageListOutcome GetThreadMessageList(const Model::GetThreadMessageListRequest &request);
                void GetThreadMessageListAsync(const Model::GetThreadMessageListRequest& request, const GetThreadMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetThreadMessageListOutcomeCallable GetThreadMessageListCallable(const Model::GetThreadMessageListRequest& request);

                /**
                 *该接口用于计算文本对应Token数、字符数。
                 * @param req GetTokenCountRequest
                 * @return GetTokenCountOutcome
                 */
                GetTokenCountOutcome GetTokenCount(const Model::GetTokenCountRequest &request);
                void GetTokenCountAsync(const Model::GetTokenCountRequest& request, const GetTokenCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTokenCountOutcomeCallable GetTokenCountCallable(const Model::GetTokenCountRequest& request);

                /**
                 *如需使用OpenAI兼容接口， 请参考文档：[OpenAI 兼容接口](https://cloud.tencent.com/document/product/1729/111007)

腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req GroupChatCompletionsRequest
                 * @return GroupChatCompletionsOutcome
                 */
                GroupChatCompletionsOutcome GroupChatCompletions(const Model::GroupChatCompletionsRequest &request);
                void GroupChatCompletionsAsync(const Model::GroupChatCompletionsRequest& request, const GroupChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupChatCompletionsOutcomeCallable GroupChatCompletionsCallable(const Model::GroupChatCompletionsRequest& request);

                /**
                 *如需使用OpenAI兼容接口， 请参考文档：[OpenAI 兼容接口](https://cloud.tencent.com/document/product/1729/111007)

腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req ImageQuestionRequest
                 * @return ImageQuestionOutcome
                 */
                ImageQuestionOutcome ImageQuestion(const Model::ImageQuestionRequest &request);
                void ImageQuestionAsync(const Model::ImageQuestionRequest& request, const ImageQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageQuestionOutcomeCallable ImageQuestionCallable(const Model::ImageQuestionRequest& request);

                /**
                 *混元生图（多轮对话）接口基于混元大模型，将根据输入的文本描述生成图像，支持通过多轮对话的方式不断调整图像内容。分为提交任务和查询任务2个接口。
提交任务：输入文本和前置对话 ID 等，提交一个混元生图多轮对话异步任务，获得任务 ID。
查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得在上一轮对话基础上继续生成的图像结果。
混元生图（多轮对话）默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req QueryHunyuanImageChatJobRequest
                 * @return QueryHunyuanImageChatJobOutcome
                 */
                QueryHunyuanImageChatJobOutcome QueryHunyuanImageChatJob(const Model::QueryHunyuanImageChatJobRequest &request);
                void QueryHunyuanImageChatJobAsync(const Model::QueryHunyuanImageChatJobRequest& request, const QueryHunyuanImageChatJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanImageChatJobOutcomeCallable QueryHunyuanImageChatJobCallable(const Model::QueryHunyuanImageChatJobRequest& request);

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
                 *查询混元生3D任务
                 * @param req QueryHunyuanTo3DJobRequest
                 * @return QueryHunyuanTo3DJobOutcome
                 */
                QueryHunyuanTo3DJobOutcome QueryHunyuanTo3DJob(const Model::QueryHunyuanTo3DJobRequest &request);
                void QueryHunyuanTo3DJobAsync(const Model::QueryHunyuanTo3DJobRequest& request, const QueryHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DJobOutcomeCallable QueryHunyuanTo3DJobCallable(const Model::QueryHunyuanTo3DJobRequest& request);

                /**
                 *腾讯混元大模型是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口支持流式或非流式调用，当使用流式调用时为 SSE 协议。

 1. 本接口暂不支持返回图片内容。
 2. 默认该接口下单账号限制并发数为  5 路，如您有提高并发限制的需求请 [购买](https://buy.cloud.tencent.com/hunyuan) 。
 3. 请使用 SDK 调用本接口，每种开发语言的 SDK Git 仓库 examples/hunyuan/v20230901/ 目录下有提供示例供参考。SDK 链接在文档下方 “**开发者资源 - SDK**” 部分提供。
 4. 我们推荐您使用 API Explorer，方便快速地在线调试接口和下载各语言的示例代码，[点击打开](https://console.cloud.tencent.com/api/explorer?Product=hunyuan&Version=2023-09-01&Action=ChatCompletions)。
                 * @param req RunThreadRequest
                 * @return RunThreadOutcome
                 */
                RunThreadOutcome RunThread(const Model::RunThreadRequest &request);
                void RunThreadAsync(const Model::RunThreadRequest& request, const RunThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunThreadOutcomeCallable RunThreadCallable(const Model::RunThreadRequest& request);

                /**
                 *设置付费模式
                 * @param req SetPayModeRequest
                 * @return SetPayModeOutcome
                 */
                SetPayModeOutcome SetPayMode(const Model::SetPayModeRequest &request);
                void SetPayModeAsync(const Model::SetPayModeRequest& request, const SetPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPayModeOutcomeCallable SetPayModeCallable(const Model::SetPayModeRequest& request);

                /**
                 *混元生图（多轮对话）接口基于混元大模型，将根据输入的文本描述生成图像，支持通过多轮对话的方式不断调整图像内容。分为提交任务和查询任务2个接口。
提交任务：输入文本和前置对话 ID 等，提交一个混元生图多轮对话异步任务，获得任务 ID。
查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得在上一轮对话基础上继续生成的图像结果。
混元生图（多轮对话）默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req SubmitHunyuanImageChatJobRequest
                 * @return SubmitHunyuanImageChatJobOutcome
                 */
                SubmitHunyuanImageChatJobOutcome SubmitHunyuanImageChatJob(const Model::SubmitHunyuanImageChatJobRequest &request);
                void SubmitHunyuanImageChatJobAsync(const Model::SubmitHunyuanImageChatJobRequest& request, const SubmitHunyuanImageChatJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanImageChatJobOutcomeCallable SubmitHunyuanImageChatJobCallable(const Model::SubmitHunyuanImageChatJobRequest& request);

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

                /**
                 *提交混元生3D任务
                 * @param req SubmitHunyuanTo3DJobRequest
                 * @return SubmitHunyuanTo3DJobOutcome
                 */
                SubmitHunyuanTo3DJobOutcome SubmitHunyuanTo3DJob(const Model::SubmitHunyuanTo3DJobRequest &request);
                void SubmitHunyuanTo3DJobAsync(const Model::SubmitHunyuanTo3DJobRequest& request, const SubmitHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DJobOutcomeCallable SubmitHunyuanTo3DJobCallable(const Model::SubmitHunyuanTo3DJobRequest& request);

                /**
                 *文生图轻量版接口根据输入的文本描述，智能生成与之相关的结果图。
文生图轻量版默认提供3个并发任务数，代表最多能同时处理3个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req TextToImageLiteRequest
                 * @return TextToImageLiteOutcome
                 */
                TextToImageLiteOutcome TextToImageLite(const Model::TextToImageLiteRequest &request);
                void TextToImageLiteAsync(const Model::TextToImageLiteRequest& request, const TextToImageLiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToImageLiteOutcomeCallable TextToImageLiteCallable(const Model::TextToImageLiteRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
