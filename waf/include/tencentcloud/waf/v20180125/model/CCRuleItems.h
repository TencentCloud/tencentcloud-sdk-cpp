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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEMS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEMS_H_

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
                * CC规则详情
                */
                class CCRuleItems : public AbstractModel
                {
                public:
                    CCRuleItems();
                    ~CCRuleItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取模式
                     * @return Advance 模式
                     * 
                     */
                    uint64_t GetAdvance() const;

                    /**
                     * 设置模式
                     * @param _advance 模式
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
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param _limit 限制
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
                     * 获取范围
                     * @return Interval 范围
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置范围
                     * @param _interval 范围
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
                     * 获取网址
                     * @return Url 网址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置网址
                     * @param _url 网址
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
                     * 获取匹配类型
                     * @return MatchFunc 匹配类型
                     * 
                     */
                    uint64_t GetMatchFunc() const;

                    /**
                     * 设置匹配类型
                     * @param _matchFunc 匹配类型
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
                     * 获取有效时间
                     * @return ValidTime 有效时间
                     * 
                     */
                    uint64_t GetValidTime() const;

                    /**
                     * 设置有效时间
                     * @param _validTime 有效时间
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
                     * 获取版本
                     * @return TsVersion 版本
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置版本
                     * @param _tsVersion 版本
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
                     * 获取规则详情
                     * @return Options 规则详情
                     * 
                     */
                    std::string GetOptions() const;

                    /**
                     * 设置规则详情
                     * @param _options 规则详情
                     * 
                     */
                    void SetOptions(const std::string& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

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

                    /**
                     * 获取限频方式
                     * @return LimitMethod 限频方式
                     * 
                     */
                    std::string GetLimitMethod() const;

                    /**
                     * 设置限频方式
                     * @param _limitMethod 限频方式
                     * 
                     */
                    void SetLimitMethod(const std::string& _limitMethod);

                    /**
                     * 判断参数 LimitMethod 是否已赋值
                     * @return LimitMethod 是否已赋值
                     * 
                     */
                    bool LimitMethodHasBeenSet() const;

                    /**
                     * 获取cel表达式
                     * @return CelRule cel表达式
                     * 
                     */
                    std::string GetCelRule() const;

                    /**
                     * 设置cel表达式
                     * @param _celRule cel表达式
                     * 
                     */
                    void SetCelRule(const std::string& _celRule);

                    /**
                     * 判断参数 CelRule 是否已赋值
                     * @return CelRule 是否已赋值
                     * 
                     */
                    bool CelRuleHasBeenSet() const;

                    /**
                     * 获取逻辑操作符
                     * @return LogicalOp 逻辑操作符
                     * 
                     */
                    std::string GetLogicalOp() const;

                    /**
                     * 设置逻辑操作符
                     * @param _logicalOp 逻辑操作符
                     * 
                     */
                    void SetLogicalOp(const std::string& _logicalOp);

                    /**
                     * 判断参数 LogicalOp 是否已赋值
                     * @return LogicalOp 是否已赋值
                     * 
                     */
                    bool LogicalOpHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模式
                     */
                    uint64_t m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * 限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 范围
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 网址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 匹配类型
                     */
                    uint64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，24表示JS校验
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 优先级
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 有效时间
                     */
                    uint64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 版本
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 规则详情
                     */
                    std::string m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 规则ID
                     */
                    uint64_t m_ruleId;
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

                    /**
                     * 限频方式
                     */
                    std::string m_limitMethod;
                    bool m_limitMethodHasBeenSet;

                    /**
                     * cel表达式
                     */
                    std::string m_celRule;
                    bool m_celRuleHasBeenSet;

                    /**
                     * 逻辑操作符
                     */
                    std::string m_logicalOp;
                    bool m_logicalOpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CCRULEITEMS_H_
