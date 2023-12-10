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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMCONDITIONFILTER_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMCONDITIONFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 策略过滤条件
                */
                class AlarmConditionFilter : public AbstractModel
                {
                public:
                    AlarmConditionFilter();
                    ~AlarmConditionFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expression 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expression 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

                    /**
                     * 获取过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMCONDITIONFILTER_H_
