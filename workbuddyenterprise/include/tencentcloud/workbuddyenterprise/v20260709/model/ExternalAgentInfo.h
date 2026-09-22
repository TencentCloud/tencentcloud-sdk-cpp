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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXTERNALAGENTINFO_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXTERNALAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/A2ASkillItem.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 外部 Agent 列表/详情项
                */
                class ExternalAgentInfo : public AbstractModel
                {
                public:
                    ExternalAgentInfo();
                    ~ExternalAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部 A2A agent ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AAgentId 外部 A2A agent ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AAgentId() const;

                    /**
                     * 设置外部 A2A agent ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AAgentId 外部 A2A agent ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AAgentId(const std::string& _a2AAgentId);

                    /**
                     * 判断参数 A2AAgentId 是否已赋值
                     * @return A2AAgentId 是否已赋值
                     * 
                     */
                    bool A2AAgentIdHasBeenSet() const;

                    /**
                     * 获取外部 Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 外部 Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置外部 Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 外部 Agent 名称
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取外部 A2A Server URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint 外部 A2A Server URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置外部 A2A Server URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoint 外部 A2A Server URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取绑定记录 ID（已绑定时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindingId 绑定记录 ID（已绑定时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindingId() const;

                    /**
                     * 设置绑定记录 ID（已绑定时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindingId 绑定记录 ID（已绑定时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindingId(const std::string& _bindingId);

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                    /**
                     * 获取是否已绑定到当前 Agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bound 是否已绑定到当前 Agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBound() const;

                    /**
                     * 设置是否已绑定到当前 Agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bound 是否已绑定到当前 Agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBound(const bool& _bound);

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取头像地址（取自 provider card 的 iconUrl）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IconUrl 头像地址（取自 provider card 的 iconUrl）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置头像地址（取自 provider card 的 iconUrl）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iconUrl 头像地址（取自 provider card 的 iconUrl）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取外部 agent card 声明的版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AVersion 外部 agent card 声明的版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AVersion() const;

                    /**
                     * 设置外部 agent card 声明的版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AVersion 外部 agent card 声明的版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AVersion(const std::string& _a2AVersion);

                    /**
                     * 判断参数 A2AVersion 是否已赋值
                     * @return A2AVersion 是否已赋值
                     * 
                     */
                    bool A2AVersionHasBeenSet() const;

                    /**
                     * 获取A2A card skills 集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2ASkillSet A2A card skills 集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<A2ASkillItem> GetA2ASkillSet() const;

                    /**
                     * 设置A2A card skills 集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2ASkillSet A2A card skills 集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2ASkillSet(const std::vector<A2ASkillItem>& _a2ASkillSet);

                    /**
                     * 判断参数 A2ASkillSet 是否已赋值
                     * @return A2ASkillSet 是否已赋值
                     * 
                     */
                    bool A2ASkillSetHasBeenSet() const;

                private:

                    /**
                     * 外部 A2A agent ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AAgentId;
                    bool m_a2AAgentIdHasBeenSet;

                    /**
                     * 外部 Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 外部 A2A Server URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 绑定记录 ID（已绑定时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * 是否已绑定到当前 Agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * 头像地址（取自 provider card 的 iconUrl）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 外部 agent card 声明的版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AVersion;
                    bool m_a2AVersionHasBeenSet;

                    /**
                     * A2A card skills 集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<A2ASkillItem> m_a2ASkillSet;
                    bool m_a2ASkillSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXTERNALAGENTINFO_H_
