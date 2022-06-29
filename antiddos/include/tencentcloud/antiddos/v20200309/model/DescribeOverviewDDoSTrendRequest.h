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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeOverviewDDoSTrend请求参数结构体
                */
                class DescribeOverviewDDoSTrendRequest : public AbstractModel
                {
                public:
                    DescribeOverviewDDoSTrendRequest();
                    ~DescribeOverviewDDoSTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp-multip表示高防包；basic表示DDoS基础防护）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp-multip表示高防包；basic表示DDoS基础防护）
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp-multip表示高防包；basic表示DDoS基础防护）
                     * @param Business 大禹子产品代号（bgpip表示高防IP；bgp-multip表示高防包；basic表示DDoS基础防护）
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取统计粒度，取值[300(5分钟)，3600(小时)，86400(天)]
                     * @return Period 统计粒度，取值[300(5分钟)，3600(小时)，86400(天)]
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置统计粒度，取值[300(5分钟)，3600(小时)，86400(天)]
                     * @param Period 统计粒度，取值[300(5分钟)，3600(小时)，86400(天)]
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取统计开始时间
                     * @return StartTime 统计开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间
                     * @param StartTime 统计开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取统计结束时间
                     * @return EndTime 统计结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间
                     * @param EndTime 统计结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标，取值[bps(攻击流量带宽，pps(攻击包速率))]
                     * @return MetricName 指标，取值[bps(攻击流量带宽，pps(攻击包速率))]
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标，取值[bps(攻击流量带宽，pps(攻击包速率))]
                     * @param MetricName 指标，取值[bps(攻击流量带宽，pps(攻击包速率))]
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取资源实例的IP列表
                     * @return IpList 资源实例的IP列表
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置资源实例的IP列表
                     * @param IpList 资源实例的IP列表
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取资源实例ID
                     * @return Id 资源实例ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID
                     * @param Id 资源实例ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp-multip表示高防包；basic表示DDoS基础防护）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 统计粒度，取值[300(5分钟)，3600(小时)，86400(天)]
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 统计开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标，取值[bps(攻击流量带宽，pps(攻击包速率))]
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 资源实例的IP列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSTRENDREQUEST_H_
