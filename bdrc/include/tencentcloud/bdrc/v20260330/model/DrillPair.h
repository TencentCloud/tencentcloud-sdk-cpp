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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLPAIR_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLPAIR_H_

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
                * 演练对
                */
                class DrillPair : public AbstractModel
                {
                public:
                    DrillPair();
                    ~DrillPair() = default;
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
                     * 获取演练对ID
                     * @return DrillPairId 演练对ID
                     * 
                     */
                    std::string GetDrillPairId() const;

                    /**
                     * 设置演练对ID
                     * @param _drillPairId 演练对ID
                     * 
                     */
                    void SetDrillPairId(const std::string& _drillPairId);

                    /**
                     * 判断参数 DrillPairId 是否已赋值
                     * @return DrillPairId 是否已赋值
                     * 
                     */
                    bool DrillPairIdHasBeenSet() const;

                    /**
                     * 获取演练对名称
                     * @return DrillPairName 演练对名称
                     * 
                     */
                    std::string GetDrillPairName() const;

                    /**
                     * 设置演练对名称
                     * @param _drillPairName 演练对名称
                     * 
                     */
                    void SetDrillPairName(const std::string& _drillPairName);

                    /**
                     * 判断参数 DrillPairName 是否已赋值
                     * @return DrillPairName 是否已赋值
                     * 
                     */
                    bool DrillPairNameHasBeenSet() const;

                    /**
                     * 获取演练对状态。枚举值：RUNNING / SUCCESS / FAILED 等。
                     * @return DrillPairState 演练对状态。枚举值：RUNNING / SUCCESS / FAILED 等。
                     * 
                     */
                    std::string GetDrillPairState() const;

                    /**
                     * 设置演练对状态。枚举值：RUNNING / SUCCESS / FAILED 等。
                     * @param _drillPairState 演练对状态。枚举值：RUNNING / SUCCESS / FAILED 等。
                     * 
                     */
                    void SetDrillPairState(const std::string& _drillPairState);

                    /**
                     * 判断参数 DrillPairState 是否已赋值
                     * @return DrillPairState 是否已赋值
                     * 
                     */
                    bool DrillPairStateHasBeenSet() const;

                    /**
                     * 获取容灾站点对ID
                     * @return SitePairId 容灾站点对ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置容灾站点对ID
                     * @param _sitePairId 容灾站点对ID
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
                     * 获取云硬盘复制对ID
                     * @return CopyPairId 云硬盘复制对ID
                     * 
                     */
                    std::string GetCopyPairId() const;

                    /**
                     * 设置云硬盘复制对ID
                     * @param _copyPairId 云硬盘复制对ID
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
                     * 获取生产站点盘ID
                     * @return SourceResourceId 生产站点盘ID
                     * 
                     */
                    std::string GetSourceResourceId() const;

                    /**
                     * 设置生产站点盘ID
                     * @param _sourceResourceId 生产站点盘ID
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
                     * 获取演练资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetResourceId 演练资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置演练资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetResourceId 演练资源ID
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
                     * 获取演练对的类型。枚举值：DISK / INSTANCE / CFS。
                     * @return DrillPairType 演练对的类型。枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    std::string GetDrillPairType() const;

                    /**
                     * 设置演练对的类型。枚举值：DISK / INSTANCE / CFS。
                     * @param _drillPairType 演练对的类型。枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    void SetDrillPairType(const std::string& _drillPairType);

                    /**
                     * 判断参数 DrillPairType 是否已赋值
                     * @return DrillPairType 是否已赋值
                     * 
                     */
                    bool DrillPairTypeHasBeenSet() const;

                    /**
                     * 获取演练资源容量（GB）。
                     * @return Size 演练资源容量（GB）。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置演练资源容量（GB）。
                     * @param _size 演练资源容量（GB）。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取演练的容灾点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoveryTime 演练的容灾点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecoveryTime() const;

                    /**
                     * 设置演练的容灾点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoveryTime 演练的容灾点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecoveryTime(const std::string& _recoveryTime);

                    /**
                     * 判断参数 RecoveryTime 是否已赋值
                     * @return RecoveryTime 是否已赋值
                     * 
                     */
                    bool RecoveryTimeHasBeenSet() const;

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
                     * 获取演练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 演练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置演练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 演练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取是否正在回滚。0 - 未回滚，1 - 回滚中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rollbacking 是否正在回滚。0 - 未回滚，1 - 回滚中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRollbacking() const;

                    /**
                     * 设置是否正在回滚。0 - 未回滚，1 - 回滚中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbacking 是否正在回滚。0 - 未回滚，1 - 回滚中。
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
                     * 获取回滚进度百分比（0-100）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RollbackPercent 回滚进度百分比（0-100）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRollbackPercent() const;

                    /**
                     * 设置回滚进度百分比（0-100）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbackPercent 回滚进度百分比（0-100）。
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
                     * 获取创建定期备份策略的账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin 创建定期备份策略的账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置创建定期备份策略的账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin 创建定期备份策略的账户uin ID信息
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
                     * 获取创建定期备份策略的子账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 创建定期备份策略的子账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置创建定期备份策略的子账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 创建定期备份策略的子账户uin ID信息
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
                     * 获取演练组ID
                     * @return DrillGroupId 演练组ID
                     * 
                     */
                    std::string GetDrillGroupId() const;

                    /**
                     * 设置演练组ID
                     * @param _drillGroupId 演练组ID
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
                     * 获取复制对名称。
                     * @return CopyPairName 复制对名称。
                     * 
                     */
                    std::string GetCopyPairName() const;

                    /**
                     * 设置复制对名称。
                     * @param _copyPairName 复制对名称。
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
                     * 获取演练组名称。
                     * @return DrillGroupName 演练组名称。
                     * 
                     */
                    std::string GetDrillGroupName() const;

                    /**
                     * 设置演练组名称。
                     * @param _drillGroupName 演练组名称。
                     * 
                     */
                    void SetDrillGroupName(const std::string& _drillGroupName);

                    /**
                     * 判断参数 DrillGroupName 是否已赋值
                     * @return DrillGroupName 是否已赋值
                     * 
                     */
                    bool DrillGroupNameHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 演练对ID
                     */
                    std::string m_drillPairId;
                    bool m_drillPairIdHasBeenSet;

                    /**
                     * 演练对名称
                     */
                    std::string m_drillPairName;
                    bool m_drillPairNameHasBeenSet;

                    /**
                     * 演练对状态。枚举值：RUNNING / SUCCESS / FAILED 等。
                     */
                    std::string m_drillPairState;
                    bool m_drillPairStateHasBeenSet;

                    /**
                     * 容灾站点对ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 云硬盘复制对ID
                     */
                    std::string m_copyPairId;
                    bool m_copyPairIdHasBeenSet;

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
                     * 生产站点盘ID
                     */
                    std::string m_sourceResourceId;
                    bool m_sourceResourceIdHasBeenSet;

                    /**
                     * 演练资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * 演练对的类型。枚举值：DISK / INSTANCE / CFS。
                     */
                    std::string m_drillPairType;
                    bool m_drillPairTypeHasBeenSet;

                    /**
                     * 演练资源容量（GB）。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 演练的容灾点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recoveryTime;
                    bool m_recoveryTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 演练结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否正在回滚。0 - 未回滚，1 - 回滚中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rollbacking;
                    bool m_rollbackingHasBeenSet;

                    /**
                     * 回滚进度百分比（0-100）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rollbackPercent;
                    bool m_rollbackPercentHasBeenSet;

                    /**
                     * 创建定期备份策略的账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 创建定期备份策略的子账户uin ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 保护组ID
                     */
                    std::string m_protectGroupId;
                    bool m_protectGroupIdHasBeenSet;

                    /**
                     * 演练组ID
                     */
                    std::string m_drillGroupId;
                    bool m_drillGroupIdHasBeenSet;

                    /**
                     * 复制对名称。
                     */
                    std::string m_copyPairName;
                    bool m_copyPairNameHasBeenSet;

                    /**
                     * 演练组名称。
                     */
                    std::string m_drillGroupName;
                    bool m_drillGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLPAIR_H_
