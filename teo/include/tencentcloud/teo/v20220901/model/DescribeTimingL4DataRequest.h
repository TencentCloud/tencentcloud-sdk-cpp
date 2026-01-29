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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_

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
                * DescribeTimingL4Data请求参数结构体
                */
                class DescribeTimingL4DataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL4DataRequest();
                    ~DescribeTimingL4DataRequest() = default;
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
                     * 获取查询指标，取值有：
<ul><li>**l4Flow_flux**: 访问总流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inFlux**: 访问入流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_outFlux**: 访问出流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inBandwidth**: 访问入向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_outBandwidth**: 访问出向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_connections**: 访问并发连接数，单位：个，指标值类型：Integer ；</li>
<li>**l4Flow_newConnectionsRate**: 新建连接数速率，单位：个/秒，指标值类型： Float，保留两位小数。</li></ul>**注意**：<ul><li><code> Integer</code> 值类型的指标将从  <code>Data.N.TypeValue</code> 返回对应时序数据；</li>
<li><code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。</li></ul>
                     * @return MetricNames 查询指标，取值有：
<ul><li>**l4Flow_flux**: 访问总流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inFlux**: 访问入流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_outFlux**: 访问出流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inBandwidth**: 访问入向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_outBandwidth**: 访问出向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_connections**: 访问并发连接数，单位：个，指标值类型：Integer ；</li>
<li>**l4Flow_newConnectionsRate**: 新建连接数速率，单位：个/秒，指标值类型： Float，保留两位小数。</li></ul>**注意**：<ul><li><code> Integer</code> 值类型的指标将从  <code>Data.N.TypeValue</code> 返回对应时序数据；</li>
<li><code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置查询指标，取值有：
<ul><li>**l4Flow_flux**: 访问总流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inFlux**: 访问入流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_outFlux**: 访问出流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inBandwidth**: 访问入向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_outBandwidth**: 访问出向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_connections**: 访问并发连接数，单位：个，指标值类型：Integer ；</li>
<li>**l4Flow_newConnectionsRate**: 新建连接数速率，单位：个/秒，指标值类型： Float，保留两位小数。</li></ul>**注意**：<ul><li><code> Integer</code> 值类型的指标将从  <code>Data.N.TypeValue</code> 返回对应时序数据；</li>
<li><code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。</li></ul>
                     * @param _metricNames 查询指标，取值有：
<ul><li>**l4Flow_flux**: 访问总流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inFlux**: 访问入流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_outFlux**: 访问出流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inBandwidth**: 访问入向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_outBandwidth**: 访问出向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_connections**: 访问并发连接数，单位：个，指标值类型：Integer ；</li>
<li>**l4Flow_newConnectionsRate**: 新建连接数速率，单位：个/秒，指标值类型： Float，保留两位小数。</li></ul>**注意**：<ul><li><code> Integer</code> 值类型的指标将从  <code>Data.N.TypeValue</code> 返回对应时序数据；</li>
<li><code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。</li></ul>
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
                     * 获取站点ID，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。
最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * @return ZoneIds 站点ID，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。
最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点ID，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。
最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     * @param _zoneIds 站点ID，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。
最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
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
                     * 获取四层实例列表, 不填表示选择全部实例。
                     * @return ProxyIds 四层实例列表, 不填表示选择全部实例。
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置四层实例列表, 不填表示选择全部实例。
                     * @param _proxyIds 四层实例列表, 不填表示选择全部实例。
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取查询时间粒度，取值有：
<ul><li>**min**: 1分钟 ；</li>
<li>**5min**: 5分钟 ；</li>
<li>**hour**: 1小时 ；</li>
<li>**day**: 1天 。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：1小时范围内以 <code>min</code> 粒度查询，2天范围内以 <code>5min</code> 粒度查询，7天范围内以 <code>hour</code> 粒度查询，超过7天以 <code>day</code> 粒度查询。
                     * @return Interval 查询时间粒度，取值有：
<ul><li>**min**: 1分钟 ；</li>
<li>**5min**: 5分钟 ；</li>
<li>**hour**: 1小时 ；</li>
<li>**day**: 1天 。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：1小时范围内以 <code>min</code> 粒度查询，2天范围内以 <code>5min</code> 粒度查询，7天范围内以 <code>hour</code> 粒度查询，超过7天以 <code>day</code> 粒度查询。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，取值有：
<ul><li>**min**: 1分钟 ；</li>
<li>**5min**: 5分钟 ；</li>
<li>**hour**: 1小时 ；</li>
<li>**day**: 1天 。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：1小时范围内以 <code>min</code> 粒度查询，2天范围内以 <code>5min</code> 粒度查询，7天范围内以 <code>hour</code> 粒度查询，超过7天以 <code>day</code> 粒度查询。
                     * @param _interval 查询时间粒度，取值有：
<ul><li>**min**: 1分钟 ；</li>
<li>**5min**: 5分钟 ；</li>
<li>**hour**: 1小时 ；</li>
<li>**day**: 1天 。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：1小时范围内以 <code>min</code> 粒度查询，2天范围内以 <code>5min</code> 粒度查询，7天范围内以 <code>hour</code> 粒度查询，超过7天以 <code>day</code> 粒度查询。
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
                     * 获取过滤条件，详细的过滤条件Key值如下：
<ul><li>**ruleId**：按照转发规则 ID 进行过滤。</li>
<li>**proxyId**：按照四层代理实例 ID 进行过滤。</li></ul>
                     * @return Filters 过滤条件，详细的过滤条件Key值如下：
<ul><li>**ruleId**：按照转发规则 ID 进行过滤。</li>
<li>**proxyId**：按照四层代理实例 ID 进行过滤。</li></ul>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置过滤条件，详细的过滤条件Key值如下：
<ul><li>**ruleId**：按照转发规则 ID 进行过滤。</li>
<li>**proxyId**：按照四层代理实例 ID 进行过滤。</li></ul>
                     * @param _filters 过滤条件，详细的过滤条件Key值如下：
<ul><li>**ruleId**：按照转发规则 ID 进行过滤。</li>
<li>**proxyId**：按照四层代理实例 ID 进行过滤。</li></ul>
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
                     * 获取数据归属地区。该参数已废弃。请在 Filters.country 中按客户端地域过滤数据。
                     * @return Area 数据归属地区。该参数已废弃。请在 Filters.country 中按客户端地域过滤数据。
                     * @deprecated
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据归属地区。该参数已废弃。请在 Filters.country 中按客户端地域过滤数据。
                     * @param _area 数据归属地区。该参数已废弃。请在 Filters.country 中按客户端地域过滤数据。
                     * @deprecated
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * @deprecated
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
                     * 查询指标，取值有：
<ul><li>**l4Flow_flux**: 访问总流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inFlux**: 访问入流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_outFlux**: 访问出流量，单位：Byte，指标值类型：Integer；</li>
<li>**l4Flow_inBandwidth**: 访问入向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_outBandwidth**: 访问出向带宽峰值，单位：bps，指标值类型：Integer；</li>
<li>**l4Flow_connections**: 访问并发连接数，单位：个，指标值类型：Integer ；</li>
<li>**l4Flow_newConnectionsRate**: 新建连接数速率，单位：个/秒，指标值类型： Float，保留两位小数。</li></ul>**注意**：<ul><li><code> Integer</code> 值类型的指标将从  <code>Data.N.TypeValue</code> 返回对应时序数据；</li>
<li><code>Float</code> 值类型的指标将从 <code>Data.N.FloatTypeValue</code> 返回对应时序数据。</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 站点ID，此参数将于2024年05月30日后由可选改为必填，详见公告：[【腾讯云 EdgeOne】云 API 变更通知](https://cloud.tencent.com/document/product/1552/104902)。
最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 `*` 代替，查询账号级别数据需具备本接口全部站点资源权限。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 四层实例列表, 不填表示选择全部实例。
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * 查询时间粒度，取值有：
<ul><li>**min**: 1分钟 ；</li>
<li>**5min**: 5分钟 ；</li>
<li>**hour**: 1小时 ；</li>
<li>**day**: 1天 。</li></ul>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：1小时范围内以 <code>min</code> 粒度查询，2天范围内以 <code>5min</code> 粒度查询，7天范围内以 <code>hour</code> 粒度查询，超过7天以 <code>day</code> 粒度查询。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 过滤条件，详细的过滤条件Key值如下：
<ul><li>**ruleId**：按照转发规则 ID 进行过滤。</li>
<li>**proxyId**：按照四层代理实例 ID 进行过滤。</li></ul>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 数据归属地区。该参数已废弃。请在 Filters.country 中按客户端地域过滤数据。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
