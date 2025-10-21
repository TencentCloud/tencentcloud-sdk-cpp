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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCORETIMESERIESDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCORETIMESERIESDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 健康得分趋势
                */
                class HealthScoreTimeSeriesData : public AbstractModel
                {
                public:
                    HealthScoreTimeSeriesData();
                    ~HealthScoreTimeSeriesData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平均得分
                     * @return Avg 平均得分
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置平均得分
                     * @param _avg 平均得分
                     * 
                     */
                    void SetAvg(const double& _avg);

                    /**
                     * 判断参数 Avg 是否已赋值
                     * @return Avg 是否已赋值
                     * 
                     */
                    bool AvgHasBeenSet() const;

                    /**
                     * 获取健康状态
1-health
2-warning
3-critical
                     * @return HealthStatus 健康状态
1-health
2-warning
3-critical
                     * 
                     */
                    uint64_t GetHealthStatus() const;

                    /**
                     * 设置健康状态
1-health
2-warning
3-critical
                     * @param _healthStatus 健康状态
1-health
2-warning
3-critical
                     * 
                     */
                    void SetHealthStatus(const uint64_t& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return Metric 指标名称
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名称
                     * @param _metric 指标名称
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取得分序列
                     * @return Series 得分序列
                     * 
                     */
                    std::vector<uint64_t> GetSeries() const;

                    /**
                     * 设置得分序列
                     * @param _series 得分序列
                     * 
                     */
                    void SetSeries(const std::vector<uint64_t>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取时间序列，单位：毫秒数
                     * @return Timestamp 时间序列，单位：毫秒数
                     * 
                     */
                    std::vector<uint64_t> GetTimestamp() const;

                    /**
                     * 设置时间序列，单位：毫秒数
                     * @param _timestamp 时间序列，单位：毫秒数
                     * 
                     */
                    void SetTimestamp(const std::vector<uint64_t>& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * 平均得分
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * 健康状态
1-health
2-warning
3-critical
                     */
                    uint64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 得分序列
                     */
                    std::vector<uint64_t> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * 时间序列，单位：毫秒数
                     */
                    std::vector<uint64_t> m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCORETIMESERIESDATA_H_
