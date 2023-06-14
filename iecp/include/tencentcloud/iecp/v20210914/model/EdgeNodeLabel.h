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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODELABEL_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODELABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 边缘节点标签
                */
                class EdgeNodeLabel : public AbstractModel
                {
                public:
                    EdgeNodeLabel();
                    ~EdgeNodeLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 标签名称
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
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 标签值
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

                    /**
                     * 获取是否受保护
                     * @return Protected 是否受保护
                     * 
                     */
                    bool GetProtected() const;

                    /**
                     * 设置是否受保护
                     * @param _protected 是否受保护
                     * 
                     */
                    void SetProtected(const bool& _protected);

                    /**
                     * 判断参数 Protected 是否已赋值
                     * @return Protected 是否已赋值
                     * 
                     */
                    bool ProtectedHasBeenSet() const;

                private:

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 是否受保护
                     */
                    bool m_protected;
                    bool m_protectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODELABEL_H_
