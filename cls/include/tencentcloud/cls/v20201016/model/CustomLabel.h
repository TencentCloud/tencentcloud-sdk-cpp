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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMLABEL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMLABEL_H_

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
                * 自定义标签结构体
                */
                class CustomLabel : public AbstractModel
                {
                public:
                    CustomLabel();
                    ~CustomLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签的键。
- 必须以字母或下划线开头，但不可以双下划线（__）开头，后面可以跟任意字母，数字或下划线。
- 最大支持256个字符。
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 标签的键。
- 必须以字母或下划线开头，但不可以双下划线（__）开头，后面可以跟任意字母，数字或下划线。
- 最大支持256个字符。
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标签的键。
- 必须以字母或下划线开头，但不可以双下划线（__）开头，后面可以跟任意字母，数字或下划线。
- 最大支持256个字符。
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 标签的键。
- 必须以字母或下划线开头，但不可以双下划线（__）开头，后面可以跟任意字母，数字或下划线。
- 最大支持256个字符。
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取标签的值。
- 最大支持256个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 标签的值。
- 最大支持256个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签的值。
- 最大支持256个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 标签的值。
- 最大支持256个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 标签的键。
- 必须以字母或下划线开头，但不可以双下划线（__）开头，后面可以跟任意字母，数字或下划线。
- 最大支持256个字符。
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签的值。
- 最大支持256个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMLABEL_H_
