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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ACLCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * RateLimit规则
                */
                class RateLimitUserRule : public AbstractModel
                {
                public:
                    RateLimitUserRule();
                    ~RateLimitUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RateLimit统计阈值
                     * @return Threshold RateLimit统计阈值
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置RateLimit统计阈值
                     * @param Threshold RateLimit统计阈值
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取RateLimit统计时间
                     * @return Period RateLimit统计时间
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置RateLimit统计时间
                     * @param Period RateLimit统计时间
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取规则名
                     * @return RuleName 规则名
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名
                     * @param RuleName 规则名
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取动作：monitor(观察), drop(拦截)
                     * @return Action 动作：monitor(观察), drop(拦截)
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作：monitor(观察), drop(拦截)
                     * @param Action 动作：monitor(观察), drop(拦截)
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取惩罚时长
                     * @return PunishTime 惩罚时长
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置惩罚时长
                     * @param PunishTime 惩罚时长
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取处罚时长单位，second
                     * @return PunishTimeUnit 处罚时长单位，second
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置处罚时长单位，second
                     * @param PunishTimeUnit 处罚时长单位，second
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取规则状态
                     * @return RuleStatus 规则状态
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置规则状态
                     * @param RuleStatus 规则状态
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取规则
                     * @return Conditions 规则
                     */
                    std::vector<ACLCondition> GetConditions() const;

                    /**
                     * 设置规则
                     * @param Conditions 规则
                     */
                    void SetConditions(const std::vector<ACLCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取规则权重
                     * @return RulePriority 规则权重
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则权重
                     * @param RulePriority 规则权重
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleID 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取过滤词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreqFields 过滤词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置过滤词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FreqFields 过滤词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFreqFields(const std::vector<std::string>& _freqFields);

                    /**
                     * 判断参数 FreqFields 是否已赋值
                     * @return FreqFields 是否已赋值
                     */
                    bool FreqFieldsHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * RateLimit统计阈值
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * RateLimit统计时间
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 动作：monitor(观察), drop(拦截)
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 惩罚时长
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * 处罚时长单位，second
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * 规则状态
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 规则
                     */
                    std::vector<ACLCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 规则权重
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 过滤词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITUSERRULE_H_
