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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTSESSIONRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ChatEndpoint.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeAgentSession返回参数结构体
                */
                class DescribeAgentSessionResponse : public AbstractModel
                {
                public:
                    DescribeAgentSessionResponse();
                    ~DescribeAgentSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取会话 ID
                     * @return SessionId 会话 ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀
                     * @return SessionName 会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取Agent 业务 ID
                     * @return AgentId Agent 业务 ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Agent 名称
                     * @return AgentName Agent 名称
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取版本 ID
                     * @return VersionId 版本 ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID）
                     * @return VersionName 会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID）
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取版本状态：DRAFT / ENABLED / DISABLED
                     * @return Status 版本状态：DRAFT / ENABLED / DISABLED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建者 Uin
                     * @return Creator 创建者 Uin
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     * @return Source 连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取可用的聊天接入点列表（详情独有）
                     * @return EndpointSet 可用的聊天接入点列表（详情独有）
                     * 
                     */
                    std::vector<ChatEndpoint> GetEndpointSet() const;

                    /**
                     * 判断参数 EndpointSet 是否已赋值
                     * @return EndpointSet 是否已赋值
                     * 
                     */
                    bool EndpointSetHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间（RFC3339）
                     * @return ModifiedTime 更新时间（RFC3339）
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * Agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Agent 名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 版本 ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID）
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本状态：DRAFT / ENABLED / DISABLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建者 Uin
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 可用的聊天接入点列表（详情独有）
                     */
                    std::vector<ChatEndpoint> m_endpointSet;
                    bool m_endpointSetHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间（RFC3339）
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTSESSIONRESPONSE_H_
