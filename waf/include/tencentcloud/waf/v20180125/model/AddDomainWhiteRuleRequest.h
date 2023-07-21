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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDDOMAINWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDDOMAINWHITERULEREQUEST_H_

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
                * AddDomainWhiteRule请求参数结构体
                */
                class AddDomainWhiteRuleRequest : public AbstractModel
                {
                public:
                    AddDomainWhiteRuleRequest();
                    ~AddDomainWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要添加的域名
                     * @return Domain 需要添加的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要添加的域名
                     * @param _domain 需要添加的域名
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
                     * 获取需要添加的规则
                     * @return Rules 需要添加的规则
                     * 
                     */
                    std::vector<uint64_t> GetRules() const;

                    /**
                     * 设置需要添加的规则
                     * @param _rules 需要添加的规则
                     * 
                     */
                    void SetRules(const std::vector<uint64_t>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取需要添加的规则url
                     * @return Url 需要添加的规则url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置需要添加的规则url
                     * @param _url 需要添加的规则url
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
                     * 获取规则的方法
                     * @return Function 规则的方法
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置规则的方法
                     * @param _function 规则的方法
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取规则的开关，0表示规则关闭，1表示规则打开
                     * @return Status 规则的开关，0表示规则关闭，1表示规则打开
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则的开关，0表示规则关闭，1表示规则打开
                     * @param _status 规则的开关，0表示规则关闭，1表示规则打开
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 需要添加的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要添加的规则
                     */
                    std::vector<uint64_t> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 需要添加的规则url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 规则的方法
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 规则的开关，0表示规则关闭，1表示规则打开
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDDOMAINWHITERULEREQUEST_H_
