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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULELISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCustomRuleList请求参数结构体
                */
                class DescribeCustomRuleListRequest : public AbstractModel
                {
                public:
                    DescribeCustomRuleListRequest();
                    ~DescribeCustomRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取容量
                     * @return Limit 容量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置容量
                     * @param _limit 容量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤数组,name可以是如下的值： RuleID,RuleName,Match
                     * @return Filters 过滤数组,name可以是如下的值： RuleID,RuleName,Match
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置过滤数组,name可以是如下的值： RuleID,RuleName,Match
                     * @param _filters 过滤数组,name可以是如下的值： RuleID,RuleName,Match
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取asc或者desc
                     * @return Order asc或者desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置asc或者desc
                     * @param _order asc或者desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取exp_ts或者mod_ts
                     * @return By exp_ts或者mod_ts
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置exp_ts或者mod_ts
                     * @param _by exp_ts或者mod_ts
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取查询的域名列表,访问控制页面不用传
                     * @return DomainList 查询的域名列表,访问控制页面不用传
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置查询的域名列表,访问控制页面不用传
                     * @param _domainList 查询的域名列表,访问控制页面不用传
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 容量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤数组,name可以是如下的值： RuleID,RuleName,Match
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * asc或者desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * exp_ts或者mod_ts
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 查询的域名列表,访问控制页面不用传
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULELISTREQUEST_H_
