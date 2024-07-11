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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SLOTSHARINGGROUP_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SLOTSHARINGGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/SlotSharingGroupSpec.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * SlotSharingGroup 描述
                */
                class SlotSharingGroup : public AbstractModel
                {
                public:
                    SlotSharingGroup();
                    ~SlotSharingGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SlotSharingGroup的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name SlotSharingGroup的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置SlotSharingGroup的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name SlotSharingGroup的名字
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
                     * 获取SlotSharingGroup的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec SlotSharingGroup的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SlotSharingGroupSpec GetSpec() const;

                    /**
                     * 设置SlotSharingGroup的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec SlotSharingGroup的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpec(const SlotSharingGroupSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取SlotSharingGroup的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description SlotSharingGroup的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置SlotSharingGroup的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description SlotSharingGroup的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取SlotSharingGroup的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configuration SlotSharingGroup的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetConfiguration() const;

                    /**
                     * 设置SlotSharingGroup的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configuration SlotSharingGroup的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfiguration(const std::vector<Property>& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                private:

                    /**
                     * SlotSharingGroup的名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * SlotSharingGroup的规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SlotSharingGroupSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * SlotSharingGroup的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * SlotSharingGroup的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_configuration;
                    bool m_configurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SLOTSHARINGGROUP_H_
