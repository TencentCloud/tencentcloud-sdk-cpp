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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>客户端ID</p>
                     * @return AgentId <p>客户端ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>客户端ID</p>
                     * @param _agentId <p>客户端ID</p>
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
                     * 获取<p>客户端版本</p>
                     * @return AgentVersion <p>客户端版本</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>客户端版本</p>
                     * @param _agentVersion <p>客户端版本</p>
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
                     * 获取<p>客户端状态</p>
                     * @return AgentStatus <p>客户端状态</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>客户端状态</p>
                     * @param _agentStatus <p>客户端状态</p>
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
                     * 获取<p>最后心跳时间</p>
                     * @return LastHeartbeatTime <p>最后心跳时间</p>
                     * 
                     */
                    std::string GetLastHeartbeatTime() const;

                    /**
                     * 设置<p>最后心跳时间</p>
                     * @param _lastHeartbeatTime <p>最后心跳时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
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
                     * 获取<p>最新备份点中记录的 CVM 基础信息</p>
                     * @return ExtraInfo <p>最新备份点中记录的 CVM 基础信息</p>
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>最新备份点中记录的 CVM 基础信息</p>
                     * @param _extraInfo <p>最新备份点中记录的 CVM 基础信息</p>
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
                     * 获取<p>该实例可用备份点数量</p>
                     * @return BackupCount <p>该实例可用备份点数量</p>
                     * 
                     */
                    uint64_t GetBackupCount() const;

                    /**
                     * 设置<p>该实例可用备份点数量</p>
                     * @param _backupCount <p>该实例可用备份点数量</p>
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
                     * 获取<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>最近一次备份时间</p>
                     * @return LatestBackupTime <p>最近一次备份时间</p>
                     * 
                     */
                    std::string GetLatestBackupTime() const;

                    /**
                     * 设置<p>最近一次备份时间</p>
                     * @param _latestBackupTime <p>最近一次备份时间</p>
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
                     * 获取<p>离线原因</p>
                     * @return OfflineReason <p>离线原因</p>
                     * 
                     */
                    std::string GetOfflineReason() const;

                    /**
                     * 设置<p>离线原因</p>
                     * @param _offlineReason <p>离线原因</p>
                     * 
                     */
                    void SetOfflineReason(const std::string& _offlineReason);

                    /**
                     * 判断参数 OfflineReason 是否已赋值
                     * @return OfflineReason 是否已赋值
                     * 
                     */
                    bool OfflineReasonHasBeenSet() const;

                    /**
                     * 获取<p>备份数据量，单位为字节</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupSize <p>备份数据量，单位为字节</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置<p>备份数据量，单位为字节</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupSize <p>备份数据量，单位为字节</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductType <p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productType <p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>客户端ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>客户端版本</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>客户端状态</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>最后心跳时间</p>
                     */
                    std::string m_lastHeartbeatTime;
                    bool m_lastHeartbeatTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>最新备份点中记录的 CVM 基础信息</p>
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>该实例可用备份点数量</p>
                     */
                    uint64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>最近一次备份时间</p>
                     */
                    std::string m_latestBackupTime;
                    bool m_latestBackupTimeHasBeenSet;

                    /**
                     * <p>离线原因</p>
                     */
                    std::string m_offlineReason;
                    bool m_offlineReasonHasBeenSet;

                    /**
                     * <p>备份数据量，单位为字节</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTINSTANCE_H_
