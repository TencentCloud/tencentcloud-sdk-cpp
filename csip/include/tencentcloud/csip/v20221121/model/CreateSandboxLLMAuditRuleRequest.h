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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXLLMAUDITRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXLLMAUDITRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSandboxLLMAuditRule请求参数结构体
                */
                class CreateSandboxLLMAuditRuleRequest : public AbstractModel
                {
                public:
                    CreateSandboxLLMAuditRuleRequest();
                    ~CreateSandboxLLMAuditRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则名称
入参限制：长度 1-128
                     * @return RuleName 规则名称
入参限制：长度 1-128
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
入参限制：长度 1-128
                     * @param _ruleName 规则名称
入参限制：长度 1-128
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
                     * 获取引用的 LLM 审计系统规则 ID 列表（字符串，由 DescribeSandboxLLMAuditSystemRuleList 返回的 LLMRules[].RuleID / ToolCallRules[].RuleID 提供）
入参限制：非空，最多 1000 个；单个元素长度 1-128
                     * @return SystemRuleIDList 引用的 LLM 审计系统规则 ID 列表（字符串，由 DescribeSandboxLLMAuditSystemRuleList 返回的 LLMRules[].RuleID / ToolCallRules[].RuleID 提供）
入参限制：非空，最多 1000 个；单个元素长度 1-128
                     * 
                     */
                    std::vector<std::string> GetSystemRuleIDList() const;

                    /**
                     * 设置引用的 LLM 审计系统规则 ID 列表（字符串，由 DescribeSandboxLLMAuditSystemRuleList 返回的 LLMRules[].RuleID / ToolCallRules[].RuleID 提供）
入参限制：非空，最多 1000 个；单个元素长度 1-128
                     * @param _systemRuleIDList 引用的 LLM 审计系统规则 ID 列表（字符串，由 DescribeSandboxLLMAuditSystemRuleList 返回的 LLMRules[].RuleID / ToolCallRules[].RuleID 提供）
入参限制：非空，最多 1000 个；单个元素长度 1-128
                     * 
                     */
                    void SetSystemRuleIDList(const std::vector<std::string>& _systemRuleIDList);

                    /**
                     * 判断参数 SystemRuleIDList 是否已赋值
                     * @return SystemRuleIDList 是否已赋值
                     * 
                     */
                    bool SystemRuleIDListHasBeenSet() const;

                    /**
                     * 获取生效范围
                     * @return EffectScope 生效范围
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置生效范围
                     * @param _effectScope 生效范围
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
                     * 获取初始状态
枚举值：
ON：启用
OFF：禁用
                     * @return Status 初始状态
枚举值：
ON：启用
OFF：禁用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置初始状态
枚举值：
ON：启用
OFF：禁用
                     * @param _status 初始状态
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
                     * 获取规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
                     * @return RuleAction 规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
                     * @param _ruleAction 规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
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
                     * 规则名称
入参限制：长度 1-128
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
                     * 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * 引用的 LLM 审计系统规则 ID 列表（字符串，由 DescribeSandboxLLMAuditSystemRuleList 返回的 LLMRules[].RuleID / ToolCallRules[].RuleID 提供）
入参限制：非空，最多 1000 个；单个元素长度 1-128
                     */
                    std::vector<std::string> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * 生效范围
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * 初始状态
枚举值：
ON：启用
OFF：禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXLLMAUDITRULEREQUEST_H_
