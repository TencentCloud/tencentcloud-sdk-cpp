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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTIINFOLEAKAGERULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTIINFOLEAKAGERULESREQUEST_H_

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
                * DescribeAntiInfoLeakageRules请求参数结构体
                */
                class DescribeAntiInfoLeakageRulesRequest : public AbstractModel
                {
                public:
                    DescribeAntiInfoLeakageRulesRequest();
                    ~DescribeAntiInfoLeakageRulesRequest() = default;
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
                     * 获取翻页支持，读取偏移
                     * @return Offset 翻页支持，读取偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页支持，读取偏移
                     * @param _offset 翻页支持，读取偏移
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
                     * 获取翻页支持，读取长度限制
                     * @return Limit 翻页支持，读取长度限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页支持，读取长度限制
                     * @param _limit 翻页支持，读取长度限制
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
                     * 获取排序方式，asc或者desc
                     * @return Order 排序方式，asc或者desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，asc或者desc
                     * @param _order 排序方式，asc或者desc
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
                     * 获取过滤器,可以允许如下的值：
RuleId,Match_field,Name,Action,Status
                     * @return Filters 过滤器,可以允许如下的值：
RuleId,Match_field,Name,Action,Status
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置过滤器,可以允许如下的值：
RuleId,Match_field,Name,Action,Status
                     * @param _filters 过滤器,可以允许如下的值：
RuleId,Match_field,Name,Action,Status
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 翻页支持，读取偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页支持，读取长度限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式，asc或者desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 过滤器,可以允许如下的值：
RuleId,Match_field,Name,Action,Status
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTIINFOLEAKAGERULESREQUEST_H_
