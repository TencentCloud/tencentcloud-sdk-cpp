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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 域名解析量统计查询信息
                */
                class DomainAnalyticsInfo : public AbstractModel
                {
                public:
                    DomainAnalyticsInfo();
                    ~DomainAnalyticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DATE:按天维度统计 HOUR:按小时维度统计</p>
                     * @return DnsFormat <p>DATE:按天维度统计 HOUR:按小时维度统计</p>
                     * @deprecated
                     */
                    std::string GetDnsFormat() const;

                    /**
                     * 设置<p>DATE:按天维度统计 HOUR:按小时维度统计</p>
                     * @param _dnsFormat <p>DATE:按天维度统计 HOUR:按小时维度统计</p>
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
                     * 获取<p>当前统计周期解析量总计</p>
                     * @return DnsTotal <p>当前统计周期解析量总计</p>
                     * @deprecated
                     */
                    uint64_t GetDnsTotal() const;

                    /**
                     * 设置<p>当前统计周期解析量总计</p>
                     * @param _dnsTotal <p>当前统计周期解析量总计</p>
                     * @deprecated
                     */
                    void SetDnsTotal(const uint64_t& _dnsTotal);

                    /**
                     * 判断参数 DnsTotal 是否已赋值
                     * @return DnsTotal 是否已赋值
                     * @deprecated
                     */
                    bool DnsTotalHasBeenSet() const;

                    /**
                     * 获取<p>当前查询的域名</p>
                     * @return Domain <p>当前查询的域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>当前查询的域名</p>
                     * @param _domain <p>当前查询的域名</p>
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
                     * 获取<p>当前统计周期开始时间</p>
                     * @return StartDate <p>当前统计周期开始时间</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>当前统计周期开始时间</p>
                     * @param _startDate <p>当前统计周期开始时间</p>
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
                     * 获取<p>当前统计周期结束时间</p>
                     * @return EndDate <p>当前统计周期结束时间</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>当前统计周期结束时间</p>
                     * @param _endDate <p>当前统计周期结束时间</p>
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
                     * 获取<p>解析量数据格式</p><p>枚举值：</p><ul><li>DATE： 按天维度统计</li><li>HOUR： 按小时维度统计</li></ul>
                     * @return DNSFormat <p>解析量数据格式</p><p>枚举值：</p><ul><li>DATE： 按天维度统计</li><li>HOUR： 按小时维度统计</li></ul>
                     * 
                     */
                    std::string GetDNSFormat() const;

                    /**
                     * 设置<p>解析量数据格式</p><p>枚举值：</p><ul><li>DATE： 按天维度统计</li><li>HOUR： 按小时维度统计</li></ul>
                     * @param _dNSFormat <p>解析量数据格式</p><p>枚举值：</p><ul><li>DATE： 按天维度统计</li><li>HOUR： 按小时维度统计</li></ul>
                     * 
                     */
                    void SetDNSFormat(const std::string& _dNSFormat);

                    /**
                     * 判断参数 DNSFormat 是否已赋值
                     * @return DNSFormat 是否已赋值
                     * 
                     */
                    bool DNSFormatHasBeenSet() const;

                    /**
                     * 获取<p>当前统计周期解析量总计</p>
                     * @return DNSTotal <p>当前统计周期解析量总计</p>
                     * 
                     */
                    uint64_t GetDNSTotal() const;

                    /**
                     * 设置<p>当前统计周期解析量总计</p>
                     * @param _dNSTotal <p>当前统计周期解析量总计</p>
                     * 
                     */
                    void SetDNSTotal(const uint64_t& _dNSTotal);

                    /**
                     * 判断参数 DNSTotal 是否已赋值
                     * @return DNSTotal 是否已赋值
                     * 
                     */
                    bool DNSTotalHasBeenSet() const;

                private:

                    /**
                     * <p>DATE:按天维度统计 HOUR:按小时维度统计</p>
                     */
                    std::string m_dnsFormat;
                    bool m_dnsFormatHasBeenSet;

                    /**
                     * <p>当前统计周期解析量总计</p>
                     */
                    uint64_t m_dnsTotal;
                    bool m_dnsTotalHasBeenSet;

                    /**
                     * <p>当前查询的域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>当前统计周期开始时间</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>当前统计周期结束时间</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>解析量数据格式</p><p>枚举值：</p><ul><li>DATE： 按天维度统计</li><li>HOUR： 按小时维度统计</li></ul>
                     */
                    std::string m_dNSFormat;
                    bool m_dNSFormatHasBeenSet;

                    /**
                     * <p>当前统计周期解析量总计</p>
                     */
                    uint64_t m_dNSTotal;
                    bool m_dNSTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSINFO_H_
