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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_VULITEM_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_VULITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 漏洞管理漏洞数据
                */
                class VulItem : public AbstractModel
                {
                public:
                    VulItem();
                    ~VulItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标识
                     * @return Id 标识
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置标识
                     * @param _id 标识
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞类型
                     * @return Type 漏洞类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置漏洞类型
                     * @param _type 漏洞类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取处理状态
                     * @return Status 处理状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置处理状态
                     * @param _status 处理状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取发现时间
                     * @return Time 发现时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置发现时间
                     * @param _time 发现时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取影响资产数
                     * @return ImpactAssetNum 影响资产数
                     * 
                     */
                    int64_t GetImpactAssetNum() const;

                    /**
                     * 设置影响资产数
                     * @param _impactAssetNum 影响资产数
                     * 
                     */
                    void SetImpactAssetNum(const int64_t& _impactAssetNum);

                    /**
                     * 判断参数 ImpactAssetNum 是否已赋值
                     * @return ImpactAssetNum 是否已赋值
                     * 
                     */
                    bool ImpactAssetNumHasBeenSet() const;

                    /**
                     * 获取影响资产id
                     * @return ImpactAsset 影响资产id
                     * 
                     */
                    std::string GetImpactAsset() const;

                    /**
                     * 设置影响资产id
                     * @param _impactAsset 影响资产id
                     * 
                     */
                    void SetImpactAsset(const std::string& _impactAsset);

                    /**
                     * 判断参数 ImpactAsset 是否已赋值
                     * @return ImpactAsset 是否已赋值
                     * 
                     */
                    bool ImpactAssetHasBeenSet() const;

                    /**
                     * 获取影响资产名称
                     * @return ImpactAssetName 影响资产名称
                     * 
                     */
                    std::string GetImpactAssetName() const;

                    /**
                     * 设置影响资产名称
                     * @param _impactAssetName 影响资产名称
                     * 
                     */
                    void SetImpactAssetName(const std::string& _impactAssetName);

                    /**
                     * 判断参数 ImpactAssetName 是否已赋值
                     * @return ImpactAssetName 是否已赋值
                     * 
                     */
                    bool ImpactAssetNameHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return VulDetail 漏洞描述
                     * 
                     */
                    std::string GetVulDetail() const;

                    /**
                     * 设置漏洞描述
                     * @param _vulDetail 漏洞描述
                     * 
                     */
                    void SetVulDetail(const std::string& _vulDetail);

                    /**
                     * 判断参数 VulDetail 是否已赋值
                     * @return VulDetail 是否已赋值
                     * 
                     */
                    bool VulDetailHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return VulRefLink 参考链接
                     * 
                     */
                    std::string GetVulRefLink() const;

                    /**
                     * 设置参考链接
                     * @param _vulRefLink 参考链接
                     * 
                     */
                    void SetVulRefLink(const std::string& _vulRefLink);

                    /**
                     * 判断参数 VulRefLink 是否已赋值
                     * @return VulRefLink 是否已赋值
                     * 
                     */
                    bool VulRefLinkHasBeenSet() const;

                    /**
                     * 获取Md5值
                     * @return OldIdMd5 Md5值
                     * 
                     */
                    std::string GetOldIdMd5() const;

                    /**
                     * 设置Md5值
                     * @param _oldIdMd5 Md5值
                     * 
                     */
                    void SetOldIdMd5(const std::string& _oldIdMd5);

                    /**
                     * 判断参数 OldIdMd5 是否已赋值
                     * @return OldIdMd5 是否已赋值
                     * 
                     */
                    bool OldIdMd5HasBeenSet() const;

                    /**
                     * 获取漏洞唯一标识
                     * @return UniqId 漏洞唯一标识
                     * 
                     */
                    std::string GetUniqId() const;

                    /**
                     * 设置漏洞唯一标识
                     * @param _uniqId 漏洞唯一标识
                     * 
                     */
                    void SetUniqId(const std::string& _uniqId);

                    /**
                     * 判断参数 UniqId 是否已赋值
                     * @return UniqId 是否已赋值
                     * 
                     */
                    bool UniqIdHasBeenSet() const;

                    /**
                     * 获取忽略时间
                     * @return OperateTime 忽略时间
                     * 
                     */
                    std::string GetOperateTime() const;

                    /**
                     * 设置忽略时间
                     * @param _operateTime 忽略时间
                     * 
                     */
                    void SetOperateTime(const std::string& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取受影响资产是否下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAssetDeleted 受影响资产是否下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsAssetDeleted() const;

                    /**
                     * 设置受影响资产是否下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAssetDeleted 受影响资产是否下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAssetDeleted(const std::string& _isAssetDeleted);

                    /**
                     * 判断参数 IsAssetDeleted 是否已赋值
                     * @return IsAssetDeleted 是否已赋值
                     * 
                     */
                    bool IsAssetDeletedHasBeenSet() const;

                    /**
                     * 获取漏洞首次发现时间
                     * @return DiscoverTime 漏洞首次发现时间
                     * 
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置漏洞首次发现时间
                     * @param _discoverTime 漏洞首次发现时间
                     * 
                     */
                    void SetDiscoverTime(const std::string& _discoverTime);

                    /**
                     * 判断参数 DiscoverTime 是否已赋值
                     * @return DiscoverTime 是否已赋值
                     * 
                     */
                    bool DiscoverTimeHasBeenSet() const;

                    /**
                     * 获取主机源信息标识符
                     * @return OriginId 主机源信息标识符
                     * 
                     */
                    uint64_t GetOriginId() const;

                    /**
                     * 设置主机源信息标识符
                     * @param _originId 主机源信息标识符
                     * 
                     */
                    void SetOriginId(const uint64_t& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取资产区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 资产区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资产区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 资产区域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vpcid 资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcid() const;

                    /**
                     * 设置资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcid 资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcid(const std::string& _vpcid);

                    /**
                     * 判断参数 Vpcid 是否已赋值
                     * @return Vpcid 是否已赋值
                     * 
                     */
                    bool VpcidHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取资产子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetSubType 资产子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetSubType() const;

                    /**
                     * 设置资产子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetSubType 资产子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetSubType(const std::string& _assetSubType);

                    /**
                     * 判断参数 AssetSubType 是否已赋值
                     * @return AssetSubType 是否已赋值
                     * 
                     */
                    bool AssetSubTypeHasBeenSet() const;

                    /**
                     * 获取资产IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIpAll 资产IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetIpAll() const;

                    /**
                     * 设置资产IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIpAll 资产IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIpAll(const std::vector<std::string>& _assetIpAll);

                    /**
                     * 判断参数 AssetIpAll 是否已赋值
                     * @return AssetIpAll 是否已赋值
                     * 
                     */
                    bool AssetIpAllHasBeenSet() const;

                    /**
                     * 获取cvm类型的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses cvm类型的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置cvm类型的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAddresses cvm类型的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取cvm类型的内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIpAddresses cvm类型的内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置cvm类型的内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIpAddresses cvm类型的内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulSource 漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulSource() const;

                    /**
                     * 设置漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulSource 漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulSource(const std::string& _vulSource);

                    /**
                     * 判断参数 VulSource 是否已赋值
                     * @return VulSource 是否已赋值
                     * 
                     */
                    bool VulSourceHasBeenSet() const;

                    /**
                     * 获取影响URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedUrl 影响URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAffectedUrl() const;

                    /**
                     * 设置影响URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedUrl 影响URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedUrl(const std::string& _affectedUrl);

                    /**
                     * 判断参数 AffectedUrl 是否已赋值
                     * @return AffectedUrl 是否已赋值
                     * 
                     */
                    bool AffectedUrlHasBeenSet() const;

                    /**
                     * 获取资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAssetCategory 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSsaAssetCategory() const;

                    /**
                     * 设置资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaAssetCategory 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaAssetCategory(const int64_t& _ssaAssetCategory);

                    /**
                     * 判断参数 SsaAssetCategory 是否已赋值
                     * @return SsaAssetCategory 是否已赋值
                     * 
                     */
                    bool SsaAssetCategoryHasBeenSet() const;

                    /**
                     * 获取影响url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulUrl 影响url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulUrl() const;

                    /**
                     * 设置影响url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulUrl 影响url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulUrl(const std::string& _vulUrl);

                    /**
                     * 判断参数 VulUrl 是否已赋值
                     * @return VulUrl 是否已赋值
                     * 
                     */
                    bool VulUrlHasBeenSet() const;

                    /**
                     * 获取是否扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpen 是否扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置是否扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOpen 是否扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取御知主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YzHostId 御知主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetYzHostId() const;

                    /**
                     * 设置御知主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yzHostId 御知主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYzHostId(const uint64_t& _yzHostId);

                    /**
                     * 判断参数 YzHostId 是否已赋值
                     * @return YzHostId 是否已赋值
                     * 
                     */
                    bool YzHostIdHasBeenSet() const;

                    /**
                     * 获取漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulRepairPlan 漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulRepairPlan() const;

                    /**
                     * 设置漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulRepairPlan 漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulRepairPlan(const std::string& _vulRepairPlan);

                    /**
                     * 判断参数 VulRepairPlan 是否已赋值
                     * @return VulRepairPlan 是否已赋值
                     * 
                     */
                    bool VulRepairPlanHasBeenSet() const;

                    /**
                     * 获取漏洞文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulPath 漏洞文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulPath() const;

                    /**
                     * 设置漏洞文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulPath 漏洞文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulPath(const std::string& _vulPath);

                    /**
                     * 判断参数 VulPath 是否已赋值
                     * @return VulPath 是否已赋值
                     * 
                     */
                    bool VulPathHasBeenSet() const;

                private:

                    /**
                     * 标识
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 风险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 处理状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发现时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 影响资产数
                     */
                    int64_t m_impactAssetNum;
                    bool m_impactAssetNumHasBeenSet;

                    /**
                     * 影响资产id
                     */
                    std::string m_impactAsset;
                    bool m_impactAssetHasBeenSet;

                    /**
                     * 影响资产名称
                     */
                    std::string m_impactAssetName;
                    bool m_impactAssetNameHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_vulDetail;
                    bool m_vulDetailHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_vulRefLink;
                    bool m_vulRefLinkHasBeenSet;

                    /**
                     * Md5值
                     */
                    std::string m_oldIdMd5;
                    bool m_oldIdMd5HasBeenSet;

                    /**
                     * 漏洞唯一标识
                     */
                    std::string m_uniqId;
                    bool m_uniqIdHasBeenSet;

                    /**
                     * 忽略时间
                     */
                    std::string m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * 受影响资产是否下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isAssetDeleted;
                    bool m_isAssetDeletedHasBeenSet;

                    /**
                     * 漏洞首次发现时间
                     */
                    std::string m_discoverTime;
                    bool m_discoverTimeHasBeenSet;

                    /**
                     * 主机源信息标识符
                     */
                    uint64_t m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 资产区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资产所属网络
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcid;
                    bool m_vpcidHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 资产子类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetSubType;
                    bool m_assetSubTypeHasBeenSet;

                    /**
                     * 资产IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetIpAll;
                    bool m_assetIpAllHasBeenSet;

                    /**
                     * cvm类型的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * cvm类型的内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 漏洞来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulSource;
                    bool m_vulSourceHasBeenSet;

                    /**
                     * 影响URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_affectedUrl;
                    bool m_affectedUrlHasBeenSet;

                    /**
                     * 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ssaAssetCategory;
                    bool m_ssaAssetCategoryHasBeenSet;

                    /**
                     * 影响url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulUrl;
                    bool m_vulUrlHasBeenSet;

                    /**
                     * 是否扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * 御知主机id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_yzHostId;
                    bool m_yzHostIdHasBeenSet;

                    /**
                     * 漏洞描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulRepairPlan;
                    bool m_vulRepairPlanHasBeenSet;

                    /**
                     * 漏洞文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulPath;
                    bool m_vulPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_VULITEM_H_
