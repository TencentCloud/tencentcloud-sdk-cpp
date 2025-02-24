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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddCustomRule请求参数结构体
                */
                class AddCustomRuleRequest : public AbstractModel
                {
                public:
                    AddCustomRuleRequest();
                    ~AddCustomRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * @return SortId 优先级
                     * 
                     */
                    std::string GetSortId() const;

                    /**
                     * 设置优先级
                     * @param _sortId 优先级
                     * 
                     */
                    void SetSortId(const std::string& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取策略详情
                     * @return Strategies 策略详情
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置策略详情
                     * @param _strategies 策略详情
                     * 
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取需要添加策略的域名
                     * @return Domain 需要添加策略的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要添加策略的域名
                     * @param _domain 需要添加策略的域名
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
                     * 获取动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     * @return ActionType 动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     * @param _actionType 动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
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
                     * 获取如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     * @return Redirect 如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     * @param _redirect 如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                    /**
                     * 获取过期时间，单位为秒级时间戳，例如1677254399表示过期时间为2023-02-24 23:59:59. 0表示永不过期
                     * @return ExpireTime 过期时间，单位为秒级时间戳，例如1677254399表示过期时间为2023-02-24 23:59:59. 0表示永不过期
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间，单位为秒级时间戳，例如1677254399表示过期时间为2023-02-24 23:59:59. 0表示永不过期
                     * @param _expireTime 过期时间，单位为秒级时间戳，例如1677254399表示过期时间为2023-02-24 23:59:59. 0表示永不过期
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @return Edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @param _edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
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
                     * 获取放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。默认是"geoip,cc,owasp,ai,antileakage"
                     * @return Bypass 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。默认是"geoip,cc,owasp,ai,antileakage"
                     * @deprecated
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。默认是"geoip,cc,owasp,ai,antileakage"
                     * @param _bypass 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。默认是"geoip,cc,owasp,ai,antileakage"
                     * @deprecated
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * @deprecated
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取添加规则的来源，默认为空
                     * @return EventId 添加规则的来源，默认为空
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置添加规则的来源，默认为空
                     * @param _eventId 添加规则的来源，默认为空
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
                     * 获取规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * @return JobType 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * @param _jobType 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取规则执行的时间
                     * @return JobDateTime 规则执行的时间
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置规则执行的时间
                     * @param _jobDateTime 规则执行的时间
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取规则来源，判断是不是小程序的
                     * @return Source 规则来源，判断是不是小程序的
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置规则来源，判断是不是小程序的
                     * @param _source 规则来源，判断是不是小程序的
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取规则标签，小程序规则用，标识是内置规则还是自定义规则
                     * @return Label 规则标签，小程序规则用，标识是内置规则还是自定义规则
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置规则标签，小程序规则用，标识是内置规则还是自定义规则
                     * @param _label 规则标签，小程序规则用，标识是内置规则还是自定义规则
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取开关状态，小程序风控规则的时候传该值
                     * @return Status 开关状态，小程序风控规则的时候传该值
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关状态，小程序风控规则的时候传该值
                     * @param _status 开关状态，小程序风控规则的时候传该值
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
                     * 获取拦截页面id
                     * @return PageId 拦截页面id
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置拦截页面id
                     * @param _pageId 拦截页面id
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系
                     * @return LogicalOp 匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系
                     * 
                     */
                    std::string GetLogicalOp() const;

                    /**
                     * 设置匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系
                     * @param _logicalOp 匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系
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
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 优先级
                     */
                    std::string m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * 策略详情
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * 需要添加策略的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * 过期时间，单位为秒级时间戳，例如1677254399表示过期时间为2023-02-24 23:59:59. 0表示永不过期
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。默认是"geoip,cc,owasp,ai,antileakage"
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * 添加规则的来源，默认为空
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 规则执行的时间
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 规则来源，判断是不是小程序的
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 规则标签，小程序规则用，标识是内置规则还是自定义规则
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 开关状态，小程序风控规则的时候传该值
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 拦截页面id
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系
                     */
                    std::string m_logicalOp;
                    bool m_logicalOpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_
