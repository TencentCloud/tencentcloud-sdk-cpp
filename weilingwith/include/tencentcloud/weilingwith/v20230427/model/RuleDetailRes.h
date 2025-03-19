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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RULEDETAILRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RULEDETAILRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/EventObj.h>
#include <tencentcloud/weilingwith/v20230427/model/ActionObj.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 规则详情查询结果
                */
                class RuleDetailRes : public AbstractModel
                {
                public:
                    RuleDetailRes();
                    ~RuleDetailRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联动id
                     * @return RuleId 联动id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置联动id
                     * @param _ruleId 联动id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取联动名称
                     * @return RuleName 联动名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置联动名称
                     * @param _ruleName 联动名称
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
                     * 获取联动说明
                     * @return RuleDesc 联动说明
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置联动说明
                     * @param _ruleDesc 联动说明
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取1 全天有效，0：固定时间段有效
                     * @return ValidType 1 全天有效，0：固定时间段有效
                     * 
                     */
                    int64_t GetValidType() const;

                    /**
                     * 设置1 全天有效，0：固定时间段有效
                     * @param _validType 1 全天有效，0：固定时间段有效
                     * 
                     */
                    void SetValidType(const int64_t& _validType);

                    /**
                     * 判断参数 ValidType 是否已赋值
                     * @return ValidType 是否已赋值
                     * 
                     */
                    bool ValidTypeHasBeenSet() const;

                    /**
                     * 获取有效期，json字符串（全天有效时为空）
                     * @return ValidPeriod 有效期，json字符串（全天有效时为空）
                     * 
                     */
                    std::string GetValidPeriod() const;

                    /**
                     * 设置有效期，json字符串（全天有效时为空）
                     * @param _validPeriod 有效期，json字符串（全天有效时为空）
                     * 
                     */
                    void SetValidPeriod(const std::string& _validPeriod);

                    /**
                     * 判断参数 ValidPeriod 是否已赋值
                     * @return ValidPeriod 是否已赋值
                     * 
                     */
                    bool ValidPeriodHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return BeginDate 起始时间
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置起始时间
                     * @param _beginDate 起始时间
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndDate 结束时间
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间
                     * @param _endDate 结束时间
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取启用状态。1-启用，0-停用
                     * @return Status 启用状态。1-启用，0-停用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置启用状态。1-启用，0-停用
                     * @param _status 启用状态。1-启用，0-停用
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
                     * 获取触发规则，事件的组合
                     * @return EventRule 触发规则，事件的组合
                     * 
                     */
                    std::string GetEventRule() const;

                    /**
                     * 设置触发规则，事件的组合
                     * @param _eventRule 触发规则，事件的组合
                     * 
                     */
                    void SetEventRule(const std::string& _eventRule);

                    /**
                     * 判断参数 EventRule 是否已赋值
                     * @return EventRule 是否已赋值
                     * 
                     */
                    bool EventRuleHasBeenSet() const;

                    /**
                     * 获取事件对象集合
                     * @return EventInfoSet 事件对象集合
                     * 
                     */
                    std::vector<EventObj> GetEventInfoSet() const;

                    /**
                     * 设置事件对象集合
                     * @param _eventInfoSet 事件对象集合
                     * 
                     */
                    void SetEventInfoSet(const std::vector<EventObj>& _eventInfoSet);

                    /**
                     * 判断参数 EventInfoSet 是否已赋值
                     * @return EventInfoSet 是否已赋值
                     * 
                     */
                    bool EventInfoSetHasBeenSet() const;

                    /**
                     * 获取动作对象集合
                     * @return ActionInfoSet 动作对象集合
                     * 
                     */
                    std::vector<ActionObj> GetActionInfoSet() const;

                    /**
                     * 设置动作对象集合
                     * @param _actionInfoSet 动作对象集合
                     * 
                     */
                    void SetActionInfoSet(const std::vector<ActionObj>& _actionInfoSet);

                    /**
                     * 判断参数 ActionInfoSet 是否已赋值
                     * @return ActionInfoSet 是否已赋值
                     * 
                     */
                    bool ActionInfoSetHasBeenSet() const;

                private:

                    /**
                     * 联动id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 联动名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 联动说明
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * 1 全天有效，0：固定时间段有效
                     */
                    int64_t m_validType;
                    bool m_validTypeHasBeenSet;

                    /**
                     * 有效期，json字符串（全天有效时为空）
                     */
                    std::string m_validPeriod;
                    bool m_validPeriodHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 启用状态。1-启用，0-停用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 触发规则，事件的组合
                     */
                    std::string m_eventRule;
                    bool m_eventRuleHasBeenSet;

                    /**
                     * 事件对象集合
                     */
                    std::vector<EventObj> m_eventInfoSet;
                    bool m_eventInfoSetHasBeenSet;

                    /**
                     * 动作对象集合
                     */
                    std::vector<ActionObj> m_actionInfoSet;
                    bool m_actionInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RULEDETAILRES_H_
