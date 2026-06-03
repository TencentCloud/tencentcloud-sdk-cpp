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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUECONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/EmptyValue.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 空值展示样式配置结构
                */
                class EmptyValueConfig : public AbstractModel
                {
                public:
                    EmptyValueConfig();
                    ~EmptyValueConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数值类字段空值样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Number 数值类字段空值样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmptyValue GetNumber() const;

                    /**
                     * 设置数值类字段空值样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _number 数值类字段空值样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumber(const EmptyValue& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取字符串字段空置样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return String 字符串字段空置样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmptyValue GetString() const;

                    /**
                     * 设置字符串字段空置样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _string 字符串字段空置样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetString(const EmptyValue& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                private:

                    /**
                     * 数值类字段空值样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmptyValue m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 字符串字段空置样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmptyValue m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUECONFIG_H_
