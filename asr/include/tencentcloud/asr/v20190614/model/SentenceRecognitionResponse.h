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
#include <tencentcloud/asr/v20190614/model/SentenceWord.h>


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
                    std::string ToJsonString() const;


                    /**
                     * 获取识别结果。
                     * @return Result 识别结果。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取请求的音频时长，单位为ms
                     * @return AudioDuration 请求的音频时长，单位为ms
                     * 
                     */
                    int64_t GetAudioDuration() const;

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     * 
                     */
                    bool AudioDurationHasBeenSet() const;

                    /**
                     * 获取词时间戳列表的长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordSize 词时间戳列表的长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWordSize() const;

                    /**
                     * 判断参数 WordSize 是否已赋值
                     * @return WordSize 是否已赋值
                     * 
                     */
                    bool WordSizeHasBeenSet() const;

                    /**
                     * 获取词时间戳列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordList 词时间戳列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SentenceWord> GetWordList() const;

                    /**
                     * 判断参数 WordList 是否已赋值
                     * @return WordList 是否已赋值
                     * 
                     */
                    bool WordListHasBeenSet() const;

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

                    /**
                     * 词时间戳列表的长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wordSize;
                    bool m_wordSizeHasBeenSet;

                    /**
                     * 词时间戳列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SentenceWord> m_wordList;
                    bool m_wordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONRESPONSE_H_
