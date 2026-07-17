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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServiceMonitorData请求参数结构体
                */
                class DescribeInferenceServiceMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeInferenceServiceMonitorDataRequest();
                    ~DescribeInferenceServiceMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>推理服务 ID。最多传入10个推理服务 ID。</p>
                     * @return ServiceIds <p>推理服务 ID。最多传入10个推理服务 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetServiceIds() const;

                    /**
                     * 设置<p>推理服务 ID。最多传入10个推理服务 ID。</p>
                     * @param _serviceIds <p>推理服务 ID。最多传入10个推理服务 ID。</p>
                     * 
                     */
                    void SetServiceIds(const std::vector<std::string>& _serviceIds);

                    /**
                     * 判断参数 ServiceIds 是否已赋值
                     * @return ServiceIds 是否已赋值
                     * 
                     */
                    bool ServiceIdsHasBeenSet() const;

                    /**
                     * 获取<p>指标列表，最多支持 10 个指标。取值有：<li>cpu_usage_average: CPU 平均使用率，单位：%，指标类型：Float；</li><li>cpu_usage_max: CPU 最大使用率，单位：%，指标类型：Float；</li><li>gpu_usage_average: GPU 平均使用率，单位：%，指标类型：Float；</li><li>gpu_usage_max: GPU 最大使用率，单位：%，指标类型：Float；</li><li>instance_num_average: 实例平均数量，单位：个，指标类型：Float；</li><li>instance_num_max: 实例最大数量，单位：个，指标类型：Float；</li><li>gpu_memory_usage_max: 显存最大使用率，单位：%，指标类型：Float；</li><li>memory_usage_average: 内存平均使用率，单位：%，指标类型：Float；</li><li>memory_usage_max: 内存最大使用率，单位：%，指标类型：Float；</li></p>
                     * @return MetricNames <p>指标列表，最多支持 10 个指标。取值有：<li>cpu_usage_average: CPU 平均使用率，单位：%，指标类型：Float；</li><li>cpu_usage_max: CPU 最大使用率，单位：%，指标类型：Float；</li><li>gpu_usage_average: GPU 平均使用率，单位：%，指标类型：Float；</li><li>gpu_usage_max: GPU 最大使用率，单位：%，指标类型：Float；</li><li>instance_num_average: 实例平均数量，单位：个，指标类型：Float；</li><li>instance_num_max: 实例最大数量，单位：个，指标类型：Float；</li><li>gpu_memory_usage_max: 显存最大使用率，单位：%，指标类型：Float；</li><li>memory_usage_average: 内存平均使用率，单位：%，指标类型：Float；</li><li>memory_usage_max: 内存最大使用率，单位：%，指标类型：Float；</li></p>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>指标列表，最多支持 10 个指标。取值有：<li>cpu_usage_average: CPU 平均使用率，单位：%，指标类型：Float；</li><li>cpu_usage_max: CPU 最大使用率，单位：%，指标类型：Float；</li><li>gpu_usage_average: GPU 平均使用率，单位：%，指标类型：Float；</li><li>gpu_usage_max: GPU 最大使用率，单位：%，指标类型：Float；</li><li>instance_num_average: 实例平均数量，单位：个，指标类型：Float；</li><li>instance_num_max: 实例最大数量，单位：个，指标类型：Float；</li><li>gpu_memory_usage_max: 显存最大使用率，单位：%，指标类型：Float；</li><li>memory_usage_average: 内存平均使用率，单位：%，指标类型：Float；</li><li>memory_usage_max: 内存最大使用率，单位：%，指标类型：Float；</li></p>
                     * @param _metricNames <p>指标列表，最多支持 10 个指标。取值有：<li>cpu_usage_average: CPU 平均使用率，单位：%，指标类型：Float；</li><li>cpu_usage_max: CPU 最大使用率，单位：%，指标类型：Float；</li><li>gpu_usage_average: GPU 平均使用率，单位：%，指标类型：Float；</li><li>gpu_usage_max: GPU 最大使用率，单位：%，指标类型：Float；</li><li>instance_num_average: 实例平均数量，单位：个，指标类型：Float；</li><li>instance_num_max: 实例最大数量，单位：个，指标类型：Float；</li><li>gpu_memory_usage_max: 显存最大使用率，单位：%，指标类型：Float；</li><li>memory_usage_average: 内存平均使用率，单位：%，指标类型：Float；</li><li>memory_usage_max: 内存最大使用率，单位：%，指标类型：Float；</li></p>
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
                     * 获取<p>结束时间。查询时间范围（<code>EndTime - StartTime</code>）需小于等于 30 天。</p>
                     * @return EndTime <p>结束时间。查询时间范围（<code>EndTime - StartTime</code>）需小于等于 30 天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。查询时间范围（<code>EndTime - StartTime</code>）需小于等于 30 天。</p>
                     * @param _endTime <p>结束时间。查询时间范围（<code>EndTime - StartTime</code>）需小于等于 30 天。</p>
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
                     * 获取<p>查询时间粒度，取值有：</p><li>min: 1分钟，支持1天范围内的查询；</li><li>5min: 5分钟，支持7天范围内的查询；</li><li>hour: 1小时，支持30天范围内的查询；</li><li>day: 1天，支持30天范围内的查询；</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2小时范围内以 min 粒度查询，2天范围内以 5min 粒度查询，7天范围内以 hour 粒度查询，超过7天以 day 粒度查询。
                     * @return Interval <p>查询时间粒度，取值有：</p><li>min: 1分钟，支持1天范围内的查询；</li><li>5min: 5分钟，支持7天范围内的查询；</li><li>hour: 1小时，支持30天范围内的查询；</li><li>day: 1天，支持30天范围内的查询；</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2小时范围内以 min 粒度查询，2天范围内以 5min 粒度查询，7天范围内以 hour 粒度查询，超过7天以 day 粒度查询。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>查询时间粒度，取值有：</p><li>min: 1分钟，支持1天范围内的查询；</li><li>5min: 5分钟，支持7天范围内的查询；</li><li>hour: 1小时，支持30天范围内的查询；</li><li>day: 1天，支持30天范围内的查询；</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2小时范围内以 min 粒度查询，2天范围内以 5min 粒度查询，7天范围内以 hour 粒度查询，超过7天以 day 粒度查询。
                     * @param _interval <p>查询时间粒度，取值有：</p><li>min: 1分钟，支持1天范围内的查询；</li><li>5min: 5分钟，支持7天范围内的查询；</li><li>hour: 1小时，支持30天范围内的查询；</li><li>day: 1天，支持30天范围内的查询；</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2小时范围内以 min 粒度查询，2天范围内以 5min 粒度查询，7天范围内以 hour 粒度查询，超过7天以 day 粒度查询。
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>推理服务 ID。最多传入10个推理服务 ID。</p>
                     */
                    std::vector<std::string> m_serviceIds;
                    bool m_serviceIdsHasBeenSet;

                    /**
                     * <p>指标列表，最多支持 10 个指标。取值有：<li>cpu_usage_average: CPU 平均使用率，单位：%，指标类型：Float；</li><li>cpu_usage_max: CPU 最大使用率，单位：%，指标类型：Float；</li><li>gpu_usage_average: GPU 平均使用率，单位：%，指标类型：Float；</li><li>gpu_usage_max: GPU 最大使用率，单位：%，指标类型：Float；</li><li>instance_num_average: 实例平均数量，单位：个，指标类型：Float；</li><li>instance_num_max: 实例最大数量，单位：个，指标类型：Float；</li><li>gpu_memory_usage_max: 显存最大使用率，单位：%，指标类型：Float；</li><li>memory_usage_average: 内存平均使用率，单位：%，指标类型：Float；</li><li>memory_usage_max: 内存最大使用率，单位：%，指标类型：Float；</li></p>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>开始时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。查询时间范围（<code>EndTime - StartTime</code>）需小于等于 30 天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>查询时间粒度，取值有：</p><li>min: 1分钟，支持1天范围内的查询；</li><li>5min: 5分钟，支持7天范围内的查询；</li><li>hour: 1小时，支持30天范围内的查询；</li><li>day: 1天，支持30天范围内的查询；</li>不填将根据开始时间跟结束时间的间距自动推算粒度，具体为：2小时范围内以 min 粒度查询，2天范围内以 5min 粒度查询，7天范围内以 hour 粒度查询，超过7天以 day 粒度查询。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATAREQUEST_H_
