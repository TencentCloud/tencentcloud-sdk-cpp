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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINWHITERULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINWHITERULESREQUEST_H_

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
                * DescribeDomainWhiteRules请求参数结构体
                */
                class DescribeDomainWhiteRulesRequest : public AbstractModel
                {
                public:
                    DescribeDomainWhiteRulesRequest();
                    ~DescribeDomainWhiteRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的域名
                     * @return Domain 需要查询的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要查询的域名
                     * @param _domain 需要查询的域名
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
                     * 获取请求的白名单匹配路径
                     * @return Url 请求的白名单匹配路径
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求的白名单匹配路径
                     * @param _url 请求的白名单匹配路径
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
                     * 获取翻到多少页
                     * @return Page 翻到多少页
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置翻到多少页
                     * @param _page 翻到多少页
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页展示的条数
                     * @return Count 每页展示的条数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置每页展示的条数
                     * @param _count 每页展示的条数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取排序方式,desc表示降序，asc表示升序
                     * @return Sort 排序方式,desc表示降序，asc表示升序
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序方式,desc表示降序，asc表示升序
                     * @param _sort 排序方式,desc表示降序，asc表示升序
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 需要查询的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 请求的白名单匹配路径
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 翻到多少页
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页展示的条数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 排序方式,desc表示降序，asc表示升序
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINWHITERULESREQUEST_H_
