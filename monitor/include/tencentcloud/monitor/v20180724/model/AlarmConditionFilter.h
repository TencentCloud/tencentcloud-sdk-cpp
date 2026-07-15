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
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>EXPRESSION： 用表达式过滤</li><li>DIMENSION： 用维度条件过滤</li><li>BIND_ALL： 绑定全部实例</li><li>LOG_ALARM： 日志告警专用过滤</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>EXPRESSION： 用表达式过滤</li><li>DIMENSION： 用维度条件过滤</li><li>BIND_ALL： 绑定全部实例</li><li>LOG_ALARM： 日志告警专用过滤</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>EXPRESSION： 用表达式过滤</li><li>DIMENSION： 用维度条件过滤</li><li>BIND_ALL： 绑定全部实例</li><li>LOG_ALARM： 日志告警专用过滤</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>EXPRESSION： 用表达式过滤</li><li>DIMENSION： 用维度条件过滤</li><li>BIND_ALL： 绑定全部实例</li><li>LOG_ALARM： 日志告警专用过滤</li></ul>
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
                     * 获取<p>表达式</p><p>Type为Expression有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expression <p>表达式</p><p>Type为Expression有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置<p>表达式</p><p>Type为Expression有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expression <p>表达式</p><p>Type为Expression有值</p>
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
                     * 获取<p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions <p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置<p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions <p>过滤条件</p>
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
                     * <p>类型</p><p>枚举值：</p><ul><li>EXPRESSION： 用表达式过滤</li><li>DIMENSION： 用维度条件过滤</li><li>BIND_ALL： 绑定全部实例</li><li>LOG_ALARM： 日志告警专用过滤</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>表达式</p><p>Type为Expression有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * <p>过滤条件</p>
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
