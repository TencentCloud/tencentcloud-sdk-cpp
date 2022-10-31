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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_KEYVALUEPAIROPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_KEYVALUEPAIROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 存放配置时的额外信息
                */
                class KeyValuePairOption : public AbstractModel
                {
                public:
                    KeyValuePairOption();
                    ~KeyValuePairOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取选项key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 选项key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKey() const;

                    /**
                     * 设置选项key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Key 选项key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取选项value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 选项value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置选项value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 选项value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 选项key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 选项value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_KEYVALUEPAIROPTION_H_
