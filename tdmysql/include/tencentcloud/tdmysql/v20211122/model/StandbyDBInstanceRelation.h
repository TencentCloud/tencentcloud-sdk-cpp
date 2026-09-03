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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STANDBYDBINSTANCERELATION_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STANDBYDBINSTANCERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 灾备实例关系
                */
                class StandbyDBInstanceRelation : public AbstractModel
                {
                public:
                    StandbyDBInstanceRelation();
                    ~StandbyDBInstanceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主实例 ID
                     * @return PrimaryInstanceId 主实例 ID
                     * 
                     */
                    std::string GetPrimaryInstanceId() const;

                    /**
                     * 设置主实例 ID
                     * @param _primaryInstanceId 主实例 ID
                     * 
                     */
                    void SetPrimaryInstanceId(const std::string& _primaryInstanceId);

                    /**
                     * 判断参数 PrimaryInstanceId 是否已赋值
                     * @return PrimaryInstanceId 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取主实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrimaryInstanceName 主实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrimaryInstanceName() const;

                    /**
                     * 设置主实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _primaryInstanceName 主实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrimaryInstanceName(const std::string& _primaryInstanceName);

                    /**
                     * 判断参数 PrimaryInstanceName 是否已赋值
                     * @return PrimaryInstanceName 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceNameHasBeenSet() const;

                    /**
                     * 获取主实例地域
                     * @return PrimaryRegion 主实例地域
                     * 
                     */
                    std::string GetPrimaryRegion() const;

                    /**
                     * 设置主实例地域
                     * @param _primaryRegion 主实例地域
                     * 
                     */
                    void SetPrimaryRegion(const std::string& _primaryRegion);

                    /**
                     * 判断参数 PrimaryRegion 是否已赋值
                     * @return PrimaryRegion 是否已赋值
                     * 
                     */
                    bool PrimaryRegionHasBeenSet() const;

                    /**
                     * 获取主实例子网 IP
                     * @return PrimaryVip 主实例子网 IP
                     * 
                     */
                    std::string GetPrimaryVip() const;

                    /**
                     * 设置主实例子网 IP
                     * @param _primaryVip 主实例子网 IP
                     * 
                     */
                    void SetPrimaryVip(const std::string& _primaryVip);

                    /**
                     * 判断参数 PrimaryVip 是否已赋值
                     * @return PrimaryVip 是否已赋值
                     * 
                     */
                    bool PrimaryVipHasBeenSet() const;

                    /**
                     * 获取主实例子网端口
                     * @return PrimaryVport 主实例子网端口
                     * 
                     */
                    int64_t GetPrimaryVport() const;

                    /**
                     * 设置主实例子网端口
                     * @param _primaryVport 主实例子网端口
                     * 
                     */
                    void SetPrimaryVport(const int64_t& _primaryVport);

                    /**
                     * 判断参数 PrimaryVport 是否已赋值
                     * @return PrimaryVport 是否已赋值
                     * 
                     */
                    bool PrimaryVportHasBeenSet() const;

                    /**
                     * 获取主实例可用区
                     * @return PrimaryZones 主实例可用区
                     * 
                     */
                    std::vector<std::string> GetPrimaryZones() const;

                    /**
                     * 设置主实例可用区
                     * @param _primaryZones 主实例可用区
                     * 
                     */
                    void SetPrimaryZones(const std::vector<std::string>& _primaryZones);

                    /**
                     * 判断参数 PrimaryZones 是否已赋值
                     * @return PrimaryZones 是否已赋值
                     * 
                     */
                    bool PrimaryZonesHasBeenSet() const;

                    /**
                     * 获取主实例运行状态
                     * @return PrimaryStatus 主实例运行状态
                     * 
                     */
                    std::string GetPrimaryStatus() const;

                    /**
                     * 设置主实例运行状态
                     * @param _primaryStatus 主实例运行状态
                     * 
                     */
                    void SetPrimaryStatus(const std::string& _primaryStatus);

                    /**
                     * 判断参数 PrimaryStatus 是否已赋值
                     * @return PrimaryStatus 是否已赋值
                     * 
                     */
                    bool PrimaryStatusHasBeenSet() const;

                    /**
                     * 获取备实例 ID
                     * @return SecondaryInstanceId 备实例 ID
                     * 
                     */
                    std::string GetSecondaryInstanceId() const;

                    /**
                     * 设置备实例 ID
                     * @param _secondaryInstanceId 备实例 ID
                     * 
                     */
                    void SetSecondaryInstanceId(const std::string& _secondaryInstanceId);

                    /**
                     * 判断参数 SecondaryInstanceId 是否已赋值
                     * @return SecondaryInstanceId 是否已赋值
                     * 
                     */
                    bool SecondaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取备实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondaryInstanceName 备实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecondaryInstanceName() const;

                    /**
                     * 设置备实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondaryInstanceName 备实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondaryInstanceName(const std::string& _secondaryInstanceName);

                    /**
                     * 判断参数 SecondaryInstanceName 是否已赋值
                     * @return SecondaryInstanceName 是否已赋值
                     * 
                     */
                    bool SecondaryInstanceNameHasBeenSet() const;

                    /**
                     * 获取备实例地域
                     * @return SecondaryRegion 备实例地域
                     * 
                     */
                    std::string GetSecondaryRegion() const;

                    /**
                     * 设置备实例地域
                     * @param _secondaryRegion 备实例地域
                     * 
                     */
                    void SetSecondaryRegion(const std::string& _secondaryRegion);

                    /**
                     * 判断参数 SecondaryRegion 是否已赋值
                     * @return SecondaryRegion 是否已赋值
                     * 
                     */
                    bool SecondaryRegionHasBeenSet() const;

                    /**
                     * 获取备实例子网 IP
                     * @return SecondaryVip 备实例子网 IP
                     * 
                     */
                    std::string GetSecondaryVip() const;

                    /**
                     * 设置备实例子网 IP
                     * @param _secondaryVip 备实例子网 IP
                     * 
                     */
                    void SetSecondaryVip(const std::string& _secondaryVip);

                    /**
                     * 判断参数 SecondaryVip 是否已赋值
                     * @return SecondaryVip 是否已赋值
                     * 
                     */
                    bool SecondaryVipHasBeenSet() const;

                    /**
                     * 获取备实例子网端口
                     * @return SecondaryVport 备实例子网端口
                     * 
                     */
                    int64_t GetSecondaryVport() const;

                    /**
                     * 设置备实例子网端口
                     * @param _secondaryVport 备实例子网端口
                     * 
                     */
                    void SetSecondaryVport(const int64_t& _secondaryVport);

                    /**
                     * 判断参数 SecondaryVport 是否已赋值
                     * @return SecondaryVport 是否已赋值
                     * 
                     */
                    bool SecondaryVportHasBeenSet() const;

                    /**
                     * 获取备实例可用区
                     * @return SecondaryZones 备实例可用区
                     * 
                     */
                    std::vector<std::string> GetSecondaryZones() const;

                    /**
                     * 设置备实例可用区
                     * @param _secondaryZones 备实例可用区
                     * 
                     */
                    void SetSecondaryZones(const std::vector<std::string>& _secondaryZones);

                    /**
                     * 判断参数 SecondaryZones 是否已赋值
                     * @return SecondaryZones 是否已赋值
                     * 
                     */
                    bool SecondaryZonesHasBeenSet() const;

                    /**
                     * 获取备实例运行状态
                     * @return SecondaryStatus 备实例运行状态
                     * 
                     */
                    std::string GetSecondaryStatus() const;

                    /**
                     * 设置备实例运行状态
                     * @param _secondaryStatus 备实例运行状态
                     * 
                     */
                    void SetSecondaryStatus(const std::string& _secondaryStatus);

                    /**
                     * 判断参数 SecondaryStatus 是否已赋值
                     * @return SecondaryStatus 是否已赋值
                     * 
                     */
                    bool SecondaryStatusHasBeenSet() const;

                    /**
                     * 获取连接类型，log_service 或 raft
                     * @return ConnType 连接类型，log_service 或 raft
                     * 
                     */
                    std::string GetConnType() const;

                    /**
                     * 设置连接类型，log_service 或 raft
                     * @param _connType 连接类型，log_service 或 raft
                     * 
                     */
                    void SetConnType(const std::string& _connType);

                    /**
                     * 判断参数 ConnType 是否已赋值
                     * @return ConnType 是否已赋值
                     * 
                     */
                    bool ConnTypeHasBeenSet() const;

                    /**
                     * 获取同步类型，sync 或 async
                     * @return SyncMode 同步类型，sync 或 async
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置同步类型，sync 或 async
                     * @param _syncMode 同步类型，sync 或 async
                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取同步状态，1: 正在同步；2: 同步异常
                     * @return SyncStatus 同步状态，1: 正在同步；2: 同步异常
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置同步状态，1: 正在同步；2: 同步异常
                     * @param _syncStatus 同步状态，1: 正在同步；2: 同步异常
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取同步状态描述，同步状态异常时的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncStatusDesc 同步状态描述，同步状态异常时的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSyncStatusDesc() const;

                    /**
                     * 设置同步状态描述，同步状态异常时的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncStatusDesc 同步状态描述，同步状态异常时的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncStatusDesc(const std::string& _syncStatusDesc);

                    /**
                     * 判断参数 SyncStatusDesc 是否已赋值
                     * @return SyncStatusDesc 是否已赋值
                     * 
                     */
                    bool SyncStatusDescHasBeenSet() const;

                    /**
                     * 获取灾备状态描述，"creating" "running" "modifying"，无灾备关系时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandbyStatus 灾备状态描述，"creating" "running" "modifying"，无灾备关系时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandbyStatus() const;

                    /**
                     * 设置灾备状态描述，"creating" "running" "modifying"，无灾备关系时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standbyStatus 灾备状态描述，"creating" "running" "modifying"，无灾备关系时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandbyStatus(const std::string& _standbyStatus);

                    /**
                     * 判断参数 StandbyStatus 是否已赋值
                     * @return StandbyStatus 是否已赋值
                     * 
                     */
                    bool StandbyStatusHasBeenSet() const;

                    /**
                     * 获取主实例版本
                     * @return PrimaryCreateVersion 主实例版本
                     * 
                     */
                    std::string GetPrimaryCreateVersion() const;

                    /**
                     * 设置主实例版本
                     * @param _primaryCreateVersion 主实例版本
                     * 
                     */
                    void SetPrimaryCreateVersion(const std::string& _primaryCreateVersion);

                    /**
                     * 判断参数 PrimaryCreateVersion 是否已赋值
                     * @return PrimaryCreateVersion 是否已赋值
                     * 
                     */
                    bool PrimaryCreateVersionHasBeenSet() const;

                    /**
                     * 获取备实例版本
                     * @return SecondaryCreateVersion 备实例版本
                     * 
                     */
                    std::string GetSecondaryCreateVersion() const;

                    /**
                     * 设置备实例版本
                     * @param _secondaryCreateVersion 备实例版本
                     * 
                     */
                    void SetSecondaryCreateVersion(const std::string& _secondaryCreateVersion);

                    /**
                     * 判断参数 SecondaryCreateVersion 是否已赋值
                     * @return SecondaryCreateVersion 是否已赋值
                     * 
                     */
                    bool SecondaryCreateVersionHasBeenSet() const;

                    /**
                     * 获取时延 单位为秒
                     * @return SyncDelay 时延 单位为秒
                     * 
                     */
                    int64_t GetSyncDelay() const;

                    /**
                     * 设置时延 单位为秒
                     * @param _syncDelay 时延 单位为秒
                     * 
                     */
                    void SetSyncDelay(const int64_t& _syncDelay);

                    /**
                     * 判断参数 SyncDelay 是否已赋值
                     * @return SyncDelay 是否已赋值
                     * 
                     */
                    bool SyncDelayHasBeenSet() const;

                private:

                    /**
                     * 主实例 ID
                     */
                    std::string m_primaryInstanceId;
                    bool m_primaryInstanceIdHasBeenSet;

                    /**
                     * 主实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_primaryInstanceName;
                    bool m_primaryInstanceNameHasBeenSet;

                    /**
                     * 主实例地域
                     */
                    std::string m_primaryRegion;
                    bool m_primaryRegionHasBeenSet;

                    /**
                     * 主实例子网 IP
                     */
                    std::string m_primaryVip;
                    bool m_primaryVipHasBeenSet;

                    /**
                     * 主实例子网端口
                     */
                    int64_t m_primaryVport;
                    bool m_primaryVportHasBeenSet;

                    /**
                     * 主实例可用区
                     */
                    std::vector<std::string> m_primaryZones;
                    bool m_primaryZonesHasBeenSet;

                    /**
                     * 主实例运行状态
                     */
                    std::string m_primaryStatus;
                    bool m_primaryStatusHasBeenSet;

                    /**
                     * 备实例 ID
                     */
                    std::string m_secondaryInstanceId;
                    bool m_secondaryInstanceIdHasBeenSet;

                    /**
                     * 备实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondaryInstanceName;
                    bool m_secondaryInstanceNameHasBeenSet;

                    /**
                     * 备实例地域
                     */
                    std::string m_secondaryRegion;
                    bool m_secondaryRegionHasBeenSet;

                    /**
                     * 备实例子网 IP
                     */
                    std::string m_secondaryVip;
                    bool m_secondaryVipHasBeenSet;

                    /**
                     * 备实例子网端口
                     */
                    int64_t m_secondaryVport;
                    bool m_secondaryVportHasBeenSet;

                    /**
                     * 备实例可用区
                     */
                    std::vector<std::string> m_secondaryZones;
                    bool m_secondaryZonesHasBeenSet;

                    /**
                     * 备实例运行状态
                     */
                    std::string m_secondaryStatus;
                    bool m_secondaryStatusHasBeenSet;

                    /**
                     * 连接类型，log_service 或 raft
                     */
                    std::string m_connType;
                    bool m_connTypeHasBeenSet;

                    /**
                     * 同步类型，sync 或 async
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * 同步状态，1: 正在同步；2: 同步异常
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * 同步状态描述，同步状态异常时的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_syncStatusDesc;
                    bool m_syncStatusDescHasBeenSet;

                    /**
                     * 灾备状态描述，"creating" "running" "modifying"，无灾备关系时为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standbyStatus;
                    bool m_standbyStatusHasBeenSet;

                    /**
                     * 主实例版本
                     */
                    std::string m_primaryCreateVersion;
                    bool m_primaryCreateVersionHasBeenSet;

                    /**
                     * 备实例版本
                     */
                    std::string m_secondaryCreateVersion;
                    bool m_secondaryCreateVersionHasBeenSet;

                    /**
                     * 时延 单位为秒
                     */
                    int64_t m_syncDelay;
                    bool m_syncDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STANDBYDBINSTANCERELATION_H_
