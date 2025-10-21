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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeTimingL7OriginPullData请求参数结构体
                */
                class DescribeTimingL7OriginPullDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7OriginPullDataRequest();
                    ~DescribeTimingL7OriginPullDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param _startTime 开始时间。
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
                     * 获取结束时间。查询时间范围（`EndTime` - `StartTime`）需小于等于 31 天。
                     * @return EndTime 结束时间。查询时间范围（`EndTime` - `StartTime`）需小于等于 31 天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。查询时间范围（`EndTime` - `StartTime`）需小于等于 31 天。
                     * @param _endTime 结束时间。查询时间范围（`EndTime` - `StartTime`）需小于等于 31 天。
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
                     * 获取指标列表，取值有:
<li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps；</li>

                     * @return MetricNames 指标列表，取值有:
<li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps；</li>

                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标列表，取值有:
<li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps；</li>

                     * @param _metricNames 指标列表，取值有:
<li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps；</li>

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
                     * 获取站点 ID 集合，此参数必填。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * @return ZoneIds 站点 ID 集合，此参数必填。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点 ID 集合，此参数必填。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * @param _zoneIds 站点 ID 集合，此参数必填。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * @return Interval 查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * @param _interval 查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取过滤条件，详细的过滤条件如下：
<li>domain：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li>
                     * @return Filters 过滤条件，详细的过滤条件如下：
<li>domain：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置过滤条件，详细的过滤条件如下：
<li>domain：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li>
                     * @param _filters 过滤条件，详细的过滤条件如下：
<li>domain：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li>
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。查询时间范围（`EndTime` - `StartTime`）需小于等于 31 天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标列表，取值有:
<li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps；</li>

                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 站点 ID 集合，此参数必填。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 过滤条件，详细的过滤条件如下：
<li>domain：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_
