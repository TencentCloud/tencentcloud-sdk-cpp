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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECHITRULEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECHITRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 命中规则信息
                */
                class SecHitRuleInfo : public AbstractModel
                {
                public:
                    SecHitRuleInfo();
                    ~SecHitRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param _ruleId 规则ID。
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
                     * 获取规则类型名称。
                     * @return RuleTypeName 规则类型名称。
                     * 
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置规则类型名称。
                     * @param _ruleTypeName 规则类型名称。
                     * 
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     * 
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取命中时间，采用unix秒级时间戳。
                     * @return HitTime 命中时间，采用unix秒级时间戳。
                     * 
                     */
                    int64_t GetHitTime() const;

                    /**
                     * 设置命中时间，采用unix秒级时间戳。
                     * @param _hitTime 命中时间，采用unix秒级时间戳。
                     * 
                     */
                    void SetHitTime(const int64_t& _hitTime);

                    /**
                     * 判断参数 HitTime 是否已赋值
                     * @return HitTime 是否已赋值
                     * 
                     */
                    bool HitTimeHasBeenSet() const;

                    /**
                     * 获取请求数。
                     * @return RequestNum 请求数。
                     * 
                     */
                    int64_t GetRequestNum() const;

                    /**
                     * 设置请求数。
                     * @param _requestNum 请求数。
                     * 
                     */
                    void SetRequestNum(const int64_t& _requestNum);

                    /**
                     * 判断参数 RequestNum 是否已赋值
                     * @return RequestNum 是否已赋值
                     * 
                     */
                    bool RequestNumHasBeenSet() const;

                    /**
                     * 获取规则描述。
                     * @return Description 规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。
                     * @param _description 规则描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取子域名。
                     * @return Domain 子域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置子域名。
                     * @param _domain 子域名。
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
                     * 获取执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     * @return Action 执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     * @param _action 执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
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
                     * 获取Bot标签，取值有:
<li>evil_bot：恶意Bot；</li>
<li>suspect_bot：疑似Bot；</li>
<li>good_bot：正常Bot；</li>
<li>normal：正常请求；</li>
<li>none：未分类。</li>
                     * @return BotLabel Bot标签，取值有:
<li>evil_bot：恶意Bot；</li>
<li>suspect_bot：疑似Bot；</li>
<li>good_bot：正常Bot；</li>
<li>normal：正常请求；</li>
<li>none：未分类。</li>
                     * 
                     */
                    std::string GetBotLabel() const;

                    /**
                     * 设置Bot标签，取值有:
<li>evil_bot：恶意Bot；</li>
<li>suspect_bot：疑似Bot；</li>
<li>good_bot：正常Bot；</li>
<li>normal：正常请求；</li>
<li>none：未分类。</li>
                     * @param _botLabel Bot标签，取值有:
<li>evil_bot：恶意Bot；</li>
<li>suspect_bot：疑似Bot；</li>
<li>good_bot：正常Bot；</li>
<li>normal：正常请求；</li>
<li>none：未分类。</li>
                     * 
                     */
                    void SetBotLabel(const std::string& _botLabel);

                    /**
                     * 判断参数 BotLabel 是否已赋值
                     * @return BotLabel 是否已赋值
                     * 
                     */
                    bool BotLabelHasBeenSet() const;

                    /**
                     * 获取规则是否启用。
                     * @return RuleEnabled 规则是否启用。
                     * 
                     */
                    bool GetRuleEnabled() const;

                    /**
                     * 设置规则是否启用。
                     * @param _ruleEnabled 规则是否启用。
                     * 
                     */
                    void SetRuleEnabled(const bool& _ruleEnabled);

                    /**
                     * 判断参数 RuleEnabled 是否已赋值
                     * @return RuleEnabled 是否已赋值
                     * 
                     */
                    bool RuleEnabledHasBeenSet() const;

                    /**
                     * 获取规则是否启用监控告警。
                     * @return AlarmEnabled 规则是否启用监控告警。
                     * 
                     */
                    bool GetAlarmEnabled() const;

                    /**
                     * 设置规则是否启用监控告警。
                     * @param _alarmEnabled 规则是否启用监控告警。
                     * 
                     */
                    void SetAlarmEnabled(const bool& _alarmEnabled);

                    /**
                     * 判断参数 AlarmEnabled 是否已赋值
                     * @return AlarmEnabled 是否已赋值
                     * 
                     */
                    bool AlarmEnabledHasBeenSet() const;

                    /**
                     * 获取规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * @return RuleDeleted 规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * 
                     */
                    bool GetRuleDeleted() const;

                    /**
                     * 设置规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * @param _ruleDeleted 规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * 
                     */
                    void SetRuleDeleted(const bool& _ruleDeleted);

                    /**
                     * 判断参数 RuleDeleted 是否已赋值
                     * @return RuleDeleted 是否已赋值
                     * 
                     */
                    bool RuleDeletedHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 规则ID。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则类型名称。
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * 命中时间，采用unix秒级时间戳。
                     */
                    int64_t m_hitTime;
                    bool m_hitTimeHasBeenSet;

                    /**
                     * 请求数。
                     */
                    int64_t m_requestNum;
                    bool m_requestNumHasBeenSet;

                    /**
                     * 规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 子域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Bot标签，取值有:
<li>evil_bot：恶意Bot；</li>
<li>suspect_bot：疑似Bot；</li>
<li>good_bot：正常Bot；</li>
<li>normal：正常请求；</li>
<li>none：未分类。</li>
                     */
                    std::string m_botLabel;
                    bool m_botLabelHasBeenSet;

                    /**
                     * 规则是否启用。
                     */
                    bool m_ruleEnabled;
                    bool m_ruleEnabledHasBeenSet;

                    /**
                     * 规则是否启用监控告警。
                     */
                    bool m_alarmEnabled;
                    bool m_alarmEnabledHasBeenSet;

                    /**
                     * 规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     */
                    bool m_ruleDeleted;
                    bool m_ruleDeletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECHITRULEINFO_H_
