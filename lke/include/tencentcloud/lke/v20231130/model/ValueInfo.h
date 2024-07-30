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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_VALUEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_VALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 任务流程参数信息
                */
                class ValueInfo : public AbstractModel
                {
                public:
                    ValueInfo();
                    ~ValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
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

                    /**
                     * 获取值类型：0:未知或者空, 1:string, 2:int, 3:float, 4:bool, 5:array(字符串数组), 6: object_array(结构体数组), 7: object(结构体)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueType 值类型：0:未知或者空, 1:string, 2:int, 3:float, 4:bool, 5:array(字符串数组), 6: object_array(结构体数组), 7: object(结构体)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetValueType() const;

                    /**
                     * 设置值类型：0:未知或者空, 1:string, 2:int, 3:float, 4:bool, 5:array(字符串数组), 6: object_array(结构体数组), 7: object(结构体)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueType 值类型：0:未知或者空, 1:string, 2:int, 3:float, 4:bool, 5:array(字符串数组), 6: object_array(结构体数组), 7: object(结构体)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueType(const int64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取string
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueStr string
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueStr() const;

                    /**
                     * 设置string
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueStr string
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueStr(const std::string& _valueStr);

                    /**
                     * 判断参数 ValueStr 是否已赋值
                     * @return ValueStr 是否已赋值
                     * 
                     */
                    bool ValueStrHasBeenSet() const;

                    /**
                     * 获取int（避免精度丢失使用字符串返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueInt int（避免精度丢失使用字符串返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueInt() const;

                    /**
                     * 设置int（避免精度丢失使用字符串返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueInt int（避免精度丢失使用字符串返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueInt(const std::string& _valueInt);

                    /**
                     * 判断参数 ValueInt 是否已赋值
                     * @return ValueInt 是否已赋值
                     * 
                     */
                    bool ValueIntHasBeenSet() const;

                    /**
                     * 获取float
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueFloat float
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValueFloat() const;

                    /**
                     * 设置float
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueFloat float
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueFloat(const double& _valueFloat);

                    /**
                     * 判断参数 ValueFloat 是否已赋值
                     * @return ValueFloat 是否已赋值
                     * 
                     */
                    bool ValueFloatHasBeenSet() const;

                    /**
                     * 获取bool
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueBool bool
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetValueBool() const;

                    /**
                     * 设置bool
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueBool bool
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueBool(const bool& _valueBool);

                    /**
                     * 判断参数 ValueBool 是否已赋值
                     * @return ValueBool 是否已赋值
                     * 
                     */
                    bool ValueBoolHasBeenSet() const;

                    /**
                     * 获取array
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueStrArray array
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValueStrArray() const;

                    /**
                     * 设置array
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueStrArray array
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueStrArray(const std::vector<std::string>& _valueStrArray);

                    /**
                     * 判断参数 ValueStrArray 是否已赋值
                     * @return ValueStrArray 是否已赋值
                     * 
                     */
                    bool ValueStrArrayHasBeenSet() const;

                private:

                    /**
                     * 值ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 值类型：0:未知或者空, 1:string, 2:int, 3:float, 4:bool, 5:array(字符串数组), 6: object_array(结构体数组), 7: object(结构体)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * string
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueStr;
                    bool m_valueStrHasBeenSet;

                    /**
                     * int（避免精度丢失使用字符串返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueInt;
                    bool m_valueIntHasBeenSet;

                    /**
                     * float
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_valueFloat;
                    bool m_valueFloatHasBeenSet;

                    /**
                     * bool
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_valueBool;
                    bool m_valueBoolHasBeenSet;

                    /**
                     * array
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_valueStrArray;
                    bool m_valueStrArrayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_VALUEINFO_H_
