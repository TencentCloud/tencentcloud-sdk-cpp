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

#ifndef TENCENTCLOUD_TTS_V20190823_TTSCLIENT_H_
#define TENCENTCLOUD_TTS_V20190823_TTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tts/v20190823/model/TextToVoiceRequest.h>
#include <tencentcloud/tts/v20190823/model/TextToVoiceResponse.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            class TtsClient : public AbstractClient
            {
            public:
                TtsClient(const Credential &credential, const std::string &region);
                TtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::TextToVoiceResponse> TextToVoiceOutcome;
                typedef std::future<TextToVoiceOutcome> TextToVoiceOutcomeCallable;
                typedef std::function<void(const TtsClient*, const Model::TextToVoiceRequest&, TextToVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToVoiceAsyncHandler;



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

#endif // !TENCENTCLOUD_TTS_V20190823_TTSCLIENT_H_
