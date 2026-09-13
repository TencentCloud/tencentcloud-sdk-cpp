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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADVANCEDDEPENDENCYCONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADVANCEDDEPENDENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TaskRunConditionRule.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 高级依赖配置
                */
                class AdvancedDependencyConfig : public AbstractModel
                {
                public:
                    AdvancedDependencyConfig();
                    ~AdvancedDependencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取逻辑运算符号OR / AND
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 逻辑运算符号OR / AND
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置逻辑运算符号OR / AND
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 逻辑运算符号OR / AND
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取任务运行条件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 任务运行条件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskRunConditionRule> GetConditions() const;

                    /**
                     * 设置任务运行条件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 任务运行条件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<TaskRunConditionRule>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * 逻辑运算符号OR / AND
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 任务运行条件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskRunConditionRule> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADVANCEDDEPENDENCYCONFIG_H_
