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
                     * 获取<p>单句最终识别结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalSentence <p>单句最终识别结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinalSentence() const;

                    /**
                     * 设置<p>单句最终识别结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalSentence <p>单句最终识别结果</p>
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
                     * 获取<p>单句中间识别结果，使用空格拆分为多个词</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SliceSentence <p>单句中间识别结果，使用空格拆分为多个词</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSliceSentence() const;

                    /**
                     * 设置<p>单句中间识别结果，使用空格拆分为多个词</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sliceSentence <p>单句中间识别结果，使用空格拆分为多个词</p>
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
                     * 获取<p>口语转书面语结果，开启该功能才有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WrittenText <p>口语转书面语结果，开启该功能才有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWrittenText() const;

                    /**
                     * 设置<p>口语转书面语结果，开启该功能才有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writtenText <p>口语转书面语结果，开启该功能才有值</p>
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
                     * 获取<p>单句开始时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartMs <p>单句开始时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartMs() const;

                    /**
                     * 设置<p>单句开始时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startMs <p>单句开始时间（毫秒）</p>
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
                     * 获取<p>单句结束时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndMs <p>单句结束时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndMs() const;

                    /**
                     * 设置<p>单句结束时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endMs <p>单句结束时间（毫秒）</p>
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
                     * 获取<p>单句中词个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordsNum <p>单句中词个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWordsNum() const;

                    /**
                     * 设置<p>单句中词个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordsNum <p>单句中词个数</p>
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
                     * 获取<p>单句中词详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Words <p>单句中词详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SentenceWords> GetWords() const;

                    /**
                     * 设置<p>单句中词详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _words <p>单句中词详情</p>
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
                     * 获取<p>单句语速，单位：字数/秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeechSpeed <p>单句语速，单位：字数/秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置<p>单句语速，单位：字数/秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speechSpeed <p>单句语速，单位：字数/秒</p>
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
                     * 获取<p>声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）<br>单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeakerId <p>声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）<br>单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSpeakerId() const;

                    /**
                     * 设置<p>声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）<br>单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speakerId <p>声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）<br>单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。</p>
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
                     * 获取<p>情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmotionalEnergy <p>情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEmotionalEnergy() const;

                    /**
                     * 设置<p>情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emotionalEnergy <p>情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。</p>
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
                     * 获取<p>本句与上一句之间的静音时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SilenceTime <p>本句与上一句之间的静音时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSilenceTime() const;

                    /**
                     * 设置<p>本句与上一句之间的静音时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _silenceTime <p>本句与上一句之间的静音时长</p>
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
                     * 获取<p>情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmotionType <p>情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEmotionType() const;

                    /**
                     * 设置<p>情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emotionType <p>情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）</p>
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
                     * 获取<p>关键词识别结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordResults <p>关键词识别结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyWordResult> GetKeyWordResults() const;

                    /**
                     * 设置<p>关键词识别结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordResults <p>关键词识别结果列表</p>
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

                    /**
                     * 获取<p>多语言识别类型</p><ul><li>中文    chinese</li><li>英语    english</li><li>日语    japanese</li><li>韩语    korean</li><li>阿拉伯语    arabic</li><li>菲律宾语    filipino</li><li>法语    french</li><li>印地语    hindi</li><li>印尼语    indonesian</li><li>马来语    malay</li><li>葡萄牙语    portugal</li><li>西班牙语    spanish</li><li>泰语    thai</li><li>土耳其语    turkish</li><li>越南语    vietnam</li><li>德语    german</li></ul>
                     * @return LangType <p>多语言识别类型</p><ul><li>中文    chinese</li><li>英语    english</li><li>日语    japanese</li><li>韩语    korean</li><li>阿拉伯语    arabic</li><li>菲律宾语    filipino</li><li>法语    french</li><li>印地语    hindi</li><li>印尼语    indonesian</li><li>马来语    malay</li><li>葡萄牙语    portugal</li><li>西班牙语    spanish</li><li>泰语    thai</li><li>土耳其语    turkish</li><li>越南语    vietnam</li><li>德语    german</li></ul>
                     * 
                     */
                    std::string GetLangType() const;

                    /**
                     * 设置<p>多语言识别类型</p><ul><li>中文    chinese</li><li>英语    english</li><li>日语    japanese</li><li>韩语    korean</li><li>阿拉伯语    arabic</li><li>菲律宾语    filipino</li><li>法语    french</li><li>印地语    hindi</li><li>印尼语    indonesian</li><li>马来语    malay</li><li>葡萄牙语    portugal</li><li>西班牙语    spanish</li><li>泰语    thai</li><li>土耳其语    turkish</li><li>越南语    vietnam</li><li>德语    german</li></ul>
                     * @param _langType <p>多语言识别类型</p><ul><li>中文    chinese</li><li>英语    english</li><li>日语    japanese</li><li>韩语    korean</li><li>阿拉伯语    arabic</li><li>菲律宾语    filipino</li><li>法语    french</li><li>印地语    hindi</li><li>印尼语    indonesian</li><li>马来语    malay</li><li>葡萄牙语    portugal</li><li>西班牙语    spanish</li><li>泰语    thai</li><li>土耳其语    turkish</li><li>越南语    vietnam</li><li>德语    german</li></ul>
                     * 
                     */
                    void SetLangType(const std::string& _langType);

                    /**
                     * 判断参数 LangType 是否已赋值
                     * @return LangType 是否已赋值
                     * 
                     */
                    bool LangTypeHasBeenSet() const;

                    /**
                     * 获取<p>说话人角色名称</p>
                     * @return SpeakerRoleName <p>说话人角色名称</p>
                     * 
                     */
                    std::string GetSpeakerRoleName() const;

                    /**
                     * 设置<p>说话人角色名称</p>
                     * @param _speakerRoleName <p>说话人角色名称</p>
                     * 
                     */
                    void SetSpeakerRoleName(const std::string& _speakerRoleName);

                    /**
                     * 判断参数 SpeakerRoleName 是否已赋值
                     * @return SpeakerRoleName 是否已赋值
                     * 
                     */
                    bool SpeakerRoleNameHasBeenSet() const;

                private:

                    /**
                     * <p>单句最终识别结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalSentence;
                    bool m_finalSentenceHasBeenSet;

                    /**
                     * <p>单句中间识别结果，使用空格拆分为多个词</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sliceSentence;
                    bool m_sliceSentenceHasBeenSet;

                    /**
                     * <p>口语转书面语结果，开启该功能才有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_writtenText;
                    bool m_writtenTextHasBeenSet;

                    /**
                     * <p>单句开始时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startMs;
                    bool m_startMsHasBeenSet;

                    /**
                     * <p>单句结束时间（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endMs;
                    bool m_endMsHasBeenSet;

                    /**
                     * <p>单句中词个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wordsNum;
                    bool m_wordsNumHasBeenSet;

                    /**
                     * <p>单句中词详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SentenceWords> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * <p>单句语速，单位：字数/秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * <p>声道或说话人 Id（请求中如果设置了 speaker_diarization或者ChannelNum为双声道，可区分说话人或声道）<br>单声道话者分离时不同的值代表不同的说话人； 8k双声道话者分离时speakerId的值为0代表左声道，值为1代表右声道。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * <p>情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_emotionalEnergy;
                    bool m_emotionalEnergyHasBeenSet;

                    /**
                     * <p>本句与上一句之间的静音时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_silenceTime;
                    bool m_silenceTimeHasBeenSet;

                    /**
                     * <p>情绪类型（可能为空，有2种情况 1、没有对应资源包；2、情绪跟语音效果相关，如果情绪不够强烈时可能无法识别）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_emotionType;
                    bool m_emotionTypeHasBeenSet;

                    /**
                     * <p>关键词识别结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyWordResult> m_keyWordResults;
                    bool m_keyWordResultsHasBeenSet;

                    /**
                     * <p>多语言识别类型</p><ul><li>中文    chinese</li><li>英语    english</li><li>日语    japanese</li><li>韩语    korean</li><li>阿拉伯语    arabic</li><li>菲律宾语    filipino</li><li>法语    french</li><li>印地语    hindi</li><li>印尼语    indonesian</li><li>马来语    malay</li><li>葡萄牙语    portugal</li><li>西班牙语    spanish</li><li>泰语    thai</li><li>土耳其语    turkish</li><li>越南语    vietnam</li><li>德语    german</li></ul>
                     */
                    std::string m_langType;
                    bool m_langTypeHasBeenSet;

                    /**
                     * <p>说话人角色名称</p>
                     */
                    std::string m_speakerRoleName;
                    bool m_speakerRoleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_
