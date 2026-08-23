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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANALERTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANALERTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Skill 安全检测告警列表单条记录
                */
                class SkillScanAlertItem : public AbstractModel
                {
                public:
                    SkillScanAlertItem();
                    ~SkillScanAlertItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警记录 ID</p>
                     * @return ID <p>告警记录 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>告警记录 ID</p>
                     * @param _iD <p>告警记录 ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

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
                     * 设置<p>租户 AppID</p>
                     * @param _appID <p>租户 AppID</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

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
                     * 设置<p>主机 UUID</p>
                     * @param _uUID <p>主机 UUID</p>
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

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
                     * 设置<p>主机 IP 地址</p>
                     * @param _hostIP <p>主机 IP 地址</p>
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

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
                     * 设置<p>实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * @param _instanceID <p>实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

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
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

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
                     * 设置<p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * @param _belongAssetType <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

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
                     * 设置<p>Skill 名称</p>
                     * @param _skillName <p>Skill 名称</p>
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

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
                     * 设置<p>Skill 文件路径</p>
                     * @param _skillPath <p>Skill 文件路径</p>
                     * 
                     */
                    void SetSkillPath(const std::string& _skillPath);

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
                     * 设置<p>Skill 作用域</p>
                     * @param _scope <p>Skill 作用域</p>
                     * 
                     */
                    void SetScope(const std::string& _scope);

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
                     * 设置<p>Skill 版本号</p>
                     * @param _version <p>Skill 版本号</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

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
                     * 设置<p>文件内容 SHA256 哈希值<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * @param _contentHash <p>文件内容 SHA256 哈希值<br>参数格式：sha256:&lt;64位hex&gt;</p>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

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
                     * 设置<p>风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑</p>
                     * @param _riskLevel <p>风险等级<br>枚举值：<br>malicious：恶意<br>suspicious：可疑</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

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
                     * 设置<p>安全评分<br>取值范围：[0, 100]</p>
                     * @param _securityScore <p>安全评分<br>取值范围：[0, 100]</p>
                     * 
                     */
                    void SetSecurityScore(const int64_t& _securityScore);

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
                     * 设置<p>主命中规则 ID</p>
                     * @param _primaryRuleID <p>主命中规则 ID</p>
                     * 
                     */
                    void SetPrimaryRuleID(const std::string& _primaryRuleID);

                    /**
                     * 判断参数 PrimaryRuleID 是否已赋值
                     * @return PrimaryRuleID 是否已赋值
                     * 
                     */
                    bool PrimaryRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>命中规则 ID 列表（9xxxx），按 RuleID 去重<br>展示名称通过响应外层 RuleCatalog 字典翻译<br>历史告警未持久化该字段时返回空数组</p>
                     * @return HitRules <p>命中规则 ID 列表（9xxxx），按 RuleID 去重<br>展示名称通过响应外层 RuleCatalog 字典翻译<br>历史告警未持久化该字段时返回空数组</p>
                     * 
                     */
                    std::vector<std::string> GetHitRules() const;

                    /**
                     * 设置<p>命中规则 ID 列表（9xxxx），按 RuleID 去重<br>展示名称通过响应外层 RuleCatalog 字典翻译<br>历史告警未持久化该字段时返回空数组</p>
                     * @param _hitRules <p>命中规则 ID 列表（9xxxx），按 RuleID 去重<br>展示名称通过响应外层 RuleCatalog 字典翻译<br>历史告警未持久化该字段时返回空数组</p>
                     * 
                     */
                    void SetHitRules(const std::vector<std::string>& _hitRules);

                    /**
                     * 判断参数 HitRules 是否已赋值
                     * @return HitRules 是否已赋值
                     * 
                     */
                    bool HitRulesHasBeenSet() const;

                    /**
                     * 获取<p>检测引擎版本号</p>
                     * @return EngineVersion <p>检测引擎版本号</p>
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 设置<p>检测引擎版本号</p>
                     * @param _engineVersion <p>检测引擎版本号</p>
                     * 
                     */
                    void SetEngineVersion(const int64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任<br>4：已删除（软删除）</p>
                     * @return Status <p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任<br>4：已删除（软删除）</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任<br>4：已删除（软删除）</p>
                     * @param _status <p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任<br>4：已删除（软删除）</p>
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
                     * 获取<p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     * @return Level <p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     * @param _level <p>告警级别<br>枚举值：<br>high：高危<br>medium：中危</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

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
                     * 设置<p>首次检出时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _createTime <p>首次检出时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
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
                     * 获取<p>最后更新时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return UpdateTime <p>最后更新时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最后更新时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _updateTime <p>最后更新时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * <p>命中规则 ID 列表（9xxxx），按 RuleID 去重<br>展示名称通过响应外层 RuleCatalog 字典翻译<br>历史告警未持久化该字段时返回空数组</p>
                     */
                    std::vector<std::string> m_hitRules;
                    bool m_hitRulesHasBeenSet;

                    /**
                     * <p>检测引擎版本号</p>
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>处理状态<br>枚举值：<br>0：未处理<br>1：已处理<br>2：已忽略<br>3：已信任<br>4：已删除（软删除）</p>
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
                     * <p>最后更新时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANALERTITEM_H_
