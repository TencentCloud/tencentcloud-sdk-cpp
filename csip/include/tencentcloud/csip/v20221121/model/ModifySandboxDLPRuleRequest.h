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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPRuleContentItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPUserRuleInfo.h>
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
                * ModifySandboxDLPRule请求参数结构体
                */
                class ModifySandboxDLPRuleRequest : public AbstractModel
                {
                public:
                    ModifySandboxDLPRuleRequest();
                    ~ModifySandboxDLPRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则 ID</p>
                     * @return ID <p>规则 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>规则 ID</p>
                     * @param _iD <p>规则 ID</p>
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
                     * 获取<p>规则名称<br>入参限制：长度 1-128<br>默认值：不传则不修改</p>
                     * @return RuleName <p>规则名称<br>入参限制：长度 1-128<br>默认值：不传则不修改</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称<br>入参限制：长度 1-128<br>默认值：不传则不修改</p>
                     * @param _ruleName <p>规则名称<br>入参限制：长度 1-128<br>默认值：不传则不修改</p>
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
                     * 获取<p>规则级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重<br>默认值：不传则不修改</p>
                     * @return Level <p>规则级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重<br>默认值：不传则不修改</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>规则级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重<br>默认值：不传则不修改</p>
                     * @param _level <p>规则级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重<br>默认值：不传则不修改</p>
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
                     * 获取<p>规则动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警<br>默认值：不传则不修改</p>
                     * @return RuleAction <p>规则动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警<br>默认值：不传则不修改</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>规则动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警<br>默认值：不传则不修改</p>
                     * @param _ruleAction <p>规则动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警<br>默认值：不传则不修改</p>
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
                     * 获取<p>引用的系统规则 ID 列表<br>入参限制：最多 1000 个；传入时整体覆盖原有集合；不传表示不修改</p>
                     * @return SystemRuleIDList <p>引用的系统规则 ID 列表<br>入参限制：最多 1000 个；传入时整体覆盖原有集合；不传表示不修改</p>
                     * 
                     */
                    std::vector<int64_t> GetSystemRuleIDList() const;

                    /**
                     * 设置<p>引用的系统规则 ID 列表<br>入参限制：最多 1000 个；传入时整体覆盖原有集合；不传表示不修改</p>
                     * @param _systemRuleIDList <p>引用的系统规则 ID 列表<br>入参限制：最多 1000 个；传入时整体覆盖原有集合；不传表示不修改</p>
                     * 
                     */
                    void SetSystemRuleIDList(const std::vector<int64_t>& _systemRuleIDList);

                    /**
                     * 判断参数 SystemRuleIDList 是否已赋值
                     * @return SystemRuleIDList 是否已赋值
                     * 
                     */
                    bool SystemRuleIDListHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义规则内容<br>入参限制：传入时整体覆盖原有集合（允许传空数组以清空）；不传表示不修改</p>
                     * @return UserRuleContent <p>用户自定义规则内容<br>入参限制：传入时整体覆盖原有集合（允许传空数组以清空）；不传表示不修改</p>
                     * 
                     */
                    std::vector<TrafficSandboxDLPRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置<p>用户自定义规则内容<br>入参限制：传入时整体覆盖原有集合（允许传空数组以清空）；不传表示不修改</p>
                     * @param _userRuleContent <p>用户自定义规则内容<br>入参限制：传入时整体覆盖原有集合（允许传空数组以清空）；不传表示不修改</p>
                     * 
                     */
                    void SetUserRuleContent(const std::vector<TrafficSandboxDLPRuleContentItem>& _userRuleContent);

                    /**
                     * 判断参数 UserRuleContent 是否已赋值
                     * @return UserRuleContent 是否已赋值
                     * 
                     */
                    bool UserRuleContentHasBeenSet() const;

                    /**
                     * 获取<p>结构化入参，支持 5 个检测维度（文件名称/文件大小/文件格式/外发域名/外发内容），各维度可选、至少命中一项。传入时整体覆盖原有集合；不传表示不修改。与 UserRuleContent 同时传入时优先生效</p>
                     * @return UserRuleInfo <p>结构化入参，支持 5 个检测维度（文件名称/文件大小/文件格式/外发域名/外发内容），各维度可选、至少命中一项。传入时整体覆盖原有集合；不传表示不修改。与 UserRuleContent 同时传入时优先生效</p>
                     * 
                     */
                    TrafficSandboxDLPUserRuleInfo GetUserRuleInfo() const;

                    /**
                     * 设置<p>结构化入参，支持 5 个检测维度（文件名称/文件大小/文件格式/外发域名/外发内容），各维度可选、至少命中一项。传入时整体覆盖原有集合；不传表示不修改。与 UserRuleContent 同时传入时优先生效</p>
                     * @param _userRuleInfo <p>结构化入参，支持 5 个检测维度（文件名称/文件大小/文件格式/外发域名/外发内容），各维度可选、至少命中一项。传入时整体覆盖原有集合；不传表示不修改。与 UserRuleContent 同时传入时优先生效</p>
                     * 
                     */
                    void SetUserRuleInfo(const TrafficSandboxDLPUserRuleInfo& _userRuleInfo);

                    /**
                     * 判断参数 UserRuleInfo 是否已赋值
                     * @return UserRuleInfo 是否已赋值
                     * 
                     */
                    bool UserRuleInfoHasBeenSet() const;

                    /**
                     * 获取<p>生效范围<br>默认值：不传则不修改</p>
                     * @return EffectScope <p>生效范围<br>默认值：不传则不修改</p>
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置<p>生效范围<br>默认值：不传则不修改</p>
                     * @param _effectScope <p>生效范围<br>默认值：不传则不修改</p>
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
                     * 获取<p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用<br>默认值：不传则不修改</p>
                     * @return Status <p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用<br>默认值：不传则不修改</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用<br>默认值：不传则不修改</p>
                     * @param _status <p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用<br>默认值：不传则不修改</p>
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
                     * <p>规则 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>规则名称<br>入参限制：长度 1-128<br>默认值：不传则不修改</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重<br>默认值：不传则不修改</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>规则动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警<br>默认值：不传则不修改</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>引用的系统规则 ID 列表<br>入参限制：最多 1000 个；传入时整体覆盖原有集合；不传表示不修改</p>
                     */
                    std::vector<int64_t> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * <p>用户自定义规则内容<br>入参限制：传入时整体覆盖原有集合（允许传空数组以清空）；不传表示不修改</p>
                     */
                    std::vector<TrafficSandboxDLPRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                    /**
                     * <p>结构化入参，支持 5 个检测维度（文件名称/文件大小/文件格式/外发域名/外发内容），各维度可选、至少命中一项。传入时整体覆盖原有集合；不传表示不修改。与 UserRuleContent 同时传入时优先生效</p>
                     */
                    TrafficSandboxDLPUserRuleInfo m_userRuleInfo;
                    bool m_userRuleInfoHasBeenSet;

                    /**
                     * <p>生效范围<br>默认值：不传则不修改</p>
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * <p>目标状态<br>枚举值：<br>ON：启用<br>OFF：禁用<br>默认值：不传则不修改</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULEREQUEST_H_
