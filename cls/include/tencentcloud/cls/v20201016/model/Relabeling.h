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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RELABELING_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RELABELING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 标签重新标记配置。
允许动态重写目标、警报、抓取样本和远程写入样本的标签集。
                */
                class Relabeling : public AbstractModel
                {
                public:
                    Relabeling();
                    ~Relabeling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基于正则表达式匹配执行的动作。
- replace: Label替换, 必填: SourceLabels, Separator, Regex, TargetLabel, Replacement
- labeldrop: 丢弃Label, 必填: Regex
- labelkeep: 保留Label, 必填: Regex
- lowercase: 小写化, 必填: SourceLabels, Separator, TargetLabel
- uppercase: 大写化, 必填: SourceLabels, Separator, TargetLabel
- dropequal: 丢弃指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- keepequal: 保留指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- drop: 丢弃指标-正则匹配, 必填: SourceLabels, Separator, Regex
- keep: 保留指标-正则匹配, 必填: SourceLabels, Separator, Regex
- hashmod:哈希取模, 必填: SourceLabels, Separator, TargetLabel, Modulus
- labelmap:Label映射, 必填: Regex, Replacement
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 基于正则表达式匹配执行的动作。
- replace: Label替换, 必填: SourceLabels, Separator, Regex, TargetLabel, Replacement
- labeldrop: 丢弃Label, 必填: Regex
- labelkeep: 保留Label, 必填: Regex
- lowercase: 小写化, 必填: SourceLabels, Separator, TargetLabel
- uppercase: 大写化, 必填: SourceLabels, Separator, TargetLabel
- dropequal: 丢弃指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- keepequal: 保留指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- drop: 丢弃指标-正则匹配, 必填: SourceLabels, Separator, Regex
- keep: 保留指标-正则匹配, 必填: SourceLabels, Separator, Regex
- hashmod:哈希取模, 必填: SourceLabels, Separator, TargetLabel, Modulus
- labelmap:Label映射, 必填: Regex, Replacement
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置基于正则表达式匹配执行的动作。
- replace: Label替换, 必填: SourceLabels, Separator, Regex, TargetLabel, Replacement
- labeldrop: 丢弃Label, 必填: Regex
- labelkeep: 保留Label, 必填: Regex
- lowercase: 小写化, 必填: SourceLabels, Separator, TargetLabel
- uppercase: 大写化, 必填: SourceLabels, Separator, TargetLabel
- dropequal: 丢弃指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- keepequal: 保留指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- drop: 丢弃指标-正则匹配, 必填: SourceLabels, Separator, Regex
- keep: 保留指标-正则匹配, 必填: SourceLabels, Separator, Regex
- hashmod:哈希取模, 必填: SourceLabels, Separator, TargetLabel, Modulus
- labelmap:Label映射, 必填: Regex, Replacement
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 基于正则表达式匹配执行的动作。
- replace: Label替换, 必填: SourceLabels, Separator, Regex, TargetLabel, Replacement
- labeldrop: 丢弃Label, 必填: Regex
- labelkeep: 保留Label, 必填: Regex
- lowercase: 小写化, 必填: SourceLabels, Separator, TargetLabel
- uppercase: 大写化, 必填: SourceLabels, Separator, TargetLabel
- dropequal: 丢弃指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- keepequal: 保留指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- drop: 丢弃指标-正则匹配, 必填: SourceLabels, Separator, Regex
- keep: 保留指标-正则匹配, 必填: SourceLabels, Separator, Regex
- hashmod:哈希取模, 必填: SourceLabels, Separator, TargetLabel, Modulus
- labelmap:Label映射, 必填: Regex, Replacement
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取原始label
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceLabels 原始label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSourceLabels() const;

                    /**
                     * 设置原始label
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceLabels 原始label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceLabels(const std::vector<std::string>& _sourceLabels);

                    /**
                     * 判断参数 SourceLabels 是否已赋值
                     * @return SourceLabels 是否已赋值
                     * 
                     */
                    bool SourceLabelsHasBeenSet() const;

                    /**
                     * 获取原始label连接符。 必填时不能为空串， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Separator 原始label连接符。 必填时不能为空串， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置原始label连接符。 必填时不能为空串， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _separator 原始label连接符。 必填时不能为空串， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                    /**
                     * 获取目标label。必填时不能为空串，校验格式：`^[a-zA-Z_][a-zA-Z0-9_]*$` ， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetLabel 目标label。必填时不能为空串，校验格式：`^[a-zA-Z_][a-zA-Z0-9_]*$` ， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetLabel() const;

                    /**
                     * 设置目标label。必填时不能为空串，校验格式：`^[a-zA-Z_][a-zA-Z0-9_]*$` ， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetLabel 目标label。必填时不能为空串，校验格式：`^[a-zA-Z_][a-zA-Z0-9_]*$` ， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetLabel(const std::string& _targetLabel);

                    /**
                     * 判断参数 TargetLabel 是否已赋值
                     * @return TargetLabel 是否已赋值
                     * 
                     */
                    bool TargetLabelHasBeenSet() const;

                    /**
                     * 获取替换值。如果正则表达式匹配，则对其执行替换操作。
- 必填时不能为空串，长度不能超过256
- 当action为LabelMap时， Replacement 校验格式：`^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replacement 替换值。如果正则表达式匹配，则对其执行替换操作。
- 必填时不能为空串，长度不能超过256
- 当action为LabelMap时， Replacement 校验格式：`^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplacement() const;

                    /**
                     * 设置替换值。如果正则表达式匹配，则对其执行替换操作。
- 必填时不能为空串，长度不能超过256
- 当action为LabelMap时， Replacement 校验格式：`^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replacement 替换值。如果正则表达式匹配，则对其执行替换操作。
- 必填时不能为空串，长度不能超过256
- 当action为LabelMap时， Replacement 校验格式：`^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplacement(const std::string& _replacement);

                    /**
                     * 判断参数 Replacement 是否已赋值
                     * @return Replacement 是否已赋值
                     * 
                     */
                    bool ReplacementHasBeenSet() const;

                    /**
                     * 获取正则表达式。提取与之匹配值。必填时不能为空串，校验必须是一个合法的 RE2 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regex 正则表达式。提取与之匹配值。必填时不能为空串，校验必须是一个合法的 RE2 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置正则表达式。提取与之匹配值。必填时不能为空串，校验必须是一个合法的 RE2 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regex 正则表达式。提取与之匹配值。必填时不能为空串，校验必须是一个合法的 RE2 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取获取源标签值的哈希值。必填时不能为空,不能为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Modulus 获取源标签值的哈希值。必填时不能为空,不能为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModulus() const;

                    /**
                     * 设置获取源标签值的哈希值。必填时不能为空,不能为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modulus 获取源标签值的哈希值。必填时不能为空,不能为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModulus(const uint64_t& _modulus);

                    /**
                     * 判断参数 Modulus 是否已赋值
                     * @return Modulus 是否已赋值
                     * 
                     */
                    bool ModulusHasBeenSet() const;

                private:

                    /**
                     * 基于正则表达式匹配执行的动作。
- replace: Label替换, 必填: SourceLabels, Separator, Regex, TargetLabel, Replacement
- labeldrop: 丢弃Label, 必填: Regex
- labelkeep: 保留Label, 必填: Regex
- lowercase: 小写化, 必填: SourceLabels, Separator, TargetLabel
- uppercase: 大写化, 必填: SourceLabels, Separator, TargetLabel
- dropequal: 丢弃指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- keepequal: 保留指标-完全匹配, 必填: SourceLabels, Separator, TargetLabel
- drop: 丢弃指标-正则匹配, 必填: SourceLabels, Separator, Regex
- keep: 保留指标-正则匹配, 必填: SourceLabels, Separator, Regex
- hashmod:哈希取模, 必填: SourceLabels, Separator, TargetLabel, Modulus
- labelmap:Label映射, 必填: Regex, Replacement
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 原始label
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sourceLabels;
                    bool m_sourceLabelsHasBeenSet;

                    /**
                     * 原始label连接符。 必填时不能为空串， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                    /**
                     * 目标label。必填时不能为空串，校验格式：`^[a-zA-Z_][a-zA-Z0-9_]*$` ， 长度不能超过256
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetLabel;
                    bool m_targetLabelHasBeenSet;

                    /**
                     * 替换值。如果正则表达式匹配，则对其执行替换操作。
- 必填时不能为空串，长度不能超过256
- 当action为LabelMap时， Replacement 校验格式：`^(?:(?:[a-zA-Z_]|\$(?:\{\w+\}|\w+))+\w*)+$`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replacement;
                    bool m_replacementHasBeenSet;

                    /**
                     * 正则表达式。提取与之匹配值。必填时不能为空串，校验必须是一个合法的 RE2 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 获取源标签值的哈希值。必填时不能为空,不能为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modulus;
                    bool m_modulusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RELABELING_H_
