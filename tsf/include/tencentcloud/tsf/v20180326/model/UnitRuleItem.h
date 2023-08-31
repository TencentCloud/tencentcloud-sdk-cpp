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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULEITEM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/UnitRuleTag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关单元化规则项
                */
                class UnitRuleItem : public AbstractModel
                {
                public:
                    UnitRuleItem();
                    ~UnitRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取逻辑关系：AND/OR
                     * @return Relationship 逻辑关系：AND/OR
                     * 
                     */
                    std::string GetRelationship() const;

                    /**
                     * 设置逻辑关系：AND/OR
                     * @param _relationship 逻辑关系：AND/OR
                     * 
                     */
                    void SetRelationship(const std::string& _relationship);

                    /**
                     * 判断参数 Relationship 是否已赋值
                     * @return Relationship 是否已赋值
                     * 
                     */
                    bool RelationshipHasBeenSet() const;

                    /**
                     * 获取目的地命名空间ID
                     * @return DestNamespaceId 目的地命名空间ID
                     * 
                     */
                    std::string GetDestNamespaceId() const;

                    /**
                     * 设置目的地命名空间ID
                     * @param _destNamespaceId 目的地命名空间ID
                     * 
                     */
                    void SetDestNamespaceId(const std::string& _destNamespaceId);

                    /**
                     * 判断参数 DestNamespaceId 是否已赋值
                     * @return DestNamespaceId 是否已赋值
                     * 
                     */
                    bool DestNamespaceIdHasBeenSet() const;

                    /**
                     * 获取目的地命名空间名称
                     * @return DestNamespaceName 目的地命名空间名称
                     * 
                     */
                    std::string GetDestNamespaceName() const;

                    /**
                     * 设置目的地命名空间名称
                     * @param _destNamespaceName 目的地命名空间名称
                     * 
                     */
                    void SetDestNamespaceName(const std::string& _destNamespaceName);

                    /**
                     * 判断参数 DestNamespaceName 是否已赋值
                     * @return DestNamespaceName 是否已赋值
                     * 
                     */
                    bool DestNamespaceNameHasBeenSet() const;

                    /**
                     * 获取规则项名称
                     * @return Name 规则项名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则项名称
                     * @param _name 规则项名称
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
                     * 获取规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 规则项ID
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
                     * 获取单元化规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitRuleId 单元化规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnitRuleId() const;

                    /**
                     * 设置单元化规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitRuleId 单元化规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitRuleId(const std::string& _unitRuleId);

                    /**
                     * 判断参数 UnitRuleId 是否已赋值
                     * @return UnitRuleId 是否已赋值
                     * 
                     */
                    bool UnitRuleIdHasBeenSet() const;

                    /**
                     * 获取规则顺序，越小优先级越高：默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 规则顺序，越小优先级越高：默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则顺序，越小优先级越高：默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 规则顺序，越小优先级越高：默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述
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
                     * 获取规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitRuleTagList 规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UnitRuleTag> GetUnitRuleTagList() const;

                    /**
                     * 设置规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitRuleTagList 规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitRuleTagList(const std::vector<UnitRuleTag>& _unitRuleTagList);

                    /**
                     * 判断参数 UnitRuleTagList 是否已赋值
                     * @return UnitRuleTagList 是否已赋值
                     * 
                     */
                    bool UnitRuleTagListHasBeenSet() const;

                    /**
                     * 获取规则项索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemIndex 规则项索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetItemIndex() const;

                    /**
                     * 设置规则项索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemIndex 规则项索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemIndex(const int64_t& _itemIndex);

                    /**
                     * 判断参数 ItemIndex 是否已赋值
                     * @return ItemIndex 是否已赋值
                     * 
                     */
                    bool ItemIndexHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * 逻辑关系：AND/OR
                     */
                    std::string m_relationship;
                    bool m_relationshipHasBeenSet;

                    /**
                     * 目的地命名空间ID
                     */
                    std::string m_destNamespaceId;
                    bool m_destNamespaceIdHasBeenSet;

                    /**
                     * 目的地命名空间名称
                     */
                    std::string m_destNamespaceName;
                    bool m_destNamespaceNameHasBeenSet;

                    /**
                     * 规则项名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则项ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 单元化规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unitRuleId;
                    bool m_unitRuleIdHasBeenSet;

                    /**
                     * 规则顺序，越小优先级越高：默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UnitRuleTag> m_unitRuleTagList;
                    bool m_unitRuleTagListHasBeenSet;

                    /**
                     * 规则项索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_itemIndex;
                    bool m_itemIndexHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULEITEM_H_
