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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeOverviewL7Data请求参数结构体
                */
                class DescribeOverviewL7DataRequest : public AbstractModel
                {
                public:
                    DescribeOverviewL7DataRequest();
                    ~DescribeOverviewL7DataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RFC3339格式，客户端时间
                     * @return StartTime RFC3339格式，客户端时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置RFC3339格式，客户端时间
                     * @param StartTime RFC3339格式，客户端时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取RFC3339格式，客户端时间
                     * @return EndTime RFC3339格式，客户端时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置RFC3339格式，客户端时间
                     * @param EndTime RFC3339格式，客户端时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     * @return MetricNames 指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     * @param MetricNames 指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取时间间隔，选填{min, 5min, hour, day, week}
                     * @return Interval 时间间隔，选填{min, 5min, hour, day, week}
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置时间间隔，选填{min, 5min, hour, day, week}
                     * @param Interval 时间间隔，选填{min, 5min, hour, day, week}
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取ZoneId列表，仅在zone/domain维度下查询时该参数有效
                     * @return ZoneIds ZoneId列表，仅在zone/domain维度下查询时该参数有效
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置ZoneId列表，仅在zone/domain维度下查询时该参数有效
                     * @param ZoneIds ZoneId列表，仅在zone/domain维度下查询时该参数有效
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Domain列表，仅在domain维度下查询时该参数有效
                     * @return Domains Domain列表，仅在domain维度下查询时该参数有效
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Domain列表，仅在domain维度下查询时该参数有效
                     * @param Domains Domain列表，仅在domain维度下查询时该参数有效
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取协议类型， 选填{http,http2,https,all}
                     * @return Protocol 协议类型， 选填{http,http2,https,all}
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型， 选填{http,http2,https,all}
                     * @param Protocol 协议类型， 选填{http,http2,https,all}
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * RFC3339格式，客户端时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * RFC3339格式，客户端时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 时间间隔，选填{min, 5min, hour, day, week}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * ZoneId列表，仅在zone/domain维度下查询时该参数有效
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Domain列表，仅在domain维度下查询时该参数有效
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 协议类型， 选填{http,http2,https,all}
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
