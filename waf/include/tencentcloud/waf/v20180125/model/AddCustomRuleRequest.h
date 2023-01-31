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
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param Name 规则名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return SortId 优先级
                     */
                    std::string GetSortId() const;

                    /**
                     * 设置优先级
                     * @param SortId 优先级
                     */
                    void SetSortId(const std::string& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param ExpireTime 过期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取策略详情
                     * @return Strategies 策略详情
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置策略详情
                     * @param Strategies 策略详情
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取需要添加策略的域名
                     * @return Domain 需要添加策略的域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要添加策略的域名
                     * @param Domain 需要添加策略的域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取动作类型
                     * @return ActionType 动作类型
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型
                     * @param ActionType 动作类型
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     * @return Redirect 如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     * @param Redirect 如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     */
                    bool RedirectHasBeenSet() const;

                    /**
                     * 获取WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @return Edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @param Edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取放行的详情
                     * @return Bypass 放行的详情
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置放行的详情
                     * @param Bypass 放行的详情
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取添加规则的来源，默认为空
                     * @return EventId 添加规则的来源，默认为空
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置添加规则的来源，默认为空
                     * @param EventId 添加规则的来源，默认为空
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

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
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

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
                     * 动作类型
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 如果动作是重定向，则表示重定向的地址；其他情况可以为空
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 放行的详情
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * 添加规则的来源，默认为空
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULEREQUEST_H_
