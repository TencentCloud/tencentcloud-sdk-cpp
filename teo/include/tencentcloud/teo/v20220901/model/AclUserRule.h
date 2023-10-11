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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_

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
                * 用户自定义规则
                */
                class AclUserRule : public AbstractModel
                {
                public:
                    AclUserRule();
                    ~AclUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名。
                     * @return RuleName 规则名。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名。
                     * @param _ruleName 规则名。
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
                     * 获取处罚动作，取值有：
<li>trans：放行；</li>
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>ban：IP 封禁；</li>
<li>redirect：重定向；</li>
<li>page：指定页面；</li>
<li>alg：JavaScript 挑战。</li>
                     * @return Action 处罚动作，取值有：
<li>trans：放行；</li>
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>ban：IP 封禁；</li>
<li>redirect：重定向；</li>
<li>page：指定页面；</li>
<li>alg：JavaScript 挑战。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处罚动作，取值有：
<li>trans：放行；</li>
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>ban：IP 封禁；</li>
<li>redirect：重定向；</li>
<li>page：指定页面；</li>
<li>alg：JavaScript 挑战。</li>
                     * @param _action 处罚动作，取值有：
<li>trans：放行；</li>
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>ban：IP 封禁；</li>
<li>redirect：重定向；</li>
<li>page：指定页面；</li>
<li>alg：JavaScript 挑战。</li>
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
                     * 获取规则状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * @return RuleStatus 规则状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置规则状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * @param _ruleStatus 规则状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
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
                     * 获取自定义规则。
                     * @return AclConditions 自定义规则。
                     * 
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置自定义规则。
                     * @param _aclConditions 自定义规则。
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
                     * 获取规则优先级，取值范围0-100。
                     * @return RulePriority 规则优先级，取值范围0-100。
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则优先级，取值范围0-100。
                     * @param _rulePriority 规则优先级，取值范围0-100。
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
                     * 获取更新时间。仅出参使用。
                     * @return UpdateTime 更新时间。仅出参使用。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。仅出参使用。
                     * @param _updateTime 更新时间。仅出参使用。
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
                     * 获取ip 封禁的惩罚时间。Action 是 ban 时必填，且不能为空，取值范围0-2天。
                     * @return PunishTime ip 封禁的惩罚时间。Action 是 ban 时必填，且不能为空，取值范围0-2天。
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置ip 封禁的惩罚时间。Action 是 ban 时必填，且不能为空，取值范围0-2天。
                     * @param _punishTime ip 封禁的惩罚时间。Action 是 ban 时必填，且不能为空，取值范围0-2天。
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
                     * 获取ip 封禁的惩罚时间单位，取值有：
<li>second：秒；</li>
<li>minutes：分；</li>
<li>hour：小时。</li>默认为 second。
                     * @return PunishTimeUnit ip 封禁的惩罚时间单位，取值有：
<li>second：秒；</li>
<li>minutes：分；</li>
<li>hour：小时。</li>默认为 second。
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置ip 封禁的惩罚时间单位，取值有：
<li>second：秒；</li>
<li>minutes：分；</li>
<li>hour：小时。</li>默认为 second。
                     * @param _punishTimeUnit ip 封禁的惩罚时间单位，取值有：
<li>second：秒；</li>
<li>minutes：分；</li>
<li>hour：小时。</li>默认为 second。
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
                     * 获取自定义返回页面的实例 Id。默认为0，代表使用系统默认拦截页面。该参数已废弃。
                     * @return PageId 自定义返回页面的实例 Id。默认为0，代表使用系统默认拦截页面。该参数已废弃。
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置自定义返回页面的实例 Id。默认为0，代表使用系统默认拦截页面。该参数已废弃。
                     * @param _pageId 自定义返回页面的实例 Id。默认为0，代表使用系统默认拦截页面。该参数已废弃。
                     * 
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

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
                     * 规则名。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 处罚动作，取值有：
<li>trans：放行；</li>
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>ban：IP 封禁；</li>
<li>redirect：重定向；</li>
<li>page：指定页面；</li>
<li>alg：JavaScript 挑战。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 自定义规则。
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * 规则优先级，取值范围0-100。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * 规则 Id。仅出参使用。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 更新时间。仅出参使用。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * ip 封禁的惩罚时间。Action 是 ban 时必填，且不能为空，取值范围0-2天。
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * ip 封禁的惩罚时间单位，取值有：
<li>second：秒；</li>
<li>minutes：分；</li>
<li>hour：小时。</li>默认为 second。
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * 自定义返回页面的名称。Action 是 page 时必填，且不能为空。	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义返回页面的实例 Id。默认为0，代表使用系统默认拦截页面。该参数已废弃。
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLUSERRULE_H_
