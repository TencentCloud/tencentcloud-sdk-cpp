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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINSANALYTICSFILEREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINSANALYTICSFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/SubDomainsAnalyticsParamsItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateSubDomainsAnalyticsFile请求参数结构体
                */
                class CreateSubDomainsAnalyticsFileRequest : public AbstractModel
                {
                public:
                    CreateSubDomainsAnalyticsFileRequest();
                    ~CreateSubDomainsAnalyticsFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询解析量的域名数组。
                     * @return Domains 需要查询解析量的域名数组。
                     * 
                     */
                    std::vector<SubDomainsAnalyticsParamsItem> GetDomains() const;

                    /**
                     * 设置需要查询解析量的域名数组。
                     * @param _domains 需要查询解析量的域名数组。
                     * 
                     */
                    void SetDomains(const std::vector<SubDomainsAnalyticsParamsItem>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取查询解析量的时间区间起点。如：2023-01-01。
                     * @return StartDate 查询解析量的时间区间起点。如：2023-01-01。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询解析量的时间区间起点。如：2023-01-01。
                     * @param _startDate 查询解析量的时间区间起点。如：2023-01-01。
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
                     * 获取查询解析量子域名类型。
1：子域名
2：无解析量子域名
                     * @return SubDomainType 查询解析量子域名类型。
1：子域名
2：无解析量子域名
                     * 
                     */
                    uint64_t GetSubDomainType() const;

                    /**
                     * 设置查询解析量子域名类型。
1：子域名
2：无解析量子域名
                     * @param _subDomainType 查询解析量子域名类型。
1：子域名
2：无解析量子域名
                     * 
                     */
                    void SetSubDomainType(const uint64_t& _subDomainType);

                    /**
                     * 判断参数 SubDomainType 是否已赋值
                     * @return SubDomainType 是否已赋值
                     * 
                     */
                    bool SubDomainTypeHasBeenSet() const;

                    /**
                     * 获取查询解析量的统计维度。默认为 DATE。
DATE：按天统计
HOUR：按小时统计
                     * @return DNSFormat 查询解析量的统计维度。默认为 DATE。
DATE：按天统计
HOUR：按小时统计
                     * 
                     */
                    std::string GetDNSFormat() const;

                    /**
                     * 设置查询解析量的统计维度。默认为 DATE。
DATE：按天统计
HOUR：按小时统计
                     * @param _dNSFormat 查询解析量的统计维度。默认为 DATE。
DATE：按天统计
HOUR：按小时统计
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
                     * 获取查询解析量的时间区间终点。如：2023-01-01。默认为当天。
                     * @return EndDate 查询解析量的时间区间终点。如：2023-01-01。默认为当天。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询解析量的时间区间终点。如：2023-01-01。默认为当天。
                     * @param _endDate 查询解析量的时间区间终点。如：2023-01-01。默认为当天。
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * 需要查询解析量的域名数组。
                     */
                    std::vector<SubDomainsAnalyticsParamsItem> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 查询解析量的时间区间起点。如：2023-01-01。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询解析量子域名类型。
1：子域名
2：无解析量子域名
                     */
                    uint64_t m_subDomainType;
                    bool m_subDomainTypeHasBeenSet;

                    /**
                     * 查询解析量的统计维度。默认为 DATE。
DATE：按天统计
HOUR：按小时统计
                     */
                    std::string m_dNSFormat;
                    bool m_dNSFormatHasBeenSet;

                    /**
                     * 查询解析量的时间区间终点。如：2023-01-01。默认为当天。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATESUBDOMAINSANALYTICSFILEREQUEST_H_
