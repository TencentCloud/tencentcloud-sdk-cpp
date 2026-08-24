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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIR_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/DiskCopyPairForCvm.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 复制对信息
                */
                class CopyPair : public AbstractModel
                {
                public:
                    CopyPair();
                    ~CopyPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取复制对ID（CVM 类型为 cvmcopypair-xxxxxxxx，DISK/CFS 类型为 copypair-xxxxxxxx）
                     * @return CopyPairId 复制对ID（CVM 类型为 cvmcopypair-xxxxxxxx，DISK/CFS 类型为 copypair-xxxxxxxx）
                     * 
                     */
                    std::string GetCopyPairId() const;

                    /**
                     * 设置复制对ID（CVM 类型为 cvmcopypair-xxxxxxxx，DISK/CFS 类型为 copypair-xxxxxxxx）
                     * @param _copyPairId 复制对ID（CVM 类型为 cvmcopypair-xxxxxxxx，DISK/CFS 类型为 copypair-xxxxxxxx）
                     * 
                     */
                    void SetCopyPairId(const std::string& _copyPairId);

                    /**
                     * 判断参数 CopyPairId 是否已赋值
                     * @return CopyPairId 是否已赋值
                     * 
                     */
                    bool CopyPairIdHasBeenSet() const;

                    /**
                     * 获取复制对名称
                     * @return CopyPairName 复制对名称
                     * 
                     */
                    std::string GetCopyPairName() const;

                    /**
                     * 设置复制对名称
                     * @param _copyPairName 复制对名称
                     * 
                     */
                    void SetCopyPairName(const std::string& _copyPairName);

                    /**
                     * 判断参数 CopyPairName 是否已赋值
                     * @return CopyPairName 是否已赋值
                     * 
                     */
                    bool CopyPairNameHasBeenSet() const;

                    /**
                     * 获取所属容灾站点对ID
                     * @return SitePairId 所属容灾站点对ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置所属容灾站点对ID
                     * @param _sitePairId 所属容灾站点对ID
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                    /**
                     * 获取所属容灾站点对名称
                     * @return SitePairName 所属容灾站点对名称
                     * 
                     */
                    std::string GetSitePairName() const;

                    /**
                     * 设置所属容灾站点对名称
                     * @param _sitePairName 所属容灾站点对名称
                     * 
                     */
                    void SetSitePairName(const std::string& _sitePairName);

                    /**
                     * 判断参数 SitePairName 是否已赋值
                     * @return SitePairName 是否已赋值
                     * 
                     */
                    bool SitePairNameHasBeenSet() const;

                    /**
                     * 获取保护组ID
                     * @return ProtectGroupId 保护组ID
                     * 
                     */
                    std::string GetProtectGroupId() const;

                    /**
                     * 设置保护组ID
                     * @param _protectGroupId 保护组ID
                     * 
                     */
                    void SetProtectGroupId(const std::string& _protectGroupId);

                    /**
                     * 判断参数 ProtectGroupId 是否已赋值
                     * @return ProtectGroupId 是否已赋值
                     * 
                     */
                    bool ProtectGroupIdHasBeenSet() const;

                    /**
                     * 获取保护组名称
                     * @return ProtectGroupName 保护组名称
                     * 
                     */
                    std::string GetProtectGroupName() const;

                    /**
                     * 设置保护组名称
                     * @param _protectGroupName 保护组名称
                     * 
                     */
                    void SetProtectGroupName(const std::string& _protectGroupName);

                    /**
                     * 判断参数 ProtectGroupName 是否已赋值
                     * @return ProtectGroupName 是否已赋值
                     * 
                     */
                    bool ProtectGroupNameHasBeenSet() const;

                    /**
                     * 获取复制对状态。可选值：INIT、RUNNING、FULL_COPYING、INC_COPYING、NORMAL、DOWN、DEGRADE 等
                     * @return CopyPairState 复制对状态。可选值：INIT、RUNNING、FULL_COPYING、INC_COPYING、NORMAL、DOWN、DEGRADE 等
                     * 
                     */
                    std::string GetCopyPairState() const;

                    /**
                     * 设置复制对状态。可选值：INIT、RUNNING、FULL_COPYING、INC_COPYING、NORMAL、DOWN、DEGRADE 等
                     * @param _copyPairState 复制对状态。可选值：INIT、RUNNING、FULL_COPYING、INC_COPYING、NORMAL、DOWN、DEGRADE 等
                     * 
                     */
                    void SetCopyPairState(const std::string& _copyPairState);

                    /**
                     * 判断参数 CopyPairState 是否已赋值
                     * @return CopyPairState 是否已赋值
                     * 
                     */
                    bool CopyPairStateHasBeenSet() const;

                    /**
                     * 获取复制对类型。可选值：DISK、INSTANCE、CFS
                     * @return CopyPairType 复制对类型。可选值：DISK、INSTANCE、CFS
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置复制对类型。可选值：DISK、INSTANCE、CFS
                     * @param _copyPairType 复制对类型。可选值：DISK、INSTANCE、CFS
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                    /**
                     * 获取生产地域
                     * @return SourceRegion 生产地域
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置生产地域
                     * @param _sourceRegion 生产地域
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取生产可用区
                     * @return SourceZone 生产可用区
                     * 
                     */
                    std::string GetSourceZone() const;

                    /**
                     * 设置生产可用区
                     * @param _sourceZone 生产可用区
                     * 
                     */
                    void SetSourceZone(const std::string& _sourceZone);

                    /**
                     * 判断参数 SourceZone 是否已赋值
                     * @return SourceZone 是否已赋值
                     * 
                     */
                    bool SourceZoneHasBeenSet() const;

                    /**
                     * 获取生产端VPC
                     * @return SourceVpc 生产端VPC
                     * 
                     */
                    std::string GetSourceVpc() const;

                    /**
                     * 设置生产端VPC
                     * @param _sourceVpc 生产端VPC
                     * 
                     */
                    void SetSourceVpc(const std::string& _sourceVpc);

                    /**
                     * 判断参数 SourceVpc 是否已赋值
                     * @return SourceVpc 是否已赋值
                     * 
                     */
                    bool SourceVpcHasBeenSet() const;

                    /**
                     * 获取容灾地域
                     * @return TargetRegion 容灾地域
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置容灾地域
                     * @param _targetRegion 容灾地域
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取容灾可用区
                     * @return TargetZone 容灾可用区
                     * 
                     */
                    std::string GetTargetZone() const;

                    /**
                     * 设置容灾可用区
                     * @param _targetZone 容灾可用区
                     * 
                     */
                    void SetTargetZone(const std::string& _targetZone);

                    /**
                     * 判断参数 TargetZone 是否已赋值
                     * @return TargetZone 是否已赋值
                     * 
                     */
                    bool TargetZoneHasBeenSet() const;

                    /**
                     * 获取容灾端VPC
                     * @return TargetVpc 容灾端VPC
                     * 
                     */
                    std::string GetTargetVpc() const;

                    /**
                     * 设置容灾端VPC
                     * @param _targetVpc 容灾端VPC
                     * 
                     */
                    void SetTargetVpc(const std::string& _targetVpc);

                    /**
                     * 判断参数 TargetVpc 是否已赋值
                     * @return TargetVpc 是否已赋值
                     * 
                     */
                    bool TargetVpcHasBeenSet() const;

                    /**
                     * 获取生产资源ID。CVM 类型为源 InstanceId（ins-xxx）；DISK 类型为源 DiskId（disk-xxx）；CFS 类型为源 FilesystemId（cfs-xxx）
                     * @return SourceResourceId 生产资源ID。CVM 类型为源 InstanceId（ins-xxx）；DISK 类型为源 DiskId（disk-xxx）；CFS 类型为源 FilesystemId（cfs-xxx）
                     * 
                     */
                    std::string GetSourceResourceId() const;

                    /**
                     * 设置生产资源ID。CVM 类型为源 InstanceId（ins-xxx）；DISK 类型为源 DiskId（disk-xxx）；CFS 类型为源 FilesystemId（cfs-xxx）
                     * @param _sourceResourceId 生产资源ID。CVM 类型为源 InstanceId（ins-xxx）；DISK 类型为源 DiskId（disk-xxx）；CFS 类型为源 FilesystemId（cfs-xxx）
                     * 
                     */
                    void SetSourceResourceId(const std::string& _sourceResourceId);

                    /**
                     * 判断参数 SourceResourceId 是否已赋值
                     * @return SourceResourceId 是否已赋值
                     * 
                     */
                    bool SourceResourceIdHasBeenSet() const;

                    /**
                     * 获取容灾资源ID。语义同 SourceResourceId（CVM/DISK/CFS）。延迟创建模式且 CVM 未真实创建时为占位符 drp-xxx，CVM 创建后为真实 ins-xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetResourceId 容灾资源ID。语义同 SourceResourceId（CVM/DISK/CFS）。延迟创建模式且 CVM 未真实创建时为占位符 drp-xxx，CVM 创建后为真实 ins-xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置容灾资源ID。语义同 SourceResourceId（CVM/DISK/CFS）。延迟创建模式且 CVM 未真实创建时为占位符 drp-xxx，CVM 创建后为真实 ins-xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetResourceId 容灾资源ID。语义同 SourceResourceId（CVM/DISK/CFS）。延迟创建模式且 CVM 未真实创建时为占位符 drp-xxx，CVM 创建后为真实 ins-xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetResourceId(const std::string& _targetResourceId);

                    /**
                     * 判断参数 TargetResourceId 是否已赋值
                     * @return TargetResourceId 是否已赋值
                     * 
                     */
                    bool TargetResourceIdHasBeenSet() const;

                    /**
                     * 获取生产站点盘挂载的实例ID（DISK 类型时为挂载的 CVM ins-xxx；INSTANCE 类型时与 SourceResourceId 一致）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 生产站点盘挂载的实例ID（DISK 类型时为挂载的 CVM ins-xxx；INSTANCE 类型时与 SourceResourceId 一致）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置生产站点盘挂载的实例ID（DISK 类型时为挂载的 CVM ins-xxx；INSTANCE 类型时与 SourceResourceId 一致）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 生产站点盘挂载的实例ID（DISK 类型时为挂载的 CVM ins-xxx；INSTANCE 类型时与 SourceResourceId 一致）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所属CVM复制对ID（仅 DISK 类型且其 CVM 复制对存在时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCopyPairId 所属CVM复制对ID（仅 DISK 类型且其 CVM 复制对存在时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceCopyPairId() const;

                    /**
                     * 设置所属CVM复制对ID（仅 DISK 类型且其 CVM 复制对存在时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCopyPairId 所属CVM复制对ID（仅 DISK 类型且其 CVM 复制对存在时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCopyPairId(const std::string& _instanceCopyPairId);

                    /**
                     * 判断参数 InstanceCopyPairId 是否已赋值
                     * @return InstanceCopyPairId 是否已赋值
                     * 
                     */
                    bool InstanceCopyPairIdHasBeenSet() const;

                    /**
                     * 获取复制进度。CVM 类型为所有挂载磁盘进度的平均值；DISK/CFS 类型为本盘进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 复制进度。CVM 类型为所有挂载磁盘进度的平均值；DISK/CFS 类型为本盘进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置复制进度。CVM 类型为所有挂载磁盘进度的平均值；DISK/CFS 类型为本盘进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent 复制进度。CVM 类型为所有挂载磁盘进度的平均值；DISK/CFS 类型为本盘进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取最新保护时间点。当 CopyPairState=FULL_COPYING 时为 null（首次全量未完成）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestProtectionTime 最新保护时间点。当 CopyPairState=FULL_COPYING 时为 null（首次全量未完成）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestProtectionTime() const;

                    /**
                     * 设置最新保护时间点。当 CopyPairState=FULL_COPYING 时为 null（首次全量未完成）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestProtectionTime 最新保护时间点。当 CopyPairState=FULL_COPYING 时为 null（首次全量未完成）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestProtectionTime(const std::string& _latestProtectionTime);

                    /**
                     * 判断参数 LatestProtectionTime 是否已赋值
                     * @return LatestProtectionTime 是否已赋值
                     * 
                     */
                    bool LatestProtectionTimeHasBeenSet() const;

                    /**
                     * 获取RPO（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoveryPointObjective RPO（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecoveryPointObjective() const;

                    /**
                     * 设置RPO（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoveryPointObjective RPO（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecoveryPointObjective(const int64_t& _recoveryPointObjective);

                    /**
                     * 判断参数 RecoveryPointObjective 是否已赋值
                     * @return RecoveryPointObjective 是否已赋值
                     * 
                     */
                    bool RecoveryPointObjectiveHasBeenSet() const;

                    /**
                     * 获取数据方向。可选值：POSITIVE（正向）、REVERSE（反向，failover 后）。后端在 REVERSE 时已自动轮转 src/target 字段
                     * @return DataDirection 数据方向。可选值：POSITIVE（正向）、REVERSE（反向，failover 后）。后端在 REVERSE 时已自动轮转 src/target 字段
                     * 
                     */
                    std::string GetDataDirection() const;

                    /**
                     * 设置数据方向。可选值：POSITIVE（正向）、REVERSE（反向，failover 后）。后端在 REVERSE 时已自动轮转 src/target 字段
                     * @param _dataDirection 数据方向。可选值：POSITIVE（正向）、REVERSE（反向，failover 后）。后端在 REVERSE 时已自动轮转 src/target 字段
                     * 
                     */
                    void SetDataDirection(const std::string& _dataDirection);

                    /**
                     * 判断参数 DataDirection 是否已赋值
                     * @return DataDirection 是否已赋值
                     * 
                     */
                    bool DataDirectionHasBeenSet() const;

                    /**
                     * 获取创建来源。可选值：LOCAL（本地侧创建）、PEER（对端创建）
                     * @return CreateFrom 创建来源。可选值：LOCAL（本地侧创建）、PEER（对端创建）
                     * 
                     */
                    std::string GetCreateFrom() const;

                    /**
                     * 设置创建来源。可选值：LOCAL（本地侧创建）、PEER（对端创建）
                     * @param _createFrom 创建来源。可选值：LOCAL（本地侧创建）、PEER（对端创建）
                     * 
                     */
                    void SetCreateFrom(const std::string& _createFrom);

                    /**
                     * 判断参数 CreateFrom 是否已赋值
                     * @return CreateFrom 是否已赋值
                     * 
                     */
                    bool CreateFromHasBeenSet() const;

                    /**
                     * 获取容灾类型。可选值：CROSS_ZONE（跨可用区）、CROSS_REGION（跨地域）、CROSS_CLOUD（跨云）
                     * @return DisasterRecoveryType 容灾类型。可选值：CROSS_ZONE（跨可用区）、CROSS_REGION（跨地域）、CROSS_CLOUD（跨云）
                     * 
                     */
                    std::string GetDisasterRecoveryType() const;

                    /**
                     * 设置容灾类型。可选值：CROSS_ZONE（跨可用区）、CROSS_REGION（跨地域）、CROSS_CLOUD（跨云）
                     * @param _disasterRecoveryType 容灾类型。可选值：CROSS_ZONE（跨可用区）、CROSS_REGION（跨地域）、CROSS_CLOUD（跨云）
                     * 
                     */
                    void SetDisasterRecoveryType(const std::string& _disasterRecoveryType);

                    /**
                     * 判断参数 DisasterRecoveryType 是否已赋值
                     * @return DisasterRecoveryType 是否已赋值
                     * 
                     */
                    bool DisasterRecoveryTypeHasBeenSet() const;

                    /**
                     * 获取对端云名称（仅跨云场景）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerCloudName 对端云名称（仅跨云场景）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerCloudName() const;

                    /**
                     * 设置对端云名称（仅跨云场景）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerCloudName 对端云名称（仅跨云场景）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeerCloudName(const std::string& _peerCloudName);

                    /**
                     * 判断参数 PeerCloudName 是否已赋值
                     * @return PeerCloudName 是否已赋值
                     * 
                     */
                    bool PeerCloudNameHasBeenSet() const;

                    /**
                     * 获取是否在回滚中（0/1）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rollbacking 是否在回滚中（0/1）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRollbacking() const;

                    /**
                     * 设置是否在回滚中（0/1）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbacking 是否在回滚中（0/1）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRollbacking(const int64_t& _rollbacking);

                    /**
                     * 判断参数 Rollbacking 是否已赋值
                     * @return Rollbacking 是否已赋值
                     * 
                     */
                    bool RollbackingHasBeenSet() const;

                    /**
                     * 获取回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RollbackPercent 回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRollbackPercent() const;

                    /**
                     * 设置回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbackPercent 回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRollbackPercent(const int64_t& _rollbackPercent);

                    /**
                     * 判断参数 RollbackPercent 是否已赋值
                     * @return RollbackPercent 是否已赋值
                     * 
                     */
                    bool RollbackPercentHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin 创建账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置创建账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin 创建账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountUin(const std::string& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取创建协作者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 创建协作者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置创建协作者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 创建协作者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取演练组ID（用于演练组内过滤存量复制对，无演练时为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrillGroupId 演练组ID（用于演练组内过滤存量复制对，无演练时为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDrillGroupId() const;

                    /**
                     * 设置演练组ID（用于演练组内过滤存量复制对，无演练时为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drillGroupId 演练组ID（用于演练组内过滤存量复制对，无演练时为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrillGroupId(const std::string& _drillGroupId);

                    /**
                     * 判断参数 DrillGroupId 是否已赋值
                     * @return DrillGroupId 是否已赋值
                     * 
                     */
                    bool DrillGroupIdHasBeenSet() const;

                    /**
                     * 获取保护时间点列表（仅当 QueryProtectionTime=true 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectionTimeSet 保护时间点列表（仅当 QueryProtectionTime=true 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProtectionTimeSet() const;

                    /**
                     * 设置保护时间点列表（仅当 QueryProtectionTime=true 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectionTimeSet 保护时间点列表（仅当 QueryProtectionTime=true 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectionTimeSet(const std::vector<std::string>& _protectionTimeSet);

                    /**
                     * 判断参数 ProtectionTimeSet 是否已赋值
                     * @return ProtectionTimeSet 是否已赋值
                     * 
                     */
                    bool ProtectionTimeSetHasBeenSet() const;

                    /**
                     * 获取CVM下挂载磁盘的复制对列表（仅 CopyPairType=INSTANCE 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskCopyPairSet CVM下挂载磁盘的复制对列表（仅 CopyPairType=INSTANCE 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskCopyPairForCvm> GetDiskCopyPairSet() const;

                    /**
                     * 设置CVM下挂载磁盘的复制对列表（仅 CopyPairType=INSTANCE 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskCopyPairSet CVM下挂载磁盘的复制对列表（仅 CopyPairType=INSTANCE 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskCopyPairSet(const std::vector<DiskCopyPairForCvm>& _diskCopyPairSet);

                    /**
                     * 判断参数 DiskCopyPairSet 是否已赋值
                     * @return DiskCopyPairSet 是否已赋值
                     * 
                     */
                    bool DiskCopyPairSetHasBeenSet() const;

                    /**
                     * 获取是否为延迟创建模式（创建后固定不变）。仅 CVM 复制对返回
                     * @return DeferredCreate 是否为延迟创建模式（创建后固定不变）。仅 CVM 复制对返回
                     * 
                     */
                    bool GetDeferredCreate() const;

                    /**
                     * 设置是否为延迟创建模式（创建后固定不变）。仅 CVM 复制对返回
                     * @param _deferredCreate 是否为延迟创建模式（创建后固定不变）。仅 CVM 复制对返回
                     * 
                     */
                    void SetDeferredCreate(const bool& _deferredCreate);

                    /**
                     * 判断参数 DeferredCreate 是否已赋值
                     * @return DeferredCreate 是否已赋值
                     * 
                     */
                    bool DeferredCreateHasBeenSet() const;

                    /**
                     * 获取目标 CVM 是否已真实创建（首次 failover 完成后置 true）。仅 CVM 复制对返回
                     * @return TargetCvmCreated 目标 CVM 是否已真实创建（首次 failover 完成后置 true）。仅 CVM 复制对返回
                     * 
                     */
                    bool GetTargetCvmCreated() const;

                    /**
                     * 设置目标 CVM 是否已真实创建（首次 failover 完成后置 true）。仅 CVM 复制对返回
                     * @param _targetCvmCreated 目标 CVM 是否已真实创建（首次 failover 完成后置 true）。仅 CVM 复制对返回
                     * 
                     */
                    void SetTargetCvmCreated(const bool& _targetCvmCreated);

                    /**
                     * 判断参数 TargetCvmCreated 是否已赋值
                     * @return TargetCvmCreated 是否已赋值
                     * 
                     */
                    bool TargetCvmCreatedHasBeenSet() const;

                    /**
                     * 获取CVM 创建参数（JSON 字符串）。仅当请求传 QueryCvmCreateParams=true 且复制对处于 deferred_create=1 AND target_cvm_created=0 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmCreateParams CVM 创建参数（JSON 字符串）。仅当请求传 QueryCvmCreateParams=true 且复制对处于 deferred_create=1 AND target_cvm_created=0 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCvmCreateParams() const;

                    /**
                     * 设置CVM 创建参数（JSON 字符串）。仅当请求传 QueryCvmCreateParams=true 且复制对处于 deferred_create=1 AND target_cvm_created=0 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cvmCreateParams CVM 创建参数（JSON 字符串）。仅当请求传 QueryCvmCreateParams=true 且复制对处于 deferred_create=1 AND target_cvm_created=0 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCvmCreateParams(const std::string& _cvmCreateParams);

                    /**
                     * 判断参数 CvmCreateParams 是否已赋值
                     * @return CvmCreateParams 是否已赋值
                     * 
                     */
                    bool CvmCreateParamsHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 复制对ID（CVM 类型为 cvmcopypair-xxxxxxxx，DISK/CFS 类型为 copypair-xxxxxxxx）
                     */
                    std::string m_copyPairId;
                    bool m_copyPairIdHasBeenSet;

                    /**
                     * 复制对名称
                     */
                    std::string m_copyPairName;
                    bool m_copyPairNameHasBeenSet;

                    /**
                     * 所属容灾站点对ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 所属容灾站点对名称
                     */
                    std::string m_sitePairName;
                    bool m_sitePairNameHasBeenSet;

                    /**
                     * 保护组ID
                     */
                    std::string m_protectGroupId;
                    bool m_protectGroupIdHasBeenSet;

                    /**
                     * 保护组名称
                     */
                    std::string m_protectGroupName;
                    bool m_protectGroupNameHasBeenSet;

                    /**
                     * 复制对状态。可选值：INIT、RUNNING、FULL_COPYING、INC_COPYING、NORMAL、DOWN、DEGRADE 等
                     */
                    std::string m_copyPairState;
                    bool m_copyPairStateHasBeenSet;

                    /**
                     * 复制对类型。可选值：DISK、INSTANCE、CFS
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                    /**
                     * 生产地域
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 生产可用区
                     */
                    std::string m_sourceZone;
                    bool m_sourceZoneHasBeenSet;

                    /**
                     * 生产端VPC
                     */
                    std::string m_sourceVpc;
                    bool m_sourceVpcHasBeenSet;

                    /**
                     * 容灾地域
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * 容灾可用区
                     */
                    std::string m_targetZone;
                    bool m_targetZoneHasBeenSet;

                    /**
                     * 容灾端VPC
                     */
                    std::string m_targetVpc;
                    bool m_targetVpcHasBeenSet;

                    /**
                     * 生产资源ID。CVM 类型为源 InstanceId（ins-xxx）；DISK 类型为源 DiskId（disk-xxx）；CFS 类型为源 FilesystemId（cfs-xxx）
                     */
                    std::string m_sourceResourceId;
                    bool m_sourceResourceIdHasBeenSet;

                    /**
                     * 容灾资源ID。语义同 SourceResourceId（CVM/DISK/CFS）。延迟创建模式且 CVM 未真实创建时为占位符 drp-xxx，CVM 创建后为真实 ins-xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * 生产站点盘挂载的实例ID（DISK 类型时为挂载的 CVM ins-xxx；INSTANCE 类型时与 SourceResourceId 一致）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 所属CVM复制对ID（仅 DISK 类型且其 CVM 复制对存在时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceCopyPairId;
                    bool m_instanceCopyPairIdHasBeenSet;

                    /**
                     * 复制进度。CVM 类型为所有挂载磁盘进度的平均值；DISK/CFS 类型为本盘进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 最新保护时间点。当 CopyPairState=FULL_COPYING 时为 null（首次全量未完成）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestProtectionTime;
                    bool m_latestProtectionTimeHasBeenSet;

                    /**
                     * RPO（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recoveryPointObjective;
                    bool m_recoveryPointObjectiveHasBeenSet;

                    /**
                     * 数据方向。可选值：POSITIVE（正向）、REVERSE（反向，failover 后）。后端在 REVERSE 时已自动轮转 src/target 字段
                     */
                    std::string m_dataDirection;
                    bool m_dataDirectionHasBeenSet;

                    /**
                     * 创建来源。可选值：LOCAL（本地侧创建）、PEER（对端创建）
                     */
                    std::string m_createFrom;
                    bool m_createFromHasBeenSet;

                    /**
                     * 容灾类型。可选值：CROSS_ZONE（跨可用区）、CROSS_REGION（跨地域）、CROSS_CLOUD（跨云）
                     */
                    std::string m_disasterRecoveryType;
                    bool m_disasterRecoveryTypeHasBeenSet;

                    /**
                     * 对端云名称（仅跨云场景）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerCloudName;
                    bool m_peerCloudNameHasBeenSet;

                    /**
                     * 是否在回滚中（0/1）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rollbacking;
                    bool m_rollbackingHasBeenSet;

                    /**
                     * 回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rollbackPercent;
                    bool m_rollbackPercentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 创建协作者 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 演练组ID（用于演练组内过滤存量复制对，无演练时为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_drillGroupId;
                    bool m_drillGroupIdHasBeenSet;

                    /**
                     * 保护时间点列表（仅当 QueryProtectionTime=true 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_protectionTimeSet;
                    bool m_protectionTimeSetHasBeenSet;

                    /**
                     * CVM下挂载磁盘的复制对列表（仅 CopyPairType=INSTANCE 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskCopyPairForCvm> m_diskCopyPairSet;
                    bool m_diskCopyPairSetHasBeenSet;

                    /**
                     * 是否为延迟创建模式（创建后固定不变）。仅 CVM 复制对返回
                     */
                    bool m_deferredCreate;
                    bool m_deferredCreateHasBeenSet;

                    /**
                     * 目标 CVM 是否已真实创建（首次 failover 完成后置 true）。仅 CVM 复制对返回
                     */
                    bool m_targetCvmCreated;
                    bool m_targetCvmCreatedHasBeenSet;

                    /**
                     * CVM 创建参数（JSON 字符串）。仅当请求传 QueryCvmCreateParams=true 且复制对处于 deferred_create=1 AND target_cvm_created=0 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvmCreateParams;
                    bool m_cvmCreateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIR_H_
