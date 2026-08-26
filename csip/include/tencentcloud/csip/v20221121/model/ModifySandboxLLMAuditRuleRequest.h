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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXLLMAUDITRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXLLMAUDITRULEREQUEST_H_

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
                * ModifySandboxLLMAuditRule请求参数结构体
                */
                class ModifySandboxLLMAuditRuleRequest : public AbstractModel
                {
                public:
                    ModifySandboxLLMAuditRuleRequest();
                    ~ModifySandboxLLMAuditRuleRequest() = default;
                    std::string ToJsonString() const;


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
入参限制：长度 1-128
默认值：不传则不修改
                     * @return RuleName 规则名称
入参限制：长度 1-128
默认值：不传则不修改
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
入参限制：长度 1-128
默认值：不传则不修改
                     * @param _ruleName 规则名称
入参限制：长度 1-128
默认值：不传则不修改
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
默认值：不传则不修改
                     * @return Level 规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
默认值：不传则不修改
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
默认值：不传则不修改
                     * @param _level 规则级别
枚举值：
INFO：提示
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
默认值：不传则不修改
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
                     * 获取引用的 LLM 审计系统规则 ID 列表（字符串）
入参限制：不传表示不修改；传值则覆盖全量，长度 1-1000；单个元素长度 1-128
                     * @return SystemRuleIDList 引用的 LLM 审计系统规则 ID 列表（字符串）
入参限制：不传表示不修改；传值则覆盖全量，长度 1-1000；单个元素长度 1-128
                     * 
                     */
                    std::vector<std::string> GetSystemRuleIDList() const;

                    /**
                     * 设置引用的 LLM 审计系统规则 ID 列表（字符串）
入参限制：不传表示不修改；传值则覆盖全量，长度 1-1000；单个元素长度 1-128
                     * @param _systemRuleIDList 引用的 LLM 审计系统规则 ID 列表（字符串）
入参限制：不传表示不修改；传值则覆盖全量，长度 1-1000；单个元素长度 1-128
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
默认值：不传则不修改
                     * @return EffectScope 生效范围
默认值：不传则不修改
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置生效范围
默认值：不传则不修改
                     * @param _effectScope 生效范围
默认值：不传则不修改
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
                     * 获取规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
默认值：不传则不修改
                     * @return RuleAction 规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
默认值：不传则不修改
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
默认值：不传则不修改
                     * @param _ruleAction 规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
默认值：不传则不修改
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取目标状态
枚举值：
ON：启用
OFF：禁用
默认值：不传则不修改
                     * @return Status 目标状态
枚举值：
ON：启用
OFF：禁用
默认值：不传则不修改
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置目标状态
枚举值：
ON：启用
OFF：禁用
默认值：不传则不修改
                     * @param _status 目标状态
枚举值：
ON：启用
OFF：禁用
默认值：不传则不修改
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则 ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 规则名称
入参限制：长度 1-128
默认值：不传则不修改
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
默认值：不传则不修改
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 引用的 LLM 审计系统规则 ID 列表（字符串）
入参限制：不传表示不修改；传值则覆盖全量，长度 1-1000；单个元素长度 1-128
                     */
                    std::vector<std::string> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * 生效范围
默认值：不传则不修改
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * 规则动作(RuleAction)
枚举值：
PASS：加白
BLOCK：拦截并告警
MONITOR：告警
默认值：不传则不修改
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 目标状态
枚举值：
ON：启用
OFF：禁用
默认值：不传则不修改
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXLLMAUDITRULEREQUEST_H_
