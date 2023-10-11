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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取速率限制统计阈值，单位是次，取值范围0-4294967294。
                     * @return Threshold 速率限制统计阈值，单位是次，取值范围0-4294967294。
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置速率限制统计阈值，单位是次，取值范围0-4294967294。
                     * @param _threshold 速率限制统计阈值，单位是次，取值范围0-4294967294。
                     * 
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取速率限制统计时间，取值范围 10/20/30/40/50/60 单位是秒。
                     * @return Period 速率限制统计时间，取值范围 10/20/30/40/50/60 单位是秒。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置速率限制统计时间，取值范围 10/20/30/40/50/60 单位是秒。
                     * @param _period 速率限制统计时间，取值范围 10/20/30/40/50/60 单位是秒。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     * @return RuleName 规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     * @param _ruleName 规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
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
                     * 获取处置动作，取值有： <li>monitor：观察；</li> <li>drop：拦截；</li><li> redirect：重定向；</li><li> page：指定页面；</li><li>alg：JavaScript 挑战。</li>	
                     * @return Action 处置动作，取值有： <li>monitor：观察；</li> <li>drop：拦截；</li><li> redirect：重定向；</li><li> page：指定页面；</li><li>alg：JavaScript 挑战。</li>	
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置动作，取值有： <li>monitor：观察；</li> <li>drop：拦截；</li><li> redirect：重定向；</li><li> page：指定页面；</li><li>alg：JavaScript 挑战。</li>	
                     * @param _action 处置动作，取值有： <li>monitor：观察；</li> <li>drop：拦截；</li><li> redirect：重定向；</li><li> page：指定页面；</li><li>alg：JavaScript 挑战。</li>	
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取惩罚时长，0-2天。
                     * @return PunishTime 惩罚时长，0-2天。
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置惩罚时长，0-2天。
                     * @param _punishTime 惩罚时长，0-2天。
                     * 
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     * 
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取处罚时长单位，取值有：
<li>second：秒；</li>
<li>minutes：分钟；</li>
<li>hour：小时。</li>
                     * @return PunishTimeUnit 处罚时长单位，取值有：
<li>second：秒；</li>
<li>minutes：分钟；</li>
<li>hour：小时。</li>
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置处罚时长单位，取值有：
<li>second：秒；</li>
<li>minutes：分钟；</li>
<li>hour：小时。</li>
                     * @param _punishTimeUnit 处罚时长单位，取值有：
<li>second：秒；</li>
<li>minutes：分钟；</li>
<li>hour：小时。</li>
                     * 
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     * 
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认 on 生效。
                     * @return RuleStatus 规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认 on 生效。
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认 on 生效。
                     * @param _ruleStatus 规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认 on 生效。
                     * 
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取规则详情。
                     * @return AclConditions 规则详情。
                     * 
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置规则详情。
                     * @param _aclConditions 规则详情。
                     * 
                     */
                    void SetAclConditions(const std::vector<AclCondition>& _aclConditions);

                    /**
                     * 判断参数 AclConditions 是否已赋值
                     * @return AclConditions 是否已赋值
                     * 
                     */
                    bool AclConditionsHasBeenSet() const;

                    /**
                     * 获取规则权重，取值范围0-100。
                     * @return RulePriority 规则权重，取值范围0-100。
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则权重，取值范围0-100。
                     * @param _rulePriority 规则权重，取值范围0-100。
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取规则 Id。仅出参使用。
                     * @return RuleID 规则 Id。仅出参使用。
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则 Id。仅出参使用。
                     * @param _ruleID 规则 Id。仅出参使用。
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取过滤词，取值有：
<li>sip：客户端 ip。</li>
默认为空字符串。
                     * @return FreqFields 过滤词，取值有：
<li>sip：客户端 ip。</li>
默认为空字符串。
                     * 
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置过滤词，取值有：
<li>sip：客户端 ip。</li>
默认为空字符串。
                     * @param _freqFields 过滤词，取值有：
<li>sip：客户端 ip。</li>
默认为空字符串。
                     * 
                     */
                    void SetFreqFields(const std::vector<std::string>& _freqFields);

                    /**
                     * 判断参数 FreqFields 是否已赋值
                     * @return FreqFields 是否已赋值
                     * 
                     */
                    bool FreqFieldsHasBeenSet() const;

                    /**
                     * 获取更新时间。仅出参使用。修改时默认为当前时间。
                     * @return UpdateTime 更新时间。仅出参使用。修改时默认为当前时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。仅出参使用。修改时默认为当前时间。
                     * @param _updateTime 更新时间。仅出参使用。修改时默认为当前时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取统计范围。取值有：
<li>source_to_eo：（响应）源站到  EdgeOne；</li>
<li>client_to_eo：（请求）客户端到  EdgeOne。</li>
默认为 source_to_eo。
                     * @return FreqScope 统计范围。取值有：
<li>source_to_eo：（响应）源站到  EdgeOne；</li>
<li>client_to_eo：（请求）客户端到  EdgeOne。</li>
默认为 source_to_eo。
                     * 
                     */
                    std::vector<std::string> GetFreqScope() const;

                    /**
                     * 设置统计范围。取值有：
<li>source_to_eo：（响应）源站到  EdgeOne；</li>
<li>client_to_eo：（请求）客户端到  EdgeOne。</li>
默认为 source_to_eo。
                     * @param _freqScope 统计范围。取值有：
<li>source_to_eo：（响应）源站到  EdgeOne；</li>
<li>client_to_eo：（请求）客户端到  EdgeOne。</li>
默认为 source_to_eo。
                     * 
                     */
                    void SetFreqScope(const std::vector<std::string>& _freqScope);

                    /**
                     * 判断参数 FreqScope 是否已赋值
                     * @return FreqScope 是否已赋值
                     * 
                     */
                    bool FreqScopeHasBeenSet() const;

                    /**
                     * 获取自定义返回页面的名称。Action 是 page 时必填，且不能为空。
                     * @return Name 自定义返回页面的名称。Action 是 page 时必填，且不能为空。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义返回页面的名称。Action 是 page 时必填，且不能为空。
                     * @param _name 自定义返回页面的名称。Action 是 page 时必填，且不能为空。
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
                     * 获取自定义响应 Id。该 Id 可通过查询自定义错误页列表接口获取。默认值为default，使用系统默认页面。Action 是 page 时必填，且不能为空。	
                     * @return CustomResponseId 自定义响应 Id。该 Id 可通过查询自定义错误页列表接口获取。默认值为default，使用系统默认页面。Action 是 page 时必填，且不能为空。	
                     * 
                     */
                    std::string GetCustomResponseId() const;

                    /**
                     * 设置自定义响应 Id。该 Id 可通过查询自定义错误页列表接口获取。默认值为default，使用系统默认页面。Action 是 page 时必填，且不能为空。	
                     * @param _customResponseId 自定义响应 Id。该 Id 可通过查询自定义错误页列表接口获取。默认值为default，使用系统默认页面。Action 是 page 时必填，且不能为空。	
                     * 
                     */
                    void SetCustomResponseId(const std::string& _customResponseId);

                    /**
                     * 判断参数 CustomResponseId 是否已赋值
                     * @return CustomResponseId 是否已赋值
                     * 
                     */
                    bool CustomResponseIdHasBeenSet() const;

                    /**
                     * 获取自定义返回页面的响应码。Action 是 page 时必填，且不能为空，取值: 100~600，不支持 3xx 响应码。默认值：567。
                     * @return ResponseCode 自定义返回页面的响应码。Action 是 page 时必填，且不能为空，取值: 100~600，不支持 3xx 响应码。默认值：567。
                     * 
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置自定义返回页面的响应码。Action 是 page 时必填，且不能为空，取值: 100~600，不支持 3xx 响应码。默认值：567。
                     * @param _responseCode 自定义返回页面的响应码。Action 是 page 时必填，且不能为空，取值: 100~600，不支持 3xx 响应码。默认值：567。
                     * 
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取重定向时候的地址。Action 是 redirect 时必填，且不能为空。
                     * @return RedirectUrl 重定向时候的地址。Action 是 redirect 时必填，且不能为空。
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置重定向时候的地址。Action 是 redirect 时必填，且不能为空。
                     * @param _redirectUrl 重定向时候的地址。Action 是 redirect 时必填，且不能为空。
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                private:

                    /**
                     * 速率限制统计阈值，单位是次，取值范围0-4294967294。
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 速率限制统计时间，取值范围 10/20/30/40/50/60 单位是秒。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 处置动作，取值有： <li>monitor：观察；</li> <li>drop：拦截；</li><li> redirect：重定向；</li><li> page：指定页面；</li><li>alg：JavaScript 挑战。</li>	
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 惩罚时长，0-2天。
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * 处罚时长单位，取值有：
<li>second：秒；</li>
<li>minutes：分钟；</li>
<li>hour：小时。</li>
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * 规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认 on 生效。
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 规则详情。
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * 规则权重，取值范围0-100。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * 规则 Id。仅出参使用。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 过滤词，取值有：
<li>sip：客户端 ip。</li>
默认为空字符串。
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * 更新时间。仅出参使用。修改时默认为当前时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 统计范围。取值有：
<li>source_to_eo：（响应）源站到  EdgeOne；</li>
<li>client_to_eo：（请求）客户端到  EdgeOne。</li>
默认为 source_to_eo。
                     */
                    std::vector<std::string> m_freqScope;
                    bool m_freqScopeHasBeenSet;

                    /**
                     * 自定义返回页面的名称。Action 是 page 时必填，且不能为空。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义响应 Id。该 Id 可通过查询自定义错误页列表接口获取。默认值为default，使用系统默认页面。Action 是 page 时必填，且不能为空。	
                     */
                    std::string m_customResponseId;
                    bool m_customResponseIdHasBeenSet;

                    /**
                     * 自定义返回页面的响应码。Action 是 page 时必填，且不能为空，取值: 100~600，不支持 3xx 响应码。默认值：567。
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * 重定向时候的地址。Action 是 redirect 时必填，且不能为空。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITUSERRULE_H_
