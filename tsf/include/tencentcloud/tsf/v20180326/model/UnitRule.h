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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/UnitRuleItem.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关单元化规则
                */
                class UnitRule : public AbstractModel
                {
                public:
                    UnitRule();
                    ~UnitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 规则ID
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
                     * 获取网关实体ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayInstanceId 网关实体ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实体ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayInstanceId 网关实体ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

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
                     * 获取使用状态：enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 使用状态：enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置使用状态：enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 使用状态：enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitRuleItemList 规则项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UnitRuleItem> GetUnitRuleItemList() const;

                    /**
                     * 设置规则项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitRuleItemList 规则项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitRuleItemList(const std::vector<UnitRuleItem>& _unitRuleItemList);

                    /**
                     * 判断参数 UnitRuleItemList 是否已赋值
                     * @return UnitRuleItemList 是否已赋值
                     * 
                     */
                    bool UnitRuleItemListHasBeenSet() const;

                    /**
                     * 获取CreatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime CreatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置CreatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime CreatedTime
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
                     * 获取UpdatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime UpdatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置UpdatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime UpdatedTime
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
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 网关实体ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 使用状态：enabled/disabled
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则项列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UnitRuleItem> m_unitRuleItemList;
                    bool m_unitRuleItemListHasBeenSet;

                    /**
                     * CreatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * UpdatedTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UNITRULE_H_
