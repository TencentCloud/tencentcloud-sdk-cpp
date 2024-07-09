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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHISTOGRAMREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHISTOGRAMREQUEST_H_

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
                * DescribeHistogram请求参数结构体
                */
                class DescribeHistogramRequest : public AbstractModel
                {
                public:
                    DescribeHistogramRequest();
                    ~DescribeHistogramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间
                     * @return FromTime 起始时间
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置起始时间
                     * @param _fromTime 起始时间
                     * 
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return ToTime 结束时间
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置结束时间
                     * @param _toTime 结束时间
                     * 
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取聚类字段，ip为ip聚合，art为响应耗时聚合，url为url聚合，local为ip转化的城市聚合,qps为每秒请求数峰值的聚合，up为上行带宽峰值聚合，down为下行带峰值聚合
                     * @return QueryField 聚类字段，ip为ip聚合，art为响应耗时聚合，url为url聚合，local为ip转化的城市聚合,qps为每秒请求数峰值的聚合，up为上行带宽峰值聚合，down为下行带峰值聚合
                     * 
                     */
                    std::string GetQueryField() const;

                    /**
                     * 设置聚类字段，ip为ip聚合，art为响应耗时聚合，url为url聚合，local为ip转化的城市聚合,qps为每秒请求数峰值的聚合，up为上行带宽峰值聚合，down为下行带峰值聚合
                     * @param _queryField 聚类字段，ip为ip聚合，art为响应耗时聚合，url为url聚合，local为ip转化的城市聚合,qps为每秒请求数峰值的聚合，up为上行带宽峰值聚合，down为下行带峰值聚合
                     * 
                     */
                    void SetQueryField(const std::string& _queryField);

                    /**
                     * 判断参数 QueryField 是否已赋值
                     * @return QueryField 是否已赋值
                     * 
                     */
                    bool QueryFieldHasBeenSet() const;

                    /**
                     * 获取条件，access为访问日志，attack为攻击日志
                     * @return Source 条件，access为访问日志，attack为攻击日志
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置条件，access为访问日志，attack为攻击日志
                     * @param _source 条件，access为访问日志，attack为攻击日志
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取兼容Host，逐步淘汰Host字段
                     * @return Host 兼容Host，逐步淘汰Host字段
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置兼容Host，逐步淘汰Host字段
                     * @param _host 兼容Host，逐步淘汰Host字段
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @return Edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @param _edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF实例ID，不传则不过滤
                     * @return InstanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置WAF实例ID，不传则不过滤
                     * @param _instanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取域名过滤，不传则不过滤，用于替代Host字段，逐步淘汰Host
                     * @return Domain 域名过滤，不传则不过滤，用于替代Host字段，逐步淘汰Host
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名过滤，不传则不过滤，用于替代Host字段，逐步淘汰Host
                     * @param _domain 域名过滤，不传则不过滤，用于替代Host字段，逐步淘汰Host
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 起始时间
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * 聚类字段，ip为ip聚合，art为响应耗时聚合，url为url聚合，local为ip转化的城市聚合,qps为每秒请求数峰值的聚合，up为上行带宽峰值聚合，down为下行带峰值聚合
                     */
                    std::string m_queryField;
                    bool m_queryFieldHasBeenSet;

                    /**
                     * 条件，access为访问日志，attack为攻击日志
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 兼容Host，逐步淘汰Host字段
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF实例ID，不传则不过滤
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 域名过滤，不传则不过滤，用于替代Host字段，逐步淘汰Host
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHISTOGRAMREQUEST_H_
