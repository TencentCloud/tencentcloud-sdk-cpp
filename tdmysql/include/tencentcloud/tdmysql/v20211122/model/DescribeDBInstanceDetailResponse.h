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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceParam.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>
#include <tencentcloud/tdmysql/v20211122/model/NodeInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisRelationInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisInstanceInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/MaintenanceWindowInfo.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDetail返回参数结构体
                */
                class DescribeDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceDetailResponse();
                    ~DescribeDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>区域</p>
                     * @return Zone <p>区域</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>字符型vpcid</p>
                     * @return VpcId <p>字符型vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>字符型subnetid</p>
                     * @return SubnetId <p>字符型subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>创建实例版本</p>
                     * @return CreateVersion <p>创建实例版本</p>
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 判断参数 CreateVersion 是否已赋值
                     * @return CreateVersion 是否已赋值
                     * 
                     */
                    bool CreateVersionHasBeenSet() const;

                    /**
                     * 获取<p>子网IP</p>
                     * @return Vip <p>子网IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>子网端口</p>
                     * @return Vport <p>子网端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
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
                     * 获取<p>存储节点磁盘容量，单位GB</p>
                     * @return Disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>存储节点数量</p>
                     * @return StorageNodeNum <p>存储节点数量</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>初始化实例参数</p>
                     * @return InitParams <p>初始化实例参数</p>
                     * 
                     */
                    std::vector<InstanceParam> GetInitParams() const;

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取<p>实例标签信息</p>
                     * @return ResourceTags <p>实例标签信息</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>存储节点副本数量</p>
                     * @return Replications <p>存储节点副本数量</p>
                     * 
                     */
                    int64_t GetReplications() const;

                    /**
                     * 判断参数 Replications 是否已赋值
                     * @return Replications 是否已赋值
                     * 
                     */
                    bool ReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>全能型副本数</p>
                     * @return FullReplications <p>全能型副本数</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>字符集</p>
                     * @return CharSet <p>字符集</p>
                     * 
                     */
                    std::string GetCharSet() const;

                    /**
                     * 判断参数 CharSet 是否已赋值
                     * @return CharSet 是否已赋值
                     * 
                     */
                    bool CharSetHasBeenSet() const;

                    /**
                     * 获取<p>节点信息</p>
                     * @return Node <p>节点信息</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNode() const;

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取<p>实例所属地域</p>
                     * @return Region <p>实例所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>实例规格</p>
                     * @return SpecCode <p>实例规格</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例状态中文描述</p>
                     * @return StatusDesc <p>实例状态中文描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>存储节点CPU核数</p>
                     * @return StorageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>存储节点内存大小</p>
                     * @return StorageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>续费标志</p>
                     * @return RenewFlag <p>续费标志</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，0后付费，1预付费</p>
                     * @return PayMode <p>付费模式，0后付费，1预付费</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireAt <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedAt <p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedAt() const;

                    /**
                     * 判断参数 IsolatedAt 是否已赋值
                     * @return IsolatedAt 是否已赋值
                     * 
                     */
                    bool IsolatedAtHasBeenSet() const;

                    /**
                     * 获取<p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例节点可用区列表。Zones[0]表示主可用区</p>
                     * @return Zones <p>实例节点可用区列表。Zones[0]表示主可用区</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>最大节点磁盘使用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskUsage <p>最大节点磁盘使用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskUsage() const;

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取<p>binlog是否开启</p>
                     * @return BinlogStatus <p>binlog是否开启</p>
                     * 
                     */
                    int64_t GetBinlogStatus() const;

                    /**
                     * 判断参数 BinlogStatus 是否已赋值
                     * @return BinlogStatus 是否已赋值
                     * 
                     */
                    bool BinlogStatusHasBeenSet() const;

                    /**
                     * 获取<p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     * @return AZMode <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
                     * @return StandbyFlag <p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
                     * 
                     */
                    int64_t GetStandbyFlag() const;

                    /**
                     * 判断参数 StandbyFlag 是否已赋值
                     * @return StandbyFlag 是否已赋值
                     * 
                     */
                    bool StandbyFlagHasBeenSet() const;

                    /**
                     * 获取<p>cdc节点类型</p>
                     * @return BinlogType <p>cdc节点类型</p>
                     * 
                     */
                    std::string GetBinlogType() const;

                    /**
                     * 判断参数 BinlogType 是否已赋值
                     * @return BinlogType 是否已赋值
                     * 
                     */
                    bool BinlogTypeHasBeenSet() const;

                    /**
                     * 获取<p>1表示支持，0表示不支持</p>
                     * @return TimingModifyInstanceFlag <p>1表示支持，0表示不支持</p>
                     * 
                     */
                    int64_t GetTimingModifyInstanceFlag() const;

                    /**
                     * 判断参数 TimingModifyInstanceFlag 是否已赋值
                     * @return TimingModifyInstanceFlag 是否已赋值
                     * 
                     */
                    bool TimingModifyInstanceFlagHasBeenSet() const;

                    /**
                     * 获取<p>列存节点cpu核数</p>
                     * @return ColumnarNodeCpu <p>列存节点cpu核数</p>
                     * 
                     */
                    int64_t GetColumnarNodeCpu() const;

                    /**
                     * 判断参数 ColumnarNodeCpu 是否已赋值
                     * @return ColumnarNodeCpu 是否已赋值
                     * 
                     */
                    bool ColumnarNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>列存节点mem内存大小</p>
                     * @return ColumnarNodeMem <p>列存节点mem内存大小</p>
                     * 
                     */
                    int64_t GetColumnarNodeMem() const;

                    /**
                     * 判断参数 ColumnarNodeMem 是否已赋值
                     * @return ColumnarNodeMem 是否已赋值
                     * 
                     */
                    bool ColumnarNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>列存节点个数</p>
                     * @return ColumnarNodeNum <p>列存节点个数</p>
                     * 
                     */
                    int64_t GetColumnarNodeNum() const;

                    /**
                     * 判断参数 ColumnarNodeNum 是否已赋值
                     * @return ColumnarNodeNum 是否已赋值
                     * 
                     */
                    bool ColumnarNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>列存节点磁盘大小</p>
                     * @return ColumnarNodeDisk <p>列存节点磁盘大小</p>
                     * 
                     */
                    int64_t GetColumnarNodeDisk() const;

                    /**
                     * 判断参数 ColumnarNodeDisk 是否已赋值
                     * @return ColumnarNodeDisk 是否已赋值
                     * 
                     */
                    bool ColumnarNodeDiskHasBeenSet() const;

                    /**
                     * 获取<p>列存节点磁盘类型</p>
                     * @return ColumnarNodeStorageType <p>列存节点磁盘类型</p>
                     * 
                     */
                    std::string GetColumnarNodeStorageType() const;

                    /**
                     * 判断参数 ColumnarNodeStorageType 是否已赋值
                     * @return ColumnarNodeStorageType 是否已赋值
                     * 
                     */
                    bool ColumnarNodeStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>列存节点规格</p>
                     * @return ColumnarNodeSpecCode <p>列存节点规格</p>
                     * 
                     */
                    std::string GetColumnarNodeSpecCode() const;

                    /**
                     * 判断参数 ColumnarNodeSpecCode 是否已赋值
                     * @return ColumnarNodeSpecCode 是否已赋值
                     * 
                     */
                    bool ColumnarNodeSpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>列存 vip</p>
                     * @return ColumnarVip <p>列存 vip</p>
                     * 
                     */
                    std::string GetColumnarVip() const;

                    /**
                     * 判断参数 ColumnarVip 是否已赋值
                     * @return ColumnarVip 是否已赋值
                     * 
                     */
                    bool ColumnarVipHasBeenSet() const;

                    /**
                     * 获取<p>列存 vport</p>
                     * @return ColumnarVport <p>列存 vport</p>
                     * 
                     */
                    int64_t GetColumnarVport() const;

                    /**
                     * 判断参数 ColumnarVport 是否已赋值
                     * @return ColumnarVport 是否已赋值
                     * 
                     */
                    bool ColumnarVportHasBeenSet() const;

                    /**
                     * 获取<p>实例是否支持列存</p>
                     * @return IsSupportColumnar <p>实例是否支持列存</p>
                     * 
                     */
                    bool GetIsSupportColumnar() const;

                    /**
                     * 判断参数 IsSupportColumnar 是否已赋值
                     * @return IsSupportColumnar 是否已赋值
                     * 
                     */
                    bool IsSupportColumnarHasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p>
                     * @return InstanceCategory <p>实例类型</p>
                     * 
                     */
                    int64_t GetInstanceCategory() const;

                    /**
                     * 判断参数 InstanceCategory 是否已赋值
                     * @return InstanceCategory 是否已赋值
                     * 
                     */
                    bool InstanceCategoryHasBeenSet() const;

                    /**
                     * 获取<p>兼容模式</p>
                     * @return SQLMode <p>兼容模式</p>
                     * 
                     */
                    std::string GetSQLMode() const;

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持修改全能型副本数量</p>
                     * @return IsSwitchFullReplicationsEnable <p>是否支持修改全能型副本数量</p>
                     * 
                     */
                    bool GetIsSwitchFullReplicationsEnable() const;

                    /**
                     * 判断参数 IsSwitchFullReplicationsEnable 是否已赋值
                     * @return IsSwitchFullReplicationsEnable 是否已赋值
                     * 
                     */
                    bool IsSwitchFullReplicationsEnableHasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p>
                     * @return InstanceMode <p>实例类型</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>dumper vip</p>
                     * @return DumperVip <p>dumper vip</p>
                     * 
                     */
                    std::string GetDumperVip() const;

                    /**
                     * 判断参数 DumperVip 是否已赋值
                     * @return DumperVip 是否已赋值
                     * 
                     */
                    bool DumperVipHasBeenSet() const;

                    /**
                     * 获取<p>dumper vport</p>
                     * @return DumperVport <p>dumper vport</p>
                     * 
                     */
                    int64_t GetDumperVport() const;

                    /**
                     * 判断参数 DumperVport 是否已赋值
                     * @return DumperVport 是否已赋值
                     * 
                     */
                    bool DumperVportHasBeenSet() const;

                    /**
                     * 获取<p>svls实例的ccu变配范围</p>
                     * @return AutoScaleConfig <p>svls实例的ccu变配范围</p>
                     * 
                     */
                    AutoScalingConfig GetAutoScaleConfig() const;

                    /**
                     * 判断参数 AutoScaleConfig 是否已赋值
                     * @return AutoScaleConfig 是否已赋值
                     * 
                     */
                    bool AutoScaleConfigHasBeenSet() const;

                    /**
                     * 获取<p>参数模板id</p>
                     * @return TemplateId <p>参数模板id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>参数模板名称</p>
                     * @return TemplateName <p>参数模板名称</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>实例分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎实例</li></ul>
                     * @return AnalysisMode <p>实例分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎实例</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎实例关系</p>
                     * @return AnalysisRelationInfos <p>分析引擎实例关系</p>
                     * 
                     */
                    std::vector<AnalysisRelationInfo> GetAnalysisRelationInfos() const;

                    /**
                     * 判断参数 AnalysisRelationInfos 是否已赋值
                     * @return AnalysisRelationInfos 是否已赋值
                     * 
                     */
                    bool AnalysisRelationInfosHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎实例信息</p><p>Cpu、Memory、Disk复用顶层字段</p>
                     * @return AnalysisInstanceInfo <p>分析引擎实例信息</p><p>Cpu、Memory、Disk复用顶层字段</p>
                     * 
                     */
                    AnalysisInstanceInfo GetAnalysisInstanceInfo() const;

                    /**
                     * 判断参数 AnalysisInstanceInfo 是否已赋值
                     * @return AnalysisInstanceInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInstanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>维护窗口配置</p>
                     * @return MaintenanceWindow <p>维护窗口配置</p>
                     * 
                     */
                    MaintenanceWindowInfo GetMaintenanceWindow() const;

                    /**
                     * 判断参数 MaintenanceWindow 是否已赋值
                     * @return MaintenanceWindow 是否已赋值
                     * 
                     */
                    bool MaintenanceWindowHasBeenSet() const;

                    /**
                     * 获取<p>是否开启透明加密，0：未开启；1：已开启</p>
                     * @return EncryptionEnable <p>是否开启透明加密，0：未开启；1：已开启</p>
                     * 
                     */
                    int64_t GetEncryptionEnable() const;

                    /**
                     * 判断参数 EncryptionEnable 是否已赋值
                     * @return EncryptionEnable 是否已赋值
                     * 
                     */
                    bool EncryptionEnableHasBeenSet() const;

                    /**
                     * 获取<p>真实使用的kms地域，用于后续调用kms服务</p>
                     * @return EncryptionKmsRegion <p>真实使用的kms地域，用于后续调用kms服务</p>
                     * 
                     */
                    std::string GetEncryptionKmsRegion() const;

                    /**
                     * 判断参数 EncryptionKmsRegion 是否已赋值
                     * @return EncryptionKmsRegion 是否已赋值
                     * 
                     */
                    bool EncryptionKmsRegionHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>区域</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>字符型vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>字符型subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>创建实例版本</p>
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>子网IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>子网端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>存储节点磁盘容量，单位GB</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>存储节点数量</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>初始化实例参数</p>
                     */
                    std::vector<InstanceParam> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * <p>实例标签信息</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>存储节点副本数量</p>
                     */
                    int64_t m_replications;
                    bool m_replicationsHasBeenSet;

                    /**
                     * <p>全能型副本数</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>字符集</p>
                     */
                    std::string m_charSet;
                    bool m_charSetHasBeenSet;

                    /**
                     * <p>节点信息</p>
                     */
                    std::vector<NodeInfo> m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * <p>实例所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例规格</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例状态中文描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>存储节点CPU核数</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>存储节点内存大小</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>续费标志</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>付费模式，0后付费，1预付费</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * <p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedAt;
                    bool m_isolatedAtHasBeenSet;

                    /**
                     * <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>实例节点可用区列表。Zones[0]表示主可用区</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>最大节点磁盘使用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * <p>binlog是否开启</p>
                     */
                    int64_t m_binlogStatus;
                    bool m_binlogStatusHasBeenSet;

                    /**
                     * <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
                     */
                    int64_t m_standbyFlag;
                    bool m_standbyFlagHasBeenSet;

                    /**
                     * <p>cdc节点类型</p>
                     */
                    std::string m_binlogType;
                    bool m_binlogTypeHasBeenSet;

                    /**
                     * <p>1表示支持，0表示不支持</p>
                     */
                    int64_t m_timingModifyInstanceFlag;
                    bool m_timingModifyInstanceFlagHasBeenSet;

                    /**
                     * <p>列存节点cpu核数</p>
                     */
                    int64_t m_columnarNodeCpu;
                    bool m_columnarNodeCpuHasBeenSet;

                    /**
                     * <p>列存节点mem内存大小</p>
                     */
                    int64_t m_columnarNodeMem;
                    bool m_columnarNodeMemHasBeenSet;

                    /**
                     * <p>列存节点个数</p>
                     */
                    int64_t m_columnarNodeNum;
                    bool m_columnarNodeNumHasBeenSet;

                    /**
                     * <p>列存节点磁盘大小</p>
                     */
                    int64_t m_columnarNodeDisk;
                    bool m_columnarNodeDiskHasBeenSet;

                    /**
                     * <p>列存节点磁盘类型</p>
                     */
                    std::string m_columnarNodeStorageType;
                    bool m_columnarNodeStorageTypeHasBeenSet;

                    /**
                     * <p>列存节点规格</p>
                     */
                    std::string m_columnarNodeSpecCode;
                    bool m_columnarNodeSpecCodeHasBeenSet;

                    /**
                     * <p>列存 vip</p>
                     */
                    std::string m_columnarVip;
                    bool m_columnarVipHasBeenSet;

                    /**
                     * <p>列存 vport</p>
                     */
                    int64_t m_columnarVport;
                    bool m_columnarVportHasBeenSet;

                    /**
                     * <p>实例是否支持列存</p>
                     */
                    bool m_isSupportColumnar;
                    bool m_isSupportColumnarHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    int64_t m_instanceCategory;
                    bool m_instanceCategoryHasBeenSet;

                    /**
                     * <p>兼容模式</p>
                     */
                    std::string m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>是否支持修改全能型副本数量</p>
                     */
                    bool m_isSwitchFullReplicationsEnable;
                    bool m_isSwitchFullReplicationsEnableHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>dumper vip</p>
                     */
                    std::string m_dumperVip;
                    bool m_dumperVipHasBeenSet;

                    /**
                     * <p>dumper vport</p>
                     */
                    int64_t m_dumperVport;
                    bool m_dumperVportHasBeenSet;

                    /**
                     * <p>svls实例的ccu变配范围</p>
                     */
                    AutoScalingConfig m_autoScaleConfig;
                    bool m_autoScaleConfigHasBeenSet;

                    /**
                     * <p>参数模板id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>参数模板名称</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>实例分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎实例</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>分析引擎实例关系</p>
                     */
                    std::vector<AnalysisRelationInfo> m_analysisRelationInfos;
                    bool m_analysisRelationInfosHasBeenSet;

                    /**
                     * <p>分析引擎实例信息</p><p>Cpu、Memory、Disk复用顶层字段</p>
                     */
                    AnalysisInstanceInfo m_analysisInstanceInfo;
                    bool m_analysisInstanceInfoHasBeenSet;

                    /**
                     * <p>维护窗口配置</p>
                     */
                    MaintenanceWindowInfo m_maintenanceWindow;
                    bool m_maintenanceWindowHasBeenSet;

                    /**
                     * <p>是否开启透明加密，0：未开启；1：已开启</p>
                     */
                    int64_t m_encryptionEnable;
                    bool m_encryptionEnableHasBeenSet;

                    /**
                     * <p>真实使用的kms地域，用于后续调用kms服务</p>
                     */
                    std::string m_encryptionKmsRegion;
                    bool m_encryptionKmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
