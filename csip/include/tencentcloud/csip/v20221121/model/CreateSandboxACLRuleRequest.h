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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXACLRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSandboxACLRule请求参数结构体
                */
                class CreateSandboxACLRuleRequest : public AbstractModel
                {
                public:
                    CreateSandboxACLRuleRequest();
                    ~CreateSandboxACLRuleRequest() = default;
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
                     * 获取生效范围
入参限制：EffectScope.EffectType=INCLUDE 时 EffectAssets 必须非空
                     * @return EffectScope 生效范围
入参限制：EffectScope.EffectType=INCLUDE 时 EffectAssets 必须非空
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置生效范围
入参限制：EffectScope.EffectType=INCLUDE 时 EffectAssets 必须非空
                     * @param _effectScope 生效范围
入参限制：EffectScope.EffectType=INCLUDE 时 EffectAssets 必须非空
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

                    /**
                     * 获取引用的系统规则 ID 列表
入参限制：最多 100 个；与 UserRuleContent 至少提供其一
                     * @return SystemRuleIDList 引用的系统规则 ID 列表
入参限制：最多 100 个；与 UserRuleContent 至少提供其一
                     * 
                     */
                    std::vector<int64_t> GetSystemRuleIDList() const;

                    /**
                     * 设置引用的系统规则 ID 列表
入参限制：最多 100 个；与 UserRuleContent 至少提供其一
                     * @param _systemRuleIDList 引用的系统规则 ID 列表
入参限制：最多 100 个；与 UserRuleContent 至少提供其一
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
                     * 获取用户自定义规则内容
入参限制：最多 100 条子规则；与 SystemRuleIDList 至少提供其一
                     * @return UserRuleContent 用户自定义规则内容
入参限制：最多 100 条子规则；与 SystemRuleIDList 至少提供其一
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置用户自定义规则内容
入参限制：最多 100 条子规则；与 SystemRuleIDList 至少提供其一
                     * @param _userRuleContent 用户自定义规则内容
入参限制：最多 100 条子规则；与 SystemRuleIDList 至少提供其一
                     * 
                     */
                    void SetUserRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _userRuleContent);

                    /**
                     * 判断参数 UserRuleContent 是否已赋值
                     * @return UserRuleContent 是否已赋值
                     * 
                     */
                    bool UserRuleContentHasBeenSet() const;

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
                     * 生效范围
入参限制：EffectScope.EffectType=INCLUDE 时 EffectAssets 必须非空
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

                    /**
                     * 引用的系统规则 ID 列表
入参限制：最多 100 个；与 UserRuleContent 至少提供其一
                     */
                    std::vector<int64_t> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * 用户自定义规则内容
入参限制：最多 100 条子规则；与 SystemRuleIDList 至少提供其一
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXACLRULEREQUEST_H_
