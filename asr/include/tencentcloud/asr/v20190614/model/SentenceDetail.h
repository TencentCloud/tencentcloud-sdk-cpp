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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/SentenceWords.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 单句的详细识别结果，包含单个词的时间偏移，一般用于生成字幕的场景。
                */
                class SentenceDetail : public AbstractModel
                {
                public:
                    SentenceDetail();
                    ~SentenceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalSentence 单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFinalSentence() const;

                    /**
                     * 设置单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FinalSentence 单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFinalSentence(const std::string& _finalSentence);

                    /**
                     * 判断参数 FinalSentence 是否已赋值
                     * @return FinalSentence 是否已赋值
                     */
                    bool FinalSentenceHasBeenSet() const;

                    /**
                     * 获取单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SliceSentence 单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSliceSentence() const;

                    /**
                     * 设置单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SliceSentence 单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSliceSentence(const std::string& _sliceSentence);

                    /**
                     * 判断参数 SliceSentence 是否已赋值
                     * @return SliceSentence 是否已赋值
                     */
                    bool SliceSentenceHasBeenSet() const;

                    /**
                     * 获取单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartMs 单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartMs() const;

                    /**
                     * 设置单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartMs 单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartMs(const int64_t& _startMs);

                    /**
                     * 判断参数 StartMs 是否已赋值
                     * @return StartMs 是否已赋值
                     */
                    bool StartMsHasBeenSet() const;

                    /**
                     * 获取单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndMs 单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEndMs() const;

                    /**
                     * 设置单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndMs 单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndMs(const int64_t& _endMs);

                    /**
                     * 判断参数 EndMs 是否已赋值
                     * @return EndMs 是否已赋值
                     */
                    bool EndMsHasBeenSet() const;

                    /**
                     * 获取单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordsNum 单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetWordsNum() const;

                    /**
                     * 设置单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WordsNum 单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWordsNum(const int64_t& _wordsNum);

                    /**
                     * 判断参数 WordsNum 是否已赋值
                     * @return WordsNum 是否已赋值
                     */
                    bool WordsNumHasBeenSet() const;

                    /**
                     * 获取单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Words 单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SentenceWords> GetWords() const;

                    /**
                     * 设置单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Words 单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWords(const std::vector<SentenceWords>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取单句语速
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeechSpeed 单句语速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置单句语速
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpeechSpeed 单句语速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpeechSpeed(const double& _speechSpeed);

                    /**
                     * 判断参数 SpeechSpeed 是否已赋值
                     * @return SpeechSpeed 是否已赋值
                     */
                    bool SpeechSpeedHasBeenSet() const;

                private:

                    /**
                     * 单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalSentence;
                    bool m_finalSentenceHasBeenSet;

                    /**
                     * 单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sliceSentence;
                    bool m_sliceSentenceHasBeenSet;

                    /**
                     * 单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startMs;
                    bool m_startMsHasBeenSet;

                    /**
                     * 单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endMs;
                    bool m_endMsHasBeenSet;

                    /**
                     * 单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wordsNum;
                    bool m_wordsNumHasBeenSet;

                    /**
                     * 单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SentenceWords> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 单句语速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_
