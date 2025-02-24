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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULEREQUEST_H_

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
                * ModifyCustomRule请求参数结构体
                */
                class ModifyCustomRuleRequest : public AbstractModel
                {
                public:
                    ModifyCustomRuleRequest();
                    ~ModifyCustomRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑的域名
                     * @return Domain 编辑的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置编辑的域名
                     * @param _domain 编辑的域名
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
                     * 获取编辑的规则ID
                     * @return RuleId 编辑的规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置编辑的规则ID
                     * @param _ruleId 编辑的规则ID
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
                     * 获取编辑的规则名称
                     * @return RuleName 编辑的规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置编辑的规则名称
                     * @param _ruleName 编辑的规则名称
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
                     * 获取动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     * @return RuleAction 动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     * @param _ruleAction 动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
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
                     * 获取匹配条件数组
                     * @return Strategies 匹配条件数组
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置匹配条件数组
                     * @param _strategies 匹配条件数组
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
                     * 获取WAF的版本，clb-waf代表负载均衡WAF、sparta-waf代表SaaS WAF，默认是sparta-waf。
                     * @return Edition WAF的版本，clb-waf代表负载均衡WAF、sparta-waf代表SaaS WAF，默认是sparta-waf。
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF的版本，clb-waf代表负载均衡WAF、sparta-waf代表SaaS WAF，默认是sparta-waf。
                     * @param _edition WAF的版本，clb-waf代表负载均衡WAF、sparta-waf代表SaaS WAF，默认是sparta-waf。
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
                     * 获取动作为重定向的时候重定向URL，默认为"/"
                     * @return Redirect 动作为重定向的时候重定向URL，默认为"/"
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置动作为重定向的时候重定向URL，默认为"/"
                     * @param _redirect 动作为重定向的时候重定向URL，默认为"/"
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
                     * 获取放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
默认是"geoip,cc,owasp,ai,antileakage"
                     * @return Bypass 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
默认是"geoip,cc,owasp,ai,antileakage"
                     * @deprecated
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
默认是"geoip,cc,owasp,ai,antileakage"
                     * @param _bypass 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
默认是"geoip,cc,owasp,ai,antileakage"
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
                     * 获取优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
默认是100
                     * @return SortId 优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
默认是100
                     * 
                     */
                    uint64_t GetSortId() const;

                    /**
                     * 设置优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
默认是100
                     * @param _sortId 优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
默认是100
                     * 
                     */
                    void SetSortId(const uint64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
默认是0
                     * @return ExpireTime 规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
默认是0
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
默认是0
                     * @param _expireTime 规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
默认是0
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

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
                     * 获取定时任务配置
                     * @return JobDateTime 定时任务配置
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时任务配置
                     * @param _jobDateTime 定时任务配置
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
                     * 编辑的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 编辑的规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 编辑的规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 匹配条件数组
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * WAF的版本，clb-waf代表负载均衡WAF、sparta-waf代表SaaS WAF，默认是sparta-waf。
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 动作为重定向的时候重定向URL，默认为"/"
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
默认是"geoip,cc,owasp,ai,antileakage"
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * 优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
默认是100
                     */
                    uint64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * 规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
默认是0
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 定时任务配置
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 规则来源，判断是不是小程序的
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

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

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULEREQUEST_H_
