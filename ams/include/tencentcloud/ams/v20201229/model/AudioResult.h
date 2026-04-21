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
#include <tencentcloud/ams/v20201229/model/Sentence.h>
#include <tencentcloud/ams/v20201229/model/AIGCRecognitionResult.h>


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
                     * 获取<p>该字段用于返回审核内容是否命中审核模型；取值：0（<strong>未命中</strong>）、1（<strong>命中</strong>）。</p>
                     * @return HitFlag <p>该字段用于返回审核内容是否命中审核模型；取值：0（<strong>未命中</strong>）、1（<strong>命中</strong>）。</p>
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置<p>该字段用于返回审核内容是否命中审核模型；取值：0（<strong>未命中</strong>）、1（<strong>命中</strong>）。</p>
                     * @param _hitFlag <p>该字段用于返回审核内容是否命中审核模型；取值：0（<strong>未命中</strong>）、1（<strong>命中</strong>）。</p>
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
                     * 获取<p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * @return Label <p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * @param _label <p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
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
                     * 获取<p>该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br><br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * @return Suggestion <p>该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br><br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br><br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * @param _suggestion <p>该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br><br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
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
                     * 获取<p>该字段用于返回当前标签下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容。</p>
                     * @return Score <p>该字段用于返回当前标签下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容。</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>该字段用于返回当前标签下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容。</p>
                     * @param _score <p>该字段用于返回当前标签下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容。</p>
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
                     * 获取<p>该字段用于返回音频文件经ASR识别后的文本信息。最长可识别<strong>5小时</strong>的音频文件，若超出时长限制，接口将会报错。</p>
                     * @return Text <p>该字段用于返回音频文件经ASR识别后的文本信息。最长可识别<strong>5小时</strong>的音频文件，若超出时长限制，接口将会报错。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>该字段用于返回音频文件经ASR识别后的文本信息。最长可识别<strong>5小时</strong>的音频文件，若超出时长限制，接口将会报错。</p>
                     * @param _text <p>该字段用于返回音频文件经ASR识别后的文本信息。最长可识别<strong>5小时</strong>的音频文件，若超出时长限制，接口将会报错。</p>
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
                     * 获取<p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     * @return Url <p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     * @param _url <p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
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
                     * 获取<p>该字段用于返回音频文件的时长，单位为毫秒。</p>
                     * @return Duration <p>该字段用于返回音频文件的时长，单位为毫秒。</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>该字段用于返回音频文件的时长，单位为毫秒。</p>
                     * @param _duration <p>该字段用于返回音频文件的时长，单位为毫秒。</p>
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
                     * 获取<p>该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。</p>
                     * @return Extra <p>该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。</p>
                     * @param _extra <p>该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。</p>
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
                     * 获取<p>该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     * @return TextResults <p>该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     * 
                     */
                    std::vector<AudioResultDetailTextResult> GetTextResults() const;

                    /**
                     * 设置<p>该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     * @param _textResults <p>该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
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
                     * 获取<p>该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。</p>
                     * @return MoanResults <p>该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。</p>
                     * 
                     */
                    std::vector<AudioResultDetailMoanResult> GetMoanResults() const;

                    /**
                     * 设置<p>该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。</p>
                     * @param _moanResults <p>该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。</p>
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
                     * 获取<p>该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     * @return LanguageResults <p>该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     * 
                     */
                    std::vector<AudioResultDetailLanguageResult> GetLanguageResults() const;

                    /**
                     * 设置<p>该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     * @param _languageResults <p>该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
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
                     * 获取<p>该字段用于返回当前标签（Lable）下的二级标签。</p>
                     * @return SubLabel <p>该字段用于返回当前标签（Lable）下的二级标签。</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置<p>该字段用于返回当前标签（Lable）下的二级标签。</p>
                     * @param _subLabel <p>该字段用于返回当前标签（Lable）下的二级标签。</p>
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
                     * 获取<p>识别类标签结果信息列表</p>
                     * @return RecognitionResults <p>识别类标签结果信息列表</p>
                     * 
                     */
                    std::vector<RecognitionResult> GetRecognitionResults() const;

                    /**
                     * 设置<p>识别类标签结果信息列表</p>
                     * @param _recognitionResults <p>识别类标签结果信息列表</p>
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
                     * 获取<p>说话人结果</p>
                     * @return SpeakerResults <p>说话人结果</p>
                     * 
                     */
                    std::vector<SpeakerResults> GetSpeakerResults() const;

                    /**
                     * 设置<p>说话人结果</p>
                     * @param _speakerResults <p>说话人结果</p>
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
                     * 获取<p>歌曲识别结果</p>
                     * @return LabelResults <p>歌曲识别结果</p>
                     * 
                     */
                    std::vector<LabelResults> GetLabelResults() const;

                    /**
                     * 设置<p>歌曲识别结果</p>
                     * @param _labelResults <p>歌曲识别结果</p>
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
                     * 获取<p>出行结果</p>
                     * @return TravelResults <p>出行结果</p>
                     * 
                     */
                    std::vector<TravelResults> GetTravelResults() const;

                    /**
                     * 设置<p>出行结果</p>
                     * @param _travelResults <p>出行结果</p>
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
                     * 获取<p>三级标签</p>
                     * @return SubTag <p>三级标签</p>
                     * 
                     */
                    std::string GetSubTag() const;

                    /**
                     * 设置<p>三级标签</p>
                     * @param _subTag <p>三级标签</p>
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
                     * 获取<p>三级标签码</p>
                     * @return SubTagCode <p>三级标签码</p>
                     * 
                     */
                    std::string GetSubTagCode() const;

                    /**
                     * 设置<p>三级标签码</p>
                     * @param _subTagCode <p>三级标签码</p>
                     * 
                     */
                    void SetSubTagCode(const std::string& _subTagCode);

                    /**
                     * 判断参数 SubTagCode 是否已赋值
                     * @return SubTagCode 是否已赋值
                     * 
                     */
                    bool SubTagCodeHasBeenSet() const;

                    /**
                     * 获取<p>审核检测类型</p>
                     * @return HitType <p>审核检测类型</p>
                     * 
                     */
                    std::string GetHitType() const;

                    /**
                     * 设置<p>审核检测类型</p>
                     * @param _hitType <p>审核检测类型</p>
                     * 
                     */
                    void SetHitType(const std::string& _hitType);

                    /**
                     * 判断参数 HitType 是否已赋值
                     * @return HitType 是否已赋值
                     * 
                     */
                    bool HitTypeHasBeenSet() const;

                    /**
                     * 获取<p>ASR句子的起止时间</p>
                     * @return Sentences <p>ASR句子的起止时间</p>
                     * 
                     */
                    std::vector<Sentence> GetSentences() const;

                    /**
                     * 设置<p>ASR句子的起止时间</p>
                     * @param _sentences <p>ASR句子的起止时间</p>
                     * 
                     */
                    void SetSentences(const std::vector<Sentence>& _sentences);

                    /**
                     * 判断参数 Sentences 是否已赋值
                     * @return Sentences 是否已赋值
                     * 
                     */
                    bool SentencesHasBeenSet() const;

                    /**
                     * 获取<p>切片请求ID</p>
                     * @return RequestId <p>切片请求ID</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>切片请求ID</p>
                     * @param _requestId <p>切片请求ID</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>AIGC音频片段审核结果</p>
                     * @return AIGCRecognitionResults <p>AIGC音频片段审核结果</p>
                     * 
                     */
                    std::vector<AIGCRecognitionResult> GetAIGCRecognitionResults() const;

                    /**
                     * 设置<p>AIGC音频片段审核结果</p>
                     * @param _aIGCRecognitionResults <p>AIGC音频片段审核结果</p>
                     * 
                     */
                    void SetAIGCRecognitionResults(const std::vector<AIGCRecognitionResult>& _aIGCRecognitionResults);

                    /**
                     * 判断参数 AIGCRecognitionResults 是否已赋值
                     * @return AIGCRecognitionResults 是否已赋值
                     * 
                     */
                    bool AIGCRecognitionResultsHasBeenSet() const;

                private:

                    /**
                     * <p>该字段用于返回审核内容是否命中审核模型；取值：0（<strong>未命中</strong>）、1（<strong>命中</strong>）。</p>
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果所对应的恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告，<strong>Custom</strong>：自定义违规；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示具体的后续建议操作。<br><br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>该字段用于返回当前标签下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容。</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件经ASR识别后的文本信息。最长可识别<strong>5小时</strong>的音频文件，若超出时长限制，接口将会报错。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>该字段用于返回审核结果的访问链接（URL）。<br>备注：链接默认有效期为12小时。如果您需要更长时效的链接，请使用<a href="https://cloud.tencent.com/document/product/1265/104001">COS预签名</a>功能更新签名时效。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件的时长，单位为毫秒。</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>该字段用于返回额外附加信息，不同客户或Biztype下返回信息不同。</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件经ASR识别后产生的文本的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     */
                    std::vector<AudioResultDetailTextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件呻吟检测的详细审核结果。具体结果内容请参见AudioResultDetailMoanResult数据结构的细节描述。</p>
                     */
                    std::vector<AudioResultDetailMoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回音频小语种检测的详细审核结果。具体结果内容请参见AudioResultDetailLanguageResult数据结构的细节描述。</p>
                     */
                    std::vector<AudioResultDetailLanguageResult> m_languageResults;
                    bool m_languageResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回当前标签（Lable）下的二级标签。</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>识别类标签结果信息列表</p>
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                    /**
                     * <p>说话人结果</p>
                     */
                    std::vector<SpeakerResults> m_speakerResults;
                    bool m_speakerResultsHasBeenSet;

                    /**
                     * <p>歌曲识别结果</p>
                     */
                    std::vector<LabelResults> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * <p>出行结果</p>
                     */
                    std::vector<TravelResults> m_travelResults;
                    bool m_travelResultsHasBeenSet;

                    /**
                     * <p>三级标签</p>
                     */
                    std::string m_subTag;
                    bool m_subTagHasBeenSet;

                    /**
                     * <p>三级标签码</p>
                     */
                    std::string m_subTagCode;
                    bool m_subTagCodeHasBeenSet;

                    /**
                     * <p>审核检测类型</p>
                     */
                    std::string m_hitType;
                    bool m_hitTypeHasBeenSet;

                    /**
                     * <p>ASR句子的起止时间</p>
                     */
                    std::vector<Sentence> m_sentences;
                    bool m_sentencesHasBeenSet;

                    /**
                     * <p>切片请求ID</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>AIGC音频片段审核结果</p>
                     */
                    std::vector<AIGCRecognitionResult> m_aIGCRecognitionResults;
                    bool m_aIGCRecognitionResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULT_H_
