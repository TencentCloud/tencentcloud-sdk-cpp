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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULECONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则配置
                */
                class RuleConfig : public AbstractModel
                {
                public:
                    RuleConfig();
                    ~RuleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则检测范围类型 1.全表  2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionType 规则检测范围类型 1.全表  2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置规则检测范围类型 1.全表  2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionType 规则检测范围类型 1.全表  2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionType(const uint64_t& _conditionType);

                    /**
                     * 判断参数 ConditionType 是否已赋值
                     * @return ConditionType 是否已赋值
                     * 
                     */
                    bool ConditionTypeHasBeenSet() const;

                    /**
                     * 获取检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Condition 检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _condition 检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取目标检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetCondition 目标检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetCondition() const;

                    /**
                     * 设置目标检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetCondition 目标检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetCondition(const std::string& _targetCondition);

                    /**
                     * 判断参数 TargetCondition 是否已赋值
                     * @return TargetCondition 是否已赋值
                     * 
                     */
                    bool TargetConditionHasBeenSet() const;

                private:

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则检测范围类型 1.全表  2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * 检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 目标检测范围表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetCondition;
                    bool m_targetConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULECONFIG_H_
