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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_UNBINDEXTERNALAGENTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_UNBINDEXTERNALAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UnbindExternalAgent请求参数结构体
                */
                class UnbindExternalAgentRequest : public AbstractModel
                {
                public:
                    UnbindExternalAgentRequest();
                    ~UnbindExternalAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TMA managed agent 业务 ID
                     * @return AgentId TMA managed agent 业务 ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置TMA managed agent 业务 ID
                     * @param _agentId TMA managed agent 业务 ID
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
                     * 获取已绑定的外部 A2A agent ID
                     * @return A2AAgentId 已绑定的外部 A2A agent ID
                     * 
                     */
                    std::string GetA2AAgentId() const;

                    /**
                     * 设置已绑定的外部 A2A agent ID
                     * @param _a2AAgentId 已绑定的外部 A2A agent ID
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
                     * 获取绑定记录 ID（自增 ID 字符串）
                     * @return BindingId 绑定记录 ID（自增 ID 字符串）
                     * 
                     */
                    std::string GetBindingId() const;

                    /**
                     * 设置绑定记录 ID（自增 ID 字符串）
                     * @param _bindingId 绑定记录 ID（自增 ID 字符串）
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
                     * 获取版本 ID
                     * @return VersionId 版本 ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本 ID
                     * @param _versionId 版本 ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * TMA managed agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 已绑定的外部 A2A agent ID
                     */
                    std::string m_a2AAgentId;
                    bool m_a2AAgentIdHasBeenSet;

                    /**
                     * 绑定记录 ID（自增 ID 字符串）
                     */
                    std::string m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * 版本 ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_UNBINDEXTERNALAGENTREQUEST_H_
