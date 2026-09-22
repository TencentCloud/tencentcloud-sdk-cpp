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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeExternalAgent返回参数结构体
                */
                class DescribeExternalAgentResponse : public AbstractModel
                {
                public:
                    DescribeExternalAgentResponse();
                    ~DescribeExternalAgentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>外部 A2A agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AAgentId <p>外部 A2A agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AAgentId() const;

                    /**
                     * 判断参数 A2AAgentId 是否已赋值
                     * @return A2AAgentId 是否已赋值
                     * 
                     */
                    bool A2AAgentIdHasBeenSet() const;

                    /**
                     * 获取<p>外部 Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>外部 Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>外部 A2A Server URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint <p>外部 A2A Server URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>绑定记录 ID（已绑定时返回）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindingId <p>绑定记录 ID（已绑定时返回）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindingId() const;

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                    /**
                     * 获取<p>是否已绑定到当前 Agent</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bound <p>是否已绑定到当前 Agent</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBound() const;

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取<p>头像地址（取自 provider card 的 iconUrl；为空时前端回落首字母头像）</p>
                     * @return IconUrl <p>头像地址（取自 provider card 的 iconUrl；为空时前端回落首字母头像）</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>外部 agent card 声明的版本号</p>
                     * @return A2AVersion <p>外部 agent card 声明的版本号</p>
                     * 
                     */
                    std::string GetA2AVersion() const;

                    /**
                     * 判断参数 A2AVersion 是否已赋值
                     * @return A2AVersion 是否已赋值
                     * 
                     */
                    bool A2AVersionHasBeenSet() const;

                    /**
                     * 获取<p>A2A card skills 集合</p>
                     * @return A2ASkillSet <p>A2A card skills 集合</p>
                     * 
                     */
                    std::vector<A2ASkillItem> GetA2ASkillSet() const;

                    /**
                     * 判断参数 A2ASkillSet 是否已赋值
                     * @return A2ASkillSet 是否已赋值
                     * 
                     */
                    bool A2ASkillSetHasBeenSet() const;

                private:

                    /**
                     * <p>外部 A2A agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AAgentId;
                    bool m_a2AAgentIdHasBeenSet;

                    /**
                     * <p>外部 Agent 名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>外部 A2A Server URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>绑定记录 ID（已绑定时返回）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * <p>是否已绑定到当前 Agent</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * <p>头像地址（取自 provider card 的 iconUrl；为空时前端回落首字母头像）</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>外部 agent card 声明的版本号</p>
                     */
                    std::string m_a2AVersion;
                    bool m_a2AVersionHasBeenSet;

                    /**
                     * <p>A2A card skills 集合</p>
                     */
                    std::vector<A2ASkillItem> m_a2ASkillSet;
                    bool m_a2ASkillSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTRESPONSE_H_
