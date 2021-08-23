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

#ifndef TENCENTCLOUD_AAI_V20180522_AAICLIENT_H_
#define TENCENTCLOUD_AAI_V20180522_AAICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/aai/v20180522/model/ChatRequest.h>
#include <tencentcloud/aai/v20180522/model/ChatResponse.h>
#include <tencentcloud/aai/v20180522/model/SentenceRecognitionRequest.h>
#include <tencentcloud/aai/v20180522/model/SentenceRecognitionResponse.h>
#include <tencentcloud/aai/v20180522/model/SimultaneousInterpretingRequest.h>
#include <tencentcloud/aai/v20180522/model/SimultaneousInterpretingResponse.h>
#include <tencentcloud/aai/v20180522/model/TextToVoiceRequest.h>
#include <tencentcloud/aai/v20180522/model/TextToVoiceResponse.h>


namespace TencentCloud
{
    namespace Aai
    {
        namespace V20180522
        {
            class AaiClient : public AbstractClient
            {
            public:
                AaiClient(const Credential &credential, const std::string &region);
                AaiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChatResponse> ChatOutcome;
                typedef std::future<ChatOutcome> ChatOutcomeCallable;
                typedef std::function<void(const AaiClient*, const Model::ChatRequest&, ChatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatAsyncHandler;
                typedef Outcome<Core::Error, Model::SentenceRecognitionResponse> SentenceRecognitionOutcome;
                typedef std::future<SentenceRecognitionOutcome> SentenceRecognitionOutcomeCallable;
                typedef std::function<void(const AaiClient*, const Model::SentenceRecognitionRequest&, SentenceRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentenceRecognitionAsyncHandler;
                typedef Outcome<Core::Error, Model::SimultaneousInterpretingResponse> SimultaneousInterpretingOutcome;
                typedef std::future<SimultaneousInterpretingOutcome> SimultaneousInterpretingOutcomeCallable;
                typedef std::function<void(const AaiClient*, const Model::SimultaneousInterpretingRequest&, SimultaneousInterpretingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SimultaneousInterpretingAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToVoiceResponse> TextToVoiceOutcome;
                typedef std::future<TextToVoiceOutcome> TextToVoiceOutcomeCallable;
                typedef std::function<void(const AaiClient*, const Model::TextToVoiceRequest&, TextToVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToVoiceAsyncHandler;



                /**
                 *提供基于文本的基础聊天能力，可以让您的应用快速拥有具备深度语义理解的机器聊天功能。
                 * @param req ChatRequest
                 * @return ChatOutcome
                 */
                ChatOutcome Chat(const Model::ChatRequest &request);
                void ChatAsync(const Model::ChatRequest& request, const ChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatOutcomeCallable ChatCallable(const Model::ChatRequest& request);

                /**
                 *识别60s内的短语音，当音频放在请求body中传输时整个请求大小不能超过600KB，当音频以url方式传输时，音频时长不可超过60s。所有请求参数放在post的body中采用x-www-form-urlencoded（数据转换成一个字符串（name1=value1&name2=value2…）进行urlencode后）编码传输。现暂只支持中文普通话识别，支持识别8k(16k)的16bit的mp3或者wav音频。
                 * @param req SentenceRecognitionRequest
                 * @return SentenceRecognitionOutcome
                 */
                SentenceRecognitionOutcome SentenceRecognition(const Model::SentenceRecognitionRequest &request);
                void SentenceRecognitionAsync(const Model::SentenceRecognitionRequest& request, const SentenceRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentenceRecognitionOutcomeCallable SentenceRecognitionCallable(const Model::SentenceRecognitionRequest& request);

                /**
                 *该接口是实时流式识别，可同时返回语音识别文本及翻译文本，当前仅支持中文和英文。该接口可配合同传windows客户端，提供会议现场同传服务。
                 * @param req SimultaneousInterpretingRequest
                 * @return SimultaneousInterpretingOutcome
                 */
                SimultaneousInterpretingOutcome SimultaneousInterpreting(const Model::SimultaneousInterpretingRequest &request);
                void SimultaneousInterpretingAsync(const Model::SimultaneousInterpretingRequest& request, const SimultaneousInterpretingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SimultaneousInterpretingOutcomeCallable SimultaneousInterpretingCallable(const Model::SimultaneousInterpretingRequest& request);

                /**
                 *腾讯云语音合成技术（TTS）可以将任意文本转化为语音，实现让机器和应用张口说话。
腾讯TTS技术可以应用到很多场景，比如，移动APP语音播报新闻；智能设备语音提醒；依靠网上现有节目或少量录音，快速合成明星语音，降低邀约成本；支持车载导航语音合成的个性化语音播报。
内测期间免费使用。
                 * @param req TextToVoiceRequest
                 * @return TextToVoiceOutcome
                 */
                TextToVoiceOutcome TextToVoice(const Model::TextToVoiceRequest &request);
                void TextToVoiceAsync(const Model::TextToVoiceRequest& request, const TextToVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToVoiceOutcomeCallable TextToVoiceCallable(const Model::TextToVoiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_AAICLIENT_H_
