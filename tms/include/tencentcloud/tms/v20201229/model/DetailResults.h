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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_DETAILRESULTS_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_DETAILRESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/Tag.h>
#include <tencentcloud/tms/v20201229/model/HitInfo.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 文本审核返回的详细结果
                */
                class DetailResults : public AbstractModel
                {
                public:
                    DetailResults();
                    ~DetailResults() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该字段用于返回检测结果所对应的全部恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * @return Label <p>该字段用于返回检测结果所对应的全部恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>该字段用于返回检测结果所对应的全部恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     * @param _label <p>该字段用于返回检测结果所对应的全部恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型。</p>
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
                     * 获取<p>该字段用于返回对应当前标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * @return Suggestion <p>该字段用于返回对应当前标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>该字段用于返回对应当前标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * @param _suggestion <p>该字段用于返回对应当前标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
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
                     * 获取<p>该字段用于返回检测文本命中的关键词信息，用于标注文本违规的具体原因（如：<em>加我微信</em>）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值。</p>
                     * @return Keywords <p>该字段用于返回检测文本命中的关键词信息，用于标注文本违规的具体原因（如：<em>加我微信</em>）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值。</p>
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置<p>该字段用于返回检测文本命中的关键词信息，用于标注文本违规的具体原因（如：<em>加我微信</em>）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值。</p>
                     * @param _keywords <p>该字段用于返回检测文本命中的关键词信息，用于标注文本违规的具体原因（如：<em>加我微信</em>）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值。</p>
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容；<em>色情 0</em>，则表明该文本不属于色情内容。</p>
                     * @return Score <p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容；<em>色情 0</em>，则表明该文本不属于色情内容。</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容；<em>色情 0</em>，则表明该文本不属于色情内容。</p>
                     * @param _score <p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容；<em>色情 0</em>，则表明该文本不属于色情内容。</p>
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
                     * 获取<p>该字段用于返回自定义关键词对应的词库类型，取值为<strong>1</strong>（黑白库）和<strong>2</strong>（自定义关键词库），若未配置自定义关键词库,则默认值为1（黑白库匹配）。</p>
                     * @return LibType <p>该字段用于返回自定义关键词对应的词库类型，取值为<strong>1</strong>（黑白库）和<strong>2</strong>（自定义关键词库），若未配置自定义关键词库,则默认值为1（黑白库匹配）。</p>
                     * 
                     */
                    int64_t GetLibType() const;

                    /**
                     * 设置<p>该字段用于返回自定义关键词对应的词库类型，取值为<strong>1</strong>（黑白库）和<strong>2</strong>（自定义关键词库），若未配置自定义关键词库,则默认值为1（黑白库匹配）。</p>
                     * @param _libType <p>该字段用于返回自定义关键词对应的词库类型，取值为<strong>1</strong>（黑白库）和<strong>2</strong>（自定义关键词库），若未配置自定义关键词库,则默认值为1（黑白库匹配）。</p>
                     * 
                     */
                    void SetLibType(const int64_t& _libType);

                    /**
                     * 判断参数 LibType 是否已赋值
                     * @return LibType 是否已赋值
                     * 
                     */
                    bool LibTypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回自定义库的ID，以方便自定义库管理和配置。</p>
                     * @return LibId <p>该字段用于返回自定义库的ID，以方便自定义库管理和配置。</p>
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置<p>该字段用于返回自定义库的ID，以方便自定义库管理和配置。</p>
                     * @param _libId <p>该字段用于返回自定义库的ID，以方便自定义库管理和配置。</p>
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回自定义库的名称,以方便自定义库管理和配置。</p>
                     * @return LibName <p>该字段用于返回自定义库的名称,以方便自定义库管理和配置。</p>
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置<p>该字段用于返回自定义库的名称,以方便自定义库管理和配置。</p>
                     * @param _libName <p>该字段用于返回自定义库的名称,以方便自定义库管理和配置。</p>
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回当前标签（Label）下的二级标签。</p>
                     * @return SubLabel <p>该字段用于返回当前标签（Label）下的二级标签。</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置<p>该字段用于返回当前标签（Label）下的二级标签。</p>
                     * @param _subLabel <p>该字段用于返回当前标签（Label）下的二级标签。</p>
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
                     * 获取<p>该字段用于返回当前一级标签（Label）下的关键词、子标签及分数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>该字段用于返回当前一级标签（Label）下的关键词、子标签及分数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>该字段用于返回当前一级标签（Label）下的关键词、子标签及分数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>该字段用于返回当前一级标签（Label）下的关键词、子标签及分数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回违规文本命中信息</p>
                     * @return HitInfos <p>该字段用于返回违规文本命中信息</p>
                     * 
                     */
                    std::vector<HitInfo> GetHitInfos() const;

                    /**
                     * 设置<p>该字段用于返回违规文本命中信息</p>
                     * @param _hitInfos <p>该字段用于返回违规文本命中信息</p>
                     * 
                     */
                    void SetHitInfos(const std::vector<HitInfo>& _hitInfos);

                    /**
                     * 判断参数 HitInfos 是否已赋值
                     * @return HitInfos 是否已赋值
                     * 
                     */
                    bool HitInfosHasBeenSet() const;

                private:

                    /**
                     * <p>该字段用于返回检测结果所对应的全部恶意标签。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型。</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>该字段用于返回对应当前标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>该字段用于返回检测文本命中的关键词信息，用于标注文本违规的具体原因（如：<em>加我微信</em>）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值。</p>
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表文本越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该文本非常有可能属于色情内容；<em>色情 0</em>，则表明该文本不属于色情内容。</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>该字段用于返回自定义关键词对应的词库类型，取值为<strong>1</strong>（黑白库）和<strong>2</strong>（自定义关键词库），若未配置自定义关键词库,则默认值为1（黑白库匹配）。</p>
                     */
                    int64_t m_libType;
                    bool m_libTypeHasBeenSet;

                    /**
                     * <p>该字段用于返回自定义库的ID，以方便自定义库管理和配置。</p>
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * <p>该字段用于返回自定义库的名称,以方便自定义库管理和配置。</p>
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * <p>该字段用于返回当前标签（Label）下的二级标签。</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>该字段用于返回当前一级标签（Label）下的关键词、子标签及分数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>该字段用于返回违规文本命中信息</p>
                     */
                    std::vector<HitInfo> m_hitInfos;
                    bool m_hitInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_DETAILRESULTS_H_
