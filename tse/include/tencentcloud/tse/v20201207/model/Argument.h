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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ARGUMENT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ARGUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ArgumentValue.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 路由规则来源服务的请求规则配置详情
                */
                class Argument : public AbstractModel
                {
                public:
                    Argument();
                    ~Argument() = default;
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
                     * 获取key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key key值
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
                     * 获取匹配条件参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 匹配条件参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ArgumentValue GetValue() const;

                    /**
                     * 设置匹配条件参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 匹配条件参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const ArgumentValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * key值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 匹配条件参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ArgumentValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ARGUMENT_H_
