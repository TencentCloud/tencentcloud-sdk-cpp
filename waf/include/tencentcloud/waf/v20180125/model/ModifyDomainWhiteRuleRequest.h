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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINWHITERULEREQUEST_H_

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
                * ModifyDomainWhiteRule请求参数结构体
                */
                class ModifyDomainWhiteRuleRequest : public AbstractModel
                {
                public:
                    ModifyDomainWhiteRuleRequest();
                    ~ModifyDomainWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要更改的规则的域名
                     * @return Domain 需要更改的规则的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要更改的规则的域名
                     * @param _domain 需要更改的规则的域名
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
                     * 获取白名单id
                     * @return Id 白名单id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置白名单id
                     * @param _id 白名单id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则的id列表
                     * @return Rules 规则的id列表
                     * 
                     */
                    std::vector<uint64_t> GetRules() const;

                    /**
                     * 设置规则的id列表
                     * @param _rules 规则的id列表
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
                     * 获取规则匹配路径
                     * @return Url 规则匹配路径
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置规则匹配路径
                     * @param _url 规则匹配路径
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
                     * 获取规则匹配方法
                     * @return Function 规则匹配方法
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置规则匹配方法
                     * @param _function 规则匹配方法
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
                     * 获取规则的开关状态，0表示关闭开关，1表示打开开关
                     * @return Status 规则的开关状态，0表示关闭开关，1表示打开开关
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则的开关状态，0表示关闭开关，1表示打开开关
                     * @param _status 规则的开关状态，0表示关闭开关，1表示打开开关
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
                     * 需要更改的规则的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 白名单id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则的id列表
                     */
                    std::vector<uint64_t> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 规则匹配路径
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 规则匹配方法
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 规则的开关状态，0表示关闭开关，1表示打开开关
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINWHITERULEREQUEST_H_
