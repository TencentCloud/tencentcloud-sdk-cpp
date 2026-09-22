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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ASKILLITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ASKILLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * A2A skill 列表项（出参用，来自 A2A card 解析结果）
                */
                class A2ASkillItem : public AbstractModel
                {
                public:
                    A2ASkillItem();
                    ~A2ASkillItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取A2A skill ID（加 A2A 前缀与内部 SkillId 概念区分）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2ASkillId A2A skill ID（加 A2A 前缀与内部 SkillId 概念区分）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2ASkillId() const;

                    /**
                     * 设置A2A skill ID（加 A2A 前缀与内部 SkillId 概念区分）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2ASkillId A2A skill ID（加 A2A 前缀与内部 SkillId 概念区分）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2ASkillId(const std::string& _a2ASkillId);

                    /**
                     * 判断参数 A2ASkillId 是否已赋值
                     * @return A2ASkillId 是否已赋值
                     * 
                     */
                    bool A2ASkillIdHasBeenSet() const;

                    /**
                     * 获取skill 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name skill 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置skill 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name skill 名称
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
                     * 获取skill 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description skill 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置skill 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description skill 描述
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

                private:

                    /**
                     * A2A skill ID（加 A2A 前缀与内部 SkillId 概念区分）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2ASkillId;
                    bool m_a2ASkillIdHasBeenSet;

                    /**
                     * skill 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * skill 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ASKILLITEM_H_
