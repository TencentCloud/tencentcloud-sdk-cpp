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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CSIPTag.h>
#include <tencentcloud/csip/v20221121/model/IPIntelInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR告警详情（含content JSON + 资产/情报富化字段）
                */
                class EdrAlertDetail : public AbstractModel
                {
                public:
                    EdrAlertDetail();
                    ~EdrAlertDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
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
                     * 获取<p>租户ID</p>
                     * @return AppId <p>租户ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>租户ID</p>
                     * @param _appId <p>租户ID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>告警唯一标识</p>
                     * @return AlertId <p>告警唯一标识</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>告警唯一标识</p>
                     * @param _alertId <p>告警唯一标识</p>
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取<p>告警大类（英文枚举：VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE）</p>
                     * @return AlertCategory <p>告警大类（英文枚举：VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE）</p>
                     * 
                     */
                    std::string GetAlertCategory() const;

                    /**
                     * 设置<p>告警大类（英文枚举：VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE）</p>
                     * @param _alertCategory <p>告警大类（英文枚举：VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE）</p>
                     * 
                     */
                    void SetAlertCategory(const std::string& _alertCategory);

                    /**
                     * 判断参数 AlertCategory 是否已赋值
                     * @return AlertCategory 是否已赋值
                     * 
                     */
                    bool AlertCategoryHasBeenSet() const;

                    /**
                     * 获取<p>告警子类型（英文枚举：MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK）</p>
                     * @return AlertSubType <p>告警子类型（英文枚举：MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK）</p>
                     * 
                     */
                    std::string GetAlertSubType() const;

                    /**
                     * 设置<p>告警子类型（英文枚举：MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK）</p>
                     * @param _alertSubType <p>告警子类型（英文枚举：MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK）</p>
                     * 
                     */
                    void SetAlertSubType(const std::string& _alertSubType);

                    /**
                     * 判断参数 AlertSubType 是否已赋值
                     * @return AlertSubType 是否已赋值
                     * 
                     */
                    bool AlertSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>关联规则ID</p>
                     * @return RuleId <p>关联规则ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>关联规则ID</p>
                     * @param _ruleId <p>关联规则ID</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>规则类型: 0-系统规则 1-用户自定义</p>
                     * @return RuleType <p>规则类型: 0-系统规则 1-用户自定义</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>规则类型: 0-系统规则 1-用户自定义</p>
                     * @param _ruleType <p>规则类型: 0-系统规则 1-用户自定义</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>告警等级（英文枚举：CRITICAL/HIGH/MEDIUM/LOW/INFO）</p>
                     * @return Level <p>告警等级（英文枚举：CRITICAL/HIGH/MEDIUM/LOW/INFO）</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>告警等级（英文枚举：CRITICAL/HIGH/MEDIUM/LOW/INFO）</p>
                     * @param _level <p>告警等级（英文枚举：CRITICAL/HIGH/MEDIUM/LOW/INFO）</p>
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
                     * 获取<p>处理状态（英文枚举：PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED）</p>
                     * @return Status <p>处理状态（英文枚举：PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>处理状态（英文枚举：PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED）</p>
                     * @param _status <p>处理状态（英文枚举：PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED）</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>ATT&amp;CK攻击阶段</p>
                     * @return AttackStage <p>ATT&amp;CK攻击阶段</p>
                     * 
                     */
                    std::string GetAttackStage() const;

                    /**
                     * 设置<p>ATT&amp;CK攻击阶段</p>
                     * @param _attackStage <p>ATT&amp;CK攻击阶段</p>
                     * 
                     */
                    void SetAttackStage(const std::string& _attackStage);

                    /**
                     * 判断参数 AttackStage 是否已赋值
                     * @return AttackStage 是否已赋值
                     * 
                     */
                    bool AttackStageHasBeenSet() const;

                    /**
                     * 获取<p>检测模式（英文枚举：PRECISE/BALANCED/DEEP）</p>
                     * @return DetectMode <p>检测模式（英文枚举：PRECISE/BALANCED/DEEP）</p>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置<p>检测模式（英文枚举：PRECISE/BALANCED/DEEP）</p>
                     * @param _detectMode <p>检测模式（英文枚举：PRECISE/BALANCED/DEEP）</p>
                     * 
                     */
                    void SetDetectMode(const std::string& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>主机UUID</p>
                     * @return Quuid <p>主机UUID</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机UUID</p>
                     * @param _quuid <p>主机UUID</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>聚合事件数</p>
                     * @return EventCount <p>聚合事件数</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>聚合事件数</p>
                     * @param _eventCount <p>聚合事件数</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>是否付费版</p>
                     * @return IsProVersion <p>是否付费版</p>
                     * 
                     */
                    int64_t GetIsProVersion() const;

                    /**
                     * 设置<p>是否付费版</p>
                     * @param _isProVersion <p>是否付费版</p>
                     * 
                     */
                    void SetIsProVersion(const int64_t& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取<p>告警来源（英文枚举：HOST/CONTAINER/K8S/CSIP）</p>
                     * @return AlertSource <p>告警来源（英文枚举：HOST/CONTAINER/K8S/CSIP）</p>
                     * 
                     */
                    std::string GetAlertSource() const;

                    /**
                     * 设置<p>告警来源（英文枚举：HOST/CONTAINER/K8S/CSIP）</p>
                     * @param _alertSource <p>告警来源（英文枚举：HOST/CONTAINER/K8S/CSIP）</p>
                     * 
                     */
                    void SetAlertSource(const std::string& _alertSource);

                    /**
                     * 判断参数 AlertSource 是否已赋值
                     * @return AlertSource 是否已赋值
                     * 
                     */
                    bool AlertSourceHasBeenSet() const;

                    /**
                     * 获取<p>容器镜像ID（保留字段，恒为空串）</p>
                     * @return ImageId <p>容器镜像ID（保留字段，恒为空串）</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>容器镜像ID（保留字段，恒为空串）</p>
                     * @param _imageId <p>容器镜像ID（保留字段，恒为空串）</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>容器ID（保留字段，恒为空串）</p>
                     * @return ContainerId <p>容器ID（保留字段，恒为空串）</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器ID（保留字段，恒为空串）</p>
                     * @param _containerId <p>容器ID（保留字段，恒为空串）</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>集群ID（保留字段，恒为空串）</p>
                     * @return ClusterId <p>集群ID（保留字段，恒为空串）</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID（保留字段，恒为空串）</p>
                     * @param _clusterId <p>集群ID（保留字段，恒为空串）</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>首次发现时间</p>
                     * @return FirstDetectTime <p>首次发现时间</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>首次发现时间</p>
                     * @param _firstDetectTime <p>首次发现时间</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近发现时间</p>
                     * @return LatestDetectTime <p>最近发现时间</p>
                     * 
                     */
                    std::string GetLatestDetectTime() const;

                    /**
                     * 设置<p>最近发现时间</p>
                     * @param _latestDetectTime <p>最近发现时间</p>
                     * 
                     */
                    void SetLatestDetectTime(const std::string& _latestDetectTime);

                    /**
                     * 判断参数 LatestDetectTime 是否已赋值
                     * @return LatestDetectTime 是否已赋值
                     * 
                     */
                    bool LatestDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则名称（规则富化）</p>
                     * @return RuleName <p>规则名称（规则富化）</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称（规则富化）</p>
                     * @param _ruleName <p>规则名称（规则富化）</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>内容类型: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * @return ContentType <p>内容类型: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>内容类型: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * @param _contentType <p>内容类型: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例名（资产富化）</p>
                     * @return InstanceName <p>实例名（资产富化）</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名（资产富化）</p>
                     * @param _instanceName <p>实例名（资产富化）</p>
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
                     * 获取<p>公网IP（资产富化）</p>
                     * @return PublicIp <p>公网IP（资产富化）</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IP（资产富化）</p>
                     * @param _publicIp <p>公网IP（资产富化）</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>内网IP（资产富化）</p>
                     * @return PrivateIp <p>内网IP（资产富化）</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网IP（资产富化）</p>
                     * @param _privateIp <p>内网IP（资产富化）</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>告警详情JSON字符串（前端通过JSON.parse解析，空值为&quot;{}&quot;）</p>
                     * @return Content <p>告警详情JSON字符串（前端通过JSON.parse解析，空值为&quot;{}&quot;）</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>告警详情JSON字符串（前端通过JSON.parse解析，空值为&quot;{}&quot;）</p>
                     * @param _content <p>告警详情JSON字符串（前端通过JSON.parse解析，空值为&quot;{}&quot;）</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>告警名称（子类型中英文名）</p>
                     * @return AlertName <p>告警名称（子类型中英文名）</p>
                     * 
                     */
                    std::string GetAlertName() const;

                    /**
                     * 设置<p>告警名称（子类型中英文名）</p>
                     * @param _alertName <p>告警名称（子类型中英文名）</p>
                     * 
                     */
                    void SetAlertName(const std::string& _alertName);

                    /**
                     * 判断参数 AlertName 是否已赋值
                     * @return AlertName 是否已赋值
                     * 
                     */
                    bool AlertNameHasBeenSet() const;

                    /**
                     * 获取<p>安全中心标签</p>
                     * @return CSIPTags <p>安全中心标签</p>
                     * 
                     */
                    std::vector<CSIPTag> GetCSIPTags() const;

                    /**
                     * 设置<p>安全中心标签</p>
                     * @param _cSIPTags <p>安全中心标签</p>
                     * 
                     */
                    void SetCSIPTags(const std::vector<CSIPTag>& _cSIPTags);

                    /**
                     * 判断参数 CSIPTags 是否已赋值
                     * @return CSIPTags 是否已赋值
                     * 
                     */
                    bool CSIPTagsHasBeenSet() const;

                    /**
                     * 获取<p>危害描述（统一字段，合并原各子类型独立字段）</p>
                     * @return HarmDesc <p>危害描述（统一字段，合并原各子类型独立字段）</p>
                     * 
                     */
                    std::string GetHarmDesc() const;

                    /**
                     * 设置<p>危害描述（统一字段，合并原各子类型独立字段）</p>
                     * @param _harmDesc <p>危害描述（统一字段，合并原各子类型独立字段）</p>
                     * 
                     */
                    void SetHarmDesc(const std::string& _harmDesc);

                    /**
                     * 判断参数 HarmDesc 是否已赋值
                     * @return HarmDesc 是否已赋值
                     * 
                     */
                    bool HarmDescHasBeenSet() const;

                    /**
                     * 获取<p>修复建议（统一字段）</p>
                     * @return SuggestScheme <p>修复建议（统一字段）</p>
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置<p>修复建议（统一字段）</p>
                     * @param _suggestScheme <p>修复建议（统一字段）</p>
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取<p>数据来源: vuldb/vdc/intel/default</p>
                     * @return HarmDescSource <p>数据来源: vuldb/vdc/intel/default</p>
                     * 
                     */
                    std::string GetHarmDescSource() const;

                    /**
                     * 设置<p>数据来源: vuldb/vdc/intel/default</p>
                     * @param _harmDescSource <p>数据来源: vuldb/vdc/intel/default</p>
                     * 
                     */
                    void SetHarmDescSource(const std::string& _harmDescSource);

                    /**
                     * 判断参数 HarmDescSource 是否已赋值
                     * @return HarmDescSource 是否已赋值
                     * 
                     */
                    bool HarmDescSourceHasBeenSet() const;

                    /**
                     * 获取<p>统一威胁情报标签（按子类型路由不同情报源）</p>
                     * @return ThreatTags <p>统一威胁情报标签（按子类型路由不同情报源）</p>
                     * 
                     */
                    std::vector<std::string> GetThreatTags() const;

                    /**
                     * 设置<p>统一威胁情报标签（按子类型路由不同情报源）</p>
                     * @param _threatTags <p>统一威胁情报标签（按子类型路由不同情报源）</p>
                     * 
                     */
                    void SetThreatTags(const std::vector<std::string>& _threatTags);

                    /**
                     * 判断参数 ThreatTags 是否已赋值
                     * @return ThreatTags 是否已赋值
                     * 
                     */
                    bool ThreatTagsHasBeenSet() const;

                    /**
                     * 获取<p>Base64解码后的命令（高危命令子类型独有）</p>
                     * @return BashCmdDecoded <p>Base64解码后的命令（高危命令子类型独有）</p>
                     * 
                     */
                    std::string GetBashCmdDecoded() const;

                    /**
                     * 设置<p>Base64解码后的命令（高危命令子类型独有）</p>
                     * @param _bashCmdDecoded <p>Base64解码后的命令（高危命令子类型独有）</p>
                     * 
                     */
                    void SetBashCmdDecoded(const std::string& _bashCmdDecoded);

                    /**
                     * 判断参数 BashCmdDecoded 是否已赋值
                     * @return BashCmdDecoded 是否已赋值
                     * 
                     */
                    bool BashCmdDecodedHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名称（网络攻击子类型独有）</p>
                     * @return NetVulName <p>漏洞名称（网络攻击子类型独有）</p>
                     * 
                     */
                    std::string GetNetVulName() const;

                    /**
                     * 设置<p>漏洞名称（网络攻击子类型独有）</p>
                     * @param _netVulName <p>漏洞名称（网络攻击子类型独有）</p>
                     * 
                     */
                    void SetNetVulName(const std::string& _netVulName);

                    /**
                     * 判断参数 NetVulName 是否已赋值
                     * @return NetVulName 是否已赋值
                     * 
                     */
                    bool NetVulNameHasBeenSet() const;

                    /**
                     * 获取<p>CVE编号（网络攻击子类型独有）</p>
                     * @return NetCVEId <p>CVE编号（网络攻击子类型独有）</p>
                     * 
                     */
                    std::string GetNetCVEId() const;

                    /**
                     * 设置<p>CVE编号（网络攻击子类型独有）</p>
                     * @param _netCVEId <p>CVE编号（网络攻击子类型独有）</p>
                     * 
                     */
                    void SetNetCVEId(const std::string& _netCVEId);

                    /**
                     * 判断参数 NetCVEId 是否已赋值
                     * @return NetCVEId 是否已赋值
                     * 
                     */
                    bool NetCVEIdHasBeenSet() const;

                    /**
                     * 获取<p>异常行为（网络攻击子类型独有）</p>
                     * @return NetAbnormalAction <p>异常行为（网络攻击子类型独有）</p>
                     * 
                     */
                    std::string GetNetAbnormalAction() const;

                    /**
                     * 设置<p>异常行为（网络攻击子类型独有）</p>
                     * @param _netAbnormalAction <p>异常行为（网络攻击子类型独有）</p>
                     * 
                     */
                    void SetNetAbnormalAction(const std::string& _netAbnormalAction);

                    /**
                     * 判断参数 NetAbnormalAction 是否已赋值
                     * @return NetAbnormalAction 是否已赋值
                     * 
                     */
                    bool NetAbnormalActionHasBeenSet() const;

                    /**
                     * 获取<p>IP情报信息（为空时不返回）</p>
                     * @return IPIntel <p>IP情报信息（为空时不返回）</p>
                     * 
                     */
                    IPIntelInfo GetIPIntel() const;

                    /**
                     * 设置<p>IP情报信息（为空时不返回）</p>
                     * @param _iPIntel <p>IP情报信息（为空时不返回）</p>
                     * 
                     */
                    void SetIPIntel(const IPIntelInfo& _iPIntel);

                    /**
                     * 判断参数 IPIntel 是否已赋值
                     * @return IPIntel 是否已赋值
                     * 
                     */
                    bool IPIntelHasBeenSet() const;

                    /**
                     * 获取<p>多行为攻击规则类型分类: sequence/threshold/command</p>
                     * @return MultiBehaviorDetectionMode <p>多行为攻击规则类型分类: sequence/threshold/command</p>
                     * 
                     */
                    std::string GetMultiBehaviorDetectionMode() const;

                    /**
                     * 设置<p>多行为攻击规则类型分类: sequence/threshold/command</p>
                     * @param _multiBehaviorDetectionMode <p>多行为攻击规则类型分类: sequence/threshold/command</p>
                     * 
                     */
                    void SetMultiBehaviorDetectionMode(const std::string& _multiBehaviorDetectionMode);

                    /**
                     * 判断参数 MultiBehaviorDetectionMode 是否已赋值
                     * @return MultiBehaviorDetectionMode 是否已赋值
                     * 
                     */
                    bool MultiBehaviorDetectionModeHasBeenSet() const;

                    /**
                     * 获取<p>告警来源描述（按子类型派生，描述哪个引擎/规则检出）</p>
                     * @return SourceDesc <p>告警来源描述（按子类型派生，描述哪个引擎/规则检出）</p>
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置<p>告警来源描述（按子类型派生，描述哪个引擎/规则检出）</p>
                     * @param _sourceDesc <p>告警来源描述（按子类型派生，描述哪个引擎/规则检出）</p>
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取<p>处理时间参数格式：2026-05-26 19:45:48</p>
                     * @return ModifyTime <p>处理时间参数格式：2026-05-26 19:45:48</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>处理时间参数格式：2026-05-26 19:45:48</p>
                     * @param _modifyTime <p>处理时间参数格式：2026-05-26 19:45:48</p>
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
                     * 获取<p>情报富化结果来源（标识本次详情是否成功命中外部情报）；取值 &quot;VDC&quot; / &quot;IPAnalysis&quot; / &quot;BreakingTI&quot; / 空串</p>
                     * @return IntelSource <p>情报富化结果来源（标识本次详情是否成功命中外部情报）；取值 &quot;VDC&quot; / &quot;IPAnalysis&quot; / &quot;BreakingTI&quot; / 空串</p>
                     * 
                     */
                    std::string GetIntelSource() const;

                    /**
                     * 设置<p>情报富化结果来源（标识本次详情是否成功命中外部情报）；取值 &quot;VDC&quot; / &quot;IPAnalysis&quot; / &quot;BreakingTI&quot; / 空串</p>
                     * @param _intelSource <p>情报富化结果来源（标识本次详情是否成功命中外部情报）；取值 &quot;VDC&quot; / &quot;IPAnalysis&quot; / &quot;BreakingTI&quot; / 空串</p>
                     * 
                     */
                    void SetIntelSource(const std::string& _intelSource);

                    /**
                     * 判断参数 IntelSource 是否已赋值
                     * @return IntelSource 是否已赋值
                     * 
                     */
                    bool IntelSourceHasBeenSet() const;

                    /**
                     * 获取<p>综合研判，中英文已翻译，中：恶意/安全/未知；英：Malicious/Safe/Unknown</p>
                     * @return Verdict <p>综合研判，中英文已翻译，中：恶意/安全/未知；英：Malicious/Safe/Unknown</p>
                     * 
                     */
                    std::string GetVerdict() const;

                    /**
                     * 设置<p>综合研判，中英文已翻译，中：恶意/安全/未知；英：Malicious/Safe/Unknown</p>
                     * @param _verdict <p>综合研判，中英文已翻译，中：恶意/安全/未知；英：Malicious/Safe/Unknown</p>
                     * 
                     */
                    void SetVerdict(const std::string& _verdict);

                    /**
                     * 判断参数 Verdict 是否已赋值
                     * @return Verdict 是否已赋值
                     * 
                     */
                    bool VerdictHasBeenSet() const;

                    /**
                     * 获取<p>研判依据</p>
                     * @return VerdictBasis <p>研判依据</p>
                     * 
                     */
                    std::string GetVerdictBasis() const;

                    /**
                     * 设置<p>研判依据</p>
                     * @param _verdictBasis <p>研判依据</p>
                     * 
                     */
                    void SetVerdictBasis(const std::string& _verdictBasis);

                    /**
                     * 判断参数 VerdictBasis 是否已赋值
                     * @return VerdictBasis 是否已赋值
                     * 
                     */
                    bool VerdictBasisHasBeenSet() const;

                    /**
                     * 获取<p>病毒名称</p>
                     * @return VirusName <p>病毒名称</p>
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置<p>病毒名称</p>
                     * @param _virusName <p>病毒名称</p>
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取<p>病毒家族</p>
                     * @return VirusFamily <p>病毒家族</p>
                     * 
                     */
                    std::string GetVirusFamily() const;

                    /**
                     * 设置<p>病毒家族</p>
                     * @param _virusFamily <p>病毒家族</p>
                     * 
                     */
                    void SetVirusFamily(const std::string& _virusFamily);

                    /**
                     * 判断参数 VirusFamily 是否已赋值
                     * @return VirusFamily 是否已赋值
                     * 
                     */
                    bool VirusFamilyHasBeenSet() const;

                    /**
                     * 获取<p>NetResponsePayload 响应数据包（base64 编码后的字符串）</p>
                     * @return NetResponsePayload <p>NetResponsePayload 响应数据包（base64 编码后的字符串）</p>
                     * 
                     */
                    std::string GetNetResponsePayload() const;

                    /**
                     * 设置<p>NetResponsePayload 响应数据包（base64 编码后的字符串）</p>
                     * @param _netResponsePayload <p>NetResponsePayload 响应数据包（base64 编码后的字符串）</p>
                     * 
                     */
                    void SetNetResponsePayload(const std::string& _netResponsePayload);

                    /**
                     * 判断参数 NetResponsePayload 是否已赋值
                     * @return NetResponsePayload 是否已赋值
                     * 
                     */
                    bool NetResponsePayloadHasBeenSet() const;

                    /**
                     * 获取<p>服务进程信息（base64 编码后的 JSON 字符串）</p>
                     * @return NetSvcPs <p>服务进程信息（base64 编码后的 JSON 字符串）</p>
                     * 
                     */
                    std::string GetNetSvcPs() const;

                    /**
                     * 设置<p>服务进程信息（base64 编码后的 JSON 字符串）</p>
                     * @param _netSvcPs <p>服务进程信息（base64 编码后的 JSON 字符串）</p>
                     * 
                     */
                    void SetNetSvcPs(const std::string& _netSvcPs);

                    /**
                     * 判断参数 NetSvcPs 是否已赋值
                     * @return NetSvcPs 是否已赋值
                     * 
                     */
                    bool NetSvcPsHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>租户ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>告警唯一标识</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>告警大类（英文枚举：VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE）</p>
                     */
                    std::string m_alertCategory;
                    bool m_alertCategoryHasBeenSet;

                    /**
                     * <p>告警子类型（英文枚举：MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK）</p>
                     */
                    std::string m_alertSubType;
                    bool m_alertSubTypeHasBeenSet;

                    /**
                     * <p>关联规则ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则类型: 0-系统规则 1-用户自定义</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>告警等级（英文枚举：CRITICAL/HIGH/MEDIUM/LOW/INFO）</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>处理状态（英文枚举：PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ATT&amp;CK攻击阶段</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>检测模式（英文枚举：PRECISE/BALANCED/DEEP）</p>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机UUID</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>聚合事件数</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>是否付费版</p>
                     */
                    int64_t m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * <p>告警来源（英文枚举：HOST/CONTAINER/K8S/CSIP）</p>
                     */
                    std::string m_alertSource;
                    bool m_alertSourceHasBeenSet;

                    /**
                     * <p>容器镜像ID（保留字段，恒为空串）</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>容器ID（保留字段，恒为空串）</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>集群ID（保留字段，恒为空串）</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>首次发现时间</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>最近发现时间</p>
                     */
                    std::string m_latestDetectTime;
                    bool m_latestDetectTimeHasBeenSet;

                    /**
                     * <p>规则名称（规则富化）</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>内容类型: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>实例名（资产富化）</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>公网IP（资产富化）</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网IP（资产富化）</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>告警详情JSON字符串（前端通过JSON.parse解析，空值为&quot;{}&quot;）</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>告警名称（子类型中英文名）</p>
                     */
                    std::string m_alertName;
                    bool m_alertNameHasBeenSet;

                    /**
                     * <p>安全中心标签</p>
                     */
                    std::vector<CSIPTag> m_cSIPTags;
                    bool m_cSIPTagsHasBeenSet;

                    /**
                     * <p>危害描述（统一字段，合并原各子类型独立字段）</p>
                     */
                    std::string m_harmDesc;
                    bool m_harmDescHasBeenSet;

                    /**
                     * <p>修复建议（统一字段）</p>
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * <p>数据来源: vuldb/vdc/intel/default</p>
                     */
                    std::string m_harmDescSource;
                    bool m_harmDescSourceHasBeenSet;

                    /**
                     * <p>统一威胁情报标签（按子类型路由不同情报源）</p>
                     */
                    std::vector<std::string> m_threatTags;
                    bool m_threatTagsHasBeenSet;

                    /**
                     * <p>Base64解码后的命令（高危命令子类型独有）</p>
                     */
                    std::string m_bashCmdDecoded;
                    bool m_bashCmdDecodedHasBeenSet;

                    /**
                     * <p>漏洞名称（网络攻击子类型独有）</p>
                     */
                    std::string m_netVulName;
                    bool m_netVulNameHasBeenSet;

                    /**
                     * <p>CVE编号（网络攻击子类型独有）</p>
                     */
                    std::string m_netCVEId;
                    bool m_netCVEIdHasBeenSet;

                    /**
                     * <p>异常行为（网络攻击子类型独有）</p>
                     */
                    std::string m_netAbnormalAction;
                    bool m_netAbnormalActionHasBeenSet;

                    /**
                     * <p>IP情报信息（为空时不返回）</p>
                     */
                    IPIntelInfo m_iPIntel;
                    bool m_iPIntelHasBeenSet;

                    /**
                     * <p>多行为攻击规则类型分类: sequence/threshold/command</p>
                     */
                    std::string m_multiBehaviorDetectionMode;
                    bool m_multiBehaviorDetectionModeHasBeenSet;

                    /**
                     * <p>告警来源描述（按子类型派生，描述哪个引擎/规则检出）</p>
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * <p>处理时间参数格式：2026-05-26 19:45:48</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>情报富化结果来源（标识本次详情是否成功命中外部情报）；取值 &quot;VDC&quot; / &quot;IPAnalysis&quot; / &quot;BreakingTI&quot; / 空串</p>
                     */
                    std::string m_intelSource;
                    bool m_intelSourceHasBeenSet;

                    /**
                     * <p>综合研判，中英文已翻译，中：恶意/安全/未知；英：Malicious/Safe/Unknown</p>
                     */
                    std::string m_verdict;
                    bool m_verdictHasBeenSet;

                    /**
                     * <p>研判依据</p>
                     */
                    std::string m_verdictBasis;
                    bool m_verdictBasisHasBeenSet;

                    /**
                     * <p>病毒名称</p>
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * <p>病毒家族</p>
                     */
                    std::string m_virusFamily;
                    bool m_virusFamilyHasBeenSet;

                    /**
                     * <p>NetResponsePayload 响应数据包（base64 编码后的字符串）</p>
                     */
                    std::string m_netResponsePayload;
                    bool m_netResponsePayloadHasBeenSet;

                    /**
                     * <p>服务进程信息（base64 编码后的 JSON 字符串）</p>
                     */
                    std::string m_netSvcPs;
                    bool m_netSvcPsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTDETAIL_H_
