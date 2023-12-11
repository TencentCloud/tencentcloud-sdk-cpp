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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpsertCCRule请求参数结构体
                */
                class UpsertCCRuleRequest : public AbstractModel
                {
                public:
                    UpsertCCRuleRequest();
                    ~UpsertCCRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

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
                     * 获取高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * @return Advance 高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * 
                     */
                    std::string GetAdvance() const;

                    /**
                     * 设置高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * @param _advance 高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * 
                     */
                    void SetAdvance(const std::string& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取CC检测阈值
                     * @return Limit CC检测阈值
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置CC检测阈值
                     * @param _limit CC检测阈值
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取CC检测周期
                     * @return Interval CC检测周期
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置CC检测周期
                     * @param _interval CC检测周期
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取检测Url
                     * @return Url 检测Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置检测Url
                     * @param _url 检测Url
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
                     * 获取匹配方法，0表示等于，1表示前缀匹配，2表示包含
                     * @return MatchFunc 匹配方法，0表示等于，1表示前缀匹配，2表示包含
                     * 
                     */
                    int64_t GetMatchFunc() const;

                    /**
                     * 设置匹配方法，0表示等于，1表示前缀匹配，2表示包含
                     * @param _matchFunc 匹配方法，0表示等于，1表示前缀匹配，2表示包含
                     * 
                     */
                    void SetMatchFunc(const int64_t& _matchFunc);

                    /**
                     * 判断参数 MatchFunc 是否已赋值
                     * @return MatchFunc 是否已赋值
                     * 
                     */
                    bool MatchFuncHasBeenSet() const;

                    /**
                     * 获取动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截
                     * @return ActionType 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截
                     * @param _actionType 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

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
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
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
                     * 获取动作有效时间
                     * @return ValidTime 动作有效时间
                     * 
                     */
                    int64_t GetValidTime() const;

                    /**
                     * 设置动作有效时间
                     * @param _validTime 动作有效时间
                     * 
                     */
                    void SetValidTime(const int64_t& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取附加参数
                     * @return OptionsArr 附加参数
                     * 
                     */
                    std::string GetOptionsArr() const;

                    /**
                     * 设置附加参数
                     * @param _optionsArr 附加参数
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
                     * 获取waf版本，sparta-waf或者clb-waf
                     * @return Edition waf版本，sparta-waf或者clb-waf
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置waf版本，sparta-waf或者clb-waf
                     * @param _edition waf版本，sparta-waf或者clb-waf
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return Type 操作类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置操作类型
                     * @param _type 操作类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取添加规则的来源事件id
                     * @return EventId 添加规则的来源事件id
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置添加规则的来源事件id
                     * @param _eventId 添加规则的来源事件id
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
                     * 获取规则需要启用的SessionID
                     * @return SessionApplied 规则需要启用的SessionID
                     * 
                     */
                    std::vector<int64_t> GetSessionApplied() const;

                    /**
                     * 设置规则需要启用的SessionID
                     * @param _sessionApplied 规则需要启用的SessionID
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
                     * 获取规则ID，新增时填0
                     * @return RuleId 规则ID，新增时填0
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID，新增时填0
                     * @param _ruleId 规则ID，新增时填0
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 高级模式（是否使用Session检测），0表示不启用，1表示启用
                     */
                    std::string m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * CC检测阈值
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * CC检测周期
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 检测Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 匹配方法，0表示等于，1表示前缀匹配，2表示包含
                     */
                    int64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 动作有效时间
                     */
                    int64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 附加参数
                     */
                    std::string m_optionsArr;
                    bool m_optionsArrHasBeenSet;

                    /**
                     * waf版本，sparta-waf或者clb-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 操作类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 添加规则的来源事件id
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 规则需要启用的SessionID
                     */
                    std::vector<int64_t> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * 规则ID，新增时填0
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_
