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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_TEXTRESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_TEXTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/HitInfo.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 音频文本内容审核结果
                */
                class TextResult : public AbstractModel
                {
                public:
                    TextResult();
                    ~TextResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告。
以及其他令人反感、不安全或不适宜的内容类型。

如音频中无复杂类型「TextResults」的返回则代表该音频中无相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告。
以及其他令人反感、不安全或不适宜的内容类型。

如音频中无复杂类型「TextResults」的返回则代表该音频中无相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告。
以及其他令人反感、不安全或不适宜的内容类型。

如音频中无复杂类型「TextResults」的返回则代表该音频中无相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告。
以及其他令人反感、不安全或不适宜的内容类型。

如音频中无复杂类型「TextResults」的返回则代表该音频中无相关违规内容；
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
                     * 获取命中的关键词，为空则代表该违规内容出自于模型的判断；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 命中的关键词，为空则代表该违规内容出自于模型的判断；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置命中的关键词，为空则代表该违规内容出自于模型的判断；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywords 命中的关键词，为空则代表该违规内容出自于模型的判断；
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取命中关键词库的库标识；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibId 命中关键词库的库标识；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置命中关键词库的库标识；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libId 命中关键词库的库标识；
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取命中关键词库的名字；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 命中关键词库的名字；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置命中关键词库的名字；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 命中关键词库的名字；
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Porn 99，则该样本属于色情的置信度非常高。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Porn 99，则该样本属于色情的置信度非常高。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Porn 99，则该样本属于色情的置信度非常高。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Porn 99，则该样本属于色情的置信度非常高。）
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
                     * 获取建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
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
                     * 获取自定义词库的类型，自定义词库相关的信息可登录控制台中查看；
1：自定义黑白库；
2：公库；
                     * @return LibType 自定义词库的类型，自定义词库相关的信息可登录控制台中查看；
1：自定义黑白库；
2：公库；
                     * 
                     */
                    int64_t GetLibType() const;

                    /**
                     * 设置自定义词库的类型，自定义词库相关的信息可登录控制台中查看；
1：自定义黑白库；
2：公库；
                     * @param _libType 自定义词库的类型，自定义词库相关的信息可登录控制台中查看；
1：自定义黑白库；
2：公库；
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
                     * 获取该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabel 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabel 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
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
                     * 获取该字段用于返回违规文本命中信息
                     * @return HitInfos 该字段用于返回违规文本命中信息
                     * 
                     */
                    std::vector<HitInfo> GetHitInfos() const;

                    /**
                     * 设置该字段用于返回违规文本命中信息
                     * @param _hitInfos 该字段用于返回违规文本命中信息
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
                     * 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告。
以及其他令人反感、不安全或不适宜的内容类型。

如音频中无复杂类型「TextResults」的返回则代表该音频中无相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 命中的关键词，为空则代表该违规内容出自于模型的判断；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 命中关键词库的库标识；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 命中关键词库的名字；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Porn 99，则该样本属于色情的置信度非常高。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 自定义词库的类型，自定义词库相关的信息可登录控制台中查看；
1：自定义黑白库；
2：公库；
                     */
                    int64_t m_libType;
                    bool m_libTypeHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 该字段用于返回违规文本命中信息
                     */
                    std::vector<HitInfo> m_hitInfos;
                    bool m_hitInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_TEXTRESULT_H_
