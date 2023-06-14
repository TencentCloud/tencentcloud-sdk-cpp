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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7SOURCEDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7SOURCEDATAREQUEST_H_

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
                * DescribeTimingL7SourceData请求参数结构体
                */
                class DescribeTimingL7SourceDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7SourceDataRequest();
                    ~DescribeTimingL7SourceDataRequest() = default;
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
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param _endTime 结束时间。
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
<li>l7Flow_outFlux_hy: Edgeone请求流量；</li>
<li>l7Flow_outBandwidth_hy: Edgeone请求带宽；</li>
<li>l7Flow_inFlux_hy: 源站响应流量；</li>
<li>l7Flow_inBandwidth_hy: 源站响应带宽；</li>
<li>l7Flow_request_hy: 回源请求数；</li>
                     * @return MetricNames 指标列表，取值有:
<li>l7Flow_outFlux_hy: Edgeone请求流量；</li>
<li>l7Flow_outBandwidth_hy: Edgeone请求带宽；</li>
<li>l7Flow_inFlux_hy: 源站响应流量；</li>
<li>l7Flow_inBandwidth_hy: 源站响应带宽；</li>
<li>l7Flow_request_hy: 回源请求数；</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标列表，取值有:
<li>l7Flow_outFlux_hy: Edgeone请求流量；</li>
<li>l7Flow_outBandwidth_hy: Edgeone请求带宽；</li>
<li>l7Flow_inFlux_hy: 源站响应流量；</li>
<li>l7Flow_inBandwidth_hy: 源站响应带宽；</li>
<li>l7Flow_request_hy: 回源请求数；</li>
                     * @param _metricNames 指标列表，取值有:
<li>l7Flow_outFlux_hy: Edgeone请求流量；</li>
<li>l7Flow_outBandwidth_hy: Edgeone请求带宽；</li>
<li>l7Flow_inFlux_hy: 源站响应流量；</li>
<li>l7Flow_inBandwidth_hy: 源站响应带宽；</li>
<li>l7Flow_request_hy: 回源请求数；</li>
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
                     * 获取待查询的站点列表，此参数必填。
                     * @return ZoneIds 待查询的站点列表，此参数必填。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置待查询的站点列表，此参数必填。
                     * @param _zoneIds 待查询的站点列表，此参数必填。
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
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：一小时范围内以min粒度查询，两天范围内以5min粒度查询，七天范围内以hour粒度查询，超过七天以day粒度查询。
                     * @return Interval 查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：一小时范围内以min粒度查询，两天范围内以5min粒度查询，七天范围内以hour粒度查询，超过七天以day粒度查询。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：一小时范围内以min粒度查询，两天范围内以5min粒度查询，七天范围内以hour粒度查询，超过七天以day粒度查询。
                     * @param _interval 查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：一小时范围内以min粒度查询，两天范围内以5min粒度查询，七天范围内以hour粒度查询，超过七天以day粒度查询。
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
<li>domain<br>   按照【<strong>回源Host</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>origin<br>   按照【<strong>源站</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>originGroup<br>   按照【<strong>源站组</strong>】进行过滤，源站组形如：origin-xxxxx。<br>   类型：String<br>   必选：否</li>
<li>flowType<br>   按照【<strong>源站响应类型</strong>】进行过滤，优先级高于 MetricNames.N 参数。<br>   类型：String<br>   必选：否<br>   可选项：<br>   inFlow：源站响应流量，对应MetricNames中l7Flow_inFlux_hy、l7Flow_inBandwidth_hy、l7Flow_request_hy三个指标；<br>   outFlow：EdgeOne请求流量，对应MetricNames中l7Flow_outFlux_hy、l7Flow_outBandwidth_hy、l7Flow_request_hy三个指标。</li>
                     * @return Filters 过滤条件，详细的过滤条件如下：
<li>domain<br>   按照【<strong>回源Host</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>origin<br>   按照【<strong>源站</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>originGroup<br>   按照【<strong>源站组</strong>】进行过滤，源站组形如：origin-xxxxx。<br>   类型：String<br>   必选：否</li>
<li>flowType<br>   按照【<strong>源站响应类型</strong>】进行过滤，优先级高于 MetricNames.N 参数。<br>   类型：String<br>   必选：否<br>   可选项：<br>   inFlow：源站响应流量，对应MetricNames中l7Flow_inFlux_hy、l7Flow_inBandwidth_hy、l7Flow_request_hy三个指标；<br>   outFlow：EdgeOne请求流量，对应MetricNames中l7Flow_outFlux_hy、l7Flow_outBandwidth_hy、l7Flow_request_hy三个指标。</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置过滤条件，详细的过滤条件如下：
<li>domain<br>   按照【<strong>回源Host</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>origin<br>   按照【<strong>源站</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>originGroup<br>   按照【<strong>源站组</strong>】进行过滤，源站组形如：origin-xxxxx。<br>   类型：String<br>   必选：否</li>
<li>flowType<br>   按照【<strong>源站响应类型</strong>】进行过滤，优先级高于 MetricNames.N 参数。<br>   类型：String<br>   必选：否<br>   可选项：<br>   inFlow：源站响应流量，对应MetricNames中l7Flow_inFlux_hy、l7Flow_inBandwidth_hy、l7Flow_request_hy三个指标；<br>   outFlow：EdgeOne请求流量，对应MetricNames中l7Flow_outFlux_hy、l7Flow_outBandwidth_hy、l7Flow_request_hy三个指标。</li>
                     * @param _filters 过滤条件，详细的过滤条件如下：
<li>domain<br>   按照【<strong>回源Host</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>origin<br>   按照【<strong>源站</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>originGroup<br>   按照【<strong>源站组</strong>】进行过滤，源站组形如：origin-xxxxx。<br>   类型：String<br>   必选：否</li>
<li>flowType<br>   按照【<strong>源站响应类型</strong>】进行过滤，优先级高于 MetricNames.N 参数。<br>   类型：String<br>   必选：否<br>   可选项：<br>   inFlow：源站响应流量，对应MetricNames中l7Flow_inFlux_hy、l7Flow_inBandwidth_hy、l7Flow_request_hy三个指标；<br>   outFlow：EdgeOne请求流量，对应MetricNames中l7Flow_outFlux_hy、l7Flow_outBandwidth_hy、l7Flow_request_hy三个指标。</li>
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据。</li>不填默认取值为global。
                     * @return Area 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据。</li>不填默认取值为global。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据。</li>不填默认取值为global。
                     * @param _area 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据。</li>不填默认取值为global。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标列表，取值有:
<li>l7Flow_outFlux_hy: Edgeone请求流量；</li>
<li>l7Flow_outBandwidth_hy: Edgeone请求带宽；</li>
<li>l7Flow_inFlux_hy: 源站响应流量；</li>
<li>l7Flow_inBandwidth_hy: 源站响应带宽；</li>
<li>l7Flow_request_hy: 回源请求数；</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 待查询的站点列表，此参数必填。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 查询时间粒度，取值有：
<li>min: 1分钟；</li>
<li>5min: 5分钟；</li>
<li>hour: 1小时；</li>
<li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：一小时范围内以min粒度查询，两天范围内以5min粒度查询，七天范围内以hour粒度查询，超过七天以day粒度查询。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 过滤条件，详细的过滤条件如下：
<li>domain<br>   按照【<strong>回源Host</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>origin<br>   按照【<strong>源站</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>originGroup<br>   按照【<strong>源站组</strong>】进行过滤，源站组形如：origin-xxxxx。<br>   类型：String<br>   必选：否</li>
<li>flowType<br>   按照【<strong>源站响应类型</strong>】进行过滤，优先级高于 MetricNames.N 参数。<br>   类型：String<br>   必选：否<br>   可选项：<br>   inFlow：源站响应流量，对应MetricNames中l7Flow_inFlux_hy、l7Flow_inBandwidth_hy、l7Flow_request_hy三个指标；<br>   outFlow：EdgeOne请求流量，对应MetricNames中l7Flow_outFlux_hy、l7Flow_outBandwidth_hy、l7Flow_request_hy三个指标。</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据；</li>
<li>global：全球数据。</li>不填默认取值为global。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7SOURCEDATAREQUEST_H_
