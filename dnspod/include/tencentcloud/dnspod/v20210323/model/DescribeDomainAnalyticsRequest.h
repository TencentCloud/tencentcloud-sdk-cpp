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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANALYTICSREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANALYTICSREQUEST_H_

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
                * DescribeDomainAnalytics请求参数结构体
                */
                class DescribeDomainAnalyticsRequest : public AbstractModel
                {
                public:
                    DescribeDomainAnalyticsRequest();
                    ~DescribeDomainAnalyticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询解析量的域名
                     * @return Domain 要查询解析量的域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置要查询解析量的域名
                     * @param Domain 要查询解析量的域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取查询的开始时间，格式：YYYY-MM-DD
                     * @return StartDate 查询的开始时间，格式：YYYY-MM-DD
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询的开始时间，格式：YYYY-MM-DD
                     * @param StartDate 查询的开始时间，格式：YYYY-MM-DD
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取查询的结束时间，格式：YYYY-MM-DD
                     * @return EndDate 查询的结束时间，格式：YYYY-MM-DD
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询的结束时间，格式：YYYY-MM-DD
                     * @param EndDate 查询的结束时间，格式：YYYY-MM-DD
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取DATE:按天维度统计 HOUR:按小时维度统计
                     * @return DnsFormat DATE:按天维度统计 HOUR:按小时维度统计
                     */
                    std::string GetDnsFormat() const;

                    /**
                     * 设置DATE:按天维度统计 HOUR:按小时维度统计
                     * @param DnsFormat DATE:按天维度统计 HOUR:按小时维度统计
                     */
                    void SetDnsFormat(const std::string& _dnsFormat);

                    /**
                     * 判断参数 DnsFormat 是否已赋值
                     * @return DnsFormat 是否已赋值
                     */
                    bool DnsFormatHasBeenSet() const;

                    /**
                     * 获取域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @return DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     * @param DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 要查询解析量的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 查询的开始时间，格式：YYYY-MM-DD
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询的结束时间，格式：YYYY-MM-DD
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * DATE:按天维度统计 HOUR:按小时维度统计
                     */
                    std::string m_dnsFormat;
                    bool m_dnsFormatHasBeenSet;

                    /**
                     * 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANALYTICSREQUEST_H_
