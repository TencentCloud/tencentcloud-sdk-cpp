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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_

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
                * DescribeDDoSAttackData请求参数结构体
                */
                class DescribeDDoSAttackDataRequest : public AbstractModel
                {
                public:
                    DescribeDDoSAttackDataRequest();
                    ~DescribeDDoSAttackDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @return StartTime <p>开始时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @param _startTime <p>开始时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。</p>
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
                     * 获取<p>结束时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 31 天。</p>
                     * @return EndTime <p>结束时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 31 天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 31 天。</p>
                     * @param _endTime <p>结束时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 31 天。</p>
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
                     * 获取<p>统计指标列表，至少填写 1 个，且不允许重复。</p><p>枚举值：</p><ul><li>ddos_attackMaxBandwidth： 攻击带宽峰值，单位 bps；</li><li>ddos_attackMaxPackageRate： 攻击包速率峰值，单位 pps；</li><li>ddos_attackBandwidth： 攻击带宽曲线，单位 bps；</li><li>ddos_attackPackageRate： 攻击包速率曲线，单位 pps。</li></ul>
                     * @return MetricNames <p>统计指标列表，至少填写 1 个，且不允许重复。</p><p>枚举值：</p><ul><li>ddos_attackMaxBandwidth： 攻击带宽峰值，单位 bps；</li><li>ddos_attackMaxPackageRate： 攻击包速率峰值，单位 pps；</li><li>ddos_attackBandwidth： 攻击带宽曲线，单位 bps；</li><li>ddos_attackPackageRate： 攻击包速率曲线，单位 pps。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>统计指标列表，至少填写 1 个，且不允许重复。</p><p>枚举值：</p><ul><li>ddos_attackMaxBandwidth： 攻击带宽峰值，单位 bps；</li><li>ddos_attackMaxPackageRate： 攻击包速率峰值，单位 pps；</li><li>ddos_attackBandwidth： 攻击带宽曲线，单位 bps；</li><li>ddos_attackPackageRate： 攻击包速率曲线，单位 pps。</li></ul>
                     * @param _metricNames <p>统计指标列表，至少填写 1 个，且不允许重复。</p><p>枚举值：</p><ul><li>ddos_attackMaxBandwidth： 攻击带宽峰值，单位 bps；</li><li>ddos_attackMaxPackageRate： 攻击包速率峰值，单位 pps；</li><li>ddos_attackBandwidth： 攻击带宽曲线，单位 bps；</li><li>ddos_attackPackageRate： 攻击包速率曲线，单位 pps。</li></ul>
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
                     * 获取<p>站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：<a href="https://cloud.tencent.com/document/product/1552/104902">【腾讯云 EdgeOne】云 API 变更通知</a>。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 <code>*</code> 代替，查询账号级别数据需具备本接口全部站点资源权限。</p>
                     * @return ZoneIds <p>站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：<a href="https://cloud.tencent.com/document/product/1552/104902">【腾讯云 EdgeOne】云 API 变更通知</a>。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 <code>*</code> 代替，查询账号级别数据需具备本接口全部站点资源权限。</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：<a href="https://cloud.tencent.com/document/product/1552/104902">【腾讯云 EdgeOne】云 API 变更通知</a>。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 <code>*</code> 代替，查询账号级别数据需具备本接口全部站点资源权限。</p>
                     * @param _zoneIds <p>站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：<a href="https://cloud.tencent.com/document/product/1552/104902">【腾讯云 EdgeOne】云 API 变更通知</a>。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 <code>*</code> 代替，查询账号级别数据需具备本接口全部站点资源权限。</p>
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
                     * 获取<p>DDoS 策略组 ID 列表，不填默认选择全部策略 ID。</p>
                     * @return PolicyIds <p>DDoS 策略组 ID 列表，不填默认选择全部策略 ID。</p>
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置<p>DDoS 策略组 ID 列表，不填默认选择全部策略 ID。</p>
                     * @param _policyIds <p>DDoS 策略组 ID 列表，不填默认选择全部策略 ID。</p>
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取<p>查询时间粒度，不填将根据开始时间与结束时间的间隔自动推算粒度，具体为：1 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。</p><p>枚举值：</p><ul><li>min： 1 分钟；</li><li>5min： 5分钟；</li><li>hour： 1小时；</li><li>day： 1天。</li></ul>
                     * @return Interval <p>查询时间粒度，不填将根据开始时间与结束时间的间隔自动推算粒度，具体为：1 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。</p><p>枚举值：</p><ul><li>min： 1 分钟；</li><li>5min： 5分钟；</li><li>hour： 1小时；</li><li>day： 1天。</li></ul>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>查询时间粒度，不填将根据开始时间与结束时间的间隔自动推算粒度，具体为：1 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。</p><p>枚举值：</p><ul><li>min： 1 分钟；</li><li>5min： 5分钟；</li><li>hour： 1小时；</li><li>day： 1天。</li></ul>
                     * @param _interval <p>查询时间粒度，不填将根据开始时间与结束时间的间隔自动推算粒度，具体为：1 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。</p><p>枚举值：</p><ul><li>min： 1 分钟；</li><li>5min： 5分钟；</li><li>hour： 1小时；</li><li>day： 1天。</li></ul>
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
                     * 获取<p>数据归属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据；</li><li>global： 全球数据。</li></ul><p>默认值：global</p>
                     * @return Area <p>数据归属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据；</li><li>global： 全球数据。</li></ul><p>默认值：global</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>数据归属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据；</li><li>global： 全球数据。</li></ul><p>默认值：global</p>
                     * @param _area <p>数据归属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据；</li><li>global： 全球数据。</li></ul><p>默认值：global</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，QueryCondition.Value 的集合数量上限为 20，详细的过滤条件 QueryCondition.Key 值如下：</p><li>ddos-attack-dip：按照 DDoS 攻击目的 IP 进行过滤，QueryCondition.Operator 仅支持 equals。</li>
                     * @return Filters <p>过滤条件，QueryCondition.Value 的集合数量上限为 20，详细的过滤条件 QueryCondition.Key 值如下：</p><li>ddos-attack-dip：按照 DDoS 攻击目的 IP 进行过滤，QueryCondition.Operator 仅支持 equals。</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，QueryCondition.Value 的集合数量上限为 20，详细的过滤条件 QueryCondition.Key 值如下：</p><li>ddos-attack-dip：按照 DDoS 攻击目的 IP 进行过滤，QueryCondition.Operator 仅支持 equals。</li>
                     * @param _filters <p>过滤条件，QueryCondition.Value 的集合数量上限为 20，详细的过滤条件 QueryCondition.Key 值如下：</p><li>ddos-attack-dip：按照 DDoS 攻击目的 IP 进行过滤，QueryCondition.Operator 仅支持 equals。</li>
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
                     * <p>开始时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。时间为世界标准时间（UTC），遵循 ISO 8601 标准的日期和时间格式。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 31 天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>统计指标列表，至少填写 1 个，且不允许重复。</p><p>枚举值：</p><ul><li>ddos_attackMaxBandwidth： 攻击带宽峰值，单位 bps；</li><li>ddos_attackMaxPackageRate： 攻击包速率峰值，单位 pps；</li><li>ddos_attackBandwidth： 攻击带宽曲线，单位 bps；</li><li>ddos_attackPackageRate： 攻击包速率曲线，单位 pps。</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>站点 ID 集合，此参数将于2024年05月30日后由可选改为必填，详见公告：<a href="https://cloud.tencent.com/document/product/1552/104902">【腾讯云 EdgeOne】云 API 变更通知</a>。最多传入 100 个站点 ID。若需查询腾讯云主账号下所有站点数据，请用 <code>*</code> 代替，查询账号级别数据需具备本接口全部站点资源权限。</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>DDoS 策略组 ID 列表，不填默认选择全部策略 ID。</p>
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * <p>查询时间粒度，不填将根据开始时间与结束时间的间隔自动推算粒度，具体为：1 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。</p><p>枚举值：</p><ul><li>min： 1 分钟；</li><li>5min： 5分钟；</li><li>hour： 1小时；</li><li>day： 1天。</li></ul>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>数据归属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据；</li><li>global： 全球数据。</li></ul><p>默认值：global</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>过滤条件，QueryCondition.Value 的集合数量上限为 20，详细的过滤条件 QueryCondition.Key 值如下：</p><li>ddos-attack-dip：按照 DDoS 攻击目的 IP 进行过滤，QueryCondition.Operator 仅支持 equals。</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_
