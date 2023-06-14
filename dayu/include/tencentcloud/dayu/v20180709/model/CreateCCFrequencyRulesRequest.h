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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATECCFREQUENCYRULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATECCFREQUENCYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateCCFrequencyRules请求参数结构体
                */
                class CreateCCFrequencyRulesRequest : public AbstractModel
                {
                public:
                    CreateCCFrequencyRulesRequest();
                    ~CreateCCFrequencyRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）
                     * @return RuleId 7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）
                     * @param _ruleId 7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取匹配规则，取值["include"(前缀匹配)，"equal"(完全匹配)]
                     * @return Mode 匹配规则，取值["include"(前缀匹配)，"equal"(完全匹配)]
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置匹配规则，取值["include"(前缀匹配)，"equal"(完全匹配)]
                     * @param _mode 匹配规则，取值["include"(前缀匹配)，"equal"(完全匹配)]
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取统计周期，单位秒，取值[10, 30, 60]
                     * @return Period 统计周期，单位秒，取值[10, 30, 60]
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置统计周期，单位秒，取值[10, 30, 60]
                     * @param _period 统计周期，单位秒，取值[10, 30, 60]
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取访问次数，取值[1-10000]
                     * @return ReqNumber 访问次数，取值[1-10000]
                     * 
                     */
                    uint64_t GetReqNumber() const;

                    /**
                     * 设置访问次数，取值[1-10000]
                     * @param _reqNumber 访问次数，取值[1-10000]
                     * 
                     */
                    void SetReqNumber(const uint64_t& _reqNumber);

                    /**
                     * 判断参数 ReqNumber 是否已赋值
                     * @return ReqNumber 是否已赋值
                     * 
                     */
                    bool ReqNumberHasBeenSet() const;

                    /**
                     * 获取执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * @return Act 执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * 
                     */
                    std::string GetAct() const;

                    /**
                     * 设置执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * @param _act 执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     * 
                     */
                    void SetAct(const std::string& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     * 
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取执行时间，单位秒，取值[1-900]
                     * @return ExeDuration 执行时间，单位秒，取值[1-900]
                     * 
                     */
                    uint64_t GetExeDuration() const;

                    /**
                     * 设置执行时间，单位秒，取值[1-900]
                     * @param _exeDuration 执行时间，单位秒，取值[1-900]
                     * 
                     */
                    void SetExeDuration(const uint64_t& _exeDuration);

                    /**
                     * 判断参数 ExeDuration 是否已赋值
                     * @return ExeDuration 是否已赋值
                     * 
                     */
                    bool ExeDurationHasBeenSet() const;

                    /**
                     * 获取URI字符串，必须以/开头，例如/abc/a.php，长度不超过31；当URI=/时，匹配模式只能选择前缀匹配；
                     * @return Uri URI字符串，必须以/开头，例如/abc/a.php，长度不超过31；当URI=/时，匹配模式只能选择前缀匹配；
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置URI字符串，必须以/开头，例如/abc/a.php，长度不超过31；当URI=/时，匹配模式只能选择前缀匹配；
                     * @param _uri URI字符串，必须以/开头，例如/abc/a.php，长度不超过31；当URI=/时，匹配模式只能选择前缀匹配；
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取User-Agent字符串，长度不超过80
                     * @return UserAgent User-Agent字符串，长度不超过80
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置User-Agent字符串，长度不超过80
                     * @param _userAgent User-Agent字符串，长度不超过80
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Cookie字符串，长度不超过40
                     * @return Cookie Cookie字符串，长度不超过40
                     * 
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置Cookie字符串，长度不超过40
                     * @param _cookie Cookie字符串，长度不超过40
                     * 
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 匹配规则，取值["include"(前缀匹配)，"equal"(完全匹配)]
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 统计周期，单位秒，取值[10, 30, 60]
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 访问次数，取值[1-10000]
                     */
                    uint64_t m_reqNumber;
                    bool m_reqNumberHasBeenSet;

                    /**
                     * 执行动作，取值["alg"（人机识别）, "drop"（拦截）]
                     */
                    std::string m_act;
                    bool m_actHasBeenSet;

                    /**
                     * 执行时间，单位秒，取值[1-900]
                     */
                    uint64_t m_exeDuration;
                    bool m_exeDurationHasBeenSet;

                    /**
                     * URI字符串，必须以/开头，例如/abc/a.php，长度不超过31；当URI=/时，匹配模式只能选择前缀匹配；
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * User-Agent字符串，长度不超过80
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Cookie字符串，长度不超过40
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATECCFREQUENCYRULESREQUEST_H_
