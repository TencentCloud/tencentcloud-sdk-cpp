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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyGroupStatistics请求参数结构体
                */
                class DescribeProxyGroupStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeProxyGroupStatisticsRequest();
                    ~DescribeProxyGroupStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道组ID</p>
                     * @return GroupId <p>通道组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>通道组ID</p>
                     * @param _groupId <p>通道组ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>起始时间</p>
                     * @return StartTime <p>起始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>起始时间</p>
                     * @param _startTime <p>起始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets</p>
                     * @return MetricNames <p>统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets</p>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets</p>
                     * @param _metricNames <p>统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets</p>
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取<p>监控粒度，目前支持60，300，3600，86400，单位：秒。当时间范围不超过1天，支持最小粒度60秒；当时间范围不超过7天，支持最小粒度3600秒；当时间范围不超过30天，支持最小粒度86400秒。</p>
                     * @return Granularity <p>监控粒度，目前支持60，300，3600，86400，单位：秒。当时间范围不超过1天，支持最小粒度60秒；当时间范围不超过7天，支持最小粒度3600秒；当时间范围不超过30天，支持最小粒度86400秒。</p>
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置<p>监控粒度，目前支持60，300，3600，86400，单位：秒。当时间范围不超过1天，支持最小粒度60秒；当时间范围不超过7天，支持最小粒度3600秒；当时间范围不超过30天，支持最小粒度86400秒。</p>
                     * @param _granularity <p>监控粒度，目前支持60，300，3600，86400，单位：秒。当时间范围不超过1天，支持最小粒度60秒；当时间范围不超过7天，支持最小粒度3600秒；当时间范围不超过30天，支持最小粒度86400秒。</p>
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * <p>通道组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>起始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets</p>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>监控粒度，目前支持60，300，3600，86400，单位：秒。当时间范围不超过1天，支持最小粒度60秒；当时间范围不超过7天，支持最小粒度3600秒；当时间范围不超过30天，支持最小粒度86400秒。</p>
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPSTATISTICSREQUEST_H_
