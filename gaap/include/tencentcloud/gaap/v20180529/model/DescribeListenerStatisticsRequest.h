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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERSTATISTICSREQUEST_H_

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
                * DescribeListenerStatistics请求参数结构体
                */
                class DescribeListenerStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeListenerStatisticsRequest();
                    ~DescribeListenerStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets。
                     * @return MetricNames 统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets。
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets。
                     * @param _metricNames 统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets。
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
                     * 获取监控粒度，目前支持300，3600，86400，单位：秒。
查询时间范围不超过1天，支持最小粒度300秒；
查询间范围不超过7天，支持最小粒度3600秒；
查询间范围超过7天，支持最小粒度86400秒。
                     * @return Granularity 监控粒度，目前支持300，3600，86400，单位：秒。
查询时间范围不超过1天，支持最小粒度300秒；
查询间范围不超过7天，支持最小粒度3600秒；
查询间范围超过7天，支持最小粒度86400秒。
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置监控粒度，目前支持300，3600，86400，单位：秒。
查询时间范围不超过1天，支持最小粒度300秒；
查询间范围不超过7天，支持最小粒度3600秒；
查询间范围超过7天，支持最小粒度86400秒。
                     * @param _granularity 监控粒度，目前支持300，3600，86400，单位：秒。
查询时间范围不超过1天，支持最小粒度300秒；
查询间范围不超过7天，支持最小粒度3600秒；
查询间范围超过7天，支持最小粒度86400秒。
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
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计指标名称列表，支持: 入带宽:InBandwidth, 出带宽:OutBandwidth, 并发:Concurrent, 入包量:InPackets, 出包量:OutPackets。
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 监控粒度，目前支持300，3600，86400，单位：秒。
查询时间范围不超过1天，支持最小粒度300秒；
查询间范围不超过7天，支持最小粒度3600秒；
查询间范围超过7天，支持最小粒度86400秒。
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBELISTENERSTATISTICSREQUEST_H_
