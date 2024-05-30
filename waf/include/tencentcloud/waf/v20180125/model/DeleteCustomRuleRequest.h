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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DomainRuleId.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteCustomRule请求参数结构体
                */
                class DeleteCustomRuleRequest : public AbstractModel
                {
                public:
                    DeleteCustomRuleRequest();
                    ~DeleteCustomRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除的域名
                     * @return Domain 删除的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置删除的域名
                     * @param _domain 删除的域名
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
                     * 获取删除的规则ID
                     * @return RuleId 删除的规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置删除的规则ID
                     * @param _ruleId 删除的规则ID
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
                     * 获取批量删除的规则列表
                     * @return DomainRuleIdList 批量删除的规则列表
                     * 
                     */
                    std::vector<DomainRuleId> GetDomainRuleIdList() const;

                    /**
                     * 设置批量删除的规则列表
                     * @param _domainRuleIdList 批量删除的规则列表
                     * 
                     */
                    void SetDomainRuleIdList(const std::vector<DomainRuleId>& _domainRuleIdList);

                    /**
                     * 判断参数 DomainRuleIdList 是否已赋值
                     * @return DomainRuleIdList 是否已赋值
                     * 
                     */
                    bool DomainRuleIdListHasBeenSet() const;

                private:

                    /**
                     * 删除的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 删除的规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * WAF的版本，clb-waf代表负载均衡WAF、sparta-waf代表SaaS WAF，默认是sparta-waf。
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 批量删除的规则列表
                     */
                    std::vector<DomainRuleId> m_domainRuleIdList;
                    bool m_domainRuleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMRULEREQUEST_H_
