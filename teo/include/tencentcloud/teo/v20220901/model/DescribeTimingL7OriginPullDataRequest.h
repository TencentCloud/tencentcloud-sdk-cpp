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
                     * 获取指标列表，取值有:
<ul><li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps。</li></ul>
                     * @return MetricNames 指标列表，取值有:
<ul><li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标列表，取值有:
<ul><li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps。</li></ul>
                     * @param _metricNames 指标列表，取值有:
<ul><li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps。</li></ul>
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
                     * 获取查询时间粒度，取值有：
<ul><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * @return Interval 查询时间粒度，取值有：
<ul><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，取值有：
<ul><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * @param _interval 查询时间粒度，取值有：
<ul><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
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
<ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li><li><strong>originStatusCode</strong>：回源状态码，仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本过滤项。<br>对应的 Value 可选项如下：<ul><li><code>1xx</code>：1xx 类型的状态码；</li><li><code>2xx</code>：2xx 类型的状态码；</li><li><code>3xx</code>：3xx 类型的状态码；</li><li><code>4xx</code>：4xx 类型的状态码；</li><li><code>5xx</code>：5xx 类型的状态码；</li><li>在 <code>[0, 600)</code> 范围内的整数（不包括 600）。</li></ul></li></ul>
**注意**：当 <code>DimensionName</code>  不为空时，仅支持 <code>equals</code> 运算符。
                     * @return Filters 过滤条件，详细的过滤条件如下：
<ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li><li><strong>originStatusCode</strong>：回源状态码，仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本过滤项。<br>对应的 Value 可选项如下：<ul><li><code>1xx</code>：1xx 类型的状态码；</li><li><code>2xx</code>：2xx 类型的状态码；</li><li><code>3xx</code>：3xx 类型的状态码；</li><li><code>4xx</code>：4xx 类型的状态码；</li><li><code>5xx</code>：5xx 类型的状态码；</li><li>在 <code>[0, 600)</code> 范围内的整数（不包括 600）。</li></ul></li></ul>
**注意**：当 <code>DimensionName</code>  不为空时，仅支持 <code>equals</code> 运算符。
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置过滤条件，详细的过滤条件如下：
<ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li><li><strong>originStatusCode</strong>：回源状态码，仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本过滤项。<br>对应的 Value 可选项如下：<ul><li><code>1xx</code>：1xx 类型的状态码；</li><li><code>2xx</code>：2xx 类型的状态码；</li><li><code>3xx</code>：3xx 类型的状态码；</li><li><code>4xx</code>：4xx 类型的状态码；</li><li><code>5xx</code>：5xx 类型的状态码；</li><li>在 <code>[0, 600)</code> 范围内的整数（不包括 600）。</li></ul></li></ul>
**注意**：当 <code>DimensionName</code>  不为空时，仅支持 <code>equals</code> 运算符。
                     * @param _filters 过滤条件，详细的过滤条件如下：
<ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li><li><strong>originStatusCode</strong>：回源状态码，仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本过滤项。<br>对应的 Value 可选项如下：<ul><li><code>1xx</code>：1xx 类型的状态码；</li><li><code>2xx</code>：2xx 类型的状态码；</li><li><code>3xx</code>：3xx 类型的状态码；</li><li><code>4xx</code>：4xx 类型的状态码；</li><li><code>5xx</code>：5xx 类型的状态码；</li><li>在 <code>[0, 600)</code> 范围内的整数（不包括 600）。</li></ul></li></ul>
**注意**：当 <code>DimensionName</code>  不为空时，仅支持 <code>equals</code> 运算符。
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
                     * 获取<p>查询维度名称，取值有：</p><ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名。<br>使用 domain 维度时必须在 <code>Filters</code> 中包含 <code>domain</code> 过滤项，指定总数不超过 100 个需要查询的域名列表；</li><li><strong>origin-status-code</strong>：回源状态码，如 200、404，<br>仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本维度；</li><li><strong>origin-status-code-category</strong>：回源状态码类别，如 2xx、4xx，<br>仅当 <code>MetricNames =["l7Flow_request_hy"]</code> 时支持本维度。</li></ul><p>若 <code>DimensionName</code> 入参为空，默认按 <code>AppId</code> 维度汇总，只返回一组数据。</p><p>若 <code>DimensionName</code> 入参不为空，则按照传入的查询维度分组返回对应的时序数据。例如：</p><ul>当 <code>DimensionName = origin-status-code</code> 时：<ul><li>返回数据中 <code>TimingDataRecords.TypeKey</code> 为具体回源状态码，例如 200。</li><li>返回数据中 <code>TimingDataRecords.TypeValue</code> 是该状态码对应的时序数据。</li></ul></ul>
<strong>注意</strong>：当指定 DimensionName 查询时，禁止并发调用。若超出查询频率限制，会返回错误 <code><strong>InvalidParameter.ActionInProgress</strong></code> 。
                     * @return DimensionName <p>查询维度名称，取值有：</p><ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名。<br>使用 domain 维度时必须在 <code>Filters</code> 中包含 <code>domain</code> 过滤项，指定总数不超过 100 个需要查询的域名列表；</li><li><strong>origin-status-code</strong>：回源状态码，如 200、404，<br>仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本维度；</li><li><strong>origin-status-code-category</strong>：回源状态码类别，如 2xx、4xx，<br>仅当 <code>MetricNames =["l7Flow_request_hy"]</code> 时支持本维度。</li></ul><p>若 <code>DimensionName</code> 入参为空，默认按 <code>AppId</code> 维度汇总，只返回一组数据。</p><p>若 <code>DimensionName</code> 入参不为空，则按照传入的查询维度分组返回对应的时序数据。例如：</p><ul>当 <code>DimensionName = origin-status-code</code> 时：<ul><li>返回数据中 <code>TimingDataRecords.TypeKey</code> 为具体回源状态码，例如 200。</li><li>返回数据中 <code>TimingDataRecords.TypeValue</code> 是该状态码对应的时序数据。</li></ul></ul>
<strong>注意</strong>：当指定 DimensionName 查询时，禁止并发调用。若超出查询频率限制，会返回错误 <code><strong>InvalidParameter.ActionInProgress</strong></code> 。
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置<p>查询维度名称，取值有：</p><ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名。<br>使用 domain 维度时必须在 <code>Filters</code> 中包含 <code>domain</code> 过滤项，指定总数不超过 100 个需要查询的域名列表；</li><li><strong>origin-status-code</strong>：回源状态码，如 200、404，<br>仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本维度；</li><li><strong>origin-status-code-category</strong>：回源状态码类别，如 2xx、4xx，<br>仅当 <code>MetricNames =["l7Flow_request_hy"]</code> 时支持本维度。</li></ul><p>若 <code>DimensionName</code> 入参为空，默认按 <code>AppId</code> 维度汇总，只返回一组数据。</p><p>若 <code>DimensionName</code> 入参不为空，则按照传入的查询维度分组返回对应的时序数据。例如：</p><ul>当 <code>DimensionName = origin-status-code</code> 时：<ul><li>返回数据中 <code>TimingDataRecords.TypeKey</code> 为具体回源状态码，例如 200。</li><li>返回数据中 <code>TimingDataRecords.TypeValue</code> 是该状态码对应的时序数据。</li></ul></ul>
<strong>注意</strong>：当指定 DimensionName 查询时，禁止并发调用。若超出查询频率限制，会返回错误 <code><strong>InvalidParameter.ActionInProgress</strong></code> 。
                     * @param _dimensionName <p>查询维度名称，取值有：</p><ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名。<br>使用 domain 维度时必须在 <code>Filters</code> 中包含 <code>domain</code> 过滤项，指定总数不超过 100 个需要查询的域名列表；</li><li><strong>origin-status-code</strong>：回源状态码，如 200、404，<br>仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本维度；</li><li><strong>origin-status-code-category</strong>：回源状态码类别，如 2xx、4xx，<br>仅当 <code>MetricNames =["l7Flow_request_hy"]</code> 时支持本维度。</li></ul><p>若 <code>DimensionName</code> 入参为空，默认按 <code>AppId</code> 维度汇总，只返回一组数据。</p><p>若 <code>DimensionName</code> 入参不为空，则按照传入的查询维度分组返回对应的时序数据。例如：</p><ul>当 <code>DimensionName = origin-status-code</code> 时：<ul><li>返回数据中 <code>TimingDataRecords.TypeKey</code> 为具体回源状态码，例如 200。</li><li>返回数据中 <code>TimingDataRecords.TypeValue</code> 是该状态码对应的时序数据。</li></ul></ul>
<strong>注意</strong>：当指定 DimensionName 查询时，禁止并发调用。若超出查询频率限制，会返回错误 <code><strong>InvalidParameter.ActionInProgress</strong></code> 。
                     * 
                     */
                    void SetDimensionName(const std::string& _dimensionName);

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                private:

                    /**
                     * 站点 ID 集合，此参数必填。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 指标列表，取值有:
<ul><li>l7Flow_outFlux_hy: EdgeOne 节点至源站方向的请求流量，单位：Byte；</li>
<li>l7Flow_outBandwidth_hy: EdgeOne 节点至源站方向的请求带宽，单位：bps；</li>
<li>l7Flow_request_hy: EdgeOne 节点至源站方向的请求数，单位：次。</li>
<li>l7Flow_inFlux_hy: 源站至 EdgeOne 节点方向的响应流量，单位：Byte；</li>
<li>l7Flow_inBandwidth_hy: 源站至 EdgeOne 节点方向的响应带宽，单位：bps。</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

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
                     * 查询时间粒度，取值有：
<ul><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 过滤条件，详细的过滤条件如下：
<ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名，而不是具体域名。</li><li><strong>originStatusCode</strong>：回源状态码，仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本过滤项。<br>对应的 Value 可选项如下：<ul><li><code>1xx</code>：1xx 类型的状态码；</li><li><code>2xx</code>：2xx 类型的状态码；</li><li><code>3xx</code>：3xx 类型的状态码；</li><li><code>4xx</code>：4xx 类型的状态码；</li><li><code>5xx</code>：5xx 类型的状态码；</li><li>在 <code>[0, 600)</code> 范围内的整数（不包括 600）。</li></ul></li></ul>
**注意**：当 <code>DimensionName</code>  不为空时，仅支持 <code>equals</code> 运算符。
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询维度名称，取值有：</p><ul><li><strong>domain</strong>：客户端请求的域名。若按泛域名接入 EdgeOne，则数据中记录为泛域名。<br>使用 domain 维度时必须在 <code>Filters</code> 中包含 <code>domain</code> 过滤项，指定总数不超过 100 个需要查询的域名列表；</li><li><strong>origin-status-code</strong>：回源状态码，如 200、404，<br>仅当 <code>MetricNames = ["l7Flow_request_hy"]</code> 时支持本维度；</li><li><strong>origin-status-code-category</strong>：回源状态码类别，如 2xx、4xx，<br>仅当 <code>MetricNames =["l7Flow_request_hy"]</code> 时支持本维度。</li></ul><p>若 <code>DimensionName</code> 入参为空，默认按 <code>AppId</code> 维度汇总，只返回一组数据。</p><p>若 <code>DimensionName</code> 入参不为空，则按照传入的查询维度分组返回对应的时序数据。例如：</p><ul>当 <code>DimensionName = origin-status-code</code> 时：<ul><li>返回数据中 <code>TimingDataRecords.TypeKey</code> 为具体回源状态码，例如 200。</li><li>返回数据中 <code>TimingDataRecords.TypeValue</code> 是该状态码对应的时序数据。</li></ul></ul>
<strong>注意</strong>：当指定 DimensionName 查询时，禁止并发调用。若超出查询频率限制，会返回错误 <code><strong>InvalidParameter.ActionInProgress</strong></code> 。
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_
