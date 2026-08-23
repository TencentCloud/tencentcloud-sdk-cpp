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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxInactiveAsset.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL 用户规则数据结构
                */
                class TrafficSandboxACLRuleInfo : public AbstractModel
                {
                public:
                    TrafficSandboxACLRuleInfo();
                    ~TrafficSandboxACLRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则 ID
                     * @return ID 规则 ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置规则 ID
                     * @param _iD 规则 ID
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
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @return Level 规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @param _level 规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
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
                     * 获取规则状态
枚举值：
ON：启用
OFF：禁用
                     * @return Status 规则状态
枚举值：
ON：启用
OFF：禁用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则状态
枚举值：
ON：启用
OFF：禁用
                     * @param _status 规则状态
枚举值：
ON：启用
OFF：禁用
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
                     * 获取归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * @return BelongAssetType 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * @param _belongAssetType 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
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
                     * 获取引用的系统规则内容快照
                     * @return SystemRuleContent 引用的系统规则内容快照
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetSystemRuleContent() const;

                    /**
                     * 设置引用的系统规则内容快照
                     * @param _systemRuleContent 引用的系统规则内容快照
                     * 
                     */
                    void SetSystemRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _systemRuleContent);

                    /**
                     * 判断参数 SystemRuleContent 是否已赋值
                     * @return SystemRuleContent 是否已赋值
                     * 
                     */
                    bool SystemRuleContentHasBeenSet() const;

                    /**
                     * 获取用户自定义规则内容
                     * @return UserRuleContent 用户自定义规则内容
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置用户自定义规则内容
                     * @param _userRuleContent 用户自定义规则内容
                     * 
                     */
                    void SetUserRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _userRuleContent);

                    /**
                     * 判断参数 UserRuleContent 是否已赋值
                     * @return UserRuleContent 是否已赋值
                     * 
                     */
                    bool UserRuleContentHasBeenSet() const;

                    /**
                     * 获取规则的生效范围
                     * @return EffectScope 规则的生效范围
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置规则的生效范围
                     * @param _effectScope 规则的生效范围
                     * 
                     */
                    void SetEffectScope(const TrafficSandboxEffectScope& _effectScope);

                    /**
                     * 判断参数 EffectScope 是否已赋值
                     * @return EffectScope 是否已赋值
                     * 
                     */
                    bool EffectScopeHasBeenSet() const;

                    /**
                     * 获取未生效资产列表：策略目标生效资产中流量沙箱插件未已安装（TrafficPluginState.InstallStatus 不为 INSTALLED）的 AI Agent 资产，返回机器的 InstanceId / ContainerId 及 TrafficPluginState。无未生效资产时返回空数组
                     * @return InactiveAssets 未生效资产列表：策略目标生效资产中流量沙箱插件未已安装（TrafficPluginState.InstallStatus 不为 INSTALLED）的 AI Agent 资产，返回机器的 InstanceId / ContainerId 及 TrafficPluginState。无未生效资产时返回空数组
                     * 
                     */
                    std::vector<TrafficSandboxInactiveAsset> GetInactiveAssets() const;

                    /**
                     * 设置未生效资产列表：策略目标生效资产中流量沙箱插件未已安装（TrafficPluginState.InstallStatus 不为 INSTALLED）的 AI Agent 资产，返回机器的 InstanceId / ContainerId 及 TrafficPluginState。无未生效资产时返回空数组
                     * @param _inactiveAssets 未生效资产列表：策略目标生效资产中流量沙箱插件未已安装（TrafficPluginState.InstallStatus 不为 INSTALLED）的 AI Agent 资产，返回机器的 InstanceId / ContainerId 及 TrafficPluginState。无未生效资产时返回空数组
                     * 
                     */
                    void SetInactiveAssets(const std::vector<TrafficSandboxInactiveAsset>& _inactiveAssets);

                    /**
                     * 判断参数 InactiveAssets 是否已赋值
                     * @return InactiveAssets 是否已赋值
                     * 
                     */
                    bool InactiveAssetsHasBeenSet() const;

                    /**
                     * 获取创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return InsertTime 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _insertTime 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return UpdateTime 更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _updateTime 更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取规则动作
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警记录
                     * @return RuleAction 规则动作
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警记录
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置规则动作
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警记录
                     * @param _ruleAction 规则动作
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警记录
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                private:

                    /**
                     * 规则 ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 规则状态
枚举值：
ON：启用
OFF：禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * 引用的系统规则内容快照
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_systemRuleContent;
                    bool m_systemRuleContentHasBeenSet;

                    /**
                     * 用户自定义规则内容
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                    /**
                     * 规则的生效范围
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * 未生效资产列表：策略目标生效资产中流量沙箱插件未已安装（TrafficPluginState.InstallStatus 不为 INSTALLED）的 AI Agent 资产，返回机器的 InstanceId / ContainerId 及 TrafficPluginState。无未生效资产时返回空数组
                     */
                    std::vector<TrafficSandboxInactiveAsset> m_inactiveAssets;
                    bool m_inactiveAssetsHasBeenSet;

                    /**
                     * 创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 更新时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 规则动作
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警记录
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULEINFO_H_
