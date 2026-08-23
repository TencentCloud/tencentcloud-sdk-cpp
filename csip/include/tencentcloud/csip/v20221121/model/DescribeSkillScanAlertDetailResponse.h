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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillCapabilityTag.h>
#include <tencentcloud/csip/v20221121/model/SkillRuleCatalogItem.h>
#include <tencentcloud/csip/v20221121/model/SkillScanEngineResult.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanAlertDetail返回参数结构体
                */
                class DescribeSkillScanAlertDetailResponse : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertDetailResponse();
                    ~DescribeSkillScanAlertDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警记录 ID</p>
                     * @return ID <p>告警记录 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>租户 AppID</p>
                     * @return AppID <p>租户 AppID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>主机 UUID</p>
                     * @return UUID <p>主机 UUID</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取<p>主机 IP 地址</p>
                     * @return HostIP <p>主机 IP 地址</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * @return InstanceID <p>实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

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
                     * 获取<p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * @return BelongAssetType <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Skill 名称</p>
                     * @return SkillName <p>Skill 名称</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取<p>Skill 文件路径</p>
                     * @return SkillPath <p>Skill 文件路径</p>
                     * 
                     */
                    std::string GetSkillPath() const;

                    /**
                     * 判断参数 SkillPath 是否已赋值
                     * @return SkillPath 是否已赋值
                     * 
                     */
                    bool SkillPathHasBeenSet() const;

                    /**
                     * 获取<p>Skill 作用域</p>
                     * @return Scope <p>Skill 作用域</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Skill 版本号</p>
                     * @return Version <p>Skill 版本号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>文件内容 SHA256 哈希值<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * @return ContentHash <p>文件内容 SHA256 哈希值<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑</p>
                     * @return RiskLevel <p>风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>安全评分<br>取值范围：[0, 100]</p>
                     * @return SecurityScore <p>安全评分<br>取值范围：[0, 100]</p>
                     * 
                     */
                    int64_t GetSecurityScore() const;

                    /**
                     * 判断参数 SecurityScore 是否已赋值
                     * @return SecurityScore 是否已赋值
                     * 
                     */
                    bool SecurityScoreHasBeenSet() const;

                    /**
                     * 获取<p>主命中规则 ID</p>
                     * @return PrimaryRuleID <p>主命中规则 ID</p>
                     * 
                     */
                    std::string GetPrimaryRuleID() const;

                    /**
                     * 判断参数 PrimaryRuleID 是否已赋值
                     * @return PrimaryRuleID 是否已赋值
                     * 
                     */
                    bool PrimaryRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>检测引擎版本号</p>
                     * @return EngineVersion <p>检测引擎版本号</p>
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任</p>
                     * @return Status <p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     * @return Level <p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>首次检出时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return CreateTime <p>首次检出时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
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
                     * 获取<p>Skill 功能描述（引擎实时查询返回）</p>
                     * @return SkillDescription <p>Skill 功能描述（引擎实时查询返回）</p>
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 判断参数 SkillDescription 是否已赋值
                     * @return SkillDescription 是否已赋值
                     * 
                     */
                    bool SkillDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>综合风险摘要，概括本次检测发现的主要风险/攻击链（引擎实时查询返回）。传 Language=en-US 时返回英文文案</p>
                     * @return RiskDescription <p>综合风险摘要，概括本次检测发现的主要风险/攻击链（引擎实时查询返回）。传 Language=en-US 时返回英文文案</p>
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>处置建议（引擎实时查询返回）</p>
                     * @return Mitigation <p>处置建议（引擎实时查询返回）</p>
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 判断参数 Mitigation 是否已赋值
                     * @return Mitigation 是否已赋值
                     * 
                     */
                    bool MitigationHasBeenSet() const;

                    /**
                     * 获取<p>Skill 能力标签列表（引擎实时查询返回）</p>
                     * @return CapabilityTags <p>Skill 能力标签列表（引擎实时查询返回）</p>
                     * 
                     */
                    std::vector<SkillCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 判断参数 CapabilityTags 是否已赋值
                     * @return CapabilityTags 是否已赋值
                     * 
                     */
                    bool CapabilityTagsHasBeenSet() const;

                    /**
                     * 获取<p>融合规则目录列表（引擎实时查询返回）</p>
                     * @return RuleCatalog <p>融合规则目录列表（引擎实时查询返回）</p>
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 判断参数 RuleCatalog 是否已赋值
                     * @return RuleCatalog 是否已赋值
                     * 
                     */
                    bool RuleCatalogHasBeenSet() const;

                    /**
                     * 获取<p>扫描结果详情列表（引擎实时查询返回）</p>
                     * @return ScanItems <p>扫描结果详情列表（引擎实时查询返回）</p>
                     * 
                     */
                    std::vector<SkillScanEngineResult> GetScanItems() const;

                    /**
                     * 判断参数 ScanItems 是否已赋值
                     * @return ScanItems 是否已赋值
                     * 
                     */
                    bool ScanItemsHasBeenSet() const;

                    /**
                     * 获取<p>检测报告链接（引擎实时查询返回）</p>
                     * @return ReportURL <p>检测报告链接（引擎实时查询返回）</p>
                     * 
                     */
                    std::string GetReportURL() const;

                    /**
                     * 判断参数 ReportURL 是否已赋值
                     * @return ReportURL 是否已赋值
                     * 
                     */
                    bool ReportURLHasBeenSet() const;

                    /**
                     * 获取<p>扫描完成时间（引擎实时查询返回）<br>参数格式：ISO8601 格式</p>
                     * @return ScannedAt <p>扫描完成时间（引擎实时查询返回）<br>参数格式：ISO8601 格式</p>
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 判断参数 ScannedAt 是否已赋值
                     * @return ScannedAt 是否已赋值
                     * 
                     */
                    bool ScannedAtHasBeenSet() const;

                private:

                    /**
                     * <p>告警记录 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>租户 AppID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>主机 UUID</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>主机 IP 地址</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>Skill 名称</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>Skill 文件路径</p>
                     */
                    std::string m_skillPath;
                    bool m_skillPathHasBeenSet;

                    /**
                     * <p>Skill 作用域</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Skill 版本号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>文件内容 SHA256 哈希值<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>安全评分<br>取值范围：[0, 100]</p>
                     */
                    int64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * <p>主命中规则 ID</p>
                     */
                    std::string m_primaryRuleID;
                    bool m_primaryRuleIDHasBeenSet;

                    /**
                     * <p>检测引擎版本号</p>
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>首次检出时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Skill 功能描述（引擎实时查询返回）</p>
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * <p>综合风险摘要，概括本次检测发现的主要风险/攻击链（引擎实时查询返回）。传 Language=en-US 时返回英文文案</p>
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * <p>处置建议（引擎实时查询返回）</p>
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * <p>Skill 能力标签列表（引擎实时查询返回）</p>
                     */
                    std::vector<SkillCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * <p>融合规则目录列表（引擎实时查询返回）</p>
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * <p>扫描结果详情列表（引擎实时查询返回）</p>
                     */
                    std::vector<SkillScanEngineResult> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * <p>检测报告链接（引擎实时查询返回）</p>
                     */
                    std::string m_reportURL;
                    bool m_reportURLHasBeenSet;

                    /**
                     * <p>扫描完成时间（引擎实时查询返回）<br>参数格式：ISO8601 格式</p>
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILRESPONSE_H_
