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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/AudioResultDetailTextResult.h>
#include <tencentcloud/ams/v20201229/model/AudioResultDetailMoanResult.h>
#include <tencentcloud/ams/v20201229/model/AudioResultDetailLanguageResult.h>
#include <tencentcloud/ams/v20201229/model/RecognitionResult.h>
#include <tencentcloud/ams/v20201229/model/SpeakerResults.h>
#include <tencentcloud/ams/v20201229/model/LabelResults.h>
#include <tencentcloud/ams/v20201229/model/TravelResults.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 音频审核输出参数
                */
                class AudioResult : public AbstractModel
                {
                public:
                    AudioResult();
                    ~AudioResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitFlag 该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitFlag 该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
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
                     * 获取该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
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
                     * 获取该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
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
                     * 获取该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
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
                     * 获取该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
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
                     * 获取该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
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
                     * 获取该字段用于返回音频文件的时长，单位为毫秒。
                     * @return Duration 该字段用于返回音频文件的时长，单位为毫秒。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置该字段用于返回音频文件的时长，单位为毫秒。
                     * @param _duration 该字段用于返回音频文件的时长，单位为毫秒。
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
                     * 获取该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。
                     * @return Extra 该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。
                     * @param _extra 该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。
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
                     * 获取该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @return TextResults 该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    std::vector<AudioResultDetailTextResult> GetTextResults() const;

                    /**
                     * 设置该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @param _textResults 该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
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
                     * 获取该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * @return MoanResults 该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * 
                     */
                    std::vector<AudioResultDetailMoanResult> GetMoanResults() const;

                    /**
                     * 设置该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     * @param _moanResults 该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
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
                     * 获取该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @return LanguageResults 该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    std::vector<AudioResultDetailLanguageResult> GetLanguageResults() const;

                    /**
                     * 设置该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * @param _languageResults 该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     * 
                     */
                    void SetLanguageResults(const std::vector<AudioResultDetailLanguageResult>& _languageResults);

                    /**
                     * 判断参数 LanguageResults 是否已赋值
                     * @return LanguageResults 是否已赋值
                     * 
                     */
                    bool LanguageResultsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabel 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabel 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取识别类标签结果信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognitionResults 识别类标签结果信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecognitionResult> GetRecognitionResults() const;

                    /**
                     * 设置识别类标签结果信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recognitionResults 识别类标签结果信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecognitionResults(const std::vector<RecognitionResult>& _recognitionResults);

                    /**
                     * 判断参数 RecognitionResults 是否已赋值
                     * @return RecognitionResults 是否已赋值
                     * 
                     */
                    bool RecognitionResultsHasBeenSet() const;

                    /**
                     * 获取说话人结果
                     * @return SpeakerResults 说话人结果
                     * 
                     */
                    std::vector<SpeakerResults> GetSpeakerResults() const;

                    /**
                     * 设置说话人结果
                     * @param _speakerResults 说话人结果
                     * 
                     */
                    void SetSpeakerResults(const std::vector<SpeakerResults>& _speakerResults);

                    /**
                     * 判断参数 SpeakerResults 是否已赋值
                     * @return SpeakerResults 是否已赋值
                     * 
                     */
                    bool SpeakerResultsHasBeenSet() const;

                    /**
                     * 获取歌曲识别结果
                     * @return LabelResults 歌曲识别结果
                     * 
                     */
                    std::vector<LabelResults> GetLabelResults() const;

                    /**
                     * 设置歌曲识别结果
                     * @param _labelResults 歌曲识别结果
                     * 
                     */
                    void SetLabelResults(const std::vector<LabelResults>& _labelResults);

                    /**
                     * 判断参数 LabelResults 是否已赋值
                     * @return LabelResults 是否已赋值
                     * 
                     */
                    bool LabelResultsHasBeenSet() const;

                    /**
                     * 获取出行结果
                     * @return TravelResults 出行结果
                     * 
                     */
                    std::vector<TravelResults> GetTravelResults() const;

                    /**
                     * 设置出行结果
                     * @param _travelResults 出行结果
                     * 
                     */
                    void SetTravelResults(const std::vector<TravelResults>& _travelResults);

                    /**
                     * 判断参数 TravelResults 是否已赋值
                     * @return TravelResults 是否已赋值
                     * 
                     */
                    bool TravelResultsHasBeenSet() const;

                    /**
                     * 获取三级标签
                     * @return SubTag 三级标签
                     * 
                     */
                    std::string GetSubTag() const;

                    /**
                     * 设置三级标签
                     * @param _subTag 三级标签
                     * 
                     */
                    void SetSubTag(const std::string& _subTag);

                    /**
                     * 判断参数 SubTag 是否已赋值
                     * @return SubTag 是否已赋值
                     * 
                     */
                    bool SubTagHasBeenSet() const;

                    /**
                     * 获取三级标签码
                     * @return SubTagCode 三级标签码
                     * 
                     */
                    std::string GetSubTagCode() const;

                    /**
                     * 设置三级标签码
                     * @param _subTagCode 三级标签码
                     * 
                     */
                    void SetSubTagCode(const std::string& _subTagCode);

                    /**
                     * 判断参数 SubTagCode 是否已赋值
                     * @return SubTagCode 是否已赋值
                     * 
                     */
                    bool SubTagCodeHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回审核内容是否命中审核模型；取值：0（**未命中**）、1（**命中**）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告，**Custom**：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br>
返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 该字段用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表文本越有可能属于当前返回的标签；如：*色情 99*，则表明该文本非常有可能属于色情内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该字段用于返回音频文件经ASR识别后的文本信息。最长可识别**5小时**的音频文件，若超出时长限制，接口将会报错。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用[COS预签名](https://cloud.tencent.com/document/product/1265/104001)功能更新签名时效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 该字段用于返回音频文件的时长，单位为毫秒。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     */
                    std::vector<AudioResultDetailTextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。
                     */
                    std::vector<AudioResultDetailMoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                    /**
                     * 该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。
                     */
                    std::vector<AudioResultDetailLanguageResult> m_languageResults;
                    bool m_languageResultsHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 识别类标签结果信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                    /**
                     * 说话人结果
                     */
                    std::vector<SpeakerResults> m_speakerResults;
                    bool m_speakerResultsHasBeenSet;

                    /**
                     * 歌曲识别结果
                     */
                    std::vector<LabelResults> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * 出行结果
                     */
                    std::vector<TravelResults> m_travelResults;
                    bool m_travelResultsHasBeenSet;

                    /**
                     * 三级标签
                     */
                    std::string m_subTag;
                    bool m_subTagHasBeenSet;

                    /**
                     * 三级标签码
                     */
                    std::string m_subTagCode;
                    bool m_subTagCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_
