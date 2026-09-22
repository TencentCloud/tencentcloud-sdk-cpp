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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SESSIONITEM_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SESSIONITEM_H_

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
                * 会话列表项
                */
                class SessionItem : public AbstractModel
                {
                public:
                    SessionItem();
                    ~SessionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取会话名称（AI 生成标题或用户改名；缺失时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionName 会话名称（AI 生成标题或用户改名；缺失时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置会话名称（AI 生成标题或用户改名；缺失时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionName 会话名称（AI 生成标题或用户改名；缺失时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取Agent 业务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId Agent 业务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent 业务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId Agent 业务 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentName Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentName Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID；原 AgentVersion）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName 会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID；原 AgentVersion）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID；原 AgentVersion）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName 会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID；原 AgentVersion）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取会话使用的 Agent 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 会话使用的 Agent 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置会话使用的 Agent 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 会话使用的 Agent 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取会话状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 会话状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置会话状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 会话状态
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
                     * 获取创建者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取会话来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 会话来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置会话来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 会话来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取创建时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间（RFC3339）
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
                     * 获取更新时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 更新时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置更新时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 更新时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 会话名称（AI 生成标题或用户改名；缺失时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * Agent 业务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Agent 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 会话使用的版本名称（与 VersionId 区分：此为版本名，非 ID；原 AgentVersion）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 会话使用的 Agent 版本 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 会话状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 会话来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 创建时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间（RFC3339）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SESSIONITEM_H_
