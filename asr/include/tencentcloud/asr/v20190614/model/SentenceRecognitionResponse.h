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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * SentenceRecognition返回参数结构体
                */
                class SentenceRecognitionResponse : public AbstractModel
                {
                public:
                    SentenceRecognitionResponse();
                    ~SentenceRecognitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取识别结果。
                     * @return Result 识别结果。
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取请求的音频时长，单位为ms
                     * @return AudioDuration 请求的音频时长，单位为ms
                     */
                    int64_t GetAudioDuration() const;

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     */
                    bool AudioDurationHasBeenSet() const;

                private:

                    /**
                     * 识别结果。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 请求的音频时长，单位为ms
                     */
                    int64_t m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONRESPONSE_H_
