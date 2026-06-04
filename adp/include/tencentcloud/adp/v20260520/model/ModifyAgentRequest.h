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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAGENTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentSpec.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyAgent请求参数结构体
                */
                class ModifyAgentRequest : public AbstractModel
                {
                public:
                    ModifyAgentRequest();
                    ~ModifyAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用Id</p>
                     * @return AppId <p>应用Id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用Id</p>
                     * @param _appId <p>应用Id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent Id</p>
                     * @return AgentId <p>Agent Id</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent Id</p>
                     * @param _agentId <p>Agent Id</p>
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
                     * 获取<p>修改后的Agent的信息</p>
                     * @return Agent <p>修改后的Agent的信息</p>
                     * 
                     */
                    AgentSpec GetAgent() const;

                    /**
                     * 设置<p>修改后的Agent的信息</p>
                     * @param _agent <p>修改后的Agent的信息</p>
                     * 
                     */
                    void SetAgent(const AgentSpec& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>需要更新的字段路径，如 [&quot;instructions&quot;, &quot;model&quot;, &quot;tool_list&quot;, &quot;plugin_list&quot;, &quot;skill_list&quot;, &quot;advanced_config&quot;]</p>
                     * @return UpdateMask <p>需要更新的字段路径，如 [&quot;instructions&quot;, &quot;model&quot;, &quot;tool_list&quot;, &quot;plugin_list&quot;, &quot;skill_list&quot;, &quot;advanced_config&quot;]</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>需要更新的字段路径，如 [&quot;instructions&quot;, &quot;model&quot;, &quot;tool_list&quot;, &quot;plugin_list&quot;, &quot;skill_list&quot;, &quot;advanced_config&quot;]</p>
                     * @param _updateMask <p>需要更新的字段路径，如 [&quot;instructions&quot;, &quot;model&quot;, &quot;tool_list&quot;, &quot;plugin_list&quot;, &quot;skill_list&quot;, &quot;advanced_config&quot;]</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                private:

                    /**
                     * <p>应用Id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Agent Id</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>修改后的Agent的信息</p>
                     */
                    AgentSpec m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>需要更新的字段路径，如 [&quot;instructions&quot;, &quot;model&quot;, &quot;tool_list&quot;, &quot;plugin_list&quot;, &quot;skill_list&quot;, &quot;advanced_config&quot;]</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAGENTREQUEST_H_
