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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_SITEPAIR_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_SITEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ProtectedResource.h>
#include <tencentcloud/bdrc/v20260330/model/ProtectedResourceStatus.h>
#include <tencentcloud/bdrc/v20260330/model/CrossCloudDetails.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 站点对信息
                */
                class SitePair : public AbstractModel
                {
                public:
                    SitePair();
                    ~SitePair() = default;
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
                     * 获取容灾策略ID
                     * @return SitePairId 容灾策略ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置容灾策略ID
                     * @param _sitePairId 容灾策略ID
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
                     * 获取容灾策略名称
                     * @return SitePairName 容灾策略名称
                     * 
                     */
                    std::string GetSitePairName() const;

                    /**
                     * 设置容灾策略名称
                     * @param _sitePairName 容灾策略名称
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
                     * 获取容灾策略类型（产品类型，如 DISK/CFS/INSTANCE 等）
                     * @return SitePairType 容灾策略类型（产品类型，如 DISK/CFS/INSTANCE 等）
                     * 
                     */
                    std::string GetSitePairType() const;

                    /**
                     * 设置容灾策略类型（产品类型，如 DISK/CFS/INSTANCE 等）
                     * @param _sitePairType 容灾策略类型（产品类型，如 DISK/CFS/INSTANCE 等）
                     * 
                     */
                    void SetSitePairType(const std::string& _sitePairType);

                    /**
                     * 判断参数 SitePairType 是否已赋值
                     * @return SitePairType 是否已赋值
                     * 
                     */
                    bool SitePairTypeHasBeenSet() const;

                    /**
                     * 获取容灾策略状态
                     * @return SitePairState 容灾策略状态
                     * 
                     */
                    std::string GetSitePairState() const;

                    /**
                     * 设置容灾策略状态
                     * @param _sitePairState 容灾策略状态
                     * 
                     */
                    void SetSitePairState(const std::string& _sitePairState);

                    /**
                     * 判断参数 SitePairState 是否已赋值
                     * @return SitePairState 是否已赋值
                     * 
                     */
                    bool SitePairStateHasBeenSet() const;

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
                     * 获取创建容灾策略的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUin 创建容灾策略的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置创建容灾策略的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUin 创建容灾策略的账户主账号 Uin
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
                     * 获取创建容灾策略的子账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 创建容灾策略的子账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置创建容灾策略的子账户 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 创建容灾策略的子账户 Uin
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
                     * 获取已绑定的保护组数量
                     * @return BindProtectGroupCount 已绑定的保护组数量
                     * 
                     */
                    int64_t GetBindProtectGroupCount() const;

                    /**
                     * 设置已绑定的保护组数量
                     * @param _bindProtectGroupCount 已绑定的保护组数量
                     * 
                     */
                    void SetBindProtectGroupCount(const int64_t& _bindProtectGroupCount);

                    /**
                     * 判断参数 BindProtectGroupCount 是否已赋值
                     * @return BindProtectGroupCount 是否已赋值
                     * 
                     */
                    bool BindProtectGroupCountHasBeenSet() const;

                    /**
                     * 获取RPO 异常的复制对ID列表（最近一次保护点距今超过15分钟的复制对）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorRecoveryPointObjectiveCopyPairSet RPO 异常的复制对ID列表（最近一次保护点距今超过15分钟的复制对）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetErrorRecoveryPointObjectiveCopyPairSet() const;

                    /**
                     * 设置RPO 异常的复制对ID列表（最近一次保护点距今超过15分钟的复制对）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorRecoveryPointObjectiveCopyPairSet RPO 异常的复制对ID列表（最近一次保护点距今超过15分钟的复制对）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorRecoveryPointObjectiveCopyPairSet(const std::vector<std::string>& _errorRecoveryPointObjectiveCopyPairSet);

                    /**
                     * 判断参数 ErrorRecoveryPointObjectiveCopyPairSet 是否已赋值
                     * @return ErrorRecoveryPointObjectiveCopyPairSet 是否已赋值
                     * 
                     */
                    bool ErrorRecoveryPointObjectiveCopyPairSetHasBeenSet() const;

                    /**
                     * 获取已保护的资源列表（按资源类型分组）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectedResourceSet 已保护的资源列表（按资源类型分组）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProtectedResource> GetProtectedResourceSet() const;

                    /**
                     * 设置已保护的资源列表（按资源类型分组）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectedResourceSet 已保护的资源列表（按资源类型分组）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectedResourceSet(const std::vector<ProtectedResource>& _protectedResourceSet);

                    /**
                     * 判断参数 ProtectedResourceSet 是否已赋值
                     * @return ProtectedResourceSet 是否已赋值
                     * 
                     */
                    bool ProtectedResourceSetHasBeenSet() const;

                    /**
                     * 获取已保护资源的状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectedResourceStatusSet 已保护资源的状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProtectedResourceStatus> GetProtectedResourceStatusSet() const;

                    /**
                     * 设置已保护资源的状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectedResourceStatusSet 已保护资源的状态统计，key 为复制对状态，value 为该状态下的资源数量
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

                    /**
                     * 获取跨云场景下的额外信息（仅 IsCrossCloud=true 时返回，非跨云为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossCloudDetails 跨云场景下的额外信息（仅 IsCrossCloud=true 时返回，非跨云为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CrossCloudDetails GetCrossCloudDetails() const;

                    /**
                     * 设置跨云场景下的额外信息（仅 IsCrossCloud=true 时返回，非跨云为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossCloudDetails 跨云场景下的额外信息（仅 IsCrossCloud=true 时返回，非跨云为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossCloudDetails(const CrossCloudDetails& _crossCloudDetails);

                    /**
                     * 判断参数 CrossCloudDetails 是否已赋值
                     * @return CrossCloudDetails 是否已赋值
                     * 
                     */
                    bool CrossCloudDetailsHasBeenSet() const;

                private:

                    /**
                     * 用户AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 容灾策略ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 容灾策略名称
                     */
                    std::string m_sitePairName;
                    bool m_sitePairNameHasBeenSet;

                    /**
                     * 容灾策略类型（产品类型，如 DISK/CFS/INSTANCE 等）
                     */
                    std::string m_sitePairType;
                    bool m_sitePairTypeHasBeenSet;

                    /**
                     * 容灾策略状态
                     */
                    std::string m_sitePairState;
                    bool m_sitePairStateHasBeenSet;

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
                     * 生产端VPC
                     */
                    std::string m_sourceVpc;
                    bool m_sourceVpcHasBeenSet;

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
                     * 创建来源（LOCAL 本端创建 / PEER 对端创建）
                     */
                    std::string m_createFrom;
                    bool m_createFromHasBeenSet;

                    /**
                     * 创建容灾策略的账户主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 创建容灾策略的子账户 Uin
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
                     * 已绑定的保护组数量
                     */
                    int64_t m_bindProtectGroupCount;
                    bool m_bindProtectGroupCountHasBeenSet;

                    /**
                     * RPO 异常的复制对ID列表（最近一次保护点距今超过15分钟的复制对）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_errorRecoveryPointObjectiveCopyPairSet;
                    bool m_errorRecoveryPointObjectiveCopyPairSetHasBeenSet;

                    /**
                     * 已保护的资源列表（按资源类型分组）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtectedResource> m_protectedResourceSet;
                    bool m_protectedResourceSetHasBeenSet;

                    /**
                     * 已保护资源的状态统计，key 为复制对状态，value 为该状态下的资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtectedResourceStatus> m_protectedResourceStatusSet;
                    bool m_protectedResourceStatusSetHasBeenSet;

                    /**
                     * 跨云场景下的额外信息（仅 IsCrossCloud=true 时返回，非跨云为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CrossCloudDetails m_crossCloudDetails;
                    bool m_crossCloudDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_SITEPAIR_H_
