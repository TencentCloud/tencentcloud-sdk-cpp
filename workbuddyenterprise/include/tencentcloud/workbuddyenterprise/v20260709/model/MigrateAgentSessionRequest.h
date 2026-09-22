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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MIGRATEAGENTSESSIONREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MIGRATEAGENTSESSIONREQUEST_H_

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
                * MigrateAgentSession请求参数结构体
                */
                class MigrateAgentSessionRequest : public AbstractModel
                {
                public:
                    MigrateAgentSessionRequest();
                    ~MigrateAgentSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待迁移的会话 ID（必填）</p>
                     * @return SessionId <p>待迁移的会话 ID（必填）</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>待迁移的会话 ID（必填）</p>
                     * @param _sessionId <p>待迁移的会话 ID（必填）</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>目标 Agent 业务 ID（必填），必须与 Session 原 Agent 相同</p>
                     * @return AgentId <p>目标 Agent 业务 ID（必填），必须与 Session 原 Agent 相同</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>目标 Agent 业务 ID（必填），必须与 Session 原 Agent 相同</p>
                     * @param _agentId <p>目标 Agent 业务 ID（必填），必须与 Session 原 Agent 相同</p>
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
                     * 获取<p>目标版本 ID（必填，字符串形式）。需归属同一 Agent 且未被废弃</p>
                     * @return TargetVersionId <p>目标版本 ID（必填，字符串形式）。需归属同一 Agent 且未被废弃</p>
                     * 
                     */
                    std::string GetTargetVersionId() const;

                    /**
                     * 设置<p>目标版本 ID（必填，字符串形式）。需归属同一 Agent 且未被废弃</p>
                     * @param _targetVersionId <p>目标版本 ID（必填，字符串形式）。需归属同一 Agent 且未被废弃</p>
                     * 
                     */
                    void SetTargetVersionId(const std::string& _targetVersionId);

                    /**
                     * 判断参数 TargetVersionId 是否已赋值
                     * @return TargetVersionId 是否已赋值
                     * 
                     */
                    bool TargetVersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>待迁移的会话 ID（必填）</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>目标 Agent 业务 ID（必填），必须与 Session 原 Agent 相同</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>目标版本 ID（必填，字符串形式）。需归属同一 Agent 且未被废弃</p>
                     */
                    std::string m_targetVersionId;
                    bool m_targetVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MIGRATEAGENTSESSIONREQUEST_H_
