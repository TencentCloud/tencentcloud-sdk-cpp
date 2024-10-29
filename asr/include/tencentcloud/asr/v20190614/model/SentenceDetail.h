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
#include <tencentcloud/asr/v20190614/model/KeyWordResult.h>


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
                     * 
                     */
                    std::string GetFinalSentence() const;

                    /**
                     * 设置单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalSentence 单句最终识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalSentence(const std::string& _finalSentence);

                    /**
                     * 判断参数 FinalSentence 是否已赋值
                     * @return FinalSentence 是否已赋值
                     * 
                     */
                    bool FinalSentenceHasBeenSet() const;

                    /**
                     * 获取单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SliceSentence 单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSliceSentence() const;

                    /**
                     * 设置单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sliceSentence 单句中间识别结果，使用空格拆分为多个词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSliceSentence(const std::string& _sliceSentence);

                    /**
                     * 判断参数 SliceSentence 是否已赋值
                     * @return SliceSentence 是否已赋值
                     * 
                     */
                    bool SliceSentenceHasBeenSet() const;

                    /**
                     * 获取口语转书面语结果，开启改功能才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WrittenText 口语转书面语结果，开启改功能才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWrittenText() const;

                    /**
                     * 设置口语转书面语结果，开启改功能才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writtenText 口语转书面语结果，开启改功能才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWrittenText(const std::string& _writtenText);

                    /**
                     * 判断参数 WrittenText 是否已赋值
                     * @return WrittenText 是否已赋值
                     * 
                     */
                    bool WrittenTextHasBeenSet() const;

                    /**
                     * 获取单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartMs 单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartMs() const;

                    /**
                     * 设置单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startMs 单句开始时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartMs(const int64_t& _startMs);

                    /**
                     * 判断参数 StartMs 是否已赋值
                     * @return StartMs 是否已赋值
                     * 
                     */
                    bool StartMsHasBeenSet() const;

                    /**
                     * 获取单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndMs 单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndMs() const;

                    /**
                     * 设置单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endMs 单句结束时间（毫秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndMs(const int64_t& _endMs);

                    /**
                     * 判断参数 EndMs 是否已赋值
                     * @return EndMs 是否已赋值
                     * 
                     */
                    bool EndMsHasBeenSet() const;

                    /**
                     * 获取单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordsNum 单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWordsNum() const;

                    /**
                     * 设置单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordsNum 单句中词个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWordsNum(const int64_t& _wordsNum);

                    /**
                     * 判断参数 WordsNum 是否已赋值
                     * @return WordsNum 是否已赋值
                     * 
                     */
                    bool WordsNumHasBeenSet() const;

                    /**
                     * 获取单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Words 单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SentenceWords> GetWords() const;

                    /**
                     * 设置单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _words 单句中词详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWords(const std::vector<SentenceWords>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取单句语速，单位：字数/秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeechSpeed 单句语速，单位：字数/秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置单句语速，单位：字数/秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speechSpeed 单句语速，单位：字数/秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeechSpeed(const double& _speechSpeed);

                    /**
                     * 判断参数 SpeechSpeed 是否已赋值
                     * @return SpeechSpeed 是否已赋值
                     * 
                     */
                    bool SpeechSpeedHasBeenSet() const;

                    /**
                     * 获取声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）
单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeakerId 声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）
单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSpeakerId() const;

                    /**
                     * 设置声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）
单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speakerId 声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）
单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeakerId(const int64_t& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmotionalEnergy 情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEmotionalEnergy() const;

                    /**
                     * 设置情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emotionalEnergy 情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmotionalEnergy(const double& _emotionalEnergy);

                    /**
                     * 判断参数 EmotionalEnergy 是否已赋值
                     * @return EmotionalEnergy 是否已赋值
                     * 
                     */
                    bool EmotionalEnergyHasBeenSet() const;

                    /**
                     * 获取本句与上一句之间的静音时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SilenceTime 本句与上一句之间的静音时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSilenceTime() const;

                    /**
                     * 设置本句与上一句之间的静音时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _silenceTime 本句与上一句之间的静音时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSilenceTime(const int64_t& _silenceTime);

                    /**
                     * 判断参数 SilenceTime 是否已赋值
                     * @return SilenceTime 是否已赋值
                     * 
                     */
                    bool SilenceTimeHasBeenSet() const;

                    /**
                     * 获取情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmotionType 情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEmotionType() const;

                    /**
                     * 设置情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emotionType 情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmotionType(const std::vector<std::string>& _emotionType);

                    /**
                     * 判断参数 EmotionType 是否已赋值
                     * @return EmotionType 是否已赋值
                     * 
                     */
                    bool EmotionTypeHasBeenSet() const;

                    /**
                     * 获取关键词识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordResults 关键词识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyWordResult> GetKeyWordResults() const;

                    /**
                     * 设置关键词识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordResults 关键词识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyWordResults(const std::vector<KeyWordResult>& _keyWordResults);

                    /**
                     * 判断参数 KeyWordResults 是否已赋值
                     * @return KeyWordResults 是否已赋值
                     * 
                     */
                    bool KeyWordResultsHasBeenSet() const;

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
                     * 口语转书面语结果，开启改功能才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_writtenText;
                    bool m_writtenTextHasBeenSet;

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
                     * 单句语速，单位：字数/秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * 声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）
单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * 情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_emotionalEnergy;
                    bool m_emotionalEnergyHasBeenSet;

                    /**
                     * 本句与上一句之间的静音时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_silenceTime;
                    bool m_silenceTimeHasBeenSet;

                    /**
                     * 情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_emotionType;
                    bool m_emotionTypeHasBeenSet;

                    /**
                     * 关键词识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyWordResult> m_keyWordResults;
                    bool m_keyWordResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_
