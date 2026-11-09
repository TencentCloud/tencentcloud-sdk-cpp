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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGFUNCTIONANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGFUNCTIONANALYSISDATAREQUEST_H_

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
                * DescribeTimingFunctionAnalysisData请求参数结构体
                */
                class DescribeTimingFunctionAnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingFunctionAnalysisDataRequest();
                    ~DescribeTimingFunctionAnalysisDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID 集合，至少填入1个站点 ID。</p>
                     * @return ZoneIds <p>站点 ID 集合，至少填入1个站点 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>站点 ID 集合，至少填入1个站点 ID。</p>
                     * @param _zoneIds <p>站点 ID 集合，至少填入1个站点 ID。</p>
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
                     * 获取<p>开始时间。</p>
                     * @return StartTime <p>开始时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间。</p>
                     * @param _startTime <p>开始时间。</p>
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
                     * 获取<p>结束时间。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 7 天。</p>
                     * @return EndTime <p>结束时间。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 7 天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 7 天。</p>
                     * @param _endTime <p>结束时间。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 7 天。</p>
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
                     * 获取<p>指标列表，取值有:</p><li>function_requestCount: 边缘函数请求数，为累计值；</li><li>function_cpuCostTime: 边缘函数执行的平均 CPU 耗时，单位为微秒；</li><li>function_wallClockTime: 边缘函数执行的平均墙上时钟耗时，单位为微秒。</li>
                     * @return MetricNames <p>指标列表，取值有:</p><li>function_requestCount: 边缘函数请求数，为累计值；</li><li>function_cpuCostTime: 边缘函数执行的平均 CPU 耗时，单位为微秒；</li><li>function_wallClockTime: 边缘函数执行的平均墙上时钟耗时，单位为微秒。</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>指标列表，取值有:</p><li>function_requestCount: 边缘函数请求数，为累计值；</li><li>function_cpuCostTime: 边缘函数执行的平均 CPU 耗时，单位为微秒；</li><li>function_wallClockTime: 边缘函数执行的平均墙上时钟耗时，单位为微秒。</li>
                     * @param _metricNames <p>指标列表，取值有:</p><li>function_requestCount: 边缘函数请求数，为累计值；</li><li>function_cpuCostTime: 边缘函数执行的平均 CPU 耗时，单位为微秒；</li><li>function_wallClockTime: 边缘函数执行的平均墙上时钟耗时，单位为微秒。</li>
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
                     * 获取<p>查询时间粒度，取值有：</p><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * @return Interval <p>查询时间粒度，取值有：</p><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>查询时间粒度，取值有：</p><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     * @param _interval <p>查询时间粒度，取值有：</p><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
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
                     * 获取<p>过滤条件，Filters.Value 的集合数量上限为20，详细的过滤条件 Key 值如下：</p><li>domain：按照子域名进行过滤，示例值： www.example.com。</li><li>function-name：按照边缘函数名称进行过滤，示例值： test051301-zone-2r2fdoxxxx-130000000。</li><li>function-result：按照边缘函数执行结果进行过滤。对应 Value 的可选项如下：<br>   success：成功；<br>   fail：失败。</li>
                     * @return Filters <p>过滤条件，Filters.Value 的集合数量上限为20，详细的过滤条件 Key 值如下：</p><li>domain：按照子域名进行过滤，示例值： www.example.com。</li><li>function-name：按照边缘函数名称进行过滤，示例值： test051301-zone-2r2fdoxxxx-130000000。</li><li>function-result：按照边缘函数执行结果进行过滤。对应 Value 的可选项如下：<br>   success：成功；<br>   fail：失败。</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，Filters.Value 的集合数量上限为20，详细的过滤条件 Key 值如下：</p><li>domain：按照子域名进行过滤，示例值： www.example.com。</li><li>function-name：按照边缘函数名称进行过滤，示例值： test051301-zone-2r2fdoxxxx-130000000。</li><li>function-result：按照边缘函数执行结果进行过滤。对应 Value 的可选项如下：<br>   success：成功；<br>   fail：失败。</li>
                     * @param _filters <p>过滤条件，Filters.Value 的集合数量上限为20，详细的过滤条件 Key 值如下：</p><li>domain：按照子域名进行过滤，示例值： www.example.com。</li><li>function-name：按照边缘函数名称进行过滤，示例值： test051301-zone-2r2fdoxxxx-130000000。</li><li>function-result：按照边缘函数执行结果进行过滤。对应 Value 的可选项如下：<br>   success：成功；<br>   fail：失败。</li>
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
                     * 获取<p>数据归属地区，取值有：</p><li>overseas：全球（除中国大陆地区）数据；</li><li>mainland：中国大陆地区数据；</li><li>global：全球数据。</li>不填默认取值为 global。
                     * @return Area <p>数据归属地区，取值有：</p><li>overseas：全球（除中国大陆地区）数据；</li><li>mainland：中国大陆地区数据；</li><li>global：全球数据。</li>不填默认取值为 global。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>数据归属地区，取值有：</p><li>overseas：全球（除中国大陆地区）数据；</li><li>mainland：中国大陆地区数据；</li><li>global：全球数据。</li>不填默认取值为 global。
                     * @param _area <p>数据归属地区，取值有：</p><li>overseas：全球（除中国大陆地区）数据；</li><li>mainland：中国大陆地区数据；</li><li>global：全球数据。</li>不填默认取值为 global。
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
                     * <p>站点 ID 集合，至少填入1个站点 ID。</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>开始时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。查询时间范围（<code>EndTime</code> - <code>StartTime</code>）需小于等于 7 天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指标列表，取值有:</p><li>function_requestCount: 边缘函数请求数，为累计值；</li><li>function_cpuCostTime: 边缘函数执行的平均 CPU 耗时，单位为微秒；</li><li>function_wallClockTime: 边缘函数执行的平均墙上时钟耗时，单位为微秒。</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>查询时间粒度，取值有：</p><li>min: 1分钟；</li><li>5min: 5分钟；</li><li>hour: 1小时；</li><li>day: 1天。</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2 小时范围内以 min 粒度查询，2 天范围内以 5min 粒度查询，7 天范围内以 hour 粒度查询，超过 7 天以 day 粒度查询。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>过滤条件，Filters.Value 的集合数量上限为20，详细的过滤条件 Key 值如下：</p><li>domain：按照子域名进行过滤，示例值： www.example.com。</li><li>function-name：按照边缘函数名称进行过滤，示例值： test051301-zone-2r2fdoxxxx-130000000。</li><li>function-result：按照边缘函数执行结果进行过滤。对应 Value 的可选项如下：<br>   success：成功；<br>   fail：失败。</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>数据归属地区，取值有：</p><li>overseas：全球（除中国大陆地区）数据；</li><li>mainland：中国大陆地区数据；</li><li>global：全球数据。</li>不填默认取值为 global。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGFUNCTIONANALYSISDATAREQUEST_H_
