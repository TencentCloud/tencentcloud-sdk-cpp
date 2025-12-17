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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_

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
                * DescribeTopL7AnalysisData请求参数结构体
                */
                class DescribeTopL7AnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeTopL7AnalysisDataRequest();
                    ~DescribeTopL7AnalysisDataRequest() = default;
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
                     * 获取查询的指标，取值有：
<li> l7Flow_outFlux_country：按国家/地区维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_province：按中国大陆境内省份维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_statusCode：按状态码维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_domain：按域名维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_url：按 URL Path 维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_resourceType：按资源类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_sip：按客户端 IP 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_referers：按 Referer 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_device：按设备类型维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_ua_browser：按浏览器类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_os：按操作系统类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua：按 User-Agent 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_request_country：按国家/地区维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_province：按中国大陆境内省份维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_statusCode：按状态码维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_domain：按域名维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_url：按 URL Path 维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_resourceType：按资源类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_sip：按客户端 IP 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_referers：按 Referer 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_device：按设备类型维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_ua_browser：按浏览器类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_os：按操作系统类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua：按 User-Agent 维度统计 L7 访问请求数指标。</li>
                     * @return MetricName 查询的指标，取值有：
<li> l7Flow_outFlux_country：按国家/地区维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_province：按中国大陆境内省份维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_statusCode：按状态码维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_domain：按域名维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_url：按 URL Path 维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_resourceType：按资源类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_sip：按客户端 IP 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_referers：按 Referer 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_device：按设备类型维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_ua_browser：按浏览器类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_os：按操作系统类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua：按 User-Agent 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_request_country：按国家/地区维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_province：按中国大陆境内省份维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_statusCode：按状态码维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_domain：按域名维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_url：按 URL Path 维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_resourceType：按资源类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_sip：按客户端 IP 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_referers：按 Referer 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_device：按设备类型维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_ua_browser：按浏览器类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_os：按操作系统类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua：按 User-Agent 维度统计 L7 访问请求数指标。</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置查询的指标，取值有：
<li> l7Flow_outFlux_country：按国家/地区维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_province：按中国大陆境内省份维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_statusCode：按状态码维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_domain：按域名维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_url：按 URL Path 维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_resourceType：按资源类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_sip：按客户端 IP 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_referers：按 Referer 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_device：按设备类型维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_ua_browser：按浏览器类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_os：按操作系统类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua：按 User-Agent 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_request_country：按国家/地区维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_province：按中国大陆境内省份维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_statusCode：按状态码维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_domain：按域名维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_url：按 URL Path 维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_resourceType：按资源类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_sip：按客户端 IP 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_referers：按 Referer 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_device：按设备类型维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_ua_browser：按浏览器类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_os：按操作系统类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua：按 User-Agent 维度统计 L7 访问请求数指标。</li>
                     * @param _metricName 查询的指标，取值有：
<li> l7Flow_outFlux_country：按国家/地区维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_province：按中国大陆境内省份维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_statusCode：按状态码维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_domain：按域名维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_url：按 URL Path 维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_resourceType：按资源类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_sip：按客户端 IP 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_referers：按 Referer 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_device：按设备类型维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_ua_browser：按浏览器类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_os：按操作系统类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua：按 User-Agent 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_request_country：按国家/地区维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_province：按中国大陆境内省份维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_statusCode：按状态码维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_domain：按域名维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_url：按 URL Path 维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_resourceType：按资源类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_sip：按客户端 IP 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_referers：按 Referer 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_device：按设备类型维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_ua_browser：按浏览器类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_os：按操作系统类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua：按 User-Agent 维度统计 L7 访问请求数指标。</li>
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * @return ZoneIds 站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * @param _zoneIds 站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
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
                     * 获取查询前多少个 top 数据，最大值为1000。不填默认为10，表示查询 top10 的数据。
                     * @return Limit 查询前多少个 top 数据，最大值为1000。不填默认为10，表示查询 top10 的数据。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询前多少个 top 数据，最大值为1000。不填默认为10，表示查询 top10 的数据。
                     * @param _limit 查询前多少个 top 数据，最大值为1000。不填默认为10，表示查询 top10 的数据。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取筛选数据时使用的过滤条件，取值参考 [指标分析筛选条件说明](https://cloud.tencent.com/document/product/1552/98219#1aaf1150-55a4-4b4d-b103-3a8317ac7945) 中针对 L7 访问流量、带宽、请求数的可用筛选项。
如需限定站点或内容标识符，请在 `ZoneIds.N` 参数中另行传入对应的值。
                     * @return Filters 筛选数据时使用的过滤条件，取值参考 [指标分析筛选条件说明](https://cloud.tencent.com/document/product/1552/98219#1aaf1150-55a4-4b4d-b103-3a8317ac7945) 中针对 L7 访问流量、带宽、请求数的可用筛选项。
如需限定站点或内容标识符，请在 `ZoneIds.N` 参数中另行传入对应的值。
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置筛选数据时使用的过滤条件，取值参考 [指标分析筛选条件说明](https://cloud.tencent.com/document/product/1552/98219#1aaf1150-55a4-4b4d-b103-3a8317ac7945) 中针对 L7 访问流量、带宽、请求数的可用筛选项。
如需限定站点或内容标识符，请在 `ZoneIds.N` 参数中另行传入对应的值。
                     * @param _filters 筛选数据时使用的过滤条件，取值参考 [指标分析筛选条件说明](https://cloud.tencent.com/document/product/1552/98219#1aaf1150-55a4-4b4d-b103-3a8317ac7945) 中针对 L7 访问流量、带宽、请求数的可用筛选项。
如需限定站点或内容标识符，请在 `ZoneIds.N` 参数中另行传入对应的值。
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
                     * 获取查询时间粒度，该参数无效，待废弃。
                     * @return Interval 查询时间粒度，该参数无效，待废弃。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，该参数无效，待废弃。
                     * @param _interval 查询时间粒度，该参数无效，待废弃。
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
                     * 获取数据归属地区。该参数已废弃。请在 `Filters.country` 中按客户端地域过滤数据。
                     * @return Area 数据归属地区。该参数已废弃。请在 `Filters.country` 中按客户端地域过滤数据。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据归属地区。该参数已废弃。请在 `Filters.country` 中按客户端地域过滤数据。
                     * @param _area 数据归属地区。该参数已废弃。请在 `Filters.country` 中按客户端地域过滤数据。
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
                     * 结束时间。查询时间范围（`EndTime` - `StartTime`）需小于等于 31 天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询的指标，取值有：
<li> l7Flow_outFlux_country：按国家/地区维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_province：按中国大陆境内省份维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_statusCode：按状态码维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_domain：按域名维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_url：按 URL Path 维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_resourceType：按资源类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_sip：按客户端 IP 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_referers：按 Referer 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_device：按设备类型维度统计 L7 EdgeOne 响应流量指标; </li>
<li> l7Flow_outFlux_ua_browser：按浏览器类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua_os：按操作系统类型维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_outFlux_ua：按 User-Agent 维度统计 L7 EdgeOne 响应流量指标；</li>
<li> l7Flow_request_country：按国家/地区维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_province：按中国大陆境内省份维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_statusCode：按状态码维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_domain：按域名维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_url：按 URL Path 维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_resourceType：按资源类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_sip：按客户端 IP 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_referers：按 Referer 维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_device：按设备类型维度统计 L7 访问请求数指标; </li>
<li> l7Flow_request_ua_browser：按浏览器类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua_os：按操作系统类型维度统计 L7 访问请求数指标；</li>
<li> l7Flow_request_ua：按 User-Agent 维度统计 L7 访问请求数指标。</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 查询前多少个 top 数据，最大值为1000。不填默认为10，表示查询 top10 的数据。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选数据时使用的过滤条件，取值参考 [指标分析筛选条件说明](https://cloud.tencent.com/document/product/1552/98219#1aaf1150-55a4-4b4d-b103-3a8317ac7945) 中针对 L7 访问流量、带宽、请求数的可用筛选项。
如需限定站点或内容标识符，请在 `ZoneIds.N` 参数中另行传入对应的值。
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询时间粒度，该参数无效，待废弃。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 数据归属地区。该参数已废弃。请在 `Filters.country` 中按客户端地域过滤数据。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
