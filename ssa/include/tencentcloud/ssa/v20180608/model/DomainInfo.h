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
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResolveAddr 解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetResolveAddr() const;

                    /**
                     * 设置解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResolveAddr 解析地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResolveAddr(const std::vector<std::string>& _resolveAddr);

                    /**
                     * 判断参数 ResolveAddr 是否已赋值
                     * @return ResolveAddr 是否已赋值
                     */
                    bool ResolveAddrHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAssetType(const std::vector<std::string>& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskVulCount 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRiskVulCount() const;

                    /**
                     * 设置漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskVulCount 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskVulCount(const uint64_t& _riskVulCount);

                    /**
                     * 判断参数 RiskVulCount 是否已赋值
                     * @return RiskVulCount 是否已赋值
                     */
                    bool RiskVulCountHasBeenSet() const;

                    /**
                     * 获取敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SensitiveCount 敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSensitiveCount() const;

                    /**
                     * 设置敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SensitiveCount 敏感内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSensitiveCount(const uint64_t& _sensitiveCount);

                    /**
                     * 判断参数 SensitiveCount 是否已赋值
                     * @return SensitiveCount 是否已赋值
                     */
                    bool SensitiveCountHasBeenSet() const;

                    /**
                     * 获取挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HorseLinkCount 挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHorseLinkCount() const;

                    /**
                     * 设置挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HorseLinkCount 挂马暗链
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHorseLinkCount(const uint64_t& _horseLinkCount);

                    /**
                     * 判断参数 HorseLinkCount 是否已赋值
                     * @return HorseLinkCount 是否已赋值
                     */
                    bool HorseLinkCountHasBeenSet() const;

                    /**
                     * 获取网页篡改
                     * @return WebModifyCount 网页篡改
                     */
                    uint64_t GetWebModifyCount() const;

                    /**
                     * 设置网页篡改
                     * @param WebModifyCount 网页篡改
                     */
                    void SetWebModifyCount(const uint64_t& _webModifyCount);

                    /**
                     * 判断参数 WebModifyCount 是否已赋值
                     * @return WebModifyCount 是否已赋值
                     */
                    bool WebModifyCountHasBeenSet() const;

                    /**
                     * 获取上次扫描时间
                     * @return ScanTime 上次扫描时间
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置上次扫描时间
                     * @param ScanTime 上次扫描时间
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取最近发现时间
                     * @return DiscoverTime 最近发现时间
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置最近发现时间
                     * @param DiscoverTime 最近发现时间
                     */
                    void SetDiscoverTime(const std::string& _discoverTime);

                    /**
                     * 判断参数 DiscoverTime 是否已赋值
                     * @return DiscoverTime 是否已赋值
                     */
                    bool DiscoverTimeHasBeenSet() const;

                    /**
                     * 获取扫描次数
                     * @return ScanTaskCount 扫描次数
                     */
                    uint64_t GetScanTaskCount() const;

                    /**
                     * 设置扫描次数
                     * @param ScanTaskCount 扫描次数
                     */
                    void SetScanTaskCount(const uint64_t& _scanTaskCount);

                    /**
                     * 判断参数 ScanTaskCount 是否已赋值
                     * @return ScanTaskCount 是否已赋值
                     */
                    bool ScanTaskCountHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return PortRisk 端口
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置端口
                     * @param PortRisk 端口
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取弱口令
                     * @return WeekPwdCount 弱口令
                     */
                    uint64_t GetWeekPwdCount() const;

                    /**
                     * 设置弱口令
                     * @param WeekPwdCount 弱口令
                     */
                    void SetWeekPwdCount(const uint64_t& _weekPwdCount);

                    /**
                     * 判断参数 WeekPwdCount 是否已赋值
                     * @return WeekPwdCount 是否已赋值
                     */
                    bool WeekPwdCountHasBeenSet() const;

                    /**
                     * 获取-
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetLocation -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAssetLocation() const;

                    /**
                     * 设置-
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AssetLocation -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAssetLocation(const std::string& _assetLocation);

                    /**
                     * 判断参数 AssetLocation 是否已赋值
                     * @return AssetLocation 是否已赋值
                     */
                    bool AssetLocationHasBeenSet() const;

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
                     * -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetLocation;
                    bool m_assetLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DOMAININFO_H_
