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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DOMAININFO_H_

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
                * 域名列表
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResolveAddr 解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResolveAddr() const;

                    /**
                     * 设置解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resolveAddr 解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResolveAddr(const std::vector<std::string>& _resolveAddr);

                    /**
                     * 判断参数 ResolveAddr 是否已赋值
                     * @return ResolveAddr 是否已赋值
                     * 
                     */
                    bool ResolveAddrHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::vector<std::string>& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskVulCount 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRiskVulCount() const;

                    /**
                     * 设置漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskVulCount 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskVulCount(const uint64_t& _riskVulCount);

                    /**
                     * 判断参数 RiskVulCount 是否已赋值
                     * @return RiskVulCount 是否已赋值
                     * 
                     */
                    bool RiskVulCountHasBeenSet() const;

                    /**
                     * 获取敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SensitiveCount 敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSensitiveCount() const;

                    /**
                     * 设置敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sensitiveCount 敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSensitiveCount(const uint64_t& _sensitiveCount);

                    /**
                     * 判断参数 SensitiveCount 是否已赋值
                     * @return SensitiveCount 是否已赋值
                     * 
                     */
                    bool SensitiveCountHasBeenSet() const;

                    /**
                     * 获取挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HorseLinkCount 挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHorseLinkCount() const;

                    /**
                     * 设置挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _horseLinkCount 挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHorseLinkCount(const uint64_t& _horseLinkCount);

                    /**
                     * 判断参数 HorseLinkCount 是否已赋值
                     * @return HorseLinkCount 是否已赋值
                     * 
                     */
                    bool HorseLinkCountHasBeenSet() const;

                    /**
                     * 获取网页篡改
                     * @return WebModifyCount 网页篡改
                     * 
                     */
                    uint64_t GetWebModifyCount() const;

                    /**
                     * 设置网页篡改
                     * @param _webModifyCount 网页篡改
                     * 
                     */
                    void SetWebModifyCount(const uint64_t& _webModifyCount);

                    /**
                     * 判断参数 WebModifyCount 是否已赋值
                     * @return WebModifyCount 是否已赋值
                     * 
                     */
                    bool WebModifyCountHasBeenSet() const;

                    /**
                     * 获取上次扫描时间
                     * @return ScanTime 上次扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置上次扫描时间
                     * @param _scanTime 上次扫描时间
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取最近发现时间
                     * @return DiscoverTime 最近发现时间
                     * 
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置最近发现时间
                     * @param _discoverTime 最近发现时间
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
                     * 获取扫描次数
                     * @return ScanTaskCount 扫描次数
                     * 
                     */
                    uint64_t GetScanTaskCount() const;

                    /**
                     * 设置扫描次数
                     * @param _scanTaskCount 扫描次数
                     * 
                     */
                    void SetScanTaskCount(const uint64_t& _scanTaskCount);

                    /**
                     * 判断参数 ScanTaskCount 是否已赋值
                     * @return ScanTaskCount 是否已赋值
                     * 
                     */
                    bool ScanTaskCountHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return PortRisk 端口
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置端口
                     * @param _portRisk 端口
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取弱口令
                     * @return WeekPwdCount 弱口令
                     * 
                     */
                    uint64_t GetWeekPwdCount() const;

                    /**
                     * 设置弱口令
                     * @param _weekPwdCount 弱口令
                     * 
                     */
                    void SetWeekPwdCount(const uint64_t& _weekPwdCount);

                    /**
                     * 判断参数 WeekPwdCount 是否已赋值
                     * @return WeekPwdCount 是否已赋值
                     * 
                     */
                    bool WeekPwdCountHasBeenSet() const;

                    /**
                     * 获取资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetLocation 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetLocation() const;

                    /**
                     * 设置资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetLocation 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetLocation(const std::string& _assetLocation);

                    /**
                     * 判断参数 AssetLocation 是否已赋值
                     * @return AssetLocation 是否已赋值
                     * 
                     */
                    bool AssetLocationHasBeenSet() const;

                    /**
                     * 获取网络风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkRisk 网络风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNetworkRisk() const;

                    /**
                     * 设置网络风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkRisk 网络风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkRisk(const uint64_t& _networkRisk);

                    /**
                     * 判断参数 NetworkRisk 是否已赋值
                     * @return NetworkRisk 是否已赋值
                     * 
                     */
                    bool NetworkRiskHasBeenSet() const;

                    /**
                     * 获取网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAttack 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNetworkAttack() const;

                    /**
                     * 设置网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkAttack 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkAttack(const uint64_t& _networkAttack);

                    /**
                     * 判断参数 NetworkAttack 是否已赋值
                     * @return NetworkAttack 是否已赋值
                     * 
                     */
                    bool NetworkAttackHasBeenSet() const;

                    /**
                     * 获取bot访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotVisit bot访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBotVisit() const;

                    /**
                     * 设置bot访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _botVisit bot访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBotVisit(const uint64_t& _botVisit);

                    /**
                     * 判断参数 BotVisit 是否已赋值
                     * @return BotVisit 是否已赋值
                     * 
                     */
                    bool BotVisitHasBeenSet() const;

                    /**
                     * 获取网络访问

注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAccess 网络访问

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNetworkAccess() const;

                    /**
                     * 设置网络访问

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkAccess 网络访问

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkAccess(const uint64_t& _networkAccess);

                    /**
                     * 判断参数 NetworkAccess 是否已赋值
                     * @return NetworkAccess 是否已赋值
                     * 
                     */
                    bool NetworkAccessHasBeenSet() const;

                    /**
                     * 获取资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WafStatus waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWafStatus() const;

                    /**
                     * 设置waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wafStatus waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWafStatus(const uint64_t& _wafStatus);

                    /**
                     * 判断参数 WafStatus 是否已赋值
                     * @return WafStatus 是否已赋值
                     * 
                     */
                    bool WafStatusHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetId() const;

                    /**
                     * 设置资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetId(const std::vector<std::string>& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetName() const;

                    /**
                     * 设置资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::vector<std::string>& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType 类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取是否核心资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNotCore 是否核心资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsNotCore() const;

                    /**
                     * 设置是否核心资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNotCore 是否核心资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNotCore(const uint64_t& _isNotCore);

                    /**
                     * 判断参数 IsNotCore 是否已赋值
                     * @return IsNotCore 是否已赋值
                     * 
                     */
                    bool IsNotCoreHasBeenSet() const;

                    /**
                     * 获取是否云外资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCloud 是否云外资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置是否云外资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCloud 是否云外资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                private:

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resolveAddr;
                    bool m_resolveAddrHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskVulCount;
                    bool m_riskVulCountHasBeenSet;

                    /**
                     * 敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sensitiveCount;
                    bool m_sensitiveCountHasBeenSet;

                    /**
                     * 挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_horseLinkCount;
                    bool m_horseLinkCountHasBeenSet;

                    /**
                     * 网页篡改
                     */
                    uint64_t m_webModifyCount;
                    bool m_webModifyCountHasBeenSet;

                    /**
                     * 上次扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 最近发现时间
                     */
                    std::string m_discoverTime;
                    bool m_discoverTimeHasBeenSet;

                    /**
                     * 扫描次数
                     */
                    uint64_t m_scanTaskCount;
                    bool m_scanTaskCountHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * 弱口令
                     */
                    uint64_t m_weekPwdCount;
                    bool m_weekPwdCountHasBeenSet;

                    /**
                     * 资产归属
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetLocation;
                    bool m_assetLocationHasBeenSet;

                    /**
                     * 网络风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_networkRisk;
                    bool m_networkRiskHasBeenSet;

                    /**
                     * 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_networkAttack;
                    bool m_networkAttackHasBeenSet;

                    /**
                     * bot访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_botVisit;
                    bool m_botVisitHasBeenSet;

                    /**
                     * 网络访问

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_networkAccess;
                    bool m_networkAccessHasBeenSet;

                    /**
                     * 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_wafStatus;
                    bool m_wafStatusHasBeenSet;

                    /**
                     * 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 是否核心资产
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isNotCore;
                    bool m_isNotCoreHasBeenSet;

                    /**
                     * 是否云外资产
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DOMAININFO_H_
