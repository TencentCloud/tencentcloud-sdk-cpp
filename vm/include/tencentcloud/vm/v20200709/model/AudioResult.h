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

#ifndef TENCENTCLOUD_VM_V20200709_MODEL_AUDIORESULT_H_
#define TENCENTCLOUD_VM_V20200709_MODEL_AUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20200709/model/AudioResultDetailTextResult.h>
#include <tencentcloud/vm/v20200709/model/AudioResultDetailMoanResult.h>
#include <tencentcloud/vm/v20200709/model/AudioResultDetailLanguageResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            namespace Model
            {
                /**
                * 音频输出参数
                */
                class AudioResult : public AbstractModel
                {
                public:
                    AudioResult();
                    ~AudioResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitFlag 是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitFlag 是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取命中的标签
Porn 色情
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
Moan 呻吟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 命中的标签
Porn 色情
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
Moan 呻吟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置命中的标签
Porn 色情
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
Moan 呻吟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 命中的标签
Porn 色情
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
Moan 呻吟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取得分，0-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 得分，0-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置得分，0-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 得分，0-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取音频ASR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 音频ASR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置音频ASR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 音频ASR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取音频片段存储URL，有效期为1天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 音频片段存储URL，有效期为1天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置音频片段存储URL，有效期为1天
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 音频片段存储URL，有效期为1天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取音频时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 音频时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置音频时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 音频时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取拓展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 拓展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置拓展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extra 拓展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取文本审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextResults 文本审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioResultDetailTextResult> GetTextResults() const;

                    /**
                     * 设置文本审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textResults 文本审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextResults(const std::vector<AudioResultDetailTextResult>& _textResults);

                    /**
                     * 判断参数 TextResults 是否已赋值
                     * @return TextResults 是否已赋值
                     * 
                     */
                    bool TextResultsHasBeenSet() const;

                    /**
                     * 获取音频呻吟审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MoanResults 音频呻吟审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioResultDetailMoanResult> GetMoanResults() const;

                    /**
                     * 设置音频呻吟审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moanResults 音频呻吟审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMoanResults(const std::vector<AudioResultDetailMoanResult>& _moanResults);

                    /**
                     * 判断参数 MoanResults 是否已赋值
                     * @return MoanResults 是否已赋值
                     * 
                     */
                    bool MoanResultsHasBeenSet() const;

                    /**
                     * 获取音频语种检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LanguageResults 音频语种检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioResultDetailLanguageResult> GetLanguageResults() const;

                    /**
                     * 设置音频语种检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _languageResults 音频语种检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLanguageResults(const std::vector<AudioResultDetailLanguageResult>& _languageResults);

                    /**
                     * 判断参数 LanguageResults 是否已赋值
                     * @return LanguageResults 是否已赋值
                     * 
                     */
                    bool LanguageResultsHasBeenSet() const;

                private:

                    /**
                     * 是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 命中的标签
Porn 色情
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
Moan 呻吟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 得分，0-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 音频ASR文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 音频片段存储URL，有效期为1天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 音频时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 拓展字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 文本审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioResultDetailTextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * 音频呻吟审核结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioResultDetailMoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                    /**
                     * 音频语种检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioResultDetailLanguageResult> m_languageResults;
                    bool m_languageResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_MODEL_AUDIORESULT_H_
