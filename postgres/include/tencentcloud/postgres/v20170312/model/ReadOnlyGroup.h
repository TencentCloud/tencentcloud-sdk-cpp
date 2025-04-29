/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_READONLYGROUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_READONLYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstance.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/NetworkAccess.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 只读组信息
                */
                class ReadOnlyGroup : public AbstractModel
                {
                public:
                    ReadOnlyGroup();
                    ~ReadOnlyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取只读组标识
                     * @return ReadOnlyGroupId 只读组标识
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置只读组标识
                     * @param _readOnlyGroupId 只读组标识
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取只读组名字
                     * @return ReadOnlyGroupName 只读组名字
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置只读组名字
                     * @param _readOnlyGroupName 只读组名字
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取主实例id
                     * @return MasterDBInstanceId 主实例id
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置主实例id
                     * @param _masterDBInstanceId 主实例id
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取最小保留实例数
                     * @return MinDelayEliminateReserve 最小保留实例数
                     * 
                     */
                    int64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置最小保留实例数
                     * @param _minDelayEliminateReserve 最小保留实例数
                     * 
                     */
                    void SetMinDelayEliminateReserve(const int64_t& _minDelayEliminateReserve);

                    /**
                     * 判断参数 MinDelayEliminateReserve 是否已赋值
                     * @return MinDelayEliminateReserve 是否已赋值
                     * 
                     */
                    bool MinDelayEliminateReserveHasBeenSet() const;

                    /**
                     * 获取延迟空间大小阈值
                     * @return MaxReplayLatency 延迟空间大小阈值
                     * 
                     */
                    int64_t GetMaxReplayLatency() const;

                    /**
                     * 设置延迟空间大小阈值
                     * @param _maxReplayLatency 延迟空间大小阈值
                     * 
                     */
                    void SetMaxReplayLatency(const int64_t& _maxReplayLatency);

                    /**
                     * 判断参数 MaxReplayLatency 是否已赋值
                     * @return MaxReplayLatency 是否已赋值
                     * 
                     */
                    bool MaxReplayLatencyHasBeenSet() const;

                    /**
                     * 获取延迟大小开关
                     * @return ReplayLatencyEliminate 延迟大小开关
                     * 
                     */
                    int64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置延迟大小开关
                     * @param _replayLatencyEliminate 延迟大小开关
                     * 
                     */
                    void SetReplayLatencyEliminate(const int64_t& _replayLatencyEliminate);

                    /**
                     * 判断参数 ReplayLatencyEliminate 是否已赋值
                     * @return ReplayLatencyEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLatencyEliminateHasBeenSet() const;

                    /**
                     * 获取延迟时间大小阈值
                     * @return MaxReplayLag 延迟时间大小阈值
                     * 
                     */
                    double GetMaxReplayLag() const;

                    /**
                     * 设置延迟时间大小阈值
                     * @param _maxReplayLag 延迟时间大小阈值
                     * 
                     */
                    void SetMaxReplayLag(const double& _maxReplayLag);

                    /**
                     * 判断参数 MaxReplayLag 是否已赋值
                     * @return MaxReplayLag 是否已赋值
                     * 
                     */
                    bool MaxReplayLagHasBeenSet() const;

                    /**
                     * 获取延迟时间开关
                     * @return ReplayLagEliminate 延迟时间开关
                     * 
                     */
                    int64_t GetReplayLagEliminate() const;

                    /**
                     * 设置延迟时间开关
                     * @param _replayLagEliminate 延迟时间开关
                     * 
                     */
                    void SetReplayLagEliminate(const int64_t& _replayLagEliminate);

                    /**
                     * 判断参数 ReplayLagEliminate 是否已赋值
                     * @return ReplayLagEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLagEliminateHasBeenSet() const;

                    /**
                     * 获取虚拟网络id
                     * @return VpcId 虚拟网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置虚拟网络id
                     * @param _vpcId 虚拟网络id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取地域id
                     * @return Region 地域id
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域id
                     * @param _region 地域id
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取地区id
                     * @return Zone 地区id
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地区id
                     * @param _zone 地区id
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取实例详细信息
                     * @return ReadOnlyDBInstanceList 实例详细信息
                     * 
                     */
                    std::vector<DBInstance> GetReadOnlyDBInstanceList() const;

                    /**
                     * 设置实例详细信息
                     * @param _readOnlyDBInstanceList 实例详细信息
                     * 
                     */
                    void SetReadOnlyDBInstanceList(const std::vector<DBInstance>& _readOnlyDBInstanceList);

                    /**
                     * 判断参数 ReadOnlyDBInstanceList 是否已赋值
                     * @return ReadOnlyDBInstanceList 是否已赋值
                     * 
                     */
                    bool ReadOnlyDBInstanceListHasBeenSet() const;

                    /**
                     * 获取自动负载均衡开关
                     * @return Rebalance 自动负载均衡开关
                     * 
                     */
                    int64_t GetRebalance() const;

                    /**
                     * 设置自动负载均衡开关
                     * @param _rebalance 自动负载均衡开关
                     * 
                     */
                    void SetRebalance(const int64_t& _rebalance);

                    /**
                     * 判断参数 Rebalance 是否已赋值
                     * @return Rebalance 是否已赋值
                     * 
                     */
                    bool RebalanceHasBeenSet() const;

                    /**
                     * 获取网络信息
                     * @return DBInstanceNetInfo 网络信息
                     * 
                     */
                    std::vector<DBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置网络信息
                     * @param _dBInstanceNetInfo 网络信息
                     * 
                     */
                    void SetDBInstanceNetInfo(const std::vector<DBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     * 
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取只读组网络信息列表（此字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAccessList 只读组网络信息列表（此字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NetworkAccess> GetNetworkAccessList() const;

                    /**
                     * 设置只读组网络信息列表（此字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkAccessList 只读组网络信息列表（此字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkAccessList(const std::vector<NetworkAccess>& _networkAccessList);

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     * 
                     */
                    bool NetworkAccessListHasBeenSet() const;

                private:

                    /**
                     * 只读组标识
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 只读组名字
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * 项目id
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 主实例id
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * 最小保留实例数
                     */
                    int64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                    /**
                     * 延迟空间大小阈值
                     */
                    int64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * 延迟大小开关
                     */
                    int64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * 延迟时间大小阈值
                     */
                    double m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * 延迟时间开关
                     */
                    int64_t m_replayLagEliminate;
                    bool m_replayLagEliminateHasBeenSet;

                    /**
                     * 虚拟网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 地域id
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地区id
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例详细信息
                     */
                    std::vector<DBInstance> m_readOnlyDBInstanceList;
                    bool m_readOnlyDBInstanceListHasBeenSet;

                    /**
                     * 自动负载均衡开关
                     */
                    int64_t m_rebalance;
                    bool m_rebalanceHasBeenSet;

                    /**
                     * 网络信息
                     */
                    std::vector<DBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * 只读组网络信息列表（此字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetworkAccess> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_READONLYGROUP_H_
