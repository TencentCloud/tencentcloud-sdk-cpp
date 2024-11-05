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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * cc规则
                */
                class CCRuleItem : public AbstractModel
                {
                public:
                    CCRuleItem();
                    ~CCRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，24表示JS校验
                     * @return ActionType 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，24表示JS校验
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，24表示JS校验
                     * @param _actionType 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，24表示JS校验
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取高级模式
                     * @return Advance 高级模式
                     * 
                     */
                    uint64_t GetAdvance() const;

                    /**
                     * 设置高级模式
                     * @param _advance 高级模式
                     * 
                     */
                    void SetAdvance(const uint64_t& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取时间周期
                     * @return Interval 时间周期
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置时间周期
                     * @param _interval 时间周期
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取限制次数
                     * @return Limit 限制次数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制次数
                     * @param _limit 限制次数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取匹配方法
                     * @return MatchFunc 匹配方法
                     * 
                     */
                    uint64_t GetMatchFunc() const;

                    /**
                     * 设置匹配方法
                     * @param _matchFunc 匹配方法
                     * 
                     */
                    void SetMatchFunc(const uint64_t& _matchFunc);

                    /**
                     * 判断参数 MatchFunc 是否已赋值
                     * @return MatchFunc 是否已赋值
                     * 
                     */
                    bool MatchFuncHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取更新时间戳
                     * @return TsVersion 更新时间戳
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置更新时间戳
                     * @param _tsVersion 更新时间戳
                     * 
                     */
                    void SetTsVersion(const uint64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取匹配url
                     * @return Url 匹配url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置匹配url
                     * @param _url 匹配url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取策略动作有效时间
                     * @return ValidTime 策略动作有效时间
                     * 
                     */
                    uint64_t GetValidTime() const;

                    /**
                     * 设置策略动作有效时间
                     * @param _validTime 策略动作有效时间
                     * 
                     */
                    void SetValidTime(const uint64_t& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取高级参数
                     * @return OptionsArr 高级参数
                     * 
                     */
                    std::string GetOptionsArr() const;

                    /**
                     * 设置高级参数
                     * @param _optionsArr 高级参数
                     * 
                     */
                    void SetOptionsArr(const std::string& _optionsArr);

                    /**
                     * 判断参数 OptionsArr 是否已赋值
                     * @return OptionsArr 是否已赋值
                     * 
                     */
                    bool OptionsArrHasBeenSet() const;

                    /**
                     * 获取url长度
                     * @return Length url长度
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置url长度
                     * @param _length url长度
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取事件id
                     * @return EventId 事件id
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件id
                     * @param _eventId 事件id
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取关联的Session规则
                     * @return SessionApplied 关联的Session规则
                     * 
                     */
                    std::vector<int64_t> GetSessionApplied() const;

                    /**
                     * 设置关联的Session规则
                     * @param _sessionApplied 关联的Session规则
                     * 
                     */
                    void SetSessionApplied(const std::vector<int64_t>& _sessionApplied);

                    /**
                     * 判断参数 SessionApplied 是否已赋值
                     * @return SessionApplied 是否已赋值
                     * 
                     */
                    bool SessionAppliedHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，24表示JS校验
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 高级模式
                     */
                    uint64_t m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * 时间周期
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 限制次数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 匹配方法
                     */
                    uint64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 优先级
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间戳
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 匹配url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 策略动作有效时间
                     */
                    uint64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 高级参数
                     */
                    std::string m_optionsArr;
                    bool m_optionsArrHasBeenSet;

                    /**
                     * url长度
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 事件id
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 关联的Session规则
                     */
                    std::vector<int64_t> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEM_H_
