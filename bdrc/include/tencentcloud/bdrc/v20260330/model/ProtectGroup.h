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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTGROUP_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ProtectedResourceStatus.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 容灾保护组信息
                */
                class ProtectGroup : public AbstractModel
                {
                public:
                    ProtectGroup();
                    ~ProtectGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
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
                     * 获取保护组类型（产品类型，如 DISK/CFS/INSTANCE）
                     * @return ProtectGroupType 保护组类型（产品类型，如 DISK/CFS/INSTANCE）
                     * 
                     */
                    std::string GetProtectGroupType() const;

                    /**
                     * 设置保护组类型（产品类型，如 DISK/CFS/INSTANCE）
                     * @param _protectGroupType 保护组类型（产品类型，如 DISK/CFS/INSTANCE）
                     * 
                     */
                    void SetProtectGroupType(const std::string& _protectGroupType);

                    /**
                     * 判断参数 ProtectGroupType 是否已赋值
                     * @return ProtectGroupType 是否已赋值
                     * 
                     */
                    bool ProtectGroupTypeHasBeenSet() const;

                    /**
                     * 获取所属容灾策略ID
                     * @return SitePairId 所属容灾策略ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置所属容灾策略ID
                     * @param _sitePairId 所属容灾策略ID
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
                     * 获取所属容灾策略名称
                     * @return SitePairName 所属容灾策略名称
                     * 
                     */
                    std::string GetSitePairName() const;

                    /**
                     * 设置所属容灾策略名称
                     * @param _sitePairName 所属容灾策略名称
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
                     * 获取RPO时间（单位秒）
                     * @return RecoveryPointObjective RPO时间（单位秒）
                     * 
                     */
                    int64_t GetRecoveryPointObjective() const;

                    /**
                     * 设置RPO时间（单位秒）
                     * @param _recoveryPointObjective RPO时间（单位秒）
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
                     * 获取生产地域（当 DataDirection=REVERSE 时会与 TargetRegion 自动轮转，保持用户视角一致）
                     * @return SourceRegion 生产地域（当 DataDirection=REVERSE 时会与 TargetRegion 自动轮转，保持用户视角一致）
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置生产地域（当 DataDirection=REVERSE 时会与 TargetRegion 自动轮转，保持用户视角一致）
                     * @param _sourceRegion 生产地域（当 DataDirection=REVERSE 时会与 TargetRegion 自动轮转，保持用户视角一致）
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
                     * 获取生产可用区（REVERSE 时与 TargetZone 自动轮转）
                     * @return SourceZone 生产可用区（REVERSE 时与 TargetZone 自动轮转）
                     * 
                     */
                    std::string GetSourceZone() const;

                    /**
                     * 设置生产可用区（REVERSE 时与 TargetZone 自动轮转）
                     * @param _sourceZone 生产可用区（REVERSE 时与 TargetZone 自动轮转）
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
                     * 获取生产端VPC（REVERSE 时与 TargetVpc 自动轮转）
                     * @return SourceVpc 生产端VPC（REVERSE 时与 TargetVpc 自动轮转）
                     * 
                     */
                    std::string GetSourceVpc() const;

                    /**
                     * 设置生产端VPC（REVERSE 时与 TargetVpc 自动轮转）
                     * @param _sourceVpc 生产端VPC（REVERSE 时与 TargetVpc 自动轮转）
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
                     * 获取容灾地域（REVERSE 时与 SourceRegion 自动轮转）
                     * @return TargetRegion 容灾地域（REVERSE 时与 SourceRegion 自动轮转）
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置容灾地域（REVERSE 时与 SourceRegion 自动轮转）
                     * @param _targetRegion 容灾地域（REVERSE 时与 SourceRegion 自动轮转）
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
                     * 获取复制技术（SYN 同步 / ASY 异步）
                     * @return CopyType 复制技术（SYN 同步 / ASY 异步）
                     * 
                     */
                    std::string GetCopyType() const;

                    /**
                     * 设置复制技术（SYN 同步 / ASY 异步）
                     * @param _copyType 复制技术（SYN 同步 / ASY 异步）
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
                     * 获取容灾类型（CROSS_ZONE 跨可用区 / CROSS_REGION 跨地域 / CROSS_CLOUD 跨云）
                     * @return DisasterRecoveryType 容灾类型（CROSS_ZONE 跨可用区 / CROSS_REGION 跨地域 / CROSS_CLOUD 跨云）
                     * 
                     */
                    std::string GetDisasterRecoveryType() const;

                    /**
                     * 设置容灾类型（CROSS_ZONE 跨可用区 / CROSS_REGION 跨地域 / CROSS_CLOUD 跨云）
                     * @param _disasterRecoveryType 容灾类型（CROSS_ZONE 跨可用区 / CROSS_REGION 跨地域 / CROSS_CLOUD 跨云）
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
                     * 获取数据复制方向（POSITIVE 正向 / REVERSE 反向）
                     * @return DataDirection 数据复制方向（POSITIVE 正向 / REVERSE 反向）
                     * 
                     */
                    std::string GetDataDirection() const;

                    /**
                     * 设置数据复制方向（POSITIVE 正向 / REVERSE 反向）
                     * @param _dataDirection 数据复制方向（POSITIVE 正向 / REVERSE 反向）
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
                     * 获取跨云场景对端云名称（仅 DisasterRecoveryType=CROSS_CLOUD 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerCloudName 跨云场景对端云名称（仅 DisasterRecoveryType=CROSS_CLOUD 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerCloudName() const;

                    /**
                     * 设置跨云场景对端云名称（仅 DisasterRecoveryType=CROSS_CLOUD 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerCloudName 跨云场景对端云名称（仅 DisasterRecoveryType=CROSS_CLOUD 时返回）
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
                     * 获取创建来源（LOCAL 本端创建 / PEER 对端创建）
                     * @return CreateFrom 创建来源（LOCAL 本端创建 / PEER 对端创建）
                     * 
                     */
                    std::string GetCreateFrom() const;

                    /**
                     * 设置创建来源（LOCAL 本端创建 / PEER 对端创建）
                     * @param _createFrom 创建来源（LOCAL 本端创建 / PEER 对端创建）
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
                     * 获取生命周期状态
                     * @return LifeState 生命周期状态
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置生命周期状态
                     * @param _lifeState 生命周期状态
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
                     * 获取创建保护组的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin 创建保护组的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置创建保护组的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin 创建保护组的账户主账号 Uin
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
                     * 获取创建保护组的子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 创建保护组的子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置创建保护组的子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 创建保护组的子账号 Uin
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
                     * 获取绑定的已保护资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindProtectedResourceCount 绑定的已保护资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBindProtectedResourceCount() const;

                    /**
                     * 设置绑定的已保护资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindProtectedResourceCount 绑定的已保护资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindProtectedResourceCount(const int64_t& _bindProtectedResourceCount);

                    /**
                     * 判断参数 BindProtectedResourceCount 是否已赋值
                     * @return BindProtectedResourceCount 是否已赋值
                     * 
                     */
                    bool BindProtectedResourceCountHasBeenSet() const;

                    /**
                     * 获取RPO 异常（超过 15 分钟未同步）的复制对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorRecoveryPointObjectiveCount RPO 异常（超过 15 分钟未同步）的复制对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorRecoveryPointObjectiveCount() const;

                    /**
                     * 设置RPO 异常（超过 15 分钟未同步）的复制对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorRecoveryPointObjectiveCount RPO 异常（超过 15 分钟未同步）的复制对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorRecoveryPointObjectiveCount(const int64_t& _errorRecoveryPointObjectiveCount);

                    /**
                     * 判断参数 ErrorRecoveryPointObjectiveCount 是否已赋值
                     * @return ErrorRecoveryPointObjectiveCount 是否已赋值
                     * 
                     */
                    bool ErrorRecoveryPointObjectiveCountHasBeenSet() const;

                    /**
                     * 获取已保护资源状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectedResourceStatusSet 已保护资源状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProtectedResourceStatus> GetProtectedResourceStatusSet() const;

                    /**
                     * 设置已保护资源状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectedResourceStatusSet 已保护资源状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectedResourceStatusSet(const std::vector<ProtectedResourceStatus>& _protectedResourceStatusSet);

                    /**
                     * 判断参数 ProtectedResourceStatusSet 是否已赋值
                     * @return ProtectedResourceStatusSet 是否已赋值
                     * 
                     */
                    bool ProtectedResourceStatusSetHasBeenSet() const;

                private:

                    /**
                     * 用户AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * 保护组类型（产品类型，如 DISK/CFS/INSTANCE）
                     */
                    std::string m_protectGroupType;
                    bool m_protectGroupTypeHasBeenSet;

                    /**
                     * 所属容灾策略ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 所属容灾策略名称
                     */
                    std::string m_sitePairName;
                    bool m_sitePairNameHasBeenSet;

                    /**
                     * RPO时间（单位秒）
                     */
                    int64_t m_recoveryPointObjective;
                    bool m_recoveryPointObjectiveHasBeenSet;

                    /**
                     * 生产地域（当 DataDirection=REVERSE 时会与 TargetRegion 自动轮转，保持用户视角一致）
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 生产可用区（REVERSE 时与 TargetZone 自动轮转）
                     */
                    std::string m_sourceZone;
                    bool m_sourceZoneHasBeenSet;

                    /**
                     * 生产端VPC（REVERSE 时与 TargetVpc 自动轮转）
                     */
                    std::string m_sourceVpc;
                    bool m_sourceVpcHasBeenSet;

                    /**
                     * 容灾地域（REVERSE 时与 SourceRegion 自动轮转）
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
                     * 复制技术（SYN 同步 / ASY 异步）
                     */
                    std::string m_copyType;
                    bool m_copyTypeHasBeenSet;

                    /**
                     * 容灾类型（CROSS_ZONE 跨可用区 / CROSS_REGION 跨地域 / CROSS_CLOUD 跨云）
                     */
                    std::string m_disasterRecoveryType;
                    bool m_disasterRecoveryTypeHasBeenSet;

                    /**
                     * 数据复制方向（POSITIVE 正向 / REVERSE 反向）
                     */
                    std::string m_dataDirection;
                    bool m_dataDirectionHasBeenSet;

                    /**
                     * 跨云场景对端云名称（仅 DisasterRecoveryType=CROSS_CLOUD 时返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerCloudName;
                    bool m_peerCloudNameHasBeenSet;

                    /**
                     * 创建来源（LOCAL 本端创建 / PEER 对端创建）
                     */
                    std::string m_createFrom;
                    bool m_createFromHasBeenSet;

                    /**
                     * 生命周期状态
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 创建保护组的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 创建保护组的子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

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
                     * 绑定的已保护资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bindProtectedResourceCount;
                    bool m_bindProtectedResourceCountHasBeenSet;

                    /**
                     * RPO 异常（超过 15 分钟未同步）的复制对数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorRecoveryPointObjectiveCount;
                    bool m_errorRecoveryPointObjectiveCountHasBeenSet;

                    /**
                     * 已保护资源状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtectedResourceStatus> m_protectedResourceStatusSet;
                    bool m_protectedResourceStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTGROUP_H_
