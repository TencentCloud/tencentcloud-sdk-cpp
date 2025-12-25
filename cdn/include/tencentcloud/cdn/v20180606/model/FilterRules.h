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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_FILTERRULES_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_FILTERRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 防盗刷配置规则
                */
                class FilterRules : public AbstractModel
                {
                public:
                    FilterRules();
                    ~FilterRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封禁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterType 封禁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置封禁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterType 封禁类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取封禁规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 封禁规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置封禁规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 封禁规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取封禁规则路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulePaths 封禁规则路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置封禁规则路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rulePaths 封禁规则路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * 封禁类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 封禁规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 封禁规则路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_FILTERRULES_H_
