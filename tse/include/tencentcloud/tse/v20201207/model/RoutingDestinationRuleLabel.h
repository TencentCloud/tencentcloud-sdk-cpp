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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ROUTINGDESTINATIONRULELABEL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ROUTINGDESTINATIONRULELABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 目标服务实例实例标签信息
                */
                class RoutingDestinationRuleLabel : public AbstractModel
                {
                public:
                    RoutingDestinationRuleLabel();
                    ~RoutingDestinationRuleLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelKey 标签键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置标签键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelKey 标签键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelKey(const std::string& _labelKey);

                    /**
                     * 判断参数 LabelKey 是否已赋值
                     * @return LabelKey 是否已赋值
                     * 
                     */
                    bool LabelKeyHasBeenSet() const;

                    /**
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelType 表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelType() const;

                    /**
                     * 设置表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelType 表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelType(const std::string& _labelType);

                    /**
                     * 判断参数 LabelType 是否已赋值
                     * @return LabelType 是否已赋值
                     * 
                     */
                    bool LabelTypeHasBeenSet() const;

                    /**
                     * 获取值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValueType 值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValueType() const;

                    /**
                     * 设置值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValueType 值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValueType(const std::string& _labelValueType);

                    /**
                     * 判断参数 LabelValueType 是否已赋值
                     * @return LabelValueType 是否已赋值
                     * 
                     */
                    bool LabelValueTypeHasBeenSet() const;

                private:

                    /**
                     * 标签键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * 表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelType;
                    bool m_labelTypeHasBeenSet;

                    /**
                     * 值类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValueType;
                    bool m_labelValueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ROUTINGDESTINATIONRULELABEL_H_
