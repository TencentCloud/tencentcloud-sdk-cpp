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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTINFO_H_

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
                * 域名解析量统计信息
                */
                class ResolveCountInfo : public AbstractModel
                {
                public:
                    ResolveCountInfo();
                    ~ResolveCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前统计周期解析量总计
                     * @return DnsTotal 当前统计周期解析量总计
                     * 
                     */
                    uint64_t GetDnsTotal() const;

                    /**
                     * 设置当前统计周期解析量总计
                     * @param _dnsTotal 当前统计周期解析量总计
                     * 
                     */
                    void SetDnsTotal(const uint64_t& _dnsTotal);

                    /**
                     * 判断参数 DnsTotal 是否已赋值
                     * @return DnsTotal 是否已赋值
                     * 
                     */
                    bool DnsTotalHasBeenSet() const;

                    /**
                     * 获取当前查询的域名
                     * @return Domain 当前查询的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置当前查询的域名
                     * @param _domain 当前查询的域名
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
                     * 获取当前统计周期开始时间
                     * @return StartDate 当前统计周期开始时间
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置当前统计周期开始时间
                     * @param _startDate 当前统计周期开始时间
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
                     * 获取当前统计周期结束时间
                     * @return EndDate 当前统计周期结束时间
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置当前统计周期结束时间
                     * @param _endDate 当前统计周期结束时间
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
                     * 获取当前统计的子域名
                     * @return SubDomain 当前统计的子域名
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置当前统计的子域名
                     * @param _subDomain 当前统计的子域名
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取数据统计格式，取值为minute、hour、day，分别表示按十分钟、小时、天统计数据
                     * @return DnsFormat 数据统计格式，取值为minute、hour、day，分别表示按十分钟、小时、天统计数据
                     * 
                     */
                    std::string GetDnsFormat() const;

                    /**
                     * 设置数据统计格式，取值为minute、hour、day，分别表示按十分钟、小时、天统计数据
                     * @param _dnsFormat 数据统计格式，取值为minute、hour、day，分别表示按十分钟、小时、天统计数据
                     * 
                     */
                    void SetDnsFormat(const std::string& _dnsFormat);

                    /**
                     * 判断参数 DnsFormat 是否已赋值
                     * @return DnsFormat 是否已赋值
                     * 
                     */
                    bool DnsFormatHasBeenSet() const;

                private:

                    /**
                     * 当前统计周期解析量总计
                     */
                    uint64_t m_dnsTotal;
                    bool m_dnsTotalHasBeenSet;

                    /**
                     * 当前查询的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 当前统计周期开始时间
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 当前统计周期结束时间
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 当前统计的子域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 数据统计格式，取值为minute、hour、day，分别表示按十分钟、小时、天统计数据
                     */
                    std::string m_dnsFormat;
                    bool m_dnsFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTINFO_H_
