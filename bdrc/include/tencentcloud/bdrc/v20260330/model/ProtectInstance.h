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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTINSTANCE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 受保护实例信息
                */
                class ProtectInstance : public AbstractModel
                {
                public:
                    ProtectInstance();
                    ~ProtectInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取客户端ID
                     * @return AgentId 客户端ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置客户端ID
                     * @param _agentId 客户端ID
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
                     * 获取客户端版本
                     * @return AgentVersion 客户端版本
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置客户端版本
                     * @param _agentVersion 客户端版本
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取客户端状态
                     * @return AgentStatus 客户端状态
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置客户端状态
                     * @param _agentStatus 客户端状态
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取最后心跳时间
                     * @return LastHeartbeatTime 最后心跳时间
                     * 
                     */
                    std::string GetLastHeartbeatTime() const;

                    /**
                     * 设置最后心跳时间
                     * @param _lastHeartbeatTime 最后心跳时间
                     * 
                     */
                    void SetLastHeartbeatTime(const std::string& _lastHeartbeatTime);

                    /**
                     * 判断参数 LastHeartbeatTime 是否已赋值
                     * @return LastHeartbeatTime 是否已赋值
                     * 
                     */
                    bool LastHeartbeatTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
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
                     * 获取最新备份点中记录的 CVM 基础信息
                     * @return ExtraInfo 最新备份点中记录的 CVM 基础信息
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置最新备份点中记录的 CVM 基础信息
                     * @param _extraInfo 最新备份点中记录的 CVM 基础信息
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取该实例可用备份点数量
                     * @return BackupCount 该实例可用备份点数量
                     * 
                     */
                    uint64_t GetBackupCount() const;

                    /**
                     * 设置该实例可用备份点数量
                     * @param _backupCount 该实例可用备份点数量
                     * 
                     */
                    void SetBackupCount(const uint64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取最近一次备份时间
                     * @return LatestBackupTime 最近一次备份时间
                     * 
                     */
                    std::string GetLatestBackupTime() const;

                    /**
                     * 设置最近一次备份时间
                     * @param _latestBackupTime 最近一次备份时间
                     * 
                     */
                    void SetLatestBackupTime(const std::string& _latestBackupTime);

                    /**
                     * 判断参数 LatestBackupTime 是否已赋值
                     * @return LatestBackupTime 是否已赋值
                     * 
                     */
                    bool LatestBackupTimeHasBeenSet() const;

                    /**
                     * 获取离线原因
                     * @return OfflineReason 离线原因
                     * 
                     */
                    std::string GetOfflineReason() const;

                    /**
                     * 设置离线原因
                     * @param _offlineReason 离线原因
                     * 
                     */
                    void SetOfflineReason(const std::string& _offlineReason);

                    /**
                     * 判断参数 OfflineReason 是否已赋值
                     * @return OfflineReason 是否已赋值
                     * 
                     */
                    bool OfflineReasonHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 客户端版本
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 客户端状态
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * 最后心跳时间
                     */
                    std::string m_lastHeartbeatTime;
                    bool m_lastHeartbeatTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最新备份点中记录的 CVM 基础信息
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 该实例可用备份点数量
                     */
                    uint64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 最近一次备份时间
                     */
                    std::string m_latestBackupTime;
                    bool m_latestBackupTimeHasBeenSet;

                    /**
                     * 离线原因
                     */
                    std::string m_offlineReason;
                    bool m_offlineReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTINSTANCE_H_
