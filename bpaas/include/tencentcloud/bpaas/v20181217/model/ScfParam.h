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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_SCFPARAM_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_SCFPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * Scf函数入参
                */
                class ScfParam : public AbstractModel
                {
                public:
                    ScfParam();
                    ~ScfParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数Key
                     * @return Key 参数Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置参数Key
                     * @param _key 参数Key
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
                     * 获取参数类型 1用户输入 2预设参数 3表单参数
                     * @return Type 参数类型 1用户输入 2预设参数 3表单参数
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置参数类型 1用户输入 2预设参数 3表单参数
                     * @param _type 参数类型 1用户输入 2预设参数 3表单参数
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取参数值
                     * @return Values 参数值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置参数值
                     * @param _values 参数值
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 参数Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 参数类型 1用户输入 2预设参数 3表单参数
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_SCFPARAM_H_
