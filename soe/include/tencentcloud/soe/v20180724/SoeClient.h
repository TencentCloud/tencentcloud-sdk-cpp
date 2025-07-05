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

#ifndef TENCENTCLOUD_SOE_V20180724_SOECLIENT_H_
#define TENCENTCLOUD_SOE_V20180724_SOECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/soe/v20180724/model/InitOralProcessRequest.h>
#include <tencentcloud/soe/v20180724/model/InitOralProcessResponse.h>
#include <tencentcloud/soe/v20180724/model/KeywordEvaluateRequest.h>
#include <tencentcloud/soe/v20180724/model/KeywordEvaluateResponse.h>
#include <tencentcloud/soe/v20180724/model/TransmitOralProcessRequest.h>
#include <tencentcloud/soe/v20180724/model/TransmitOralProcessResponse.h>
#include <tencentcloud/soe/v20180724/model/TransmitOralProcessWithInitRequest.h>
#include <tencentcloud/soe/v20180724/model/TransmitOralProcessWithInitResponse.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            class SoeClient : public AbstractClient
            {
            public:
                SoeClient(const Credential &credential, const std::string &region);
                SoeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::InitOralProcessResponse> InitOralProcessOutcome;
                typedef std::future<InitOralProcessOutcome> InitOralProcessOutcomeCallable;
                typedef std::function<void(const SoeClient*, const Model::InitOralProcessRequest&, InitOralProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitOralProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::KeywordEvaluateResponse> KeywordEvaluateOutcome;
                typedef std::future<KeywordEvaluateOutcome> KeywordEvaluateOutcomeCallable;
                typedef std::function<void(const SoeClient*, const Model::KeywordEvaluateRequest&, KeywordEvaluateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KeywordEvaluateAsyncHandler;
                typedef Outcome<Core::Error, Model::TransmitOralProcessResponse> TransmitOralProcessOutcome;
                typedef std::future<TransmitOralProcessOutcome> TransmitOralProcessOutcomeCallable;
                typedef std::function<void(const SoeClient*, const Model::TransmitOralProcessRequest&, TransmitOralProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransmitOralProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::TransmitOralProcessWithInitResponse> TransmitOralProcessWithInitOutcome;
                typedef std::future<TransmitOralProcessWithInitOutcome> TransmitOralProcessWithInitOutcomeCallable;
                typedef std::function<void(const SoeClient*, const Model::TransmitOralProcessWithInitRequest&, TransmitOralProcessWithInitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransmitOralProcessWithInitAsyncHandler;



                /**
                 *初始化发音评估过程，每一轮评估前进行调用。语音输入模式分为流式模式和非流式模式，流式模式支持数据分片传输，可以加快评估响应速度。评估模式分为词模式和句子模式，词模式会标注每个音节的详细信息；句子模式会有完整度和流利度的评估。
                 * @param req InitOralProcessRequest
                 * @return InitOralProcessOutcome
                 */
                InitOralProcessOutcome InitOralProcess(const Model::InitOralProcessRequest &request);
                void InitOralProcessAsync(const Model::InitOralProcessRequest& request, const InitOralProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitOralProcessOutcomeCallable InitOralProcessCallable(const Model::InitOralProcessRequest& request);

                /**
                 *指定主题关键词词汇评估，分析语音与关键词的切合程度，可指定多个关键词，支持中文英文同时评测。分片传输时，尽量保证纯异步调用，即不等待上一个分片的传输结果边录边传，这样可以尽可能早的提供音频数据。音频源目前仅支持16k采样率16bit单声道编码方式，如有不一致可能导致评估不准确或失败。
                 * @param req KeywordEvaluateRequest
                 * @return KeywordEvaluateOutcome
                 */
                KeywordEvaluateOutcome KeywordEvaluate(const Model::KeywordEvaluateRequest &request);
                void KeywordEvaluateAsync(const Model::KeywordEvaluateRequest& request, const KeywordEvaluateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KeywordEvaluateOutcomeCallable KeywordEvaluateCallable(const Model::KeywordEvaluateRequest& request);

                /**
                 *本接口可用于中英文发音评测数据传输。在使用本接口时需要注意：传输音频数据，必须在完成发音评估初始化接口之后调用，且SessonId要与初始化接口保持一致。分片传输时，尽量保证SeqId顺序传输（请确认SeqId由1开始）。音频源目前仅支持16k采样率16bit单声道编码方式，如有不一致可能导致评估不准确或失败。
                 * @param req TransmitOralProcessRequest
                 * @return TransmitOralProcessOutcome
                 */
                TransmitOralProcessOutcome TransmitOralProcess(const Model::TransmitOralProcessRequest &request);
                void TransmitOralProcessAsync(const Model::TransmitOralProcessRequest& request, const TransmitOralProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransmitOralProcessOutcomeCallable TransmitOralProcessCallable(const Model::TransmitOralProcessRequest& request);

                /**
                 *本接口可用于中英文发音评测。在使用本接口时需要注意：初始化并传输音频数据，分片传输时，尽量保证SeqId顺序传输（请确认SeqId由1开始）。音频源目前仅支持16k采样率16bit单声道编码方式，如有不一致可能导致评估不准确或失败。
                 * @param req TransmitOralProcessWithInitRequest
                 * @return TransmitOralProcessWithInitOutcome
                 */
                TransmitOralProcessWithInitOutcome TransmitOralProcessWithInit(const Model::TransmitOralProcessWithInitRequest &request);
                void TransmitOralProcessWithInitAsync(const Model::TransmitOralProcessWithInitRequest& request, const TransmitOralProcessWithInitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransmitOralProcessWithInitOutcomeCallable TransmitOralProcessWithInitCallable(const Model::TransmitOralProcessWithInitRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_SOECLIENT_H_
