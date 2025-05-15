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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_

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
                * 自定义规则-基础访问管控配置。
                */
                class IpTableRule : public AbstractModel
                {
                public:
                    IpTableRule();
                    ~IpTableRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作，取值有：
<li> drop：拦截；</li>
<li> trans：放行；</li>
<li> monitor：观察。</li>
                     * @return Action 动作，取值有：
<li> drop：拦截；</li>
<li> trans：放行；</li>
<li> monitor：观察。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作，取值有：
<li> drop：拦截；</li>
<li> trans：放行；</li>
<li> monitor：观察。</li>
                     * @param _action 动作，取值有：
<li> drop：拦截；</li>
<li> trans：放行；</li>
<li> monitor：观察。</li>
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
                     * 获取根据类型匹配，取值有：
<li>ip：客户端 IP 进行匹配；</li>
<li>area：客户端 IP 所属地区匹配；</li>
<li>asn：客户端所属的自治系统进行匹配；</li>
<li>referer：请求头 Referer 进行匹配；</li>
<li>ua：请求头 User-Agent 进行匹配；</li>
<li>url：请求 URL 进行匹配。</li>
                     * @return MatchFrom 根据类型匹配，取值有：
<li>ip：客户端 IP 进行匹配；</li>
<li>area：客户端 IP 所属地区匹配；</li>
<li>asn：客户端所属的自治系统进行匹配；</li>
<li>referer：请求头 Referer 进行匹配；</li>
<li>ua：请求头 User-Agent 进行匹配；</li>
<li>url：请求 URL 进行匹配。</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置根据类型匹配，取值有：
<li>ip：客户端 IP 进行匹配；</li>
<li>area：客户端 IP 所属地区匹配；</li>
<li>asn：客户端所属的自治系统进行匹配；</li>
<li>referer：请求头 Referer 进行匹配；</li>
<li>ua：请求头 User-Agent 进行匹配；</li>
<li>url：请求 URL 进行匹配。</li>
                     * @param _matchFrom 根据类型匹配，取值有：
<li>ip：客户端 IP 进行匹配；</li>
<li>area：客户端 IP 所属地区匹配；</li>
<li>asn：客户端所属的自治系统进行匹配；</li>
<li>referer：请求头 Referer 进行匹配；</li>
<li>ua：请求头 User-Agent 进行匹配；</li>
<li>url：请求 URL 进行匹配。</li>
                     * 
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取规则的匹配方式。取值有：
<li> match：匹配，适用于 MatchFrom 为 ip；</li>
<li> not_match：不匹配，适用于 MatchFrom 为 ip；</li>
<li> include_area：地域包含，适用于 MatchFrom 为 area；</li>
<li> not_include_area：地域不包含，适用于 MatchFrom 为 area；</li>
<li> asn_match：ASN 包含，适用于 MatchFrom 为 asn；</li>
<li> asn_not_match：ASN 不包含，适用于 MatchFrom 为 asn；</li>
<li> equal：等于，适用于 MatchFrom 为 ua , referer；</li>
<li> not_equal：不等于，适用于 MatchFrom 为 ua , referer；</li>
<li> include：通配符匹配，适用于 MatchFrom 为 ua , referer , url；</li>
<li> not_include：通配符不匹配，适用于 MatchFrom 为 ua , referer；</li>
<li> is_emty：配置内容为空，适用于 MatchFrom 为 ua , referer；</li>
<li> not_exists：配置内容不存在，适用于 MatchFrom 为 ua , referer。</li>
                     * @return Operator 规则的匹配方式。取值有：
<li> match：匹配，适用于 MatchFrom 为 ip；</li>
<li> not_match：不匹配，适用于 MatchFrom 为 ip；</li>
<li> include_area：地域包含，适用于 MatchFrom 为 area；</li>
<li> not_include_area：地域不包含，适用于 MatchFrom 为 area；</li>
<li> asn_match：ASN 包含，适用于 MatchFrom 为 asn；</li>
<li> asn_not_match：ASN 不包含，适用于 MatchFrom 为 asn；</li>
<li> equal：等于，适用于 MatchFrom 为 ua , referer；</li>
<li> not_equal：不等于，适用于 MatchFrom 为 ua , referer；</li>
<li> include：通配符匹配，适用于 MatchFrom 为 ua , referer , url；</li>
<li> not_include：通配符不匹配，适用于 MatchFrom 为 ua , referer；</li>
<li> is_emty：配置内容为空，适用于 MatchFrom 为 ua , referer；</li>
<li> not_exists：配置内容不存在，适用于 MatchFrom 为 ua , referer。</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置规则的匹配方式。取值有：
<li> match：匹配，适用于 MatchFrom 为 ip；</li>
<li> not_match：不匹配，适用于 MatchFrom 为 ip；</li>
<li> include_area：地域包含，适用于 MatchFrom 为 area；</li>
<li> not_include_area：地域不包含，适用于 MatchFrom 为 area；</li>
<li> asn_match：ASN 包含，适用于 MatchFrom 为 asn；</li>
<li> asn_not_match：ASN 不包含，适用于 MatchFrom 为 asn；</li>
<li> equal：等于，适用于 MatchFrom 为 ua , referer；</li>
<li> not_equal：不等于，适用于 MatchFrom 为 ua , referer；</li>
<li> include：通配符匹配，适用于 MatchFrom 为 ua , referer , url；</li>
<li> not_include：通配符不匹配，适用于 MatchFrom 为 ua , referer；</li>
<li> is_emty：配置内容为空，适用于 MatchFrom 为 ua , referer；</li>
<li> not_exists：配置内容不存在，适用于 MatchFrom 为 ua , referer。</li>
                     * @param _operator 规则的匹配方式。取值有：
<li> match：匹配，适用于 MatchFrom 为 ip；</li>
<li> not_match：不匹配，适用于 MatchFrom 为 ip；</li>
<li> include_area：地域包含，适用于 MatchFrom 为 area；</li>
<li> not_include_area：地域不包含，适用于 MatchFrom 为 area；</li>
<li> asn_match：ASN 包含，适用于 MatchFrom 为 asn；</li>
<li> asn_not_match：ASN 不包含，适用于 MatchFrom 为 asn；</li>
<li> equal：等于，适用于 MatchFrom 为 ua , referer；</li>
<li> not_equal：不等于，适用于 MatchFrom 为 ua , referer；</li>
<li> include：通配符匹配，适用于 MatchFrom 为 ua , referer , url；</li>
<li> not_include：通配符不匹配，适用于 MatchFrom 为 ua , referer；</li>
<li> is_emty：配置内容为空，适用于 MatchFrom 为 ua , referer；</li>
<li> not_exists：配置内容不存在，适用于 MatchFrom 为 ua , referer。</li>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取规则id。仅出参使用。
                     * @return RuleID 规则id。仅出参使用。
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则id。仅出参使用。
                     * @param _ruleID 规则id。仅出参使用。
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
                     * 获取规则启用状态。取值有：
<li> on：启用；</li>
<li> off：未启用。</li>
当入参缺省时，按 on 取值。
                     * @return Status 规则启用状态。取值有：
<li> on：启用；</li>
<li> off：未启用。</li>
当入参缺省时，按 on 取值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则启用状态。取值有：
<li> on：启用；</li>
<li> off：未启用。</li>
当入参缺省时，按 on 取值。
                     * @param _status 规则启用状态。取值有：
<li> on：启用；</li>
<li> off：未启用。</li>
当入参缺省时，按 on 取值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取匹配内容。支持多值输入。
<li>当输入多个匹配值时，请使用英文逗号分隔；</li>
<li>当 MatchFrom 为 ua 时，不支持多值输入；</li>
<li>当 Operator 为 is_empty 或 not_exists 时，本字段入参值无效。</li>
                     * @return MatchContent 匹配内容。支持多值输入。
<li>当输入多个匹配值时，请使用英文逗号分隔；</li>
<li>当 MatchFrom 为 ua 时，不支持多值输入；</li>
<li>当 Operator 为 is_empty 或 not_exists 时，本字段入参值无效。</li>
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置匹配内容。支持多值输入。
<li>当输入多个匹配值时，请使用英文逗号分隔；</li>
<li>当 MatchFrom 为 ua 时，不支持多值输入；</li>
<li>当 Operator 为 is_empty 或 not_exists 时，本字段入参值无效。</li>
                     * @param _matchContent 匹配内容。支持多值输入。
<li>当输入多个匹配值时，请使用英文逗号分隔；</li>
<li>当 MatchFrom 为 ua 时，不支持多值输入；</li>
<li>当 Operator 为 is_empty 或 not_exists 时，本字段入参值无效。</li>
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * 动作，取值有：
<li> drop：拦截；</li>
<li> trans：放行；</li>
<li> monitor：观察。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 根据类型匹配，取值有：
<li>ip：客户端 IP 进行匹配；</li>
<li>area：客户端 IP 所属地区匹配；</li>
<li>asn：客户端所属的自治系统进行匹配；</li>
<li>referer：请求头 Referer 进行匹配；</li>
<li>ua：请求头 User-Agent 进行匹配；</li>
<li>url：请求 URL 进行匹配。</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * 规则的匹配方式。取值有：
<li> match：匹配，适用于 MatchFrom 为 ip；</li>
<li> not_match：不匹配，适用于 MatchFrom 为 ip；</li>
<li> include_area：地域包含，适用于 MatchFrom 为 area；</li>
<li> not_include_area：地域不包含，适用于 MatchFrom 为 area；</li>
<li> asn_match：ASN 包含，适用于 MatchFrom 为 asn；</li>
<li> asn_not_match：ASN 不包含，适用于 MatchFrom 为 asn；</li>
<li> equal：等于，适用于 MatchFrom 为 ua , referer；</li>
<li> not_equal：不等于，适用于 MatchFrom 为 ua , referer；</li>
<li> include：通配符匹配，适用于 MatchFrom 为 ua , referer , url；</li>
<li> not_include：通配符不匹配，适用于 MatchFrom 为 ua , referer；</li>
<li> is_emty：配置内容为空，适用于 MatchFrom 为 ua , referer；</li>
<li> not_exists：配置内容不存在，适用于 MatchFrom 为 ua , referer。</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 规则id。仅出参使用。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 更新时间。仅出参使用。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 规则启用状态。取值有：
<li> on：启用；</li>
<li> off：未启用。</li>
当入参缺省时，按 on 取值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则名。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 匹配内容。支持多值输入。
<li>当输入多个匹配值时，请使用英文逗号分隔；</li>
<li>当 MatchFrom 为 ua 时，不支持多值输入；</li>
<li>当 Operator 为 is_empty 或 not_exists 时，本字段入参值无效。</li>
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_
