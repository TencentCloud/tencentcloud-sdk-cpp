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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_APPLYPARAM_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_APPLYPARAM_H_

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
                * bpaas申请入参
                */
                class ApplyParam : public AbstractModel
                {
                public:
                    ApplyParam();
                    ~ApplyParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审批流中表单唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 审批流中表单唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置审批流中表单唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 审批流中表单唯一标识
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
                     * 获取表单value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 表单value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置表单value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 表单value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取表单参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 表单参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表单参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 表单参数描述
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
                     * 审批流中表单唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 表单value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 表单参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_APPLYPARAM_H_
