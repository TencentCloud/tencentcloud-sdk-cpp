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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBCLONEOBJECTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBCLONEOBJECTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 项目克隆子对象DTO
                */
                class SubCloneObjectDTO : public AbstractModel
                {
                public:
                    SubCloneObjectDTO();
                    ~SubCloneObjectDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OBJECT_SUB_TASK，CONDITION_SUB_FUNCTION，CONDITION_SUB_EVENT，CONDITION_SUB_PARAMETER，CONDITION_SUB_WORKFLOW
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type OBJECT_SUB_TASK，CONDITION_SUB_FUNCTION，CONDITION_SUB_EVENT，CONDITION_SUB_PARAMETER，CONDITION_SUB_WORKFLOW
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置OBJECT_SUB_TASK，CONDITION_SUB_FUNCTION，CONDITION_SUB_EVENT，CONDITION_SUB_PARAMETER，CONDITION_SUB_WORKFLOW
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type OBJECT_SUB_TASK，CONDITION_SUB_FUNCTION，CONDITION_SUB_EVENT，CONDITION_SUB_PARAMETER，CONDITION_SUB_WORKFLOW
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
                     * 获取子对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 子对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置子对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 子对象Id
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
                     * 获取子对象值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 子对象值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置子对象值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 子对象值
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
                     * 获取子对象扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtInfo 子对象扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExtInfo() const;

                    /**
                     * 设置子对象扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extInfo 子对象扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtInfo(const std::vector<std::string>& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * OBJECT_SUB_TASK，CONDITION_SUB_FUNCTION，CONDITION_SUB_EVENT，CONDITION_SUB_PARAMETER，CONDITION_SUB_WORKFLOW
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 子对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 子对象值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 子对象扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBCLONEOBJECTDTO_H_
