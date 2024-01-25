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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CLONEOBJECTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CLONEOBJECTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SubCloneObjectDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 克隆对象DTO
                */
                class CloneObjectDTO : public AbstractModel
                {
                public:
                    CloneObjectDTO();
                    ~CloneObjectDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OBJECT_WORKFLOW，OBJECT_PARAMETER，OBJECT_EVENT，OBJECT_FUNCTION，MAPPING_CALC_ENGINE_INSTANCE，MAPPING_RESOURCE_QUEUE，MAPPING_DATASOURCE，MAPPING_DATABASE，STRATEGY_NAME_CONFLICT，STRATEGY_TASK_AUTO_COMMIT，STRATEGY_PARAMETER_AUTO_COMMIT，STRATEGY_FUNCTION_AUTO_COMMIT，STRATEGY_EVENT_AUTO_COMMIT，CONDITION_WORKFLOW，CONDITION_PARAMETER，CONDITION_EVENT，CONDITION_FUNCTION，OBJECT_PRE_CHECK
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type OBJECT_WORKFLOW，OBJECT_PARAMETER，OBJECT_EVENT，OBJECT_FUNCTION，MAPPING_CALC_ENGINE_INSTANCE，MAPPING_RESOURCE_QUEUE，MAPPING_DATASOURCE，MAPPING_DATABASE，STRATEGY_NAME_CONFLICT，STRATEGY_TASK_AUTO_COMMIT，STRATEGY_PARAMETER_AUTO_COMMIT，STRATEGY_FUNCTION_AUTO_COMMIT，STRATEGY_EVENT_AUTO_COMMIT，CONDITION_WORKFLOW，CONDITION_PARAMETER，CONDITION_EVENT，CONDITION_FUNCTION，OBJECT_PRE_CHECK
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置OBJECT_WORKFLOW，OBJECT_PARAMETER，OBJECT_EVENT，OBJECT_FUNCTION，MAPPING_CALC_ENGINE_INSTANCE，MAPPING_RESOURCE_QUEUE，MAPPING_DATASOURCE，MAPPING_DATABASE，STRATEGY_NAME_CONFLICT，STRATEGY_TASK_AUTO_COMMIT，STRATEGY_PARAMETER_AUTO_COMMIT，STRATEGY_FUNCTION_AUTO_COMMIT，STRATEGY_EVENT_AUTO_COMMIT，CONDITION_WORKFLOW，CONDITION_PARAMETER，CONDITION_EVENT，CONDITION_FUNCTION，OBJECT_PRE_CHECK
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type OBJECT_WORKFLOW，OBJECT_PARAMETER，OBJECT_EVENT，OBJECT_FUNCTION，MAPPING_CALC_ENGINE_INSTANCE，MAPPING_RESOURCE_QUEUE，MAPPING_DATASOURCE，MAPPING_DATABASE，STRATEGY_NAME_CONFLICT，STRATEGY_TASK_AUTO_COMMIT，STRATEGY_PARAMETER_AUTO_COMMIT，STRATEGY_FUNCTION_AUTO_COMMIT，STRATEGY_EVENT_AUTO_COMMIT，CONDITION_WORKFLOW，CONDITION_PARAMETER，CONDITION_EVENT，CONDITION_FUNCTION，OBJECT_PRE_CHECK
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
                     * 获取对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 对象Id
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
                     * 获取对象值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 对象值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置对象值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 对象值
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
                     * 获取子对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubInfo 子对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubCloneObjectDTO> GetSubInfo() const;

                    /**
                     * 设置子对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subInfo 子对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubInfo(const std::vector<SubCloneObjectDTO>& _subInfo);

                    /**
                     * 判断参数 SubInfo 是否已赋值
                     * @return SubInfo 是否已赋值
                     * 
                     */
                    bool SubInfoHasBeenSet() const;

                private:

                    /**
                     * OBJECT_WORKFLOW，OBJECT_PARAMETER，OBJECT_EVENT，OBJECT_FUNCTION，MAPPING_CALC_ENGINE_INSTANCE，MAPPING_RESOURCE_QUEUE，MAPPING_DATASOURCE，MAPPING_DATABASE，STRATEGY_NAME_CONFLICT，STRATEGY_TASK_AUTO_COMMIT，STRATEGY_PARAMETER_AUTO_COMMIT，STRATEGY_FUNCTION_AUTO_COMMIT，STRATEGY_EVENT_AUTO_COMMIT，CONDITION_WORKFLOW，CONDITION_PARAMETER，CONDITION_EVENT，CONDITION_FUNCTION，OBJECT_PRE_CHECK
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对象Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 对象值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 子对象列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubCloneObjectDTO> m_subInfo;
                    bool m_subInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CLONEOBJECTDTO_H_
