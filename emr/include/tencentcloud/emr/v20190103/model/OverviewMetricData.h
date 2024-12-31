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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWMETRICDATA_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWMETRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MetricTags.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 概览数据
                */
                class OverviewMetricData : public AbstractModel
                {
                public:
                    OverviewMetricData();
                    ~OverviewMetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
                     * @return Metric 指标名
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名
                     * @param _metric 指标名
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
                     * 获取第一个数据时间戳
                     * @return First 第一个数据时间戳
                     * 
                     */
                    int64_t GetFirst() const;

                    /**
                     * 设置第一个数据时间戳
                     * @param _first 第一个数据时间戳
                     * 
                     */
                    void SetFirst(const int64_t& _first);

                    /**
                     * 判断参数 First 是否已赋值
                     * @return First 是否已赋值
                     * 
                     */
                    bool FirstHasBeenSet() const;

                    /**
                     * 获取最后一个数据时间戳
                     * @return Last 最后一个数据时间戳
                     * 
                     */
                    int64_t GetLast() const;

                    /**
                     * 设置最后一个数据时间戳
                     * @param _last 最后一个数据时间戳
                     * 
                     */
                    void SetLast(const int64_t& _last);

                    /**
                     * 判断参数 Last 是否已赋值
                     * @return Last 是否已赋值
                     * 
                     */
                    bool LastHasBeenSet() const;

                    /**
                     * 获取采样点时间间隔
                     * @return Interval 采样点时间间隔
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置采样点时间间隔
                     * @param _interval 采样点时间间隔
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取采样点数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataPoints 采样点数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDataPoints() const;

                    /**
                     * 设置采样点数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataPoints 采样点数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataPoints(const std::vector<std::string>& _dataPoints);

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取指标tags
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 指标tags
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetricTags GetTags() const;

                    /**
                     * 设置指标tags
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 指标tags
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const MetricTags& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 第一个数据时间戳
                     */
                    int64_t m_first;
                    bool m_firstHasBeenSet;

                    /**
                     * 最后一个数据时间戳
                     */
                    int64_t m_last;
                    bool m_lastHasBeenSet;

                    /**
                     * 采样点时间间隔
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 采样点数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * 指标tags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetricTags m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWMETRICDATA_H_
