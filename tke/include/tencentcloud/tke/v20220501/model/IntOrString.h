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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INTORSTRING_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INTORSTRING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 数值结构
                */
                class IntOrString : public AbstractModel
                {
                public:
                    IntOrString();
                    ~IntOrString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数值类型，0是int,  1是字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 数值类型，0是int,  1是字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置数值类型，0是int,  1是字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 数值类型，0是int,  1是字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取整数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntVal 整数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIntVal() const;

                    /**
                     * 设置整数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intVal 整数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntVal(const int64_t& _intVal);

                    /**
                     * 判断参数 IntVal 是否已赋值
                     * @return IntVal 是否已赋值
                     * 
                     */
                    bool IntValHasBeenSet() const;

                    /**
                     * 获取字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrVal 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrVal() const;

                    /**
                     * 设置字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strVal 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrVal(const std::string& _strVal);

                    /**
                     * 判断参数 StrVal 是否已赋值
                     * @return StrVal 是否已赋值
                     * 
                     */
                    bool StrValHasBeenSet() const;

                private:

                    /**
                     * 数值类型，0是int,  1是字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 整数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_intVal;
                    bool m_intValHasBeenSet;

                    /**
                     * 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strVal;
                    bool m_strValHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INTORSTRING_H_
