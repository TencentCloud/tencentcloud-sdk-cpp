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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTA2ACONFIGREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTA2ACONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/A2ASkillInput.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * ModifyAgentA2AConfig请求参数结构体
                */
                class ModifyAgentA2AConfigRequest : public AbstractModel
                {
                public:
                    ModifyAgentA2AConfigRequest();
                    ~ModifyAgentA2AConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent 业务 ID</p>
                     * @return AgentId <p>Agent 业务 ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent 业务 ID</p>
                     * @param _agentId <p>Agent 业务 ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent 级唯一 A2A 开关</p>
                     * @return A2AEnabled <p>Agent 级唯一 A2A 开关</p>
                     * 
                     */
                    bool GetA2AEnabled() const;

                    /**
                     * 设置<p>Agent 级唯一 A2A 开关</p>
                     * @param _a2AEnabled <p>Agent 级唯一 A2A 开关</p>
                     * 
                     */
                    void SetA2AEnabled(const bool& _a2AEnabled);

                    /**
                     * 判断参数 A2AEnabled 是否已赋值
                     * @return A2AEnabled 是否已赋值
                     * 
                     */
                    bool A2AEnabledHasBeenSet() const;

                    /**
                     * 获取<p>A2A 技能集合（原 A2ASkills）</p>
                     * @return A2ASkillSet <p>A2A 技能集合（原 A2ASkills）</p>
                     * 
                     */
                    std::vector<A2ASkillInput> GetA2ASkillSet() const;

                    /**
                     * 设置<p>A2A 技能集合（原 A2ASkills）</p>
                     * @param _a2ASkillSet <p>A2A 技能集合（原 A2ASkills）</p>
                     * 
                     */
                    void SetA2ASkillSet(const std::vector<A2ASkillInput>& _a2ASkillSet);

                    /**
                     * 判断参数 A2ASkillSet 是否已赋值
                     * @return A2ASkillSet 是否已赋值
                     * 
                     */
                    bool A2ASkillSetHasBeenSet() const;

                private:

                    /**
                     * <p>Agent 业务 ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent 级唯一 A2A 开关</p>
                     */
                    bool m_a2AEnabled;
                    bool m_a2AEnabledHasBeenSet;

                    /**
                     * <p>A2A 技能集合（原 A2ASkills）</p>
                     */
                    std::vector<A2ASkillInput> m_a2ASkillSet;
                    bool m_a2ASkillSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTA2ACONFIGREQUEST_H_
