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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DISASTERRECOVERYDRILLGROUP_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DISASTERRECOVERYDRILLGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/DrilledResourceStatus.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 容灾演练组
                */
                class DisasterRecoveryDrillGroup : public AbstractModel
                {
                public:
                    DisasterRecoveryDrillGroup();
                    ~DisasterRecoveryDrillGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin 账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin 账户uin
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
                     * 获取子账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 子账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置子账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 子账户uin
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
                     * 获取演练组名称
                     * @return DrillGroupName 演练组名称
                     * 
                     */
                    std::string GetDrillGroupName() const;

                    /**
                     * 设置演练组名称
                     * @param _drillGroupName 演练组名称
                     * 
                     */
                    void SetDrillGroupName(const std::string& _drillGroupName);

                    /**
                     * 判断参数 DrillGroupName 是否已赋值
                     * @return DrillGroupName 是否已赋值
                     * 
                     */
                    bool DrillGroupNameHasBeenSet() const;

                    /**
                     * 获取演练组类型。枚举值：DISK / INSTANCE / CFS。
                     * @return DrillGroupType 演练组类型。枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    std::string GetDrillGroupType() const;

                    /**
                     * 设置演练组类型。枚举值：DISK / INSTANCE / CFS。
                     * @param _drillGroupType 演练组类型。枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    void SetDrillGroupType(const std::string& _drillGroupType);

                    /**
                     * 判断参数 DrillGroupType 是否已赋值
                     * @return DrillGroupType 是否已赋值
                     * 
                     */
                    bool DrillGroupTypeHasBeenSet() const;

                    /**
                     * 获取恢复时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoveryTime 恢复时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecoveryTime() const;

                    /**
                     * 设置恢复时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoveryTime 恢复时间点
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
                     * 获取演练VPC
                     * @return DrillVpc 演练VPC
                     * 
                     */
                    std::string GetDrillVpc() const;

                    /**
                     * 设置演练VPC
                     * @param _drillVpc 演练VPC
                     * 
                     */
                    void SetDrillVpc(const std::string& _drillVpc);

                    /**
                     * 判断参数 DrillVpc 是否已赋值
                     * @return DrillVpc 是否已赋值
                     * 
                     */
                    bool DrillVpcHasBeenSet() const;

                    /**
                     * 获取演练安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrillSecurityGroup 演练安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDrillSecurityGroup() const;

                    /**
                     * 设置演练安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drillSecurityGroup 演练安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrillSecurityGroup(const std::string& _drillSecurityGroup);

                    /**
                     * 判断参数 DrillSecurityGroup 是否已赋值
                     * @return DrillSecurityGroup 是否已赋值
                     * 
                     */
                    bool DrillSecurityGroupHasBeenSet() const;

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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取生命周期状态。枚举值：NORMAL / DELETED。
                     * @return LifeState 生命周期状态。枚举值：NORMAL / DELETED。
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置生命周期状态。枚举值：NORMAL / DELETED。
                     * @param _lifeState 生命周期状态。枚举值：NORMAL / DELETED。
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取容灾类型。枚举值：CROSS_ZONE / CROSS_REGION 等。
                     * @return DisasterRecoveryType 容灾类型。枚举值：CROSS_ZONE / CROSS_REGION 等。
                     * 
                     */
                    std::string GetDisasterRecoveryType() const;

                    /**
                     * 设置容灾类型。枚举值：CROSS_ZONE / CROSS_REGION 等。
                     * @param _disasterRecoveryType 容灾类型。枚举值：CROSS_ZONE / CROSS_REGION 等。
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
                     * 获取复制技术。枚举值：SYN（同步）/ ASYN（异步）。
                     * @return CopyType 复制技术。枚举值：SYN（同步）/ ASYN（异步）。
                     * 
                     */
                    std::string GetCopyType() const;

                    /**
                     * 设置复制技术。枚举值：SYN（同步）/ ASYN（异步）。
                     * @param _copyType 复制技术。枚举值：SYN（同步）/ ASYN（异步）。
                     * 
                     */
                    void SetCopyType(const std::string& _copyType);

                    /**
                     * 判断参数 CopyType 是否已赋值
                     * @return CopyType 是否已赋值
                     * 
                     */
                    bool CopyTypeHasBeenSet() const;

                    /**
                     * 获取对端云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerCloudName 对端云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerCloudName() const;

                    /**
                     * 设置对端云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerCloudName 对端云名称
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
                     * 获取本地云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalCloudName 本地云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalCloudName() const;

                    /**
                     * 设置本地云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localCloudName 本地云名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalCloudName(const std::string& _localCloudName);

                    /**
                     * 判断参数 LocalCloudName 是否已赋值
                     * @return LocalCloudName 是否已赋值
                     * 
                     */
                    bool LocalCloudNameHasBeenSet() const;

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
                     * 获取演练地域
                     * @return DrillRegion 演练地域
                     * 
                     */
                    std::string GetDrillRegion() const;

                    /**
                     * 设置演练地域
                     * @param _drillRegion 演练地域
                     * 
                     */
                    void SetDrillRegion(const std::string& _drillRegion);

                    /**
                     * 判断参数 DrillRegion 是否已赋值
                     * @return DrillRegion 是否已赋值
                     * 
                     */
                    bool DrillRegionHasBeenSet() const;

                    /**
                     * 获取演练可用区
                     * @return DrillZone 演练可用区
                     * 
                     */
                    std::string GetDrillZone() const;

                    /**
                     * 设置演练可用区
                     * @param _drillZone 演练可用区
                     * 
                     */
                    void SetDrillZone(const std::string& _drillZone);

                    /**
                     * 判断参数 DrillZone 是否已赋值
                     * @return DrillZone 是否已赋值
                     * 
                     */
                    bool DrillZoneHasBeenSet() const;

                    /**
                     * 获取数据方向。枚举值：POSITIVE（正向）/ REVERSE（反向）。
                     * @return DataDirection 数据方向。枚举值：POSITIVE（正向）/ REVERSE（反向）。
                     * 
                     */
                    std::string GetDataDirection() const;

                    /**
                     * 设置数据方向。枚举值：POSITIVE（正向）/ REVERSE（反向）。
                     * @param _dataDirection 数据方向。枚举值：POSITIVE（正向）/ REVERSE（反向）。
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
                     * 获取绑定的演练资源数量。
                     * @return BindDrilledResourceCount 绑定的演练资源数量。
                     * 
                     */
                    int64_t GetBindDrilledResourceCount() const;

                    /**
                     * 设置绑定的演练资源数量。
                     * @param _bindDrilledResourceCount 绑定的演练资源数量。
                     * 
                     */
                    void SetBindDrilledResourceCount(const int64_t& _bindDrilledResourceCount);

                    /**
                     * 判断参数 BindDrilledResourceCount 是否已赋值
                     * @return BindDrilledResourceCount 是否已赋值
                     * 
                     */
                    bool BindDrilledResourceCountHasBeenSet() const;

                    /**
                     * 获取演练资源状态分布（key 为状态名如 FAILED / SUCCESS，value 为该状态数量）。
                     * @return DrilledResourceStatusSet 演练资源状态分布（key 为状态名如 FAILED / SUCCESS，value 为该状态数量）。
                     * 
                     */
                    std::vector<DrilledResourceStatus> GetDrilledResourceStatusSet() const;

                    /**
                     * 设置演练资源状态分布（key 为状态名如 FAILED / SUCCESS，value 为该状态数量）。
                     * @param _drilledResourceStatusSet 演练资源状态分布（key 为状态名如 FAILED / SUCCESS，value 为该状态数量）。
                     * 
                     */
                    void SetDrilledResourceStatusSet(const std::vector<DrilledResourceStatus>& _drilledResourceStatusSet);

                    /**
                     * 判断参数 DrilledResourceStatusSet 是否已赋值
                     * @return DrilledResourceStatusSet 是否已赋值
                     * 
                     */
                    bool DrilledResourceStatusSetHasBeenSet() const;

                private:

                    /**
                     * 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 子账户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 容灾站点对ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

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
                     * 演练组名称
                     */
                    std::string m_drillGroupName;
                    bool m_drillGroupNameHasBeenSet;

                    /**
                     * 演练组类型。枚举值：DISK / INSTANCE / CFS。
                     */
                    std::string m_drillGroupType;
                    bool m_drillGroupTypeHasBeenSet;

                    /**
                     * 恢复时间点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recoveryTime;
                    bool m_recoveryTimeHasBeenSet;

                    /**
                     * 演练VPC
                     */
                    std::string m_drillVpc;
                    bool m_drillVpcHasBeenSet;

                    /**
                     * 演练安全组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_drillSecurityGroup;
                    bool m_drillSecurityGroupHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 生命周期状态。枚举值：NORMAL / DELETED。
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 容灾类型。枚举值：CROSS_ZONE / CROSS_REGION 等。
                     */
                    std::string m_disasterRecoveryType;
                    bool m_disasterRecoveryTypeHasBeenSet;

                    /**
                     * 复制技术。枚举值：SYN（同步）/ ASYN（异步）。
                     */
                    std::string m_copyType;
                    bool m_copyTypeHasBeenSet;

                    /**
                     * 对端云名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerCloudName;
                    bool m_peerCloudNameHasBeenSet;

                    /**
                     * 本地云名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localCloudName;
                    bool m_localCloudNameHasBeenSet;

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
                     * 演练地域
                     */
                    std::string m_drillRegion;
                    bool m_drillRegionHasBeenSet;

                    /**
                     * 演练可用区
                     */
                    std::string m_drillZone;
                    bool m_drillZoneHasBeenSet;

                    /**
                     * 数据方向。枚举值：POSITIVE（正向）/ REVERSE（反向）。
                     */
                    std::string m_dataDirection;
                    bool m_dataDirectionHasBeenSet;

                    /**
                     * 绑定的演练资源数量。
                     */
                    int64_t m_bindDrilledResourceCount;
                    bool m_bindDrilledResourceCountHasBeenSet;

                    /**
                     * 演练资源状态分布（key 为状态名如 FAILED / SUCCESS，value 为该状态数量）。
                     */
                    std::vector<DrilledResourceStatus> m_drilledResourceStatusSet;
                    bool m_drilledResourceStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DISASTERRECOVERYDRILLGROUP_H_
