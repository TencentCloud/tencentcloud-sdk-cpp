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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/AudioResultDetailTextResult.h>
#include <tencentcloud/vm/v20210922/model/AudioResultDetailMoanResult.h>
#include <tencentcloud/vm/v20210922/model/AudioResultDetailLanguageResult.h>
#include <tencentcloud/vm/v20210922/model/RecognitionResult.h>
#include <tencentcloud/vm/v20210922/model/SpeakerResult.h>
#include <tencentcloud/vm/v20210922/model/TravelResult.h>
#include <tencentcloud/vm/v20210922/model/LabelResult.h>
#include <tencentcloud/vm/v20210922/model/Sentence.h>
#include <tencentcloud/vm/v20210922/model/HitSnippetInfo.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
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
                     * 获取<p>该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
                     * @return Extra <p>该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
                     * @param _extra <p>该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
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
                     * 获取<p>该字段用于返回音频文件说话人检测的详细审核结果</p>
                     * @return SpeakerResults <p>该字段用于返回音频文件说话人检测的详细审核结果</p>
                     * 
                     */
                    std::vector<SpeakerResult> GetSpeakerResults() const;

                    /**
                     * 设置<p>该字段用于返回音频文件说话人检测的详细审核结果</p>
                     * @param _speakerResults <p>该字段用于返回音频文件说话人检测的详细审核结果</p>
                     * 
                     */
                    void SetSpeakerResults(const std::vector<SpeakerResult>& _speakerResults);

                    /**
                     * 判断参数 SpeakerResults 是否已赋值
                     * @return SpeakerResults 是否已赋值
                     * 
                     */
                    bool SpeakerResultsHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回音频文件出行检测的详细审核结果</p>
                     * @return TravelResults <p>该字段用于返回音频文件出行检测的详细审核结果</p>
                     * 
                     */
                    std::vector<TravelResult> GetTravelResults() const;

                    /**
                     * 设置<p>该字段用于返回音频文件出行检测的详细审核结果</p>
                     * @param _travelResults <p>该字段用于返回音频文件出行检测的详细审核结果</p>
                     * 
                     */
                    void SetTravelResults(const std::vector<TravelResult>& _travelResults);

                    /**
                     * 判断参数 TravelResults 是否已赋值
                     * @return TravelResults 是否已赋值
                     * 
                     */
                    bool TravelResultsHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回音频文件的三级标签</p>
                     * @return SubTag <p>该字段用于返回音频文件的三级标签</p>
                     * 
                     */
                    std::string GetSubTag() const;

                    /**
                     * 设置<p>该字段用于返回音频文件的三级标签</p>
                     * @param _subTag <p>该字段用于返回音频文件的三级标签</p>
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
                     * 获取<p>该字段用于返回音频文件的三级标签码</p>
                     * @return SubTagCode <p>该字段用于返回音频文件的三级标签码</p>
                     * 
                     */
                    std::string GetSubTagCode() const;

                    /**
                     * 设置<p>该字段用于返回音频文件的三级标签码</p>
                     * @param _subTagCode <p>该字段用于返回音频文件的三级标签码</p>
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
                     * 获取<p>该字段用于返回音频文件歌曲识别的详细审核结果</p>
                     * @return LabelResults <p>该字段用于返回音频文件歌曲识别的详细审核结果</p>
                     * 
                     */
                    std::vector<LabelResult> GetLabelResults() const;

                    /**
                     * 设置<p>该字段用于返回音频文件歌曲识别的详细审核结果</p>
                     * @param _labelResults <p>该字段用于返回音频文件歌曲识别的详细审核结果</p>
                     * 
                     */
                    void SetLabelResults(const std::vector<LabelResult>& _labelResults);

                    /**
                     * 判断参数 LabelResults 是否已赋值
                     * @return LabelResults 是否已赋值
                     * 
                     */
                    bool LabelResultsHasBeenSet() const;

                    /**
                     * 获取<p>审核命中类型</p>
                     * @return HitType <p>审核命中类型</p>
                     * 
                     */
                    std::string GetHitType() const;

                    /**
                     * 设置<p>审核命中类型</p>
                     * @param _hitType <p>审核命中类型</p>
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
                     * 获取<p>命中信息</p>
                     * @return HitSnippetInfos <p>命中信息</p>
                     * 
                     */
                    std::vector<HitSnippetInfo> GetHitSnippetInfos() const;

                    /**
                     * 设置<p>命中信息</p>
                     * @param _hitSnippetInfos <p>命中信息</p>
                     * 
                     */
                    void SetHitSnippetInfos(const std::vector<HitSnippetInfo>& _hitSnippetInfos);

                    /**
                     * 判断参数 HitSnippetInfos 是否已赋值
                     * @return HitSnippetInfos 是否已赋值
                     * 
                     */
                    bool HitSnippetInfosHasBeenSet() const;

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
                     * <p>该字段用于返回输入参数中的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
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
                     * <p>该字段用于返回音频文件说话人检测的详细审核结果</p>
                     */
                    std::vector<SpeakerResult> m_speakerResults;
                    bool m_speakerResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件出行检测的详细审核结果</p>
                     */
                    std::vector<TravelResult> m_travelResults;
                    bool m_travelResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件的三级标签</p>
                     */
                    std::string m_subTag;
                    bool m_subTagHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件的三级标签码</p>
                     */
                    std::string m_subTagCode;
                    bool m_subTagCodeHasBeenSet;

                    /**
                     * <p>该字段用于返回音频文件歌曲识别的详细审核结果</p>
                     */
                    std::vector<LabelResult> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * <p>审核命中类型</p>
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
                     * <p>命中信息</p>
                     */
                    std::vector<HitSnippetInfo> m_hitSnippetInfos;
                    bool m_hitSnippetInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULT_H_
