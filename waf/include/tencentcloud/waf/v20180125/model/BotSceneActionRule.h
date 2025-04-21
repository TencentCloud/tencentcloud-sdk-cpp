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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCENEACTIONRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCENEACTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BotScoreRuleEntry.h>
#include <tencentcloud/waf/v20180125/model/BotActionScopeRuleEntry.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 获取场景动作策略列表时的动作策略实体
                */
                class BotSceneActionRule : public AbstractModel
                {
                public:
                    BotSceneActionRule();
                    ~BotSceneActionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作策略ID
                     * @return RuleId 动作策略ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置动作策略ID
                     * @param _ruleId 动作策略ID
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
                     * 获取动作策略名称
                     * @return RuleName 动作策略名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置动作策略名称
                     * @param _ruleName 动作策略名称
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
                     * 获取策略优先级
                     * @return Priority 策略优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置策略优先级
                     * @param _priority 策略优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取策略生效状态
                     * @return Status 策略生效状态
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置策略生效状态
                     * @param _status 策略生效状态
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分数范围
                     * @return Score 分数范围
                     * 
                     */
                    std::vector<BotScoreRuleEntry> GetScore() const;

                    /**
                     * 设置分数范围
                     * @param _score 分数范围
                     * 
                     */
                    void SetScore(const std::vector<BotScoreRuleEntry>& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取100-宽松、200-中等、300-严格、0-自定义
                     * @return Level 100-宽松、200-中等、300-严格、0-自定义
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置100-宽松、200-中等、300-严格、0-自定义
                     * @param _level 100-宽松、200-中等、300-严格、0-自定义
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
                     * 获取生效范围，为空表示全部范围
                     * @return Scope 生效范围，为空表示全部范围
                     * 
                     */
                    std::vector<BotActionScopeRuleEntry> GetScope() const;

                    /**
                     * 设置生效范围，为空表示全部范围
                     * @param _scope 生效范围，为空表示全部范围
                     * 
                     */
                    void SetScope(const std::vector<BotActionScopeRuleEntry>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取default：默认创建 custom：自定义创建
                     * @return Type default：默认创建 custom：自定义创建
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置default：默认创建 custom：自定义创建
                     * @param _type default：默认创建 custom：自定义创建
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取匹配范围类型：全局匹配 or 自定义匹配范围
                     * @return ScopeType 匹配范围类型：全局匹配 or 自定义匹配范围
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置匹配范围类型：全局匹配 or 自定义匹配范围
                     * @param _scopeType 匹配范围类型：全局匹配 or 自定义匹配范围
                     * 
                     */
                    void SetScopeType(const std::string& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取匹配条件间的与或关系
                     * @return ActionMatchType 匹配条件间的与或关系
                     * 
                     */
                    std::string GetActionMatchType() const;

                    /**
                     * 设置匹配条件间的与或关系
                     * @param _actionMatchType 匹配条件间的与或关系
                     * 
                     */
                    void SetActionMatchType(const std::string& _actionMatchType);

                    /**
                     * 判断参数 ActionMatchType 是否已赋值
                     * @return ActionMatchType 是否已赋值
                     * 
                     */
                    bool ActionMatchTypeHasBeenSet() const;

                private:

                    /**
                     * 动作策略ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 动作策略名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 策略优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 策略生效状态
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分数范围
                     */
                    std::vector<BotScoreRuleEntry> m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 100-宽松、200-中等、300-严格、0-自定义
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 生效范围，为空表示全部范围
                     */
                    std::vector<BotActionScopeRuleEntry> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * default：默认创建 custom：自定义创建
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 匹配范围类型：全局匹配 or 自定义匹配范围
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * 匹配条件间的与或关系
                     */
                    std::string m_actionMatchType;
                    bool m_actionMatchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCENEACTIONRULE_H_
