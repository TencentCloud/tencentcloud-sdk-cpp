/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERESOLVECOUNTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERESOLVECOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeResolveCount请求参数结构体
                */
                class DescribeResolveCountRequest : public AbstractModel
                {
                public:
                    DescribeResolveCountRequest();
                    ~DescribeResolveCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要查询解析量的域名</p>
                     * @return Domain <p>要查询解析量的域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>要查询解析量的域名</p>
                     * @param _domain <p>要查询解析量的域名</p>
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
                     * 获取<p>查询的开始时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * @return StartDate <p>查询的开始时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>查询的开始时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * @param _startDate <p>查询的开始时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>查询的结束时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * @return EndDate <p>查询的结束时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>查询的结束时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * @param _endDate <p>查询的结束时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul>
                     * @return DnsFormat <p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul>
                     * @deprecated
                     */
                    std::string GetDnsFormat() const;

                    /**
                     * 设置<p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul>
                     * @param _dnsFormat <p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul>
                     * @deprecated
                     */
                    void SetDnsFormat(const std::string& _dnsFormat);

                    /**
                     * 判断参数 DnsFormat 是否已赋值
                     * @return DnsFormat 是否已赋值
                     * @deprecated
                     */
                    bool DnsFormatHasBeenSet() const;

                    /**
                     * 获取<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * @return DomainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * @param _domainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取<p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul><p>新增规范参数，同时传递DNSFormat和DnsFormat参数时，后端优先使用DNSFormat参数</p>
                     * @return DNSFormat <p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul><p>新增规范参数，同时传递DNSFormat和DnsFormat参数时，后端优先使用DNSFormat参数</p>
                     * 
                     */
                    std::string GetDNSFormat() const;

                    /**
                     * 设置<p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul><p>新增规范参数，同时传递DNSFormat和DnsFormat参数时，后端优先使用DNSFormat参数</p>
                     * @param _dNSFormat <p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul><p>新增规范参数，同时传递DNSFormat和DnsFormat参数时，后端优先使用DNSFormat参数</p>
                     * 
                     */
                    void SetDNSFormat(const std::string& _dNSFormat);

                    /**
                     * 判断参数 DNSFormat 是否已赋值
                     * @return DNSFormat 是否已赋值
                     * 
                     */
                    bool DNSFormatHasBeenSet() const;

                private:

                    /**
                     * <p>要查询解析量的域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>查询的开始时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>查询的结束时间，格式：YYYY-MM-DD，最多允许查询最近32天的数据。</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul>
                     */
                    std::string m_dnsFormat;
                    bool m_dnsFormatHasBeenSet;

                    /**
                     * <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>数据统计格式</p><p>枚举值：</p><ul><li>minute： 按十分钟维度统计数据</li><li>hour： 按小时维度统计数据</li><li>day： 按天维度统计数据</li></ul><p>新增规范参数，同时传递DNSFormat和DnsFormat参数时，后端优先使用DNSFormat参数</p>
                     */
                    std::string m_dNSFormat;
                    bool m_dNSFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERESOLVECOUNTREQUEST_H_
